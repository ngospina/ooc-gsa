/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "UndefVar.d"

static _ModId _mid;

void UndefVar__AddToTrue(GuardCond__Condition *c, _Type c__tag) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  i6 = (int)*(void**)(int)c;
  i0 = *(int*)(i6-4);
  i0 = _type_test(i0, &Data__ResultDesc_td.td, 3);
  if (!(i0)) goto l3;
  i1 = UndefVar__topOfStack;
  i5 = i6 + 8;
  i7 = (int)UndefVar__trueList;
  i4 = *(int*)i5;
  i4 *= i1;
  i3 = *(int*)(i7-8);
  i3 = i3 != i1;
  *(int*)i5 = i4;
  if (i3) goto l2;
  i4 = i1 - 1;
  i2 = i4 < 0;
  i3 = i1 + 128;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i3 < 0) _invalid_length(i3, _P(3040));
    _mem = GC_malloc(i3*8+8);
    if (!_mem) _new_failed(_P(3016));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i3;
    i6 = (int)_var;
  }
  if (i2) goto l1;
  i2 = 0;
l0:
  i3 = (int)_ashl(i2, 3, (unsigned int));
  i3 = i6 + i3;
  i5 = (int)_ashl(i2, 3, (unsigned int));
  i0 = i7 + i5;
  i5 = i2 + 1;
  (void)memcpy((void*) i3, (const void*) i0, 8);
  i2 = i5 > i4;
  if (i2) goto l1;
  i2 = i5;
  goto l0;
l1:
  UndefVar__trueList = (void*)i6;
l2:
  i4 = (int)UndefVar__trueList;
  i5 = (int)_ashl(i1, 3, (unsigned int));
  i6 = i4 + i5;
  i5 = i1 + 1;
  (void)memcpy((void*) i6, (const void*) (int)c, 8);
  UndefVar__topOfStack = i5;
l3:
  ;
}

unsigned char UndefVar__False(GuardCond__Condition *c, _Type c__tag) {
  register int i0, i1, i2, i3;
  i0 = UndefVar__topOfStack;
  i2 = i0 - 1;
  i0 = i2 >= 2;
  if (i0) goto l0;
  i3 = 0;
  goto l2;
l0:
  i1 = 2;
l1:
  i3 = (int)UndefVar__trueList;
  i0 = (int)_ashl(i1, 3, (unsigned int));
  i3 += i0;
  i3 = GuardCond__Implies((GuardCond__Condition *)i3, &GuardCond__Condition_td.td, (GuardCond__Condition *)(int)c, c__tag);
  i3 = i3 == 1;
  i1++;
  if (i3) goto l2;
  i0 = i1 <= i2;
  if (i0) goto l1;
l2:
  return (unsigned char)i3;
}

Data__Region UndefVar__Reachable_AddGuardToTrue_SinglePath(Data__Merge merge) {
  register int i0, i1, i2;
  i0 = (int)merge + 28;
  i0 = (int)*(void**)i0;
  i1 = (int)*(void**)i0;
  i2 = i0 + 8;
  i0 = i1 + 4;
  i2 = (int)*(void**)i2;
  i0 = (int)*(void**)i0;
  i2 = (int)*(void**)i2;
  i0 += 4;
  i0 = UndefVar__False((GuardCond__Condition *)i0, &GuardCond__Condition_td.td);
  if (i0) goto l2;
  i0 = i2 + 4;
  i0 = (int)*(void**)i0;
  i0 += 4;
  i0 = UndefVar__False((GuardCond__Condition *)i0, &GuardCond__Condition_td.td);
  if (i0) goto l0;
  i0 = 0;
  goto l1;
l0:
  i0 = i1;
l1:
  i2 = i0;
l2:
  return (void*)i2;
}

