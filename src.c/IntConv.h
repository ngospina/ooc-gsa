/* file generated by oo2c -- do not edit */
#ifndef _MODULE_IntConv_
#define _MODULE_IntConv_

#define IntConv__strAllRight 0
#define IntConv__strOutOfRange 1
#define IntConv__strWrongFormat 2
#define IntConv__strEmpty 3
#include "ConvTypes.h"
extern void IntConv__ScanInt(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState);
extern signed char IntConv__FormatInt(const unsigned char* str__ref, int str_0d);
extern int IntConv__ValueInt(const unsigned char* str__ref, int str_0d);
extern short int IntConv__LengthInt(int int_);
extern unsigned char IntConv__IsIntConvException(void);
extern void IntConv_init(void);

#endif