/* file generated by oo2c -- do not edit */
#include "GenInclude.h"
#include "Filenames.h"
#include "ParamPaths.h"
#include "Parameter.h"
#include "StdTypes.h"
#include "Strings.h"
#include "Strings2.h"
#include "SymbolTable.h"

/* local definitions */

/* function prototypes */
unsigned char GenInclude__AddOptions_MatchesHeader(const unsigned char* pattern__ref, int pattern_0d);
unsigned char GenInclude__AddOptions_Duplicate(unsigned char* str, int str_0d, short int *GenInclude__AddOptions_pathCounter, ParamPaths__Path GenInclude__AddOptions_pathArray[256]);
unsigned char GenInclude__AddOptions_ContainsBlanks(unsigned char* str, int str_0d);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[11];
} _n0 = {11, NULL, {"GenInclude"}};
static struct _MD GenInclude_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL
  }
};

/* local strings */
static const unsigned char _c6[] = " -I-";
static const unsigned char _c5[] = " -I";
static const unsigned char _c4[] = "\042";
static const unsigned char _c3[] = " \042-I";
static const unsigned char _c2[] = ".d";
static const unsigned char _c1[] = ".h";
static const unsigned char _c0[] = "#include \042";

