/* file generated by oo2c -- do not edit */
#include "ConvTypes.h"

/* local definitions */

/* function prototypes */

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[1];
} _p0 = {0, NULL, {NULL
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
} _n0 = {10, NULL, {"ConvTypes"}};
static struct _MD ConvTypes_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    1512044858
  }
};

static const struct {
  int length;
  void* pad;
  const char name[9];
} _n1 = {9, NULL, {"ScanDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} ConvTypes__ScanDesc_tdb = {
  1, 
  NULL, 
  {
    &ConvTypes__ScanDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD ConvTypes__ScanDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ConvTypes__ScanDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &ConvTypes_md.md,
    0, 
    '0', '1',
    sizeof(ConvTypes__ScanDesc),
    NULL
  }
};

/* local strings */

