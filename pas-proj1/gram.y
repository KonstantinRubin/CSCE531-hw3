/****************************************************************/
/*																*/
/*	CSCE531 - "Pascal" and "C" Compilers						*/
/*																*/
/*	--gram.y--													*/
/*																*/
/*																*/
/*	Ibrahim Elsayed												*/
/*  Konstantin Rubin											*/
/*	Maximus Brandel												*/
/****************************************************************/

/*A Bison parser for the programming language Pascal.
  Copyright (C) 1989-2002 Free Software Foundation, Inc.

  Authors: Jukka Virtanen <jtv@hut.fi>
           Helsinki University of Technology
           Computing Centre
           Finland

           Peter Gerwinski <peter@gerwinski.de>
           Essen, Germany

           Bill Cox <bill@cygnus.com> (error recovery rules)

           Frank Heckenbach <frank@pascal.gnu.de>

  This file is part of GNU Pascal.

  GNU Pascal is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published
  by the Free Software Foundation; either version 1, or (at your
  option) any later version.

  GNU Pascal is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with GNU Pascal; see the file COPYING. If not, write to the
  Free Software Foundation, 59 Temple Place - Suite 330, Boston, MA
  02111-1307, USA. */

/* Bison parser for ISO 7185 Pascal originally written on
 * 3 Feb 1987 by Jukka Virtanen <jtv@hut.fi>
 *
 * Modified for use at the University of South Carolina's CSCE 531
 * (Compiler Construction) course (Spring 2005) by Stephen Fenner
 * <fenner@cse.sc.edu>
 * Simplified (Spring 2015) by Stephen Fenner
 *
 * SHIFT/REDUCE CONFLICTS
 *
 * The dangling else will not cause a shift/reduce conflict - it's
 * solved by precedence rules.
 */

%{

#include "tree.h"
#include "encode.h"

/* Cause the `yydebug' variable to be defined.  */
#define YYDEBUG 1

void set_yydebug(int);
void yyerror(const char *);

/* Like YYERROR but do call yyerror */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }
%}

/* Start symbol for the grammar */

%start pascal_program

/* The union representing a semantic stack entry */
%union {
    char        *y_string;
    long         y_int;
    double       y_real;
    ST_ID        y_stid;
    TYPE         y_type;
    PARAM_LIST   y_paramlist;
    INDEX_LIST   y_indexlist;
    PARAM        y_param;
    VAR_ID_LIST  y_varidlist;
}

/* updated token types and non-terminal types */
%token <y_string> LEX_ID

%type <y_string>  new_identifier_1
%type <y_int> sign unsigned_number number constant
%type <y_type> typename type_denoter new_ordinal_type
%type <y_type> subrange_type new_procedural_type ordinal_index_type
%type <y_type> array_type set_type record_type new_structured_type
%type <y_type> functiontype new_pointer_type pointer_domain_type
%type <y_paramlist> optional_procedural_type_formal_parameter_list
%type <y_paramlist> procedural_type_formal_parameter_list
%type <y_paramlist> procedural_type_formal_parameter
%type <y_indexlist> array_index_list
%type <y_stid> identifier new_identifier
%type <y_varidlist> id_list optional_par_id_list

/* Reserved words. */

/* Reserved words in Standard Pascal */
%token LEX_ARRAY LEX_BEGIN LEX_CASE LEX_CONST LEX_DO LEX_DOWNTO LEX_END
%token LEX_FILE LEX_FOR LEX_FUNCTION LEX_GOTO LEX_IF LEX_LABEL LEX_NIL
%token LEX_OF LEX_PACKED LEX_PROCEDURE LEX_PROGRAM LEX_RECORD LEX_REPEAT
%token LEX_SET LEX_THEN LEX_TO LEX_TYPE LEX_UNTIL LEX_VAR LEX_WHILE LEX_WITH
%token LEX_FORWARD

/* The following ones are not tokens used in the parser.
 * However they are used in the same context as some tokens,
 * so assign unique numbers to them.
 */
%token pp_SIN pp_COS pp_EXP pp_LN pp_SQRT pp_ARCTAN rr_POW rr_EXPON
%token r_WRITE r_READ r_INITFDR r_LAZYTRYGET r_LAZYGET r_LAZYUNGET r_POW r_EXPON
%token z_ABS z_ARCTAN z_COS z_EXP z_LN z_SIN z_SQRT z_POW z_EXPON
%token set_card set_isempty set_equal set_le set_less set_in set_clear
%token set_include set_exclude set_include_range set_copy
%token set_intersection set_union set_diff set_symdiff
%token p_DONEFDR gpc_IOCHECK gpc_RUNTIME_ERROR

