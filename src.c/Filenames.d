/* file generated by oo2c -- do not edit */
#include "Filenames.h"
#include "Rts.h"
#include "Strings.h"
#include "Strings2.h"

/* local definitions */

/* function prototypes */
short int Filenames__LocateCharLast(const unsigned char* str__ref, int str_0d, unsigned char ch);
void Filenames__SplitRChar(const unsigned char* str__ref, int str_0d, unsigned char* str1, int str1_0d, unsigned char* str2, int str2_0d, unsigned char ch);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const void* list[7];
} _p0 = {7, NULL, {
  (const void*)&Filenames__AddExt,
  (const void*)&Filenames__AddPath,
  (const void*)&Filenames__BuildFilename,
  (const void*)&Filenames__ExpandPath,
  (const void*)&Filenames__GetExt,
  (const void*)&Filenames__GetFile,
  (const void*)&Filenames__GetPath,
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
} _n0 = {10, NULL, {"Filenames"}};
static struct _MD Filenames_md = {
  NULL, 
  &Kernel__ModuleDesc_td.td, 
  {
    NULL, 
    (const unsigned char*)_n0.name, 
    -1, 
    NULL,
    _p0.list,
    _p1.list,
    -1884430904
  }
};

/* local strings */
static const unsigned char _c1[] = "/";
static const unsigned char _c0[] = "";

