/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "GuardCond.d"

static _ModId _mid;

signed char GuardCond__Implies(GuardCond__Condition *c1, _Type c1__tag, GuardCond__Condition *c2, _Type c2__tag) {
  register int i0, i1;
  i1 = (int)*(void**)(int)c1;
  i0 = (int)*(void**)(int)c2;
  i0 = i1 == i0;
  if (i0) goto l0;
  i1 = 0;
  goto l2;
l0:
  i1 = (int)c1 + 4;
  i0 = (int)c2 + 4;
  i1 = *(unsigned char*)i1;
  i0 = *(unsigned char*)i0;
  i1 = i1 == i0;
  if (i1) goto l1;
  i1 = 1;
  goto l2;
l1:
  i1 = 2;
l2:
  return (signed char)i1;
}

unsigned char GuardCond__Unreachable(Data__Region r) {
  register int i0, i1, i2;
  i0 = (int)r + 4;
  i1 = (int)*(void**)i0;
  i0 = i1 + 20;
  i0 = (int)*(void**)i0;
  i0 += 4;
  i0 = (int)*(void**)i0;
  i1 += 16;
  i1 = *(short int*)i1;
  i2 = *(int*)(i0-12);
  i2 *= i1;
  i0 += i2;
  i0 = i1 + i0;
  i0 = *(signed char*)i0;
  i0 = i0 == 1;
  return (unsigned char)i0;
}

unsigned char GuardCond__Contradicting(GuardCond__RegionInfo ri1, GuardCond__RegionInfo ri2) {
  register int i0, i1, i2;
  i0 = (int)ri1 + 20;
  i0 = (int)*(void**)i0;
  i0 += 4;
  i0 = (int)*(void**)i0;
  i1 = (int)ri1 + 16;
  i1 = *(short int*)i1;
  i2 = *(int*)(i0-12);
  i2 *= i1;
  i0 += i2;
  i1 = (int)ri2 + 16;
  i1 = *(short int*)i1;
  i0 = i1 + i0;
  i0 = *(signed char*)i0;
  i0 = i0 == 1;
  return (unsigned char)i0;
}

unsigned char GuardCond__Implication(GuardCond__RegionInfo ri1, GuardCond__RegionInfo ri2) {
  register int i0, i1, i2;
  i0 = (int)ri1 + 20;
  i0 = (int)*(void**)i0;
  i0 += 4;
  i0 = (int)*(void**)i0;
  i1 = (int)ri1 + 16;
  i1 = *(short int*)i1;
  i2 = *(int*)(i0-12);
  i2 *= i1;
  i0 += i2;
  i1 = (int)ri2 + 16;
  i1 = *(short int*)i1;
  i0 = i1 + i0;
  i0 = *(signed char*)i0;
  i0 = i0 == 2;
  return (unsigned char)i0;
}

unsigned char GuardCond__TraceValue(Data__Usable startValue, Data__Usable *value, unsigned char fast) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9;
  Data__Usable first;
  Data__Usable second;
  if (!(fast)) goto l0;
  i9 = *(int*)((int)startValue-4);
  i9 = _type_test(i9, &Data__ResultDesc_td.td, 3);
  if (!(i9)) goto l0;
  i0 = (int)startValue + 4;
  i0 = (int)*(void**)i0;
  i9 = i0 != 0;
  if (i9) goto l22;
l0:
  *value = (void*)(int)startValue;
  i8 = 0;
l1:
  i3 = (int)*value;
  i1 = *(int*)(i3-4);
  i1 = _type_test(i1, &Data__InstructionDesc_td.td, 4);
  if (i1) goto l2;
  i9 = 1;
  goto l18;
l2:
  i2 = i3 + 44;
  i1 = *(short int*)i2;
  i2 = i1 == 18;
  if (i2) goto l16;
  i2 = i1 == 481;
  if (i2) goto l15;
  i2 = i1 == 19;
  if (!(i2)) goto l3;
  i1 = i3 + 28;
  i1 = (int)*(void**)i1;
  i1 = (int)*(void**)i1;
  i1 += 44;
  i1 = *(short int*)i1;
  i1 = i1 == 82;
  if (i1) goto l14;
l3:
  if (i2) goto l4;
  i0 = i7;
  i5 = i6;
  i4 = i8;
  i9 = 1;
  goto l17;
l4:
  i1 = i3 + 28;
  i0 = (int)*(void**)i1;
  i2 = (int)*(void**)i0;
  i5 = i2 + 44;
  i4 = *(short int*)i5;
  i5 = i4 == 80;
  if (i5) goto l5;
  i4 = i4 == 81;
  if (i4) goto l5;
  i9 = 1;
  i4 = i8;
  i5 = i6;
  i0 = i7;
  goto l17;
l5:
  i0 += 8;
  i0 = (int)*(void**)i0;
  i0 = (int)*(void**)i0;
  first = (void*)i7;
  i5 = GuardCond__TraceValue((Data__Usable)i0, (Data__Usable *)(int)&first, (unsigned char)fast);
  i1 = (int)*(void**)i1;
  i1 += 8;
  i1 = (int)*(void**)i1;
  i1 += 8;
  i1 = (int)*(void**)i1;
  i1 = (int)*(void**)i1;
  second = (void*)i6;
  i0 = GuardCond__TraceValue((Data__Usable)i1, (Data__Usable *)(int)&second, (unsigned char)fast);
  i1 = (int)SymbolTable__constTrue;
  i9 = (int)first != i1;
  if (i9) goto l6;
  i1 = (int)second == i1;
  if (i1) goto l7;
l6:
  i4 = i8;
  i9 = 1;
  goto l13;
l7:
  i0 = i5 == i0;
  if (i0) goto l12;
  i2 += 28;
  i2 = (int)*(void**)i2;
  i0 = (int)*(void**)i2;
  i9 = *(int*)(i0-4);
  i9 = _type_test(i9, &Data__GuardDesc_td.td, 6);
  if (!(i9)) goto l8;
  i4 = i2 + 8;
  i4 = (int)*(void**)i4;
  i2 = (int)*(void**)i4;
  i4 = *(int*)(i2-4);
  i4 = _type_test(i4, &Data__GuardDesc_td.td, 6);
  if (i4) goto l9;
l8:
  i4 = i8;
  i9 = 1;
  goto l13;
