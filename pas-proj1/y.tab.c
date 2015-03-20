/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 46 "gram.y" /* yacc.c:339  */

#include "types.h"
#include "tree.h"

/* Cause the `yydebug' variable to be defined.  */
#define YYDEBUG 1

void set_yydebug(int);
void yyerror(const char *);

/* Like YYERROR but do call yyerror */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

#line 80 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LEX_ID = 258,
    LEX_ARRAY = 259,
    LEX_BEGIN = 260,
    LEX_CASE = 261,
    LEX_CONST = 262,
    LEX_DO = 263,
    LEX_DOWNTO = 264,
    LEX_END = 265,
    LEX_FILE = 266,
    LEX_FOR = 267,
    LEX_FUNCTION = 268,
    LEX_GOTO = 269,
    LEX_IF = 270,
    LEX_LABEL = 271,
    LEX_NIL = 272,
    LEX_OF = 273,
    LEX_PACKED = 274,
    LEX_PROCEDURE = 275,
    LEX_PROGRAM = 276,
    LEX_RECORD = 277,
    LEX_REPEAT = 278,
    LEX_SET = 279,
    LEX_THEN = 280,
    LEX_TO = 281,
    LEX_TYPE = 282,
    LEX_UNTIL = 283,
    LEX_VAR = 284,
    LEX_WHILE = 285,
    LEX_WITH = 286,
    LEX_FORWARD = 287,
    pp_SIN = 288,
    pp_COS = 289,
    pp_EXP = 290,
    pp_LN = 291,
    pp_SQRT = 292,
    pp_ARCTAN = 293,
    rr_POW = 294,
    rr_EXPON = 295,
    r_WRITE = 296,
    r_READ = 297,
    r_INITFDR = 298,
    r_LAZYTRYGET = 299,
    r_LAZYGET = 300,
    r_LAZYUNGET = 301,
    r_POW = 302,
    r_EXPON = 303,
    z_ABS = 304,
    z_ARCTAN = 305,
    z_COS = 306,
    z_EXP = 307,
    z_LN = 308,
    z_SIN = 309,
    z_SQRT = 310,
    z_POW = 311,
    z_EXPON = 312,
    set_card = 313,
    set_isempty = 314,
    set_equal = 315,
    set_le = 316,
    set_less = 317,
    set_in = 318,
    set_clear = 319,
    set_include = 320,
    set_exclude = 321,
    set_include_range = 322,
    set_copy = 323,
    set_intersection = 324,
    set_union = 325,
    set_diff = 326,
    set_symdiff = 327,
    p_DONEFDR = 328,
    gpc_IOCHECK = 329,
    gpc_RUNTIME_ERROR = 330,
    p_INPUT = 331,
    p_OUTPUT = 332,
    p_REWRITE = 333,
    p_RESET = 334,
    p_PUT = 335,
    p_GET = 336,
    p_WRITE = 337,
    p_READ = 338,
    p_WRITELN = 339,
    p_READLN = 340,
    p_PAGE = 341,
    p_NEW = 342,
    p_DISPOSE = 343,
    p_ABS = 344,
    p_SQR = 345,
    p_SIN = 346,
    p_COS = 347,
    p_EXP = 348,
    p_LN = 349,
    p_SQRT = 350,
    p_ARCTAN = 351,
    p_TRUNC = 352,
    p_ROUND = 353,
    p_PACK = 354,
    p_UNPACK = 355,
    p_ORD = 356,
    p_CHR = 357,
    p_SUCC = 358,
    p_PRED = 359,
    p_ODD = 360,
    p_EOF = 361,
    p_EOLN = 362,
    p_MAXINT = 363,
    p_TRUE = 364,
    p_FALSE = 365,
    bp_RANDOM = 366,
    bp_RANDOMIZE = 367,
    BREAK = 368,
    CONTINUE = 369,
    RETURN_ = 370,
    RESULT = 371,
    EXIT = 372,
    FAIL = 373,
    p_CLOSE = 374,
    CONJUGATE = 375,
    p_DEFINESIZE = 376,
    SIZEOF = 377,
    BITSIZEOF = 378,
    ALIGNOF = 379,
    TYPEOF = 380,
    gpc_RETURNADDRESS = 381,
    gpc_FRAMEADDRESS = 382,
    LEX_LABEL_ADDR = 383,
    LEX_INTCONST = 384,
    LEX_STRCONST = 385,
    LEX_REALCONST = 386,
    LEX_RANGE = 387,
    LEX_ELLIPSIS = 388,
    LEX_ASSIGN = 389,
    LEX_IN = 390,
    LEX_NE = 391,
    LEX_GE = 392,
    LEX_LE = 393,
    LEX_OR = 394,
    LEX_OR_ELSE = 395,
    LEX_CEIL_PLUS = 396,
    LEX_CEIL_MINUS = 397,
    LEX_FLOOR_PLUS = 398,
    LEX_FLOOR_MINUS = 399,
    LEX_DIV = 400,
    LEX_MOD = 401,
    LEX_AND = 402,
    LEX_AND_THEN = 403,
    LEX_SHL = 404,
    LEX_SHR = 405,
    LEX_XOR = 406,
    LEX_CEIL_MULT = 407,
    LEX_CEIL_DIV = 408,
    LEX_FLOOR_MULT = 409,
    LEX_FLOOR_DIV = 410,
    LEX_POW = 411,
    LEX_POWER = 412,
    LEX_IS = 413,
    LEX_AS = 414,
    LEX_NOT = 415,
    LEX_EXTERNAL = 416,
    ucsd_STR = 417,
    p_MARK = 418,
    p_RELEASE = 419,
    p_UPDATE = 420,
    p_GETTIMESTAMP = 421,
    p_UNBIND = 422,
    p_EXTEND = 423,
    bp_APPEND = 424,
    p_BIND = 425,
    p_SEEKREAD = 426,
    p_SEEKWRITE = 427,
    p_SEEKUPDATE = 428,
    LEX_SYMDIFF = 429,
    p_ARG = 430,
    p_CARD = 431,
    p_EMPTY = 432,
    p_POSITION = 433,
    p_LASTPOSITION = 434,
    p_LENGTH = 435,
    p_TRIM = 436,
    p_BINDING = 437,
    p_DATE = 438,
    p_TIME = 439,
    LEX_RENAME = 440,
    LEX_IMPORT = 441,
    LEX_USES = 442,
    LEX_QUALIFIED = 443,
    LEX_ONLY = 444,
    prec_if = 445,
    LEX_ELSE = 446,
    lower_than_error = 447
  };
