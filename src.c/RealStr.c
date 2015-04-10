/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "RealStr.d"

static _ModId _mid;

void RealStr__StrToReal(const unsigned char* str__ref, int str_0d, float *real, signed char *res) {
  register int i0;
  register float f0;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i0 = RealConv__FormatReal((const unsigned char*)(int)str, str_0d);
  *res = i0;
  i0 = *res;
  i0 = (0x3U & ((unsigned int)1 << i0)) != 0;
  if (!(i0)) goto l0;
  f0 = RealConv__ValueReal((const unsigned char*)(int)str, str_0d);
  *real = f0;
l0:
  _top_vs = _old_top_vs;
}

void RealStr__AppendDigit(int dig, unsigned char* str, int str_0d) {
  register int i0;
  unsigned char ds[2];
  i0 = dig + 48;
  *(unsigned char*)(int)ds = i0;
  i0 = (int)ds + 1;
  *(unsigned char*)i0 = 0;
  Strings__Append((const unsigned char*)(int)ds, 2, (unsigned char*)(int)str, str_0d);
}

void RealStr__AppendExponent(short int exp, unsigned char* str, int str_0d) {
  register int i0, i1;
  i0 = exp < 0;
  Strings__Append((const unsigned char*)(int)_c0, 2, (unsigned char*)(int)str, str_0d);
  if (i0) goto l0;
  Strings__Append((const unsigned char*)(int)_c1, 2, (unsigned char*)(int)str, str_0d);
  i0 = exp;
  goto l1;
l0:
  Strings__Append((const unsigned char*)(int)_c2, 2, (unsigned char*)(int)str, str_0d);
  i0 = - exp;
l1:
  i1 = i0 < 10;
  if (i1) goto l2;
  _div(i1, i0, 10, short int);
  RealStr__AppendDigit((int)i1, (unsigned char*)(int)str, str_0d);
l2:
  _mod(i0, i0, 10, short int);
  RealStr__AppendDigit((int)i0, (unsigned char*)(int)str, str_0d);
}

void RealStr__NextFraction(double *real, short int dec, unsigned char* str, int str_0d) {
  register int i0, i1;
  register double d0, d1, d2;
  d1 = *real;
  d0 = LRealMath__ipower((double)1.0000000000000000E+1, (short int)dec);
  d0 *= d1;
  _entier(i0, d0);
  RealStr__AppendDigit((int)i0, (unsigned char*)(int)str, str_0d);
  i1 = - dec;
  d0 = i0;
  d2 = *real;
  d1 = LRealMath__ipower((double)1.0000000000000000E+1, (short int)i1);
  d0 = d1 * d0;
  d0 = d2 - d0;
  *real = d0;
}

void RealStr__AppendFraction(double real, short int sigFigs, short int exp, short int place, unsigned char* str, int str_0d) {
  register int i0, i1, i2, i3;
  register double d0;
  i2 = sigFigs - 1;
  i0 = i2 < 0;
  if (i0) goto l2;
  i1 = 0;
  d0 = real;
l0:
  i3 = place == i1;
  if (!(i3)) goto l1;
  Strings__Append((const unsigned char*)(int)_c3, 2, (unsigned char*)(int)str, str_0d);
l1:
  i3 = i1 + 1;
  i0 = i3 > i2;
  i1 -= exp;
  real = (double)d0;
  real = (double)d0;
  RealStr__NextFraction((double *)(int)&real, (short int)i1, (unsigned char*)(int)str, str_0d);
  if (i0) goto l2;
  i1 = i3;
  d0 = real;
  goto l0;
l2:
  i1 = place - 1;
  i0 = sigFigs > i1;
  if (i0) goto l4;
  i0 = sigFigs;
l3:
  i0++;
  i2 = i0 <= i1;
  Strings__Append((const unsigned char*)(int)_c4, 2, (unsigned char*)(int)str, str_0d);
  if (i2) goto l3;
l4:
  ;
}