unsigned char UndefVar__Reachable_AddGuardToTrue(GuardCond__RegionInfo info) {
  register int i0, i1, i2, i3, i4;
  i2 = (int)*(void**)(int)info;
  i0 = i2 + 44;
  i1 = *(short int*)i0;
  i0 = i1 == 65;
  if (i0) goto l2;
  i4 = i1 == 64;
  if (i4) goto l2;
  i3 = i1 == 81;
  if (i3) goto l0;
  i1 = i1 == 80;
  if (i1) goto l0;
  i0 = 0;
  goto l7;
l0:
  i2 = (int)UndefVar__Reachable_AddGuardToTrue_SinglePath((Data__Merge)i2);
  i0 = i2 != 0;
  if (i0) goto l1;
  goto l7;
l1:
  i3 = i2 + 4;
  i3 = (int)*(void**)i3;
  i3 = UndefVar__Reachable_AddGuardToTrue((GuardCond__RegionInfo)i3);
  goto l7;
l2:
  i1 = (int)info + 4;
  i2 = (int)*(void**)i1;
  i0 = (int)SymbolTable__constTrue;
  i0 = i2 == i0;
  if (i0) goto l5;
  i2 += 8;
  i2 = *(int*)i2;
  i2 = _abs(i2);
  i3 = i2 <= 1;
  if (i3) goto l4;
  i0 = (int)UndefVar__trueList;
  i3 = (int)_ashl(i2, 3, (unsigned int));
  i3 = i0 + i3;
  i2 = i1 + 4;
  i3 += 4;
  i2 = *(unsigned char*)i2;
  i3 = *(unsigned char*)i3;
  i0 = i3 != i2;
  if (i0) goto l3;
  goto l7;
l3:
  i3 = 0;
  goto l7;
l4:
  UndefVar__AddToTrue((GuardCond__Condition *)i1, &GuardCond__Condition_td.td);
  i0 = 0;
  goto l7;
l5:
  i1 += 4;
  i0 = *(unsigned char*)i1;
  if (i0) goto l6;
  goto l7;
l6:
  i3 = 0;
l7:
  if (i0) goto l8;
  i3 = 1;
l8:
  return (unsigned char)i3;
}

unsigned char UndefVar__Reachable_AddGatesToTrue(Data__Opnd gateOpnd) {
  register int i0, i1, i2, i3, i4, i5, i6;
  GuardCond__Condition cond;
  i0 = (int)gateOpnd + 12;
  i0 = (int)*(void**)i0;
  i0 += 28;
  i0 = (int)*(void**)i0;
  i0 = (int)*(void**)i0;
  i5 = Data__OpndDesc_OperandIndex((Data__Opnd)(int)gateOpnd);
  i4 = (int)*(void**)i0;
  i0 = i4 != 0;
  if (i0) goto l0;
  i6 = 0;
  goto l11;
l0:
  i0 = (int)&cond + 4;
l1:
  i1 = i4 + 12;
  i3 = (int)*(void**)i1;
  i1 = *(int*)(i3-4);
  i1 = _type_test(i1, &Data__GateDesc_td.td, 5);
  if (i1) goto l2;
  i6 = 0;
  goto l9;
l2:
  i2 = i3 + 8;
  i2 = *(int*)i2;
  i1 = _abs(i2);
  i2 = i1 > 1;
  if (i2) goto l3;
  i6 = 0;
  goto l9;
l3:
  i2 = (int)Data__InstructionDesc_NthArgument((Data__Instruction)i3, (short int)i5);
  i3 = (int)SymbolTable__constTrue;
  i3 = i2 != i3;
  if (i3) goto l4;
  i3 = (int)UndefVar__trueList;
  i6 = (int)_ashl(i1, 3, (unsigned int));
  i6 = i3 + i6;
  i6 += 4;
  i6 = *(unsigned char*)i6;
  if (i6) goto l5;
l4:
  i3 = (int)SymbolTable__constFalse;
  i3 = i2 != i3;
  if (i3) goto l6;
  i3 = (int)UndefVar__trueList;
  i6 = (int)_ashl(i1, 3, (unsigned int));
  i6 = i3 + i6;
  i6 += 4;
  i6 = *(unsigned char*)i6;
  if (i6) goto l6;
l5:
  i6 = 1;
  goto l9;
l6:
  i3 = *(int*)(i2-4);
  i3 = _type_test(i3, &Data__ResultDesc_td.td, 3);
  if (i3) goto l7;
  i6 = 0;
  goto l9;
l7:
  i3 = i2 + 8;
  i3 = *(int*)i3;
  i3 = _abs(i3);
  i6 = i3 > 1;
  if (i6) goto l8;
  i6 = (int)UndefVar__trueList;
  i3 = (int)_ashl(i1, 3, (unsigned int));
  i3 = i6 + i3;
  *(void**)(int)&cond = (void*)i2;
  i2 = i3 + 4;
  i2 = *(unsigned char*)i2;
  *(unsigned char*)i0 = i2;
  UndefVar__AddToTrue((GuardCond__Condition *)(int)&cond, &GuardCond__Condition_td.td);
  i6 = 0;
  goto l9;
l8:
  i6 = (int)UndefVar__trueList;
  i2 = (int)_ashl(i1, 3, (unsigned int));
  i2 = i6 + i2;
  i1 = (int)_ashl(i3, 3, (unsigned int));
  i6 += i1;
  i1 = i2 + 4;
  i6 += 4;
  i1 = *(unsigned char*)i1;
  i6 = *(unsigned char*)i6;
  i6 = i1 != i6;
l9:
  if (i6) goto l10;
  i1 = i4 + 4;
  i1 = (int)*(void**)i1;
  i4 = i1;
l10:
  if (i6) goto l11;
  i1 = i4 != 0;
  if (i1) goto l1;
l11:
  if (i6) goto l12;
  i0 = 1;
  goto l13;
l12:
  i0 = 0;
l13:
  return (unsigned char)i0;
}

