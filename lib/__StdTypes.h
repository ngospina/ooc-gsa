/*	$Id: __StdTypes.h,v 1.16 1999/10/31 13:57:18 ooc-devel Exp $	*/
/*  Type definitions for foreign or interface C code.
    Copyright (C) 1997-1999  Michael van Acken

    This module is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public License
    as published by the Free Software Foundation; either version 2 of
    the License, or (at your option) any later version.

    This module is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with OOC. If not, write to the Free Software Foundation,
    59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/
#ifndef __StdTypes__
#define __StdTypes__

#include "__config.h"
#define hugeint LOCAL_INT64_T


/* these types should be used when writing a C function whose header has to
   correspond to an Oberon-2 declaration; the mapping defined here has to
   be equal to the one defined in StdTypes.BasicTypes; note that the names 
   defined here are not used in code generated by oo2c  */
typedef unsigned char BOOLEAN;
typedef unsigned char CHAR;
typedef unsigned short int LONGCHAR;
typedef signed char SHORTINT;
typedef signed short int INTEGER;
typedef signed int LONGINT;
typedef hugeint HUGEINT;
typedef float REAL;
typedef double LONGREAL;
typedef unsigned char SET8;
typedef unsigned short int SET16;
typedef unsigned int SET32;
typedef unsigned hugeint SET64;
typedef SET32 SET;
typedef unsigned char BYTE;
typedef void *PTR;

/* format string used by printf for LONGINT (%i if it is equal to int,
   %li if it is long int) */
#define LI_FORMAT "%i"

#ifndef NULL
#define NULL (void*)0
#endif

typedef unsigned int _ModId;
typedef unsigned int _Pos;	/* type to hold file positions */



/* define some useful macros; none of these macros is used by the compiler 
   itself, but they should ease the implementation of FOREIGN modules */

/* allocate a new heap object to hold a record of type `_type' and place the
   pointer into `_dest'; include "__mini_gc.h" and <stdlib.h> if you use this 
   macro */
#if SIZE_VOID_P < 8
#define OFFSET_REC (sizeof(void*)<<1)
#else
#define OFFSET_REC (sizeof(void*))
#endif
#define NEW_REC(_dest,_type) { 				\
  char *_mem, *_var;					\
  _mem = GC_malloc(_type##_td.td.size + OFFSET_REC);	\
  _var = _mem + OFFSET_REC;				\
  ((_Type*)_var)[-1] = &_type##_td.td;			\
  _dest = (_type*)_var;					\
}

/* OBSOLETE */
/* call the type-bound procedure `_index' (an integer value) associated with
   the pointer variable `_ptr'; `_cast' describes the function type of the
   activated procedure (it includes parenthesis), `_param' is the argument list
   of the call (including parenthesis around the arguments) */
/*#define TB_CALL(_ptr,_index,_cast,_param) (_cast((*((_TypeDesc**)(_ptr)-1))->tbprocs[_index]))_param*/

/* calls to type-bound procedures, either static or dynamic; both use the same
   argument list: module name, name of record type, name of type-bound 
   procedure, receiver value, and parameter list (must be in parenthesis);
   please note that the _whole_ parameter list is treated as a single 
   argument, and that it _must_ include the receiver as the first argument;

   example of use: 
     DYN_TBCALL(Channel,ChannelDesc,Flush,f,((Channel__Channel)f));
*/
#define STATIC_TBCALL(_module,_type_name,_tb_proc_name,_receiver,_param_list) \
  _module##__##_type_name##_##_tb_proc_name _param_list
#define DYN_TBCALL(_module,_type_name,_tb_proc_name,_receiver,_param_list) \
  ((_TBP_##_module##__##_type_name##_##_tb_proc_name)((*((_TypeDesc**)(_receiver)-1))->tbprocs[_TBN_##_module##__##_type_name##_##_tb_proc_name]))_param_list

/* return the type tag of the given heap object */
#define TYPE_TAG(_ptr) ((_Type*)(_ptr))[-1]

/* return the type tag of the given record type */
#define TYPE_DESCR(_type) &_type##_td.td

#endif  /* __StdTypes__ */
