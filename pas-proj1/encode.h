/* Definitions to support encode.c */

#ifndef ENCODE_H
#define ENCODE_H

#include "defs.h"
#include "types.h"
#include "message.h"
#include "tree.h"

/* This method declares and allocates a variable by 
   setting the alignment and size for the appropriate type */
void declare_var(VAR_ID_LIST list_id, TYPE type);//ST_ID st_id, TYPE type);

/* This method returns the size of a type based on the type given */
unsigned int get_size(TYPE type);

/* This method returns the alignment of a type based on the type given */
int get_align(TYPE type);

#endif