/* Redefinable identifiers. */

/* Redefinable identifiers in Standard Pascal */
%token <y_string> p_INPUT p_OUTPUT p_REWRITE p_RESET p_PUT p_GET p_WRITE p_READ
%token <y_string> p_WRITELN p_READLN p_PAGE p_NEW p_DISPOSE
%token <y_string> p_ABS p_SQR p_SIN p_COS p_EXP p_LN p_SQRT p_ARCTAN
%token <y_string> p_TRUNC p_ROUND p_PACK p_UNPACK p_ORD p_CHR p_SUCC p_PRED
%token <y_string> p_ODD p_EOF p_EOLN p_MAXINT p_TRUE p_FALSE

/* Additional redefinable identifiers for Borland Pascal */
%token bp_RANDOM bp_RANDOMIZE
%token <y_string> BREAK CONTINUE

/* redefinable keyword extensions */
%token <y_string> RETURN_ RESULT EXIT FAIL
%token p_CLOSE CONJUGATE p_DEFINESIZE
%token <y_string> SIZEOF
%token <y_string> BITSIZEOF
%token ALIGNOF TYPEOF gpc_RETURNADDRESS gpc_FRAMEADDRESS
%token LEX_LABEL_ADDR

/* GPC internal tokens */
%token <y_int> LEX_INTCONST
%token <y_string> LEX_STRCONST
%token <y_real> LEX_REALCONST
%token LEX_RANGE LEX_ELLIPSIS

/* We don't declare precedences for operators etc. We don't need
   them since our rules define precedence implicitly, and too many
   precedences increase the chances of real conflicts going unnoticed. */
%token LEX_ASSIGN
%token '<' '=' '>' LEX_IN LEX_NE LEX_GE LEX_LE
%token '-' '+' LEX_OR LEX_OR_ELSE LEX_CEIL_PLUS LEX_CEIL_MINUS LEX_FLOOR_PLUS LEX_FLOOR_MINUS
%token '/' '*' LEX_DIV LEX_MOD LEX_AND LEX_AND_THEN LEX_SHL LEX_SHR LEX_XOR LEX_CEIL_MULT LEX_CEIL_DIV LEX_FLOOR_MULT LEX_FLOOR_DIV
%token LEX_POW LEX_POWER LEX_IS LEX_AS
%token LEX_NOT

/* Various extra tokens */
%token LEX_EXTERNAL ucsd_STR p_MARK p_RELEASE p_UPDATE p_GETTIMESTAMP p_UNBIND
%token p_EXTEND bp_APPEND p_BIND p_SEEKREAD p_SEEKWRITE p_SEEKUPDATE LEX_SYMDIFF
%token p_ARG p_CARD p_EMPTY p_POSITION p_LASTPOSITION p_LENGTH p_TRIM p_BINDING
%token p_DATE p_TIME LEX_RENAME LEX_IMPORT LEX_USES LEX_QUALIFIED LEX_ONLY

/* Precedence rules */

/* The following precedence declarations are just to avoid the dangling
   else shift-reduce conflict. We use prec_if rather than LEX_IF to
   avoid possible conflicts elsewhere involving LEX_IF going unnoticed. */
%nonassoc prec_if
%nonassoc LEX_ELSE

/* These tokens help avoid S/R conflicts from error recovery rules. */
%nonassoc lower_than_error
%nonassoc error

%%

/* Pascal parser starts here */

pascal_program:
    main_program_declaration '.'
  ;

main_program_declaration:
    program_heading semi any_global_declaration_part statement_part
  ;

program_heading:
    LEX_PROGRAM new_identifier optional_par_id_list
  ;

optional_par_id_list:
    /* empty */		{}
  | '(' id_list ')'  { $$ = $2; }
  ;

id_list:
    new_identifier  { $$ = build_var_id_list(NULL, $1); }
  | id_list ',' new_identifier  { $$ = build_var_id_list($1, $3); }
  ;

typename:
    LEX_ID  { $$ = check_typename(st_enter_id($1)); }
  ;

identifier:
    LEX_ID  { $$ = st_enter_id($1); }
  ;

