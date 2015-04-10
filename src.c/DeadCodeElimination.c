/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "DeadCodeElimination.d"

static _ModId _mid;

void DeadCodeElimination__MarkDead(Data__Instruction instr) {
  register int i0, i1;
  i0 = *(int*)((int)instr-4);
  i0 = _type_test(i0, &Data__RegionDesc_td.td, 5);
  i1 = (int)instr + 8;
  *(int*)i1 = 0;
  if (!(i0)) goto l1;
  i0 = (int)instr + 56;
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l1;
l0:
  DeadCodeElimination__MarkDead((Data__Instruction)i0);
  i0 += 36;
  i0 = (int)*(void**)i0;
  i1 = i0 != 0;
  if (i1) goto l0;
l1:
  ;
}

void DeadCodeElimination__MarkLive(Data__Instruction instr) {
  register int i0, i1, i2;
  i0 = (int)instr == 0;
  if (i0) goto l2;
  i0 = (int)instr + 8;
  i1 = *(int*)i0;
  i1 = i1 != 0;
  if (i1) goto l2;
  *(int*)i0 = 1;
  i0 = (int)instr + 32;
  i0 = (int)*(void**)i0;
  DeadCodeElimination__MarkLive((Data__Instruction)i0);
  i0 = (int)instr + 28;
  i2 = (int)*(void**)i0;
  i0 = i2 == 0;
  if (i0) goto l2;
l0:
  i1 = (int)*(void**)i2;
  i0 = *(int*)(i1-4);
  i0 = _type_test(i0, &Data__ResultDesc_td.td, 3);
  if (!(i0)) goto l1;
  i1 += 16;
  i1 = (int)*(void**)i1;
  DeadCodeElimination__MarkLive((Data__Instruction)i1);
l1:
  i0 = i2 + 8;
  i2 = (int)*(void**)i0;
  i0 = i2 != 0;
  if (i0) goto l0;
l2:
  ;
}

void DeadCodeElimination__MarkException(Data__Instruction instr, unsigned char removeDisabled) {
  register int i0, i1;
  i0 = (int)instr + 48;
  i1 = *(unsigned int*)i0;
  i0 = (i1 & ((unsigned int)1 << 0)) != 0;
  if (!(i0)) goto l1;
  i1 = (i1 & ((unsigned int)1 << 1)) != 0;
  if (!(i1)) goto l0;
  if (removeDisabled) goto l1;
l0:
  DeadCodeElimination__MarkLive((Data__Instruction)(int)instr);
l1:
  i0 = *(int*)((int)instr-4);
  i0 = _type_test(i0, &Data__RegionDesc_td.td, 5);
  if (!(i0)) goto l3;
  i0 = (int)instr + 56;
  i0 = (int)*(void**)i0;
  i1 = i0 == 0;
  if (i1) goto l3;
l2:
  DeadCodeElimination__MarkException((Data__Instruction)i0, (unsigned char)removeDisabled);
  i0 += 36;
  i0 = (int)*(void**)i0;
  i1 = i0 != 0;
  if (i1) goto l2;
l3:
  ;
}

void DeadCodeElimination__DeleteDeadCode(Data__Instruction instr) {
  register int i0, i1, i2;
  i0 = (int)instr + 8;
  i0 = *(int*)i0;
  i0 = i0 == 0;
  if (i0) goto l1;
  i2 = *(int*)((int)instr-4);
  i2 = _type_test(i2, &Data__RegionDesc_td.td, 5);
  if (!(i2)) goto l2;
  i1 = (int)instr + 56;
  i0 = (int)*(void**)i1;
  i1 = i0 == 0;
  if (i1) goto l2;
l0:
  i1 = i0 + 36;
  i2 = (int)*(void**)i1;
  i1 = i2 == 0;
  DeadCodeElimination__DeleteDeadCode((Data__Instruction)i0);
  if (i1) goto l2;
  i0 = i2;
  goto l0;
l1:
  Data__InstructionDesc_Delete((Data__Instruction)(int)instr);
l2:
  ;
}

void DeadCodeElimination__RemoveRuntimeChecks(Data__Region region) {
  register int i0, i1, i2, i3;
  i0 = (int)region + 56;
  i2 = (int)*(void**)i0;
  i0 = i2 == 0;
  if (i0) goto l4;
l0:
  i1 = *(int*)(i2-4);
  i0 = _type_test(i1, &Data__RegionDesc_td.td, 5);
  if (i0) goto l2;
  i3 = i2 + 48;
  i3 = *(unsigned int*)i3;
  i0 = (i3 & ((unsigned int)1 << 1)) != 0;
  i3 = i2 + 44;
  i3 = *(short int*)i3;
  if (!(i0)) goto l3;
  i0 = i3 == 12;
  if (i0) goto l1;
  i0 = i3 == 13;
  if (i0) goto l1;
  i0 = i3 == 15;
  if (i0) goto l1;
  i3 = i3 != 16;
  if (i3) goto l3;
l1:
  i3 = i2 + 28;
  i3 = (int)*(void**)i3;
  i1 = (int)((_Type)i1)->tbprocs[1];
  i3 = (int)*(void**)i3;
  ((void(*)(Data__Usable, Data__Usable))i1)((Data__Usable)i2, (Data__Usable)i3);
  goto l3;
l2:
  DeadCodeElimination__RemoveRuntimeChecks((Data__Region)i2);
l3:
  i0 = i2 + 36;
  i2 = (int)*(void**)i0;
  i0 = i2 != 0;
  if (i0) goto l0;
l4:
  ;
}

void DeadCodeElimination__Eliminate(Data__Region greg, unsigned char removeDisabled) {
  register int i0;
  if (!(removeDisabled)) goto l0;
  DeadCodeElimination__RemoveRuntimeChecks((Data__Region)(int)greg);
l0:
  DeadCodeElimination__MarkDead((Data__Instruction)(int)greg);
  i0 = (int)Data__RegionDesc_EnterInstr((Data__Region)(int)greg);
  DeadCodeElimination__MarkLive((Data__Instruction)i0);
  i0 = (int)Data__RegionDesc_ExitInstr((Data__Region)(int)greg);
  DeadCodeElimination__MarkLive((Data__Instruction)i0);
  DeadCodeElimination__MarkException((Data__Instruction)(int)greg, (unsigned char)removeDisabled);
  DeadCodeElimination__DeleteDeadCode((Data__Instruction)(int)greg);
}

void DeadCodeElimination_init(void) {
  _mid = _register_module(&DeadCodeElimination_md.md, NULL);
}