void RealStr__RemoveLeadingZeros(unsigned char* str, int str_0d) {
  register int i0, i1, i2, i3;
  i2 = Strings__Length((const unsigned char*)(int)str, str_0d);
  i0 = i2 <= 1;
  if (i0) goto l1;
  i1 = *(unsigned char*)(int)str;
  i1 = i1 != 48;
  if (i1) goto l1;
  i3 = (int)str + 1;
  i0 = *(unsigned char*)i3;
  i0 = i0 == 46;
  if (i0) goto l1;
l0:
  i2--;
  i1 = i2 <= 1;
  Strings__Delete((unsigned char*)(int)str, str_0d, (short int)0, (short int)1);
  if (i1) goto l1;
  i1 = *(unsigned char*)(int)str;
  i1 = i1 != 48;
  if (i1) goto l1;
  i1 = *(unsigned char*)i3;
  i1 = i1 != 46;
  if (i1) goto l0;
l1:
  ;
}

void RealStr__ExtractExpScale(double *real, short int *exp, short int *expoff) {
  register int i0, i1;
  register float f0;
  register double d0;
  d0 = *real;
  f0 = d0;
  i0 = LowReal__exponent10((float)f0);
  *exp = i0;
  i0 = *exp;
  i1 = i0 > 20;
  if (i1) goto l1;
  i1 = i0 < -20;
  if (i1) goto l0;
  *expoff = 0;
  goto l2;
l0:
  d0 = *real;
  d0 *= 1.0000000000000000E+10;
  *real = d0;
  i1 = i0 + 10;
  *exp = i1;
  *expoff = -10;
  goto l2;
l1:
  d0 = *real;
  d0 /= 1.0000000000000000E+10;
  *real = d0;
  i0 -= 10;
  *exp = i0;
  *expoff = 10;
l2:
  ;
}

void RealStr__RealToFloat(float real, short int sigFigs, unsigned char* str, int str_0d) {
  register int i0, i1, i2;
  register float f0;
  register double d0, d1;
  short int exp;
  short int expoff;
  unsigned char lstr[32];
  double x;
  i0 = LowReal__IsNaN((float)real);
  i1 = sigFigs <= 0;
  if (!(i0)) goto l0;
  _string_copy((int)str, (int)_c5, str_0d);
l0:
  if (i1) goto l1;
  i1 = sigFigs;
  goto l2;
l1:
  i1 = 7;
l2:
  d1 = real;
  (void)memcpy((void*) (int)lstr, (const void*) (int)_c6, 1);
  if (i0) goto l9;
  i2 = d1 < 0.0000000000000000;
  if (i2) goto l3;
  d0 = d1;
  goto l4;
l3:
  Strings__Append((const unsigned char*)(int)_c2, 2, (unsigned char*)(int)lstr, 32);
  d0 = - d1;
l4:
  i2 = LowReal__IsInfinity((float)real);
  if (!(i2)) goto l5;
  Strings__Append((const unsigned char*)(int)_c7, 9, (unsigned char*)(int)lstr, 32);
  _string_copy((int)str, (int)lstr, str_0d);
l5:
  if (i2) goto l9;
  x = (double)d0;
  x = (double)d0;
  RealStr__ExtractExpScale((double *)(int)&x, (short int *)(int)&exp, (short int *)(int)&expoff);
  i0 = real != 0.00000000F;
  if (i0) goto l6;
  i2 = exp;
  d0 = x;
  goto l7;
l6:
  i2 = exp - i1;
  d0 = LRealMath__ipower((double)1.0000000000000000E+1, (short int)i2);
  d0 *= 5.0000000000000000;
  d0 = x + d0;
  f0 = d0;
  i2 = LowReal__exponent10((float)f0);
l7:
  i0 = i2 == 0;
  RealStr__AppendFraction((double)d0, (short int)i1, (short int)i2, (short int)1, (unsigned char*)(int)lstr, 32);
  if (i0) goto l8;
  i2 = expoff + i2;
  RealStr__AppendExponent((short int)i2, (unsigned char*)(int)lstr, 32);
l8:
  _string_copy((int)str, (int)lstr, str_0d);
l9:
  ;
}