void UndefVar__Reachable_PopTrue(short int oldCount) {
  register int i0, i1, i2, i3, i4, i5;
  i0 = UndefVar__topOfStack;
  i4 = i0 - 1;
  i0 = oldCount > i4;
  if (i0) goto l3;
  i0 = (int)UndefVar__trueList;
  i3 = oldCount;
l0:
  i5 = (int)_ashl(i3, 3, (unsigned int));
  i5 = i0 + i5;
  i2 = (int)*(void**)i5;
  i5 = *(int*)(i2-4);
  i5 = _type_test(i5, &Data__ResultDesc_td.td, 3);
  if (!(i5)) goto l2;
  i1 = i2 + 8;
  i5 = *(int*)i1;
  i5 = i5 < 0;
  if (i5) goto l1;
  *(int*)i1 = 1;
  goto l2;
l1:
  *(int*)i1 = -1;
l2:
  i3++;
  i5 = i3 <= i4;
  if (i5) goto l0;
l3:
  UndefVar__topOfStack = oldCount;
}

unsigned char UndefVar__Reachable_Test(short int i, Data__Opnd opnd, Data__Object *UndefVar__Reachable_var) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8;
  i6 = (int)*(void**)(int)opnd;
  i7 = (int)*UndefVar__Reachable_var;
  i0 = i6 == i7;
  if (i0) goto l17;
  i6 += 16;
  i0 = (int)*(void**)i6;
  i6 = i0 + 44;
  i6 = *(short int*)i6;
  i6 = i6 != 19;
  if (i6) goto l16;
  i1 = i0 + 56;
  i1 = (int)*(void**)i1;
  i7 = i1 != i7;
  if (i7) goto l15;
  i7 = (int)UndefVar__infoList;
  i6 = *(int*)(i7-8);
  i6 = i6 != i;
  if (i6) goto l2;
  i5 = i - 1;
  i8 = i5 < 0;
  i1 = i + 128;
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i1 < 0) _invalid_length(i1, _P(8155));
    _mem = GC_malloc(i1*4+8);
    if (!_mem) _new_failed(_P(8140));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i1;
    i4 = (int)_var;
  }
  if (i8) goto l1;
  i8 = 0;
l0:
  i1 = (int)_ashl(i8, 2, (unsigned int));
  i1 = i7 + i1;
  i6 = (int)_ashl(i8, 2, (unsigned int));
  i6 = i4 + i6;
  i2 = i8 + 1;
  i3 = (int)*(void**)i1;
  i1 = i2 > i5;
  *(void**)i6 = (void*)i3;
  if (i1) goto l1;
  i8 = i2;
  goto l0;
l1:
  UndefVar__infoList = (void*)i4;
l2:
  i0 += 28;
  i7 = (int)*(void**)i0;
  i0 = (int)*(void**)i7;
  i0 += 44;
  i0 = *(short int*)i0;
  i0 = i0 == 82;
  if (i0) goto l14;
  i7 += 8;
  i6 = (int)*(void**)i7;
  i7 = i6 != 0;
  i0 = UndefVar__topOfStack;
  if (i7) goto l3;
  i8 = 0;
  goto l18;
l3:
  i1 = i > 0;
  i2 = i + 1;
  i7 = (int)_ashl(i, 2, (unsigned int));
l4:
  i3 = (int)GuardCond__OperandInfo((Data__Opnd)i6);
  if (i1) goto l5;
  i8 = 1;
  goto l7;
l5:
  i5 = 0;
l6:
  i8 = (int)UndefVar__infoList;
  i4 = (int)_ashl(i5, 2, (unsigned int));
  i8 += i4;
  i8 = (int)*(void**)i8;
  i8 = GuardCond__Contradicting((GuardCond__RegionInfo)i8, (GuardCond__RegionInfo)i3);
  i8 = ! i8;
  i5++;
  if (!(i8)) goto l7;
  i4 = i > i5;
  if (i4) goto l6;
l7:
  if (i8) goto l8;
  i8 = 0;
  goto l12;
l8:
  i5 = UndefVar__Reachable_AddGatesToTrue((Data__Opnd)i6);
  if (i5) goto l9;
  i8 = 0;
  goto l12;
