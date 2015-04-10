/* file generated by oo2c -- do not edit */
#ifndef _MODULE_LowReal_
#define _MODULE_LowReal_

#define LowReal__radix 2
#define LowReal__places 24
#define LowReal__expoMax 127
#define LowReal__expoMin -126
#define LowReal__large 3.40282347E+38F
#define LowReal__small 1.17549435E-38F
#define LowReal__IEC559 1
#define LowReal__LIA1 0
#define LowReal__rounds 0
#define LowReal__gUnderflow 1
#define LowReal__exception 0
#define LowReal__extend 0
#define LowReal__nModes 0
typedef unsigned int LowReal__Modes;
extern void(* LowReal__ErrorHandler)(short int errno);
extern short int LowReal__err;
extern void LowReal__ClearError(void);
extern short int LowReal__exponent(float x);
extern short int LowReal__exponent10(float x);
extern float LowReal__fraction(float x);
extern unsigned char LowReal__IsInfinity(float real);
extern unsigned char LowReal__IsNaN(float real);
extern float LowReal__sign(float x);
extern float LowReal__scale(float x, short int n);
extern float LowReal__ulp(float x);
extern float LowReal__succ(float x);
extern float LowReal__pred(float x);
extern float LowReal__intpart(float x);
extern float LowReal__fractpart(float x);
extern float LowReal__trunc(float x, short int n);
extern float LowReal__round(float x, short int n);
extern float LowReal__synthesize(short int expart, float frapart);
extern void LowReal__setMode(unsigned int m);
extern unsigned int LowReal__currentMode(void);
extern unsigned char LowReal__IsLowException(void);
extern void LowReal_init(void);

#endif