l9:
  i9 = i0 + 28;
  i2 += 28;
  i9 = (int)*(void**)i9;
  i2 = (int)*(void**)i2;
  i9 = (int)*(void**)i9;
  i2 = (int)*(void**)i2;
  i2 = i9 == i2;
  if (i2) goto l10;
  i4 = i8;
  goto l11;
l10:
  *value = (void*)i9;
  i9 = i0 + 44;
  i9 = *(short int*)i9;
  i9 = i9 == 64;
  i9 = i5 != i9;
  i4 = i8 != i9;
l11:
  i9 = ! i2;
  goto l13;
l12:
  i4 = i5 != i8;
  *value = (void*)(int)first;
  i9 = 0;
l13:
  i5 = (int)second;
  i0 = (int)first;
  goto l17;
l14:
  i9 = 1;
  i4 = i8;
  i5 = i6;
  i0 = i7;
  goto l17;
l15:
  i4 = i3 + 28;
  i4 = (int)*(void**)i4;
  i4 = (int)*(void**)i4;
  *value = (void*)i4;
  i4 = ! i8;
  i0 = i7;
  i5 = i6;
  i9 = 0;
  goto l17;
l16:
  i3 += 28;
  i3 = (int)*(void**)i3;
  i3 = (int)*(void**)i3;
  *value = (void*)i3;
  i4 = i8;
  i5 = i6;
  i0 = i7;
  i9 = 0;
l17:
  i7 = i0;
  i6 = i5;
  i8 = i4;
l18:
  if (!(i9)) goto l1;
  i9 = (int)*value;
  i7 = (int)SymbolTable__constFalse;
  i9 = i7 == i9;
  if (i9) goto l19;
  i9 = i8;
  goto l20;
l19:
  i9 = (int)SymbolTable__constTrue;
  *value = (void*)i9;
  i9 = ! i8;
l20:
  if (!(fast)) goto l23;
  i8 = *(int*)((int)startValue-4);
  i8 = _type_test(i8, &Data__ResultDesc_td.td, 3);
  if (!(i8)) goto l23;
  i7 = (int)startValue + 4;
  i8 = (int)*value;
  *(void**)i7 = (void*)i8;
  if (i9) goto l21;
  i7 = (int)startValue + 8;
  *(int*)i7 = 0;
  goto l23;
l21:
  i7 = (int)startValue + 8;
  *(int*)i7 = 1;
  goto l23;
l22:
  *value = (void*)i0;
  i9 = (int)startValue + 8;
  i9 = *(int*)i9;
  i9 = i9 == 1;
l23:
  return (unsigned char)i9;
}

GuardCond__RegionInfo GuardCond__OperandInfo(Data__Opnd opnd) {
  register int i0, i1, i2, i3;
  i0 = (int)opnd + 12;
  i0 = (int)*(void**)i0;
  i1 = i0 + 44;
  i1 = *(short int*)i1;
  i1 = i1 == 19;
  if (i1) goto l0;
  i3 = i0 + 32;
  i3 = (int)*(void**)i3;
  i3 += 4;
  i3 = (int)*(void**)i3;
  goto l4;
l0:
  i3 = i0 + 28;
  i0 = (int)*(void**)i3;
  i3 = (int)*(void**)i0;
  i0 += 8;
  i0 = (int)*(void**)i0;
  i2 = i3 + 28;
  i3 = (int)opnd != i0;
  i2 = (int)*(void**)i2;
  if (i3) goto l1;
  i1 = i2;
  goto l3;
l1:
  i1 = i2;
l2:
  i0 += 8;
  i0 = (int)*(void**)i0;
  i1 += 8;
  i1 = (int)*(void**)i1;
  i3 = (int)opnd != i0;
  if (i3) goto l2;
l3:
  i3 = (int)*(void**)i1;
  i3 += 4;
  i3 = (int)*(void**)i3;
l4:
  return (void*)i3;
}

void GuardCond__MarkUnreachable(GuardCond__RegionMatrix m, short int count, short int j) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  i6 = count - 1;
  i0 = i6 < 0;
  if (i0) goto l1;
  i1 = *(int*)((int)m-12);
  i5 = i1 * j;
  i0 = (int)m + i5;
  i2 = 0;
l0:
  i3 = i1 * i2;
  i3 = (int)m + i3;
  i7 = i2 + i0;
  i4 = i2 + 1;
  i5 = j + i3;
  *(signed char*)i7 = 1;
  i7 = i4 > i6;
  *(signed char*)i5 = 1;
  if (i7) goto l1;
  i2 = i4;
  goto l0;
l1:
  ;
}

unsigned char GuardCond__InitRegions_CreateRegionInfo_Prefix(GuardCond__RegionInfo ri, Data__Usable value, unsigned char negate) {
  register int i0, i1, i2;
  GuardCond__Condition c;
  i0 = (int)&c + 4;
  *(void**)(int)&c = (void*)(int)value;
  *(unsigned char*)i0 = negate;
  i0 = (int)ri != 0;
  if (i0) goto l0;
  i2 = 0;
  goto l3;
l0:
  i1 = (int)ri;
l1:
  i0 = i1 + 4;
  i0 = GuardCond__Implies((GuardCond__Condition *)i0, &GuardCond__Condition_td.td, (GuardCond__Condition *)(int)&c, &GuardCond__Condition_td.td);
  i2 = i0 == 2;
  if (i2) goto l2;
  i0 = i1 + 12;
  i0 = (int)*(void**)i0;
  i1 = i0;
l2:
  if (i2) goto l3;
  i0 = i1 != 0;
  if (i0) goto l1;
l3:
  return (unsigned char)i2;
}

