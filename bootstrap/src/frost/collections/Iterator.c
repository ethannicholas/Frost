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
typedef frost$core$Bit (*$fn104)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn109)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn119)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn128)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn133)(frost$collections$Iterator*);
typedef void (*$fn142)(frost$core$Object*);
typedef void (*$fn143)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn147)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn155)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn164)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn169)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn176)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn183)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn185)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn193)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn203)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn210)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn217)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn219)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn227)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 84, 4289283427541833651, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, 296282750532941114, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, 7762577120242709379, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 119, 7777618125040620486, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, -8166031867402532659, NULL };
static frost$core$String $s160 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 4205557322875300889, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, 1023084259716151348, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 1316658884731708009, NULL };

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
frost$core$Int64 $tmp34 = (frost$core$Int64) {0};
int64_t $tmp35 = ((frost$core$Int64) $tmp33.value).value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 >= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block4; else goto block5;
block4:;
frost$core$Int64$nullable $tmp40 = param1.max;
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit(!$tmp40.nonnull);
*(&local2) = $tmp41;
goto block6;
block5:;
*(&local2) = $tmp38;
goto block6;
block6:;
frost$core$Bit $tmp42 = *(&local2);
*(&local1) = $tmp42;
goto block3;
block3:;
frost$core$Bit $tmp43 = *(&local1);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block7; else goto block8;
block7:;
*(&local0) = $tmp43;
goto block9;
block8:;
frost$core$Int64$nullable $tmp45 = param1.min;
frost$core$Int64 $tmp46 = (frost$core$Int64) {0};
int64_t $tmp47 = ((frost$core$Int64) $tmp45.value).value;
int64_t $tmp48 = $tmp46.value;
bool $tmp49 = $tmp47 >= $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
*(&local0) = $tmp50;
goto block9;
block9:;
frost$core$Bit $tmp51 = *(&local0);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block10:;
// line 187
frost$collections$Iterator$RangeIterator* $tmp56 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp57 = param1.min;
frost$core$Int64$nullable $tmp58 = param1.max;
frost$core$Bit $tmp59 = param1.inclusive;
frost$core$Int64 $tmp60 = (frost$core$Int64) {1};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp56, param0, $tmp57, $tmp58, $tmp59, $tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp56)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
return ((frost$collections$Iterator*) $tmp56);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Int64$nullable $tmp61 = param1.start;
frost$core$Bit $tmp62 = frost$core$Bit$init$builtin_bit(!$tmp61.nonnull);
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block1:;
*(&local1) = $tmp62;
goto block3;
block2:;
frost$core$Int64$nullable $tmp64 = param1.start;
frost$core$Int64 $tmp65 = (frost$core$Int64) {0};
int64_t $tmp66 = ((frost$core$Int64) $tmp64.value).value;
int64_t $tmp67 = $tmp65.value;
bool $tmp68 = $tmp66 >= $tmp67;
frost$core$Bit $tmp69 = (frost$core$Bit) {$tmp68};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block4; else goto block5;
block4:;
frost$core$Int64$nullable $tmp71 = param1.end;
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit(!$tmp71.nonnull);
*(&local2) = $tmp72;
goto block6;
block5:;
*(&local2) = $tmp69;
goto block6;
block6:;
frost$core$Bit $tmp73 = *(&local2);
*(&local1) = $tmp73;
goto block3;
block3:;
frost$core$Bit $tmp74 = *(&local1);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block7; else goto block8;
block7:;
*(&local0) = $tmp74;
goto block9;
block8:;
frost$core$Int64$nullable $tmp76 = param1.end;
frost$core$Int64 $tmp77 = (frost$core$Int64) {0};
int64_t $tmp78 = ((frost$core$Int64) $tmp76.value).value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 >= $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block10; else goto block11;
block10:;
frost$core$Int64 $tmp83 = param1.step;
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 > $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
*(&local3) = $tmp88;
goto block12;
block11:;
*(&local3) = $tmp81;
goto block12;
block12:;
frost$core$Bit $tmp89 = *(&local3);
*(&local0) = $tmp89;
goto block9;
block9:;
frost$core$Bit $tmp90 = *(&local0);
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp92 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s93, $tmp92, &$s94);
abort(); // unreachable
block13:;
// line 204
frost$collections$Iterator$RangeIterator* $tmp95 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp96 = param1.start;
frost$core$Int64$nullable $tmp97 = param1.end;
frost$core$Bit $tmp98 = param1.inclusive;
frost$core$Int64 $tmp99 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp95, param0, $tmp96, $tmp97, $tmp98, $tmp99);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp95)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
return ((frost$collections$Iterator*) $tmp95);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 214
frost$collections$Array* $tmp100 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp100);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
frost$collections$Array* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
*(&local1) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// line 215
goto block4;
block4:;
ITable* $tmp102 = param0->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Bit $tmp105 = $tmp103(param0);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp107 = param0->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[1];
frost$core$Object* $tmp110 = $tmp108(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp110);
frost$core$Object* $tmp111 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp111);
*(&local2) = $tmp110;
// line 216
frost$collections$Array* $tmp112 = *(&local1);
frost$core$Object* $tmp113 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp112, $tmp113);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
frost$core$Object* $tmp114 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp114);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
// line 218
frost$collections$Array* $tmp115 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$collections$Array* $tmp116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local1) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp115;
goto block1;
block1:;
ITable* $tmp117 = param0->$class->itable;
while ($tmp117->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[0];
frost$core$Bit $tmp120 = $tmp118(param0);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block2; else goto block3;
block2:;
frost$collections$Array* $tmp122 = *(&local0);
return $tmp122;
block3:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {213};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 232
goto block4;
block4:;
ITable* $tmp126 = param0->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[0];
frost$core$Bit $tmp129 = $tmp127(param0);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block6; else goto block5;
block5:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp131 = param0->$class->itable;
while ($tmp131->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[1];
frost$core$Object* $tmp134 = $tmp132(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp134);
frost$core$Object* $tmp135 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
*(&local0) = $tmp134;
// line 233
frost$core$Object* $tmp136 = *(&local0);
frost$core$Int8** $tmp137 = &param1->pointer;
frost$core$Int8* $tmp138 = *$tmp137;
frost$core$Object** $tmp139 = &param1->target;
frost$core$Object* $tmp140 = *$tmp139;
bool $tmp141 = $tmp140 != ((frost$core$Object*) NULL);
if ($tmp141) goto block7; else goto block8;
block8:;
(($fn142) $tmp138)($tmp136);
goto block9;
block7:;
(($fn143) $tmp138)($tmp140, $tmp136);
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp134);
frost$core$Object* $tmp144 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp144);
*(&local0) = ((frost$core$Object*) NULL);
goto block4;
block6:;
goto block1;
block1:;
ITable* $tmp145 = param0->$class->itable;
while ($tmp145->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
frost$core$Bit $tmp148 = $tmp146(param0);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp150 = (frost$core$Int64) {231};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s151, $tmp150, &$s152);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp153 = param0->$class->itable;
while ($tmp153->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[0];
frost$core$Bit $tmp156 = $tmp154(param0);
frost$core$Bit $tmp157 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp159 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s160, $tmp159, &$s161);
abort(); // unreachable
block1:;
// line 265
ITable* $tmp162 = param0->$class->itable;
while ($tmp162->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[1];
frost$core$Object* $tmp165 = $tmp163(param0);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp165);
frost$core$Object* $tmp166 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
*(&local1) = $tmp165;
frost$core$Frost$unref$frost$core$Object$Q($tmp165);
// line 266
goto block6;
block6:;
ITable* $tmp167 = param0->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[0];
frost$core$Bit $tmp170 = $tmp168(param0);
frost$core$Bit $tmp171 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block7; else goto block8;
block7:;
// line 267
frost$core$Object* $tmp173 = *(&local1);
ITable* $tmp174 = param0->$class->itable;
while ($tmp174->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[1];
frost$core$Object* $tmp177 = $tmp175(param0);
frost$core$Int8** $tmp178 = &param1->pointer;
frost$core$Int8* $tmp179 = *$tmp178;
frost$core$Object** $tmp180 = &param1->target;
frost$core$Object* $tmp181 = *$tmp180;
bool $tmp182 = $tmp181 != ((frost$core$Object*) NULL);
if ($tmp182) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp184 = (($fn183) $tmp179)($tmp173, $tmp177);
*(&local2) = $tmp184;
goto block11;
block9:;
frost$core$Object* $tmp186 = (($fn185) $tmp179)($tmp181, $tmp173, $tmp177);
*(&local2) = $tmp186;
goto block11;
block11:;
frost$core$Object* $tmp187 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp187);
frost$core$Object* $tmp188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
*(&local1) = $tmp187;
frost$core$Frost$unref$frost$core$Object$Q($tmp187);
frost$core$Frost$unref$frost$core$Object$Q($tmp177);
goto block6;
block8:;
// line 269
frost$core$Object* $tmp189 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp189);
frost$core$Object* $tmp190 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp189;
goto block3;
block3:;
ITable* $tmp191 = param0->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[0];
frost$core$Bit $tmp194 = $tmp192(param0);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block4; else goto block5;
block4:;
frost$core$Object* $tmp196 = *(&local0);
return $tmp196;
block5:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 286
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp200 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp200);
*(&local1) = param2;
// line 287
goto block4;
block4:;
ITable* $tmp201 = param0->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[0];
frost$core$Bit $tmp204 = $tmp202(param0);
frost$core$Bit $tmp205 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp204);
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block5; else goto block6;
block5:;
// line 288
frost$core$Object* $tmp207 = *(&local1);
ITable* $tmp208 = param0->$class->itable;
while ($tmp208->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[1];
frost$core$Object* $tmp211 = $tmp209(param0);
frost$core$Int8** $tmp212 = &param1->pointer;
frost$core$Int8* $tmp213 = *$tmp212;
frost$core$Object** $tmp214 = &param1->target;
frost$core$Object* $tmp215 = *$tmp214;
bool $tmp216 = $tmp215 != ((frost$core$Object*) NULL);
if ($tmp216) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp218 = (($fn217) $tmp213)($tmp207, $tmp211);
*(&local2) = $tmp218;
goto block9;
block7:;
frost$core$Object* $tmp220 = (($fn219) $tmp213)($tmp215, $tmp207, $tmp211);
*(&local2) = $tmp220;
goto block9;
block9:;
frost$core$Object* $tmp221 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp221);
frost$core$Object* $tmp222 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp222);
*(&local1) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
goto block4;
block6:;
// line 290
frost$core$Object* $tmp223 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp223);
frost$core$Object* $tmp224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp223;
goto block1;
block1:;
ITable* $tmp225 = param0->$class->itable;
while ($tmp225->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp225 = $tmp225->next;
}
$fn227 $tmp226 = $tmp225->methods[0];
frost$core$Bit $tmp228 = $tmp226(param0);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block2; else goto block3;
block2:;
frost$core$Object* $tmp230 = *(&local0);
return $tmp230;
block3:;
frost$core$Int64 $tmp231 = (frost$core$Int64) {285};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s232, $tmp231, &$s233);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 295
frost$collections$Iterator$MapIterator* $tmp234 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp234, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp234)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
return ((frost$collections$Iterator*) $tmp234);

}

