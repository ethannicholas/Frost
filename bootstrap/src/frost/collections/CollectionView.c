#include "frost/collections/CollectionView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Array.h"


struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$CollectionView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { NULL, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$CollectionView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$CollectionView$_frost$collections$CollectionView, { NULL} };

static frost$core$String $s1;
frost$collections$CollectionView$class_type frost$collections$CollectionView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$CollectionView$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

typedef frost$collections$Iterator* (*$fn4)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn8)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn12)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn32)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn36)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn41)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn54)(frost$core$Object*);
typedef frost$core$Int (*$fn64)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn77)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn83)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn89)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn99)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn106)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn108)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn117)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn130)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn136)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn142)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn152)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn159)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn161)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn171)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn175)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn180)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn190)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn192)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn202)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn206)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn211)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn221)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn223)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn232)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn236)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn241)(frost$collections$Iterator*);
typedef void (*$fn250)(frost$core$Object*);
typedef void (*$fn251)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn256)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn261)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn265)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn270)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn280)(frost$core$Object*);
typedef frost$core$Object* (*$fn282)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int (*$fn291)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn296)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn300)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn305)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn315)(frost$core$Object*);
typedef frost$core$Object* (*$fn317)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, -3187779348182749487, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s74 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 6908775502092721301, NULL };
static frost$core$String $s126 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -1009795112068118972, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 219, -2277848183399103972, NULL };