GuardCond__RegionInfo GuardCond__InitRegions_CreateRegionInfo(Data__Region region, short int *GuardCond__InitRegions_id, GuardCond__RegionSummary *GuardCond__InitRegions_summary) {
  register int i0, i1, i2, i3, i4, i5, i6;
  {
    char *_mem, *_var;
    _mem = GC_malloc(24+8);
    if (!_mem) _new_failed(_P(10146));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &GuardCond__RegionInfoDesc_td.td;
    i5 = (int)_var;
  }
  i4 = i5 + 16;
  i3 = (int)*GuardCond__InitRegions_summary;
  i0 = *GuardCond__InitRegions_id;
  *(short int*)i4 = i0;
  i0 = (int)*(void**)i3;
  *(void**)i5 = (void*)(int)region;
  i1 = *GuardCond__InitRegions_id;
  i2 = (int)_ashl(i1, 2, (unsigned int));
  i2 = i0 + i2;
  *(void**)i2 = (void*)i5;
  i0 = i5 + 20;
  *(void**)i0 = (void*)i3;
  i0 = *(int*)((int)region-4);
  i1 = *GuardCond__InitRegions_id;
  i1++;
   *GuardCond__InitRegions_id = i1;
  i1 = _type_test(i0, &Data__GuardDesc_td.td, 6);
  if (i1) goto l1;
  i3 = _type_test(i0, &Data__MergeDesc_td.td, 6);
  if (!(i3)) goto l0;
  i2 = i5 + 4;
  i6 = (int)region + 32;
  i1 = (int)*(void**)i6;
  i6 = (int)SymbolTable__constTrue;
  *(void**)i2 = (void*)i6;
  i6 = i2 + 4;
  i0 = i1 + 4;
  i1 = i5 + 12;
  *(unsigned char*)i6 = 0;
  i2 = (int)*(void**)i0;
  *(void**)i1 = (void*)i2;
l0:
  i6 = ! i3;
  goto l9;
l1:
  i0 = (int)region + 44;
  i2 = *(short int*)i0;
  if (!(i2<=63 || i2>=68)) goto l2;
  i6 = 1;
  goto l6;
l2:
  if (!(i2==65)) goto l3;
  i1 = i5 + 4;
  i2 = (int)region + 28;
  i6 = (int)*(void**)i2;
  i2 = (int)*(void**)i1;
  i6 = (int)*(void**)i6;
  i2 = GuardCond__TraceValue((Data__Usable)i6, (Data__Usable *)i1, (unsigned char)1);
  i6 = i1 + 4;
  *(unsigned char*)i6 = i2;
  i6 = 0;
  goto l6;
l3:
  if (!(i2==64)) goto l4;
  i1 = i5 + 4;
  i6 = (int)region + 28;
  i2 = (int)*(void**)i6;
  i6 = (int)*(void**)i1;
  i2 = (int)*(void**)i2;
  i2 = GuardCond__TraceValue((Data__Usable)i2, (Data__Usable *)i1, (unsigned char)1);
  i6 = i1 + 4;
  i2 = ! i2;
  *(unsigned char*)i6 = i2;
  i6 = 0;
  goto l6;
l4:
  if (!(i2==66)) goto l5;
  i1 = i5 + 4;
  i2 = (int)SymbolTable__constTrue;
  *(void**)i1 = (void*)i2;
  i2 = i1 + 4;
  *(unsigned char*)i2 = 0;
  i6 = 0;
  goto l6;
l5:
  if (!(i2==67)) goto l6;
  i1 = i5 + 4;
  i2 = i1 + 4;
  *(void**)i1 = (void*)(int)region;
  *(unsigned char*)i2 = 0;
  i6 = 0;
l6:
  if (i6) goto l9;
  i0 = *(short int*)i0;
  i0 = i0 == 66;
  if (i0) goto l8;
  i1 = (int)region + 32;
  i1 = (int)*(void**)i1;
  i0 = i5 + 12;
  i1 += 4;
  i1 = (int)*(void**)i1;
  *(void**)i0 = (void*)i1;
  i1 = (int)*(void**)i0;
  i0 = i3 + 4;
  i0 = (int)*(void**)i0;
  i1 += 16;
  i1 = *(short int*)i1;
  i2 = *(int*)(i0-12);
  i2 *= i1;
  i2 = i0 + i2;
  i2 = i1 + i2;
  i1 = *(signed char*)i2;
  i1 = i1 == 1;
  if (i1) goto l7;
  i2 = i5 + 4;
  i1 = i2 + 4;
  i1 = *(unsigned char*)i1;
  i2 = (int)*(void**)i2;
  i1 = ! i1;
  i1 = GuardCond__InitRegions_CreateRegionInfo_Prefix((GuardCond__RegionInfo)i5, (Data__Usable)i2, (unsigned char)i1);
  if (!(i1)) goto l9;
l7:
  i3 += 8;
  i4 = *(short int*)i4;
  i3 = *(short int*)i3;
  GuardCond__MarkUnreachable((GuardCond__RegionMatrix)i0, (short int)i3, (short int)i4);
  goto l9;
l8:
  i0 = i5 + 12;
  *(void**)i0 = (void*)0;
l9:
  if (!(i6)) goto l10;
l10:
  return (void*)i5;
}

void GuardCond__InitRegions(Data__Region region, short int *id, GuardCond__RegionSummary summary) {
  register int i0, i1;
  i1 = (int)GuardCond__InitRegions_CreateRegionInfo((Data__Region)(int)region, &*id, (GuardCond__RegionSummary *)&summary);
  i0 = (int)region + 4;
  *(void**)i0 = (void*)i1;
  i0 = (int)region + 8;
  *(int*)i0 = 0;
  i0 = (int)region + 64;
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l1;
l0:
  i1 = i0 + 68;
  GuardCond__InitRegions((Data__Region)i0, (short int *)(int)id, (GuardCond__RegionSummary)(int)summary);
  i0 = (int)*(void**)i1;
  i1 = i0 != 0;
  if (i1) goto l0;
l1:
  ;
}

void GuardCond__TransitiveHull(GuardCond__RegionMatrix m, GuardCond__InfoArray r, short int count) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
  i10 = count - 1;
  i0 = i10 < 0;
  if (i0) goto l11;
  i9 = 0;
l0:
  i7 = *(int*)((int)m-12);
  i11 = i7 * i9;
  i6 = (int)m + i11;
  i11 = (int)_ashl(i9, 2, (unsigned int));
  i5 = (int)r + i11;
  i11 = 0;
l1:
  i4 = i7 * i11;
  i0 = (int)m + i4;
  i3 = i9 + i0;
  i4 = *(signed char*)i3;
  i4 = i4 != 3;
  if (i4) goto l2;
  i2 = (int)*(void**)i5;
  i2 += 12;
  i2 = (int)*(void**)i2;
  i2 += 16;
  i4 = *(short int*)i2;
  i2 = i4 + i0;
  i2 = *(signed char*)i2;
  i2 = i2 != 2;
  if (i2) goto l2;
  *(signed char*)i3 = 2;
l2:
  i4 = *(signed char*)i3;
  i4 = i4 == 2;
  if (i4) goto l3;
  i8 = 0;
  goto l9;
l3:
  i1 = 0;
  i8 = 0;
l4:
  i4 = i1 + i6;
  i4 = *(signed char*)i4;
  if (!(i4<=-1 || i4>=4)) goto l5;
  i8 = 1;
  goto l8;