void RealStr__RealToEng(float real, short int sigFigs, unsigned char* str, int str_0d) {
  register int i0, i1, i2, i3, i4;
  register float f0;
  register double d0, d1;
  short int exp;
  short int expoff;
  unsigned char lstr[32];
  double x;
  i0 = LowReal__IsNaN((float)real);
  i1 = sigFigs <= 0;
  if (!(i0)) goto l0;
  _string_copy((int)str, (int)_c5, str_0d);
l0:
  if (i1) goto l1;
  i3 = sigFigs;
  goto l2;
l1:
  i3 = 7;
l2:
  d1 = real;
  (void)memcpy((void*) (int)lstr, (const void*) (int)_c6, 1);
  if (i0) goto l9;
  i2 = d1 < 0.0000000000000000;
  if (i2) goto l3;
  d0 = d1;
  goto l4;
l3:
  Strings__Append((const unsigned char*)(int)_c2, 2, (unsigned char*)(int)lstr, 32);
  d0 = - d1;
l4:
  i2 = LowReal__IsInfinity((float)real);
  if (!(i2)) goto l5;
  Strings__Append((const unsigned char*)(int)_c7, 9, (unsigned char*)(int)lstr, 32);
  _string_copy((int)str, (int)lstr, str_0d);
l5:
  if (i2) goto l9;
  x = (double)d0;
  x = (double)d0;
  RealStr__ExtractExpScale((double *)(int)&x, (short int *)(int)&exp, (short int *)(int)&expoff);
  i4 = real != 0.00000000F;
  if (i4) goto l6;
  i4 = exp;
  d0 = x;
  goto l7;
l6:
  i4 = exp - i3;
  d0 = LRealMath__ipower((double)1.0000000000000000E+1, (short int)i4);
  d0 *= 5.0000000000000000;
  d0 = x + d0;
  f0 = d0;
  i4 = LowReal__exponent10((float)f0);
l7:
  i1 = expoff + i4;
  _mod(i1, i1, 3, short int);
  i0 = i4 - i1;
  i0 = expoff + i0;
  i2 = i1 + 1;
  i1 = i0 == 0;
  RealStr__AppendFraction((double)d0, (short int)i3, (short int)i4, (short int)i2, (unsigned char*)(int)lstr, 32);
  if (i1) goto l8;
  RealStr__AppendExponent((short int)i0, (unsigned char*)(int)lstr, 32);
l8:
  _string_copy((int)str, (int)lstr, str_0d);
l9:
  ;
}

void RealStr__RealToFixed(float real, short int place, unsigned char* str, int str_0d) {
  register int i0, i1, i2, i3, i4;
  register float f0;
  register double d0, d1;
  short int exp;
  short int expoff;
  unsigned char lstr[256];
  double x;
  i0 = LowReal__IsNaN((float)real);
  if (!(i0)) goto l0;
  _string_copy((int)str, (int)_c5, str_0d);
l0:
  d1 = real;
  (void)memcpy((void*) (int)lstr, (const void*) (int)_c6, 1);
  i3 = place != 0;
  if (i0) goto l12;
  i2 = d1 < 0.0000000000000000;
  if (i2) goto l1;
  d0 = d1;
  goto l2;
l1:
  Strings__Append((const unsigned char*)(int)_c2, 2, (unsigned char*)(int)lstr, 256);
  d0 = - d1;
l2:
  i2 = LowReal__IsInfinity((float)real);
  if (!(i2)) goto l3;
  Strings__Append((const unsigned char*)(int)_c7, 9, (unsigned char*)(int)lstr, 256);
  _string_copy((int)str, (int)lstr, str_0d);
l3:
  if (i2) goto l12;
  i0 = place < 0;
  if (i0) goto l4;
  i0 = place + 1;
  goto l5;
l4:
  i0 = place + 2;
l5:
  x = (double)d0;
  x = (double)d0;
  RealStr__ExtractExpScale((double *)(int)&x, (short int *)(int)&exp, (short int *)(int)&expoff);
  i1 = real != 0.00000000F;
  if (i1) goto l6;
  i1 = exp;
  d0 = x;
  goto l7;
l6:
  i1 = - i0;
  d0 = LRealMath__ipower((double)1.0000000000000000E+1, (short int)i1);
  d0 *= 5.0000000000000000;
  d0 = x + d0;
  f0 = d0;
  i1 = LowReal__exponent10((float)f0);
l7:
  i4 = expoff + i0;
  i0 = expoff + i1;
  i2 = i0 < 0;
  if (i2) goto l8;
  i2 = i1 + i4;
  i0++;
  RealStr__AppendFraction((double)d0, (short int)i2, (short int)i1, (short int)i0, (unsigned char*)(int)lstr, 256);
  RealStr__RemoveLeadingZeros((unsigned char*)(int)lstr, 256);
  goto l10;
l8:
  i0 = i4 <= 0;
  if (i0) goto l9;
  RealStr__AppendFraction((double)d0, (short int)i4, (short int)0, (short int)1, (unsigned char*)(int)lstr, 256);
  goto l10;
l9:
  Strings__Append((const unsigned char*)(int)_c4, 2, (unsigned char*)(int)lstr, 256);
l10:
  if (i3) goto l11;
  Strings__Append((const unsigned char*)(int)_c3, 2, (unsigned char*)(int)lstr, 256);
l11:
  _string_copy((int)str, (int)lstr, str_0d);
l12:
  ;
}

