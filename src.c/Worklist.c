/* file generated by oo2c -- do not edit */
#include "__oo2c.h"
#include "__libc.h"
#include "Worklist.d"

static _ModId _mid;

void Worklist__Worklist_Init(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0;
  i0 = (int)wl + 4;
  *(void**)(int)wl = (void*)0;
  *(void**)i0 = (void*)0;
}

Worklist__Node Worklist__NewNode(Data__Info data) {
  register int i0, i1;
  i1 = (int)Worklist__garbage;
  i0 = i1 != 0;
  if (i0) goto l0;
  {
    char *_mem, *_var;
    _mem = GC_malloc(12+8);
    if (!_mem) _new_failed(_P(1663));
    _var = _mem+8;
    ((_Type*)_var)[-1] = &Worklist__NodeDesc_td.td;
    i1 = (int)_var;
  }
  goto l1;
l0:
  i0 = (int)*(void**)i1;
  Worklist__garbage = (void*)i0;
l1:
  i0 = i1 + 8;
  *(void**)i0 = (void*)(int)data;
  i0 = i1 + 4;
  *(void**)i1 = (void*)0;
  *(void**)i0 = (void*)0;
  return (void*)i1;
}

void Worklist__DisposeNode(Worklist__Node *node) {
  register int i0, i1;
  i1 = (int)*node;
  i0 = (int)Worklist__garbage;
  *(void**)i1 = (void*)i0;
  i1 = (int)*node;
  i0 = i1 + 4;
  *(void**)i0 = (void*)0;
  i1 = (int)*node;
  i0 = i1 + 8;
  *(void**)i0 = (void*)0;
  i0 = (int)*node;
  Worklist__garbage = (void*)i0;
  *node = (void*)0;
}

void Worklist__NodeDesc_ReplaceData(Worklist__Node node, Data__Info data) {
  register int i0;
  i0 = (int)node + 8;
  *(void**)i0 = (void*)(int)data;
}

Worklist__Node Worklist__Worklist_GetNode(Worklist__Worklist *wl, _Type wl__tag, Data__Info data) {
  register int i0, i1, i2, i3;
  i2 = (int)*(void**)(int)wl;
  i0 = i2 == 0;
  if (i0) goto l1;
  i1 = i2 + 8;
  i1 = (int)*(void**)i1;
  i0 = (int)data == i1;
  if (i0) goto l1;
  i3 = i2;
l0:
  i3 = (int)*(void**)i3;
  i1 = i3 == 0;
  if (i1) goto l2;
  i1 = i3 + 8;
  i1 = (int)*(void**)i1;
  i1 = (int)data != i1;
  if (i1) goto l0;
  goto l2;
l1:
  i3 = i2;
l2:
  return (void*)i3;
}

unsigned char Worklist__Worklist_Member(Worklist__Worklist *wl, _Type wl__tag, Data__Info data) {
  register int i0;
  i0 = (int)((_Type)wl__tag)->tbprocs[1];
  i0 = (int)((Worklist__Node(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)(int)data);
  i0 = i0 != 0;
  return (unsigned char)i0;
}

unsigned char Worklist__Worklist_MemberNode(Worklist__Worklist *wl, _Type wl__tag, Worklist__Node node) {
  register int i0, i1, i2, i3;
  i2 = (int)*(void**)(int)wl;
  i0 = i2 == 0;
  if (i0) goto l1;
  i0 = (int)node == i2;
  if (i0) goto l1;
  i3 = i2;
l0:
  i3 = (int)*(void**)i3;
  i1 = i3 == 0;
  if (i1) goto l2;
  i1 = (int)node != i3;
  if (i1) goto l0;
  goto l2;
l1:
  i3 = i2;
l2:
  i0 = i3 != 0;
  return (unsigned char)i0;
}

void Worklist__Worklist_RemoveNode(Worklist__Worklist *wl, _Type wl__tag, Worklist__Node node) {
  register int i0, i1, i2, i3;
  i0 = (int)((_Type)wl__tag)->tbprocs[3];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)(int)node);
  if (i0) goto l0;
  Out__String((const unsigned char*)(int)_c0, 29);
  Out__Ln();
  _halt(100);
  goto l4;