l5:
  if (i4==0) goto l8;
  if (!(i4==1)) goto l6;
  i2 = i7 * i1;
  i2 = (int)m + i2;
  i3 = i1 + i0;
  i4 = i11 + i2;
  *(signed char*)i3 = 1;
  *(signed char*)i4 = 1;
  goto l8;
l6:
  if (!(i4==2)) goto l7;
  i4 = i1 + i0;
  i3 = *(signed char*)i4;
  i3 = i3 == 1;
  if (i3) goto l8;
  *(signed char*)i4 = 2;
  goto l8;
l7:
  if (!(i4==3)) goto l8;
  i3 = i1 + i0;
  i4 = *(signed char*)i3;
  i4 = i4 != 0;
  if (i4) goto l8;
  *(signed char*)i3 = 3;
l8:
  i1++;
  if (i8) goto l9;
  i4 = i1 > i10;
  if (i4) goto l9;
  i8 = 0;
  goto l4;
l9:
  i11++;
  if (i8) goto l10;
  i4 = i11 <= i10;
  if (i4) goto l1;
l10:
  i9++;
  if (i8) goto l11;
  i11 = i9 <= i10;
  if (i11) goto l0;
l11:
  ;
}

short int GuardCond__Init_CountRegions(Data__Region r) {
  register int i0, i1, i2;
  i0 = (int)r + 64;
  i1 = (int)*(void**)i0;
  i0 = i1 != 0;
  if (i0) goto l0;
  i2 = 1;
  goto l2;
l0:
  i2 = 1;
l1:
  i0 = GuardCond__Init_CountRegions((Data__Region)i1);
  i1 += 68;
  i1 = (int)*(void**)i1;
  i2 = i0 + i2;
  i0 = i1 != 0;
  if (i0) goto l1;
l2:
  return (short int)i2;
}

void GuardCond__Init_AddImplications_Implications(short int i, const GuardCond__Condition *cond, GuardCond__RegionMatrix *GuardCond__Init_m) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8;
  GuardCond__Condition cond2;
  i0 = (int)*(void**)(int)cond;
  i7 = (int)*(void**)i0;
  i0 = i7 == 0;
  if (i0) goto l6;
  i8 = (int)cond + 4;
  i0 = (int)&cond2 + 4;
l0:
  i1 = i7 + 12;
  i5 = (int)*(void**)i1;
  i1 = i5 + 44;
  i6 = *(short int*)i1;
  if (i6<=17 || (i6>=20 && i6<=63) || (i6>=66 && i6<=480) || i6>=482) goto l5;
  if (!(i6==18)) goto l1;
  *(void**)(int)&cond2 = (void*)i5;
  i1 = *(unsigned char*)i8;
  *(unsigned char*)i0 = i1;
  GuardCond__Init_AddImplications_Implications((short int)i, (const GuardCond__Condition *)(int)&cond2, (GuardCond__RegionMatrix *)&*GuardCond__Init_m);
  goto l5;
l1:
  if (!(i6==481)) goto l2;
  *(void**)(int)&cond2 = (void*)i5;
  i1 = *(unsigned char*)i8;
  i1 = ! i1;
  *(unsigned char*)i0 = i1;
  GuardCond__Init_AddImplications_Implications((short int)i, (const GuardCond__Condition *)(int)&cond2, (GuardCond__RegionMatrix *)&*GuardCond__Init_m);
  goto l5;
l2:
  if (!(i6==19)) goto l3;
  i2 = i5 + 28;
  i2 = (int)*(void**)i2;
  i2 = (int)*(void**)i2;
  i2 += 44;
  i2 = *(short int*)i2;
  i2 = i2 == 82;
  if (i2) goto l5;
  i3 = (int)*GuardCond__Init_m;
  i1 = (int)GuardCond__OperandInfo((Data__Opnd)i7);
  i2 = *(int*)(i3-12);
  i1 += 16;
  i1 = *(short int*)i1;
  i2 *= i;
  i2 = i3 + i2;
  i2 = i1 + i2;
  i1 = *(signed char*)i2;
  i1 = i1 != 2;
  if (i1) goto l5;
  *(void**)(int)&cond2 = (void*)i5;
  i1 = *(unsigned char*)i8;
  *(unsigned char*)i0 = i1;
  GuardCond__Init_AddImplications_Implications((short int)i, (const GuardCond__Condition *)(int)&cond2, (GuardCond__RegionMatrix *)&*GuardCond__Init_m);
  goto l5;
l3:
  if (!((i6>=64 && i6<=65))) goto l5;
  i5 += 4;
  i4 = (int)*(void**)i5;
  i5 = i6 == 65;
  i3 = *(unsigned char*)i8;
  i5 = i3 == i5;
  i4 += 16;
  i2 = *(short int*)i4;
  if (i5) goto l4;
  i3 = (int)*GuardCond__Init_m;
  i1 = *(int*)(i3-12);
  i1 *= i;
  i4 = i3 + i1;
  i1 = i2 + i4;
  i5 = *(signed char*)i1;
  i5 = i5 != 0;
  if (i5) goto l5;
  *(signed char*)i1 = 3;
  goto l5;
l4:
  i3 = (int)*GuardCond__Init_m;
  i4 = *(int*)(i3-12);
  i1 = i4 * i2;
  i1 = i3 + i1;
  i4 *= i;
  i5 = i3 + i4;
  i4 = i2 + i5;
  *(signed char*)i4 = 1;
  i4 = i + i1;
  *(signed char*)i4 = 1;
l5:
  i1 = i7 + 4;
  i7 = (int)*(void**)i1;
  i1 = i7 != 0;
  if (i1) goto l0;
l6:
  ;
}

void GuardCond__Init_AddImplications(GuardCond__RegionInfo info, short int *GuardCond__Init_count, GuardCond__RegionMatrix *GuardCond__Init_m, Data__Opnd *GuardCond__Init_opnd) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  GuardCond__Condition opndCond;
  i4 = (int)*(void**)(int)info;
  i0 = i4 + 44;
  i5 = *(short int*)i0;
  i0 = i5 == 65;
  i1 = (int)info + 16;
  i6 = *(short int*)i1;
  if (i0) goto l0;
  i0 = i5 != 64;
  if (i0) goto l4;
