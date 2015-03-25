/*
 *	Steve Rubin
 *	CSCE531
 *	2015
 *
 */ 
 
#include "tree.h"
#include "encode.h"
#include "symtab.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*******************************************************/
/*               Project 1 functions                  */
/*******************************************************/

//check whether the type belongs to the primitive class
BOOLEAN is_not_ordinal_type(TYPETAG tag)
{
    return (tag != TYVOID) && (tag != TYPTR) &&	(tag != TYFLOAT) &&	(tag != TYDOUBLE) &&
		(tag != TYLONGDOUBLE) && (tag != TYARRAY) && (tag != TYERROR) && (tag != TYSTRUCT) &&
		(tag != TYUNION) &&	(tag != TYSET) && (tag != TYFUNC);
}

//check whether the type is some kind of data
BOOLEAN is_not_data_type(TYPETAG tag)
{
    return (tag != TYFLOAT) &&	(tag != TYDOUBLE) && (tag != TYSIGNEDCHAR) && (tag != TYUNSIGNEDCHAR) &&
			(tag != TYSIGNEDLONGINT);
}

//check whether a typename is already in the symbol table
//returns type if it is found
//returns TYERROR if it is NOT found
TYPE check_typename_in_the_symtab(ST_ID id)
{
    int block;
    ST_DR dr = st_lookup(id,&block); // looks for id in the symbol table

    if (dr == NULL) //if the id is not found at all
	{
		error("Found an undeclared type name: \"%s\" ", st_get_id_str(id));
		return ty_build_basic(TYERROR);
    }
    if (dr->tag != TYPENAME) //if the id is found but it is not a type, but ECONST or GDECL or etc.
	{
		error("Type name expected for \"%s\"", st_get_id_str(id));
        return ty_build_basic(TYERROR);
    }
	
	//if the id is found and it is a type
    return dr->u.typename.type; // return the type
	bug("how the hell the compiler got here?"); // output bug in our compiler
}

//check whether use specified valid subrange for an array
TYPE check_subarange_valid(long a, long b)
{
	if (a > b)
	{
		error("first number in the subrange is greater than the second");
		return ty_build_basic(TYERROR);
	}
	if (a == b)
	{
		error("first number in the subrange is equal to the second");
		return ty_build_basic(TYERROR);
	}
	if (a < b) //the only correct option
	{
		return ty_build_subrange(ty_build_basic(TYSIGNEDLONGINT), a, b);
	}
	bug("how the hell the compiler got here?"); // output bug in our compiler
}

//what we call "gdecl"
//when we have something like x,y,z: Integer;
//it declares the x, y, z (list of variables) belonging to one type
void declare_globally_list_of_variables( VAR_ID_LIST list, TYPE type)
{
	if (!is_not_data_type(type))
	{
		error("Variable must be of data type");
	}
	
	ST_DR new_data_rec;
	while(list != NULL) // go through the whole list of variables
	{
		resolve_all_ptr();
		new_data_rec = stdr_alloc(); // allocate a new data record
		
		//filling the fields of the ST_DR structure
		new_data_rec->tag = GDECL;
		new_data_rec->u.decl.type = type;
		new_data_rec->u.decl.sc = NO_SC;
		new_data_rec->u.decl.is_ref = FALSE;
		new_data_rec->u.decl.error = (ty_query(type) == TYERROR ? TRUE:FALSE);
		
		if(!st_install(list->id, new_data_rec))
		{
			error("Duplicate the variable: \"%s\"", st_get_id_str(list=<id));
			free(new_data_rec);
		}
		list = list->next; // go to the next item in the list
	}
}

void resolve_all_pointers()
{
	int junk;
	ST_ID id;
	ST_DR data_rec;
	TYPE unresolved, temp, temp_ptr;
	
	unresolved = ty_get_unresolved(); // returns the first item of the list of unresolved pointers, SOMEONE SHOULD MAKE THIS LIST, files differs
	
	while(unresolved != NULL)
	{
		temp_ptr = ty_query_ptr(unresolved, &id, &temp); // returns pointer...temp becomes the next pointer - files differ!
	}
	
	
}

TYPE ty_get_unresolved()
{
    TYPE_REC *ret_type = unresolved_pointers;
    unresolved_pointers = NULL;
    return ret_type;
}

void resolve_all_ptr_2()
{
	int junk;
	ST_ID id;
	ST_DR data_rec;
	TYPE unresolved,temp,temp_ptr;

	unresolved = ty_get_unresolved();

	while(unresolved!=NULL)
	{
		temp_ptr = ty_query_ptr(unresolved, &id, &temp);
		data_rec = st_lookup(id,&junk);
		if (data_rec == NULL) {
			error("Unresolved type name: \"%s\"", st_get_id_str(id));
			unresolved = temp;
			continue;
		}
		if (data_rec->tag == TYPENAME)
		{
			if(!ty_resolve_ptr(unresolved, data_rec->u.typename.type))
				error("Unresolved type name: \"%s\"", st_get_id_str(id));
		}	
		else
		{
			error("Unidentified type tag\n");
		}
		unresolved=temp;
	}

}
