/* file generated by oo2c -- do not edit */
#include "WriteSymbols.h"
#include "IntStr.h"
#include "LRealStr.h"
#include "Out.h"
#include "Strings.h"
#include "SymbolTable.h"

/* local definitions */

/* function prototypes */
void WriteSymbols__Ln(short int off);
void WriteSymbols__Const_Char(int char_, unsigned char* WriteSymbols__Const_str, int WriteSymbols__Const_str_0d);
void WriteSymbols__Const_Real(double val, short int prec, unsigned char exp, unsigned char* WriteSymbols__Const_str, int WriteSymbols__Const_str_0d);
void WriteSymbols__Const_Set(unsigned int set, unsigned char* WriteSymbols__Const_str, int WriteSymbols__Const_str_0d);
void WriteSymbols__Const_String8(const unsigned char* s__ref, int s_0d, int len, unsigned char* WriteSymbols__Const_str, int WriteSymbols__Const_str_0d);
void WriteSymbols__Const_String16(const unsigned char* s__ref, int s_0d, int len, unsigned char* WriteSymbols__Const_str, int WriteSymbols__Const_str_0d);
void WriteSymbols__WriteTree_WriteObject_WriteStruct(Data__Struct t, unsigned char structure, short int off, short int *WriteSymbols__WriteTree_off);
void WriteSymbols__WriteTree_WriteObject_Name(Data__Object *WriteSymbols__WriteTree_WriteObject_obj);
void WriteSymbols__WriteTree_WriteObject(Data__Object obj, short int *WriteSymbols__WriteTree_off);
void WriteSymbols__WriteTree(Data__Object obj, short int off);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[13];
} _n0 = {13, NULL, {"WriteSymbols"}};
static struct _MD WriteSymbols_md = {
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
static const unsigned char _c50[] = "END ";
static const unsigned char _c49[] = "Module.left:";
static const unsigned char _c48[] = "]";
static const unsigned char _c47[] = " [mid=";
static const unsigned char _c46[] = ", FILE ";
static const unsigned char _c45[] = "MODULE ";
static const unsigned char _c44[] = "...";
static const unsigned char _c43[] = " := ";
static const unsigned char _c42[] = "IMPORT ";
static const unsigned char _c41[] = ") ";
static const unsigned char _c40[] = "PROCEDURE ";
static const unsigned char _c39[] = "VARPAR ";
static const unsigned char _c38[] = "VAR ";
static const unsigned char _c37[] = "TYPE ";
static const unsigned char _c36[] = " = ";
static const unsigned char _c35[] = "CONST ";
static const unsigned char _c34[] = "_undef object_";
static const unsigned char _c33[] = "] ";
static const unsigned char _c32[] = ",lev=";
static const unsigned char _c31[] = "[mid=";
static const unsigned char _c30[] = "_no name_";
static const unsigned char _c29[] = "";
static const unsigned char _c28[] = "END";
static const unsigned char _c27[] = "RECORD";
static const unsigned char _c26[] = "ARRAY OF ";
static const unsigned char _c25[] = " OF ";
static const unsigned char _c24[] = "ARRAY ";
static const unsigned char _c23[] = ": ";
static const unsigned char _c22[] = "; ";
static const unsigned char _c21[] = " (";
static const unsigned char _c20[] = "PROCEDURE";
static const unsigned char _c19[] = "POINTER TO ";
static const unsigned char _c18[] = "_no type_";
static const unsigned char _c17[] = "_nil_";
static const unsigned char _c16[] = "_string16_";
static const unsigned char _c15[] = "_string8_";
static const unsigned char _c14[] = "_undef struct_";
static const unsigned char _c13[] = "undef_const";
static const unsigned char _c12[] = "NIL";
static const unsigned char _c11[] = "FALSE";
static const unsigned char _c10[] = "TRUE";
static const unsigned char _c9[] = "__long_string__";
static const unsigned char _c8[] = "}";
static const unsigned char _c7[] = "..";
static const unsigned char _c6[] = ", ";
static const unsigned char _c5[] = "{";
static const unsigned char _c4[] = "D0";
static const unsigned char _c3[] = "\047 \047";
static const unsigned char _c2[] = "0xxxxX";
static const unsigned char _c1[] = "\042 \042";
static const unsigned char _c0[] = "  ";

