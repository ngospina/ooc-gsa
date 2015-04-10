/* file generated by oo2c -- do not edit */
#include "GenDecl.h"
#include "Allocate.h"
#include "Classify.h"
#include "GenInclude.h"
#include "IntStr.h"
#include "Scanner.h"
#include "StdPragmas.h"
#include "StdTypes.h"
#include "Strings.h"
#include "SymbolTable.h"
#include "SymbolFile.h"
#include "SystemFlags.h"

/* local definitions */
static short int GenDecl__anonCounter;
static short int GenDecl__nameCounter;
static short int GenDecl__recordCounter;
#include "Parameter.h"
static Parameter__String GenDecl__dummyName;
static unsigned char GenDecl__rwList[2560];
GenDecl__ObjectList GenDecl__objList;
int GenDecl__objCount;
static Data__Object GenDecl__typeObject;
static SystemFlags__Info GenDecl__beInfo;
static short int GenDecl__currModule;
GenDecl__ObjectList GenDecl__tbCallList;

/* function prototypes */
unsigned char GenDecl__IllegalName(unsigned char* str, int str_0d);
Parameter__String GenDecl__AssignNames_SetObjectName_BuildName(unsigned char* s0, int s0_0d, const unsigned char* s1__ref, int s1_0d, const unsigned char* s2__ref, int s2_0d);
void GenDecl__AssignNames_SetObjectName_SetStructName_AssignList(Data__Object list, Data__Object *GenDecl__AssignNames_block, unsigned char GenDecl__AssignNames_str[1024]);
void GenDecl__AssignNames_SetObjectName_SetStructName(Data__Struct t, Data__Object *GenDecl__AssignNames_block, unsigned char GenDecl__AssignNames_str[1024]);
unsigned char GenDecl__AssignNames_SetObjectName_FromInterfaceModule(Data__Object obj);
unsigned char GenDecl__AssignNames_SetObjectName_NameClash(Parameter__String name, Data__Struct struct_);
void GenDecl__AssignNames_SetObjectName(Data__Object obj, Data__Object *GenDecl__AssignNames_block, unsigned char GenDecl__AssignNames_str[1024]);
void GenDecl__AssignNames_TraverseTree(Data__Object obj, Data__Object *GenDecl__AssignNames_block, unsigned char GenDecl__AssignNames_str[1024]);
void GenDecl__AssignNames_AssignImports(Data__Object obj);
void GenDecl__ArrayLength(TextRider__Writer w, Data__Object par, short int dim, unsigned char declaration, unsigned char nonlocal);
void GenDecl__TypeTag(TextRider__Writer w, Data__Object par, unsigned char declaration, unsigned char nonlocal);
void GenDecl__Declaration_EmitUsedDeclarations_WriteDeclaration(Data__Struct type, TextRider__Writer *GenDecl__Declaration_w, short int *GenDecl__Declaration_off);
void GenDecl__Declaration_EmitUsedDeclarations_WriteList(Data__Object obj, TextRider__Writer *GenDecl__Declaration_w, short int *GenDecl__Declaration_off);
void GenDecl__Declaration_EmitUsedDeclarations(Data__Struct type, TextRider__Writer *GenDecl__Declaration_w, short int *GenDecl__Declaration_off);
unsigned char GenDecl__Declaration_CanUseTypeName(Data__Struct t, unsigned int dmode);
Data__Struct GenDecl__Declaration_ArrayBase(Data__Struct t, int *size);
void GenDecl__Declaration_Pointer(unsigned char left, Data__Struct base, TextRider__Writer *GenDecl__Declaration_w);
void GenDecl__Declaration_LeftTypeExpr_PadStruct(int from, int upto, TextRider__Writer *GenDecl__Declaration_w, short int *GenDecl__Declaration_off);
int GenDecl__Declaration_LeftTypeExpr_EmitFields(Data__Struct t, unsigned char base, TextRider__Writer *GenDecl__Declaration_w, short int *GenDecl__Declaration_off);
void GenDecl__Declaration_LeftTypeExpr(Data__Struct t, unsigned int dmode, TextRider__Writer *GenDecl__Declaration_w, short int *GenDecl__Declaration_off);
void GenDecl__Declaration_DeclarationName_Name(Data__Object obj, unsigned int *GenDecl__Declaration_DeclarationName_dmode, TextRider__Writer *GenDecl__Declaration_w);
void GenDecl__Declaration_DeclarationName(Data__Object obj, unsigned int dmode, TextRider__Writer *GenDecl__Declaration_w);
void GenDecl__Declaration_FormalPars_WriteSep(unsigned char *GenDecl__Declaration_FormalPars_writeSep, TextRider__Writer *GenDecl__Declaration_w);
void GenDecl__Declaration_FormalPars_WriteParam(Data__Object par, unsigned char *GenDecl__Declaration_FormalPars_writeSep, TextRider__Writer *GenDecl__Declaration_w, unsigned int *GenDecl__Declaration_dmode, short int *GenDecl__Declaration_off);
void GenDecl__Declaration_FormalPars(Data__Struct t, TextRider__Writer *GenDecl__Declaration_w, Data__Object *GenDecl__Declaration_obj, unsigned int *GenDecl__Declaration_dmode, short int *GenDecl__Declaration_off);
void GenDecl__Declaration_RightTypeExpr(Data__Struct t, unsigned int *GenDecl__Declaration_dmode, TextRider__Writer *GenDecl__Declaration_w, Data__Object *GenDecl__Declaration_obj, short int *GenDecl__Declaration_off);
void GenDecl__Declaration_WriteCallConv(Data__Struct str, TextRider__Writer *GenDecl__Declaration_w);
void GenDecl__BuildObjList_BuildList(Data__Object obj);
void GenDecl__BuildObjList_QuickSort_Swap(int i, int j);
void GenDecl__BuildObjList_QuickSort(int l, int r);
short int GenDecl__Name(TextRider__Writer w, const unsigned char* name__ref, int name_0d);
void GenDecl__TBProcArray_WriteTBProc(Data__Struct record, short int index, TextRider__Writer *GenDecl__TBProcArray_w);
short int GenDecl__TBProcArray(TextRider__Writer w, Data__Struct t);
void GenDecl__TypeDescriptor_BaseTypes_WriteType(Data__Struct t, unsigned char last, TextRider__Writer *GenDecl__TypeDescriptor_BaseTypes_w);
void GenDecl__TypeDescriptor_BaseTypes(TextRider__Writer w, Data__Struct t);
void GenDecl__InitReservedWords_RW(const unsigned char* id__ref, int id_0d);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[8];
} _n0 = {8, NULL, {"GenDecl"}};
static struct _MD GenDecl_md = {
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
  const char name[15];
} _n1 = {15, NULL, {"SideEffectInfo"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} GenDecl__SideEffectInfo_tdb = {
  1, 
  NULL, 
  {
    &GenDecl__SideEffectInfo_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD GenDecl__SideEffectInfo_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    GenDecl__SideEffectInfo_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &GenDecl_md.md,
    0, 
    '0', '1',
    sizeof(GenDecl__SideEffectInfo),
    NULL
  }
};

/* local strings */
static const unsigned char _c135[] = "strcmpl";
static const unsigned char _c134[] = "strcmp";
static const unsigned char _c133[] = "memset";
static const unsigned char _c132[] = "memcpy";
static const unsigned char _c131[] = "alloca";
static const unsigned char _c130[] = "malloc";
static const unsigned char _c129[] = "throw";
static const unsigned char _c128[] = "virtual";
static const unsigned char _c127[] = "this";
static const unsigned char _c126[] = "try";
static const unsigned char _c125[] = "true";
static const unsigned char _c124[] = "template";
static const unsigned char _c123[] = "public";
static const unsigned char _c122[] = "protected";
static const unsigned char _c121[] = "private";
static const unsigned char _c120[] = "operator";
static const unsigned char _c119[] = "new";
static const unsigned char _c118[] = "inline";
static const unsigned char _c117[] = "friend";
static const unsigned char _c116[] = "false";
static const unsigned char _c115[] = "delete";
static const unsigned char _c114[] = "class";
static const unsigned char _c113[] = "catch";
static const unsigned char _c112[] = "bool";
static const unsigned char _c111[] = "asm";
static const unsigned char _c110[] = "fortran";
static const unsigned char _c109[] = "while";
static const unsigned char _c108[] = "volatile";
static const unsigned char _c107[] = "unsigned";
static const unsigned char _c106[] = "union";
static const unsigned char _c105[] = "typedef";
static const unsigned char _c104[] = "switch";
static const unsigned char _c103[] = "struct";
static const unsigned char _c102[] = "static";
static const unsigned char _c101[] = "sizeof";
static const unsigned char _c100[] = "signed";
static const unsigned char _c99[] = "short";
static const unsigned char _c98[] = "return";
static const unsigned char _c97[] = "register";
static const unsigned char _c96[] = "long";
static const unsigned char _c95[] = "int";
static const unsigned char _c94[] = "if";
static const unsigned char _c93[] = "goto";
static const unsigned char _c92[] = "for";
static const unsigned char _c91[] = "float";
static const unsigned char _c90[] = "extern";
static const unsigned char _c89[] = "enum";
static const unsigned char _c88[] = "else";
static const unsigned char _c87[] = "double";
static const unsigned char _c86[] = "do";
static const unsigned char _c85[] = "default";
static const unsigned char _c84[] = "continue";
static const unsigned char _c83[] = "const";
static const unsigned char _c82[] = "char";
static const unsigned char _c81[] = "case";
static const unsigned char _c80[] = "break";
static const unsigned char _c79[] = "auto";
static const unsigned char _c78[] = "),";
static const unsigned char _c77[] = "sizeof(";
static const unsigned char _c76[] = "\0470\047, \0471\047,";
static const unsigned char _c75[] = "_md.md,";
static const unsigned char _c74[] = ".name,";
static const unsigned char _c73[] = ".tbprocs,";
static const unsigned char _c72[] = "_tb";
static const unsigned char _c71[] = "b.btypes,";
static const unsigned char _c70[] = "&Types__TypeDesc_td.td,";
static const unsigned char _c69[] = "NULL,";
static const unsigned char _c68[] = "struct _TD ";
static const unsigned char _c67[] = "b = {";
static const unsigned char _c66[] = "} ";
static const unsigned char _c65[] = "_Type btypes[";
static const unsigned char _c64[] = ".td";
static const unsigned char _c63[] = "}};";
static const unsigned char _c62[] = "(void*)";
static const unsigned char _c61[] = ", NULL, {";
static const unsigned char _c60[] = "} _tb";
static const unsigned char _c59[] = "const void* tbprocs[";
static const unsigned char _c58[] = "};";
static const unsigned char _c57[] = "NULL";
static const unsigned char _c56[] = "-1, ";
static const unsigned char _c55[] = ".name, ";
static const unsigned char _c54[] = "_n";
static const unsigned char _c53[] = "&Kernel__ModuleDesc_td.td, ";
static const unsigned char _c52[] = "NULL, ";
static const unsigned char _c51[] = "_md = {";
static const unsigned char _c50[] = "static struct _MD ";
static const unsigned char _c49[] = "\042}};";
static const unsigned char _c48[] = ", NULL, {\042";
static const unsigned char _c47[] = " = {";
static const unsigned char _c46[] = "} _n";
static const unsigned char _c45[] = "];";
static const unsigned char _c44[] = "const char name[";
static const unsigned char _c43[] = "void* pad;";
static const unsigned char _c42[] = " length;";
static const unsigned char _c41[] = "static const struct {";
static const unsigned char _c40[] = "#define _TB";
static const unsigned char _c39[] = "signed ";
static const unsigned char _c38[] = "unsigned ";
static const unsigned char _c37[] = "_td";
static const unsigned char _c36[] = "_TypeDesc";
static const unsigned char _c35[] = "[] = ";
static const unsigned char _c34[] = "static const ";
static const unsigned char _c33[] = "_dummy_";
static const unsigned char _c32[] = ".h";
static const unsigned char _c31[] = "#define";
static const unsigned char _c30[] = "const ";
static const unsigned char _c29[] = "extern ";
static const unsigned char _c28[] = "static ";
static const unsigned char _c27[] = "typedef ";
static const unsigned char _c26[] = "(*)";
static const unsigned char _c25[] = " ";
static const unsigned char _c24[] = "#define _TBP_";
static const unsigned char _c23[] = "#define _TBN_";
static const unsigned char _c22[] = " __cdecl";
static const unsigned char _c21[] = " __stdcall";
static const unsigned char _c20[] = "Win32";
static const unsigned char _c19[] = "void";
static const unsigned char _c18[] = "(";
static const unsigned char _c17[] = "...";
static const unsigned char _c16[] = "__ref";
static const unsigned char _c15[] = "} _NOALIGN";
static const unsigned char _c14[] = "}";
static const unsigned char _c13[] = " {";
static const unsigned char _c12[] = "union ";
static const unsigned char _c11[] = "struct ";
static const unsigned char _c10[] = "void*";
static const unsigned char _c9[] = "char _dummy;";
static const unsigned char _c8[] = "pad";
static const unsigned char _c7[] = ", ";
static const unsigned char _c6[] = "char ";
static const unsigned char _c5[] = "__tag";
static const unsigned char _c4[] = "_Type ";
static const unsigned char _c3[] = "  ";
static const unsigned char _c2[] = "__";
static const unsigned char _c1[] = "";
static const unsigned char _c0[] = "_";
