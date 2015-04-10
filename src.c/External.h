/* file generated by oo2c -- do not edit */
#ifndef _MODULE_External_
#define _MODULE_External_

typedef struct External__RefDesc {
  struct External__RefDesc* next;
  struct External__RefDesc* nextExt;
  signed char mode;
  char _9pad, _10pad, _11pad;
  int pos;
} External__RefDesc;
typedef struct External__RefDesc* External__Ref;
#define External__noRef 0
#define External__fileRef 1
#define External__objRef 2
#define External__libRef 3
#define External__libDepRef 4
#include "Parameter.h"
typedef struct External__NameListDesc {
  struct External__NameListDesc* next;
  Parameter__String name;
} External__NameListDesc;
typedef struct External__NameListDesc* External__NameList;
typedef struct External__FileDesc {
  External__Ref next;
  External__Ref nextExt;
  signed char mode;
  char _9pad, _10pad, _11pad;
  int pos;
  Parameter__String name;
  Parameter__String suffix;
  External__NameList prefixOptions;
  External__NameList suffixOptions;
} External__FileDesc;
typedef struct External__FileDesc* External__File;
typedef struct External__DependenceDesc {
  struct External__DependenceDesc* next;
  struct External__LibDesc* lib;
} External__DependenceDesc;
typedef struct External__DependenceDesc* External__Dependence;
typedef struct External__ModuleIdDesc {
  struct External__ModuleIdDesc* next;
  Parameter__String name;
  int magicId;
} External__ModuleIdDesc;
typedef struct External__ModuleIdDesc* External__ModuleId;
typedef struct External__LibDesc {
  External__Ref next;
  External__Ref nextExt;
  signed char mode;
  char _9pad, _10pad, _11pad;
  int pos;
  struct External__LibDesc* nextLib;
  Parameter__String name;
  Parameter__String version;
  Parameter__String installPath;
  External__Dependence depList;
  External__ModuleId modList;
  External__NameList prefixOptions;
  External__NameList suffixOptions;
  signed char mark;
  unsigned char deferred;
  short int counter;
} External__LibDesc;
typedef struct External__LibDesc* External__Lib;
extern unsigned char External__libFileId[5];
extern External__File External__NewFile(signed char mode, const unsigned char* name__ref, int name_0d, const unsigned char* suffix__ref, int suffix_0d, int pos);
extern External__Lib External__GetLib(signed char mode, const unsigned char* name__ref, int name_0d, const unsigned char* version__ref, int version_0d);
extern void External__ClearLibList(External__Lib leave);
extern void External__AddName(External__NameList *list, Parameter__String name);
extern void External__Append(External__Ref *list, External__Ref ref);
extern void External__AppendDep(External__Lib lib, Parameter__String name);
#include "Data.h"
extern void External__AddModule(External__Lib lib, Data__Object module);
#include "BinaryRider.h"
extern Parameter__String External__ReadString(BinaryRider__Reader r);
extern External__Ref External__ReadRefList(BinaryRider__Reader r);
extern void External__WriteString(BinaryRider__Writer w, unsigned char* str, int str_0d);
extern void External__WriteRefList(BinaryRider__Writer w, External__Ref list);
extern void External__WriteLibFile(External__Lib lib, const unsigned char* path__ref, int path_0d);
extern void External__ReadLibFile(External__Lib lib, int pos);
extern void External__ClearMarks(void);
extern void External__MarkLib(External__Lib lib, unsigned char o2Lib);
extern External__Ref External__SortMarkedLibraries(void);
extern struct _TD External__RefDesc_td;
extern struct _TD External__NameListDesc_td;
extern struct _TD External__FileDesc_td;
extern struct _TD External__LibDesc_td;
extern struct _TD External__DependenceDesc_td;
extern struct _TD External__ModuleIdDesc_td;
extern void External_init(void);

#endif