l0:
  i7 = (int)info + 4;
  i3 = (int)*(void**)i7;
  i2 = (int)SymbolTable__constTrue;
  i3 = i3 == i2;
  if (i3) goto l1;
  i4 += 28;
  i4 = (int)*(void**)i4;
  i4 = (int)*(void**)i4;
  *(void**)(int)&opndCond = (void*)i4;
  i4 = i5 == 64;
  i5 = (int)&opndCond + 4;
  *(unsigned char*)i5 = i4;
  GuardCond__Init_AddImplications_Implications((short int)i6, (const GuardCond__Condition *)(int)&opndCond, (GuardCond__RegionMatrix *)&*GuardCond__Init_m);
  GuardCond__Init_AddImplications_Implications((short int)i6, (const GuardCond__Condition *)i7, (GuardCond__RegionMatrix *)&*GuardCond__Init_m);
  goto l4;
l1:
  i7 += 4;
  i7 = *(unsigned char*)i7;
  if (i7) goto l4;
  i4 = *GuardCond__Init_count;
  i1 = i4 - 1;
  i4 = i1 < 0;
  if (i4) goto l4;
  i4 = (int)*GuardCond__Init_m;
  i5 = *(int*)(i4-12);
  i2 = 0;
l2:
  i7 = i5 * i2;
  i0 = i4 + i7;
  i7 = i6 + i0;
  i3 = *(signed char*)i7;
  i3 = i3 != 0;
  if (i3) goto l3;
  *(signed char*)i7 = 3;
l3:
  i2++;
  i7 = i2 <= i1;
  if (i7) goto l2;
l4:
  i0 = (int)*(void**)(int)info;
  i5 = (int)Data__RegionDesc_RegionMerge((Data__Region)i0);
  i0 = i5 == 0;
  if (i0) goto l7;
  i4 = i5 + 44;
  i4 = *(short int*)i4;
  i4 = i4 == 82;
  if (i4) goto l7;
  i1 = (int)*(void**)(int)info;
  i1 = Data__InstructionDesc_ArgumentIndex((Data__Instruction)i5, (Data__Usable)i1);
  i3 = (int)*(void**)i5;
  i5 = i3 == 0;
  i0 = i1 + 1;
  if (i5) goto l7;
  i4 = (int)&opndCond + 4;
l5:
  i1 = i3 + 12;
  i5 = (int)*(void**)i1;
  i2 = *(int*)(i5-4);
  i2 = _type_test(i2, &Data__GateDesc_td.td, 5);
  if (!(i2)) goto l6;
  i5 = (int)Data__InstructionDesc_NthOperand((Data__Instruction)i5, (short int)i0);
  *GuardCond__Init_opnd = (void*)i5;
  i2 = (int)*GuardCond__Init_opnd;
  i5 = (int)*(void**)(int)&opndCond;
  i2 = (int)*(void**)i2;
  i5 = GuardCond__TraceValue((Data__Usable)i2, (Data__Usable *)(int)&opndCond, (unsigned char)1);
  *(unsigned char*)i4 = i5;
  i2 = (int)*(void**)(int)&opndCond;
  i5 = (int)SymbolTable__constTrue;
  i5 = i2 != i5;
  if (i5) goto l6;
  i1 = (int)*(void**)i1;
  *(void**)(int)&opndCond = (void*)i1;
  GuardCond__Init_AddImplications_Implications((short int)i6, (const GuardCond__Condition *)(int)&opndCond, (GuardCond__RegionMatrix *)&*GuardCond__Init_m);
l6:
  i5 = i3 + 4;
  i3 = (int)*(void**)i5;
  i5 = i3 != 0;
  if (i5) goto l5;
l7:
  ;
}

void GuardCond__Init_PropagateGuards(Data__Region r) {
  register int i0, i1, i2, i3, i4, i5;
  i4 = (int)r + 44;
  i1 = *(short int*)i4;
  i0 = i1 == 65;
  if (i0) goto l0;
  i1 = i1 != 64;
  if (i1) goto l4;
l0:
  i3 = (int)r + 28;
  i3 = (int)*(void**)i3;
  i1 = (int)*(void**)i3;
  i3 = *(int*)(i1-4);
  i5 = _type_test(i3, &Data__ConstDesc_td.td, 3);
  if (i5) goto l4;
  i2 = (int)*(void**)i1;
  i1 = i2 == 0;
  if (i1) goto l4;
l1:
  i1 = i2 + 12;
  i3 = (int)*(void**)i1;
  i1 = (int)r == i3;
  i0 = i2 + 4;
  i0 = (int)*(void**)i0;
  if (i1) goto l3;
  i3 += 32;
  i3 = (int)*(void**)i3;
  i3 = Data__RegionDesc_Dominates((Data__Region)(int)r, (Data__Region)i3);
  if (!(i3)) goto l3;
  i1 = Data__OpndDesc_ValueOperand((Data__Opnd)i2);
  if (!(i1)) goto l3;
  i3 = *(short int*)i4;
  i3 = i3 == 65;
  if (i3) goto l2;
  i3 = (int)SymbolTable__constFalse;
  Data__OpndDesc_ReplaceOperand((Data__Opnd)i2, (Data__Usable)i3);
  goto l3;
l2:
  i3 = (int)SymbolTable__constTrue;
  Data__OpndDesc_ReplaceOperand((Data__Opnd)i2, (Data__Usable)i3);
l3:
  i1 = i0 != 0;
  if (!(i1)) goto l4;
  i2 = i0;
  goto l1;
l4:
  i0 = (int)r + 64;
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l6;
l5:
  i1 = i0 + 68;
  GuardCond__Init_PropagateGuards((Data__Region)i0);
  i0 = (int)*(void**)i1;
  i1 = i0 != 0;
  if (i1) goto l5;
l6:
  ;
}

void GuardCond__Init_InstrDepImplications(Data__Region r, Data__Opnd *GuardCond__Init_opnd) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  i0 = (int)r + 4;
  i1 = (int)*(void**)i0;
  i0 = i1 + 20;
  i0 = (int)*(void**)i0;
  i2 = (int)r + 56;
  i4 = (int)*(void**)i2;
  i1 += 16;
  i5 = *(short int*)i1;
  i0 += 4;
  i6 = (int)*(void**)i0;
  i0 = i4 == 0;
  if (i0) goto l5;