l0:
  i1 = (int)*(void**)(int)node;
  i0 = (int)node + 4;
  i3 = (int)*(void**)i0;
  i2 = i3 == 0;
  *(void**)(int)node = (void*)0;
  *(void**)i0 = (void*)0;
  if (i2) goto l1;
  *(void**)i3 = (void*)i1;
  goto l2;
l1:
  *(void**)(int)wl = (void*)i1;
l2:
  i2 = i1 == 0;
  if (i2) goto l3;
  i2 = i1 + 4;
  *(void**)i2 = (void*)i3;
  goto l4;
l3:
  i2 = (int)wl + 4;
  *(void**)i2 = (void*)i3;
l4:
  ;
}

void Worklist__Worklist_AddNodeHead(Worklist__Worklist *wl, _Type wl__tag, Worklist__Node node) {
  register int i0, i1;
  i0 = (int)*(void**)(int)wl;
  i1 = i0 == 0;
  if (i1) goto l0;
  i1 = i0 + 4;
  *(void**)i1 = (void*)(int)node;
  goto l1;
l0:
  i0 = (int)wl + 4;
  *(void**)i0 = (void*)(int)node;
l1:
  i0 = (int)*(void**)(int)wl;
  *(void**)(int)node = (void*)i0;
  i0 = (int)node + 4;
  *(void**)i0 = (void*)0;
  *(void**)(int)wl = (void*)(int)node;
}

void Worklist__Worklist_AddHead(Worklist__Worklist *wl, _Type wl__tag, Data__Info data) {
  register int i0, i1;
  i0 = (int)Worklist__NewNode((Data__Info)(int)data);
  i1 = (int)((_Type)wl__tag)->tbprocs[5];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i0);
}

void Worklist__Worklist_AddHeadUnique(Worklist__Worklist *wl, _Type wl__tag, Data__Info data) {
  register int i0, i1;
  i0 = (int)((_Type)wl__tag)->tbprocs[1];
  i0 = (int)((Worklist__Node(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)(int)data);
  i1 = i0 != 0;
  if (i1) goto l0;
  i0 = (int)((_Type)wl__tag)->tbprocs[6];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)(int)data);
  goto l1;
l0:
  i1 = (int)((_Type)wl__tag)->tbprocs[4];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i0);
  i1 = (int)((_Type)wl__tag)->tbprocs[5];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i0);
l1:
  ;
}

void Worklist__Worklist_AddNodeTail(Worklist__Worklist *wl, _Type wl__tag, Worklist__Node node) {
  register int i0, i1, i2;
  i0 = (int)wl + 4;
  i1 = (int)*(void**)i0;
  i2 = i1 == 0;
  if (i2) goto l0;
  *(void**)i1 = (void*)(int)node;
  goto l1;
l0:
  *(void**)(int)wl = (void*)(int)node;
l1:
  i1 = (int)*(void**)i0;
  i2 = (int)node + 4;
  *(void**)i2 = (void*)i1;
  *(void**)i0 = (void*)(int)node;
  *(void**)(int)node = (void*)0;
}

void Worklist__Worklist_AddTail(Worklist__Worklist *wl, _Type wl__tag, Data__Info data) {
  register int i0, i1;
  i0 = (int)Worklist__NewNode((Data__Info)(int)data);
  i1 = (int)((_Type)wl__tag)->tbprocs[8];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i0);
}

void Worklist__Worklist_AddTailUnique(Worklist__Worklist *wl, _Type wl__tag, Data__Info data) {
  register int i0, i1;
  i0 = (int)((_Type)wl__tag)->tbprocs[1];
  i0 = (int)((Worklist__Node(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)(int)data);
  i1 = i0 != 0;
  if (i1) goto l0;
  i0 = (int)((_Type)wl__tag)->tbprocs[9];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)(int)data);
  goto l1;
l0:
  i1 = (int)((_Type)wl__tag)->tbprocs[4];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i0);
  i1 = (int)((_Type)wl__tag)->tbprocs[8];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i0);
l1:
  ;
}

void Worklist__Worklist_MoveNodeHead(Worklist__Worklist *wl, _Type wl__tag, Worklist__Node node) {
  register int i0, i1;
  i0 = (int)((_Type)wl__tag)->tbprocs[4];
  i1 = (int)((_Type)wl__tag)->tbprocs[5];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)(int)node);
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)(int)node);
}

