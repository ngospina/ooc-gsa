/* file generated by oo2c -- do not edit */
#include "GenStatm.h"
#include "Allocate.h"
#include "Attributes.h"
#include "Classify.h"
#include "Config.h"
#include "ControlFlow.h"
#include "GenConst.h"
#include "GenDecl.h"
#include "IntStr.h"
#include "Opcode.h"
#include "Out.h"
#include "SystemFlags.h"
#include "Schedule.h"
#include "StdPragmas.h"
#include "StdTypes.h"
#include "Strings.h"
#include "SymbolTable.h"
#include "WriteGSAvC.h"

/* local definitions */
static ParamOptions__BooleanOption GenStatm__writeSyncStatm;
ParamOptions__IntegerOption GenStatm__valueStack;
ParamOptions__StringOption GenStatm__gcflags;
static TextRider__Writer GenStatm__w;
static short int GenStatm__off;
static unsigned char GenStatm__localOpenArray;
typedef struct GenStatm__Assignment {
  Data__Opnd src;
  Allocate__Location srcLoc;
  Allocate__Location destLoc;
  signed char cat;
  char _13pad, _14pad, _15pad;
} GenStatm__Assignment;
typedef GenStatm__Assignment* GenStatm__AssignArray;
static GenStatm__AssignArray GenStatm__assignArray;
static int GenStatm__currId;
static unsigned char GenStatm__opList[9];

