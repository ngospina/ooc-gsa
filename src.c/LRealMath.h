/* file generated by oo2c -- do not edit */
#ifndef _MODULE_LRealMath_
#define _MODULE_LRealMath_

#define LRealMath__pi 3.1415926535897931
#define LRealMath__exp1 2.7182818284590451
#define LRealMath__NoError 0
#define LRealMath__IllegalRoot 1
#define LRealMath__IllegalLog 2
#define LRealMath__Overflow 3
#define LRealMath__IllegalPower 4
#define LRealMath__IllegalLogBase 5
#define LRealMath__IllegalTrig 6
#define LRealMath__IllegalInvTrig 7
#define LRealMath__HypInvTrigClipped 8
#define LRealMath__IllegalHypInvTrig 9
#define LRealMath__LossOfAccuracy 10
extern double LRealMath__sqrt(double x);
extern double LRealMath__exp(double x);
extern double LRealMath__ln(double x);
extern double LRealMath__sin(double x);
extern double LRealMath__cos(double x);
extern double LRealMath__tan(double x);
extern double LRealMath__arcsin(double x);
extern double LRealMath__arccos(double x);
extern double LRealMath__arctan(double x);
extern double LRealMath__power(double base, double exponent);
extern int LRealMath__round(double x);
extern unsigned char LRealMath__IsRMathException(void);
extern double LRealMath__log(double x, double base);
extern double LRealMath__ipower(double x, short int base);
extern void LRealMath__sincos(double x, double *Sin, double *Cos);
extern double LRealMath__arctan2(double xn, double xd);
extern double LRealMath__sinh(double x);
extern double LRealMath__cosh(double x);
extern double LRealMath__tanh(double x);
extern double LRealMath__arcsinh(double x);
extern double LRealMath__arccosh(double x);
extern double LRealMath__arctanh(double x);
extern void LRealMath_init(void);

#endif