l0:
  i0 = *(int*)(i4-4);
  i0 = _type_test(i0, &Data__RegionDesc_td.td, 5);
  if (i0) goto l3;
  i3 = i4 + 44;
  i3 = *(short int*)i3;
  i3 = i3 == 19;
  if (i3) goto l4;
  i7 = i4 + 28;
  i7 = (int)*(void**)i7;
  *GuardCond__Init_opnd = (void*)i7;
  i7 = (int)*GuardCond__Init_opnd;
  i7 = i7 == 0;
  if (i7) goto l4;
l1:
  i0 = (int)*GuardCond__Init_opnd;
  i2 = (int)*(void**)i0;
  i7 = *(int*)(i2-4);
  i7 = _type_test(i7, &Data__ResultDesc_td.td, 3);
  if (!(i7)) goto l2;
  i2 += 16;
  i2 = (int)*(void**)i2;
  i2 += 32;
  i2 = (int)*(void**)i2;
  i2 += 4;
  i1 = (int)*(void**)i2;
  i2 = *(int*)(i6-12);
  i2 *= i5;
  i2 = i6 + i2;
  i1 += 16;
  i1 = *(short int*)i1;
  i7 = i1 + i2;
  i3 = *(signed char*)i7;
  i3 = i3 == 1;
  if (i3) goto l2;
  *(signed char*)i7 = 2;
l2:
  i7 = i0 + 8;
  i7 = (int)*(void**)i7;
  *GuardCond__Init_opnd = (void*)i7;
  i7 = (int)*GuardCond__Init_opnd;
  i7 = i7 != 0;
  if (i7) goto l1;
  goto l4;
l3:
  GuardCond__Init_InstrDepImplications((Data__Region)i4, (Data__Opnd *)&*GuardCond__Init_opnd);
l4:
  i0 = i4 + 36;
  i4 = (int)*(void**)i0;
  i0 = i4 != 0;
  if (i0) goto l0;
l5:
  ;
}

void GuardCond__Init(Data__GlobalRegion greg) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19;
  short int count;
  GuardCond__RegionMatrix m;
  Data__Opnd opnd;
  Data__Opnd opnd2;
  Data__Usable opndValue;
  {
    char *_mem, *_var;
    _mem = GC_malloc(12+8);
    if (!_mem) _new_failed(_P(21288));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &GuardCond__RegionSummaryDesc_td.td;
    i0 = (int)_var;
  }
  Data__GlobalRegionDesc_NumberDominanceTree((Data__GlobalRegion)(int)greg);
  GuardCond__Init_PropagateGuards((Data__Region)(int)greg);
  i7 = GuardCond__Init_CountRegions((Data__Region)(int)greg);
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i7 < 0) _invalid_length(i7, _P(21348));
    if(i7 < 0) _invalid_length(i7, _P(21355));
    _mem = GC_malloc_atomic(i7*i7*1+16);
    if (!_mem) _new_failed(_P(21340));
    _var = _mem+16;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i7;
    *(--_dim_ptr) = i7;
    i2 = (int)_var;
  }
  i8 = i7 - 1;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i7 < 0) _invalid_length(i7, _P(21328));
    _mem = GC_malloc(i7*4+8);
    if (!_mem) _new_failed(_P(21307));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i7;
    i1 = (int)_var;
  }
  i3 = i8 < 0;
  *(void**)i0 = (void*)i1;
  if (i3) goto l3;
  i9 = 0;
l0:
  i1 = *(int*)(i2-12);
  i1 *= i9;
  i6 = i2 + i1;
  i5 = 0;
l1:
  i4 = i5 + i6;
  i3 = i5 + 1;
  i1 = i3 > i8;
  *(signed char*)i4 = 0;
  if (i1) goto l2;
  i5 = i3;
  goto l1;
l2:
  i9++;
  i1 = i9 <= i8;
  if (i1) goto l0;
l3:
  i1 = i0 + 4;
  *(void**)i1 = (void*)i2;
  i1 = i0 + 8;
  *(short int*)i1 = i7;
  Data__RegionDesc_ClearInfo((Data__Region)(int)greg, (int)0);
  count = (short int)0;
  GuardCond__InitRegions((Data__Region)(int)greg, (short int *)(int)&count, (GuardCond__RegionSummary)i0);
  i1 = count - 1;
  i18 = i1 >= 0;
  GuardCond__Init_InstrDepImplications((Data__Region)(int)greg, (Data__Opnd *)&opnd);
  if (i18) goto l4;
  i3 = (int)opnd;
  goto l30;
l4:
  i4 = *(int*)(i2-12);
  i11 = 0;
  i3 = (int)opnd;
l5:
  i5 = i4 * i11;
  i10 = i2 + i5;
  i5 = i11 + i10;
  i5 = *(signed char*)i5;
  i5 = i5 == 1;
  if (i5) goto l29;
  i9 = (int)*(void**)i0;
  i8 = (int)_ashl(i11, 2, (unsigned int));
  i9 += i8;
  i9 = (int)*(void**)i9;
  i8 = i9 == 0;
  if (i8) goto l7;
  i7 = i9;
l6:
  i8 = i7 + 16;
  i8 = *(short int*)i8;
  i13 = i8 + i10;
  i7 += 12;
  i7 = (int)*(void**)i7;
  *(signed char*)i13 = 2;
  i8 = i7 != 0;
  if (i8) goto l6;
l7:
  i5 = (int)*(void**)i9;
  i8 = *(int*)(i5-4);
  i8 = _type_test(i8, &Data__MergeDesc_td.td, 6);
  if (i8) goto l8;
  i8 = i16;
  i13 = i3;
  goto l19;
l8:
  i5 += 28;
  i7 = (int)*(void**)i5;
  i5 = i7 != 0;
  if (i5) goto l9;
  i8 = i16;
  i13 = 0;
  goto l19;
l9:
  i13 = i7;
  i8 = i16;
l10:
  i15 = i9;
l11:
  i6 = (int)*(void**)i13;
  i6 += 4;
  i6 = (int)*(void**)i6;
  i6 += 16;
  i6 = *(short int*)i6;
  i19 = i4 * i6;
  i19 = i2 + i19;
  i17 = i15 + 16;
  i17 = *(short int*)i17;
  i5 = i17 + i19;
  *(signed char*)i5 = 2;
  i6 = (int)*(void**)i15;
  i6 = (int)Data__RegionDesc_RegionMerge((Data__Region)i6);
  i19 = i6 == 0;
  if (i19) goto l12;
  i19 = i6 + 44;
  i19 = *(short int*)i19;
  i19 = i19 == 82;
  if (i19) goto l12;
  i19 = 0;
  goto l13;
l12:
  i19 = 1;
