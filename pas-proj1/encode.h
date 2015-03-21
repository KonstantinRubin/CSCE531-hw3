/* Definitions to support encode.c */

#ifndef ENCODE_H
#define ENCODE_H

#include "defs.h"
#include "types.h"
#include "message.h"

/* This method declares and allocates a variable by 
   setting the alignment and size for the appropriate type */
void declare_var(ST_ID st_id, TYPE type);

/* This method returns the size of a type based on the type given */
unsigned int get_size(TYPE type);

/* This method returns the alignment of a type based on the type given */
int get_align(TYPE type);

#endif
