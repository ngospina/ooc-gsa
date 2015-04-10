/* file generated by oo2c -- do not edit */
#ifndef _MODULE_Parameter_
#define _MODULE_Parameter_

#define Parameter__sizeFilename 256
#define Parameter__sizeName 32
#define Parameter__maxLevel 8
#define Parameter__currPos -1
#define Parameter__currSym -2
typedef unsigned char Parameter__Filename[256];
typedef unsigned char* Parameter__String;
typedef struct Parameter__SectionDesc {
  struct Parameter__SectionDesc* next;
  Parameter__String name;
  unsigned char defined;
  unsigned char noWrite;
  char _10pad, _11pad;
} Parameter__SectionDesc;
typedef struct Parameter__SectionDesc* Parameter__Section;
typedef unsigned char Parameter__LargeString[2048];
typedef struct Parameter__StreamDesc {
  struct Parameter__StreamDesc* prev;
  signed char level;
  unsigned char currChar;
  unsigned char eos;
  unsigned char err;
  int currSymPos;
} Parameter__StreamDesc;
typedef struct Parameter__StreamDesc* Parameter__Stream;
#include "Files.h"
#include "BinaryRider.h"
typedef struct Parameter__FileStreamDesc {
  Parameter__Stream prev;
  signed char level;
  unsigned char currChar;
  unsigned char eos;
  unsigned char err;
  int currSymPos;
  Parameter__Filename fileName;
  Files__File f;
  BinaryRider__Reader r;
} Parameter__FileStreamDesc;
typedef struct Parameter__FileStreamDesc* Parameter__FileStream;
typedef struct Parameter__StringStreamDesc {
  Parameter__Stream prev;
  signed char level;
  unsigned char currChar;
  unsigned char eos;
  unsigned char err;
  int currSymPos;
  Parameter__String s;
  unsigned char errorMsg[120];
  int pos;
} Parameter__StringStreamDesc;
typedef struct Parameter__StringStreamDesc* Parameter__StringStream;
extern Parameter__Stream Parameter__in;
typedef struct Parameter__IncludeSectionDesc {
  Parameter__Section next;
  Parameter__String name;
  unsigned char defined;
  unsigned char noWrite;
  char _10pad, _11pad;
} Parameter__IncludeSectionDesc;
extern struct Parameter__IncludeSectionDesc* Parameter__include;
extern void Parameter__Warning(const unsigned char* msg__ref, int msg_0d);
extern void Parameter__FatalError(const unsigned char* msg__ref, int msg_0d);
extern unsigned char Parameter__IsAlpha(unsigned char ch);
extern unsigned char Parameter__IsNum(unsigned char ch);
extern Parameter__Section Parameter__GetSection(const unsigned char* name, int name_0d);
extern void Parameter__AddSection(const unsigned char* name__ref, int name_0d, Parameter__Section s);
extern void Parameter__ParseConfigFile(const unsigned char* configFile__ref, int configFile_0d, const unsigned char* envVar__ref, int envVar_0d, const unsigned char* configOveride__ref, int configOveride_0d, unsigned char enableInclude, unsigned char skipUnknownSection, unsigned char* fileParsed, int fileParsed_0d);
extern void Parameter__WriteConfig(void);
extern short int Parameter__ParseCmdLine(unsigned char optionsStartWithDash, unsigned char multSingleChar, unsigned char enableDashDash);
extern void Parameter__GetArg(short int index, unsigned char* arg, int arg_0d);
#define _TBP_Parameter__StreamDesc_Remove void(*)(Parameter__Stream s)
#define _TBN_Parameter__StreamDesc_Remove 0
extern void Parameter__StreamDesc_Remove(Parameter__Stream s);
#define _TBP_Parameter__StreamDesc_NextChar void(*)(Parameter__Stream s)
#define _TBN_Parameter__StreamDesc_NextChar 1
extern void Parameter__StreamDesc_NextChar(Parameter__Stream s);
#define _TBP_Parameter__StreamDesc_Install void(*)(Parameter__Stream s)
#define _TBN_Parameter__StreamDesc_Install 2
extern void Parameter__StreamDesc_Install(Parameter__Stream s);
#define _TBP_Parameter__StreamDesc_Error void(*)(Parameter__Stream s, int pos, const unsigned char* msg, int msg_0d)
#define _TBN_Parameter__StreamDesc_Error 3
extern void Parameter__StreamDesc_Error(Parameter__Stream s, int pos, const unsigned char* msg, int msg_0d);
#define _TBP_Parameter__StreamDesc_CurrPos int(*)(Parameter__Stream s)
#define _TBN_Parameter__StreamDesc_CurrPos 4
extern int Parameter__StreamDesc_CurrPos(Parameter__Stream s);
#define _TBP_Parameter__StreamDesc_SkipWhitespace void(*)(Parameter__Stream s)
#define _TBN_Parameter__StreamDesc_SkipWhitespace 5
extern void Parameter__StreamDesc_SkipWhitespace(Parameter__Stream s);
#define _TBP_Parameter__StreamDesc_ReadIdent void(*)(Parameter__Stream s, unsigned char* ident, int ident_0d)
#define _TBN_Parameter__StreamDesc_ReadIdent 6
extern void Parameter__StreamDesc_ReadIdent(Parameter__Stream s, unsigned char* ident, int ident_0d);
#define _TBP_Parameter__StreamDesc_ReadInteger void(*)(Parameter__Stream s, unsigned char* num, int num_0d)
#define _TBN_Parameter__StreamDesc_ReadInteger 7
extern void Parameter__StreamDesc_ReadInteger(Parameter__Stream s, unsigned char* num, int num_0d);
#define _TBP_Parameter__StreamDesc_ReadString void(*)(Parameter__Stream s, unsigned char* str, int str_0d)
#define _TBN_Parameter__StreamDesc_ReadString 8
extern void Parameter__StreamDesc_ReadString(Parameter__Stream s, unsigned char* str, int str_0d);
#define _TBP_Parameter__StreamDesc_ReadName void(*)(Parameter__Stream s, const unsigned char* sep__ref, int sep_0d, unsigned char* name, int name_0d)
#define _TBN_Parameter__StreamDesc_ReadName 9
extern void Parameter__StreamDesc_ReadName(Parameter__Stream s, const unsigned char* sep__ref, int sep_0d, unsigned char* name, int name_0d);
#define _TBP_Parameter__StreamDesc_LookingAtString unsigned char(*)(Parameter__Stream s, unsigned char* str, int str_0d)
#define _TBN_Parameter__StreamDesc_LookingAtString 10
extern unsigned char Parameter__StreamDesc_LookingAtString(Parameter__Stream s, unsigned char* str, int str_0d);
#define _TBP_Parameter__StreamDesc_Match void(*)(Parameter__Stream s, const unsigned char* sym__ref, int sym_0d)
#define _TBN_Parameter__StreamDesc_Match 11
extern void Parameter__StreamDesc_Match(Parameter__Stream s, const unsigned char* sym__ref, int sym_0d);
#define _TBP_Parameter__SectionDesc_Parse void(*)(Parameter__Section section, unsigned char includeEnd)
#define _TBN_Parameter__SectionDesc_Parse 0
extern void Parameter__SectionDesc_Parse(Parameter__Section section, unsigned char includeEnd);
#define _TBP_Parameter__SectionDesc_Write void(*)(Parameter__Section section)
#define _TBN_Parameter__SectionDesc_Write 1
extern void Parameter__SectionDesc_Write(Parameter__Section section);
#define _TBP_Parameter__SectionDesc_CmdLineOption void(*)(Parameter__Section s, const unsigned char* cmdNames__ref, int cmdNames_0d, const unsigned char* cmdValue__ref, int cmdValue_0d)
#define _TBN_Parameter__SectionDesc_CmdLineOption 2
extern void Parameter__SectionDesc_CmdLineOption(Parameter__Section s, const unsigned char* cmdNames__ref, int cmdNames_0d, const unsigned char* cmdValue__ref, int cmdValue_0d);
#define _TBP_Parameter__FileStreamDesc_Install void(*)(Parameter__FileStream s)
#define _TBN_Parameter__FileStreamDesc_Install 2
extern void Parameter__FileStreamDesc_Install(Parameter__FileStream s);
#define _TBP_Parameter__FileStreamDesc_Remove void(*)(Parameter__FileStream s)
#define _TBN_Parameter__FileStreamDesc_Remove 0
extern void Parameter__FileStreamDesc_Remove(Parameter__FileStream s);
#define _TBP_Parameter__FileStreamDesc_NextChar void(*)(Parameter__FileStream s)
#define _TBN_Parameter__FileStreamDesc_NextChar 1
extern void Parameter__FileStreamDesc_NextChar(Parameter__FileStream s);
#define _TBP_Parameter__FileStreamDesc_Error void(*)(Parameter__FileStream s, int pos, const unsigned char* msg__ref, int msg_0d)
#define _TBN_Parameter__FileStreamDesc_Error 3
extern void Parameter__FileStreamDesc_Error(Parameter__FileStream s, int pos, const unsigned char* msg__ref, int msg_0d);
#define _TBP_Parameter__FileStreamDesc_CurrPos int(*)(Parameter__FileStream s)
#define _TBN_Parameter__FileStreamDesc_CurrPos 4
extern int Parameter__FileStreamDesc_CurrPos(Parameter__FileStream s);
typedef struct Parameter__IncludeSectionDesc* Parameter__IncludeSection;
#define _TBP_Parameter__IncludeSectionDesc_Parse void(*)(Parameter__IncludeSection incl, unsigned char includeEnd)
#define _TBN_Parameter__IncludeSectionDesc_Parse 0
extern void Parameter__IncludeSectionDesc_Parse(Parameter__IncludeSection incl, unsigned char includeEnd);
#define _TBP_Parameter__StringStreamDesc_Install void(*)(Parameter__StringStream s)
#define _TBN_Parameter__StringStreamDesc_Install 2
extern void Parameter__StringStreamDesc_Install(Parameter__StringStream s);
#define _TBP_Parameter__StringStreamDesc_NextChar void(*)(Parameter__StringStream s)
#define _TBN_Parameter__StringStreamDesc_NextChar 1
extern void Parameter__StringStreamDesc_NextChar(Parameter__StringStream s);
#define _TBP_Parameter__StringStreamDesc_Error void(*)(Parameter__StringStream s, int pos, const unsigned char* msg__ref, int msg_0d)
#define _TBN_Parameter__StringStreamDesc_Error 3
extern void Parameter__StringStreamDesc_Error(Parameter__StringStream s, int pos, const unsigned char* msg__ref, int msg_0d);
#define _TBP_Parameter__StringStreamDesc_CurrPos int(*)(Parameter__StringStream s)
#define _TBN_Parameter__StringStreamDesc_CurrPos 4
extern int Parameter__StringStreamDesc_CurrPos(Parameter__StringStream s);
extern struct _TD Parameter__SectionDesc_td;
extern struct _TD Parameter__IncludeSectionDesc_td;
extern struct _TD Parameter__CmdLineOptionDesc_td;
extern struct _TD Parameter__StreamDesc_td;
extern struct _TD Parameter__FileStreamDesc_td;
extern struct _TD Parameter__StringStreamDesc_td;
extern void Parameter_init(void);

#endif