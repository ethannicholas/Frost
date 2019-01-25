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
typedef frost$core$Bit (*$fn97)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn102)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn112)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn121)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn126)(frost$collections$Iterator*);
typedef void (*$fn135)(frost$core$Object*);
typedef void (*$fn136)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn140)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn148)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn157)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn162)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn169)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn176)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn178)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn186)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn196)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn203)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn210)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn212)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn220)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72", 26, 4906885815162862760, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x63\x6f\x75\x6e\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 84, 4289283427541833651, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 163, 296282750532941114, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 188, 7762577120242709379, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x6c\x6c\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 119, 7777618125040620486, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s145 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x61\x70\x70\x6c\x79\x28\x6d\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x26\x3e\x28\x29\x29", 104, -8166031867402532659, NULL };
static frost$core$String $s153 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 188, 4205557322875300889, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 189, 1023084259716151348, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 225, 1316658884731708009, NULL };

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

frost$core$Int64$nullable $tmp30 = param1.min;
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(!$tmp30.nonnull);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block1; else goto block4;
block4:;
frost$core$Int64$nullable $tmp33 = param1.min;
frost$core$Int64 $tmp34 = (frost$core$Int64) {0};
int64_t $tmp35 = ((frost$core$Int64) $tmp33.value).value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 >= $tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block5; else goto block3;
block5:;
frost$core$Int64$nullable $tmp40 = param1.max;
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit(!$tmp40.nonnull);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block1; else goto block3;
block3:;
frost$core$Int64$nullable $tmp43 = param1.min;
frost$core$Int64 $tmp44 = (frost$core$Int64) {0};
int64_t $tmp45 = ((frost$core$Int64) $tmp43.value).value;
int64_t $tmp46 = $tmp44.value;
bool $tmp47 = $tmp45 >= $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp50 = (frost$core$Int64) {186};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s51, $tmp50, &$s52);
abort(); // unreachable
block1:;
// line 187
frost$collections$Iterator$RangeIterator* $tmp53 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp54 = param1.min;
frost$core$Int64$nullable $tmp55 = param1.max;
frost$core$Bit $tmp56 = param1.inclusive;
frost$core$Int64 $tmp57 = (frost$core$Int64) {1};
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp53, param0, $tmp54, $tmp55, $tmp56, $tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp53)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
return ((frost$collections$Iterator*) $tmp53);

}
frost$collections$Iterator* frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64$nullable $tmp58 = param1.start;
frost$core$Bit $tmp59 = frost$core$Bit$init$builtin_bit(!$tmp58.nonnull);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block1; else goto block4;
block4:;
frost$core$Int64$nullable $tmp61 = param1.start;
frost$core$Int64 $tmp62 = (frost$core$Int64) {0};
int64_t $tmp63 = ((frost$core$Int64) $tmp61.value).value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 >= $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block5; else goto block3;
block5:;
frost$core$Int64$nullable $tmp68 = param1.end;
frost$core$Bit $tmp69 = frost$core$Bit$init$builtin_bit(!$tmp68.nonnull);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block1; else goto block3;
block3:;
frost$core$Int64$nullable $tmp71 = param1.end;
frost$core$Int64 $tmp72 = (frost$core$Int64) {0};
int64_t $tmp73 = ((frost$core$Int64) $tmp71.value).value;
int64_t $tmp74 = $tmp72.value;
bool $tmp75 = $tmp73 >= $tmp74;
frost$core$Bit $tmp76 = (frost$core$Bit) {$tmp75};
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block6; else goto block2;
block6:;
frost$core$Int64 $tmp78 = param1.step;
frost$core$Int64 $tmp79 = (frost$core$Int64) {0};
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
bool $tmp82 = $tmp80 > $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {203};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block1:;
// line 204
frost$collections$Iterator$RangeIterator* $tmp88 = (frost$collections$Iterator$RangeIterator*) frostObjectAlloc(65, (frost$core$Class*) &frost$collections$Iterator$RangeIterator$class);
frost$core$Int64$nullable $tmp89 = param1.start;
frost$core$Int64$nullable $tmp90 = param1.end;
frost$core$Bit $tmp91 = param1.inclusive;
frost$core$Int64 $tmp92 = param1.step;
frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64($tmp88, param0, $tmp89, $tmp90, $tmp91, $tmp92);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp88)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
return ((frost$collections$Iterator*) $tmp88);

}
frost$collections$Array* frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT(frost$collections$Iterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 214
frost$collections$Array* $tmp93 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp93);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$collections$Array* $tmp94 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local1) = $tmp93;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// line 215
goto block4;
block4:;
ITable* $tmp95 = param0->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Bit $tmp98 = $tmp96(param0);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp100 = param0->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[1];
frost$core$Object* $tmp103 = $tmp101(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp103);
frost$core$Object* $tmp104 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp104);
*(&local2) = $tmp103;
// line 216
frost$collections$Array* $tmp105 = *(&local1);
frost$core$Object* $tmp106 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp105, $tmp106);
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
frost$core$Object* $tmp107 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
// line 218
frost$collections$Array* $tmp108 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$collections$Array* $tmp109 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local1) = ((frost$collections$Array*) NULL);
*(&local0) = $tmp108;
goto block1;
block1:;
ITable* $tmp110 = param0->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
frost$core$Bit $tmp113 = $tmp111(param0);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block2; else goto block3;
block2:;
frost$collections$Array* $tmp115 = *(&local0);
return $tmp115;
block3:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {213};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s117, $tmp116, &$s118);
abort(); // unreachable

}
void frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 232
goto block4;
block4:;
ITable* $tmp119 = param0->$class->itable;
while ($tmp119->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[0];
frost$core$Bit $tmp122 = $tmp120(param0);
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block6; else goto block5;
block5:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp124 = param0->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[1];
frost$core$Object* $tmp127 = $tmp125(param0);
frost$core$Frost$ref$frost$core$Object$Q($tmp127);
frost$core$Object* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp128);
*(&local0) = $tmp127;
// line 233
frost$core$Object* $tmp129 = *(&local0);
frost$core$Int8** $tmp130 = &param1->pointer;
frost$core$Int8* $tmp131 = *$tmp130;
frost$core$Object** $tmp132 = &param1->target;
frost$core$Object* $tmp133 = *$tmp132;
bool $tmp134 = $tmp133 != ((frost$core$Object*) NULL);
if ($tmp134) goto block7; else goto block8;
block8:;
(($fn135) $tmp131)($tmp129);
goto block9;
block7:;
(($fn136) $tmp131)($tmp133, $tmp129);
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
frost$core$Object* $tmp137 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
*(&local0) = ((frost$core$Object*) NULL);
goto block4;
block6:;
goto block1;
block1:;
ITable* $tmp138 = param0->$class->itable;
while ($tmp138->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[0];
frost$core$Bit $tmp141 = $tmp139(param0);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block2; else goto block3;
block2:;
return;
block3:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {231};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s144, $tmp143, &$s145);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp146 = param0->$class->itable;
while ($tmp146->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
frost$core$Bit $tmp149 = $tmp147(param0);
frost$core$Bit $tmp150 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp149);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp152 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block1:;
// line 265
ITable* $tmp155 = param0->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[1];
frost$core$Object* $tmp158 = $tmp156(param0);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp158);
frost$core$Object* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp159);
*(&local1) = $tmp158;
frost$core$Frost$unref$frost$core$Object$Q($tmp158);
// line 266
goto block6;
block6:;
ITable* $tmp160 = param0->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
frost$core$Bit $tmp163 = $tmp161(param0);
frost$core$Bit $tmp164 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block7; else goto block8;
block7:;
// line 267
frost$core$Object* $tmp166 = *(&local1);
ITable* $tmp167 = param0->$class->itable;
while ($tmp167->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp167 = $tmp167->next;
}
$fn169 $tmp168 = $tmp167->methods[1];
frost$core$Object* $tmp170 = $tmp168(param0);
frost$core$Int8** $tmp171 = &param1->pointer;
frost$core$Int8* $tmp172 = *$tmp171;
frost$core$Object** $tmp173 = &param1->target;
frost$core$Object* $tmp174 = *$tmp173;
bool $tmp175 = $tmp174 != ((frost$core$Object*) NULL);
if ($tmp175) goto block9; else goto block10;
block10:;
frost$core$Object* $tmp177 = (($fn176) $tmp172)($tmp166, $tmp170);
*(&local2) = $tmp177;
goto block11;
block9:;
frost$core$Object* $tmp179 = (($fn178) $tmp172)($tmp174, $tmp166, $tmp170);
*(&local2) = $tmp179;
goto block11;
block11:;
frost$core$Object* $tmp180 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp180);
frost$core$Object* $tmp181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
*(&local1) = $tmp180;
frost$core$Frost$unref$frost$core$Object$Q($tmp180);
frost$core$Frost$unref$frost$core$Object$Q($tmp170);
goto block6;
block8:;
// line 269
frost$core$Object* $tmp182 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp182);
frost$core$Object* $tmp183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp183);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp182;
goto block3;
block3:;
ITable* $tmp184 = param0->$class->itable;
while ($tmp184->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp184 = $tmp184->next;
}
$fn186 $tmp185 = $tmp184->methods[0];
frost$core$Bit $tmp187 = $tmp185(param0);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block4; else goto block5;
block4:;
frost$core$Object* $tmp189 = *(&local0);
return $tmp189;
block5:;
frost$core$Int64 $tmp190 = (frost$core$Int64) {264};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s191, $tmp190, &$s192);
abort(); // unreachable

}
frost$core$Object* frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T(frost$collections$Iterator* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 286
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp193);
*(&local1) = param2;
// line 287
goto block4;
block4:;
ITable* $tmp194 = param0->$class->itable;
while ($tmp194->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp194 = $tmp194->next;
}
$fn196 $tmp195 = $tmp194->methods[0];
frost$core$Bit $tmp197 = $tmp195(param0);
frost$core$Bit $tmp198 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block5; else goto block6;
block5:;
// line 288
frost$core$Object* $tmp200 = *(&local1);
ITable* $tmp201 = param0->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[1];
frost$core$Object* $tmp204 = $tmp202(param0);
frost$core$Int8** $tmp205 = &param1->pointer;
frost$core$Int8* $tmp206 = *$tmp205;
frost$core$Object** $tmp207 = &param1->target;
frost$core$Object* $tmp208 = *$tmp207;
bool $tmp209 = $tmp208 != ((frost$core$Object*) NULL);
if ($tmp209) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp211 = (($fn210) $tmp206)($tmp200, $tmp204);
*(&local2) = $tmp211;
goto block9;
block7:;
frost$core$Object* $tmp213 = (($fn212) $tmp206)($tmp208, $tmp200, $tmp204);
*(&local2) = $tmp213;
goto block9;
block9:;
frost$core$Object* $tmp214 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp214);
frost$core$Object* $tmp215 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp215);
*(&local1) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
goto block4;
block6:;
// line 290
frost$core$Object* $tmp216 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp216);
frost$core$Object* $tmp217 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp217);
*(&local1) = ((frost$core$Object*) NULL);
*(&local0) = $tmp216;
goto block1;
block1:;
ITable* $tmp218 = param0->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[0];
frost$core$Bit $tmp221 = $tmp219(param0);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block2; else goto block3;
block2:;
frost$core$Object* $tmp223 = *(&local0);
return $tmp223;
block3:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {285};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s225, $tmp224, &$s226);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT(frost$collections$Iterator* param0, frost$core$MutableMethod* param1) {

// line 295
frost$collections$Iterator$MapIterator* $tmp227 = (frost$collections$Iterator$MapIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$Iterator$MapIterator$class);
frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$GT$LPfrost$collections$Iterator$MapIterator$U$RP($tmp227, param0, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp227)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
return ((frost$collections$Iterator*) $tmp227);

}