void RealStr__RealToStr(float real, unsigned char* str, int str_0d) {
  register int i0, i1, i2, i3;
  register float f0;
  unsigned char found;
  short int pos;
  i0 = LowReal__IsNaN((float)real);
  if (!(i0)) goto l0;
  _string_copy((int)str, (int)_c5, str_0d);
l0:
  i2 = str_0d - 1;
  if (i0) goto l11;
  i1 = real < 0.00000000F;
  if (i1) goto l1;
  _string_copy((int)str, (int)_c6, str_0d);
  i0 = 0;
  goto l2;
l1:
  _string_copy((int)str, (int)_c2, str_0d);
  i0 = -1;
l2:
  f0 = _abs(real);
  i1 = LowReal__IsInfinity((float)f0);
  if (!(i1)) goto l3;
  Strings__Append((const unsigned char*)(int)_c7, 9, (unsigned char*)(int)str, str_0d);
l3:
  if (i1) goto l11;
  i3 = LowReal__exponent10((float)real);
  i3 = 7 - i3;
  i3 -= 2;
  i1 = i0 + i3;
  i3 = RealConv__LengthFixedReal((float)real, (short int)i1);
  i0 = i3 <= i2;
  if (i0) goto l7;
  i3 = RealConv__LengthFloatReal((float)real, (short int)7);
  i1 = i3 <= i2;
  if (i1) goto l5;
  i1 = 7 - i3;
  i0 = i1 + i2;
  i1 = i0 >= 1;
  if (i1) goto l4;
  i0 = 1;
l4:
  RealStr__RealToFloat((float)real, (short int)i0, (unsigned char*)(int)str, str_0d);
  goto l11;
l5:
  i1 = i3 < i2;
  RealStr__RealToFloat((float)real, (short int)7, (unsigned char*)(int)str, str_0d);
  Strings__FindNext((const unsigned char*)(int)_c0, 2, (const unsigned char*)(int)str, str_0d, (short int)2, (unsigned char *)(int)&found, (short int *)(int)&pos);
  if (!(i1)) goto l11;
l6:
  i3++;
  i1 = i3 < i2;
  Strings__Insert((const unsigned char*)(int)_c4, 2, (short int)pos, (unsigned char*)(int)str, str_0d);
  if (i1) goto l6;
  goto l11;
l7:
  i0 = i1 < 0;
  RealStr__RealToFixed((float)real, (short int)i1, (unsigned char*)(int)str, str_0d);
  if (i0) goto l8;
  i1 = i3;
  goto l9;
l8:
  i1 = i3 + 1;
  Strings__Append((const unsigned char*)(int)_c3, 2, (unsigned char*)(int)str, str_0d);
l9:
  i3 = i1 < i2;
  if (!(i3)) goto l11;
l10:
  i1++;
  i3 = i1 < i2;
  Strings__Append((const unsigned char*)(int)_c4, 2, (unsigned char*)(int)str, str_0d);
  if (i3) goto l10;
l11:
  ;
}

