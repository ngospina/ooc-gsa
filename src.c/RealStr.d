/* file generated by oo2c -- do not edit */
#include "RealStr.h"
#include "ConvTypes.h"
#include "LowReal.h"
#include "RealConv.h"
#include "LRealMath.h"
#include "Strings.h"

/* local definitions */

/* function prototypes */
void RealStr__AppendDigit(int dig, unsigned char* str, int str_0d);
void RealStr__AppendExponent(short int exp, unsigned char* str, int str_0d);
void RealStr__NextFraction(double *real, short int dec, unsigned char* str, int str_0d);
void RealStr__AppendFraction(double real, short int sigFigs, short int exp, short int place, unsigned char* str, int str_0d);
void RealStr__RemoveLeadingZeros(unsigned char* str, int str_0d);
void RealStr__ExtractExpScale(double *real, short int *exp, short int *expoff);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[8];
} _n0 = {8, NULL, {"RealStr"}};
static struct _MD RealStr_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL
  }
};

/* local strings */
static const unsigned char _c7[] = "Infinity";
static const unsigned char _c6[] = "";
static const unsigned char _c5[] = "NaN";
static const unsigned char _c4[] = "0";
static const unsigned char _c3[] = ".";
static const unsigned char _c2[] = "-";
static const unsigned char _c1[] = "+";
static const unsigned char _c0[] = "E";
