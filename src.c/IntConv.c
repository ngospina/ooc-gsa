/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "IntConv.d"

static _ModId _mid;

void IntConv__WState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l0;
  *chClass = 3;
  *nextState = (void*)0;
  goto l1;
l0:
  *chClass = 1;
  i0 = (int)IntConv__W;
  *nextState = (void*)i0;
l1:
  ;
}

void IntConv__SState(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0;
  i0 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i0) goto l0;
  *chClass = 2;
  i0 = (int)IntConv__S;
  *nextState = (void*)i0;
  goto l1;
l0:
  *chClass = 1;
  i0 = (int)IntConv__W;
  *nextState = (void*)i0;
l1:
  ;
}

void IntConv__ScanInt(unsigned char inputCh, signed char *chClass, ConvTypes__ScanState *nextState) {
  register int i0, i1;
  i0 = CharClass__IsWhiteSpace((unsigned char)(int)inputCh);
  if (i0) goto l2;
  i0 = (int)inputCh == 43;
  if (i0) goto l1;
  i0 = (int)inputCh == 45;
  if (i0) goto l1;
  i1 = CharClass__IsNumeric((unsigned char)(int)inputCh);
  if (i1) goto l0;
  *chClass = 2;
  i1 = (int)IntConv__SI;
  *nextState = (void*)i1;
  goto l3;
l0:
  *chClass = 1;
  i1 = (int)IntConv__W;
  *nextState = (void*)i1;
  goto l3;
l1:
  *chClass = 1;
  i0 = (int)IntConv__S;
  *nextState = (void*)i0;
  goto l3;
l2:
  *chClass = 0;
  i0 = (int)IntConv__SI;
  *nextState = (void*)i0;
l3:
  ;
}

signed char IntConv__FormatInt(const unsigned char* str__ref, int str_0d) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14;
  signed char class_;
  ConvTypes__ScanState state;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i12 = Strings__Length((const unsigned char*)(int)str, str_0d);
  i14 = (int)IntConv__SI;
  i1 = 0;
  i5 = 1;
  i6 = 0;
  i4 = 0;
  i2 = 0;
l0:
  i11 = i12 == i4;
  if (i11) goto l19;
  i11 = (int)str + i4;
  i11 = *(unsigned char*)i11;
  i9 = (int)*(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i14;
  class_ = (signed char)i1;
  state = (void*)i14;
  class_ = (signed char)i1;
  state = (void*)i14;
  ((void(*)(unsigned char, signed char *, ConvTypes__ScanState *))i9)((unsigned char)i11, (signed char *)(int)&class_, (ConvTypes__ScanState *)(int)&state);
  if (!(class_<=-1 || class_>=4)) goto l1;
  i0 = 1;
  i11 = 0;
  i10 = i5;
  i13 = 0;
  i9 = i6;
  goto l15;
l1:
  if (!(class_==0)) goto l2;
  i0 = 0;
  i11 = 0;
  i10 = i5;
  i13 = 0;
  i9 = i6;
  goto l15;
l2:
  if (!(class_==1)) goto l14;
  i0 = i11 == 45;
  if (i0) goto l12;
  i10 = i11 == 43;
  if (i10) goto l11;
  i11 -= 48;
  if (i5) goto l6;
  i0 = i11 + (-2147483647-1);
  _div(i10, i0, 10, int);
  i9 = i6 > i10;
  if (i9) goto l5;
  i13 = i6 < i10;
  if (i13) goto l4;
  i9 = i6 != i10;
  if (i9) goto l3;
  _mod(i0, i0, 10, int);
  i0 = i0 != 0;
  if (i0) goto l4;
l3:
  i9 = i6 * 10;
  i9 -= i11;
  i13 = 0;
  goto l10;
l4:
  i9 = i6;
  i3 = 1;
  i13 = 1;
  goto l10;
l5:
  i9 = i6 * 10;
  i9 -= i11;
  i13 = 0;
  goto l10;
l6:
  i13 = 2147483647 - i11;
  _div(i13, i13, 10, int);
  i13 = i6 > i13;
  if (i13) goto l7;
  i9 = i6 * 10;
  i9 = i11 + i9;
  goto l8;
l7:
  i9 = i6;
l8:
  if (i13) goto l9;
  goto l10;
l9:
  i3 = 1;
l10:
  i10 = i5;
  goto l13;
l11:
  i13 = 0;
  i9 = i6;
  i10 = 1;
  goto l13;
l12:
  i9 = i6;
  i13 = 0;
  i10 = 0;
l13:
  i0 = 0;
  i11 = 0;
  goto l15;
l14:
  if (!((class_>=2 && class_<=3))) goto l15;
  i0 = 0;
  i11 = 1;
  i10 = i5;
  i13 = 0;
  i9 = i6;
l15:
  if (i13) goto l16;
  if (i11) goto l16;
  if (!(i0)) goto l17;
l16:
  i8 = i4;
  i7 = i2;
  goto l18;
l17:
  i8 = i4 + 1;
  i7 = class_;
l18:
  i2 = i7;
  i4 = i8;
  i6 = i9;
  i5 = i10;
  i14 = (int)state;
  i1 = class_;
  goto l20;
l19:
  i13 = 0;
  i11 = 1;
  i0 = 0;
l20:
  if (i13) goto l21;
  if (i11) goto l21;
  if (!(i0)) goto l0;
l21:
  if (i13) goto l22;
  if (!(i0)) goto l23;
l22:
  i4 = i3;
  goto l26;
l23:
  i4 = (0xCU & ((unsigned int)1 << i1)) != 0;
  if (i4) goto l25;
  i4 = i2 == 0;
  if (i4) goto l24;
  i4 = 0;
  goto l26;
l24:
  i4 = 3;
  goto l26;
l25:
  i4 = 2;
l26:
  _top_vs = _old_top_vs;
  return (signed char)i4;
}

