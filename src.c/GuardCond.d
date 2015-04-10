/* file generated by oo2c -- do not edit */
#include "GuardCond.h"
#include "Opcode.h"
#include "SymbolTable.h"

/* local definitions */

/* function prototypes */
void GuardCond__MarkUnreachable(GuardCond__RegionMatrix m, short int count, short int j);
unsigned char GuardCond__InitRegions_CreateRegionInfo_Prefix(GuardCond__RegionInfo ri, Data__Usable value, unsigned char negate);
GuardCond__RegionInfo GuardCond__InitRegions_CreateRegionInfo(Data__Region region, short int *GuardCond__InitRegions_id, GuardCond__RegionSummary *GuardCond__InitRegions_summary);
void GuardCond__InitRegions(Data__Region region, short int *id, GuardCond__RegionSummary summary);
void GuardCond__TransitiveHull(GuardCond__RegionMatrix m, GuardCond__InfoArray r, short int count);
short int GuardCond__Init_CountRegions(Data__Region r);
void GuardCond__Init_AddImplications_Implications(short int i, const GuardCond__Condition *cond, GuardCond__RegionMatrix *GuardCond__Init_m);
void GuardCond__Init_AddImplications(GuardCond__RegionInfo info, short int *GuardCond__Init_count, GuardCond__RegionMatrix *GuardCond__Init_m, Data__Opnd *GuardCond__Init_opnd);
void GuardCond__Init_PropagateGuards(Data__Region r);
void GuardCond__Init_InstrDepImplications(Data__Region r, Data__Opnd *GuardCond__Init_opnd);
unsigned char GuardCond__RemoveDeadReferences_Dead(short int i, GuardCond__RegionSummary *GuardCond__RemoveDeadReferences_s);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[8];
} _p0 = {8, NULL, {
  (const void*)&GuardCond__Contradicting,
  (const void*)&GuardCond__Implication,
  (const void*)&GuardCond__Implies,
  (const void*)&GuardCond__Init,
  (const void*)&GuardCond__OperandInfo,
  (const void*)&GuardCond__RemoveDeadReferences,
  (const void*)&GuardCond__TraceValue,
  (const void*)&GuardCond__Unreachable,
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
} _n0 = {10, NULL, {"GuardCond"}};
static struct _MD GuardCond_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -333402862
  }
};

static const struct {
  int length;
  void* pad;
  const char name[10];
} _n1 = {10, NULL, {"Condition"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} GuardCond__Condition_tdb = {
  1, 
  NULL, 
  {
    &GuardCond__Condition_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD GuardCond__Condition_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    GuardCond__Condition_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &GuardCond_md.md,
    0, 
    '0', '1',
    sizeof(GuardCond__Condition),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[18];
} _n2 = {18, NULL, {"RegionSummaryDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} GuardCond__RegionSummaryDesc_tdb = {
  1, 
  NULL, 
  {
    &GuardCond__RegionSummaryDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb1 = {0, NULL, {
  NULL
}};
struct _TD GuardCond__RegionSummaryDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    GuardCond__RegionSummaryDesc_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &GuardCond_md.md,
    0, 
    '0', '1',
    sizeof(GuardCond__RegionSummaryDesc),
    &GuardCond__Condition_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[15];
} _n3 = {15, NULL, {"RegionInfoDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} GuardCond__RegionInfoDesc_tdb = {
  2, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &GuardCond__RegionInfoDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb2 = {0, NULL, {
  NULL
}};
struct _TD GuardCond__RegionInfoDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    GuardCond__RegionInfoDesc_tdb.btypes,
    _tb2.tbprocs,
    (const unsigned char*)_n3.name,
    &GuardCond_md.md,
    1, 
    '0', '1',
    sizeof(GuardCond__RegionInfoDesc),
    &GuardCond__RegionSummaryDesc_td.td
  }
};

/* local strings */