l13:
  if (i19) goto l14;
  i6 += 4;
  i15 = (int)*(void**)i6;
l14:
  if (!(i19)) goto l11;
  i5 = (int)*(void**)i9;
  i17 = i5 + 44;
  i17 = *(short int*)i17;
  i17 = i17 == 82;
  if (i17) goto l18;
  i5 += 28;
  i19 = (int)*(void**)i5;
  i5 = i19 != 0;
  i7 = (int)*(void**)i13;
  i7 += 4;
  i7 = (int)*(void**)i7;
  i7 += 16;
  i17 = *(short int*)i7;
  if (i5) goto l15;
  i8 = 0;
  goto l18;
l15:
  i6 = i4 * i17;
  i7 = i2 + i6;
  i8 = i19;
l16:
  i15 = i8 != i13;
  if (!(i15)) goto l17;
  i19 = (int)*(void**)i8;
  i19 += 4;
  i19 = (int)*(void**)i19;
  i19 += 16;
  i19 = *(short int*)i19;
  i5 = i4 * i19;
  i6 = i2 + i5;
  i15 = i19 + i7;
  i5 = i17 + i6;
  *(signed char*)i15 = 1;
  *(signed char*)i5 = 1;
l17:
  i15 = i8 + 8;
  i8 = (int)*(void**)i15;
  i15 = i8 != 0;
  if (i15) goto l16;
l18:
  i5 = i13 + 8;
  i13 = (int)*(void**)i5;
  i5 = i13 != 0;
  if (i5) goto l10;
l19:
  i17 = i9 + 4;
  i5 = (int)*(void**)i17;
  i7 = *(int*)(i5-4);
  i7 = _type_test(i7, &Data__GateDesc_td.td, 5);
  if (!(i7)) goto l20;
  i5 += 28;
  i6 = (int)*(void**)i5;
  i5 = (int)*(void**)i6;
  i5 += 44;
  i5 = *(short int*)i5;
  i5 = i5 != 82;
  if (i5) goto l21;
l20:
  i12 = i8;
  i15 = i14;
  goto l28;
l21:
  i15 = i6 + 8;
  i19 = (int)*(void**)i15;
  i15 = i19 != 0;
  if (i15) goto l22;
  i15 = i14;
  i5 = 0;
  i12 = i8;
  goto l27;
l22:
  i15 = i17 + 4;
  i12 = i8;
  i5 = 0;
  i6 = i14;
l23:
  i7 = (int)*(void**)i19;
  opndValue = (void*)i6;
  i6 = GuardCond__TraceValue((Data__Usable)i7, (Data__Usable *)(int)&opndValue, (unsigned char)1);
  i7 = (int)SymbolTable__constTrue;
  i7 = (int)opndValue != i7;
  if (i7) goto l24;
  i7 = *(unsigned char*)i15;
  i6 = i6 != i7;
  if (i6) goto l25;
l24:
  i6 = i5 + 1;
  i5 = i6;
  i12 = i19;
l25:
  i6 = i19 + 8;
  i19 = (int)*(void**)i6;
  i6 = i5 > 1;
  if (i6) goto l26;
  i6 = i19 == 0;
  if (i6) goto l26;
  i6 = (int)opndValue;
  goto l23;
l26:
  i15 = (int)opndValue;
l27:
  i6 = i5 == 1;
  if (!(i6)) goto l28;
  i7 = (int)GuardCond__OperandInfo((Data__Opnd)i12);
  i7 += 16;
  i7 = *(short int*)i7;
  i6 = i7 + i10;
  *(signed char*)i6 = 2;
l28:
  i14 = i15;
  i3 = i13;
  i16 = i12;
l29:
  i11++;
  i5 = i11 <= i1;
  if (i5) goto l5;
l30:
  if (!(i18)) goto l39;
  i16 = i1;
l31:
  i4 = (int)*(void**)i0;
  i17 = (int)_ashl(i16, 2, (unsigned int));
  i4 += i17;
  i4 = (int)*(void**)i4;
  i4 = (int)*(void**)i4;
  i4 += 64;
  i15 = (int)*(void**)i4;
  i4 = i15 == 0;
  if (i4) goto l38;
l32:
  i4 = i15 + 68;
  i13 = (int)*(void**)i4;
  i12 = i13 != 0;
  if (!(i12)) goto l37;
  i11 = *(int*)(i15-4);
  i17 = _type_test(i11, &Data__GuardDesc_td.td, 6);
  i4 = i15 + 4;
  i14 = i13;
l33:
  if (!(i17)) goto l36;
  i11 = *(int*)(i14-4);
  i11 = _type_test(i11, &Data__GuardDesc_td.td, 6);
  if (!(i11)) goto l36;
  i9 = (int)*(void**)i4;
  i10 = *(int*)(i2-12);
  i5 = i9 + 16;
  i7 = *(short int*)i5;
  i5 = i10 * i7;
  i8 = i2 + i5;
  i5 = i7 + i8;
  i5 = *(signed char*)i5;
  i5 = i5 == 1;
  if (i5) goto l36;
  i6 = i14 + 4;
  i11 = (int)*(void**)i6;
  i6 = i11 + 16;
  i15 = *(short int*)i6;
  i6 = i10 * i15;
  i6 = i2 + i6;
  i5 = i15 + i6;
  i5 = *(signed char*)i5;
  i5 = i5 == 1;
  if (i5) goto l36;
  i5 = GuardCond__Contradicting((GuardCond__RegionInfo)i9, (GuardCond__RegionInfo)i11);
  if (!(i5)) goto l36;
  i10 *= i16;
  i11 = i2 + i10;
  i10 = 0;
l34:
  i9 = i10 + i8;
  i9 = *(signed char*)i9;
  i9 = i9 != 2;
  if (i9) goto l35;
  i9 = i10 + i6;
  i9 = *(signed char*)i9;
  i9 = i9 != 2;
  if (i9) goto l35;
  i9 = i10 + i11;
  *(signed char*)i9 = 2;
l35:
  i10++;
  i9 = i10 <= i1;
  if (i9) goto l34;
l36:
  i5 = i14 + 68;
  i14 = (int)*(void**)i5;
  i5 = i14 != 0;
  if (i5) goto l33;
l37:
  if (!(i12)) goto l38;
  i15 = i13;
  goto l32;
l38:
  i16--;
  i4 = i16 >= 0;
  if (i4) goto l31;
l39:
  i4 = i1 >= 1;
  if (i4) goto l40;
  i9 = i2;
  i8 = count;
  goto l44;
