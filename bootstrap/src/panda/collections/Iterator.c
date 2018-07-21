#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/collections/Iterator/FilterIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array.h"

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$Iterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$Iterator$class_type panda$collections$Iterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, NULL, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

typedef panda$core$Bit (*$fn12)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn18)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn45)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn46)(panda$core$Object*);
typedef panda$core$Bit (*$fn130)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn141)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn158)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn188)(panda$collections$Iterator*);
typedef void (*$fn190)(panda$core$Object*, panda$core$Object*);
typedef void (*$fn191)(panda$core$Object*);
typedef panda$core$Bit (*$fn197)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn223)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn230)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn239)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn242)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn243)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn257)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn276)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn288)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn289)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn303)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 1346324154505245510, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 84, 754779096528033879, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x70\x61\x6e\x64\x61", 19, 4579722322800558910, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, -6814385964810289208, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, -3998816657593608985, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 119, -7317356300179666480, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, 4736941845026332569, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, -7677722807381227033, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, 7586548203169175042, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 7271337161154683349, NULL };

panda$core$Int64 panda$collections$Iterator$count$R$panda$core$Int64(panda$collections$Iterator* self) {
    panda$core$Int64 result5;
    panda$core$Int64 $tmp6;
    panda$core$Object* $tmp15;
    panda$core$Int64 $tmp20;
    panda$core$Int64 $returnValue22;
    int $tmp4;
    {
        panda$core$Int64$init$builtin_int64(&$tmp6, 0);
        result5 = $tmp6;
        $l7:;
        ITable* $tmp10 = self->$class->itable;
        while ($tmp10->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp10 = $tmp10->next;
        }
        $fn12 $tmp11 = $tmp10->methods[0];
        panda$core$Bit $tmp13 = $tmp11(self);
        panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
        bool $tmp9 = $tmp14.value;
        if (!$tmp9) goto $l8;
        {
            ITable* $tmp16 = self->$class->itable;
            while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp16 = $tmp16->next;
            }
            $fn18 $tmp17 = $tmp16->methods[1];
            panda$core$Object* $tmp19 = $tmp17(self);
            $tmp15 = $tmp19;
            panda$core$Panda$unref$panda$core$Object$Q($tmp15);
            panda$core$Int64$init$builtin_int64(&$tmp20, 1);
            panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result5, $tmp20);
            result5 = $tmp21;
        }
        goto $l7;
        $l8:;
        $returnValue22 = result5;
        $tmp4 = 0;
        goto $l2;
        $l23:;
        return $returnValue22;
    }
    $l2:;
    ITable* $tmp26 = self->$class->itable;
    while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp26 = $tmp26->next;
    }
    $fn28 $tmp27 = $tmp26->methods[0];
    panda$core$Bit $tmp29 = $tmp27(self);
    if ($tmp29.value) goto $l30; else goto $l31;
    $l31:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s32, (panda$core$Int64) { 128 }, &$s33);
    abort();
    $l30:;
    switch ($tmp4) {
        case 0: goto $l23;
    }
    $l25:;
    abort();
}
panda$core$Bit panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit(panda$core$MutableMethod* self, panda$core$Object* p_p0) {
    panda$core$MutableMethod* methodVar37 = NULL;
    panda$core$MutableMethod* $tmp38;
    panda$core$Method* $tmp39;
    panda$core$Object* $tmp41;
    panda$core$Object* $tmp42;
    panda$core$Bit $returnValue43;
    panda$core$Bit $tmp44;
    int $tmp36;
    {
        panda$core$Method* $tmp40 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
        panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp40, self->pointer, ((panda$core$Immutable*) NULL));
        $tmp39 = $tmp40;
        $tmp38 = ((panda$core$MutableMethod*) $tmp39);
        methodVar37 = $tmp38;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
        {
            $tmp41 = methodVar37->target;
            $tmp42 = self->target;
            methodVar37->target = $tmp42;
            panda$core$Panda$ref$panda$core$Object$Q($tmp42);
            panda$core$Panda$unref$panda$core$Object$Q($tmp41);
        }
        if (methodVar37->target) {
            $tmp44 = (($fn45) methodVar37->pointer)(methodVar37->target, p_p0);
        } else {
            $tmp44 = (($fn46) methodVar37->pointer)(p_p0);
        }
        $returnValue43 = $tmp44;
        $tmp36 = 0;
        goto $l34;
        $l47:;
        return $returnValue43;
    }
    $l34:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) methodVar37));
    methodVar37 = NULL;
    switch ($tmp36) {
        case 0: goto $l47;
    }
    $l49:;
    if (false) goto $l50; else goto $l51;
    $l51:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s52, (panda$core$Int64) { 144 }, &$s53);
    abort();
    $l50:;
    abort();
}
panda$collections$Iterator* panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$MutableMethod* p_predicate) {
    panda$collections$Iterator* $returnValue54;
    panda$collections$Iterator* $tmp55;
    panda$collections$Iterator$FilterIterator* $tmp56;
    panda$collections$Iterator$FilterIterator* $tmp57 = (panda$collections$Iterator$FilterIterator*) pandaObjectAlloc(48, (panda$core$Class*) &panda$collections$Iterator$FilterIterator$class);
    panda$core$MutableMethod* $tmp58 = (panda$core$MutableMethod*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$MutableMethod$class);
    panda$core$MutableMethod$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Object$Q($tmp58, (panda$core$Int8*) &panda$core$MutableMethod$$shim1$panda$collections$Iterator$FilterIterator$T$R$panda$core$Bit, ((panda$core$Object*) p_predicate));
    panda$collections$Iterator$FilterIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$FilterIterator$T$GT$$LPpanda$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPpanda$core$Bit$RP($tmp57, self, ((panda$core$MutableMethod*) ((panda$core$Object*) $tmp58)));
    $tmp56 = $tmp57;
    $tmp55 = ((panda$collections$Iterator*) $tmp56);
    $returnValue54 = $tmp55;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
    return $returnValue54;
}
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range) {
    panda$core$Int64 $tmp64;
    panda$core$Int64 $tmp70;
    panda$collections$Iterator* $returnValue77;
    panda$collections$Iterator* $tmp78;
    panda$collections$Iterator$RangeIterator* $tmp79;
    panda$core$Int64 $tmp81;
    bool $tmp61 = ((panda$core$Bit) { !p_range.min.nonnull }).value;
    if ($tmp61) goto $l62;
    panda$core$Int64$init$builtin_int64(&$tmp64, 0);
    panda$core$Bit $tmp65 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp64, true }).value));
    bool $tmp63 = $tmp65.value;
    if (!$tmp63) goto $l66;
    $tmp63 = ((panda$core$Bit) { !p_range.max.nonnull }).value;
    $l66:;
    panda$core$Bit $tmp67 = { $tmp63 };
    $tmp61 = $tmp67.value;
    $l62:;
    panda$core$Bit $tmp68 = { $tmp61 };
    bool $tmp60 = $tmp68.value;
    if ($tmp60) goto $l69;
    panda$core$Int64$init$builtin_int64(&$tmp70, 0);
    panda$core$Bit $tmp71 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.min.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp70, true }).value));
    $tmp60 = $tmp71.value;
    $l69:;
    panda$core$Bit $tmp72 = { $tmp60 };
    if ($tmp72.value) goto $l73; else goto $l74;
    $l74:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s75, (panda$core$Int64) { 164 }, &$s76);
    abort();
    $l73:;
    panda$collections$Iterator$RangeIterator* $tmp80 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$core$Int64$init$builtin_int64(&$tmp81, 1);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp80, self, p_range.min, p_range.max, p_range.inclusive, $tmp81);
    $tmp79 = $tmp80;
    $tmp78 = ((panda$collections$Iterator*) $tmp79);
    $returnValue77 = $tmp78;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
    return $returnValue77;
}
panda$collections$Iterator* panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_range) {
    panda$core$Int64 $tmp87;
    panda$core$Int64 $tmp94;
    panda$core$Int64 $tmp97;
    panda$collections$Iterator* $returnValue105;
    panda$collections$Iterator* $tmp106;
    panda$collections$Iterator$RangeIterator* $tmp107;
    bool $tmp84 = ((panda$core$Bit) { !p_range.start.nonnull }).value;
    if ($tmp84) goto $l85;
    panda$core$Int64$init$builtin_int64(&$tmp87, 0);
    panda$core$Bit $tmp88 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.start.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp87, true }).value));
    bool $tmp86 = $tmp88.value;
    if (!$tmp86) goto $l89;
    $tmp86 = ((panda$core$Bit) { !p_range.end.nonnull }).value;
    $l89:;
    panda$core$Bit $tmp90 = { $tmp86 };
    $tmp84 = $tmp90.value;
    $l85:;
    panda$core$Bit $tmp91 = { $tmp84 };
    bool $tmp83 = $tmp91.value;
    if ($tmp83) goto $l92;
    panda$core$Int64$init$builtin_int64(&$tmp94, 0);
    panda$core$Bit $tmp95 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) p_range.end.value), ((panda$core$Int64) ((panda$core$Int64$nullable) { $tmp94, true }).value));
    bool $tmp93 = $tmp95.value;
    if (!$tmp93) goto $l96;
    panda$core$Int64$init$builtin_int64(&$tmp97, 0);
    panda$core$Bit $tmp98 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_range.step, $tmp97);
    $tmp93 = $tmp98.value;
    $l96:;
    panda$core$Bit $tmp99 = { $tmp93 };
    $tmp83 = $tmp99.value;
    $l92:;
    panda$core$Bit $tmp100 = { $tmp83 };
    if ($tmp100.value) goto $l101; else goto $l102;
    $l102:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s103, (panda$core$Int64) { 181 }, &$s104);
    abort();
    $l101:;
    panda$collections$Iterator$RangeIterator* $tmp108 = (panda$collections$Iterator$RangeIterator*) pandaObjectAlloc(65, (panda$core$Class*) &panda$collections$Iterator$RangeIterator$class);
    panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64($tmp108, self, p_range.start, p_range.end, p_range.inclusive, p_range.step);
    $tmp107 = $tmp108;
    $tmp106 = ((panda$collections$Iterator*) $tmp107);
    $returnValue105 = $tmp106;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
    return $returnValue105;
}
panda$collections$Array* panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT(panda$collections$Iterator* self) {
    panda$collections$Array* result116 = NULL;
    panda$collections$Array* $tmp117;
    panda$collections$Array* $tmp118;
    panda$collections$Iterator* Iter$193$9123 = NULL;
    panda$collections$Iterator* $tmp124;
    panda$core$Object* v136 = NULL;
    panda$core$Object* $tmp137;
    panda$core$Object* $tmp138;
    panda$collections$Array* $returnValue145;
    panda$collections$Array* $tmp146;
    int $tmp112;
    {
        int $tmp115;
        {
            panda$collections$Array* $tmp119 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$collections$Array$init($tmp119);
            $tmp118 = $tmp119;
            $tmp117 = $tmp118;
            result116 = $tmp117;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
            {
                int $tmp122;
                {
                    $tmp124 = self;
                    Iter$193$9123 = $tmp124;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
                    $l125:;
                    ITable* $tmp128 = Iter$193$9123->$class->itable;
                    while ($tmp128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp128 = $tmp128->next;
                    }
                    $fn130 $tmp129 = $tmp128->methods[0];
                    panda$core$Bit $tmp131 = $tmp129(Iter$193$9123);
                    panda$core$Bit $tmp132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp131);
                    bool $tmp127 = $tmp132.value;
                    if (!$tmp127) goto $l126;
                    {
                        int $tmp135;
                        {
                            ITable* $tmp139 = Iter$193$9123->$class->itable;
                            while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp139 = $tmp139->next;
                            }
                            $fn141 $tmp140 = $tmp139->methods[1];
                            panda$core$Object* $tmp142 = $tmp140(Iter$193$9123);
                            $tmp138 = $tmp142;
                            $tmp137 = $tmp138;
                            v136 = $tmp137;
                            panda$core$Panda$ref$panda$core$Object$Q($tmp137);
                            panda$core$Panda$unref$panda$core$Object$Q($tmp138);
                            panda$collections$Array$add$panda$collections$Array$T(result116, v136);
                        }
                        $tmp135 = -1;
                        goto $l133;
                        $l133:;
                        panda$core$Panda$unref$panda$core$Object$Q(v136);
                        v136 = NULL;
                        switch ($tmp135) {
                            case -1: goto $l143;
                        }
                        $l143:;
                    }
                    goto $l125;
                    $l126:;
                }
                $tmp122 = -1;
                goto $l120;
                $l120:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$193$9123));
                Iter$193$9123 = NULL;
                switch ($tmp122) {
                    case -1: goto $l144;
                }
                $l144:;
            }
            $tmp146 = result116;
            $returnValue145 = $tmp146;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
            $tmp115 = 0;
            goto $l113;
            $l147:;
            $tmp112 = 0;
            goto $l110;
            $l148:;
            return $returnValue145;
        }
        $l113:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result116));
        result116 = NULL;
        switch ($tmp115) {
            case 0: goto $l147;
        }
        $l150:;
        if (false) goto $l151; else goto $l152;
        $l152:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s153, (panda$core$Int64) { 191 }, &$s154);
        abort();
        $l151:;
    }
    $tmp112 = -1;
    goto $l110;
    $l110:;
    ITable* $tmp156 = self->$class->itable;
    while ($tmp156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp156 = $tmp156->next;
    }
    $fn158 $tmp157 = $tmp156->methods[0];
    panda$core$Bit $tmp159 = $tmp157(self);
    if ($tmp159.value) goto $l160; else goto $l161;
    $l161:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s162, (panda$core$Int64) { 191 }, &$s163);
    abort();
    $l160:;
    switch ($tmp112) {
        case 0: goto $l148;
        case -1: goto $l155;
    }
    $l155:;
    abort();
}
void panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(panda$collections$Iterator* self, panda$core$MutableMethod* p_m) {
    panda$collections$Iterator* Iter$210$9170 = NULL;
    panda$collections$Iterator* $tmp171;
    panda$core$Object* v183 = NULL;
    panda$core$Object* $tmp184;
    panda$core$Object* $tmp185;
    int $tmp166;
    {
        {
            int $tmp169;
            {
                $tmp171 = self;
                Iter$210$9170 = $tmp171;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
                $l172:;
                ITable* $tmp175 = Iter$210$9170->$class->itable;
                while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp175 = $tmp175->next;
                }
                $fn177 $tmp176 = $tmp175->methods[0];
                panda$core$Bit $tmp178 = $tmp176(Iter$210$9170);
                panda$core$Bit $tmp179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp178);
                bool $tmp174 = $tmp179.value;
                if (!$tmp174) goto $l173;
                {
                    int $tmp182;
                    {
                        ITable* $tmp186 = Iter$210$9170->$class->itable;
                        while ($tmp186->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp186 = $tmp186->next;
                        }
                        $fn188 $tmp187 = $tmp186->methods[1];
                        panda$core$Object* $tmp189 = $tmp187(Iter$210$9170);
                        $tmp185 = $tmp189;
                        $tmp184 = $tmp185;
                        v183 = $tmp184;
                        panda$core$Panda$ref$panda$core$Object$Q($tmp184);
                        panda$core$Panda$unref$panda$core$Object$Q($tmp185);
                        if (p_m->target) {
                            (($fn190) p_m->pointer)(p_m->target, v183);
                        } else {
                            (($fn191) p_m->pointer)(v183);
                        }
                    }
                    $tmp182 = -1;
                    goto $l180;
                    $l180:;
                    panda$core$Panda$unref$panda$core$Object$Q(v183);
                    v183 = NULL;
                    switch ($tmp182) {
                        case -1: goto $l192;
                    }
                    $l192:;
                }
                goto $l172;
                $l173:;
            }
            $tmp169 = -1;
            goto $l167;
            $l167:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$210$9170));
            Iter$210$9170 = NULL;
            switch ($tmp169) {
                case -1: goto $l193;
            }
            $l193:;
        }
    }
    $tmp166 = -1;
    goto $l164;
    $l164:;
    ITable* $tmp195 = self->$class->itable;
    while ($tmp195->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp195 = $tmp195->next;
    }
    $fn197 $tmp196 = $tmp195->methods[0];
    panda$core$Bit $tmp198 = $tmp196(self);
    if ($tmp198.value) goto $l199; else goto $l200;
    $l200:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s201, (panda$core$Int64) { 209 }, &$s202);
    abort();
    $l199:;
    switch ($tmp166) {
        case -1: goto $l194;
    }
    $l194:;
}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f) {
    panda$core$Object* result218 = NULL;
    panda$core$Object* $tmp219;
    panda$core$Object* $tmp220;
    panda$core$Object* $tmp233;
    panda$core$Object* $tmp234;
    panda$core$Object* $tmp235;
    panda$core$Object* $tmp236;
    panda$core$Object* $tmp241;
    panda$core$Object* $returnValue244;
    panda$core$Object* $tmp245;
    int $tmp205;
    {
        ITable* $tmp206 = self->$class->itable;
        while ($tmp206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp206 = $tmp206->next;
        }
        $fn208 $tmp207 = $tmp206->methods[0];
        panda$core$Bit $tmp209 = $tmp207(self);
        panda$core$Bit $tmp210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp209);
        if ($tmp210.value) goto $l211; else goto $l212;
        $l212:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s213, (panda$core$Int64) { 242 }, &$s214);
        abort();
        $l211:;
        int $tmp217;
        {
            ITable* $tmp221 = self->$class->itable;
            while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp221 = $tmp221->next;
            }
            $fn223 $tmp222 = $tmp221->methods[1];
            panda$core$Object* $tmp224 = $tmp222(self);
            $tmp220 = $tmp224;
            $tmp219 = $tmp220;
            result218 = $tmp219;
            panda$core$Panda$ref$panda$core$Object$Q($tmp219);
            panda$core$Panda$unref$panda$core$Object$Q($tmp220);
            $l225:;
            ITable* $tmp228 = self->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[0];
            panda$core$Bit $tmp231 = $tmp229(self);
            panda$core$Bit $tmp232 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp231);
            bool $tmp227 = $tmp232.value;
            if (!$tmp227) goto $l226;
            {
                {
                    $tmp233 = result218;
                    ITable* $tmp237 = self->$class->itable;
                    while ($tmp237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp237 = $tmp237->next;
                    }
                    $fn239 $tmp238 = $tmp237->methods[1];
                    panda$core$Object* $tmp240 = $tmp238(self);
                    $tmp236 = $tmp240;
                    if (p_f->target) {
                        $tmp241 = (($fn242) p_f->pointer)(p_f->target, result218, $tmp236);
                    } else {
                        $tmp241 = (($fn243) p_f->pointer)(result218, $tmp236);
                    }
                    $tmp235 = $tmp241;
                    $tmp234 = $tmp235;
                    result218 = $tmp234;
                    panda$core$Panda$ref$panda$core$Object$Q($tmp234);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp235);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp236);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp233);
                }
            }
            goto $l225;
            $l226:;
            $tmp245 = result218;
            $returnValue244 = $tmp245;
            panda$core$Panda$ref$panda$core$Object$Q($tmp245);
            $tmp217 = 0;
            goto $l215;
            $l246:;
            $tmp205 = 0;
            goto $l203;
            $l247:;
            return $returnValue244;
        }
        $l215:;
        panda$core$Panda$unref$panda$core$Object$Q(result218);
        result218 = NULL;
        switch ($tmp217) {
            case 0: goto $l246;
        }
        $l249:;
        if (false) goto $l250; else goto $l251;
        $l251:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s252, (panda$core$Int64) { 242 }, &$s253);
        abort();
        $l250:;
    }
    $tmp205 = -1;
    goto $l203;
    $l203:;
    ITable* $tmp255 = self->$class->itable;
    while ($tmp255->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp255 = $tmp255->next;
    }
    $fn257 $tmp256 = $tmp255->methods[0];
    panda$core$Bit $tmp258 = $tmp256(self);
    if ($tmp258.value) goto $l259; else goto $l260;
    $l260:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s261, (panda$core$Int64) { 242 }, &$s262);
    abort();
    $l259:;
    switch ($tmp205) {
        case -1: goto $l254;
        case 0: goto $l247;
    }
    $l254:;
    abort();
}
panda$core$Object* panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T(panda$collections$Iterator* self, panda$core$MutableMethod* p_f, panda$core$Object* p_start) {
    panda$core$Object* result269 = NULL;
    panda$core$Object* $tmp270;
    panda$core$Object* $tmp279;
    panda$core$Object* $tmp280;
    panda$core$Object* $tmp281;
    panda$core$Object* $tmp282;
    panda$core$Object* $tmp287;
    panda$core$Object* $returnValue290;
    panda$core$Object* $tmp291;
    int $tmp265;
    {
        int $tmp268;
        {
            $tmp270 = p_start;
            result269 = $tmp270;
            panda$core$Panda$ref$panda$core$Object$Q($tmp270);
            $l271:;
            ITable* $tmp274 = self->$class->itable;
            while ($tmp274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp274 = $tmp274->next;
            }
            $fn276 $tmp275 = $tmp274->methods[0];
            panda$core$Bit $tmp277 = $tmp275(self);
            panda$core$Bit $tmp278 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp277);
            bool $tmp273 = $tmp278.value;
            if (!$tmp273) goto $l272;
            {
                {
                    $tmp279 = result269;
                    ITable* $tmp283 = self->$class->itable;
                    while ($tmp283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp283 = $tmp283->next;
                    }
                    $fn285 $tmp284 = $tmp283->methods[1];
                    panda$core$Object* $tmp286 = $tmp284(self);
                    $tmp282 = $tmp286;
                    if (p_f->target) {
                        $tmp287 = (($fn288) p_f->pointer)(p_f->target, result269, $tmp282);
                    } else {
                        $tmp287 = (($fn289) p_f->pointer)(result269, $tmp282);
                    }
                    $tmp281 = $tmp287;
                    $tmp280 = $tmp281;
                    result269 = $tmp280;
                    panda$core$Panda$ref$panda$core$Object$Q($tmp280);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp281);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp282);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp279);
                }
            }
            goto $l271;
            $l272:;
            $tmp291 = result269;
            $returnValue290 = $tmp291;
            panda$core$Panda$ref$panda$core$Object$Q($tmp291);
            $tmp268 = 0;
            goto $l266;
            $l292:;
            $tmp265 = 0;
            goto $l263;
            $l293:;
            return $returnValue290;
        }
        $l266:;
        panda$core$Panda$unref$panda$core$Object$Q(result269);
        result269 = NULL;
        switch ($tmp268) {
            case 0: goto $l292;
        }
        $l295:;
        if (false) goto $l296; else goto $l297;
        $l297:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s298, (panda$core$Int64) { 263 }, &$s299);
        abort();
        $l296:;
    }
    $tmp265 = -1;
    goto $l263;
    $l263:;
    ITable* $tmp301 = self->$class->itable;
    while ($tmp301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp301 = $tmp301->next;
    }
    $fn303 $tmp302 = $tmp301->methods[0];
    panda$core$Bit $tmp304 = $tmp302(self);
    if ($tmp304.value) goto $l305; else goto $l306;
    $l306:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s307, (panda$core$Int64) { 263 }, &$s308);
    abort();
    $l305:;
    switch ($tmp265) {
        case -1: goto $l300;
        case 0: goto $l293;
    }
    $l300:;
    abort();
}

