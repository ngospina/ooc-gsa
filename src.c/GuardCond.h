/* file generated by oo2c -- do not edit */
#ifndef _MODULE_GuardCond_
#define _MODULE_GuardCond_

#include "Data.h"
typedef struct GuardCond__Condition {
  Data__Usable value;
  unsigned char negate;
  char _5pad, _6pad, _7pad;
} GuardCond__Condition;
typedef struct GuardCond__RegionInfoDesc** GuardCond__InfoArray;
typedef signed char* GuardCond__RegionMatrix;
typedef struct GuardCond__RegionSummaryDesc {
  GuardCond__InfoArray infos;
  GuardCond__RegionMatrix matrix;
  short int count;
  char _10pad, _11pad;
} GuardCond__RegionSummaryDesc;
typedef struct GuardCond__RegionSummaryDesc* GuardCond__RegionSummary;
typedef struct GuardCond__RegionInfoDesc {
  Data__Region region;
  GuardCond__Condition guard;
  struct GuardCond__RegionInfoDesc* prefix;
  short int id;
  char _18pad, _19pad;
  GuardCond__RegionSummary summary;
} GuardCond__RegionInfoDesc;
typedef struct GuardCond__RegionInfoDesc* GuardCond__RegionInfo;
#define GuardCond__unknown 0
#define GuardCond__false 1
#define GuardCond__true 2
#define GuardCond__partialImplication 3
#define GuardCond__implies 2
#define GuardCond__contradicts 1
extern signed char GuardCond__Implies(GuardCond__Condition *c1, _Type c1__tag, GuardCond__Condition *c2, _Type c2__tag);
extern unsigned char GuardCond__Unreachable(Data__Region r);
extern unsigned char GuardCond__Contradicting(GuardCond__RegionInfo ri1, GuardCond__RegionInfo ri2);
extern unsigned char GuardCond__Implication(GuardCond__RegionInfo ri1, GuardCond__RegionInfo ri2);
extern unsigned char GuardCond__TraceValue(Data__Usable startValue, Data__Usable *value, unsigned char fast);
extern GuardCond__RegionInfo GuardCond__OperandInfo(Data__Opnd opnd);
extern void GuardCond__Init(Data__GlobalRegion greg);
extern void GuardCond__RemoveDeadReferences(Data__GlobalRegion greg);
extern struct _TD GuardCond__Condition_td;
extern struct _TD GuardCond__RegionSummaryDesc_td;
extern struct _TD GuardCond__RegionInfoDesc_td;
extern void GuardCond_init(void);

#endif