void Worklist__Worklist_MoveNodeTail(Worklist__Worklist *wl, _Type wl__tag, Worklist__Node node) {
  register int i0, i1;
  i0 = (int)((_Type)wl__tag)->tbprocs[4];
  i1 = (int)((_Type)wl__tag)->tbprocs[8];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)(int)node);
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i1)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)(int)node);
}

unsigned char Worklist__Worklist_IsEmpty(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0;
  i0 = (int)*(void**)(int)wl;
  i0 = i0 == 0;
  return (unsigned char)i0;
}

Worklist__Node Worklist__Worklist_GetHeadNode(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0;
  i0 = (int)((_Type)wl__tag)->tbprocs[13];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i0)((Worklist__Worklist *)(int)wl, wl__tag);
  if (i0) goto l0;
  i0 = (int)*(void**)(int)wl;
  goto l1;
l0:
  i0 = 0;
l1:
  return (void*)i0;
}

Data__Info Worklist__Worklist_GetHead(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0;
  i0 = (int)((_Type)wl__tag)->tbprocs[13];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i0)((Worklist__Worklist *)(int)wl, wl__tag);
  if (i0) goto l0;
  i0 = (int)*(void**)(int)wl;
  i0 += 8;
  i0 = (int)*(void**)i0;
  goto l1;
l0:
  i0 = 0;
l1:
  return (void*)i0;
}

Worklist__Node Worklist__Worklist_GetTailNode(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0;
  i0 = (int)((_Type)wl__tag)->tbprocs[13];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i0)((Worklist__Worklist *)(int)wl, wl__tag);
  if (i0) goto l0;
  i0 = (int)wl + 4;
  i0 = (int)*(void**)i0;
  goto l1;
l0:
  i0 = 0;
l1:
  return (void*)i0;
}

Data__Info Worklist__Worklist_GetTail(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0;
  i0 = (int)((_Type)wl__tag)->tbprocs[13];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i0)((Worklist__Worklist *)(int)wl, wl__tag);
  if (i0) goto l0;
  i0 = (int)wl + 4;
  i0 = (int)*(void**)i0;
  i0 += 8;
  i0 = (int)*(void**)i0;
  goto l1;
l0:
  i0 = 0;
l1:
  return (void*)i0;
}

void Worklist__Worklist_RemoveHead(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0, i1;
  Worklist__Node node;
  i0 = (int)((_Type)wl__tag)->tbprocs[13];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i0)((Worklist__Worklist *)(int)wl, wl__tag);
  if (i0) goto l0;
  i1 = (int)*(void**)(int)wl;
  i0 = (int)((_Type)wl__tag)->tbprocs[4];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i1);
  node = (void*)i1;
  Worklist__DisposeNode((Worklist__Node *)(int)&node);
l0:
  ;
}

void Worklist__Worklist_RemoveTail(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0, i1;
  Worklist__Node node;
  i0 = (int)((_Type)wl__tag)->tbprocs[13];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i0)((Worklist__Worklist *)(int)wl, wl__tag);
  if (i0) goto l0;
  i1 = (int)wl + 4;
  i1 = (int)*(void**)i1;
  i0 = (int)((_Type)wl__tag)->tbprocs[4];
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Worklist__Node))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Worklist__Node)i1);
  node = (void*)i1;
  Worklist__DisposeNode((Worklist__Node *)(int)&node);
l0:
  ;
}

void Worklist__Worklist_Clear(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0, i1, i2;
  i1 = (int)((_Type)wl__tag)->tbprocs[13];
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i1)((Worklist__Worklist *)(int)wl, wl__tag);
  if (i0) goto l1;
  i2 = (int)((_Type)wl__tag)->tbprocs[18];
l0:
  ((void(*)(Worklist__Worklist *, _Type wl__tag))i2)((Worklist__Worklist *)(int)wl, wl__tag);
  i0 = ((unsigned char(*)(Worklist__Worklist *, _Type wl__tag))i1)((Worklist__Worklist *)(int)wl, wl__tag);
  if (!(i0)) goto l0;
l1:
  ;
}

