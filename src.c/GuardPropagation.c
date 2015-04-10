/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "GuardPropagation.d"

static _ModId _mid;

unsigned char GuardPropagation__Dominates(Data__Region reg0, Data__Region reg1) {
  register int i0, i1, i2;
  i0 = (int)reg1 == 0;
  if (i0) goto l1;
  i0 = (int)reg0 == (int)reg1;
  if (i0) goto l1;
  i2 = (int)reg1;
l0:
  i2 += 32;
  i2 = (int)*(void**)i2;
  i1 = i2 == 0;
  if (i1) goto l2;
  i1 = (int)reg0 != i2;
  if (i1) goto l0;
  goto l2;
l1:
  i2 = (int)reg1;
l2:
  i0 = i2 != 0;
  return (unsigned char)i0;
}

unsigned char GuardPropagation__Propagate_CanBeModified(Data__Region guard, Data__Opnd opnd) {
  register int i0, i1;
  i0 = (int)opnd + 12;
  i0 = (int)*(void**)i0;
  i1 = *(int*)(i0-4);
  i1 = _type_test(i1, &Data__GuardDesc_td.td, 6);
  if (i1) goto l0;
  i1 = Data__OpndDesc_ValueOperand((Data__Opnd)(int)opnd);
  goto l1;
l0:
  i1 = GuardPropagation__Dominates((Data__Region)(int)guard, (Data__Region)i0);
l1:
  return (unsigned char)i1;
}

void GuardPropagation__Propagate_ReplaceBoolUses(Data__Region guard, Data__Usable value, unsigned char replaceWith) {
  register int i0, i1, i2, i3, i4, i5, i6;
  i5 = (int)*(void**)(int)value;
  i0 = i5 == 0;
  if (i0) goto l5;
  i0 = (int)guard + 4;
  i1 = ! replaceWith;
l0:
  i2 = i5 + 4;
  i6 = (int)*(void**)i2;
  i2 = (int)GuardCond__OperandInfo((Data__Opnd)i5);
  i3 = (int)*(void**)i0;
  i2 = GuardCond__Implication((GuardCond__RegionInfo)i2, (GuardCond__RegionInfo)i3);
  if (!(i2)) goto l4;
  i2 = GuardPropagation__Propagate_CanBeModified((Data__Region)(int)guard, (Data__Opnd)i5);
  if (!(i2)) goto l4;
  if (replaceWith) goto l1;
  i3 = (int)SymbolTable__constFalse;
  Data__OpndDesc_ReplaceOperand((Data__Opnd)i5, (Data__Usable)i3);
  goto l2;
l1:
  i3 = (int)SymbolTable__constTrue;
  Data__OpndDesc_ReplaceOperand((Data__Opnd)i5, (Data__Usable)i3);
l2:
  i5 += 12;
  i5 = (int)*(void**)i5;
  i3 = i5 + 44;
  i3 = *(short int*)i3;
  i4 = i3 == 18;
  if (i4) goto l3;
  i3 = i3 != 481;
  if (i3) goto l4;
  GuardPropagation__Propagate_ReplaceBoolUses((Data__Region)(int)guard, (Data__Usable)i5, (unsigned char)i1);
  goto l4;
l3:
  GuardPropagation__Propagate_ReplaceBoolUses((Data__Region)(int)guard, (Data__Usable)i5, (unsigned char)replaceWith);
l4:
  i2 = i6 != 0;
  if (!(i2)) goto l5;
  i5 = i6;
  goto l0;
l5:
  ;
}

