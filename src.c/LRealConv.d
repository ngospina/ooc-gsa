/* file generated by oo2c -- do not edit */
#include "LRealConv.h"
#include "CharClass.h"
#include "LongInts.h"
#include "LowLReal.h"
#include "Strings.h"

/* local definitions */
typedef LongInts__LongInt LRealConv__LongInt;
static ConvTypes__ScanState LRealConv__RS;
static ConvTypes__ScanState LRealConv__P;
static ConvTypes__ScanState LRealConv__F;
static ConvTypes__ScanState LRealConv__E;
static ConvTypes__ScanState LRealConv__SE;
static ConvTypes__ScanState LRealConv__WE;
static ConvTypes__ScanState LRealConv__SR;

/* function prototypes */
unsigned char LRealConv__IsExponent(unsigned char ch);
unsigned char LRealConv__IsSign(unsigned char ch);
double LRealConv__Real(LongInts__LongInt x, int exp, int digits, unsigned char *outOfRange);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[7];
} _p0 = {7, NULL, {
  (const void*)&LRealConv__FormatReal,
  (const void*)&LRealConv__IsRConvException,
  (const void*)&LRealConv__LengthEngReal,
  (const void*)&LRealConv__LengthFixedReal,
  (const void*)&LRealConv__LengthFloatReal,
  (const void*)&LRealConv__ScanReal,
  (const void*)&LRealConv__ValueReal,
}};
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p1 = {0, NULL, {NULL
}};
static const struct {
  int length;
  void* pad;
  const char name[10];
} _n0 = {10, NULL, {"LRealConv"}};
static struct _MD LRealConv_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -587573340
  }
};

/* local strings */
static const unsigned char _c2[] = "2.4312432637500083E-88";
static const unsigned char _c1[] = "5.1059259362558051E-111";
static const unsigned char _c0[] = "-1.8770465240919248E+246";

