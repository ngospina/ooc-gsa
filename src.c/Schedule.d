/* file generated by oo2c -- do not edit */
#include "Schedule.h"
#include "AliasAnalysis.h"
#include "Classify.h"
#include "GuardCond.h"
#include "Opcode.h"
#include "StdTypes.h"
#include "SymbolTable.h"
#include "Worklist.h"

/* local definitions */
typedef struct Schedule__ScheduleInfoDesc {
  int value;
  unsigned char inWorklist;
  char _5pad, _6pad, _7pad;
  struct Schedule__ScheduleInfoDesc* next;
} Schedule__ScheduleInfoDesc;
typedef struct Schedule__ScheduleInfoDesc* Schedule__ScheduleInfo;
static Data__Object Schedule__auxObj;
static Data__SymLocation Schedule__auxLocation;
static Data__Region Schedule__ready;
static Schedule__ScheduleInfo Schedule__infoList;

/* function prototypes */
void Schedule__DataDependencies_AddAccesses(Data__Instruction update, Data__Usable value);
Data__Usable Schedule__DataDependencies_AddStoreAccesses_GetStoreInput(Data__Instruction instr);
void Schedule__DataDependencies_AddStoreAccesses(Data__Instruction update, Data__Usable value);
Data__Instruction Schedule__DataDependencies_InspectUpdate_UpUpdate(Data__Instruction instr);
Data__Usable Schedule__DataDependencies_InspectUpdate_UpdatedValue(Data__Instruction instr);
void Schedule__DataDependencies_InspectUpdate(Data__Instruction instr, Data__Instruction originalUpdate, Data__GlobalRegion *Schedule__DataDependencies_greg);
void Schedule__DataDependencies(Data__GlobalRegion greg, Data__Region r);
void Schedule__BranchDependencies(Data__Region r);
unsigned char Schedule__BackedgeOpnd(Data__Opnd opnd);
void Schedule__RegionDependencies_GetNeighbours(Data__Instruction i0_, Data__Instruction i1_, Data__Instruction *base0, Data__Instruction *base1);
void Schedule__RegionDependencies(Data__Region r);
Schedule__ScheduleInfo Schedule__InitSelection_NewScheduleInfo(void);
unsigned char Schedule__InitSelection_EndOfRegion(Data__Instruction instr, Data__Region *Schedule__InitSelection_r);
void Schedule__InitSelection(Data__Region r);
void Schedule__JustAdded(Data__Region ready, Data__Instruction instr);
Data__Instruction Schedule__Select(Data__Region ready);
unsigned char Schedule__Schedule_MergeUse_MergeOpnd(Data__Merge merge, Data__Region region, Data__Region *Schedule__Schedule_r);
unsigned char Schedule__Schedule_MergeUse(Data__Instruction instr, Data__Instruction use, Data__Region *Schedule__Schedule_r);
Data__Instruction Schedule__Schedule_AddToReady(Data__Instruction instr, Data__Region *Schedule__Schedule_r);
unsigned char Schedule__Schedule_ScheduleInstr_ScheduleMergeOpnds_Schedulable(Data__Opnd opnd, Data__Region *Schedule__Schedule_r);
void Schedule__Schedule_ScheduleInstr_ScheduleMergeOpnds(Data__Instruction merge, Data__Region *Schedule__Schedule_r, Data__Instruction *Schedule__Schedule_scheduled, int *Schedule__Schedule_unscheduled);
void Schedule__Schedule_ScheduleInstr(Data__Instruction instr, Data__Region *Schedule__Schedule_r, Data__Instruction *Schedule__Schedule_scheduled, int *Schedule__Schedule_unscheduled);
unsigned char Schedule__Schedule_DelayedRegion(Data__Region r);
void Schedule__Schedule(Data__Region r);
void Schedule__Cleanup(Data__Region r);
void Schedule__Region_PassStoreToExit(Data__Instruction exit, Data__GlobalRegion greg);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[2];
} _p0 = {2, NULL, {
  (const void*)&Schedule__ExecutedBefore,
  (const void*)&Schedule__Region,
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
  const char name[9];
} _n0 = {9, NULL, {"Schedule"}};
static struct _MD Schedule_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    1081961888
  }
};

static const struct {
  int length;
  void* pad;
  const char name[17];
} _n1 = {17, NULL, {"ScheduleInfoDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} Schedule__ScheduleInfoDesc_tdb = {
  2, 
  NULL, 
  {
    &Data__InfoDesc_td.td, 
    &Schedule__ScheduleInfoDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD Schedule__ScheduleInfoDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    Schedule__ScheduleInfoDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &Schedule_md.md,
    1, 
    '0', '1',
    sizeof(Schedule__ScheduleInfoDesc),
    NULL
  }
};

/* local strings */
static const unsigned char _c0[] = "";