l9:
  i5 = UndefVar__topOfStack;
  i4 = (int)GuardCond__OperandInfo((Data__Opnd)i6);
  i4 = UndefVar__Reachable_AddGuardToTrue((GuardCond__RegionInfo)i4);
  if (i4) goto l10;
  i8 = 0;
  goto l12;
l10:
  i8 = (int)UndefVar__infoList;
  i4 = i8 + i7;
  *(void**)i4 = (void*)i3;
  i8 = UndefVar__Reachable_Test((short int)i2, (Data__Opnd)i6, (Data__Object *)&*UndefVar__Reachable_var);
  if (i8) goto l11;
  UndefVar__Reachable_PopTrue((short int)i5);
  goto l12;
l11:
  UndefVar__Reachable_PopTrue((short int)i0);
l12:
  if (i8) goto l13;
  i3 = i6 + 8;
  i3 = (int)*(void**)i3;
  UndefVar__Reachable_PopTrue((short int)i0);
  i6 = i3;
l13:
  if (i8) goto l18;
  i3 = i6 != 0;
  if (i3) goto l4;
  goto l18;
l14:
  i8 = 0;
  goto l18;
l15:
  i8 = 0;
  goto l18;
l16:
  i8 = 0;
  goto l18;
l17:
  i8 = 1;
l18:
  return (unsigned char)i8;
}

unsigned char UndefVar__Reachable(Data__Object var, Data__Opnd opnd) {
  register int i0, i1, i2;
  i2 = (int)UndefVar__infoList;
  i0 = UndefVar__topOfStack;
  i1 = (int)GuardCond__OperandInfo((Data__Opnd)(int)opnd);
  *(void**)i2 = (void*)i1;
  i1 = (int)UndefVar__infoList;
  i1 = (int)*(void**)i1;
  i1 = UndefVar__Reachable_AddGuardToTrue((GuardCond__RegionInfo)i1);
  i1 = UndefVar__Reachable_Test((short int)1, (Data__Opnd)(int)opnd, (Data__Object *)&var);
  UndefVar__Reachable_PopTrue((short int)i0);
  return (unsigned char)i1;
}

void UndefVar__InspectUses_PushUse(Data__Opnd use) {
  register int i0, i1, i2, i3, i4, i5, i6, i7;
  i6 = (int)UndefVar__useStack;
  i4 = UndefVar__useStackSize;
  i5 = *(int*)(i6-8);
  i0 = i5 != i4;
  if (i0) goto l1;
  i2 = i5 - 1;
  i3 = i2 < 0;
  i5 = (int)_ashl(i5, 1, (unsigned int));
  {
    char *_mem, *_var;
    int* _dim_ptr;
    if(i5 < 0) _invalid_length(i5, _P(10542));
    _mem = GC_malloc(i5*4+8);
    if (!_mem) _new_failed(_P(10517));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = i5;
    i1 = (int)_var;
  }
  if (i3) goto l1;
  i3 = 0;
l0:
  i5 = (int)_ashl(i3, 2, (unsigned int));
  i5 = i6 + i5;
  i0 = (int)_ashl(i3, 2, (unsigned int));
  i0 = i1 + i0;
  i7 = (int)*(void**)i5;
  *(void**)i0 = (void*)i7;
  i7 = i3 + 1;
  i0 = i7 > i2;
  *(void**)i5 = (void*)0;
  if (i0) goto l1;
  i3 = i7;
  goto l0;
l1:
  i0 = (int)_ashl(i4, 2, (unsigned int));
  i0 = i6 + i0;
  *(void**)i0 = (void*)(int)use;
  i0 = i4 + 1;
  UndefVar__useStackSize = i0;
}

void UndefVar__InspectUses_PopUse(void) {
  register int i0, i1, i2;
  i0 = UndefVar__useStackSize;
  i0--;
  UndefVar__useStackSize = i0;
  i0 = UndefVar__useStackSize;
  i1 = (int)UndefVar__useStack;
  i2 = (int)_ashl(i0, 2, (unsigned int));
  i2 = i1 + i2;
  *(void**)i2 = (void*)0;
}

unsigned char UndefVar__InspectUses_IgnoredOperand(Data__Opnd opnd) {
  register int i0;
  i0 = Data__OpndDesc_ValueOperand((Data__Opnd)(int)opnd);
  if (!(i0)) goto l0;
  i0 = Data__OpndDesc_PassThroughOperand((Data__Opnd)(int)opnd);
  if (!(i0)) goto l1;
l0:
  i0 = 1;
  goto l2;
l1:
  i0 = 0;
l2:
  return (unsigned char)i0;
}