new_identifier:
    new_identifier_1  { $$ = $1; }
  ;

new_identifier_1: /* default actions for all */
    LEX_ID  { $$ = st_enter_id($1); }
/* Standard Pascal constants */
  | p_MAXINT
  | p_FALSE
  | p_TRUE
/* Standard Pascal I/O */
  | p_INPUT
  | p_OUTPUT
  | p_REWRITE
  | p_RESET
  | p_PUT
  | p_GET
  | p_WRITE
  | p_READ
  | p_WRITELN
  | p_READLN
  | p_PAGE
  | p_EOF
  | p_EOLN
/* Standard Pascal heap handling */
  | p_NEW
  | p_DISPOSE
/* Standard Pascal arithmetic */
  | p_ABS
  | p_SQR
  | p_SIN
  | p_COS
  | p_EXP
  | p_LN
  | p_SQRT
  | p_ARCTAN
  | p_TRUNC
  | p_ROUND
/* Standard Pascal transfer functions */
  | p_PACK
  | p_UNPACK
/* Standard Pascal ordinal functions */
  | p_ORD
  | p_CHR
  | p_SUCC
  | p_PRED
  | p_ODD
/* Other extensions */
  | BREAK
  | CONTINUE
  | RETURN_
  | RESULT
  | EXIT
  | FAIL
  | SIZEOF
  | BITSIZEOF
  ;

any_global_declaration_part:
    /* empty */
  | any_global_declaration_part any_decl
  ;

any_declaration_part:
    /* empty */
  | any_declaration_part any_decl
  ;

any_decl:
    simple_decl
  | function_declaration
  ;

simple_decl:
    constant_definition_part  {/*ignore*/}
  | type_definition_part
  | variable_declaration_part
  ;

/* constant definition part */

constant_definition_part:
    LEX_CONST constant_definition_list
  ;

constant_definition_list:
    constant_definition
  | constant_definition_list constant_definition
  ;

constant_definition:
    new_identifier '=' static_expression semi
  ;

constant: /* number only now */
    identifier {}
  | sign identifier {}
  | number  { $$ = $1; }
  | constant_literal {}
  ;

number:
    sign unsigned_number  { $$ = $1 * $2; }
  | unsigned_number  { $$ = $1; }
  ;

unsigned_number:
    LEX_INTCONST  { $$ = $1; }
  | LEX_REALCONST  { $$ = (long) $1; /* cast as long */}
  ;

sign:
    '+'  { $$ = 1; }
  | '-'  { $$ = -1; }
  ;

constant_literal:
    string
  | predefined_literal
  ;

predefined_literal:
    LEX_NIL
  | p_FALSE
  | p_TRUE
  ;

string:
    LEX_STRCONST
  | string LEX_STRCONST
  ;

type_definition_part:
    LEX_TYPE type_definition_list semi  { resolve_all_ptr(); }
  ;

type_definition_list:
    type_definition
  | type_definition_list semi type_definition
  ;

type_definition:
    new_identifier '=' type_denoter  { create_typename( $1, $3 ); }

type_denoter:
    typename    { $$ = $1; }
  | new_ordinal_type  { $$ = $1; }
  | new_pointer_type  { $$ = $1; }
  | new_procedural_type { $$ = $1; }
  | new_structured_type { $$ = $1; }
  ;

new_ordinal_type: /* default actions to pass TYPE through */
    enumerated_type {}
  | subrange_type  { $$ = $1; }
  ;

enumerated_type:
    '(' enum_list ')'
  ;

enum_list:
    enumerator
  | enum_list ',' enumerator
  ;

enumerator:
    new_identifier
  ;

subrange_type: /* builds subrange TYPE */
    constant LEX_RANGE constant  { $$ = check_subrange($1,$3); }

  ;

new_pointer_type: /* builds pointer TYPE */
    pointer_char pointer_domain_type  { $$ = $2 ; }
  ;

pointer_char:
    '^'
  | '@'
  ;

pointer_domain_type:
    new_identifier      {$$ = build_unresolved_pointer(ty_build_unresolved_ptr($1), NULL);}//{ $$ = ty_build_unresolved_ptr($1); }
  | new_procedural_type  {$$ = build_unresolved_pointer(ty_build_ptr($1), $1);} //{ $$ = ty_build_ptr($1); };
  ;

