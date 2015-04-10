/* file generated by oo2c -- do not edit */
#include "LRealStr.h"
#include "ConvTypes.h"
#include "LongInts.h"
#include "LowLReal.h"
#include "LRealConv.h"
#include "Strings.h"

/* local definitions */

/* function prototypes */
void LRealStr__AppendChar(unsigned char ch, unsigned char* str, int str_0d);
void LRealStr__AppendDigit(int dig, unsigned char* str, int str_0d);
void LRealStr__AppendExponent(short int exp, unsigned char* str, int str_0d);
void LRealStr__AppendFraction(LongInts__LongInt n, short int sigFigs, short int place, unsigned char* str, int str_0d);
void LRealStr__RemoveLeadingZeros(unsigned char* str, int str_0d);
void LRealStr__Scale(double x, LongInts__LongInt n, short int sigFigs, short int exp);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[9];
} _n0 = {9, NULL, {"LRealStr"}};
static struct _MD LRealStr_md = {
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
static const unsigned char _c12[] = "1234.1234123412341234";
static const unsigned char _c11[] = "345,234";
static const unsigned char _c10[] = "-0.0002345097E+10";
static const unsigned char _c9[] = "  1234567890";
static const unsigned char _c8[] = "1.234D-10";
static const unsigned char _c7[] = "Infinity";
static const unsigned char _c6[] = "NaN";
static const unsigned char _c5[] = "0";
static const unsigned char _c4[] = ".";
static const unsigned char _c3[] = "";
static const unsigned char _c2[] = "-";
static const unsigned char _c1[] = "+";
static const unsigned char _c0[] = "E";