int Worklist__Worklist_Length(Worklist__Worklist *wl, _Type wl__tag) {
  register int i0, i1, i2;
  i1 = (int)*(void**)(int)wl;
  i0 = i1 != 0;
  if (i0) goto l0;
  i2 = 0;
  goto l2;
l0:
  i2 = 0;
l1:
  i1 = (int)*(void**)i1;
  i2++;
  i0 = i1 != 0;
  if (i0) goto l1;
l2:
  return (int)i2;
}

void Worklist__Worklist_AddInstr(Worklist__Worklist *wl, _Type wl__tag, Data__Region region, Worklist__InitHook hook) {
  register int i0, i1, i2, i3;
  i0 = (int)region + 56;
  i2 = (int)*(void**)i0;
  i0 = i2 == 0;
  if (i0) goto l3;
  i0 = (int)hook == 0;
  i3 = (int)((_Type)wl__tag)->tbprocs[9];
l0:
  if (i0) goto l1;
  i1 = ((Worklist__InitHook)(int)hook)((Data__Instruction)i2);
  if (!(i1)) goto l2;
l1:
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i3)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)i2);
l2:
  i1 = i2 + 36;
  i2 = (int)*(void**)i1;
  i1 = i2 != 0;
  if (i1) goto l0;
l3:
  ;
}

void Worklist__Worklist_AddInstrUnique(Worklist__Worklist *wl, _Type wl__tag, Data__Region region, Worklist__InitHook hook) {
  register int i0, i1, i2, i3;
  i0 = (int)region + 56;
  i2 = (int)*(void**)i0;
  i0 = i2 == 0;
  if (i0) goto l3;
  i0 = (int)hook == 0;
  i3 = (int)((_Type)wl__tag)->tbprocs[10];
l0:
  if (i0) goto l1;
  i1 = ((Worklist__InitHook)(int)hook)((Data__Instruction)i2);
  if (!(i1)) goto l2;
l1:
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i3)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)i2);
l2:
  i1 = i2 + 36;
  i2 = (int)*(void**)i1;
  i1 = i2 != 0;
  if (i1) goto l0;
l3:
  ;
}

void Worklist__Worklist_AddUsingInstr(Worklist__Worklist *wl, _Type wl__tag, Data__Result used, Worklist__UsingHook hook) {
  register int i0, i1, i2, i3, i4;
  i3 = (int)*(void**)(int)used;
  i0 = i3 == 0;
  if (i0) goto l3;
  i4 = (int)hook == 0;
  i0 = (int)((_Type)wl__tag)->tbprocs[9];
l0:
  i1 = i3 + 12;
  i2 = (int)*(void**)i1;
  if (i4) goto l1;
  i1 = ((Worklist__UsingHook)(int)hook)((Data__Result)(int)used, (Data__Instruction)i2);
  if (!(i1)) goto l2;
l1:
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)i2);
l2:
  i1 = i3 + 4;
  i3 = (int)*(void**)i1;
  i1 = i3 != 0;
  if (i1) goto l0;
l3:
  ;
}

void Worklist__Worklist_AddUsingInstrUnique(Worklist__Worklist *wl, _Type wl__tag, Data__Result used, Worklist__UsingHook hook) {
  register int i0, i1, i2, i3, i4;
  i3 = (int)*(void**)(int)used;
  i0 = i3 == 0;
  if (i0) goto l3;
  i4 = (int)hook == 0;
  i0 = (int)((_Type)wl__tag)->tbprocs[10];
l0:
  i1 = i3 + 12;
  i2 = (int)*(void**)i1;
  if (i4) goto l1;
  i1 = ((Worklist__UsingHook)(int)hook)((Data__Result)(int)used, (Data__Instruction)i2);
  if (!(i1)) goto l2;
l1:
  ((void(*)(Worklist__Worklist *, _Type wl__tag, Data__Info))i0)((Worklist__Worklist *)(int)wl, wl__tag, (Data__Info)i2);
l2:
  i1 = i3 + 4;
  i3 = (int)*(void**)i1;
  i1 = i3 != 0;
  if (i1) goto l0;
l3:
  ;
}

void Worklist_init(void) {
  _mid = _register_module(&Worklist_md.md, &Worklist__NodeDesc_td.td);
  Worklist__garbage = (void*)0;
}