new_procedural_type: /* builds FUNC TYPE */
    LEX_PROCEDURE optional_procedural_type_formal_parameter_list  { $$ = ty_build_func(ty_build_basic(TYVOID), $2, TRUE); }
  | LEX_FUNCTION optional_procedural_type_formal_parameter_list functiontype  { $$ = ty_build_func($3, $2, TRUE); }
  ;

optional_procedural_type_formal_parameter_list:
    /* empty */  {$$ = NULL;}
  | '(' procedural_type_formal_parameter_list ')'  {$$ = check_param($2);};
  ;

procedural_type_formal_parameter_list:
    procedural_type_formal_parameter  { $$ = $1; }
  | procedural_type_formal_parameter_list semi procedural_type_formal_parameter  { $$ = concatenate_param_list ($1, $3); }
  ;

procedural_type_formal_parameter:
    id_list  {$$=build_param_list($1,ty_build_basic(TYERROR),FALSE);}
  | id_list ':' typename  { $$ = build_param_list($1, $3, FALSE); }
  | LEX_VAR id_list ':' typename  { $$ = build_param_list($2, $4, TRUE); }
  | LEX_VAR id_list  {$$=build_param_list($2,ty_build_basic(TYERROR),TRUE); /*treat as semantic errors*/};

  ;

new_structured_type: /* pass TYPE through */
    array_type  { $$ = $1; }
  | set_type  { $$ = $1; }
  | record_type { $$ = $1; }
  ;

/* Array */

array_type: /* builds array TYPE */
    LEX_ARRAY '[' array_index_list ']' LEX_OF type_denoter  { $$ = check_array($6, $3); }
  ;

array_index_list:
    ordinal_index_type  { $$ = create_list_from_type( $1 ); }
  | array_index_list ',' ordinal_index_type  { $$ = concatenate_index_lists($1, $3); }
  ;


ordinal_index_type: /* default actions to pass TYPE through */
    new_ordinal_type  { $$ = $1; }
  | typename  { $$ = $1; }
  ;


/* sets */
set_type:
    LEX_SET LEX_OF type_denoter {}
  ;

record_type:
    LEX_RECORD record_field_list LEX_END {}
  ;

record_field_list:
    /* empty */
  | fixed_part optional_semicolon
  | fixed_part semi variant_part
  | variant_part
  ;

fixed_part:
    record_section
  | fixed_part semi record_section
  ;

record_section:
    id_list ':' type_denoter
  ;

variant_part:
    LEX_CASE variant_selector LEX_OF variant_list rest_of_variant
  ;

rest_of_variant:
    optional_semicolon
  | case_default '(' record_field_list ')' optional_semicolon
  ;

variant_selector:
    new_identifier ':' variant_type
  | variant_type
  ;

variant_type:
    typename
  | new_ordinal_type
  ;

variant_list:
    variant
  | variant_list semi variant
  ;

variant:
    case_constant_list ':' '(' record_field_list ')'
  ;

case_constant_list:
    one_case_constant
  | case_constant_list ',' one_case_constant
  ;

one_case_constant:
    static_expression
  | static_expression LEX_RANGE static_expression
  ;

/* variable declaration part */
/* We keep track of total size needed in case of local variables by
   using a simple inherited attribute of type int */

variable_declaration_part:
    LEX_VAR variable_declaration_list
  ;

variable_declaration_list:
    variable_declaration
  | variable_declaration_list variable_declaration
  ;

variable_declaration:
    id_list ':' type_denoter semi  { create_gdecl($1, $3); declare_var($1, $3);}
  ;

function_declaration:
    function_heading semi directive_list semi
  | function_heading semi any_declaration_part statement_part semi
  ;

function_heading:
    LEX_PROCEDURE new_identifier optional_par_formal_parameter_list
  | LEX_FUNCTION new_identifier optional_par_formal_parameter_list functiontype
  ;

directive_list:
    directive
  | directive_list semi directive
  ;

directive:
    LEX_FORWARD
  | LEX_EXTERNAL
  ;

functiontype:
    /* empty */	{}
  | ':' typename  { $$ = check_function_type($2); }
  ;

/* parameter specification section */

optional_par_formal_parameter_list:
    /* empty */
  | '(' formal_parameter_list ')'
  ;

formal_parameter_list:
    formal_parameter
  | formal_parameter_list semi formal_parameter
  ;

formal_parameter:
    id_list ':' typename
  | LEX_VAR id_list ':' typename
  ;

/* Pascal statements */

statement_part:
    compound_statement
  ;

