/* file generated by oo2c -- do not edit */
#include "FileData.h"
#include "Data.h"
#include "Files.h"
#include "ParamPaths.h"
#include "Rts.h"
#include "Strings.h"
#include "Termination.h"

/* local definitions */
static FileData__FileData FileData__fileList;
typedef struct FileData__FileListDesc {
  struct FileData__FileListDesc* next;
  unsigned char* name;
} FileData__FileListDesc;
typedef struct FileData__FileListDesc* FileData__FileList;
static FileData__FileList FileData__removalList;

/* function prototypes */
void FileData__GetFile_InitFile(FileData__FileData file, unsigned char* name, int name_0d, unsigned char* suffix, int suffix_0d);
void FileData__RemoveFiles_ExecCmd(short int *FileData__RemoveFiles_cmdLen, unsigned char FileData__RemoveFiles_cmd[2048]);
void FileData__RemoveFiles_AddFile(unsigned char* file, int file_0d, short int *FileData__RemoveFiles_cmdLen, unsigned char FileData__RemoveFiles_cmd[2048]);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[9];
} _n0 = {9, NULL, {"FileData"}};
static struct _MD FileData_md = {
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
  const char name[13];
} _n1 = {13, NULL, {"FileDataDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} FileData__FileDataDesc_tdb = {
  1, 
  NULL, 
  {
    &FileData__FileDataDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb0 = {0, NULL, {
  NULL
}};
struct _TD FileData__FileDataDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    FileData__FileDataDesc_tdb.btypes,
    _tb0.tbprocs,
    (const unsigned char*)_n1.name,
    &FileData_md.md,
    0, 
    '0', '1',
    sizeof(FileData__FileDataDesc),
    NULL
  }
};

static const struct {
  int length;
  void* pad;
  const char name[15];
} _n2 = {15, NULL, {"DependenceDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} FileData__DependenceDesc_tdb = {
  1, 
  NULL, 
  {
    &FileData__DependenceDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb1 = {0, NULL, {
  NULL
}};
struct _TD FileData__DependenceDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    FileData__DependenceDesc_tdb.btypes,
    _tb1.tbprocs,
    (const unsigned char*)_n2.name,
    &FileData_md.md,
    0, 
    '0', '1',
    sizeof(FileData__DependenceDesc),
    &FileData__FileDataDesc_td.td
  }
};

static const struct {
  int length;
  void* pad;
  const char name[13];
} _n3 = {13, NULL, {"FileListDesc"}};
static const struct {
  int length;
  void* pad;
  _Type btypes[1];
} FileData__FileListDesc_tdb = {
  1, 
  NULL, 
  {
    &FileData__FileListDesc_td.td
  }
};
static const struct {
  int length;
  void* pad;
  const void* tbprocs[1];
} _tb2 = {0, NULL, {
  NULL
}};
struct _TD FileData__FileListDesc_td = {
  NULL,
  &Types__TypeDesc_td.td,
  {
    FileData__FileListDesc_tdb.btypes,
    _tb2.tbprocs,
    (const unsigned char*)_n3.name,
    &FileData_md.md,
    0, 
    '0', '1',
    sizeof(FileData__FileListDesc),
    &FileData__DependenceDesc_td.td
  }
};

/* local strings */
static const unsigned char _c2[] = "rm -f";
static const unsigned char _c1[] = "\047";
static const unsigned char _c0[] = "Failed to retrive time stamp of `";