unsigned char UndefVar__InspectUses_NotCollectingOperand(Data__Opnd opnd) {
  register int i0, i1, i2, i3;
  i0 = (int)opnd + 12;
  i0 = (int)*(void**)i0;
  i1 = (int)SymbolTable__mem;
  i2 = (int)Data__InstructionDesc_GetOperand((Data__Instruction)i0, (Data__Addressable)i1, (short int)-3);
  i0 = i2 == 0;
  if (i0) goto l1;
  i0 = (int)opnd == i2;
  if (i0) goto l1;
  i3 = i2;
l0:
  i3 += 8;
  i3 = (int)*(void**)i3;
  i1 = i3 == 0;
  if (i1) goto l2;
  i1 = (int)opnd != i3;
  if (i1) goto l0;
  goto l2;
l1:
  i3 = i2;
l2:
  i0 = i3 == 0;
  return (unsigned char)i0;
}

unsigned char UndefVar__InspectUses_UnknownProcedure(Data__Instruction call) {
  register int i0, i1;
  i0 = (int)Data__InstructionDesc_NthArgument((Data__Instruction)(int)call, (short int)2);
  i1 = (int)Data__constUndef;
  i1 = i0 == i1;
  if (i1) goto l0;
  i0 += 28;
  i0 = *(signed char*)i0;
  i0 = i0 == 7;
  if (i0) goto l0;
  i0 = 0;
  goto l1;
l0:
  i0 = 1;
l1:
  return (unsigned char)i0;
}

unsigned char UndefVar__InspectUses_Contradicting(Data__Opnd use) {
  register int i0, i1, i2, i3;
  i2 = (int)GuardCond__OperandInfo((Data__Opnd)(int)use);
  i1 = UndefVar__useStackSize;
  i0 = i1 > 0;
  if (i0) goto l0;
  i3 = 0;
  goto l2;
l0:
l1:
  i1--;
  i0 = (int)UndefVar__useStack;
  i3 = (int)_ashl(i1, 2, (unsigned int));
  i3 = i0 + i3;
  i3 = (int)*(void**)i3;
  i3 = (int)GuardCond__OperandInfo((Data__Opnd)i3);
  i3 = GuardCond__Contradicting((GuardCond__RegionInfo)i2, (GuardCond__RegionInfo)i3);
  if (i3) goto l2;
  i0 = i1 > 0;
  if (i0) goto l1;
l2:
  return (unsigned char)i3;
}

unsigned char UndefVar__InspectUses_AbstractProc(Data__Object var) {
  register int i0;
  i0 = (int)var + 40;
  i0 = (int)*(void**)i0;
  i0 += 64;
  i0 = *(unsigned int*)i0;
  i0 = (i0 & ((unsigned int)1 << 9)) != 0;
  return (unsigned char)i0;
}

