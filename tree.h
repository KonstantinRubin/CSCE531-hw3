#ifndef TREE_H
#define TREE_H

#include "defs.h"
#include "types.h"
#include "symtab.h"


/*******************************************************/
/*               Project 1 declarations                */
/*******************************************************/

//check whether the type belongs to the primitive class
BOOLEAN check_whether_type_is_primitive(TYPETAG tag);

//check whether the type is some kind of data
BOOLEAN is_not_data_type(TYPETAG tag);

//check whether the type belongs to the primitive class
BOOLEAN is_not_ordinal_type(TYPETAG tag);

//check whether a typename is already in the symbol table
//returns type if it is found
//returns TYERROR if it is NOT found
TYPE check_typename_in_the_symtab(ST_ID id);


//check whether use specified valid subrange for an array
TYPE check_subarange_valid(long a, long b);

//what we call "gdecl"
//when we have something like x,y,z: Integer;
//it declares the x, y, z (list of variables) belonging to one type
void declare_globally_list_of_variables( VAR_ID_LIST list, TYPE type);

/* Endogenous linked list of currently unresolved pointer types.
   Initially empty */
static TYPE_REC *unresolved_pointers = NULL;

#endif