compound_statement:
    LEX_BEGIN statement_sequence LEX_END
  ;

statement_sequence:
    statement
  | statement_sequence semi statement
  ;

statement:
    structured_statement
  | simple_statement
  ;

structured_statement:
    compound_statement
  | with_statement
  | conditional_statement
  | repetitive_statement
  ;

with_statement:
    LEX_WITH structured_variable_list LEX_DO statement
  ;

structured_variable_list:
    structured_variable
  | structured_variable_list ',' structured_variable
  ;

structured_variable:
    variable_or_function_access
  ;

conditional_statement:
    if_statement
  | case_statement
  ;

simple_if:
    LEX_IF boolean_expression LEX_THEN statement
  ;

if_statement:
    simple_if LEX_ELSE statement
  | simple_if %prec prec_if
  ;

case_statement:
    LEX_CASE expression LEX_OF case_element_list optional_semicolon_or_else_branch LEX_END
  ;

optional_semicolon_or_else_branch:
    optional_semicolon
  | case_default statement_sequence
  ;

case_element_list:
    case_element
  | case_element_list semi case_element
  ;

case_element:
    case_constant_list ':' statement
  ;

case_default:
    LEX_ELSE
  | semi LEX_ELSE
  ;

repetitive_statement:
    repeat_statement
  | while_statement
  | for_statement
  ;

repeat_statement:
    LEX_REPEAT statement_sequence LEX_UNTIL boolean_expression
  ;

while_statement:
    LEX_WHILE boolean_expression LEX_DO statement
  ;

for_statement:
    LEX_FOR variable_or_function_access LEX_ASSIGN expression for_direction expression LEX_DO statement
  ;

for_direction:
    LEX_TO
  | LEX_DOWNTO
  ;

simple_statement:
    empty_statement
  | assignment_or_call_statement
  | standard_procedure_statement
  | statement_extensions
  ;

empty_statement:
    /* empty */ %prec lower_than_error
  ;

/* function calls */

optional_par_actual_parameter_list:
    /* empty */
  | '(' actual_parameter_list ')'
  ;

actual_parameter_list:
    actual_parameter
  | actual_parameter_list ',' actual_parameter
  ;

actual_parameter:
    expression
  ;

/* ASSIGNMENT and procedure calls */

assignment_or_call_statement:
    variable_or_function_access_maybe_assignment rest_of_statement
  ;

variable_or_function_access_maybe_assignment:
    identifier
  | address_operator variable_or_function_access
  | variable_or_function_access_no_id
  ;

rest_of_statement:
    /* Empty */
  | LEX_ASSIGN expression
  ;

standard_procedure_statement:
    rts_proc_onepar '(' actual_parameter ')'
  | rts_proc_parlist '(' actual_parameter_list ')'
  | p_WRITE optional_par_write_parameter_list
  | p_WRITELN optional_par_write_parameter_list
  | p_READ optional_par_actual_parameter_list
  | p_READLN optional_par_actual_parameter_list
  | p_PAGE optional_par_actual_parameter_list
  | p_DISPOSE '(' actual_parameter ')'
  | p_DISPOSE '(' actual_parameter ',' actual_parameter_list ')'
  ;

optional_par_write_parameter_list:
    /* empty */
  | '(' write_actual_parameter_list ')'
  ;

write_actual_parameter_list:
    write_actual_parameter
  | write_actual_parameter_list ',' write_actual_parameter
  ;

write_actual_parameter:
    actual_parameter
  | actual_parameter ':' expression
  | actual_parameter ':' expression ':' expression
  ;

/* run time system calls with one parameter */
rts_proc_onepar:
    p_PUT
  | p_GET
  | p_MARK
  | p_RELEASE
  | p_CLOSE
  | p_UPDATE
  | p_GETTIMESTAMP
  | p_UNBIND
  ;

rts_proc_parlist:
    p_REWRITE     /* Up to three args */
  | p_RESET       /* Up to three args */
  | p_EXTEND      /* Up to three args */
  | bp_APPEND     /* Up to three args */
  | p_PACK        /* Three args */
  | p_UNPACK      /* Three args */
  | p_BIND        /* Two args */
  | p_SEEKREAD
  | p_SEEKWRITE
  | p_SEEKUPDATE
  | p_DEFINESIZE  /* Two args */
  | LEX_AND           /* Two args */
  | LEX_OR            /* Two args */
  | LEX_NOT           /* One arg */
  | LEX_XOR        /* Two args */
  | LEX_SHL           /* Two args */
  | LEX_SHR           /* Two args */
  ;