void UndefVar__InspectUses(Data__Object var, Data__Usable u, signed char status, Data__Gate oldGates) {
  register int i0, i1, i2, i3, i4, i5, i6, i7, i8;
  i7 = (int)*(void**)(int)u;
  i0 = i7 == 0;
  if (i0) goto l21;
  i8 = status == 0;
  i0 = (int)var + 20;
l0:
  i1 = UndefVar__InspectUses_IgnoredOperand((Data__Opnd)i7);
  if (i1) goto l20;
  i1 = UndefVar__InspectUses_Contradicting((Data__Opnd)i7);
  if (i1) goto l20;
  i6 = i7 + 12;
  i3 = (int)*(void**)i6;
  i6 = i3 + 44;
  i2 = *(short int*)i6;
  i6 = i2 != 2;
  if (i6) goto l1;
  i6 = (int)*(void**)i0;
  i6 = strcmp((const char*) i6, (const char*) (int)_c0) != 0;
  if (i6) goto l13;
l1:
  i6 = i2 == 19;
  if (i6) goto l10;
  i2 = i2 == 3;
  if (i2) goto l3;
  if (i8) goto l2;
  i4 = 405;
  goto l14;
l2:
  i4 = 404;
  goto l14;
l3:
  i2 = (int)Data__OpndDesc_GetFormalParam((Data__Opnd)i7);
  i6 = UndefVar__InspectUses_UnknownProcedure((Data__Instruction)i3);
  if (i6) goto l9;
  i6 = i2 == 0;
  if (i6) goto l8;
  i6 = i2 + 28;
  i6 = *(signed char*)i6;
  i4 = i6 == 3;
  if (i4) goto l6;
  i6 = i6 != 4;
  if (i6) goto l4;
  i2 += 64;
  i2 = *(unsigned int*)i2;
  i2 = (i2 & ((unsigned int)1 << 2)) != 0;
  if (i2) goto l5;
l4:
  i4 = 0;
  goto l14;
l5:
  i4 = 415;
  goto l14;
l6:
  if (i8) goto l7;
  i4 = 405;
  goto l14;
l7:
  i4 = 404;
  goto l14;
l8:
  i4 = 414;
  goto l14;
l9:
  i4 = 0;
  goto l14;
l10:
  i6 = i3 + 8;
  i2 = *(int*)i6;
  i4 = i2 <= 0;
  if (i4) goto l12;
  i2 = - i2;
  *(int*)i6 = i2;
  i6 = i3 + 28;
  i6 = (int)*(void**)i6;
  i2 = (int)*(void**)i6;
  i2 += 44;
  i2 = *(short int*)i2;
  i2 = i2 != 82;
  if (i2) goto l11;
  i6 += 8;
  i6 = (int)*(void**)i6;
  i6 = i7 == i6;
  if (i6) goto l12;
l11:
  UndefVar__InspectUses_PushUse((Data__Opnd)i7);
  UndefVar__InspectUses((Data__Object)(int)var, (Data__Usable)i3, (signed char)1, (Data__Gate)i3);
  UndefVar__InspectUses_PopUse();
l12:
  i4 = 0;
  goto l14;
l13:
  i4 = 0;
l14:
  i6 = i4 > 0;
  if (!(i6)) goto l20;
  i2 = UndefVar__Reachable((Data__Object)(int)var, (Data__Opnd)i7);
  if (!(i2)) goto l20;
  i6 = i4 == 414;
  if (i6) goto l20;
  i2 = UndefVar__InspectUses_NotCollectingOperand((Data__Opnd)i7);
  if (!(i2)) goto l20;
  i5 = UndefVar__InspectUses_Contradicting((Data__Opnd)i7);
  if (i5) goto l20;
  i2 = i7 + 20;
  i6 = *(int*)i2;
  i2 = i6 >= 0;
  if (i2) goto l15;
  i3 += 52;
  i6 = *(int*)i3;
l15:
  i3 = (int)*(void**)i0;
  i2 = strcmp((const char*) i3, (const char*) (int)_c0) == 0;
  if (i2) goto l16;
  i2 = i4;
  goto l18;
l16:
  i6 = UndefVar__InspectUses_AbstractProc((Data__Object)(int)var);
  i2 = i4 + 2;
  if (!(i6)) goto l17;
  i2 = 0;
l17:
  i6 = Scanner__currSymPos;
l18:
  i4 = i2 == 414;
  if (i4) goto l19;
  i3 = i2 <= 0;
  if (i3) goto l20;
  i2 = - i2;
  Error__Err((int)i6, (short int)i2);
  goto l20;
l19:
  i4 = *(int*)(i3-8);
  Error__ErrIns((int)i6, (short int)-414, (const unsigned char*)i3, i4);
l20:
  i1 = i7 + 4;
  i7 = (int)*(void**)i1;
  i1 = i7 != 0;
  if (i1) goto l0;
l21:
  ;
}

unsigned char UndefVar__ReadsEmptyStore(Data__Object var) {
  register int i0, i1, i2, i3, i4, i5;
  i4 = (int)*(void**)(int)var;
  i0 = i4 != 0;
  if (i0) goto l0;
  i5 = 0;
  goto l9;
l0:
  i0 = (int)var + 40;
l1:
  i2 = i4 + 12;
  i1 = (int)*(void**)i2;
  i5 = i1 + 44;
  i5 = *(short int*)i5;
  i5 = i5 != 36;
  if (i5) goto l6;
  i3 = (int)*(void**)i1;
  i5 = i3 == 0;
  if (i5) goto l6;
  i5 = i3 + 4;
  i5 = (int)*(void**)i5;
  i5 = i5 != 0;
  if (i5) goto l2;
  i3 += 12;
  i3 = (int)*(void**)i3;
  i3 += 44;
  i3 = *(short int*)i3;
  i3 = i3 == 2;
  if (i3) goto l6;
l2:
  i1 = (int)Data__InstructionDesc_NthArgument((Data__Instruction)i1, (short int)2);
  i1 = Attributes__TracesToEmptyStore((Data__Object)(int)var, (Data__Usable)i1);
  if (!(i1)) goto l6;
  i5 = (int)*(void**)i2;
  i5 += 32;
  i5 = (int)*(void**)i5;
  i3 = *(int*)(i5-4);
  i3 = (int)((_Type)i3)->tbprocs[0];
  i5 = (int)((Data__GlobalRegion(*)(Data__Node))i3)((Data__Node)i5);
  i5 += 80;
  i3 = (int)*(void**)i0;
  i5 = (int)*(void**)i5;
  i5 = i5 == i3;
  if (i5) goto l3;
  i5 = 0;
  goto l7;
l3:
  i2 = (int)*(void**)i2;
  i2 = (int)*(void**)i2;
  i5 = i2 + 12;
  i5 = (int)*(void**)i5;
  i5 += 44;
  i5 = *(short int*)i5;
  i5 = i5 == 3;
  if (i5) goto l4;
  i5 = 1;
  goto l7;
l4:
  i2 = (int)Data__OpndDesc_GetFormalParam((Data__Opnd)i2);
  i5 = i2 == 0;
  if (i5) goto l5;
  i2 += 64;
  i2 = *(unsigned int*)i2;
  i2 = (i2 & ((unsigned int)1 << 2)) != 0;
  if (i2) goto l5;
  i5 = 0;
  goto l7;
l5:
  i5 = 1;
  goto l7;
l6:
  i5 = 0;
l7:
  if (i5) goto l8;
  i1 = i4 + 4;
  i1 = (int)*(void**)i1;
  i4 = i1;
l8:
  if (i5) goto l9;
  i1 = i4 != 0;
  if (i1) goto l1;
l9:
  return (unsigned char)i5;
}