l40:
  i6 = 1;
  i8 = count;
  i9 = i2;
l41:
  i4 = (int)*(void**)i0;
  i5 = (int)_ashl(i6, 2, (unsigned int));
  i4 += i5;
  i5 = (int)*(void**)i4;
  i4 = (int)*(void**)i5;
  i7 = *(int*)(i4-4);
  i7 = _type_test(i7, &Data__MergeDesc_td.td, 6);
  if (!(i7)) goto l42;
  i4 = (int)Data__RegionDesc_RegionMerge((Data__Region)i4);
  i4 = i4 == 0;
  if (i4) goto l43;
l42:
  count = (short int)i8;
  m = (void*)i9;
  opnd = (void*)i3;
  count = (short int)i8;
  m = (void*)i9;
  opnd = (void*)i3;
  GuardCond__Init_AddImplications((GuardCond__RegionInfo)i5, &count, (GuardCond__RegionMatrix *)&m, (Data__Opnd *)&opnd);
  i3 = (int)opnd;
  i9 = (int)m;
  i8 = count;
l43:
  i6++;
  i4 = i6 <= i1;
  if (i4) goto l41;
l44:
  i0 = (int)*(void**)i0;
  GuardCond__TransitiveHull((GuardCond__RegionMatrix)i9, (GuardCond__InfoArray)i0, (short int)i8);
}

unsigned char GuardCond__RemoveDeadReferences_Dead(short int i, GuardCond__RegionSummary *GuardCond__RemoveDeadReferences_s) {
  register int i0, i1;
  i0 = (int)*GuardCond__RemoveDeadReferences_s;
  i1 = (int)*(void**)i0;
  i0 = (int)_ashl(i, 2, (unsigned int));
  i0 = i1 + i0;
  i0 = (int)*(void**)i0;
  i0 = (int)*(void**)i0;
  i0 += 32;
  i0 = (int)*(void**)i0;
  i0 = i0 == 0;
  return (unsigned char)i0;
}

void GuardCond__RemoveDeadReferences(Data__GlobalRegion greg) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18;
  GuardCond__RegionSummary s;
  i0 = (int)greg + 4;
  i0 = (int)*(void**)i0;
  i0 += 20;
  i2 = (int)*(void**)i0;
  i0 = i2 + 8;
  i1 = *(short int*)i0;
  i3 = i1 == 1;
  if (i3) goto l1;
  s = (void*)i2;
  i4 = GuardCond__RemoveDeadReferences_Dead((short int)1, (GuardCond__RegionSummary *)&s);
  if (i4) goto l1;
  i3 = 1;
l0:
  i3++;
  i5 = i1 == i3;
  if (i5) goto l2;
  s = (void*)i2;
  i5 = GuardCond__RemoveDeadReferences_Dead((short int)i3, (GuardCond__RegionSummary *)&s);
  if (!(i5)) goto l0;
  goto l2;
l1:
  i3 = 1;
l2:
  i4 = i1 - 1;
  i17 = i3 <= i4;
  if (i17) goto l3;
  i18 = 0;
  goto l8;
l3:
  i6 = i4 >= 0;
  i5 = i2 + 4;
  i15 = i3;
  i18 = 0;
l4:
  s = (void*)i2;
  i7 = GuardCond__RemoveDeadReferences_Dead((short int)i15, (GuardCond__RegionSummary *)&s);
  if (i7) goto l6;
  if (!(i6)) goto l7;
  i10 = (int)*(void**)i5;
  i11 = i15 + i18;
  i7 = *(int*)(i10-12);
  i8 = i7 * i11;
  i12 = i10 + i8;
  i7 *= i15;
  i13 = i10 + i7;
  i9 = 0;
l5:
  i16 = i9 + i13;
  i8 = i9 + i12;
  i14 = i9 + 1;
  i16 = *(signed char*)i16;
  i7 = i14 > i4;
  *(signed char*)i8 = i16;
  if (i7) goto l7;
  i9 = i14;
  goto l5;
l6:
  i7 = i18 - 1;
  i18 = i7;
l7:
  i15++;
  i7 = i15 <= i4;
  if (i7) goto l4;
l8:
  if (!(i17)) goto l13;
  i6 = i18 + i4;
  i8 = i6 < 0;
  i7 = i2 + 4;
  i5 = i3;
  i9 = 0;
l9:
  s = (void*)i2;
  i10 = GuardCond__RemoveDeadReferences_Dead((short int)i5, (GuardCond__RegionSummary *)&s);
  if (i10) goto l11;
  if (i8) goto l12;
  i14 = (int)*(void**)i7;
  i15 = i5 + i9;
  i16 = *(int*)(i14-12);
  i13 = 0;
l10:
  i12 = i16 * i13;
  i12 = i14 + i12;
  i10 = i5 + i12;
  i18 = i15 + i12;
  i11 = i13 + 1;
  i10 = *(signed char*)i10;
  *(signed char*)i18 = i10;
  i13 = i11 > i6;
  if (i13) goto l12;
  i13 = i11;
  goto l10;
l11:
  i10 = i9 - 1;
  i9 = i10;
l12:
  i5++;
  i10 = i5 <= i4;
  if (i10) goto l9;
l13:
  if (i17) goto l14;
  i11 = 0;
  goto l18;
l14:
  i11 = 0;
l15:
  s = (void*)i2;
  i5 = GuardCond__RemoveDeadReferences_Dead((short int)i3, (GuardCond__RegionSummary *)&s);
  if (i5) goto l16;
  i9 = (int)*(void**)i2;
  i8 = (int)_ashl(i3, 2, (unsigned int));
  i8 = i9 + i8;
  i8 = (int)*(void**)i8;
  i7 = i3 + i11;
  i10 = i8 + 16;
  i5 = (int)_ashl(i7, 2, (unsigned int));
  i6 = *(short int*)i10;
  i5 = i9 + i5;
  *(void**)i5 = (void*)i8;
  i7 = i11 + i6;
  *(short int*)i10 = i7;
  goto l17;
l16:
  i5 = i11 - 1;
  i11 = i5;
l17:
  i3++;
  i5 = i3 <= i4;
  if (i5) goto l15;
l18:
  i1 = i11 + i1;
  *(short int*)i0 = i1;
}

void GuardCond_init(void) {
  _mid = _register_module(&GuardCond_md.md, &GuardCond__RegionInfoDesc_td.td);
}
