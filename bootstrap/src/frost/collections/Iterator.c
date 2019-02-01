#include "frost/collections/Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/collections/Iterator/EnumerationIterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterator/MapIterator.h"


struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$class_type frost$collections$Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

typedef frost$core$Bit (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn11)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn98)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn103)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn113)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn122)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn127)(frost$collections$Iterator*);
typedef void (*$fn136)(frost$core$Object*);
typedef void (*$fn137)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn141)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn149)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn158)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn163)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn170)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn177)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn179)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn187)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn197)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn204)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn211)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn213)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn221)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 84, 4289283427541833651, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, 296282750532941114, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, 7762577120242709379, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 119, 7777618125040620486, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, -8166031867402532659, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 4205557322875300889, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, 1023084259716151348, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s227 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 1316658884731708009, NULL };

frost$core$Int64 frost$collections$Iterator$count$R$frost$core$Int64(frost$collections$Iterator* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 175
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
*(&local1) = $tmp2;
// line 176
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
// line 177
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[1];
frost$core$Object* $tmp12 = $tmp10(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp12);
// line 178
frost$core$Int64 $tmp13 = *(&local1);
frost$core$Int64 $tmp14 = (frost$core$Int64) {1};
int64_t $tmp15 = $tmp13.value;
int64_t $tmp16 = $tmp14.value;
int64_t $tmp17 = $tmp15 + $tmp16;
frost$core$Int64 $tmp18 = (frost$core$Int64) {$tmp17};
*(&local1) = $tmp18;
goto block4;
block6:;
// line 180
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
frost$core$Int64 $tmp26 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s27, $tmp26, &$s28);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT(frost$collections$Iterator* param0) {

// line 192
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$EnumerationIterator));
frost$collections$Iterator$EnumerationIterator* $tmp29 = (frost$collections$Iterator$EnumerationIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$EnumerationIterator$class);
frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT($tmp29, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp29)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return ((frost$collections$Iterator*) $tmp29);

}
frost$collections$Iterator* frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 202
FROST_ASSERT(48 == sizeof(frost$collections$Iterator$FilterIterator));
frost$collections$Iterator$FilterIterator* $tmp30 = (frost$collections$Iterator$FilterIterator*) frostObjectAlloc(48, (frost$core$Class*) &frost$collections$Iterator$FilterIterator$class);
frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP($tmp30, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp30)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
return ((frost$collections$Iterator*) $tmp30);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$Int64$nullable $tmp31 = param1.min;
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(!$tmp31.nonnull);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block1; else goto block4;
block4:;
frost$core$Int64$nullable $tmp34 = param1.min;
frost$core$Int64 $tmp35 = (frost$core$Int64) {0};
int64_t $tmp36 = ((frost$core$Int64) $tmp34.value).value;
int64_t $tmp37 = $tmp35.value;
bool $tmp38 = $tmp36 >= $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block5; else goto block3;
block5:;
frost$core$Int64$nullable $tmp41 = param1.max;
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(!$tmp41.nonnull);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block3;
block3:;
frost$core$Int64$nullable $tmp44 = param1.min;
frost$core$Int64 $tmp45 = (frost$core$Int64) {0};
int64_t $tmp46 = ((frost$core$Int64) $tmp44.value).value;
int64_t $tmp47 = $tmp45.value;
bool $tmp48 = $tmp46 >= $tmp47;
frost$core$Bit $tmp49 = (frost$core$Bit) {$tmp48};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp51 = (frost$core$Int64) {222};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s52, $tmp51, &$s53);
abort(); // unreachable
block1:;
// line 223
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
frost$collections$Iterator$RangeIterator* $tmp54 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp55 = param1.min;
frost$core$Int64$nullable $tmp56 = param1.max;
frost$core$Bit $tmp57 = param1.inclusive;
frost$core$Int64 $tmp58 = (frost$core$Int64) {1};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp54, param0, $tmp55, $tmp56, $tmp57, $tmp58);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp54)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
return ((frost$collections$Iterator*) $tmp54);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64$nullable $tmp59 = param1.start;
frost$core$Bit $tmp60 = frost$core$Bit$init$builtin_bit(!$tmp59.nonnull);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block1; else goto block4;
block4:;
frost$core$Int64$nullable $tmp62 = param1.start;
frost$core$Int64 $tmp63 = (frost$core$Int64) {0};
int64_t $tmp64 = ((frost$core$Int64) $tmp62.value).value;
int64_t $tmp65 = $tmp63.value;
bool $tmp66 = $tmp64 >= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block5; else goto block3;
block5:;
frost$core$Int64$nullable $tmp69 = param1.end;
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit(!$tmp69.nonnull);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block1; else goto block3;
block3:;
frost$core$Int64$nullable $tmp72 = param1.end;
frost$core$Int64 $tmp73 = (frost$core$Int64) {0};
int64_t $tmp74 = ((frost$core$Int64) $tmp72.value).value;
int64_t $tmp75 = $tmp73.value;
bool $tmp76 = $tmp74 >= $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block6; else goto block2;
block6:;
frost$core$Int64 $tmp79 = param1.step;
frost$core$Int64 $tmp80 = (frost$core$Int64) {0};
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80.value;
bool $tmp83 = $tmp81 > $tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp86 = (frost$core$Int64) {239};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s87, $tmp86, &$s88);
abort(); // unreachable
block1:;
// line 240
FROST_ASSERT(72 == sizeof(frost$collections$Iterator$RangeIterator));
frost$collections$Iterator$RangeIterator* $tmp89 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(72, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp90 = param1.start;
frost$core$Int64$nullable $tmp91 = param1.end;
frost$core$Bit $tmp92 = param1.inclusive;
frost$core$Int64 $tmp93 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp89, param0, $tmp90, $tmp91, $tmp92, $tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp89)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
return ((frost$collections$Iterator*) $tmp89);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 250
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp94 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp94);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$collections$Array* $tmp95 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local1) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// line 251
goto block4;
block4:;
ITable* $tmp96 = param0->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Bit $tmp99 = $tmp97(param0);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp101 = param0->$class->itable;
while ($tmp101->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp101 = $tmp101->next;
}
$fn103 $tmp102 = $tmp101->methods[1];
frost$core$Object* $tmp104 = $tmp102(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp104);
frost$core$Object* $tmp105 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
*(&local2) = $tmp104;
// line 252
frost$collections$Array* $tmp106 = *(&local1);
frost$core$Object* $tmp107 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp106, $tmp107);
frost$core$Frost$unref$frost$core$Object$Q($tmp104);
frost$core$Object* $tmp108 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp108);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
// line 254
frost$collections$Array* $tmp109 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$collections$Array* $tmp110 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local1) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp109;
goto block1;
block1:;
ITable* $tmp111 = param0->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Bit $tmp114 = $tmp112(param0);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block2; else goto block3;
block2:;
frost$collections$Array* $tmp116 = *(&local0);
return $tmp116;
block3:;
frost$core$Int64 $tmp117 = (frost$core$Int64) {249};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s118, $tmp117, &$s119);
abort(); // unreachable

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 268
goto block4;
block4:;
ITable* $tmp120 = param0->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$core$Bit $tmp123 = $tmp121(param0);
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block6; else goto block5;
block5:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp125 = param0->$class->itable;
while ($tmp125->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[1];
frost$core$Object* $tmp128 = $tmp126(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp128);
frost$core$Object* $tmp129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
*(&local0) = $tmp128;
// line 269
frost$core$Object* $tmp130 = *(&local0);
frost$core$Int8** $tmp131 = &param1->pointer;
frost$core$Int8* $tmp132 = *$tmp131;
frost$core$Object** $tmp133 = &param1->target;
frost$core$Object* $tmp134 = *$tmp133;
bool $tmp135 = $tmp134 != ((frost$core$Object*) NULL);
if ($tmp135) goto block7; else goto block8;
block8:;
(($fn136) $tmp132)($tmp130);
goto block9;
block7:;
(($fn137) $tmp132)($tmp134, $tmp130);
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp128);
frost$core$Object* $tmp138 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
*(&local0) = ((frost$core$Object*) NULL);
goto block4;
block6:;
goto block1;
block1:;
ITable* $tmp139 = param0->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[0];
frost$core$Bit $tmp142 = $tmp140(param0);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp144 = (frost$core$Int64) {267};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s145, $tmp144, &$s146);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp147 = param0->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Bit $tmp150 = $tmp148(param0);
frost$core$Bit $tmp151 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp150);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp153 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s154, $tmp153, &$s155);
abort(); // unreachable
block1:;
// line 301
ITable* $tmp156 = param0->$class->itable;
while ($tmp156->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[1];
frost$core$Object* $tmp159 = $tmp157(param0);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp159);
frost$core$Object* $tmp160 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
*(&local1) = $tmp159;
frost$core$Frost$unref$frost$core$Object$Q($tmp159);
// line 302
goto block6;
block6:;
ITable* $tmp161 = param0->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Bit $tmp164 = $tmp162(param0);
frost$core$Bit $tmp165 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp164);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block7; else goto block8;
block7:;
// line 303
frost$core$Object* $tmp167 = *(&local1);
ITable* $tmp168 = param0->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
frost$core$Object* $tmp171 = $tmp169(param0);
frost$core$Int8** $tmp172 = &param1->pointer;
frost$core$Int8* $tmp173 = *$tmp172;
frost$core$Object** $tmp174 = &param1->target;
frost$core$Object* $tmp175 = *$tmp174;
bool $tmp176 = $tmp175 != ((frost$core$Object*) NULL);
if ($tmp176) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp178 = (($fn177) $tmp173)($tmp167, $tmp171);
*(&local2) = $tmp178;
goto block11;
block9:;
frost$core$Object* $tmp180 = (($fn179) $tmp173)($tmp175, $tmp167, $tmp171);
*(&local2) = $tmp180;
goto block11;
block11:;
frost$core$Object* $tmp181 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp181);
frost$core$Object* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp182);
*(&local1) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
frost$core$Frost$unref$frost$core$Object$Q($tmp171);
goto block6;
block8:;
// line 305
frost$core$Object* $tmp183 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp183);
frost$core$Object* $tmp184 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp183;
goto block3;
block3:;
ITable* $tmp185 = param0->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[0];
frost$core$Bit $tmp188 = $tmp186(param0);
bool $tmp189 = $tmp188.value;
if ($tmp189) goto block4; else goto block5;
block4:;
frost$core$Object* $tmp190 = *(&local0);
return $tmp190;
block5:;
frost$core$Int64 $tmp191 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s192, $tmp191, &$s193);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 322
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp194 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
*(&local1) = param2;
// line 323
goto block4;
block4:;
ITable* $tmp195 = param0->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[0];
frost$core$Bit $tmp198 = $tmp196(param0);
frost$core$Bit $tmp199 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp198);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block5; else goto block6;
block5:;
// line 324
frost$core$Object* $tmp201 = *(&local1);
ITable* $tmp202 = param0->$class->itable;
while ($tmp202->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp202 = $tmp202->next;
}
$fn204 $tmp203 = $tmp202->methods[1];
frost$core$Object* $tmp205 = $tmp203(param0);
frost$core$Int8** $tmp206 = &param1->pointer;
frost$core$Int8* $tmp207 = *$tmp206;
frost$core$Object** $tmp208 = &param1->target;
frost$core$Object* $tmp209 = *$tmp208;
bool $tmp210 = $tmp209 != ((frost$core$Object*) NULL);
if ($tmp210) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp212 = (($fn211) $tmp207)($tmp201, $tmp205);
*(&local2) = $tmp212;
goto block9;
block7:;
frost$core$Object* $tmp214 = (($fn213) $tmp207)($tmp209, $tmp201, $tmp205);
*(&local2) = $tmp214;
goto block9;
block9:;
frost$core$Object* $tmp215 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp215);
frost$core$Object* $tmp216 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp216);
*(&local1) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
goto block4;
block6:;
// line 326
frost$core$Object* $tmp217 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp217);
frost$core$Object* $tmp218 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp218);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp217;
goto block1;
block1:;
ITable* $tmp219 = param0->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
frost$core$Bit $tmp222 = $tmp220(param0);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block2; else goto block3;
block2:;
frost$core$Object* $tmp224 = *(&local0);
return $tmp224;
block3:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {321};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s226, $tmp225, &$s227);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 339
FROST_ASSERT(32 == sizeof(frost$collections$Iterator$MapIterator));
frost$collections$Iterator$MapIterator* $tmp228 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp228, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp228)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
return ((frost$collections$Iterator*) $tmp228);

}

