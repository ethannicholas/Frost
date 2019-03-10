#include "frost/collections/CollectionView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"


struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$CollectionView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$CollectionView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$CollectionView$_frost$collections$CollectionView, { NULL} };

static frost$core$String $s1;
frost$collections$CollectionView$class_type frost$collections$CollectionView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$CollectionView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

typedef frost$core$String* (*$fn4)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Int64 (*$fn9)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn24)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn28)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn33)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn46)(frost$core$Object*);
typedef frost$core$Int64 (*$fn56)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn69)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn75)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn81)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn98)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn100)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn109)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn122)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn128)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn134)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn144)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn151)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn153)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn163)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn167)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn172)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn182)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn184)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn194)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn198)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn203)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn213)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn215)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn224)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn228)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn233)(frost$collections$Iterator*);
typedef void (*$fn242)(frost$core$Object*);
typedef void (*$fn243)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn248)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn253)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn257)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn262)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn272)(frost$core$Object*);
typedef frost$core$Object* (*$fn274)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn283)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn288)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn292)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn297)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn307)(frost$core$Object*);
typedef frost$core$Object* (*$fn309)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, -3187779348182749487, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s65 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s66 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 6908775502092721301, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 219, -2277848183399103972, NULL };

frost$core$String* frost$collections$CollectionView$join$R$frost$core$String(frost$collections$CollectionView* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:27
ITable* $tmp2 = param0->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[2];
frost$core$String* $tmp5 = $tmp3(param0, &$s6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return $tmp5;

}
frost$core$String* frost$collections$CollectionView$join$frost$core$String$R$frost$core$String(frost$collections$CollectionView* param0, frost$core$String* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:40
ITable* $tmp7 = param0->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
$fn9 $tmp8 = $tmp7->methods[0];
frost$core$Int64 $tmp10 = $tmp8(param0);
frost$core$Int64 $tmp11 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from CollectionView.frost:40:18
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp12 = $tmp10.value;
int64_t $tmp13 = $tmp11.value;
bool $tmp14 = $tmp12 == $tmp13;
frost$core$Bit $tmp15 = (frost$core$Bit) {$tmp14};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:41
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s17));
return &$s18;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:43
frost$core$Bit $tmp19 = (frost$core$Bit) {true};
*(&local0) = $tmp19;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:44
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp20 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp20);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$MutableString* $tmp21 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local1) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:45
ITable* $tmp22 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp22->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
frost$collections$Iterator* $tmp25 = $tmp23(((frost$collections$Iterable*) param0));
goto block4;
block4:;
ITable* $tmp26 = $tmp25->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[0];
frost$core$Bit $tmp29 = $tmp27($tmp25);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp31 = $tmp25->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[1];
frost$core$Object* $tmp34 = $tmp32($tmp25);
frost$core$Frost$ref$frost$core$Object$Q($tmp34);
frost$core$Object* $tmp35 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp35);
*(&local2) = $tmp34;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:46
frost$core$Bit $tmp36 = *(&local0);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:47
frost$core$Bit $tmp38 = (frost$core$Bit) {false};
*(&local0) = $tmp38;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:50
frost$core$MutableString* $tmp39 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp39, param1);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:52
frost$core$Object* $tmp40 = *(&local2);
frost$core$Bit $tmp41 = (frost$core$Bit) {true};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:53
frost$core$MutableString* $tmp43 = *(&local1);
frost$core$Object* $tmp44 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from CollectionView.frost:53:30
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn46 $tmp45 = ($fn46) $tmp44->$class->vtable[0];
frost$core$String* $tmp47 = $tmp45($tmp44);
frost$core$MutableString$append$frost$core$String($tmp43, $tmp47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
goto block11;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:56
frost$core$MutableString* $tmp48 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp48, &$s49);
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp34);
frost$core$Object* $tmp50 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp50);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:59
frost$core$MutableString* $tmp51 = *(&local1);
frost$core$String* $tmp52 = frost$core$MutableString$finish$R$frost$core$String($tmp51);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$MutableString* $tmp53 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp52;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp54 = param0->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
$fn56 $tmp55 = $tmp54->methods[0];
frost$core$Int64 $tmp57 = $tmp55(param0);
frost$core$Int64 $tmp58 = (frost$core$Int64) {0u};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 > $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp64 = (frost$core$Int64) {88u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s65, $tmp64, &$s66);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:90
ITable* $tmp67 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$collections$Iterator* $tmp70 = $tmp68(((frost$collections$Iterable*) param0));
*(&local0) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$collections$Iterator* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:91
frost$collections$Iterator* $tmp72 = *(&local0);
ITable* $tmp73 = $tmp72->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[1];
frost$core$Object* $tmp76 = $tmp74($tmp72);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp76);
frost$core$Object* $tmp77 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp77);
*(&local1) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q($tmp76);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:92
goto block3;
block3:;
frost$collections$Iterator* $tmp78 = *(&local0);
ITable* $tmp79 = $tmp78->$class->itable;
while ($tmp79->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp79 = $tmp79->next;
}
$fn81 $tmp80 = $tmp79->methods[0];
frost$core$Bit $tmp82 = $tmp80($tmp78);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:92:15
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp83 = $tmp82.value;
bool $tmp84 = !$tmp83;
frost$core$Bit $tmp85 = (frost$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:93
frost$core$Object* $tmp87 = *(&local1);
frost$collections$Iterator* $tmp88 = *(&local0);
ITable* $tmp89 = $tmp88->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[1];
frost$core$Object* $tmp92 = $tmp90($tmp88);
frost$core$Int8** $tmp93 = &param1->pointer;
frost$core$Int8* $tmp94 = *$tmp93;
frost$core$Object** $tmp95 = &param1->target;
frost$core$Object* $tmp96 = *$tmp95;
bool $tmp97 = $tmp96 != ((frost$core$Object*) NULL);
if ($tmp97) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp99 = (($fn98) $tmp94)($tmp87, $tmp92);
*(&local2) = $tmp99;
goto block9;
block7:;
frost$core$Object* $tmp101 = (($fn100) $tmp94)($tmp96, $tmp87, $tmp92);
*(&local2) = $tmp101;
goto block9;
block9:;
frost$core$Object* $tmp102 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp102);
frost$core$Object* $tmp103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp103);
*(&local1) = $tmp102;
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:95
frost$core$Object* $tmp104 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp104);
frost$core$Object* $tmp105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Iterator* $tmp106 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local0) = ((frost$collections$Iterator*) NULL);
return $tmp104;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp107 = param0->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Int64 $tmp110 = $tmp108(param0);
frost$core$Int64 $tmp111 = (frost$core$Int64) {0u};
int64_t $tmp112 = $tmp110.value;
int64_t $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 > $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp117 = (frost$core$Int64) {100u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s118, $tmp117, &$s119);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:102
ITable* $tmp120 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp120->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp120 = $tmp120->next;
}
$fn122 $tmp121 = $tmp120->methods[0];
frost$collections$Iterator* $tmp123 = $tmp121(((frost$collections$Iterable*) param0));
*(&local0) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$collections$Iterator* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local0) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:103
frost$collections$Iterator* $tmp125 = *(&local0);
ITable* $tmp126 = $tmp125->$class->itable;
while ($tmp126->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp126 = $tmp126->next;
}
$fn128 $tmp127 = $tmp126->methods[1];
frost$core$Object* $tmp129 = $tmp127($tmp125);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp129);
frost$core$Object* $tmp130 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp130);
*(&local1) = $tmp129;
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:104
goto block3;
block3:;
frost$collections$Iterator* $tmp131 = *(&local0);
ITable* $tmp132 = $tmp131->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[0];
frost$core$Bit $tmp135 = $tmp133($tmp131);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:104:15
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp136 = $tmp135.value;
bool $tmp137 = !$tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:105
frost$core$Object* $tmp140 = *(&local1);
frost$collections$Iterator* $tmp141 = *(&local0);
ITable* $tmp142 = $tmp141->$class->itable;
while ($tmp142->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp142 = $tmp142->next;
}
$fn144 $tmp143 = $tmp142->methods[1];
frost$core$Object* $tmp145 = $tmp143($tmp141);
frost$core$Int8** $tmp146 = &param1->pointer;
frost$core$Int8* $tmp147 = *$tmp146;
frost$core$Object** $tmp148 = &param1->target;
frost$core$Object* $tmp149 = *$tmp148;
bool $tmp150 = $tmp149 != ((frost$core$Object*) NULL);
if ($tmp150) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp152 = (($fn151) $tmp147)($tmp140, $tmp145);
*(&local2) = $tmp152;
goto block9;
block7:;
frost$core$Object* $tmp154 = (($fn153) $tmp147)($tmp149, $tmp140, $tmp145);
*(&local2) = $tmp154;
goto block9;
block9:;
frost$core$Object* $tmp155 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp155);
frost$core$Object* $tmp156 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp156);
*(&local1) = $tmp155;
frost$core$Frost$unref$frost$core$Object$Q($tmp155);
frost$core$Frost$unref$frost$core$Object$Q($tmp145);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:107
frost$core$Object* $tmp157 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp157);
frost$core$Object* $tmp158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp158);
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Iterator* $tmp159 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local0) = ((frost$collections$Iterator*) NULL);
return $tmp157;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:123
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp160);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:124
ITable* $tmp161 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$collections$Iterator* $tmp164 = $tmp162(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp165 = $tmp164->$class->itable;
while ($tmp165->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp165 = $tmp165->next;
}
$fn167 $tmp166 = $tmp165->methods[0];
frost$core$Bit $tmp168 = $tmp166($tmp164);
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp170 = $tmp164->$class->itable;
while ($tmp170->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp170 = $tmp170->next;
}
$fn172 $tmp171 = $tmp170->methods[1];
frost$core$Object* $tmp173 = $tmp171($tmp164);
frost$core$Frost$ref$frost$core$Object$Q($tmp173);
frost$core$Object* $tmp174 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp174);
*(&local1) = $tmp173;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:125
frost$core$Object* $tmp175 = *(&local0);
frost$core$Object* $tmp176 = *(&local1);
frost$core$Int8** $tmp177 = &param1->pointer;
frost$core$Int8* $tmp178 = *$tmp177;
frost$core$Object** $tmp179 = &param1->target;
frost$core$Object* $tmp180 = *$tmp179;
bool $tmp181 = $tmp180 != ((frost$core$Object*) NULL);
if ($tmp181) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp183 = (($fn182) $tmp178)($tmp175, $tmp176);
*(&local2) = $tmp183;
goto block6;
block4:;
frost$core$Object* $tmp185 = (($fn184) $tmp178)($tmp180, $tmp175, $tmp176);
*(&local2) = $tmp185;
goto block6;
block6:;
frost$core$Object* $tmp186 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp186);
frost$core$Object* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp187);
*(&local0) = $tmp186;
frost$core$Frost$unref$frost$core$Object$Q($tmp186);
frost$core$Frost$unref$frost$core$Object$Q($tmp173);
frost$core$Object* $tmp188 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:127
frost$core$Object* $tmp189 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp189);
frost$core$Object* $tmp190 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp190);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp189;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:132
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp191);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:133
ITable* $tmp192 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp192->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
frost$collections$Iterator* $tmp195 = $tmp193(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp196 = $tmp195->$class->itable;
while ($tmp196->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp196 = $tmp196->next;
}
$fn198 $tmp197 = $tmp196->methods[0];
frost$core$Bit $tmp199 = $tmp197($tmp195);
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp201 = $tmp195->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[1];
frost$core$Object* $tmp204 = $tmp202($tmp195);
frost$core$Frost$ref$frost$core$Object$Q($tmp204);
frost$core$Object* $tmp205 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
*(&local1) = $tmp204;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:134
frost$core$Object* $tmp206 = *(&local0);
frost$core$Object* $tmp207 = *(&local1);
frost$core$Int8** $tmp208 = &param1->pointer;
frost$core$Int8* $tmp209 = *$tmp208;
frost$core$Object** $tmp210 = &param1->target;
frost$core$Object* $tmp211 = *$tmp210;
bool $tmp212 = $tmp211 != ((frost$core$Object*) NULL);
if ($tmp212) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp214 = (($fn213) $tmp209)($tmp206, $tmp207);
*(&local2) = $tmp214;
goto block6;
block4:;
frost$core$Object* $tmp216 = (($fn215) $tmp209)($tmp211, $tmp206, $tmp207);
*(&local2) = $tmp216;
goto block6;
block6:;
frost$core$Object* $tmp217 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp217);
frost$core$Object* $tmp218 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp218);
*(&local0) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q($tmp217);
frost$core$Frost$unref$frost$core$Object$Q($tmp204);
frost$core$Object* $tmp219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp219);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:136
frost$core$Object* $tmp220 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp220);
frost$core$Object* $tmp221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp220;

}
void frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:149
ITable* $tmp222 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp222->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp222 = $tmp222->next;
}
$fn224 $tmp223 = $tmp222->methods[0];
frost$collections$Iterator* $tmp225 = $tmp223(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp226 = $tmp225->$class->itable;
while ($tmp226->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
frost$core$Bit $tmp229 = $tmp227($tmp225);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp231 = $tmp225->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp231 = $tmp231->next;
}
$fn233 $tmp232 = $tmp231->methods[1];
frost$core$Object* $tmp234 = $tmp232($tmp225);
frost$core$Frost$ref$frost$core$Object$Q($tmp234);
frost$core$Object* $tmp235 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp235);
*(&local0) = $tmp234;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:150
frost$core$Object* $tmp236 = *(&local0);
frost$core$Int8** $tmp237 = &param1->pointer;
frost$core$Int8* $tmp238 = *$tmp237;
frost$core$Object** $tmp239 = &param1->target;
frost$core$Object* $tmp240 = *$tmp239;
bool $tmp241 = $tmp240 != ((frost$core$Object*) NULL);
if ($tmp241) goto block4; else goto block5;
block5:;
(($fn242) $tmp238)($tmp236);
goto block6;
block4:;
(($fn243) $tmp238)($tmp240, $tmp236);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp234);
frost$core$Object* $tmp244 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp244);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
return;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:157
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp245 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp246 = param0->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$core$Int64 $tmp249 = $tmp247(param0);
frost$collections$Array$init$frost$core$Int64($tmp245, $tmp249);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
frost$collections$Array* $tmp250 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local0) = $tmp245;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:158
ITable* $tmp251 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp251->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp251 = $tmp251->next;
}
$fn253 $tmp252 = $tmp251->methods[0];
frost$collections$Iterator* $tmp254 = $tmp252(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp255 = $tmp254->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[0];
frost$core$Bit $tmp258 = $tmp256($tmp254);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp260 = $tmp254->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[1];
frost$core$Object* $tmp263 = $tmp261($tmp254);
frost$core$Frost$ref$frost$core$Object$Q($tmp263);
frost$core$Object* $tmp264 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp264);
*(&local1) = $tmp263;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:159
frost$collections$Array* $tmp265 = *(&local0);
frost$core$Object* $tmp266 = *(&local1);
frost$core$Int8** $tmp267 = &param1->pointer;
frost$core$Int8* $tmp268 = *$tmp267;
frost$core$Object** $tmp269 = &param1->target;
frost$core$Object* $tmp270 = *$tmp269;
bool $tmp271 = $tmp270 != ((frost$core$Object*) NULL);
if ($tmp271) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp273 = (($fn272) $tmp268)($tmp266);
*(&local2) = $tmp273;
goto block6;
block4:;
frost$core$Object* $tmp275 = (($fn274) $tmp268)($tmp270, $tmp266);
*(&local2) = $tmp275;
goto block6;
block6:;
frost$core$Object* $tmp276 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp265, $tmp276);
frost$core$Frost$unref$frost$core$Object$Q($tmp276);
frost$core$Frost$unref$frost$core$Object$Q($tmp263);
frost$core$Object* $tmp277 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp277);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:161
frost$collections$Array* $tmp278 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
frost$collections$Array* $tmp279 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp278;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:166
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp280 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp281 = param0->$class->itable;
while ($tmp281->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp281 = $tmp281->next;
}
$fn283 $tmp282 = $tmp281->methods[0];
frost$core$Int64 $tmp284 = $tmp282(param0);
frost$collections$Array$init$frost$core$Int64($tmp280, $tmp284);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
frost$collections$Array* $tmp285 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
*(&local0) = $tmp280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:167
ITable* $tmp286 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp286->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
frost$collections$Iterator* $tmp289 = $tmp287(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp290 = $tmp289->$class->itable;
while ($tmp290->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp290 = $tmp290->next;
}
$fn292 $tmp291 = $tmp290->methods[0];
frost$core$Bit $tmp293 = $tmp291($tmp289);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp295 = $tmp289->$class->itable;
while ($tmp295->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp295 = $tmp295->next;
}
$fn297 $tmp296 = $tmp295->methods[1];
frost$core$Object* $tmp298 = $tmp296($tmp289);
frost$core$Frost$ref$frost$core$Object$Q($tmp298);
frost$core$Object* $tmp299 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp299);
*(&local1) = $tmp298;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:168
frost$collections$Array* $tmp300 = *(&local0);
frost$core$Object* $tmp301 = *(&local1);
frost$core$Int8** $tmp302 = &param1->pointer;
frost$core$Int8* $tmp303 = *$tmp302;
frost$core$Object** $tmp304 = &param1->target;
frost$core$Object* $tmp305 = *$tmp304;
bool $tmp306 = $tmp305 != ((frost$core$Object*) NULL);
if ($tmp306) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp308 = (($fn307) $tmp303)($tmp301);
*(&local2) = $tmp308;
goto block6;
block4:;
frost$core$Object* $tmp310 = (($fn309) $tmp303)($tmp305, $tmp301);
*(&local2) = $tmp310;
goto block6;
block6:;
frost$core$Object* $tmp311 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp300, $tmp311);
frost$core$Frost$unref$frost$core$Object$Q($tmp311);
frost$core$Frost$unref$frost$core$Object$Q($tmp298);
frost$core$Object* $tmp312 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp312);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/CollectionView.frost:170
frost$collections$Array* $tmp313 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$collections$Array* $tmp314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp313;

}