/* function prototypes */
void GenStatm__NewLine(void);
void GenStatm__WriteName(Data__Object obj);
Allocate__Location GenStatm__GetLocation(Data__Node u);
void GenStatm__WriteLocation(Data__Node u);
void GenStatm__WriteArg(Data__Opnd opnd);
void GenStatm__WriteNthArg(short int index, Data__Instruction instr);
void GenStatm__WriteResultCast(Data__Instruction instr, unsigned char unsigned_);
void GenStatm__WritePos(int pos);
unsigned char GenStatm__WriteDyOp_OpStyle_Const(signed char val, Data__Usable *GenStatm__WriteDyOp_OpStyle_arg);
signed char GenStatm__WriteDyOp_OpStyle(unsigned char* GenStatm__WriteDyOp_op, int GenStatm__WriteDyOp_op_0d, Data__Instruction *GenStatm__WriteDyOp_instr, short int *GenStatm__WriteDyOp_opnd0, short int *GenStatm__WriteDyOp_opnd1);
void GenStatm__WriteDyOp(Data__Instruction instr, const unsigned char* op__ref, int op_0d, short int opnd0, short int opnd1);
void GenStatm__WriteMonOp(Data__Instruction instr, const unsigned char* op__ref, int op_0d, short int opnd);
void GenStatm__WriteDyCall(Data__Instruction instr, const unsigned char* fct__ref, int fct_0d, short int opnd0, short int opnd1);
void GenStatm__WriteMonCall(Data__Instruction instr, const unsigned char* fct__ref, int fct_0d, short int opnd);
unsigned char GenStatm__ForceToMem_SymbolicValue(Data__Location l);
unsigned char GenStatm__ForceToMem_NoChange(Data__SymLocation l, Data__Usable arg);
void GenStatm__ForceToMem(Data__GlobalRegion greg, Data__Opnd opnd);
void GenStatm__ForceListToMem(Data__GlobalRegion greg, Data__Opnd opndList);
void GenStatm__CollectToMem(Data__GlobalRegion greg, Data__Instruction instr);
Data__Struct GenStatm__CastFromScalarType(Data__Opnd opnd);
void GenStatm__ExitInstr(Data__Instruction exit);
void GenStatm__SpecialCallInstr(Data__Instruction instr);
void GenStatm__CheckNil(Data__Instruction instr, short int adr);
void GenStatm__CallInstr_Param(Data__Opnd opnd, Data__Object fpar, short int attrib, unsigned char *GenStatm__CallInstr_first);
unsigned char GenStatm__CallInstr_CollectOpnds_FormalPar(Data__Object fpar, Data__Object obj, Data__Usable *GenStatm__CallInstr_procObj);
void GenStatm__CallInstr_CollectOpnds(Data__Instruction instr, Data__Struct *GenStatm__CallInstr_formalPars, Data__Usable *GenStatm__CallInstr_procObj);
void GenStatm__CallInstr_PassArgument(Data__Object fpar, Data__Opnd *opnd, unsigned char *GenStatm__CallInstr_first, short int *GenStatm__CallInstr_i);
void GenStatm__CallInstr(Data__Instruction instr);
void GenStatm__ArrayLength(Data__Instruction instr);
void GenStatm__TBProcAddress(Data__Instruction instr);
void GenStatm__TypeTest(Data__Instruction instr);
void GenStatm__TypeGuard(Data__Instruction instr);
void GenStatm__TypeAssertion(Data__Instruction instr);
void GenStatm__BoundInstr(Data__Instruction instr);
void GenStatm__TypeCastInstr_WriteAddress(Data__GlobalRegion greg, Data__Usable u);
void GenStatm__TypeCastInstr(Data__Instruction instr);
void GenStatm__StructCopy_WriteScalarValue(Data__Opnd opnd);
void GenStatm__StructCopy_MemCopy(unsigned char useSrc, Data__Instruction *GenStatm__StructCopy_instr);
void GenStatm__StructCopy(Data__Instruction instr);
unsigned char GenStatm__NewInstr_AllocateBlock_HasPtr_FieldPtr(Data__Object obj);
unsigned char GenStatm__NewInstr_AllocateBlock_HasPtr(Data__Struct t);
void GenStatm__NewInstr_AllocateBlock_WriteSize(Data__Instruction instr, Data__Struct type, int offset, Data__Struct *GenStatm__NewInstr_AllocateBlock_t, short int *GenStatm__NewInstr_AllocateBlock_dim);
void GenStatm__NewInstr_AllocateBlock(Data__Struct *GenStatm__NewInstr_type, Data__Instruction *GenStatm__NewInstr_instr, short int *GenStatm__NewInstr_opc, int *GenStatm__NewInstr_offset);
void GenStatm__NewInstr(Data__Instruction instr, short int opc);
void GenStatm__AccessInstr(Data__Instruction instr, short int subclass);
Data__Struct GenStatm__UpdateInstr_UpdateType(Data__Instruction instr);
void GenStatm__UpdateInstr(Data__Instruction instr, short int subclass);
void GenStatm__TrapInstr(Data__Instruction instr);
void GenStatm__ConvInstr(Data__Instruction instr);
void GenStatm__CheckZeroDiv(Data__Instruction instr, short int rhs);
void GenStatm__ArithInstr(Data__Instruction instr, short int class_);
void GenStatm__PredefFunction_ShiftName(Data__Usable arg, const unsigned char* name__ref, int name_0d, const unsigned char* posSuffix__ref, int posSuffix_0d, const unsigned char* negSuffix__ref, int negSuffix_0d, Data__Instruction *GenStatm__PredefFunction_instr);
void GenStatm__PredefFunction_ShiftCountRot(Data__Opnd shift, int bits);
void GenStatm__PredefFunction_ShiftCount(Data__Opnd shift);
void GenStatm__PredefFunction(Data__Instruction instr, short int class_);
void GenStatm__SetInstr(Data__Instruction instr, short int class_);
void GenStatm__CompareInstr_WriteRelation(short int class_);
void GenStatm__CompareInstr(Data__Instruction instr, short int class_, short int subclass);
void GenStatm__AssignToGates_AddAssignment(Data__Opnd src, Allocate__Location srcLoc, Allocate__Location destLoc, signed char cat, short int *GenStatm__AssignToGates_counter);
unsigned char GenStatm__AssignToGates_Arrange_Schedulable(short int i, short int *GenStatm__AssignToGates_Arrange_schedEnd, short int *GenStatm__AssignToGates_counter);
short int GenStatm__AssignToGates_Arrange(short int schedEnd, short int *GenStatm__AssignToGates_counter);
void GenStatm__AssignToGates_IntroduceAuxVar(short int i, short int *GenStatm__AssignToGates_auxCounter, Allocate__Location *GenStatm__AssignToGates_loc, short int *GenStatm__AssignToGates_counter);
void GenStatm__AssignToGates(Data__Merge merge, Data__Region r);
void GenStatm__Label(Data__Instruction instr);
void GenStatm__Goto(Data__Instruction instr, unsigned char newline);
void GenStatm__Region_MarkForwardReference(Data__Instruction instr);
void GenStatm__Region_CaseGuard_Compare(const unsigned char* op__ref, int op_0d, int int_, Data__Opnd *GenStatm__Region_CaseGuard_select);
void GenStatm__Region_CaseGuard(Data__Opnd select, Data__Opnd labelList);
void GenStatm__Region(Data__Region r);
unsigned char GenStatm__GlobalRegion_CopyValueParams(Data__Struct fpars, Data__Instruction *GenStatm__GlobalRegion_enter, Data__GlobalRegion *GenStatm__GlobalRegion_greg);
unsigned char GenStatm__EmitLocalVars_UndefinedUse(Data__Object obj);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[9];
} _n0 = {9, NULL, {"GenStatm"}};
static struct _MD GenStatm_md = {
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
} _n1 = {11, NULL, {"Assignment"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} GenStatm__Assignment_tdb = {
  1, 
  NULL, 
  {
    &GenStatm__Assignment_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD GenStatm__Assignment_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    GenStatm__Assignment_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &GenStatm_md.md,
    0, 
    '0', '1',
    sizeof(GenStatm__Assignment),
    NULL
  }
};

/* local strings */
static const unsigned char _c143[] = "gcflags:=\047$1\047";
static const unsigned char _c142[] = "--gcflags";
static const unsigned char _c141[] = "gcflags";
static const unsigned char _c140[] = "valueStack";
static const unsigned char _c139[] = "writeSyncStatm:=TRUE";
static const unsigned char _c138[] = "--cgsa-sync-statm";
static const unsigned char _c137[] = "*/%+-&^|";
static const unsigned char _c136[] = "writeSyncStatm";
static const unsigned char _c135[] = "d";
static const unsigned char _c134[] = "_push_value(";
static const unsigned char _c133[] = "_push_value_ov(";
static const unsigned char _c132[] = "_push_value_alloca(";
static const unsigned char _c131[] = "(void)memcpy(&";
static const unsigned char _c130[] = "__ref, ";
static const unsigned char _c129[] = "char* _old_top_vs = _top_vs;";
static const unsigned char _c128[] = "!";
static const unsigned char _c127[] = "(";
static const unsigned char _c126[] = "2";
static const unsigned char _c125[] = "_string_copy";
static const unsigned char _c124[] = "_bit";
static const unsigned char _c123[] = ", 0, ";
static const unsigned char _c122[] = "(void)memset((void*) ";
static const unsigned char _c121[] = "!(";
static const unsigned char _c120[] = "region (";
static const unsigned char _c119[] = " && ";
static const unsigned char _c118[] = " || ";
static const unsigned char _c117[] = "goto l";
static const unsigned char _c116[] = "a";
static const unsigned char _c115[] = ";";
static const unsigned char _c114[] = " 0";
static const unsigned char _c113[] = ", (const char*) ";
static const unsigned char _c112[] = "strcmp((const char*) ";
static const unsigned char _c111[] = ", (const ";
static const unsigned char _c110[] = "*) ";
static const unsigned char _c109[] = "strcmpl((const ";
static const unsigned char _c108[] = ">=";
static const unsigned char _c107[] = ">";
static const unsigned char _c106[] = "<=";
static const unsigned char _c105[] = "<";
static const unsigned char _c104[] = "!=";
static const unsigned char _c103[] = "==";
static const unsigned char _c102[] = "~";
static const unsigned char _c101[] = " | (";
static const unsigned char _c100[] = " & ~(";
static const unsigned char _c99[] = ")) != 0;";
static const unsigned char _c98[] = "1 << ";
static const unsigned char _c97[] = " & (";
static const unsigned char _c96[] = " = (";
static const unsigned char _c95[] = " = _bit_range(";
static const unsigned char _c94[] = "|";
static const unsigned char _c93[] = "^";
static const unsigned char _c92[] = "&";
static const unsigned char _c91[] = "_rot";
static const unsigned char _c90[] = "_const";
static const unsigned char _c89[] = "_lsh";
static const unsigned char _c88[] = "_odd";
static const unsigned char _c87[] = "_cap";
static const unsigned char _c86[] = "_capl";
static const unsigned char _c85[] = "r";
static const unsigned char _c84[] = "l";
static const unsigned char _c83[] = "_ash";
static const unsigned char _c82[] = "_abs";
static const unsigned char _c81[] = "_div";
static const unsigned char _c80[] = "_mod";
static const unsigned char _c79[] = "/";
static const unsigned char _c78[] = "-";
static const unsigned char _c77[] = "+";
static const unsigned char _c76[] = "_div_by_zero(";
static const unsigned char _c75[] = "integer";
static const unsigned char _c74[] = "real";
static const unsigned char _c73[] = "== 0) _";
static const unsigned char _c72[] = ")) _real_overflow(";
static const unsigned char _c71[] = "if(!_valid_real(";
static const unsigned char _c70[] = "_entier(";
static const unsigned char _c69[] = "_halt(";
static const unsigned char _c68[] = "_assertion_failed(";
static const unsigned char _c67[] = "_with_failed(";
static const unsigned char _c66[] = "_case_failed(";
static const unsigned char _c65[] = "_no_return(";
static const unsigned char _c64[] = "(void*)";
static const unsigned char _c63[] = "_";
static const unsigned char _c62[] = "*";
static const unsigned char _c61[] = "_mem;";
static const unsigned char _c60[] = "_var;";
static const unsigned char _c59[] = ".td;";
static const unsigned char _c58[] = "((_Type*)_var)[-1] = &";
static const unsigned char _c57[] = "*(--_dim_ptr) = ";
static const unsigned char _c56[] = "_dim_ptr = (void*)(_var-";
static const unsigned char _c55[] = "_var = _mem+";
static const unsigned char _c54[] = "* _dim_ptr;";
static const unsigned char _c53[] = ", *_var;";
static const unsigned char _c52[] = "char *_mem";
static const unsigned char _c51[] = "(void)memset((void*)_mem, ";
static const unsigned char _c50[] = "(void)memset((void*)_mem, 0, ";
static const unsigned char _c49[] = "if (!_mem) _new_failed(";
static const unsigned char _c48[] = "GC_malloc";
static const unsigned char _c47[] = "GC_malloc_atomic";
static const unsigned char _c46[] = "malloc";
static const unsigned char _c45[] = "_mem = ";
static const unsigned char _c44[] = " < 0) _invalid_length(";
static const unsigned char _c43[] = "if(";
static const unsigned char _c42[] = "&_src";
static const unsigned char _c41[] = ", (const void*) ";
static const unsigned char _c40[] = "(void)memcpy((void*) ";
static const unsigned char _c39[] = "&_src;";
static const unsigned char _c38[] = "_src = ";
static const unsigned char _c37[] = "_src";
static const unsigned char _c36[] = "_index_out_of_range(";
static const unsigned char _c35[] = "_element_out_of_range(";
static const unsigned char _c34[] = ") ";
static const unsigned char _c33[] = " >= ";
static const unsigned char _c32[] = "if (";
static const unsigned char _c31[] = "_type_assert(";
static const unsigned char _c30[] = "_type_guard(";
static const unsigned char _c29[] = " = _type_test(";
static const unsigned char _c28[] = "];";
static const unsigned char _c27[] = "_TB";
static const unsigned char _c26[] = ")->tbprocs[";
static const unsigned char _c25[] = "((_Type)";
static const unsigned char _c24[] = " = *";
static const unsigned char _c23[] = "((";
static const unsigned char _c22[] = ") _deref_of_nil(";
static const unsigned char _c21[] = "if (!";
static const unsigned char _c20[] = "#undef _SOURCE_PTR ";
static const unsigned char _c19[] = "#define _SOURCE_PTR ";
static const unsigned char _c18[] = "#include \042__pushcontext.h\042";
static const unsigned char _c17[] = "return ";
static const unsigned char _c16[] = "$result";
static const unsigned char _c15[] = "_top_vs = _old_top_vs;";
static const unsigned char _c14[] = "";
static const unsigned char _c13[] = ");";
static const unsigned char _c12[] = ", ";
static const unsigned char _c11[] = "--";
static const unsigned char _c10[] = "++";
static const unsigned char _c9[] = "= ";
static const unsigned char _c8[] = " = ";
static const unsigned char _c7[] = ")";
static const unsigned char _c6[] = "_P(";
static const unsigned char _c5[] = "/*    */ ";
static const unsigned char _c4[] = "*/ ";
static const unsigned char _c3[] = " ";
static const unsigned char _c2[] = "  ";
static const unsigned char _c1[] = "   ";
static const unsigned char _c0[] = "/*";
