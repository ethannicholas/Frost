#include "frost/collections/Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterator/MapIterator.h"


struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$class_type frost$collections$Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

typedef frost$core$Bit (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn11)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn124)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn129)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn139)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn148)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn153)(frost$collections$Iterator*);
typedef void (*$fn162)(frost$core$Object*);
typedef void (*$fn163)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn167)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn175)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn184)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn189)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn196)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn203)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn205)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn213)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn223)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn230)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn237)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn239)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn247)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 84, 4289283427541833651, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s64 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, 296282750532941114, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, 7762577120242709379, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 119, 7777618125040620486, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, -8166031867402532659, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 4205557322875300889, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, 1023084259716151348, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 1316658884731708009, NULL };

frost$core$Int64 frost$collections$Iterator$count$R$frost$core$Int64(frost$collections$Iterator* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 151
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
*(&local1) = $tmp2;
// line 152
goto block4;
block4:;
ITable* $tmp3 = param0->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
$fn5 $tmp4 = $tmp3->methods[0];
frost$core$Bit $tmp6 = $tmp4(param0);
frost$core$Bit $tmp7 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block5; else goto block6;
block5:;
// line 153
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[1];
frost$core$Object* $tmp12 = $tmp10(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
// unreffing REF($24:frost.collections.Iterator.T)
// line 154
frost$core$Int64 $tmp13 = *(&local1);
frost$core$Int64 $tmp14 = (frost$core$Int64) {1};
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15 + $tmp16;
frost$core$Int64 $tmp18 = (frost$core$Int64) {$tmp17};
*(&local1) = $tmp18;
goto block4;
block6:;
// line 156
frost$core$Int64 $tmp19 = *(&local1);
*(&local0) = $tmp19;
goto block1;
block1:;
ITable* $tmp20 = param0->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Bit $tmp23 = $tmp21(param0);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block2; else goto block3;
block2:;
frost$core$Int64 $tmp25 = *(&local0);
return $tmp25;
block3:;
frost$core$Int64 $tmp26 = (frost$core$Int64) {150};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 166
frost$collections$Iterator$FilterIterator* $tmp29 = (frost$collections$Iterator$FilterIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$Iterator$FilterIterator$class);
frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP($tmp29, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp29)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($1:frost.collections.Iterator.FilterIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp29);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Int64$nullable $tmp30 = param1.min;
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(!$tmp30.nonnull);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block2;
block1:;
*(&local1) = $tmp31;
goto block3;
block2:;
frost$core$Int64$nullable $tmp33 = param1.min;
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit($tmp33.nonnull);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp36 = (frost$core$Int64) {185};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s37, $tmp36, &$s38);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {0};
int64_t $tmp40 = ((frost$core$Int64) $tmp33.value).value;
int64_t $tmp41 = $tmp39.value;
bool $tmp42 = $tmp40 >= $tmp41;
frost$core$Bit $tmp43 = (frost$core$Bit) {$tmp42};
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block6; else goto block7;
block6:;
frost$core$Int64$nullable $tmp45 = param1.max;
frost$core$Bit $tmp46 = frost$core$Bit$init$builtin_bit(!$tmp45.nonnull);
*(&local2) = $tmp46;
goto block8;
block7:;
*(&local2) = $tmp43;
goto block8;
block8:;
frost$core$Bit $tmp47 = *(&local2);
*(&local1) = $tmp47;
goto block3;
block3:;
frost$core$Bit $tmp48 = *(&local1);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block9; else goto block10;
block9:;
*(&local0) = $tmp48;
goto block11;
block10:;
frost$core$Int64$nullable $tmp50 = param1.min;
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit($tmp50.nonnull);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {185};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp56 = (frost$core$Int64) {0};
int64_t $tmp57 = ((frost$core$Int64) $tmp50.value).value;
int64_t $tmp58 = $tmp56.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
*(&local0) = $tmp60;
goto block11;
block11:;
frost$core$Bit $tmp61 = *(&local0);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp63 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s64, $tmp63, &$s65);
abort(); // unreachable
block14:;
// line 187
frost$collections$Iterator$RangeIterator* $tmp66 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp67 = param1.min;
frost$core$Int64$nullable $tmp68 = param1.max;
frost$core$Bit $tmp69 = param1.inclusive;
frost$core$Int64 $tmp70 = (frost$core$Int64) {1};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp66, param0, $tmp67, $tmp68, $tmp69, $tmp70);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp66)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing REF($61:frost.collections.Iterator.RangeIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp66);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Int64$nullable $tmp71 = param1.start;
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit(!$tmp71.nonnull);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block1; else goto block2;
block1:;
*(&local1) = $tmp72;
goto block3;
block2:;
frost$core$Int64$nullable $tmp74 = param1.start;
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit($tmp74.nonnull);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block4:;
frost$core$Int64 $tmp80 = (frost$core$Int64) {0};
int64_t $tmp81 = ((frost$core$Int64) $tmp74.value).value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 >= $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block6; else goto block7;
block6:;
frost$core$Int64$nullable $tmp86 = param1.end;
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit(!$tmp86.nonnull);
*(&local2) = $tmp87;
goto block8;
block7:;
*(&local2) = $tmp84;
goto block8;
block8:;
frost$core$Bit $tmp88 = *(&local2);
*(&local1) = $tmp88;
goto block3;
block3:;
frost$core$Bit $tmp89 = *(&local1);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block9; else goto block10;
block9:;
*(&local0) = $tmp89;
goto block11;
block10:;
frost$core$Int64$nullable $tmp91 = param1.end;
frost$core$Bit $tmp92 = frost$core$Bit$init$builtin_bit($tmp91.nonnull);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s95, $tmp94, &$s96);
abort(); // unreachable
block12:;
frost$core$Int64 $tmp97 = (frost$core$Int64) {0};
int64_t $tmp98 = ((frost$core$Int64) $tmp91.value).value;
int64_t $tmp99 = $tmp97.value;
bool $tmp100 = $tmp98 >= $tmp99;
frost$core$Bit $tmp101 = (frost$core$Bit) {$tmp100};
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block14; else goto block15;
block14:;
frost$core$Int64 $tmp103 = param1.step;
frost$core$Int64 $tmp104 = (frost$core$Int64) {0};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 > $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
*(&local3) = $tmp108;
goto block16;
block15:;
*(&local3) = $tmp101;
goto block16;
block16:;
frost$core$Bit $tmp109 = *(&local3);
*(&local0) = $tmp109;
goto block11;
block11:;
frost$core$Bit $tmp110 = *(&local0);
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block17:;
// line 204
frost$collections$Iterator$RangeIterator* $tmp115 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp116 = param1.start;
frost$core$Int64$nullable $tmp117 = param1.end;
frost$core$Bit $tmp118 = param1.inclusive;
frost$core$Int64 $tmp119 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp115, param0, $tmp116, $tmp117, $tmp118, $tmp119);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp115)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($74:frost.collections.Iterator.RangeIterator<frost.collections.Iterator.T>)
return ((frost$collections$Iterator*) $tmp115);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 214
frost$collections$Array* $tmp120 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp120);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$collections$Array* $tmp121 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local1) = $tmp120;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($11:frost.collections.Array<frost.collections.Iterator.T>)
// line 215
goto block4;
block4:;
ITable* $tmp122 = param0->$class->itable;
while ($tmp122->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp122 = $tmp122->next;
}
$fn124 $tmp123 = $tmp122->methods[0];
frost$core$Bit $tmp125 = $tmp123(param0);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp127 = param0->$class->itable;
while ($tmp127->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[1];
frost$core$Object* $tmp130 = $tmp128(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp130);
frost$core$Object* $tmp131 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
*(&local2) = $tmp130;
// line 216
frost$collections$Array* $tmp132 = *(&local1);
frost$core$Object* $tmp133 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp132, $tmp133);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
// unreffing REF($34:frost.collections.Iterator.T)
frost$core$Object* $tmp134 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
// unreffing v
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
// line 218
frost$collections$Array* $tmp135 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$collections$Array* $tmp136 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// unreffing result
*(&local1) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp135;
goto block1;
block1:;
ITable* $tmp137 = param0->$class->itable;
while ($tmp137->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[0];
frost$core$Bit $tmp140 = $tmp138(param0);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block2; else goto block3;
block2:;
frost$collections$Array* $tmp142 = *(&local0);
return $tmp142;
block3:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {213};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s144, $tmp143, &$s145);
abort(); // unreachable

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 232
goto block4;
block4:;
ITable* $tmp146 = param0->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Bit $tmp149 = $tmp147(param0);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block6; else goto block5;
block5:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp151 = param0->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[1];
frost$core$Object* $tmp154 = $tmp152(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp154);
frost$core$Object* $tmp155 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
*(&local0) = $tmp154;
// line 233
frost$core$Object* $tmp156 = *(&local0);
frost$core$Int8** $tmp157 = &param1->pointer;
frost$core$Int8* $tmp158 = *$tmp157;
frost$core$Object** $tmp159 = &param1->target;
frost$core$Object* $tmp160 = *$tmp159;
bool $tmp161 = $tmp160 != ((frost$core$Object*) NULL);
if ($tmp161) goto block7; else goto block8;
block8:;
(($fn162) $tmp158)($tmp156);
goto block9;
block7:;
(($fn163) $tmp158)($tmp160, $tmp156);
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp154);
// unreffing REF($19:frost.collections.Iterator.T)
frost$core$Object* $tmp164 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp164);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
goto block4;
block6:;
goto block1;
block1:;
ITable* $tmp165 = param0->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[0];
frost$core$Bit $tmp168 = $tmp166(param0);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp170 = (frost$core$Int64) {231};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s171, $tmp170, &$s172);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp173 = param0->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$core$Bit $tmp176 = $tmp174(param0);
frost$core$Bit $tmp177 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp176);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s180, $tmp179, &$s181);
abort(); // unreachable
block1:;
// line 265
ITable* $tmp182 = param0->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[1];
frost$core$Object* $tmp185 = $tmp183(param0);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp185);
frost$core$Object* $tmp186 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp186);
*(&local1) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
// unreffing REF($22:frost.collections.Iterator.T)
// line 266
goto block6;
block6:;
ITable* $tmp187 = param0->$class->itable;
while ($tmp187->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp187 = $tmp187->next;
}
$fn189 $tmp188 = $tmp187->methods[0];
frost$core$Bit $tmp190 = $tmp188(param0);
frost$core$Bit $tmp191 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block7; else goto block8;
block7:;
// line 267
frost$core$Object* $tmp193 = *(&local1);
ITable* $tmp194 = param0->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[1];
frost$core$Object* $tmp197 = $tmp195(param0);
frost$core$Int8** $tmp198 = &param1->pointer;
frost$core$Int8* $tmp199 = *$tmp198;
frost$core$Object** $tmp200 = &param1->target;
frost$core$Object* $tmp201 = *$tmp200;
bool $tmp202 = $tmp201 != ((frost$core$Object*) NULL);
if ($tmp202) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp204 = (($fn203) $tmp199)($tmp193, $tmp197);
*(&local2) = $tmp204;
goto block11;
block9:;
frost$core$Object* $tmp206 = (($fn205) $tmp199)($tmp201, $tmp193, $tmp197);
*(&local2) = $tmp206;
goto block11;
block11:;
frost$core$Object* $tmp207 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp207);
frost$core$Object* $tmp208 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp208);
*(&local1) = $tmp207;
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
// unreffing REF($61:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp197);
// unreffing REF($45:frost.collections.Iterator.T)
goto block6;
block8:;
// line 269
frost$core$Object* $tmp209 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp209);
frost$core$Object* $tmp210 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp210);
// unreffing result
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp209;
goto block3;
block3:;
ITable* $tmp211 = param0->$class->itable;
while ($tmp211->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp211 = $tmp211->next;
}
$fn213 $tmp212 = $tmp211->methods[0];
frost$core$Bit $tmp214 = $tmp212(param0);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block4; else goto block5;
block4:;
frost$core$Object* $tmp216 = *(&local0);
return $tmp216;
block5:;
frost$core$Int64 $tmp217 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s218, $tmp217, &$s219);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 286
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp220);
*(&local1) = param2;
// line 287
goto block4;
block4:;
ITable* $tmp221 = param0->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[0];
frost$core$Bit $tmp224 = $tmp222(param0);
frost$core$Bit $tmp225 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block5; else goto block6;
block5:;
// line 288
frost$core$Object* $tmp227 = *(&local1);
ITable* $tmp228 = param0->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[1];
frost$core$Object* $tmp231 = $tmp229(param0);
frost$core$Int8** $tmp232 = &param1->pointer;
frost$core$Int8* $tmp233 = *$tmp232;
frost$core$Object** $tmp234 = &param1->target;
frost$core$Object* $tmp235 = *$tmp234;
bool $tmp236 = $tmp235 != ((frost$core$Object*) NULL);
if ($tmp236) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp238 = (($fn237) $tmp233)($tmp227, $tmp231);
*(&local2) = $tmp238;
goto block9;
block7:;
frost$core$Object* $tmp240 = (($fn239) $tmp233)($tmp235, $tmp227, $tmp231);
*(&local2) = $tmp240;
goto block9;
block9:;
frost$core$Object* $tmp241 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp241);
frost$core$Object* $tmp242 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp242);
*(&local1) = $tmp241;
frost$core$Frost$unref$frost$core$Object$Q($tmp241);
// unreffing REF($46:frost.collections.Iterator.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp231);
// unreffing REF($30:frost.collections.Iterator.T)
goto block4;
block6:;
// line 290
frost$core$Object* $tmp243 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp243);
frost$core$Object* $tmp244 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp244);
// unreffing result
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp243;
goto block1;
block1:;
ITable* $tmp245 = param0->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$core$Bit $tmp248 = $tmp246(param0);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block2; else goto block3;
block2:;
frost$core$Object* $tmp250 = *(&local0);
return $tmp250;
block3:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {285};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s252, $tmp251, &$s253);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 295
frost$collections$Iterator$MapIterator* $tmp254 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp254, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// unreffing REF($1:frost.collections.Iterator.MapIterator<frost.collections.Iterator.T, frost.collections.Iterator.map.U>)
return ((frost$collections$Iterator*) $tmp254);

}