#endif
/* Tokens.  */
#define LEX_ID 258
#define LEX_ARRAY 259
#define LEX_BEGIN 260
#define LEX_CASE 261
#define LEX_CONST 262
#define LEX_DO 263
#define LEX_DOWNTO 264
#define LEX_END 265
#define LEX_FILE 266
#define LEX_FOR 267
#define LEX_FUNCTION 268
#define LEX_GOTO 269
#define LEX_IF 270
#define LEX_LABEL 271
#define LEX_NIL 272
#define LEX_OF 273
#define LEX_PACKED 274
#define LEX_PROCEDURE 275
#define LEX_PROGRAM 276
#define LEX_RECORD 277
#define LEX_REPEAT 278
#define LEX_SET 279
#define LEX_THEN 280
#define LEX_TO 281
#define LEX_TYPE 282
#define LEX_UNTIL 283
#define LEX_VAR 284
#define LEX_WHILE 285
#define LEX_WITH 286
#define LEX_FORWARD 287
#define pp_SIN 288
#define pp_COS 289
#define pp_EXP 290
#define pp_LN 291
#define pp_SQRT 292
#define pp_ARCTAN 293
#define rr_POW 294
#define rr_EXPON 295
#define r_WRITE 296
#define r_READ 297
#define r_INITFDR 298
#define r_LAZYTRYGET 299
#define r_LAZYGET 300
#define r_LAZYUNGET 301
#define r_POW 302
#define r_EXPON 303
#define z_ABS 304
#define z_ARCTAN 305
#define z_COS 306
#define z_EXP 307
#define z_LN 308
#define z_SIN 309
#define z_SQRT 310
#define z_POW 311
#define z_EXPON 312
#define set_card 313
#define set_isempty 314
#define set_equal 315
#define set_le 316
#define set_less 317
#define set_in 318
#define set_clear 319
#define set_include 320
#define set_exclude 321
#define set_include_range 322
#define set_copy 323
#define set_intersection 324
#define set_union 325
#define set_diff 326
#define set_symdiff 327
#define p_DONEFDR 328
#define gpc_IOCHECK 329
#define gpc_RUNTIME_ERROR 330
#define p_INPUT 331
#define p_OUTPUT 332
#define p_REWRITE 333
#define p_RESET 334
#define p_PUT 335
#define p_GET 336
#define p_WRITE 337
#define p_READ 338
#define p_WRITELN 339
#define p_READLN 340
#define p_PAGE 341
#define p_NEW 342
#define p_DISPOSE 343
#define p_ABS 344
#define p_SQR 345
#define p_SIN 346
#define p_COS 347
#define p_EXP 348
#define p_LN 349
#define p_SQRT 350
#define p_ARCTAN 351
#define p_TRUNC 352
#define p_ROUND 353
#define p_PACK 354
#define p_UNPACK 355
#define p_ORD 356
#define p_CHR 357
#define p_SUCC 358
#define p_PRED 359
#define p_ODD 360
#define p_EOF 361
#define p_EOLN 362
#define p_MAXINT 363
#define p_TRUE 364
#define p_FALSE 365
#define bp_RANDOM 366
#define bp_RANDOMIZE 367
#define BREAK 368
#define CONTINUE 369
#define RETURN_ 370
#define RESULT 371
#define EXIT 372
#define FAIL 373
#define p_CLOSE 374
#define CONJUGATE 375
#define p_DEFINESIZE 376
#define SIZEOF 377
#define BITSIZEOF 378
#define ALIGNOF 379
#define TYPEOF 380
#define gpc_RETURNADDRESS 381
#define gpc_FRAMEADDRESS 382
#define LEX_LABEL_ADDR 383
#define LEX_INTCONST 384
#define LEX_STRCONST 385
#define LEX_REALCONST 386
#define LEX_RANGE 387
#define LEX_ELLIPSIS 388
#define LEX_ASSIGN 389
#define LEX_IN 390
#define LEX_NE 391
#define LEX_GE 392
#define LEX_LE 393
#define LEX_OR 394
#define LEX_OR_ELSE 395
#define LEX_CEIL_PLUS 396
#define LEX_CEIL_MINUS 397
#define LEX_FLOOR_PLUS 398
#define LEX_FLOOR_MINUS 399
#define LEX_DIV 400
#define LEX_MOD 401
#define LEX_AND 402
#define LEX_AND_THEN 403
#define LEX_SHL 404
#define LEX_SHR 405
#define LEX_XOR 406
#define LEX_CEIL_MULT 407
#define LEX_CEIL_DIV 408
#define LEX_FLOOR_MULT 409
#define LEX_FLOOR_DIV 410
#define LEX_POW 411
#define LEX_POWER 412
#define LEX_IS 413
#define LEX_AS 414
#define LEX_NOT 415
#define LEX_EXTERNAL 416
#define ucsd_STR 417
#define p_MARK 418
#define p_RELEASE 419
#define p_UPDATE 420
#define p_GETTIMESTAMP 421
#define p_UNBIND 422
#define p_EXTEND 423
#define bp_APPEND 424
#define p_BIND 425
#define p_SEEKREAD 426
#define p_SEEKWRITE 427
#define p_SEEKUPDATE 428
#define LEX_SYMDIFF 429
#define p_ARG 430
#define p_CARD 431
#define p_EMPTY 432
#define p_POSITION 433
#define p_LASTPOSITION 434
#define p_LENGTH 435
#define p_TRIM 436
#define p_BINDING 437
#define p_DATE 438
#define p_TIME 439
#define LEX_RENAME 440
#define LEX_IMPORT 441
#define LEX_USES 442
#define LEX_QUALIFIED 443
#define LEX_ONLY 444
#define prec_if 445
#define LEX_ELSE 446
#define lower_than_error 447

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 65 "gram.y" /* yacc.c:355  */

    char  *y_string;
    long   y_int;
    double y_real;
    TYPE  y_type;
    PARAM_LIST y_paralist;
    INDEX_LIST y_indexlist;
    ID_LIST y_idlist;