void GuardPropagation__Propagate_ReplaceUses(Data__Region guard, Data__Usable value, Data__Usable replaceWith) {
  register int i0, i1, i2, i3, i4;
  i0 = *(int*)((int)value-4);
  i0 = _type_test(i0, &Data__ConstDesc_td.td, 3);
  if (i0) goto l2;
  i4 = (int)*(void**)(int)value;
  i3 = i4 == 0;
  if (i3) goto l2;
  i0 = (int)guard + 4;
l0:
  i3 = i4 + 4;
  i3 = (int)*(void**)i3;
  i2 = (int)GuardCond__OperandInfo((Data__Opnd)i4);
  i1 = (int)*(void**)i0;
  i2 = GuardCond__Implication((GuardCond__RegionInfo)i2, (GuardCond__RegionInfo)i1);
  if (!(i2)) goto l1;
  i2 = GuardPropagation__Propagate_CanBeModified((Data__Region)(int)guard, (Data__Opnd)i4);
  if (!(i2)) goto l1;
  Data__OpndDesc_ReplaceOperand((Data__Opnd)i4, (Data__Usable)(int)replaceWith);
l1:
  i2 = i3 != 0;
  if (!(i2)) goto l2;
  i4 = i3;
  goto l0;
l2:
  ;
}

void GuardPropagation__Propagate(Data__Region greg) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8;
  i0 = (int)greg + 4;
  i0 = (int)*(void**)i0;
  i0 += 20;
  i0 = (int)*(void**)i0;
  i1 = i0 + 8;
  i1 = *(short int*)i1;
  i7 = i1 - 1;
  i6 = (int)*(void**)i0;
  i0 = i7 < 0;
  if (i0) goto l6;
  i8 = 0;
l0:
  i0 = (int)_ashl(i8, 2, (unsigned int));
  i0 = i6 + i0;
  i0 = (int)*(void**)i0;
  i5 = (int)*(void**)i0;
  i0 = GuardCond__Unreachable((Data__Region)i5);
  if (i0) goto l5;
  i1 = i5 + 44;
  i4 = *(short int*)i1;
  i2 = i4 == 65;
  if (i2) goto l1;
  i4 = i4 != 64;
  if (i4) goto l5;
l1:
  i3 = i5 + 28;
  i3 = (int)*(void**)i3;
  i0 = (int)*(void**)i3;
  i4 = *(int*)(i0-4);
  i3 = _type_test(i4, &Data__ConstDesc_td.td, 3);
  if (i3) goto l5;
  i4 = _type_test(i4, &Data__InstructionDesc_td.td, 4);
  GuardPropagation__Propagate_ReplaceBoolUses((Data__Region)i5, (Data__Usable)i0, (unsigned char)i2);
  if (!(i4)) goto l5;
  i2 = *(short int*)i1;
  i1 = i2 != 65;
  if (i1) goto l2;
  i1 = i0 + 44;
  i1 = *(short int*)i1;
  i4 = (short int)_ashr(i1, 4, (unsigned short int));
  i4 = i4 != 31;
  if (i4) goto l2;
  i1 = i1 != 508;
  if (i1) goto l3;
l2:
  i2 = i2 == 64;
  if (!(i2)) goto l5;
  i1 = i0 + 44;
  i1 = *(short int*)i1;
  i2 = (short int)_ashr(i1, 4, (unsigned short int));
  i2 = i2 != 32;
  if (i2) goto l5;
  i1 = i1 == 524;
  if (i1) goto l5;
l3:
  i0 += 28;
  i4 = (int)*(void**)i0;
  i2 = (int)*(void**)i4;
  i0 = *(int*)(i2-4);
  i0 = _type_test(i0, &Data__ConstDesc_td.td, 3);
  if (i0) goto l4;
  i1 = i4 + 8;
  i1 = (int)*(void**)i1;
  i1 = (int)*(void**)i1;
  i0 = *(int*)(i1-4);
  i0 = _type_test(i0, &Data__ConstDesc_td.td, 3);
  if (!(i0)) goto l5;
  GuardPropagation__Propagate_ReplaceUses((Data__Region)i5, (Data__Usable)i2, (Data__Usable)i1);
  goto l5;
l4:
  i4 += 8;
  i4 = (int)*(void**)i4;
  i4 = (int)*(void**)i4;
  GuardPropagation__Propagate_ReplaceUses((Data__Region)i5, (Data__Usable)i4, (Data__Usable)i2);
l5:
  i8++;
  i0 = i8 <= i7;
  if (i0) goto l0;
l6:
  ;
}

void GuardPropagation_init(void) {
  _mid = _register_module(&GuardPropagation_md.md, NULL);
}