frost$core$Object* frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:23
ITable* $tmp2 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$collections$Iterator* $tmp5 = $tmp3(((frost$collections$Iterable*) param0));
ITable* $tmp6 = $tmp5->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[1];
frost$core$Object* $tmp9 = $tmp7($tmp5);
frost$core$Frost$ref$frost$core$Object$Q($tmp9);
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return $tmp9;

}
frost$core$String* frost$collections$CollectionView$join$R$frost$core$String(frost$collections$CollectionView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:34
ITable* $tmp10 = param0->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[3];
frost$core$String* $tmp13 = $tmp11(param0, &$s14);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return $tmp13;

}
frost$core$String* frost$collections$CollectionView$join$frost$core$String$R$frost$core$String(frost$collections$CollectionView* param0, frost$core$String* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:47
ITable* $tmp15 = param0->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$core$Int $tmp18 = $tmp16(param0);
frost$core$Int $tmp19 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionView.frost:47:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
bool $tmp22 = $tmp20 == $tmp21;
frost$core$Bit $tmp23 = (frost$core$Bit) {$tmp22};
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:48
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s25));
return &$s26;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:50
frost$core$Bit $tmp27 = (frost$core$Bit) {true};
*(&local0) = $tmp27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:51
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp28 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp28);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$MutableString* $tmp29 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local1) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:52
ITable* $tmp30 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
frost$collections$Iterator* $tmp33 = $tmp31(((frost$collections$Iterable*) param0));
goto block4;
block4:;
ITable* $tmp34 = $tmp33->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$core$Bit $tmp37 = $tmp35($tmp33);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block5;
block5:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp39 = $tmp33->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[1];
frost$core$Object* $tmp42 = $tmp40($tmp33);
frost$core$Frost$ref$frost$core$Object$Q($tmp42);
frost$core$Object* $tmp43 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
*(&local2) = $tmp42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:53
frost$core$Bit $tmp44 = *(&local0);
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block7; else goto block9;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:54
frost$core$Bit $tmp46 = (frost$core$Bit) {false};
*(&local0) = $tmp46;
goto block8;
block9:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:57
frost$core$MutableString* $tmp47 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp47, param1);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:59
frost$core$Object* $tmp48 = *(&local2);
frost$core$Bit $tmp49 = (frost$core$Bit) {true};
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block10; else goto block12;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:60
frost$core$MutableString* $tmp51 = *(&local1);
frost$core$Object* $tmp52 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from CollectionView.frost:60:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn54 $tmp53 = ($fn54) $tmp52->$class->vtable[0];
frost$core$String* $tmp55 = $tmp53($tmp52);
frost$core$MutableString$append$frost$core$String($tmp51, $tmp55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
goto block11;
block12:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:63
frost$core$MutableString* $tmp56 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp56, &$s57);
goto block11;
block11:;
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
frost$core$Object* $tmp58 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp58);
*(&local2) = ((frost$core$Object*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:66
frost$core$MutableString* $tmp59 = *(&local1);
frost$core$String* $tmp60 = frost$core$MutableString$finish$R$frost$core$String($tmp59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
frost$core$MutableString* $tmp61 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp60;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp62 = param0->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$core$Int $tmp65 = $tmp63(param0);
frost$core$Int $tmp66 = (frost$core$Int) {0u};
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 > $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block1; else goto block2;
block2:;
frost$core$Int $tmp72 = (frost$core$Int) {95u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s73, $tmp72, &$s74);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:97
ITable* $tmp75 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$collections$Iterator* $tmp78 = $tmp76(((frost$collections$Iterable*) param0));
*(&local0) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$collections$Iterator* $tmp79 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local0) = $tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:98
frost$collections$Iterator* $tmp80 = *(&local0);
ITable* $tmp81 = $tmp80->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
frost$core$Object* $tmp84 = $tmp82($tmp80);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp84);
frost$core$Object* $tmp85 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
*(&local1) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:99
goto block3;
block3:;
frost$collections$Iterator* $tmp86 = *(&local0);
ITable* $tmp87 = $tmp86->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
frost$core$Bit $tmp90 = $tmp88($tmp86);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:99:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp91 = $tmp90.value;
bool $tmp92 = !$tmp91;
frost$core$Bit $tmp93 = (frost$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:100
frost$core$Object* $tmp95 = *(&local1);
frost$collections$Iterator* $tmp96 = *(&local0);
ITable* $tmp97 = $tmp96->$class->itable;
while ($tmp97->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp97 = $tmp97->next;
}
$fn99 $tmp98 = $tmp97->methods[1];
frost$core$Object* $tmp100 = $tmp98($tmp96);
frost$core$Int8** $tmp101 = &param1->pointer;
frost$core$Int8* $tmp102 = *$tmp101;
frost$core$Object** $tmp103 = &param1->target;
frost$core$Object* $tmp104 = *$tmp103;
bool $tmp105 = $tmp104 != ((frost$core$Object*) NULL);
if ($tmp105) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp107 = (($fn106) $tmp102)($tmp95, $tmp100);
*(&local2) = $tmp107;
goto block9;
block7:;
frost$core$Object* $tmp109 = (($fn108) $tmp102)($tmp104, $tmp95, $tmp100);
*(&local2) = $tmp109;
goto block9;
block9:;
frost$core$Object* $tmp110 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp110);
frost$core$Object* $tmp111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp111);
*(&local1) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
frost$core$Frost$unref$frost$core$Object$Q($tmp100);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:102
frost$core$Object* $tmp112 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp112);
frost$core$Object* $tmp113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Iterator* $tmp114 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local0) = ((frost$collections$Iterator*) NULL);
return $tmp112;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp115 = param0->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
frost$core$Int $tmp118 = $tmp116(param0);
frost$core$Int $tmp119 = (frost$core$Int) {0u};
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119.value;
bool $tmp122 = $tmp120 > $tmp121;
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
bool $tmp124 = $tmp123.value;
if ($tmp124) goto block1; else goto block2;
block2:;
frost$core$Int $tmp125 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s126, $tmp125, &$s127);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:109
ITable* $tmp128 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp128->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp128 = $tmp128->next;
}
$fn130 $tmp129 = $tmp128->methods[0];
frost$collections$Iterator* $tmp131 = $tmp129(((frost$collections$Iterable*) param0));
*(&local0) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$collections$Iterator* $tmp132 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
*(&local0) = $tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:110
frost$collections$Iterator* $tmp133 = *(&local0);
ITable* $tmp134 = $tmp133->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[1];
frost$core$Object* $tmp137 = $tmp135($tmp133);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp137);
frost$core$Object* $tmp138 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp138);
*(&local1) = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q($tmp137);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:111
goto block3;
block3:;
frost$collections$Iterator* $tmp139 = *(&local0);
ITable* $tmp140 = $tmp139->$class->itable;
while ($tmp140->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[0];
frost$core$Bit $tmp143 = $tmp141($tmp139);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from CollectionView.frost:111:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp144 = $tmp143.value;
bool $tmp145 = !$tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:112
frost$core$Object* $tmp148 = *(&local1);
frost$collections$Iterator* $tmp149 = *(&local0);
ITable* $tmp150 = $tmp149->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[1];
frost$core$Object* $tmp153 = $tmp151($tmp149);
frost$core$Int8** $tmp154 = &param1->pointer;
frost$core$Int8* $tmp155 = *$tmp154;
frost$core$Object** $tmp156 = &param1->target;
frost$core$Object* $tmp157 = *$tmp156;
bool $tmp158 = $tmp157 != ((frost$core$Object*) NULL);
if ($tmp158) goto block7; else goto block8;
block8:;
frost$core$Object* $tmp160 = (($fn159) $tmp155)($tmp148, $tmp153);
*(&local2) = $tmp160;
goto block9;
block7:;
frost$core$Object* $tmp162 = (($fn161) $tmp155)($tmp157, $tmp148, $tmp153);
*(&local2) = $tmp162;
goto block9;
block9:;
frost$core$Object* $tmp163 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp163);
frost$core$Object* $tmp164 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp164);
*(&local1) = $tmp163;
frost$core$Frost$unref$frost$core$Object$Q($tmp163);
frost$core$Frost$unref$frost$core$Object$Q($tmp153);
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:114
frost$core$Object* $tmp165 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp165);
frost$core$Object* $tmp166 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp166);
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Iterator* $tmp167 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local0) = ((frost$collections$Iterator*) NULL);
return $tmp165;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:130
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp168 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp168);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:131
ITable* $tmp169 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[0];
frost$collections$Iterator* $tmp172 = $tmp170(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp173 = $tmp172->$class->itable;
while ($tmp173->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp173 = $tmp173->next;
}
$fn175 $tmp174 = $tmp173->methods[0];
frost$core$Bit $tmp176 = $tmp174($tmp172);
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp178 = $tmp172->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
frost$core$Object* $tmp181 = $tmp179($tmp172);
frost$core$Frost$ref$frost$core$Object$Q($tmp181);
frost$core$Object* $tmp182 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp182);
*(&local1) = $tmp181;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:132
frost$core$Object* $tmp183 = *(&local0);
frost$core$Object* $tmp184 = *(&local1);
frost$core$Int8** $tmp185 = &param1->pointer;
frost$core$Int8* $tmp186 = *$tmp185;
frost$core$Object** $tmp187 = &param1->target;
frost$core$Object* $tmp188 = *$tmp187;
bool $tmp189 = $tmp188 != ((frost$core$Object*) NULL);
if ($tmp189) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp191 = (($fn190) $tmp186)($tmp183, $tmp184);
*(&local2) = $tmp191;
goto block6;
block4:;
frost$core$Object* $tmp193 = (($fn192) $tmp186)($tmp188, $tmp183, $tmp184);
*(&local2) = $tmp193;
goto block6;
block6:;
frost$core$Object* $tmp194 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp194);
frost$core$Object* $tmp195 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp195);
*(&local0) = $tmp194;
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
frost$core$Object* $tmp196 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp196);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:134
frost$core$Object* $tmp197 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp197);
frost$core$Object* $tmp198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp198);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp197;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:139
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
*(&local0) = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:140
ITable* $tmp200 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp200->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
frost$collections$Iterator* $tmp203 = $tmp201(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp204 = $tmp203->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[0];
frost$core$Bit $tmp207 = $tmp205($tmp203);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp209 = $tmp203->$class->itable;
while ($tmp209->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp209 = $tmp209->next;
}
$fn211 $tmp210 = $tmp209->methods[1];
frost$core$Object* $tmp212 = $tmp210($tmp203);
frost$core$Frost$ref$frost$core$Object$Q($tmp212);
frost$core$Object* $tmp213 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp213);
*(&local1) = $tmp212;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:141
frost$core$Object* $tmp214 = *(&local0);
frost$core$Object* $tmp215 = *(&local1);
frost$core$Int8** $tmp216 = &param1->pointer;
frost$core$Int8* $tmp217 = *$tmp216;
frost$core$Object** $tmp218 = &param1->target;
frost$core$Object* $tmp219 = *$tmp218;
bool $tmp220 = $tmp219 != ((frost$core$Object*) NULL);
if ($tmp220) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp222 = (($fn221) $tmp217)($tmp214, $tmp215);
*(&local2) = $tmp222;
goto block6;
block4:;
frost$core$Object* $tmp224 = (($fn223) $tmp217)($tmp219, $tmp214, $tmp215);
*(&local2) = $tmp224;
goto block6;
block6:;
frost$core$Object* $tmp225 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp225);
frost$core$Object* $tmp226 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp226);
*(&local0) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q($tmp225);
frost$core$Frost$unref$frost$core$Object$Q($tmp212);
frost$core$Object* $tmp227 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp227);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:143
frost$core$Object* $tmp228 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp228);
frost$core$Object* $tmp229 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp229);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp228;

}
void frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:156
ITable* $tmp230 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp230->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
frost$collections$Iterator* $tmp233 = $tmp231(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp234 = $tmp233->$class->itable;
while ($tmp234->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp234 = $tmp234->next;
}
$fn236 $tmp235 = $tmp234->methods[0];
frost$core$Bit $tmp237 = $tmp235($tmp233);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp239 = $tmp233->$class->itable;
while ($tmp239->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp239 = $tmp239->next;
}
$fn241 $tmp240 = $tmp239->methods[1];
frost$core$Object* $tmp242 = $tmp240($tmp233);
frost$core$Frost$ref$frost$core$Object$Q($tmp242);
frost$core$Object* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp243);
*(&local0) = $tmp242;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:157
frost$core$Object* $tmp244 = *(&local0);
frost$core$Int8** $tmp245 = &param1->pointer;
frost$core$Int8* $tmp246 = *$tmp245;
frost$core$Object** $tmp247 = &param1->target;
frost$core$Object* $tmp248 = *$tmp247;
bool $tmp249 = $tmp248 != ((frost$core$Object*) NULL);
if ($tmp249) goto block4; else goto block5;
block5:;
(($fn250) $tmp246)($tmp244);
goto block6;
block4:;
(($fn251) $tmp246)($tmp248, $tmp244);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp242);
frost$core$Object* $tmp252 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp252);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
return;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:164
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp253 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp254 = param0->$class->itable;
while ($tmp254->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
frost$core$Int $tmp257 = $tmp255(param0);
frost$collections$Array$init$frost$core$Int($tmp253, $tmp257);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$collections$Array* $tmp258 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
*(&local0) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:165
ITable* $tmp259 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp259->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp259 = $tmp259->next;
}
$fn261 $tmp260 = $tmp259->methods[0];
frost$collections$Iterator* $tmp262 = $tmp260(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp263 = $tmp262->$class->itable;
while ($tmp263->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp263 = $tmp263->next;
}
$fn265 $tmp264 = $tmp263->methods[0];
frost$core$Bit $tmp266 = $tmp264($tmp262);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp268 = $tmp262->$class->itable;
while ($tmp268->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp268 = $tmp268->next;
}
$fn270 $tmp269 = $tmp268->methods[1];
frost$core$Object* $tmp271 = $tmp269($tmp262);
frost$core$Frost$ref$frost$core$Object$Q($tmp271);
frost$core$Object* $tmp272 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp272);
*(&local1) = $tmp271;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:166
frost$collections$Array* $tmp273 = *(&local0);
frost$core$Object* $tmp274 = *(&local1);
frost$core$Int8** $tmp275 = &param1->pointer;
frost$core$Int8* $tmp276 = *$tmp275;
frost$core$Object** $tmp277 = &param1->target;
frost$core$Object* $tmp278 = *$tmp277;
bool $tmp279 = $tmp278 != ((frost$core$Object*) NULL);
if ($tmp279) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp281 = (($fn280) $tmp276)($tmp274);
*(&local2) = $tmp281;
goto block6;
block4:;
frost$core$Object* $tmp283 = (($fn282) $tmp276)($tmp278, $tmp274);
*(&local2) = $tmp283;
goto block6;
block6:;
frost$core$Object* $tmp284 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp273, $tmp284);
frost$core$Frost$unref$frost$core$Object$Q($tmp284);
frost$core$Frost$unref$frost$core$Object$Q($tmp271);
frost$core$Object* $tmp285 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp285);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:168
frost$collections$Array* $tmp286 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$collections$Array* $tmp287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp286;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:173
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp288 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp289 = param0->$class->itable;
while ($tmp289->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp289 = $tmp289->next;
}
$fn291 $tmp290 = $tmp289->methods[0];
frost$core$Int $tmp292 = $tmp290(param0);
frost$collections$Array$init$frost$core$Int($tmp288, $tmp292);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$collections$Array* $tmp293 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local0) = $tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:174
ITable* $tmp294 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp294->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp294 = $tmp294->next;
}
$fn296 $tmp295 = $tmp294->methods[0];
frost$collections$Iterator* $tmp297 = $tmp295(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp298 = $tmp297->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
frost$core$Bit $tmp301 = $tmp299($tmp297);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp303 = $tmp297->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[1];
frost$core$Object* $tmp306 = $tmp304($tmp297);
frost$core$Frost$ref$frost$core$Object$Q($tmp306);
frost$core$Object* $tmp307 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp307);
*(&local1) = $tmp306;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:175
frost$collections$Array* $tmp308 = *(&local0);
frost$core$Object* $tmp309 = *(&local1);
frost$core$Int8** $tmp310 = &param1->pointer;
frost$core$Int8* $tmp311 = *$tmp310;
frost$core$Object** $tmp312 = &param1->target;
frost$core$Object* $tmp313 = *$tmp312;
bool $tmp314 = $tmp313 != ((frost$core$Object*) NULL);
if ($tmp314) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp316 = (($fn315) $tmp311)($tmp309);
*(&local2) = $tmp316;
goto block6;
block4:;
frost$core$Object* $tmp318 = (($fn317) $tmp311)($tmp313, $tmp309);
*(&local2) = $tmp318;
goto block6;
block6:;
frost$core$Object* $tmp319 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp308, $tmp319);
frost$core$Frost$unref$frost$core$Object$Q($tmp319);
frost$core$Frost$unref$frost$core$Object$Q($tmp306);
frost$core$Object* $tmp320 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp320);
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionView.frost:177
frost$collections$Array* $tmp321 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
frost$collections$Array* $tmp322 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp321;

}