#line 514 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 529 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  210
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  169
/* YYNRULES -- Number of rules.  */
#define YYNRULES  430
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  695

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   447

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     201,   202,   151,   143,   203,   142,   200,   150,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   206,   209,
     135,   136,   137,     2,   205,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   207,     2,   208,   204,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     138,   139,   140,   141,   144,   145,   146,   147,   148,   149,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   170,   174,   175,   179,   183,   187,   192,
     194,   199,   204,   210,   214,   218,   222,   224,   225,   226,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   242,   243,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   256,   257,   259,   260,   261,
     262,   263,   265,   266,   267,   268,   269,   270,   271,   272,
     276,   279,   281,   285,   286,   289,   291,   295,   296,   300,
     301,   302,   303,   309,   313,   314,   319,   320,   326,   330,
     331,   335,   340,   341,   342,   343,   347,   348,   352,   354,
     358,   359,   363,   364,   368,   369,   370,   374,   378,   379,
     383,   389,   390,   394,   402,   406,   410,   411,   412,   413,
     417,   418,   422,   426,   427,   431,   436,   442,   448,   449,
     453,   458,   464,   468,   475,   478,   484,   488,   494,   498,
     502,   506,   512,   513,   517,   518,   519,   520,   525,   531,
     535,   541,   542,   549,   552,   554,   560,   564,   567,   569,
     570,   571,   575,   576,   580,   584,   588,   589,   593,   594,
     598,   599,   603,   604,   608,   612,   613,   617,   618,   624,
     628,   629,   633,   640,   641,   645,   646,   650,   651,   655,
     656,   659,   661,   668,   670,   674,   675,   679,   680,   681,
     682,   683,   687,   688,   692,   693,   697,   698,   699,   703,
     707,   711,   715,   716,   720,   724,   728,   732,   733,   737,
     738,   742,   743,   747,   748,   749,   750,   754,   758,   759,
     763,   767,   768,   772,   776,   777,   781,   785,   786,   790,
     791,   795,   799,   800,   804,   805,   806,   810,   814,   818,
     822,   823,   827,   828,   829,   830,   831,   835,   839,   844,
     846,   850,   851,   855,   861,   865,   866,   867,   870,   872,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
     888,   890,   894,   895,   899,   900,   901,   906,   907,   908,
     909,   910,   911,   912,   913,   917,   918,   919,   920,   921,
     922,   923,   924,   925,   926,   927,   928,   929,   930,   931,
     932,   933,   937,   938,   939,   943,   944,   945,   946,   950,
     954,   958,   959,   963,   964,   968,   969,   975,   979,   983,
     984,   985,   989,   990,   991,   992,   993,   997,   998,   999,
    1003,  1004,  1008,  1009,  1010,  1011,  1015,  1016,  1020,  1021,
    1022,  1023,  1024,  1025,  1029,  1033,  1034,  1038,  1039,  1043,
    1044,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1059,
    1060,  1064,  1065,  1069,  1070,  1074,  1075,  1076,  1079,  1081,
    1085,  1086,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1116,  1117,  1121,  1122,  1123,
    1124,  1125,  1126,  1130,  1131,  1132,  1133,  1137,  1138,  1142,
    1145,  1147,  1150,  1152,  1156,  1157,  1161,  1162,  1166,  1167,
    1171,  1174,  1176,  1179,  1181,  1182,  1185,  1187,  1191,  1192,
    1196
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LEX_ID", "LEX_ARRAY", "LEX_BEGIN",
  "LEX_CASE", "LEX_CONST", "LEX_DO", "LEX_DOWNTO", "LEX_END", "LEX_FILE",
  "LEX_FOR", "LEX_FUNCTION", "LEX_GOTO", "LEX_IF", "LEX_LABEL", "LEX_NIL",
  "LEX_OF", "LEX_PACKED", "LEX_PROCEDURE", "LEX_PROGRAM", "LEX_RECORD",
  "LEX_REPEAT", "LEX_SET", "LEX_THEN", "LEX_TO", "LEX_TYPE", "LEX_UNTIL",
  "LEX_VAR", "LEX_WHILE", "LEX_WITH", "LEX_FORWARD", "pp_SIN", "pp_COS",
  "pp_EXP", "pp_LN", "pp_SQRT", "pp_ARCTAN", "rr_POW", "rr_EXPON",
  "r_WRITE", "r_READ", "r_INITFDR", "r_LAZYTRYGET", "r_LAZYGET",
  "r_LAZYUNGET", "r_POW", "r_EXPON", "z_ABS", "z_ARCTAN", "z_COS", "z_EXP",
  "z_LN", "z_SIN", "z_SQRT", "z_POW", "z_EXPON", "set_card", "set_isempty",
  "set_equal", "set_le", "set_less", "set_in", "set_clear", "set_include",
  "set_exclude", "set_include_range", "set_copy", "set_intersection",
  "set_union", "set_diff", "set_symdiff", "p_DONEFDR", "gpc_IOCHECK",
  "gpc_RUNTIME_ERROR", "p_INPUT", "p_OUTPUT", "p_REWRITE", "p_RESET",
  "p_PUT", "p_GET", "p_WRITE", "p_READ", "p_WRITELN", "p_READLN", "p_PAGE",
  "p_NEW", "p_DISPOSE", "p_ABS", "p_SQR", "p_SIN", "p_COS", "p_EXP",
  "p_LN", "p_SQRT", "p_ARCTAN", "p_TRUNC", "p_ROUND", "p_PACK", "p_UNPACK",
  "p_ORD", "p_CHR", "p_SUCC", "p_PRED", "p_ODD", "p_EOF", "p_EOLN",
  "p_MAXINT", "p_TRUE", "p_FALSE", "bp_RANDOM", "bp_RANDOMIZE", "BREAK",
  "CONTINUE", "RETURN_", "RESULT", "EXIT", "FAIL", "p_CLOSE", "CONJUGATE",
  "p_DEFINESIZE", "SIZEOF", "BITSIZEOF", "ALIGNOF", "TYPEOF",
  "gpc_RETURNADDRESS", "gpc_FRAMEADDRESS", "LEX_LABEL_ADDR",
  "LEX_INTCONST", "LEX_STRCONST", "LEX_REALCONST", "LEX_RANGE",
  "LEX_ELLIPSIS", "LEX_ASSIGN", "'<'", "'='", "'>'", "LEX_IN", "LEX_NE",
  "LEX_GE", "LEX_LE", "'-'", "'+'", "LEX_OR", "LEX_OR_ELSE",
  "LEX_CEIL_PLUS", "LEX_CEIL_MINUS", "LEX_FLOOR_PLUS", "LEX_FLOOR_MINUS",
  "'/'", "'*'", "LEX_DIV", "LEX_MOD", "LEX_AND", "LEX_AND_THEN", "LEX_SHL",
  "LEX_SHR", "LEX_XOR", "LEX_CEIL_MULT", "LEX_CEIL_DIV", "LEX_FLOOR_MULT",
  "LEX_FLOOR_DIV", "LEX_POW", "LEX_POWER", "LEX_IS", "LEX_AS", "LEX_NOT",
  "LEX_EXTERNAL", "ucsd_STR", "p_MARK", "p_RELEASE", "p_UPDATE",
  "p_GETTIMESTAMP", "p_UNBIND", "p_EXTEND", "bp_APPEND", "p_BIND",
  "p_SEEKREAD", "p_SEEKWRITE", "p_SEEKUPDATE", "LEX_SYMDIFF", "p_ARG",
  "p_CARD", "p_EMPTY", "p_POSITION", "p_LASTPOSITION", "p_LENGTH",
  "p_TRIM", "p_BINDING", "p_DATE", "p_TIME", "LEX_RENAME", "LEX_IMPORT",
  "LEX_USES", "LEX_QUALIFIED", "LEX_ONLY", "prec_if", "LEX_ELSE",
  "lower_than_error", "'.'", "'('", "')'", "','", "'^'", "'@'", "':'",
  "'['", "']'", "';'", "$accept", "pascal_program",
  "program_component_list", "program_component",
  "main_program_declaration", "program_heading", "optional_par_id_list",
  "id_list", "typename", "identifier", "new_identifier",
  "new_identifier_multiple", "import_or_any_declaration_part",
  "any_declaration_import_part", "any_or_import_decl",
  "any_declaration_part", "any_decl", "simple_decl",
  "label_declaration_part", "label_list", "label",
  "constant_definition_part", "constant_definition_list",
  "constant_definition", "constant", "number", "unsigned_number", "sign",
  "constant_literal", "predefined_literal", "combined_string", "string",
  "type_definition_part", "type_definition_list", "type_definition",
  "type_denoter", "type_denoter_multiple", "ordinal_type",
  "enumerated_type", "enum_list", "enumerator", "subrange_type",
  "pointer_type", "pointer_char", "pointer_domain_type",
  "new_procedural_type", "optional_procedural_type_formal_parameter_list",
  "procedural_type_formal_parameter_list",
  "procedural_type_formal_parameter", "structured_type",
  "unpacked_structured_type", "array_type", "array_index_list",
  "ordinal_index_type", "file_type", "direct_access_index_type",
  "set_type", "record_type", "record_field_list", "fixed_part",
  "record_section", "variant_part", "rest_of_variant", "variant_selector",
  "variant_type", "variant_list", "variant", "case_constant_list",
  "one_case_constant", "variable_declaration_part",
  "variable_declaration_list", "variable_declaration",
  "function_declaration", "function_heading", "directive_list",
  "directive", "functiontype", "optional_par_formal_parameter_list",
  "formal_parameter_list", "formal_parameter", "parameter_form",
  "conformant_array_schema", "typename_or_conformant_array_schema",
  "packed_conformant_array_schema", "unpacked_conformant_array_schema",
  "index_type_specification", "index_type_specification_list",
  "open_array", "statement_part", "compound_statement",
  "statement_sequence", "statement", "unlabelled_statement",
  "structured_statement", "with_statement", "structured_variable_list",
  "structured_variable", "conditional_statement", "simple_if",
  "if_statement", "case_statement", "optional_semicolon_or_else_branch",
  "case_element_list", "case_element", "case_default",
  "repetitive_statement", "repeat_statement", "while_statement",
  "for_statement", "for_direction", "simple_statement", "empty_statement",
  "goto_statement", "optional_par_actual_parameter_list",
  "actual_parameter_list", "actual_parameter",
  "assignment_or_call_statement",
  "variable_or_function_access_maybe_assignment", "rest_of_statement",
  "standard_procedure_statement", "optional_par_write_parameter_list",
  "write_actual_parameter_list", "write_actual_parameter",
  "rts_proc_onepar", "rts_proc_parlist", "statement_extensions",
  "return_statement", "break_statement", "continue_statement",
  "variable_access_or_typename", "index_expression_list",
  "index_expression_item", "static_expression", "boolean_expression",
  "expression", "simple_expression", "term", "signed_primary", "primary",
  "signed_factor", "factor", "address_operator",
  "variable_or_function_access", "variable_or_function_access_no_as",
  "variable_or_function_access_no_standard_function",
  "variable_or_function_access_no_id", "set_constructor",
  "set_constructor_element_list", "member_designator",
  "standard_functions", "optional_par_actual_parameter", "rts_fun_optpar",
  "rts_fun_onepar", "rts_fun_parlist", "relational_operator",
  "multiplying_operator", "adding_operator", "semi", "optional_semicolon",
  "optional_rename", "import_part", "import_specification_list",
  "uses_list", "import_specification", "optional_access_qualifier",
  "optional_import_qualifier", "optional_unit_filename",
  "import_clause_list", "import_clause", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,    60,    61,    62,   390,   391,
     392,   393,    45,    43,   394,   395,   396,   397,   398,   399,
      47,    42,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
      46,    40,    41,    44,    94,    64,    58,    91,    93,    59
};
# endif

#define YYPACT_NINF -592

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-592)))

