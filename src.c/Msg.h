/* file generated by oo2c -- do not edit */
#ifndef _MODULE_Msg_
#define _MODULE_Msg_

#define Msg__sizeAttrName 127
#define Msg__sizeAttrReplacement 16383
typedef unsigned char Msg__Char;
typedef unsigned char* Msg__String;
typedef Msg__String Msg__StringPtr;
typedef unsigned short int Msg__LChar;
typedef unsigned short int* Msg__LString;
typedef Msg__LString Msg__LStringPtr;
typedef int Msg__Code;
typedef struct Msg__AttributeDesc {
  struct Msg__AttributeDesc* nextAttrib;
  Msg__StringPtr name;
} Msg__AttributeDesc;
typedef struct Msg__AttributeDesc* Msg__Attribute;
typedef struct Msg__ContextDesc {
  Msg__StringPtr id;
} Msg__ContextDesc;
typedef struct Msg__ContextDesc* Msg__Context;
typedef struct Msg__MsgDesc {
  struct Msg__MsgDesc* nextMsg;
  struct Msg__MsgDesc* prevMsg;
  int code;
  Msg__Context context;
  Msg__Attribute attribList;
} Msg__MsgDesc;
typedef struct Msg__MsgDesc* Msg__Msg;
typedef struct Msg__MsgListDesc {
  int msgCount;
  Msg__Msg msgList;
  Msg__Msg lastMsg;
} Msg__MsgListDesc;
typedef struct Msg__MsgListDesc* Msg__MsgList;
typedef struct Msg__IntAttributeDesc {
  Msg__Attribute nextAttrib;
  Msg__StringPtr name;
  int int_;
} Msg__IntAttributeDesc;
typedef struct Msg__IntAttributeDesc* Msg__IntAttribute;
typedef struct Msg__StringAttributeDesc {
  Msg__Attribute nextAttrib;
  Msg__StringPtr name;
  Msg__StringPtr string;
} Msg__StringAttributeDesc;
typedef struct Msg__StringAttributeDesc* Msg__StringAttribute;
typedef struct Msg__LStringAttributeDesc {
  Msg__Attribute nextAttrib;
  Msg__StringPtr name;
  Msg__LStringPtr string;
} Msg__LStringAttributeDesc;
typedef struct Msg__LStringAttributeDesc* Msg__LStringAttribute;
typedef struct Msg__MsgAttributeDesc {
  Msg__Attribute nextAttrib;
  Msg__StringPtr name;
  Msg__Msg msg;
} Msg__MsgAttributeDesc;
typedef struct Msg__MsgAttributeDesc* Msg__MsgAttribute;
extern void Msg__InitContext(Msg__Context context, const Msg__String id__ref, int id_0d);
extern void Msg__InitAttribute(Msg__Attribute attr, const Msg__String name__ref, int name_0d);
extern Msg__Msg Msg__New(Msg__Context context, int code);
extern void Msg__InitMsgList(Msg__MsgList l);
extern Msg__MsgList Msg__NewMsgList(void);
extern Msg__IntAttribute Msg__NewIntAttrib(const Msg__String name__ref, int name_0d, int value);
extern Msg__StringAttribute Msg__NewStringAttrib(const Msg__String name__ref, int name_0d, Msg__StringPtr value);
extern Msg__LStringAttribute Msg__NewLStringAttrib(const Msg__String name__ref, int name_0d, Msg__LStringPtr value);
extern Msg__MsgAttribute Msg__NewMsgAttrib(const Msg__String name__ref, int name_0d, Msg__Msg value);
extern Msg__StringPtr Msg__GetStringPtr(const Msg__String str__ref, int str_0d);
extern Msg__LStringPtr Msg__GetLStringPtr(const Msg__LString str__ref, int str_0d);
#define _TBP_Msg__ContextDesc_GetTemplate void(*)(Msg__Context context, Msg__Msg msg, Msg__LString templ, int templ_0d)
#define _TBN_Msg__ContextDesc_GetTemplate 0
extern void Msg__ContextDesc_GetTemplate(Msg__Context context, Msg__Msg msg, Msg__LString templ, int templ_0d);
#define _TBP_Msg__AttributeDesc_ReplacementText void(*)(Msg__Attribute attr, Msg__LString text, int text_0d)
#define _TBN_Msg__AttributeDesc_ReplacementText 0
extern void Msg__AttributeDesc_ReplacementText(Msg__Attribute attr, Msg__LString text, int text_0d);
#define _TBP_Msg__MsgDesc_SetAttribute void(*)(Msg__Msg msg, Msg__Attribute attr)
#define _TBN_Msg__MsgDesc_SetAttribute 0
extern void Msg__MsgDesc_SetAttribute(Msg__Msg msg, Msg__Attribute attr);
#define _TBP_Msg__MsgDesc_GetAttribute Msg__Attribute(*)(Msg__Msg msg, const Msg__String name, int name_0d)
#define _TBN_Msg__MsgDesc_GetAttribute 1
extern Msg__Attribute Msg__MsgDesc_GetAttribute(Msg__Msg msg, const Msg__String name, int name_0d);
#define _TBP_Msg__MsgDesc_GetLText void(*)(Msg__Msg msg, Msg__LString text, int text_0d)
#define _TBN_Msg__MsgDesc_GetLText 2
extern void Msg__MsgDesc_GetLText(Msg__Msg msg, Msg__LString text, int text_0d);
#define _TBP_Msg__MsgDesc_GetText void(*)(Msg__Msg msg, Msg__String text, int text_0d)
#define _TBN_Msg__MsgDesc_GetText 3
extern void Msg__MsgDesc_GetText(Msg__Msg msg, Msg__String text, int text_0d);
#define _TBP_Msg__MsgListDesc_Append void(*)(Msg__MsgList l, Msg__Msg msg)
#define _TBN_Msg__MsgListDesc_Append 0
extern void Msg__MsgListDesc_Append(Msg__MsgList l, Msg__Msg msg);
#define _TBP_Msg__MsgListDesc_AppendList void(*)(Msg__MsgList l, Msg__MsgList source)
#define _TBN_Msg__MsgListDesc_AppendList 1
extern void Msg__MsgListDesc_AppendList(Msg__MsgList l, Msg__MsgList source);
#define _TBP_Msg__MsgDesc_SetIntAttrib void(*)(Msg__Msg msg, const Msg__String name__ref, int name_0d, int value)
#define _TBN_Msg__MsgDesc_SetIntAttrib 4
extern void Msg__MsgDesc_SetIntAttrib(Msg__Msg msg, const Msg__String name__ref, int name_0d, int value);
#define _TBP_Msg__IntAttributeDesc_ReplacementText void(*)(Msg__IntAttribute attr, Msg__LString text, int text_0d)
#define _TBN_Msg__IntAttributeDesc_ReplacementText 0
extern void Msg__IntAttributeDesc_ReplacementText(Msg__IntAttribute attr, Msg__LString text, int text_0d);
#define _TBP_Msg__MsgDesc_SetStringAttrib void(*)(Msg__Msg msg, const Msg__String name__ref, int name_0d, Msg__StringPtr value)
#define _TBN_Msg__MsgDesc_SetStringAttrib 5
extern void Msg__MsgDesc_SetStringAttrib(Msg__Msg msg, const Msg__String name__ref, int name_0d, Msg__StringPtr value);
#define _TBP_Msg__StringAttributeDesc_ReplacementText void(*)(Msg__StringAttribute attr, Msg__LString text, int text_0d)
#define _TBN_Msg__StringAttributeDesc_ReplacementText 0
extern void Msg__StringAttributeDesc_ReplacementText(Msg__StringAttribute attr, Msg__LString text, int text_0d);
#define _TBP_Msg__MsgDesc_SetLStringAttrib void(*)(Msg__Msg msg, const Msg__String name__ref, int name_0d, Msg__LStringPtr value)
#define _TBN_Msg__MsgDesc_SetLStringAttrib 6
extern void Msg__MsgDesc_SetLStringAttrib(Msg__Msg msg, const Msg__String name__ref, int name_0d, Msg__LStringPtr value);
#define _TBP_Msg__LStringAttributeDesc_ReplacementText void(*)(Msg__LStringAttribute attr, Msg__LString text, int text_0d)
#define _TBN_Msg__LStringAttributeDesc_ReplacementText 0
extern void Msg__LStringAttributeDesc_ReplacementText(Msg__LStringAttribute attr, Msg__LString text, int text_0d);
#define _TBP_Msg__MsgDesc_SetMsgAttrib void(*)(Msg__Msg msg, const Msg__String name__ref, int name_0d, Msg__Msg value)
#define _TBN_Msg__MsgDesc_SetMsgAttrib 7
extern void Msg__MsgDesc_SetMsgAttrib(Msg__Msg msg, const Msg__String name__ref, int name_0d, Msg__Msg value);
#define _TBP_Msg__MsgAttributeDesc_ReplacementText void(*)(Msg__MsgAttribute attr, Msg__LString text, int text_0d)
#define _TBN_Msg__MsgAttributeDesc_ReplacementText 0
extern void Msg__MsgAttributeDesc_ReplacementText(Msg__MsgAttribute attr, Msg__LString text, int text_0d);
extern struct _TD Msg__AttributeDesc_td;
extern struct _TD Msg__ContextDesc_td;
extern struct _TD Msg__MsgDesc_td;
extern struct _TD Msg__MsgListDesc_td;
extern struct _TD Msg__IntAttributeDesc_td;
extern struct _TD Msg__StringAttributeDesc_td;
extern struct _TD Msg__LStringAttributeDesc_td;
extern struct _TD Msg__MsgAttributeDesc_td;
extern void Msg_init(void);

#endif