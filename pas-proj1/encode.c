/****************************************************************/
/*																*/
/*	CSCE531 - "Pascal" and "C" Compilers						*/
/*																*/
/*	--encode.c--												*/
/*																*/
/*	This File Contains routines that support the				*/
/*	"Encode Module".											*/
/*																*/
/*																*/
/*																*/
/****************************************************************/

#include <stdlib.h>
#include <defs.h>
#include "types.h"
#include "symtab.h"
#include "message.h"
#include "backend-x86.h"
#include "encode.h"

void declare_var(ST_ID st_id, TYPE type){
	/* Get the id from the Symbol Table */
	char *id = st_get_id_str(st_id);

	/* Get the size and alignment of the type */
	unsigned int size = get_size(type);
	int alignment = get_align(type);

	if (size != 0 && alignment != 0){
		/* Call backend functions */
		/* Declare variable*/
		b_global_decl(id, alignment, size);
		/* Allocate memory for the variable */
		b_skip(size);
	} else
		bug("Something messed up in declare_var");
}

unsigned int get_size(TYPE type){
	//Account for these types
	/*TYVOID, TYFLOAT, TYDOUBLE, TYLONGDOUBLE, TYSIGNEDLONGINT,
    TYSIGNEDSHORTINT, TYSIGNEDINT, TYUNSIGNEDLONGINT,
    TYUNSIGNEDSHORTINT, TYUNSIGNEDINT, TYUNSIGNEDCHAR,
    TYSIGNEDCHAR, TYSTRUCT, TYUNION, TYENUM, TYARRAY, TYSET,
    TYFUNC, TYPTR, TYBITFIELD, TYSUBRANGE, TYERROR*/

    TYPETAG tag;

    /* Get the TYPETAG from ty_query */
    tag = ty_query(type);

    /* For arrays */
    INDEX_LIST indices;

    /* For subrange */
    long low, high;

    switch(tag){
    	case TYUNSIGNEDCHAR:
    		return sizeof(unsigned char);
    	case TYSIGNEDCHAR:
    		return sizeof(signed char);
    	case TYUNSIGNEDSHORTINT:
    		return sizeof(unsigned short int);
    	case TYSIGNEDSHORTINT:
    		return sizeof(signed short int);
    	case TYUNSIGNEDINT:
    		return sizeof(unsigned int);
    	case TYSIGNEDINT:
    		return sizeof(signed int);
    	case TYUNSIGNEDLONGINT:
    		return sizeof(unsigned long int);
    	case TYSIGNEDLONGINT:
    		return sizeof(signed long int);
    	case TYFLOAT:
    		return sizeof(float);
    	case TYDOUBLE:
    		return sizeof(double);
    	case TYLONGDOUBLE:
    		return sizeof(long double);
    	case TYARRAY:
    		/* FIXME */
    		//TYPE ty_query_array(TYPE type, INDEX_LIST *indices)
    		ty_query_subrange(type, *low, *high);
    		return get_size(ty_query_array(type, *indices)) * (high - low + 1);
    	case TYSUBRANGE:
    		/* FIXME */
    		//TYPE ty_query_subrange(TYPE type, long *low, long *high);
    		return get_size(ty_query_subrange(type, *low, *high));
    	case TYPTR:
    		return sizeof(char *);
    	// case TYVOID:
    	// 	return 0;
    	// case TYSTRUCT:
    	// 	return 0;
    	// case TYUNION:
    	// 	return 0;
    	// case TYENUM:
    	// 	return 0;
    	// case TYSET:
    	// 	return 0;
    	// case TYFUNC:
    	// 	return 0;
    	// case TYBITFIELD:
    	// 	return 0;
    	// case TYERROR:
    	// 	return 0;
    	default:
    		bug("Illegal type tag %d in get_size", tag);
    		return 0;
    }
}

int get_align(TYPE type){

	//Account for these types
	/*TYVOID, TYFLOAT, TYDOUBLE, TYLONGDOUBLE, TYSIGNEDLONGINT,
    TYSIGNEDSHORTINT, TYSIGNEDINT, TYUNSIGNEDLONGINT,
    TYUNSIGNEDSHORTINT, TYUNSIGNEDINT, TYUNSIGNEDCHAR,
    TYSIGNEDCHAR, TYSTRUCT, TYUNION, TYENUM, TYARRAY, TYSET,
    TYFUNC, TYPTR, TYBITFIELD, TYSUBRANGE, TYERROR*/

    TYPETAG tag;

    /* Get the TYPETAG from ty_query */
    tag = ty_query(type);

    /* For arrays */
    INDEX_LIST indices;

    /* For subrange */
    long low, high;

    switch(tag){
    	case TYUNSIGNEDCHAR:
    		return sizeof(unsigned char);
    	case TYSIGNEDCHAR:
    		return sizeof(signed char);
    	case TYUNSIGNEDSHORTINT:
    		return sizeof(unsigned short int);
    	case TYSIGNEDSHORTINT:
    		return sizeof(signed short int);
    	case TYUNSIGNEDINT:
    		return sizeof(unsigned int);
    	case TYSIGNEDINT:
    		return sizeof(signed int);
    	case TYUNSIGNEDLONGINT:
    		return sizeof(unsigned long int);
    	case TYSIGNEDLONGINT:
    		return sizeof(signed long int);
    	case TYFLOAT:
    		return sizeof(float);
    	case TYDOUBLE:
    		return sizeof(double);
    	case TYLONGDOUBLE:
    		return sizeof(long double);
    	case TYARRAY:
    		/* FIXME */
    		//TYPE ty_query_array(TYPE type, INDEX_LIST *indices)
    		return get_align(ty_query_array(type, *indices));
    	case TYSUBRANGE:
    		/* FIXME */
    		//TYPE ty_query_subrange(TYPE type, long *low, long *high);
    		return get_align(ty_query_subrange(type, *low, *high));
    	case TYPTR:
    	 	return sizeof(char *);
    	// case TYVOID:
    	// 	return 0;
    	// case TYSTRUCT:
    	// 	return 0;
    	// case TYUNION:
    	// 	return 0;
    	// case TYENUM:
    	// 	return 0;
    	// case TYSET:
    	// 	return 0;
    	// case TYFUNC:
    	// 	return 0;
    	// case TYBITFIELD:
    	// 	return 0;
    	// case TYERROR:
    	// 	return 0;
    	default:
    		bug("Illegal type tag %d in get_align", tag);
    		return 0;
    }
}