void UndefVar__CheckVars_InspectLocalVars(Data__Object obj) {
  register int i0, i1, i2, i3;
  i0 = (int)obj == 0;
  if (i0) goto l2;
  i2 = (int)obj + 32;
  i2 = (int)*(void**)i2;
  UndefVar__CheckVars_InspectLocalVars((Data__Object)i2);
  i2 = (int)obj + 24;
  i0 = (int)*(void**)i2;
  i2 = i0 == 0;
  if (i2) goto l1;
  i2 = SymbolTable__TypeInGroup((Data__Struct)i0, (signed char)47);
  if (i2) goto l1;
  i1 = (int)obj + 28;
  i0 = *(signed char*)i1;
  i1 = i0 != 3;
  if (i1) goto l0;
  i1 = (int)obj + 64;
  i1 = *(unsigned int*)i1;
  i1 = (i1 & ((unsigned int)1 << 26)) != 0;
  if (i1) goto l0;
  UndefVar__InspectUses((Data__Object)(int)obj, (Data__Usable)(int)obj, (signed char)0, (Data__Gate)0);
  goto l1;
l0:
  i0 = i0 == 4;
  if (!(i0)) goto l1;
  i3 = (int)obj + 52;
  i1 = (int)*(void**)i3;
  i3 = UndefVar__ReadsEmptyStore((Data__Object)i1);
  if (!(i3)) goto l1;
  i0 = i1 + 64;
  i3 = *(unsigned int*)i0;
  i3 = i3 | ((unsigned int)1 << 2);
  *(unsigned int*)i0 = i3;
l1:
  i2 = (int)obj + 36;
  i2 = (int)*(void**)i2;
  UndefVar__CheckVars_InspectLocalVars((Data__Object)i2);
l2:
  ;
}

void UndefVar__CheckVars_MarkNotInspected(Data__Instruction instr) {
  register int i0, i1;
  i0 = (int)instr == 0;
  if (i0) goto l1;
  i1 = (int)instr;
l0:
  i0 = i1 + 8;
  *(int*)i0 = 1;
  i0 = i1 + 12;
  i1 = (int)*(void**)i0;
  i0 = i1 != 0;
  if (i0) goto l0;
l1:
  i0 = *(int*)((int)instr-4);
  i0 = _type_test(i0, &Data__RegionDesc_td.td, 5);
  if (!(i0)) goto l3;
  i0 = (int)instr + 56;
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l3;
l2:
  UndefVar__CheckVars_MarkNotInspected((Data__Instruction)i0);
  i0 += 36;
  i0 = (int)*(void**)i0;
  i1 = i0 != 0;
  if (i1) goto l2;
l3:
  ;
}