#define YYTABLE_NINF -412

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      36,  1844,    76,    36,  -592,  -116,   -58,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,   -33,  -592,  -592,  -592,  -592,  -592,  -592,  1844,  -592,
     144,    83,    40,  -592,  1058,  -592,  -592,  1844,  1844,  1628,
    1844,  1844,  1844,  1844,  1844,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,   -58,  -592,  -592,  1844,   -34,   855,  1439,
    1628,   855,  1058,   855,  1439,   -12,     1,     0,    23,    30,
      48,  -148,  -100,   -17,     3,     7,    61,    84,   101,   106,
     120,   134,   164,   167,   170,   172,   175,   177,   184,   195,
     201,   203,   204,   206,   208,     5,    98,   193,   205,   664,
     209,   210,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,   211,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,   855,  -592,    65,  -592,   214,  -592,    11,
    -592,  -592,  -592,  -592,  -592,   212,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,   283,  -592,   221,   222,
    -592,  -592,  -592,  -592,  1439,  -107,   225,   232,   103,  -592,
     233,   242,   244,   310,  1844,  -592,   246,  -147,  -592,   246,
     312,   -58,  -592,  -170,  1844,  -592,   256,   -58,  -592,   -71,
    -592,    -9,  -592,  -592,  -592,  -592,  -592,    61,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,   855,   596,  -592,  -592,   855,  -592,  -592,  -592,
     322,   291,   -56,   368,  -592,   198,  -592,   923,  -107,  -592,
    -592,   -14,  -592,   428,   498,    18,   447,    12,  -592,  -107,
     855,  -592,   855,  -592,  -592,  -592,  -592,  1498,   855,   498,
     855,   422,  1250,  -592,  1058,  1058,   855,  -592,   855,   855,
    -107,   454,  -592,  -592,   855,  -592,  1844,   855,   855,  -592,
     855,   855,   855,  -592,  1736,   261,  1628,  -592,  -592,  1179,
    1844,  1179,  -592,  -592,   -35,  1844,  1844,  -592,  -592,  -592,
     359,   -58,  -592,   855,  -592,  -592,  -592,   480,   -94,  -592,
    -592,  -592,   855,  -592,  -592,  -592,   855,  -592,  -592,  -592,
     855,  -592,  -592,   855,   855,   855,   855,  -592,  -592,  -592,
    -592,   855,   855,   923,   923,   454,  -592,   855,  1058,   855,
    1058,  1058,  1439,   273,    55,  -592,   498,    88,  -592,   260,
     279,   280,    95,   130,  -592,  -592,  -592,  -592,  -592,   289,
     290,   289,   290,   290,    84,  -592,  -592,  -592,  -592,   855,
    -592,  -592,  -592,  -592,  -592,   498,   292,   135,  -592,  -592,
     -11,  -592,   491,  -592,   142,   293,   294,   146,   -58,   498,
    1844,   -61,  -592,   -75,  -592,   454,  -592,  -592,   360,   295,
     297,   299,   174,   299,  1902,   483,  1844,  -592,  -592,   366,
    -592,  -592,    31,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    1784,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,   -58,
     305,  1844,   370,  -592,  -592,  -592,   -58,    -9,  -592,   855,
     855,  -592,    22,  -592,   -76,  -592,   378,   -56,   -56,   368,
     368,   368,   368,  -592,  -592,  -592,  -592,  -592,   348,  -592,
    -592,  -592,  -592,  -592,   855,  -592,   855,  -592,   855,  -592,
    -592,   855,  -592,  -592,  -592,   855,  -592,   855,  -592,  -592,
    -592,  -592,  -592,    45,    46,  -592,  1736,  -592,    44,    44,
     493,  2010,   261,  -592,  -592,  1382,    47,   502,   306,  -592,
    -592,  1179,  -592,   156,  -592,    34,  -592,  -592,  -592,  -592,
    -592,  -592,  1844,   324,   178,  -592,   384,  -592,  -592,  -592,
     498,  -592,   855,  1058,  -592,    20,   516,  1058,   732,  -592,
     855,  -592,  -592,   855,   301,  -592,  -592,   188,  -592,   498,
      46,    10,   523,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,    -3,  -592,   320,  1179,  1844,    64,   -72,  -592,
    -592,  -101,   397,   399,  -592,   326,  -592,   518,  -592,  1179,
    -592,  1902,  -592,  -592,  -592,  1844,  -592,   191,  1844,  -592,
    -592,  1844,  -592,  -592,  -592,  -592,   -58,  -592,  -592,  -592,
     215,   855,  -592,  -592,  -592,   454,  1844,   330,    44,   520,
    -592,  -592,    69,   454,  -592,  2010,    44,   855,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  1058,   498,  -592,   410,  -592,
     192,  1844,  -592,  1179,   454,  -592,  -592,  -592,   -76,  -592,
     100,  -592,  1844,   527,  1844,   339,  -592,  -592,  -592,   347,
     732,  -592,   352,   343,   104,  -592,   536,  1902,  -592,  1902,
     454,   357,  -592,  -592,  -592,  -592,   104,   353,   363,  -592,
    -592,   358,  -592,  -592,  -592
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     3,     4,     0,     0,    16,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    31,    32,
      17,    19,    18,    52,    53,    54,    55,    56,    57,    58,
      59,     9,    15,     1,     5,     6,   409,    61,     0,     8,
       0,    60,     0,    11,   247,     7,   205,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    64,    67,    69,    70,
      71,    72,    68,     0,    63,    10,     0,    14,     0,     0,
       0,     0,   247,     0,     0,   352,   351,    22,    23,    24,
      25,   270,   249,   270,   249,   249,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   370,   371,   309,   310,   305,
     307,   308,   281,   295,    76,   297,   296,   300,   301,   299,
     298,     0,   279,   280,   282,   283,   284,   287,   288,   291,
     292,   293,   294,   378,   388,   392,   393,   394,   382,   383,
     384,   385,   386,     0,   344,   349,    77,     0,   213,     0,
     207,   210,   211,   214,   215,   225,   221,   222,   216,   234,
     235,   236,   212,   242,   243,   244,   258,   245,     0,     0,
     246,   302,   304,   303,     0,     0,   345,   347,   350,   348,
     368,     0,     0,     0,    78,    79,   183,     0,    74,   183,
       0,     0,   101,     0,   169,   170,   421,     0,   416,     0,
     418,    65,    12,    14,    94,   352,   351,     0,   372,   373,
     380,   381,   374,   375,   376,   377,   379,   387,   389,   390,
     395,   396,   391,   370,   371,    96,    95,    88,    98,    89,
      91,    90,     0,     0,   349,   340,     0,   339,    93,    92,
      97,     0,   321,   322,   327,   330,   332,     0,   338,   350,
     341,     0,   248,     0,   318,     0,     0,     0,   218,   220,
       0,   262,     0,   264,   263,   265,   266,     0,     0,   306,
       0,     0,   247,   206,   247,   247,     0,   254,     0,     0,
     256,     0,   118,   119,     0,   355,     0,     0,     0,   367,
       0,     0,     0,    80,     0,   181,     0,    73,   175,     0,
     100,     0,   171,   422,   423,   414,     0,   415,   179,   180,
       0,     0,   177,     0,   342,   336,   359,   363,     0,   361,
     331,    99,     0,   401,   400,   402,     0,   397,   399,   398,
       0,   407,   408,     0,     0,     0,     0,   405,   406,   403,
     404,     0,     0,     0,     0,     0,   343,     0,   247,     0,
     247,   247,     0,   274,     0,   272,   253,     0,   251,    14,
       0,   350,     0,     0,   354,   285,   286,   277,   278,   270,
     249,   270,   249,   249,     0,   289,   290,   309,   310,   305,
     307,   308,   209,   208,   224,   259,     0,     0,    13,   346,
       0,   313,   315,   353,     0,     0,     0,     0,     0,   317,
       0,     0,   189,     0,   185,     0,   176,    75,    13,     0,
     144,   124,     0,   124,   148,     0,     0,   104,    82,     0,
      84,    87,     0,    85,   103,   105,   106,   110,   111,   107,
       0,   108,   109,   133,   134,   135,   136,   137,   102,     0,
       0,     0,   426,   417,   419,    66,     0,   173,   337,     0,
       0,   360,     0,   165,   410,   229,   167,   320,   319,   325,
     326,   324,   323,   329,   328,   333,   334,   335,     0,   223,
     237,   238,   217,   219,     0,   271,     0,   250,     0,   358,
     268,     0,   267,   260,   261,     0,   356,     0,   357,   369,
     365,   366,    81,     0,     0,   184,     0,   182,     0,     0,
       0,     0,   181,   132,   122,     0,     0,     0,   410,   152,
     151,     0,   115,     0,   113,     0,    83,    86,   120,   117,
     121,   172,     0,   412,     0,   428,     0,   420,   174,   178,
     364,   362,     0,   247,   232,   409,     0,   247,     0,   227,
       0,   241,   240,     0,   275,   273,   252,     0,   314,   316,
       0,     0,     0,   192,   187,   190,   194,   195,   193,   186,
     142,   141,     0,   139,     0,     0,     0,   128,     0,   126,
     123,    13,    19,    18,   160,     0,   161,     0,   159,     0,
     147,     0,   149,   146,   112,     0,   116,     0,     0,   430,
     424,     0,   427,   166,   231,   226,   228,   233,   230,   168,
       0,     0,   269,   188,   191,     0,     0,     0,     0,     0,
     145,   143,   131,     0,   125,     0,     0,     0,   154,   153,
     150,   114,   425,   413,   429,   247,   276,   204,     0,   202,
       0,     0,   140,     0,     0,   129,   127,   158,   410,   162,
       0,   239,     0,     0,     0,     0,   138,   130,   155,     0,
       0,   156,     0,     0,     0,   203,     0,   148,   163,   148,
       0,     0,   196,   200,   197,   198,     0,     0,     0,   201,
     199,   410,   164,   411,   157
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -592,  -592,  -592,   563,  -592,  -592,  -592,   -43,  -230,   -60,
      -1,  -592,  -592,  -592,  -592,  -592,   239,  -592,  -592,  -592,
     -51,  -592,  -592,   367,    35,  -592,   -55,  -239,    15,  -592,
      26,  -592,  -592,  -592,   254,  -312,  -592,  -289,  -592,  -592,
     -30,  -592,  -592,  -121,  -592,   127,   145,  -592,   -53,  -592,
     147,  -592,  -592,  -492,  -592,  -592,  -592,  -592,  -531,  -592,
     -21,   -15,  -592,  -592,   -49,  -592,   -82,  -589,    37,  -592,
    -592,   376,  -592,  -295,  -592,   128,    72,   387,  -592,    85,
      32,    33,   -80,  -591,  -570,  -572,  -592,  -592,   278,   -52,
     -89,  -253,   317,  -592,  -592,  -592,   250,  -592,  -592,  -592,
    -592,  -592,  -592,    53,   -18,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,   -50,  -285,  -169,  -592,  -592,  -592,  -592,
     -92,   351,   150,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,   137,  -300,   -87,   -86,  -222,  -173,  -192,  -592,   314,
    -207,   -40,   -54,  -592,  -592,   -48,  -592,  -592,   179,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,    -5,  -503,  -592,
    -592,  -592,  -592,   -57,  -592,  -592,  -592,   110,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,    59,   526,   437,   254,
      63,    52,    60,    61,    75,   330,    76,    77,    78,   207,
     167,    79,   204,   205,   439,   440,   255,   256,   257,   258,
     259,   260,    80,   211,   212,   444,   445,   446,   447,   533,
     534,   448,   449,   450,   539,   451,   522,   588,   589,   452,
     453,   454,   582,   583,   455,   520,   456,   457,   527,   528,
     529,   530,   668,   597,   598,   658,   659,   472,   473,    81,
     214,   215,    82,    83,   331,   332,   426,   315,   423,   424,
     574,   575,   683,   576,   577,   649,   650,   578,    65,   168,
     169,   170,   171,   172,   173,   277,   278,   174,   175,   176,
     177,   556,   474,   475,   557,   178,   179,   180,   181,   563,
     182,   183,   184,   283,   377,   378,   185,   186,   297,   187,
     281,   374,   375,   188,   189,   190,   191,   192,   193,   380,
     410,   411,   476,   273,   376,   262,   263,   264,   265,   334,
     266,   267,   268,   196,   197,   269,   270,   338,   339,   199,
     309,   200,   201,   202,   350,   362,   356,   294,   559,   609,
      84,   217,   219,   218,   324,   462,   547,   544,   545
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    57,   261,   275,   165,   274,   276,   274,    66,   459,
     195,   284,   418,   333,   407,    62,   198,   220,   208,   422,
     371,   293,   414,   328,   194,   602,   417,   584,   625,   213,
    -411,   -14,   165,    86,   223,   271,   321,   223,   195,   272,
     279,   403,   404,   289,   198,   335,   369,   428,   660,   408,
     571,   224,   194,   280,   285,   286,   316,     1,   -26,   301,
     366,   224,    56,   166,   340,   572,   203,   206,   166,   209,
     210,   409,   216,   216,   305,  -255,    53,   291,   221,   665,
     442,   660,   442,   684,    55,   222,   351,   352,   353,   166,
      67,   166,   675,  -255,   333,   684,    68,   302,   303,    69,
     304,   282,   354,    70,   685,   -16,   -27,   408,   681,   470,
      71,   373,    72,  -257,   471,   489,   685,   491,   492,   382,
     367,   373,   554,   572,   477,   355,   335,   515,   478,   406,
     634,  -257,   326,   555,    56,   487,   652,    56,    56,   415,
     300,   416,    86,   245,   246,   514,   687,   305,   688,    64,
     305,    56,   301,   245,   246,   671,   485,   486,   305,   329,
     247,   460,   249,   247,   248,   249,   461,   337,    58,   483,
     484,   213,   -16,   247,   248,   249,   250,   251,   429,   305,
     479,   480,   481,   482,   280,   430,   250,   251,   694,   -28,
     302,   303,   505,   304,   -20,   517,   434,   506,   435,  -255,
     628,  -285,   317,   203,   282,   629,   320,   -21,   282,   -29,
     405,   -31,   325,   -30,   327,   372,   567,   626,   412,   603,
      56,   422,  -411,   645,  -286,   552,   419,    56,   553,   581,
     581,  -277,   165,   195,   165,   165,   596,  -257,   195,   381,
     195,   195,    85,    86,   198,   436,   198,   198,    86,  -278,
      86,   570,   194,   599,   194,   194,   419,   495,   496,   438,
     619,   438,   287,  -255,   441,   427,   441,    86,   463,   464,
     633,   421,    86,   631,  -255,   654,    73,    74,    66,   442,
     442,   488,   490,   274,   573,   288,   442,   638,   580,   580,
     497,   498,   442,   166,   166,   594,   442,   500,   501,   284,
     614,  -257,  -372,   552,   -32,   413,   672,  -373,   165,   342,
     165,   165,  -257,   289,   195,   166,   195,   195,   279,   210,
     198,  -380,   198,   198,   216,   216,   467,   373,   194,   566,
     194,   194,   502,   496,   443,  -381,   443,   504,   498,   581,
     573,   666,   285,   286,   508,   498,   442,   596,   511,   498,
     343,   344,   345,   346,   347,   348,   349,   561,   604,   605,
     442,   363,   364,   365,    64,  -374,    67,   166,  -375,   166,
     166,  -376,    68,  -377,   562,    69,  -379,   513,  -387,    70,
     610,   611,   536,   550,   337,  -289,    71,   537,    72,   442,
     622,   498,   661,   642,   611,   647,  -290,   442,   580,   -52,
     663,    56,  -389,   655,  -390,  -395,   594,  -396,   564,  -391,
     295,   -53,   290,   512,   442,   -56,   -57,   296,   516,   412,
     292,   569,   298,   299,   667,   306,   343,   344,   345,   346,
     347,   348,   349,   307,   308,   532,   343,   344,   345,   346,
     347,   348,   349,   310,   682,   311,   312,   314,   319,   538,
     689,   323,   341,   368,   541,   370,   682,   408,   438,   438,
     543,   548,  -312,   441,   441,   438,   419,   425,   616,   558,
     441,   438,   419,   421,   419,   438,   441,   620,   587,   494,
     441,   499,  -311,   343,   344,   345,   346,   347,   348,   349,
     280,   282,   -14,   165,   503,   509,   510,   165,   535,   195,
     521,   531,   518,   195,   519,   198,   542,   621,   546,   198,
     560,   585,   600,   194,   248,   555,   608,   194,   357,   358,
     359,   360,   361,   601,   595,   438,   615,   627,   630,   -96,
     441,   -95,   636,   443,   443,   646,   637,   651,   653,   438,
     443,   543,   662,   632,   441,   674,   443,   676,   677,   680,
     443,   419,   166,   679,   686,   691,   166,   343,   344,   345,
     346,   347,   348,   349,   626,   692,    54,   693,   438,   465,
     606,   313,   612,   441,   458,   641,   438,   540,   524,   523,
     639,   441,   656,   635,   419,   165,   640,   657,   678,   613,
     322,   195,   587,   438,   590,   549,   318,   198,   441,   223,
     443,   579,   623,   624,   532,   194,   690,   643,   466,   402,
     543,   618,   469,   224,   443,   343,   344,   345,   346,   347,
     348,   349,   493,   507,   384,   648,   343,   344,   345,   346,
     347,   348,   349,   343,   344,   345,   346,   347,   348,   349,
     669,   383,   568,   443,   166,   664,   565,   468,     0,   551,
     648,   443,   607,   670,   644,     0,     0,     0,     0,     0,
       0,   673,     0,   648,     0,     0,     0,   223,   443,     0,
       0,     0,   225,   226,     0,     0,     0,     0,     0,     0,
       0,   224,     0,   227,     0,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,     0,     0,   238,   239,   240,
     241,   242,   243,   244,     0,   245,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,   250,   251,
     225,   226,     0,     0,     0,     0,     0,     0,     0,   224,
       0,   227,     0,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   252,     0,   238,   239,   240,   241,   242,
     243,   244,     0,   245,   246,     0,     0,     0,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,   247,   248,   249,     0,   163,     0,     0,
       0,   164,     0,   253,   336,     0,   250,   251,   225,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   252,     0,   238,   239,   240,   241,   242,   243,   244,
       0,   245,   246,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,   223,     0,
       0,   247,   248,   249,     0,   163,     0,     0,     0,   164,
     -54,   253,   224,     0,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,   223,     0,     0,     0,
     617,   225,   226,   163,     0,     0,     0,   164,     0,   253,
     224,     0,   227,     0,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,     0,     0,   238,   239,   240,   241,
     242,   243,   244,     0,   245,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   225,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   252,     0,   238,   239,   240,   241,   242,   243,
     244,     0,   245,   246,     0,     0,     0,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,   247,   248,   249,     0,   163,     0,     0,     0,
     164,    87,   253,    64,    88,     0,     0,     0,     0,     0,
      89,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,    93,    94,
     252,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,     0,     0,     0,   164,     0,
     253,     0,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    40,    41,    42,     0,
       0,   127,   128,   129,    46,   130,   131,   132,     0,   133,
      49,    50,   428,   429,     0,     0,     0,   134,     0,     0,
     430,     0,   431,     0,     0,     0,   224,     0,   432,   433,
       0,   434,   135,   435,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,   137,   138,   139,     0,     0,     0,
       0,     0,     0,     0,     0,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,   223,     0,    64,    88,     0,     0,   163,
       0,     0,    89,   164,    90,    91,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,     0,     0,     0,
      93,    94,     0,     0,     0,     0,     0,     0,   245,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,     0,     0,     0,   225,   226,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   227,   394,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   395,
     396,   238,   239,   240,   241,   242,   243,   244,     0,     0,
       0,     0,     0,   397,   398,   399,     0,   400,   401,   132,
       0,   133,     0,     0,     0,     0,     0,     0,     0,     0,
     436,     0,     0,   302,   303,   591,     0,     0,     0,     0,
       0,     0,     0,     0,   135,     0,     0,     0,     0,   224,
       0,     0,     0,     0,   136,     0,   137,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     0,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   223,     0,     0,     0,     0,     0,     0,     0,
       0,   163,     0,     0,     0,   164,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   592,   593,     0,     0,    43,    44,    45,    46,    47,
      48,   379,     0,     0,    49,    50,     0,     0,     0,     0,
       0,   247,   248,   249,     0,   225,   226,     0,     0,     0,
       0,     0,     0,     0,   250,   251,   227,     0,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     0,     0,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   226,     0,     0,     0,     0,
       0,     0,     0,   436,     0,   227,     0,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,     0,     0,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     7,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     7,
       0,    43,    44,    45,    46,    47,    48,     0,     0,    68,
      49,    50,     0,     0,     0,     0,    70,   134,     0,     0,
       0,     0,     0,     0,     0,   420,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   431,     0,     0,
       0,     0,     0,     0,   433,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     7,     0,    43,
      44,    45,    46,    47,    48,     0,     0,     0,    49,    50,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     0,    43,    44,    45,
      46,    47,    48,     0,     0,     7,    49,    50,   525,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     0,     0,    43,    44,    45,
      46,    47,    48,     0,     0,     0,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     7,     0,    43,    44,    45,    46,    47,
      48,     0,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,     0,    43,    44,    45,    46,    47,    48,     0,
       0,     0,    49,    50
};