void RealStr__Test(void) {
  register int i0;
  unsigned char str[80];
  RealStr__RealToFloat((float)3.40282347E+38F, (short int)9, (unsigned char*)(int)str, 80);
  RealStr__RealToEng((float)3.40282347E+38F, (short int)9, (unsigned char*)(int)str, 80);
  RealStr__RealToFixed((float)3.40282347E+38F, (short int)9, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)-3.40282347E+38F, (short int)9, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)1.00000000E+10F, (short int)9, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)0.00000000F, (short int)0, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)3.92300900E+6F, (short int)0, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)3.92300911E+1F, (short int)0, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)3.92300892E-4F, (short int)0, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)3.92300892F, (short int)0, (unsigned char*)(int)str, 80);
  RealStr__RealToFloat((float)3.92300900E+6F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300900E+6F, (short int)1);
  RealStr__RealToFloat((float)3.92300900E+6F, (short int)2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300900E+6F, (short int)2);
  RealStr__RealToFloat((float)3.92300900E+6F, (short int)5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300900E+6F, (short int)5);
  RealStr__RealToFloat((float)3.92300911E+1F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300911E+1F, (short int)1);
  RealStr__RealToFloat((float)3.92300911E+1F, (short int)2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300911E+1F, (short int)2);
  RealStr__RealToFloat((float)3.92300911E+1F, (short int)5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300911E+1F, (short int)5);
  RealStr__RealToFloat((float)3.92300892E-4F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300892E-4F, (short int)1);
  RealStr__RealToFloat((float)3.92300892E-4F, (short int)2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300892E-4F, (short int)2);
  RealStr__RealToFloat((float)3.92300892E-4F, (short int)5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFloatReal((float)3.92300892E-4F, (short int)5);
  RealStr__RealToEng((float)3.92300900E+6F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300900E+6F, (short int)1);
  RealStr__RealToEng((float)3.92300900E+6F, (short int)2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300900E+6F, (short int)2);
  RealStr__RealToEng((float)3.92300900E+6F, (short int)5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300900E+6F, (short int)5);
  RealStr__RealToEng((float)3.92300911E+1F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300911E+1F, (short int)1);
  RealStr__RealToEng((float)3.92300911E+1F, (short int)2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300911E+1F, (short int)2);
  RealStr__RealToEng((float)3.92300911E+1F, (short int)5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300911E+1F, (short int)5);
  RealStr__RealToEng((float)3.92300892E-4F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300892E-4F, (short int)1);
  RealStr__RealToEng((float)3.92300892E-4F, (short int)2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300892E-4F, (short int)2);
  RealStr__RealToEng((float)3.92300892E-4F, (short int)5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthEngReal((float)3.92300892E-4F, (short int)5);
  RealStr__RealToFixed((float)3.92300900E+6F, (short int)-5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300900E+6F, (short int)-5);
  RealStr__RealToFixed((float)3.92300900E+6F, (short int)-2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300900E+6F, (short int)-2);
  RealStr__RealToFixed((float)3.92300900E+6F, (short int)-1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300900E+6F, (short int)-1);
  RealStr__RealToFixed((float)3.92300900E+6F, (short int)0, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300900E+6F, (short int)0);
  RealStr__RealToFixed((float)3.92300900E+6F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300900E+6F, (short int)1);
  RealStr__RealToFixed((float)3.92300900E+6F, (short int)4, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300900E+6F, (short int)4);
  RealStr__RealToFixed((float)3.92300892F, (short int)-5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892F, (short int)-5);
  RealStr__RealToFixed((float)3.92300892F, (short int)-2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892F, (short int)-2);
  RealStr__RealToFixed((float)3.92300892F, (short int)-1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892F, (short int)-1);
  RealStr__RealToFixed((float)3.92300892F, (short int)0, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892F, (short int)0);
  RealStr__RealToFixed((float)3.92300892F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892F, (short int)1);
  RealStr__RealToFixed((float)3.92300892F, (short int)4, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892F, (short int)4);
  RealStr__RealToFixed((float)3.92300892E-4F, (short int)-5, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892E-4F, (short int)-5);
  RealStr__RealToFixed((float)3.92300892E-4F, (short int)-2, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892E-4F, (short int)-2);
  RealStr__RealToFixed((float)3.92300892E-4F, (short int)-1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892E-4F, (short int)-1);
  RealStr__RealToFixed((float)3.92300892E-4F, (short int)0, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892E-4F, (short int)0);
  RealStr__RealToFixed((float)3.92300892E-4F, (short int)1, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892E-4F, (short int)1);
  RealStr__RealToFixed((float)3.92300892E-4F, (short int)4, (unsigned char*)(int)str, 80);
  i0 = RealConv__LengthFixedReal((float)3.92300892E-4F, (short int)4);
}

void RealStr_init(void) {
  _mid = _register_module(&RealStr_md.md, NULL);
}