statement_extensions:
    return_statement
  | continue_statement
  | break_statement
  ;

return_statement:
    RETURN_
  | RETURN_ expression
  | EXIT
  | FAIL
  ;

break_statement:
    BREAK
  ;

continue_statement:
    CONTINUE
  ;

variable_access_or_typename:
    variable_or_function_access_no_id
  | LEX_ID
  ;

index_expression_list:
    index_expression_item
  | index_expression_list ',' index_expression_item
  ;

index_expression_item:
    expression
  | expression LEX_RANGE expression
  ;

/* expressions */

static_expression:
    expression
  ;

boolean_expression:
    expression
  ;

expression:
    expression relational_operator simple_expression
  | expression LEX_IN simple_expression
  | simple_expression
  ;

simple_expression:
    term
  | simple_expression adding_operator term
  | simple_expression LEX_SYMDIFF term
  | simple_expression LEX_OR term
  | simple_expression LEX_XOR term
  ;

term:
    signed_primary
  | term multiplying_operator signed_primary
  | term LEX_AND signed_primary
  ;

signed_primary:
    primary
  | sign signed_primary
  ;

primary:
    factor
  | primary LEX_POW factor
  | primary LEX_POWER factor
  | primary LEX_IS typename
  ;

signed_factor:
    factor
  | sign signed_factor
  ;

factor:
    variable_or_function_access
  | constant_literal
  | unsigned_number
  | set_constructor
  | LEX_NOT signed_factor
  | address_operator factor
  ;

address_operator:
    '@'
  ;

variable_or_function_access:
    variable_or_function_access_no_standard_function
  | standard_functions
  ;

variable_or_function_access_no_standard_function:
    identifier
  | variable_or_function_access_no_id
  ;

variable_or_function_access_no_id:
    p_OUTPUT
  | p_INPUT
  | variable_or_function_access '.' new_identifier
  | '(' expression ')'
  | variable_or_function_access pointer_char
  | variable_or_function_access '[' index_expression_list ']'
  | variable_or_function_access_no_standard_function '(' actual_parameter_list ')'
  | p_NEW '(' variable_access_or_typename ')'
  ;

set_constructor:
    '[' ']'
  | '[' set_constructor_element_list ']'
  ;

set_constructor_element_list:
    member_designator
  | set_constructor_element_list ',' member_designator
  ;

member_designator:
    expression
  | expression LEX_RANGE expression
  ;

standard_functions:
    rts_fun_onepar '(' actual_parameter ')'
  | rts_fun_optpar optional_par_actual_parameter
  | rts_fun_parlist '(' actual_parameter_list ')'
  ;

optional_par_actual_parameter:
    /* empty */
  | '(' actual_parameter ')'
  ;

rts_fun_optpar:
    p_EOF
  | p_EOLN
  ;

rts_fun_onepar:
    p_ABS
  | p_SQR
  | p_SIN
  | p_COS
  | p_EXP
  | p_LN
  | p_SQRT
  | p_ARCTAN
  | p_ARG
  | p_TRUNC
  | p_ROUND
  | p_CARD
  | p_ORD
  | p_CHR
  | p_ODD
  | p_EMPTY
  | p_POSITION
  | p_LASTPOSITION
  | p_LENGTH
  | p_TRIM
  | p_BINDING
  | p_DATE
  | p_TIME
  ;

rts_fun_parlist:
    p_SUCC    /* One or two args */
  | p_PRED    /* One or two args */
  ;

relational_operator:
    LEX_NE
  | LEX_LE
  | LEX_GE
  | '='
  | '<'
  | '>'
  ;

multiplying_operator:
    LEX_DIV
  | LEX_MOD
  | '/'
  | '*'
  ;

adding_operator:
    '-'
  | '+'
  ;

semi:
    ';'
  ;

optional_semicolon:
    /* empty */
  | ';'
  ;

%%

void yyerror(const char *msg)
{
    error(msg);
}

/* Sets the value of the 'yydebug' variable to VALUE.
   This is a function so we don't have to have YYDEBUG defined
   in order to build the compiler.  */
void
set_yydebug (int value)
{
#if YYDEBUG != 0
  yydebug = value;
#else
  warning ("YYDEBUG not defined.");
#endif
}
