/* file generated by oo2c -- do not edit */
#include "DeadCodeElimination.h"
#include "Opcode.h"

/* local definitions */

/* function prototypes */
void DeadCodeElimination__MarkDead(Data__Instruction instr);
void DeadCodeElimination__MarkLive(Data__Instruction instr);
void DeadCodeElimination__MarkException(Data__Instruction instr, unsigned char removeDisabled);
void DeadCodeElimination__DeleteDeadCode(Data__Instruction instr);
void DeadCodeElimination__RemoveRuntimeChecks(Data__Region region);

/* module and type descriptors */
static const struct {
  int length;
  void* pad;
  const char name[20];
} _n0 = {20, NULL, {"DeadCodeElimination"}};
static struct _MD DeadCodeElimination_md = {
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

