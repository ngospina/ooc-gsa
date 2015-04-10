/* file generated by oo2c -- do not edit */
#include "ParamOptions.h"
#include "ConvTypes.h"
#include "IntStr.h"
#include "Out.h"
#include "Strings.h"

/* local definitions */
ParamOptions__OptionsSection ParamOptions__options;
static unsigned char ParamOptions__done;
unsigned char ParamOptions__error[128];

/* function prototypes */
void ParamOptions__OptionsSectionDesc_Remove_Remove(ParamOptions__Option *opt, unsigned char* ParamOptions__OptionsSectionDesc_Remove_name);
void ParamOptions__OptionsSectionDesc_Parse_GetSym(int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_str, unsigned char *ParamOptions__OptionsSectionDesc_Parse_includeEnd);
void ParamOptions__OptionsSectionDesc_Parse_Match(signed char expected, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_str, unsigned char *ParamOptions__OptionsSectionDesc_Parse_includeEnd);
ParamOptions__Option ParamOptions__OptionsSectionDesc_Parse_Create(const unsigned char* name__ref, int name_0d, unsigned char register_, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, ParamOptions__OptionsSection *ParamOptions__OptionsSectionDesc_Parse_s);
void ParamOptions__OptionsSectionDesc_Parse_Accept(ParamOptions__Option opt, const unsigned char* str__ref, int str_0d, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos);
void ParamOptions__OptionsSectionDesc_Parse_Assign(unsigned char def, signed char *ParamOptions__OptionsSectionDesc_Parse_sym, ParamOptions__Option *ParamOptions__OptionsSectionDesc_Parse_opt, ParamOptions__OptionsSection *ParamOptions__OptionsSectionDesc_Parse_s, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_str, Parameter__LargeString ParamOptions__OptionsSectionDesc_Parse_name, int *ParamOptions__OptionsSectionDesc_Parse_currSymPos, unsigned char *ParamOptions__OptionsSectionDesc_Parse_includeEnd);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[13];
} _n0 = {13, NULL, {"ParamOptions"}};
static struct _MD ParamOptions_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[11];
} _n1 = {11, NULL, {"OptionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} ParamOptions__OptionDesc_tdb = {
  1, 
  NULL, 
  {
    &ParamOptions__OptionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[4];
} _tb0 = {4, NULL, {
  (void*)ParamOptions__OptionDesc_Write, 
  (void*)ParamOptions__OptionDesc_Accept, 
  (void*)ParamOptions__OptionDesc_Copy, 
  (void*)ParamOptions__OptionDesc_CopyValue
}};
struct _TD ParamOptions__OptionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ParamOptions__OptionDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &ParamOptions_md.md,
    0, 
    '0', '1',
    sizeof(ParamOptions__OptionDesc),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[19];
} _n2 = {19, NULL, {"OptionsSectionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} ParamOptions__OptionsSectionDesc_tdb = {
  2, 
  NULL, 
  {
    &Parameter__SectionDesc_td.td, 
    &ParamOptions__OptionsSectionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[6];
} _tb1 = {6, NULL, {
  (void*)ParamOptions__OptionsSectionDesc_Parse, 
  (void*)ParamOptions__OptionsSectionDesc_Write, 
  (void*)Parameter__SectionDesc_CmdLineOption, 
  (void*)ParamOptions__OptionsSectionDesc_Find, 
  (void*)ParamOptions__OptionsSectionDesc_Add, 
  (void*)ParamOptions__OptionsSectionDesc_Remove
}};
struct _TD ParamOptions__OptionsSectionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ParamOptions__OptionsSectionDesc_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &ParamOptions_md.md,
    1, 
    '0', '1',
    sizeof(ParamOptions__OptionsSectionDesc),
    &ParamOptions__OptionDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[18];
} _n3 = {18, NULL, {"BooleanOptionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} ParamOptions__BooleanOptionDesc_tdb = {
  2, 
  NULL, 
  {
    &ParamOptions__OptionDesc_td.td, 
    &ParamOptions__BooleanOptionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[5];
} _tb2 = {5, NULL, {
  (void*)ParamOptions__BooleanOptionDesc_Write, 
  (void*)ParamOptions__BooleanOptionDesc_Accept, 
  (void*)ParamOptions__BooleanOptionDesc_Copy, 
  (void*)ParamOptions__BooleanOptionDesc_CopyValue, 
  (void*)ParamOptions__BooleanOptionDesc_Set
}};
struct _TD ParamOptions__BooleanOptionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ParamOptions__BooleanOptionDesc_tdb.btypes,
    _tb2.tbprocs,
    (const unsigned char*)_n3.name,
    &ParamOptions_md.md,
    1, 
    '0', '1',
    sizeof(ParamOptions__BooleanOptionDesc),
    &ParamOptions__OptionsSectionDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[18];
} _n4 = {18, NULL, {"IntegerOptionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} ParamOptions__IntegerOptionDesc_tdb = {
  2, 
  NULL, 
  {
    &ParamOptions__OptionDesc_td.td, 
    &ParamOptions__IntegerOptionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[5];
} _tb3 = {5, NULL, {
  (void*)ParamOptions__IntegerOptionDesc_Write, 
  (void*)ParamOptions__IntegerOptionDesc_Accept, 
  (void*)ParamOptions__IntegerOptionDesc_Copy, 
  (void*)ParamOptions__IntegerOptionDesc_CopyValue, 
  (void*)ParamOptions__IntegerOptionDesc_Set
}};
struct _TD ParamOptions__IntegerOptionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ParamOptions__IntegerOptionDesc_tdb.btypes,
    _tb3.tbprocs,
    (const unsigned char*)_n4.name,
    &ParamOptions_md.md,
    1, 
    '0', '1',
    sizeof(ParamOptions__IntegerOptionDesc),
    &ParamOptions__BooleanOptionDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[17];
} _n5 = {17, NULL, {"StringOptionDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[2];
} ParamOptions__StringOptionDesc_tdb = {
  2, 
  NULL, 
  {
    &ParamOptions__OptionDesc_td.td, 
    &ParamOptions__StringOptionDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[5];
} _tb4 = {5, NULL, {
  (void*)ParamOptions__StringOptionDesc_Write, 
  (void*)ParamOptions__StringOptionDesc_Accept, 
  (void*)ParamOptions__StringOptionDesc_Copy, 
  (void*)ParamOptions__StringOptionDesc_CopyValue, 
  (void*)ParamOptions__StringOptionDesc_Set
}};
struct _TD ParamOptions__StringOptionDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    ParamOptions__StringOptionDesc_tdb.btypes,
    _tb4.tbprocs,
    (const unsigned char*)_n5.name,
    &ParamOptions_md.md,
    1, 
    '0', '1',
    sizeof(ParamOptions__StringOptionDesc),
    &ParamOptions__IntegerOptionDesc_td.td
  }
};
#define _TB1 4
#define _TB2 4
#define _TB3 4

/* local strings */
static const unsigned char _c20[] = "OPTIONS";
static const unsigned char _c19[] = " := ";
static const unsigned char _c18[] = "  ";
static const unsigned char _c17[] = "; expected";
static const unsigned char _c16[] = "Variable already defined";
static const unsigned char _c15[] = "Variable not defined";
static const unsigned char _c14[] = "Variable name expected";
static const unsigned char _c13[] = "String expected";
static const unsigned char _c12[] = "";
static const unsigned char _c11[] = "Illegal value";
static const unsigned char _c10[] = " expected";
static const unsigned char _c9[] = ":=";
static const unsigned char _c8[] = "DEFINE";
static const unsigned char _c7[] = "END";
static const unsigned char _c6[] = "\042";
static const unsigned char _c5[] = "Number expected";
static const unsigned char _c4[] = " <= x <= ";
static const unsigned char _c3[] = "Integer value must be in the range ";
static const unsigned char _c2[] = "Boolean value (TRUE or FALSE) expected";
static const unsigned char _c1[] = "FALSE";
static const unsigned char _c0[] = "TRUE";

