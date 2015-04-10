/* file generated by oo2c -- do not edit */
#ifndef _MODULE_RealConv_
#define _MODULE_RealConv_

#define RealConv__SigFigs 7
typedef signed char RealConv__ConvResults;
#define RealConv__strAllRight 0
#define RealConv__strOutOfRange 1
#define RealConv__strWrongFormat 2
#define RealConv__strEmpty 3
#include "ConvTypes.h"
extern void RealConv__ScanReal(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState);
extern signed char RealConv__FormatReal(const unsigned char* str__ref, int str_0d);
extern float RealConv__ValueReal(const unsigned char* str__ref, int str_0d);
extern short int RealConv__LengthFloatReal(float real, short int sigFigs);
extern short int RealConv__LengthEngReal(float real, short int sigFigs);
extern short int RealConv__LengthFixedReal(float real, short int place);
extern unsigned char RealConv__IsRConvException(void);
extern void RealConv_init(void);

#endif