static const yytype_int16 yycheck[] =
{
       1,     6,    88,    92,    64,    91,    93,    93,    60,   321,
      64,   103,   312,   252,   299,    58,    64,    74,    69,   314,
       8,    10,   307,    32,    64,   528,   311,   519,    18,    72,
      10,   132,    92,   203,     3,    89,   206,     3,    92,    90,
      94,   294,   295,   129,    92,   252,    28,     3,   637,     3,
       4,    17,    92,   201,   104,   105,   203,    21,   206,   166,
     267,    17,   209,    64,   256,    19,    67,    68,    69,    70,
      71,   301,    73,    74,   195,    10,     0,   163,    83,   651,
     319,   670,   321,   674,   200,    86,   142,   143,   144,    90,
       7,    92,   664,    28,   333,   686,    13,   204,   205,    16,
     207,   201,   158,    20,   674,   206,   206,     3,     4,   203,
      27,   280,    29,    10,   208,   368,   686,   370,   371,   288,
     134,   290,   198,    19,   346,   181,   333,   202,   350,   298,
     202,    28,   203,   209,   209,   365,   628,   209,   209,   308,
     194,   310,   203,   109,   110,   206,   677,   268,   679,     5,
     271,   209,   166,   109,   110,   658,   363,   364,   279,   168,
     129,   196,   131,   129,   130,   131,   201,   253,   201,   361,
     362,   214,   206,   129,   130,   131,   142,   143,     4,   300,
     353,   354,   355,   356,   201,    11,   142,   143,   691,   206,
     204,   205,   203,   207,   206,   425,    22,   208,    24,   134,
     203,   201,   207,   204,   201,   208,   211,   206,   201,   206,
     296,   206,   217,   206,   219,   203,   501,   207,   304,   531,
     209,   516,   202,     8,   201,   203,   312,   209,   206,   518,
     519,   201,   292,   287,   294,   295,   525,   134,   292,   287,
     294,   295,   202,   203,   292,   201,   294,   295,   203,   201,
     203,   206,   292,   206,   294,   295,   342,   202,   203,   319,
     560,   321,   201,   198,   319,   316,   321,   203,   325,   326,
     206,   314,   203,   585,   209,   206,   193,   194,   330,   518,
     519,   367,   369,   369,   514,   201,   525,   599,   518,   519,
     202,   203,   531,   294,   295,   525,   535,   202,   203,   391,
     553,   198,   201,   203,   206,   306,   206,   201,   368,    18,
     370,   371,   209,   399,   368,   316,   370,   371,   372,   320,
     368,   201,   370,   371,   325,   326,   331,   496,   368,   498,
     370,   371,   202,   203,   319,   201,   321,   202,   203,   628,
     570,   653,   392,   393,   202,   203,   585,   636,   202,   203,
     135,   136,   137,   138,   139,   140,   141,     9,   202,   203,
     599,   163,   164,   165,     5,   201,     7,   368,   201,   370,
     371,   201,    13,   201,    26,    16,   201,   420,   201,    20,
     202,   203,   442,   469,   470,   201,    27,   442,    29,   628,
     202,   203,   645,   202,   203,   625,   201,   636,   628,   206,
     208,   209,   201,   633,   201,   201,   636,   201,   494,   201,
     198,   206,   201,   418,   653,   206,   206,   134,   423,   505,
     206,   507,   201,   201,   654,   200,   135,   136,   137,   138,
     139,   140,   141,   201,   201,   436,   135,   136,   137,   138,
     139,   140,   141,   201,   674,   201,   136,   201,   136,   450,
     680,   195,   130,    25,   459,     8,   686,     3,   518,   519,
     461,   466,   202,   518,   519,   525,   552,   206,   557,   474,
     525,   531,   558,   516,   560,   535,   531,   563,   521,   206,
     535,   202,   202,   135,   136,   137,   138,   139,   140,   141,
     201,   201,   132,   553,   202,   202,   202,   557,   132,   553,
     201,    18,   207,   557,   207,   553,   201,   206,   138,   557,
     132,    18,    10,   553,   130,   209,   192,   557,   150,   151,
     152,   153,   154,   528,   525,   585,    10,     4,   208,   132,
     585,   132,   206,   518,   519,   621,    18,   207,    18,   599,
     525,   542,   132,   586,   599,    18,   531,   208,   201,   206,
     535,   637,   553,   201,    18,   202,   557,   135,   136,   137,
     138,   139,   140,   141,   207,   202,     3,   209,   628,   330,
     535,   204,   546,   628,   320,   605,   636,   450,   433,   432,
     601,   636,   635,   588,   670,   645,   601,   636,   670,   552,
     214,   645,   635,   653,   522,   467,   209,   645,   653,     3,
     585,   516,   570,   570,   605,   645,   686,   608,   330,   292,
     611,   558,   132,    17,   599,   135,   136,   137,   138,   139,
     140,   141,   372,   132,   202,   626,   135,   136,   137,   138,
     139,   140,   141,   135,   136,   137,   138,   139,   140,   141,
     658,   290,   505,   628,   645,   650,   496,   333,    -1,   470,
     651,   636,   542,   658,   611,    -1,    -1,    -1,    -1,    -1,
      -1,   662,    -1,   664,    -1,    -1,    -1,     3,   653,    -1,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    87,    -1,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,    -1,   109,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,   142,   143,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   167,    -1,   101,   102,   103,   104,   105,
     106,   107,    -1,   109,   110,    -1,    -1,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,    -1,   201,    -1,    -1,
      -1,   205,    -1,   207,   208,    -1,   142,   143,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   167,    -1,   101,   102,   103,   104,   105,   106,   107,
      -1,   109,   110,    -1,    -1,    -1,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,    -1,    -1,     3,    -1,
      -1,   129,   130,   131,    -1,   201,    -1,    -1,    -1,   205,
     206,   207,    17,    -1,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,    -1,    -1,     3,    -1,    -1,    -1,
     198,    76,    77,   201,    -1,    -1,    -1,   205,    -1,   207,
      17,    -1,    87,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   167,    -1,   101,   102,   103,   104,   105,   106,
     107,    -1,   109,   110,    -1,    -1,    -1,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    -1,   201,    -1,    -1,    -1,
     205,     3,   207,     5,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,
     207,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
      -1,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
     122,   123,     3,     4,    -1,    -1,    -1,   129,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    17,    -1,    19,    20,
      -1,    22,   144,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   167,    -1,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,     3,    -1,     5,     6,    -1,    -1,   201,
      -1,    -1,    12,   205,    14,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,    -1,    -1,   113,   114,   115,    -1,   117,   118,   119,
      -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,   204,   205,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,    -1,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    -1,    -1,    -1,   205,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,    -1,   113,   114,   115,   116,   117,
     118,     3,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,    87,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    87,    -1,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,     3,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,    13,
     122,   123,    -1,    -1,    -1,    -1,    20,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     3,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,   122,   123,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,     3,   122,   123,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,   122,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     3,    -1,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,   122,   123
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    21,   211,   212,   213,   214,   215,     3,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   113,   114,   115,   116,   117,   118,   122,
     123,   220,   221,     0,   213,   200,   209,   367,   201,   216,
     222,   223,   217,   220,     5,   298,   299,     7,    13,    16,
      20,    27,    29,   193,   194,   224,   226,   227,   228,   231,
     242,   279,   282,   283,   370,   202,   203,     3,     6,    12,
      14,    15,    23,    30,    31,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   113,   114,   115,
     117,   118,   119,   121,   129,   144,   154,   156,   157,   158,
     167,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   201,   205,   219,   220,   230,   299,   300,
     301,   302,   303,   304,   307,   308,   309,   310,   315,   316,
     317,   318,   320,   321,   322,   326,   327,   329,   333,   334,
     335,   336,   337,   338,   351,   352,   353,   354,   355,   359,
     361,   362,   363,   220,   232,   233,   220,   229,   230,   220,
     220,   243,   244,   217,   280,   281,   220,   371,   373,   372,
     373,   367,   220,     3,    17,    76,    77,    87,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   101,   102,
     103,   104,   105,   106,   107,   109,   110,   129,   130,   131,
     142,   143,   167,   207,   219,   236,   237,   238,   239,   240,
     241,   344,   345,   346,   347,   348,   350,   351,   352,   355,
     356,   352,   230,   343,   344,   300,   343,   305,   306,   352,
     201,   330,   201,   323,   330,   323,   323,   201,   201,   344,
     201,   344,   206,    10,   367,   198,   134,   328,   201,   201,
     352,   166,   204,   205,   207,   253,   200,   201,   201,   360,
     201,   201,   136,   233,   201,   287,   203,   367,   287,   136,
     367,   206,   281,   195,   374,   367,   203,   367,    32,   168,
     225,   284,   285,   237,   349,   350,   208,   344,   357,   358,
     347,   130,    18,   135,   136,   137,   138,   139,   140,   141,
     364,   142,   143,   144,   158,   181,   366,   150,   151,   152,
     153,   154,   365,   163,   164,   165,   350,   134,    25,    28,
       8,     8,   203,   325,   331,   332,   344,   324,   325,     3,
     339,   355,   325,   331,   202,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    88,    99,   100,   113,   114,   115,
     117,   118,   302,   301,   301,   344,   325,   324,     3,   218,
     340,   341,   344,   220,   324,   325,   325,   324,   342,   344,
      29,   217,   283,   288,   289,   206,   286,   230,     3,     4,
      11,    13,    19,    20,    22,    24,   201,   218,   219,   234,
     235,   236,   237,   238,   245,   246,   247,   248,   251,   252,
     253,   255,   259,   260,   261,   264,   266,   267,   244,   245,
     196,   201,   375,   373,   373,   226,   298,   367,   349,   132,
     203,   208,   277,   278,   312,   313,   342,   345,   345,   346,
     346,   346,   346,   347,   347,   350,   350,   218,   344,   301,
     343,   301,   301,   306,   206,   202,   203,   202,   203,   202,
     202,   203,   202,   202,   202,   203,   208,   132,   202,   202,
     202,   202,   367,   217,   206,   202,   367,   218,   207,   207,
     265,   201,   256,   260,   256,     6,   217,   268,   269,   270,
     271,    18,   220,   249,   250,   132,   219,   236,   220,   254,
     255,   367,   201,   220,   377,   378,   138,   376,   367,   285,
     344,   358,   203,   206,   198,   209,   311,   314,   367,   368,
     132,     9,    26,   319,   344,   332,   325,   324,   341,   344,
     206,     4,    19,   218,   290,   291,   293,   294,   297,   289,
     218,   247,   262,   263,   263,    18,    29,   217,   257,   258,
     286,     3,   109,   110,   218,   220,   247,   273,   274,   206,
      10,   367,   368,   245,   202,   203,   234,   377,   192,   369,
     202,   203,   240,   278,   301,    10,   300,   198,   313,   342,
     344,   206,   202,   290,   291,    18,   207,     4,   203,   208,
     208,   245,   217,   206,   202,   367,   206,    18,   245,   270,
     271,   250,   202,   220,   378,     8,   344,   218,   220,   295,
     296,   207,   263,    18,   206,   218,   258,   274,   275,   276,
     277,   301,   132,   208,   367,   295,   245,   218,   272,   314,
     367,   368,   206,   220,    18,   295,   208,   201,   276,   201,
     206,     4,   218,   292,   293,   294,    18,   268,   268,   218,
     292,   202,   202,   209,   368
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   210,   211,   211,   212,   212,   213,   214,   215,   216,
     216,   217,   217,   218,   219,   220,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     222,   223,   223,   224,   224,   225,   225,   226,   226,   227,
     227,   227,   227,   228,   229,   229,   230,   230,   231,   232,
     232,   233,   234,   234,   234,   234,   235,   235,   236,   236,
     237,   237,   238,   238,   239,   239,   239,   240,   241,   241,
     242,   243,   243,   244,   245,   245,   246,   246,   246,   246,
     247,   247,   248,   249,   249,   250,   251,   252,   253,   253,
     254,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     258,   258,   259,   259,   260,   260,   260,   260,   261,   262,
     262,   263,   263,   264,   265,   265,   266,   267,   268,   268,
     268,   268,   269,   269,   270,   271,   272,   272,   273,   273,
     274,   274,   275,   275,   276,   277,   277,   278,   278,   279,
     280,   280,   281,   282,   282,   283,   283,   284,   284,   285,
     285,   286,   286,   287,   287,   288,   288,   289,   289,   289,
     289,   289,   290,   290,   291,   291,   292,   292,   292,   293,
     294,   295,   296,   296,   297,   298,   299,   300,   300,   301,
     301,   302,   302,   303,   303,   303,   303,   304,   305,   305,
     306,   307,   307,   308,   309,   309,   310,   311,   311,   312,
     312,   313,   314,   314,   315,   315,   315,   316,   317,   318,
     319,   319,   320,   320,   320,   320,   320,   321,   322,   323,
     323,   324,   324,   325,   326,   327,   327,   327,   328,   328,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     330,   330,   331,   331,   332,   332,   332,   333,   333,   333,
     333,   333,   333,   333,   333,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   335,   335,   335,   336,   336,   336,   336,   337,
     338,   339,   339,   340,   340,   341,   341,   342,   343,   344,
     344,   344,   345,   345,   345,   345,   345,   346,   346,   346,
     347,   347,   348,   348,   348,   348,   349,   349,   350,   350,
     350,   350,   350,   350,   351,   352,   352,   353,   353,   354,
     354,   355,   355,   355,   355,   355,   355,   355,   355,   356,
     356,   357,   357,   358,   358,   359,   359,   359,   360,   360,
     361,   361,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   363,   363,   364,   364,   364,
     364,   364,   364,   365,   365,   365,   365,   366,   366,   367,
     368,   368,   369,   369,   370,   370,   371,   371,   372,   372,
     373,   374,   374,   375,   375,   375,   376,   376,   377,   377,
     378
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     4,     3,     0,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     1,     2,     1,
       2,     4,     1,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     3,     2,     1,     1,
       1,     1,     2,     3,     0,     3,     1,     3,     1,     3,
       4,     2,     2,     1,     1,     1,     1,     1,     6,     1,
       3,     1,     1,     4,     0,     3,     3,     3,     0,     2,
       3,     1,     1,     3,     3,     5,     1,     5,     3,     1,
       1,     1,     1,     3,     5,     1,     3,     1,     3,     2,
       1,     2,     4,     4,     5,     3,     4,     1,     3,     1,
       1,     0,     2,     0,     3,     1,     3,     3,     4,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     7,
       6,     5,     1,     3,     3,     1,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       1,     1,     1,     4,     3,     1,     6,     1,     2,     1,
       3,     3,     1,     2,     1,     1,     1,     4,     4,     8,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       3,     1,     3,     1,     2,     1,     2,     1,     0,     2,
       4,     4,     2,     2,     2,     2,     2,     4,     4,     6,
       0,     3,     1,     3,     1,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     3,
       3,     1,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     2,     1,     3,     3,     3,     1,     2,     1,     1,
       1,     1,     2,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     4,     4,     4,     2,
       3,     1,     3,     1,     3,     4,     4,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     2,     3,     3,     1,     3,     1,     3,
       4,     0,     1,     0,     3,     4,     0,     2,     1,     3,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 188 "gram.y" /* yacc.c:1646  */
    {
  	tr_add_program((yyvsp[-1].y_string));
  }
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 200 "gram.y" /* yacc.c:1646  */
    {
		(yyval.y_idlist) = tr_create_idlist((yyvsp[0].y_string));
		
  }
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 205 "gram.y" /* yacc.c:1646  */
    {
		(yyval.y_idlist) = tr_add_idlist((yyvsp[-2].y_idlist), (yyvsp[0].y_string));
  }
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 384 "gram.y" /* yacc.c:1646  */
    {
  	tr_type_resolve();
  }
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 395 "gram.y" /* yacc.c:1646  */
    {
  	tr_make_type((yyvsp[-2].y_string), (yyvsp[0].y_type));
  	//st_dump();
  	//printf("we have a new type.\n");
  }
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 403 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_get_type_no_pointer((yyvsp[0].y_string));
  }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 437 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_create_subrange_type(NULL, (yyvsp[-2].y_int), (yyvsp[0].y_int));
  }
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 443 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = (yyvsp[0].y_type);
  }
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 454 "gram.y" /* yacc.c:1646  */
    {
  	  (yyval.y_type) = tr_create_normal_pointer_type((yyvsp[0].y_string));
  	  
  }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 459 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_create_func_pointer_type((yyvsp[0].y_type));
  }
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 465 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_create_func_type(NULL, (yyvsp[0].y_paralist), TRUE);
  }
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 469 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_create_func_type((yyvsp[0].y_type), (yyvsp[-1].y_paralist), TRUE);
  }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 475 "gram.y" /* yacc.c:1646  */
    {
  	// no paramter
  	(yyval.y_paralist) = NULL;
  }
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 479 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_paralist) = (yyvsp[-1].y_paralist);
  }
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 485 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_paralist) = (yyvsp[0].y_paralist);
  }
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 489 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_paralist) = tr_add_para((yyvsp[-2].y_paralist), (yyvsp[0].y_paralist));
  }
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 495 "gram.y" /* yacc.c:1646  */
    {
  	//$$ = tr_create_para($1, NULL,  FALSE);
  }
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 499 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_paralist) = tr_create_para((yyvsp[-2].y_idlist), (yyvsp[0].y_string), FALSE);
  }
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 503 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_paralist) = tr_create_para((yyvsp[-2].y_idlist), (yyvsp[0].y_string), TRUE);
  }
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 507 "gram.y" /* yacc.c:1646  */
    {
  	//$$ = tr_create_para($2, NULL, TRUE);
  }
#line 2682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 526 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_create_array_type((yyvsp[0].y_type), (yyvsp[-3].y_indexlist));
  }
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 532 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_indexlist) = tr_create_index((yyvsp[0].y_type));
  }
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 536 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_indexlist) = tr_add_index((yyvsp[-2].y_indexlist), (yyvsp[0].y_type));
  }
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 543 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_get_type((yyvsp[0].y_string));
  }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 634 "gram.y" /* yacc.c:1646  */
    {
  	tr_install_idlist((yyvsp[-3].y_idlist), (yyvsp[-1].y_type));
  	gen_var_asm((yyvsp[-3].y_idlist));
  }
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 662 "gram.y" /* yacc.c:1646  */
    {
  	(yyval.y_type) = tr_get_type((yyvsp[0].y_string));
  }
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2735 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1199 "gram.y" /* yacc.c:1906  */


void yyerror(const char *msg)
{
    error(msg);
}

/* Sets the value of the 'yydebug' variable to VALUE.
   This is a function so we don't have to have YYDEBUG defined
   in order to build the compiler.  */
void
set_yydebug (value)
     int value;
{
#if YYDEBUG != 0
  yydebug = value;
#else
  warning ("YYDEBUG not defined.");
#endif
}