int IntConv__ValueInt(const unsigned char* str__ref, int str_0d) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  signed char class_;
  ConvTypes__ScanState state;
  unsigned char* str;
  char* _old_top_vs = _top_vs;
  _push_value(int, str, str__ref, str_0d);
  i0 = IntConv__FormatInt((const unsigned char*)(int)str, str_0d);
  i0 = i0 == 0;
  if (i0) goto l0;
  i7 = 0;
  goto l9;
l0:
  i6 = Strings__Length((const unsigned char*)(int)str, str_0d);
  i0 = i6 - 1;
  i6 = i0 >= 0;
  i1 = (int)IntConv__SI;
  if (i6) goto l1;
  i7 = 0;
  goto l9;
l1:
  i2 = 0;
  i7 = 0;
  i3 = 1;
l2:
  i5 = (int)str + i2;
  i4 = *(unsigned char*)i5;
  i5 = (int)*(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i1;
  class_ = (signed char)i6;
  state = (void*)i1;
  class_ = (signed char)i6;
  state = (void*)i1;
  ((void(*)(unsigned char, signed char *, ConvTypes__ScanState *))i5)((unsigned char)i4, (signed char *)(int)&class_, (ConvTypes__ScanState *)(int)&state);
  i6 = class_ != 1;
  if (i6) goto l8;
  i6 = i4 == 45;
  if (i6) goto l6;
  i6 = i4 == 43;
  if (i6) goto l5;
  i4 -= 48;
  if (i3) goto l3;
  i6 = i7 * 10;
  i6 -= i4;
  goto l4;
l3:
  i6 = i7 * 10;
  i6 = i4 + i6;
l4:
  i1 = i3;
  goto l7;
l5:
  i6 = i7;
  i1 = 1;
  goto l7;
l6:
  i6 = i7;
  i1 = 0;
l7:
  i3 = i1;
  i7 = i6;
l8:
  i2++;
  i6 = i2 > i0;
  if (i6) goto l9;
  i1 = (int)state;
  i6 = class_;
  goto l2;
l9:
  _top_vs = _old_top_vs;
  return (int)i7;
}

short int IntConv__LengthInt(int int_) {
  register int i0, i1, i2, i3;
  i0 = int_ == (-2147483647-1);
  if (i0) goto l1;
  i0 = int_ <= 0;
  if (i0) goto l0;
  i1 = 0;
  i0 = int_;
  goto l2;
l0:
  i0 = - int_;
  i1 = 1;
  goto l2;
l1:
  i1 = 1;
  i0 = 2147483647;
l2:
  i2 = i0 > 0;
  if (i2) goto l3;
  i3 = i1;
  goto l5;
l3:
  i3 = i1;
l4:
  _div(i0, i0, 10, int);
  i3++;
  i2 = i0 > 0;
  if (i2) goto l4;
l5:
  return (short int)i3;
}

unsigned char IntConv__IsIntConvException(void) {
  return (unsigned char)0;
}

void IntConv_init(void) {
  register int i0, i1, i2;
  _mid = _register_module(&IntConv_md.md, NULL);
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(4+8);
    if (!_mem) _new_failed(_P(8225));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i0 = (int)_var;
  }
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(4+8);
    if (!_mem) _new_failed(_P(8233));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i1 = (int)_var;
  }
  {
    char *_mem, *_var;
    _mem = GC_malloc_atomic(4+8);
    if (!_mem) _new_failed(_P(8241));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &ConvTypes__ScanDesc_td.td;
    i2 = (int)_var;
  }
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i0 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&IntConv__SState;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i1 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&IntConv__WState;
  *(void(**)(unsigned char, signed char *, ConvTypes__ScanState *))i2 = (void(*)(unsigned char, signed char *, ConvTypes__ScanState *))(int)&IntConv__ScanInt;
  IntConv__S = (void*)i0;
  IntConv__W = (void*)i1;
  IntConv__SI = (void*)i2;
}