void UndefVar__CheckVars_InitTrueList(Data__Region r) {
  register int i0, i1, i2, i3;
  GuardCond__Condition c;
  i0 = (int)r + 56;
  i2 = (int)*(void**)i0;
  i0 = i2 == 0;
  if (i0) goto l3;
  i0 = (int)&c + 4;
l0:
  i3 = *(int*)(i2-4);
  i3 = _type_test(i3, &Data__RegionDesc_td.td, 5);
  if (i3) goto l1;
  i1 = i2 + 44;
  i1 = *(short int*)i1;
  i1 = i1 != 18;
  if (i1) goto l2;
  i1 = i2 + 24;
  i1 = (int)*(void**)i1;
  i3 = i1 == 0;
  if (i3) goto l2;
  i1 += 20;
  i1 = *(signed char*)i1;
  i1 = i1 != 1;
  if (i1) goto l2;
  i1 = i2 + 28;
  i1 = (int)*(void**)i1;
  i1 = (int)*(void**)i1;
  i3 = *(int*)(i1-4);
  i3 = _type_test(i3, &Data__ConstDesc_td.td, 3);
  if (!(i3)) goto l2;
  *(void**)(int)&c = (void*)i2;
  i3 = (int)SymbolTable__constTrue;
  i3 = i1 != i3;
  *(unsigned char*)i0 = i3;
  UndefVar__AddToTrue((GuardCond__Condition *)(int)&c, &GuardCond__Condition_td.td);
  goto l2;
l1:
  UndefVar__CheckVars_InitTrueList((Data__Region)i2);
l2:
  i3 = i2 + 36;
  i2 = (int)*(void**)i3;
  i3 = i2 != 0;
  if (i3) goto l0;
l3:
  ;
}

void UndefVar__CheckVars(Data__GlobalRegion greg, Attributes__ExitInfo *exitInfo, _Type exitInfo__tag) {
  register int i0, i1, i2, i3, i4, i5;
  GuardCond__Init((Data__GlobalRegion)(int)greg);
  UndefVar__CheckVars_MarkNotInspected((Data__Instruction)(int)greg);
  UndefVar__topOfStack = 2;
  UndefVar__CheckVars_InitTrueList((Data__Region)(int)greg);
  i0 = (int)greg + 80;
  i0 = (int)*(void**)i0;
  i0 += 44;
  i0 = (int)*(void**)i0;
  UndefVar__CheckVars_InspectLocalVars((Data__Object)i0);
  i0 = (int)*(void**)(int)exitInfo;
  i0 = i0 == 0;
  if (i0) goto l0;
  i1 = (int)Data__RegionDesc_ExitInstr((Data__Region)(int)greg);
  i0 = i1 + 32;
  i0 = (int)*(void**)i0;
  i2 = i0 + 32;
  i2 = (int)*(void**)i2;
  Data__RegionDesc_MoveInstruction((Data__Region)i2, (Data__Instruction)i1);
  i2 = (int)*(void**)(int)exitInfo;
  UndefVar__InspectUses((Data__Object)i2, (Data__Usable)i2, (signed char)0, (Data__Gate)0);
  Data__RegionDesc_MoveInstruction((Data__Region)i0, (Data__Instruction)i1);
l0:
  i0 = (int)UndefVar__infoList;
  i0 = *(int*)(i0-8);
  i4 = i0 - 1;
  i0 = i4 < 0;
  if (i0) goto l2;
  i0 = 0;
l1:
  i5 = (int)UndefVar__infoList;
  i1 = (int)_ashl(i0, 2, (unsigned int));
  i3 = i5 + i1;
  i1 = i0 + 1;
  i2 = i1 > i4;
  *(void**)i3 = (void*)0;
  if (i2) goto l2;
  i0 = i1;
  goto l1;
l2:
  i0 = (int)UndefVar__trueList;
  i0 = *(int*)(i0-8);
  i4 = i0 - 1;
  i0 = i4 < 0;
  if (i0) goto l4;
  i0 = 0;
l3:
  i1 = (int)UndefVar__trueList;
  i5 = (int)_ashl(i0, 3, (unsigned int));
  i3 = i1 + i5;
  i5 = i0 + 1;
  i2 = i5 > i4;
  *(void**)i3 = (void*)0;
  if (i2) goto l4;
  i0 = i5;
  goto l3;
l4:
  ;
}

void UndefVar_init(void) {
  register int i0, i1, i2;
  _mid = _register_module(&UndefVar_md.md, NULL);
  {
    char *_mem, *_var;
    int* _dim_ptr;
    _mem = GC_malloc(128*4+8);
    if (!_mem) _new_failed(_P(19910));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = 128;
    i0 = (int)_var;
  }
  {
    char *_mem, *_var;
    int* _dim_ptr;
    _mem = GC_malloc(128*8+8);
    if (!_mem) _new_failed(_P(19933));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = 128;
    i1 = (int)_var;
  }
  {
    char *_mem, *_var;
    int* _dim_ptr;
    _mem = GC_malloc(32*4+8);
    if (!_mem) _new_failed(_P(19956));
    _var = _mem+8;
    _dim_ptr = (void*)(_var-4);
    *(--_dim_ptr) = 32;
    i2 = (int)_var;
  }
  UndefVar__infoList = (void*)i0;
  UndefVar__trueList = (void*)i1;
  UndefVar__useStack = (void*)i2;
  UndefVar__useStackSize = (int)0;
}