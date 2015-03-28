/****************************************************************/
/*																*/
/*	CSCE531 - "Pascal" and "C" Compilers						*/
/*																*/
/*	--encode.c--												*/
/*																*/
/*	This File Contains routines that support the				*/
/*	"Encode Module".											*/
/*																*/
/*	Maximus Brandel												*/
/*																*/
/****************************************************************/

#include <stdlib.h>
#include <defs.h>
#include "types.h"
#include "symtab.h"
#include "message.h"
#include "backend-x86.h"
#include "encode.h"

<<<<<<< HEAD
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
=======
void declare_var(VAR_ID_LIST list_id, TYPE type){
	/* Return if type tag is TYERROR OR TYFUNC */
	if (ty_query(type) == TYERROR || ty_query(type) == TYFUNC) return;

	/* While list_id != NULL */
	while(list_id){
		ST_ID st_id = list_id->id;	
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
		}else
			bug("Something messed up in declare_var");
		/* Go to next item in list */	
		list_id = list_id->next;
	}
}

unsigned int get_size(TYPE type){

    /* Get the TYPETAG from ty_query */
    TYPETAG tag;
>>>>>>> master
    tag = ty_query(type);

    /* For arrays */
    INDEX_LIST indices;
<<<<<<< HEAD
=======
    unsigned int array_size;
    TYPE temp_type = type;
>>>>>>> master

    /* For subrange */
    long low, high;

    switch(tag){
    	case TYUNSIGNEDCHAR:
<<<<<<< HEAD
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
=======
    		return 1;//sizeof(unsigned char);
    	case TYSIGNEDCHAR:
    		return 1;//sizeof(signed char);
    	case TYUNSIGNEDSHORTINT:
    		return 2;//sizeof(unsigned short int);
    	case TYSIGNEDSHORTINT:
    		return 2;//sizeof(signed short int);
    	case TYUNSIGNEDINT:
    		return 4;//sizeof(unsigned int);
    	case TYSIGNEDINT:
    		return 4;//sizeof(signed int);
    	case TYUNSIGNEDLONGINT:
    		return 4;//sizeof(unsigned long int);
    	case TYSIGNEDLONGINT:
    		return 4;//sizeof(signed long int);
    	case TYFLOAT:
    		return 4;//sizeof(float);
    	case TYDOUBLE:
    		return 8;//sizeof(double);
    	case TYLONGDOUBLE:
    		return 8;//sizeof(long double);
    	case TYARRAY:
    		/* Get array size recursively */
    		array_size = get_size(ty_query_array(type, &indices));
    		/* While indices != NULL */
			while (indices) { 
				/* Get the low and high values */
				ty_query_subrange(indices->type,&low,&high);
				/* Calculate new array_size */
				array_size *= high - low + 1;
				/* Go to next indice */		
				indices = indices->next;
			}		
			return array_size;	
    	case TYSUBRANGE:
    		return get_size(ty_query_subrange(type, &low, &high));
    	case TYPTR:
    		return 4;//sizeof(char *);
>>>>>>> master
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
<<<<<<< HEAD
    	// case TYFUNC:
    	// 	return 0;
    	// case TYBITFIELD:
    	// 	return 0;
    	// case TYERROR:
    	// 	return 0;
=======
    	//case TYFUNC:
    	// 	return -98;
    	// case TYBITFIELD:
    	// 	return 0;
    	//case TYERROR:
    	//	return -99;
>>>>>>> master
    	default:
    		bug("Illegal type tag %d in get_size", tag);
    		return 0;
    }
}

int get_align(TYPE type){

<<<<<<< HEAD
	//Account for these types
	/*TYVOID, TYFLOAT, TYDOUBLE, TYLONGDOUBLE, TYSIGNEDLONGINT,
    TYSIGNEDSHORTINT, TYSIGNEDINT, TYUNSIGNEDLONGINT,
    TYUNSIGNEDSHORTINT, TYUNSIGNEDINT, TYUNSIGNEDCHAR,
    TYSIGNEDCHAR, TYSTRUCT, TYUNION, TYENUM, TYARRAY, TYSET,
    TYFUNC, TYPTR, TYBITFIELD, TYSUBRANGE, TYERROR*/

    TYPETAG tag;

    /* Get the TYPETAG from ty_query */
=======
    /* Get the TYPETAG from ty_query */
    TYPETAG tag;
>>>>>>> master
    tag = ty_query(type);

    /* For arrays */
    INDEX_LIST indices;

    /* For subrange */
    long low, high;

    switch(tag){
    	case TYUNSIGNEDCHAR:
<<<<<<< HEAD
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
=======
    		return 1;//sizeof(unsigned char);
    	case TYSIGNEDCHAR:
    		return 1;//sizeof(signed char);
    	case TYUNSIGNEDSHORTINT:
    		return 2;//sizeof(unsigned short int);
    	case TYSIGNEDSHORTINT:
    		return 2;//sizeof(signed short int);
    	case TYUNSIGNEDINT:
    		return 4;//sizeof(unsigned int);
    	case TYSIGNEDINT:
    		return 4;//sizeof(signed int);
    	case TYUNSIGNEDLONGINT:
    		return 4;//sizeof(unsigned long int);
    	case TYSIGNEDLONGINT:
    		return 4;//sizeof(signed long int);
    	case TYFLOAT:
    		return 4;//sizeof(float);
    	case TYDOUBLE:
    		return 8;//sizeof(double);
    	case TYLONGDOUBLE:
    		return 8;//sizeof(long double);
    	case TYARRAY:
    		return get_align(ty_query_array(type, &indices));
    	case TYSUBRANGE:
    		return get_align(ty_query_subrange(type, &low, &high));
    	case TYPTR:
    	 	return 4;//sizeof(char *);
>>>>>>> master
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
<<<<<<< HEAD
    	// case TYFUNC:
    	// 	return 0;
    	// case TYBITFIELD:
    	// 	return 0;
    	// case TYERROR:
    	// 	return 0;
=======
    	//case TYFUNC:
    	// 	return -98;
    	// case TYBITFIELD:
    	// 	return 0;
    	//case TYERROR:
    	// 	return -99;
>>>>>>> master
    	default:
    		bug("Illegal type tag %d in get_align", tag);
    		return 0;
    }
}