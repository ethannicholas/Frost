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


struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$CollectionView$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$CollectionView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$CollectionView$_frost$collections$Iterable, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$collections$CollectionView$class_type frost$collections$CollectionView$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$CollectionView$_frost$collections$CollectionView, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

typedef frost$core$String* (*$fn4)(frost$collections$CollectionView*, frost$core$String*);
typedef frost$core$Int64 (*$fn9)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn21)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn25)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn30)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn50)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn63)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn69)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn75)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn83)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn90)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn92)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn101)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn114)(frost$collections$Iterable*);
typedef frost$core$Object* (*$fn120)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn126)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn134)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn141)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn143)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn153)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn157)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn162)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn172)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn174)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn184)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn188)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn193)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn203)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn205)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn214)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn218)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn223)(frost$collections$Iterator*);
typedef void (*$fn232)(frost$core$Object*);
typedef void (*$fn233)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn238)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn243)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn247)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn252)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn262)(frost$core$Object*);
typedef frost$core$Object* (*$fn264)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn273)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn278)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn282)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn287)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn297)(frost$core$Object*);
typedef frost$core$Object* (*$fn299)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 211247639363960309, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -8354478928842099240, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4982243977219181099, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -8354478928842099240, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x26\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 219, -7672148599725333876, NULL };

frost$core$String* frost$collections$CollectionView$join$R$frost$core$String(frost$collections$CollectionView* param0) {

// line 27
ITable* $tmp2 = param0->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[2];
frost$core$String* $tmp5 = $tmp3(param0, &$s6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// unreffing REF($3:frost.core.String)
return $tmp5;

}
frost$core$String* frost$collections$CollectionView$join$frost$core$String$R$frost$core$String(frost$collections$CollectionView* param0, frost$core$String* param1) {

frost$core$Bit local0;
frost$core$MutableString* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 40
ITable* $tmp7 = param0->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
$fn9 $tmp8 = $tmp7->methods[0];
frost$core$Int64 $tmp10 = $tmp8(param0);
frost$core$Int64 $tmp11 = (frost$core$Int64) {0};
frost$core$Bit $tmp12 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp10, $tmp11);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// line 41
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s14));
return &$s15;
block2:;
// line 43
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp16;
// line 44
frost$core$MutableString* $tmp17 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp17);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$MutableString* $tmp18 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
*(&local1) = $tmp17;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($16:frost.core.MutableString)
// line 45
ITable* $tmp19 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$collections$Iterator* $tmp22 = $tmp20(((frost$collections$Iterable*) param0));
goto block3;
block3:;
ITable* $tmp23 = $tmp22->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
frost$core$Bit $tmp26 = $tmp24($tmp22);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block4;
block4:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp28 = $tmp22->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[1];
frost$core$Object* $tmp31 = $tmp29($tmp22);
frost$core$Frost$ref$frost$core$Object$Q($tmp31);
frost$core$Object* $tmp32 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
*(&local2) = $tmp31;
// line 46
frost$core$Bit $tmp33 = *(&local0);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block6; else goto block8;
block6:;
// line 47
frost$core$Bit $tmp35 = frost$core$Bit$init$builtin_bit(false);
*(&local0) = $tmp35;
goto block7;
block8:;
// line 1
// line 50
frost$core$MutableString* $tmp36 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp36, param1);
goto block7;
block7:;
// line 52
frost$core$Object* $tmp37 = *(&local2);
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit(true);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block11;
block9:;
// line 53
frost$core$MutableString* $tmp40 = *(&local1);
frost$core$Object* $tmp41 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp40, $tmp41);
goto block10;
block11:;
// line 1
// line 56
frost$core$MutableString* $tmp42 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp42, &$s43);
goto block10;
block10:;
frost$core$Frost$unref$frost$core$Object$Q($tmp31);
// unreffing REF($43:frost.collections.Iterator.T)
frost$core$Object* $tmp44 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp44);
// unreffing v
*(&local2) = ((frost$core$Object*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($32:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 59
frost$core$MutableString* $tmp45 = *(&local1);
frost$core$String* $tmp46 = frost$core$MutableString$finish$R$frost$core$String($tmp45);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($94:frost.core.String)
frost$core$MutableString* $tmp47 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing result
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp46;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp48 = param0->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
frost$core$Int64 $tmp51 = $tmp49(param0);
frost$core$Int64 $tmp52 = (frost$core$Int64) {0};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 > $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp58 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s59, $tmp58, &$s60);
abort(); // unreachable
block1:;
// line 90
ITable* $tmp61 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$collections$Iterator* $tmp64 = $tmp62(((frost$collections$Iterable*) param0));
*(&local0) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
frost$collections$Iterator* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = $tmp64;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($16:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 91
frost$collections$Iterator* $tmp66 = *(&local0);
ITable* $tmp67 = $tmp66->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[1];
frost$core$Object* $tmp70 = $tmp68($tmp66);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp70);
frost$core$Object* $tmp71 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp71);
*(&local1) = $tmp70;
frost$core$Frost$unref$frost$core$Object$Q($tmp70);
// unreffing REF($32:frost.collections.Iterator.T)
// line 92
goto block3;
block3:;
frost$collections$Iterator* $tmp72 = *(&local0);
ITable* $tmp73 = $tmp72->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
frost$core$Bit $tmp76 = $tmp74($tmp72);
frost$core$Bit $tmp77 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block4; else goto block5;
block4:;
// line 93
frost$core$Object* $tmp79 = *(&local1);
frost$collections$Iterator* $tmp80 = *(&local0);
ITable* $tmp81 = $tmp80->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
frost$core$Object* $tmp84 = $tmp82($tmp80);
frost$core$Int8** $tmp85 = &param1->pointer;
frost$core$Int8* $tmp86 = *$tmp85;
frost$core$Object** $tmp87 = &param1->target;
frost$core$Object* $tmp88 = *$tmp87;
bool $tmp89 = $tmp88 != ((frost$core$Object*) NULL);
if ($tmp89) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp91 = (($fn90) $tmp86)($tmp79, $tmp84);
*(&local2) = $tmp91;
goto block8;
block6:;
frost$core$Object* $tmp93 = (($fn92) $tmp86)($tmp88, $tmp79, $tmp84);
*(&local2) = $tmp93;
goto block8;
block8:;
frost$core$Object* $tmp94 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp94);
frost$core$Object* $tmp95 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp95);
*(&local1) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q($tmp94);
// unreffing REF($75:frost.collections.CollectionView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp84);
// unreffing REF($58:frost.collections.Iterator.T)
goto block3;
block5:;
// line 95
frost$core$Object* $tmp96 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp96);
frost$core$Object* $tmp97 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
// unreffing result
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Iterator* $tmp98 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing i
*(&local0) = ((frost$collections$Iterator*) NULL);
return $tmp96;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Iterator* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
ITable* $tmp99 = param0->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[0];
frost$core$Int64 $tmp102 = $tmp100(param0);
frost$core$Int64 $tmp103 = (frost$core$Int64) {0};
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
bool $tmp106 = $tmp104 > $tmp105;
frost$core$Bit $tmp107 = (frost$core$Bit) {$tmp106};
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp109 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s110, $tmp109, &$s111);
abort(); // unreachable
block1:;
// line 102
ITable* $tmp112 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$collections$Iterator* $tmp115 = $tmp113(((frost$collections$Iterable*) param0));
*(&local0) = ((frost$collections$Iterator*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$collections$Iterator* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = $tmp115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($16:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 103
frost$collections$Iterator* $tmp117 = *(&local0);
ITable* $tmp118 = $tmp117->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Object* $tmp121 = $tmp119($tmp117);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp121);
frost$core$Object* $tmp122 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
*(&local1) = $tmp121;
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
// unreffing REF($32:frost.collections.Iterator.T)
// line 104
goto block3;
block3:;
frost$collections$Iterator* $tmp123 = *(&local0);
ITable* $tmp124 = $tmp123->$class->itable;
while ($tmp124->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp124 = $tmp124->next;
}
$fn126 $tmp125 = $tmp124->methods[0];
frost$core$Bit $tmp127 = $tmp125($tmp123);
frost$core$Bit $tmp128 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp127);
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block4; else goto block5;
block4:;
// line 105
frost$core$Object* $tmp130 = *(&local1);
frost$collections$Iterator* $tmp131 = *(&local0);
ITable* $tmp132 = $tmp131->$class->itable;
while ($tmp132->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp132 = $tmp132->next;
}
$fn134 $tmp133 = $tmp132->methods[1];
frost$core$Object* $tmp135 = $tmp133($tmp131);
frost$core$Int8** $tmp136 = &param1->pointer;
frost$core$Int8* $tmp137 = *$tmp136;
frost$core$Object** $tmp138 = &param1->target;
frost$core$Object* $tmp139 = *$tmp138;
bool $tmp140 = $tmp139 != ((frost$core$Object*) NULL);
if ($tmp140) goto block6; else goto block7;
block7:;
frost$core$Object* $tmp142 = (($fn141) $tmp137)($tmp130, $tmp135);
*(&local2) = $tmp142;
goto block8;
block6:;
frost$core$Object* $tmp144 = (($fn143) $tmp137)($tmp139, $tmp130, $tmp135);
*(&local2) = $tmp144;
goto block8;
block8:;
frost$core$Object* $tmp145 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp145);
frost$core$Object* $tmp146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp146);
*(&local1) = $tmp145;
frost$core$Frost$unref$frost$core$Object$Q($tmp145);
// unreffing REF($75:frost.collections.CollectionView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
// unreffing REF($58:frost.collections.Iterator.T)
goto block3;
block5:;
// line 107
frost$core$Object* $tmp147 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp147);
frost$core$Object* $tmp148 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp148);
// unreffing result
*(&local1) = ((frost$core$Object*) NULL);
frost$collections$Iterator* $tmp149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing i
*(&local0) = ((frost$collections$Iterator*) NULL);
return $tmp147;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 123
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp150);
*(&local0) = param2;
// line 124
ITable* $tmp151 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$collections$Iterator* $tmp154 = $tmp152(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp155 = $tmp154->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
frost$core$Bit $tmp158 = $tmp156($tmp154);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp160 = $tmp154->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[1];
frost$core$Object* $tmp163 = $tmp161($tmp154);
frost$core$Frost$ref$frost$core$Object$Q($tmp163);
frost$core$Object* $tmp164 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp164);
*(&local1) = $tmp163;
// line 125
frost$core$Object* $tmp165 = *(&local0);
frost$core$Object* $tmp166 = *(&local1);
frost$core$Int8** $tmp167 = &param1->pointer;
frost$core$Int8* $tmp168 = *$tmp167;
frost$core$Object** $tmp169 = &param1->target;
frost$core$Object* $tmp170 = *$tmp169;
bool $tmp171 = $tmp170 != ((frost$core$Object*) NULL);
if ($tmp171) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp173 = (($fn172) $tmp168)($tmp165, $tmp166);
*(&local2) = $tmp173;
goto block6;
block4:;
frost$core$Object* $tmp175 = (($fn174) $tmp168)($tmp170, $tmp165, $tmp166);
*(&local2) = $tmp175;
goto block6;
block6:;
frost$core$Object* $tmp176 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp176);
frost$core$Object* $tmp177 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp177);
*(&local0) = $tmp176;
frost$core$Frost$unref$frost$core$Object$Q($tmp176);
// unreffing REF($49:frost.collections.CollectionView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp163);
// unreffing REF($23:frost.collections.Iterator.T)
frost$core$Object* $tmp178 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp178);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing REF($12:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 127
frost$core$Object* $tmp179 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp179);
frost$core$Object* $tmp180 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp180);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp179;

}
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 132
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp181 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
*(&local0) = param2;
// line 133
ITable* $tmp182 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp182->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp182 = $tmp182->next;
}
$fn184 $tmp183 = $tmp182->methods[0];
frost$collections$Iterator* $tmp185 = $tmp183(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp186 = $tmp185->$class->itable;
while ($tmp186->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp186 = $tmp186->next;
}
$fn188 $tmp187 = $tmp186->methods[0];
frost$core$Bit $tmp189 = $tmp187($tmp185);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp191 = $tmp185->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[1];
frost$core$Object* $tmp194 = $tmp192($tmp185);
frost$core$Frost$ref$frost$core$Object$Q($tmp194);
frost$core$Object* $tmp195 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp195);
*(&local1) = $tmp194;
// line 134
frost$core$Object* $tmp196 = *(&local0);
frost$core$Object* $tmp197 = *(&local1);
frost$core$Int8** $tmp198 = &param1->pointer;
frost$core$Int8* $tmp199 = *$tmp198;
frost$core$Object** $tmp200 = &param1->target;
frost$core$Object* $tmp201 = *$tmp200;
bool $tmp202 = $tmp201 != ((frost$core$Object*) NULL);
if ($tmp202) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp204 = (($fn203) $tmp199)($tmp196, $tmp197);
*(&local2) = $tmp204;
goto block6;
block4:;
frost$core$Object* $tmp206 = (($fn205) $tmp199)($tmp201, $tmp196, $tmp197);
*(&local2) = $tmp206;
goto block6;
block6:;
frost$core$Object* $tmp207 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp207);
frost$core$Object* $tmp208 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp208);
*(&local0) = $tmp207;
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
// unreffing REF($49:frost.collections.CollectionView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
// unreffing REF($23:frost.collections.Iterator.T)
frost$core$Object* $tmp209 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp209);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($12:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 136
frost$core$Object* $tmp210 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp210);
frost$core$Object* $tmp211 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp210;

}
void frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 149
ITable* $tmp212 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp212->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[0];
frost$collections$Iterator* $tmp215 = $tmp213(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp216 = $tmp215->$class->itable;
while ($tmp216->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp216 = $tmp216->next;
}
$fn218 $tmp217 = $tmp216->methods[0];
frost$core$Bit $tmp219 = $tmp217($tmp215);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp221 = $tmp215->$class->itable;
while ($tmp221->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp221 = $tmp221->next;
}
$fn223 $tmp222 = $tmp221->methods[1];
frost$core$Object* $tmp224 = $tmp222($tmp215);
frost$core$Frost$ref$frost$core$Object$Q($tmp224);
frost$core$Object* $tmp225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp225);
*(&local0) = $tmp224;
// line 150
frost$core$Object* $tmp226 = *(&local0);
frost$core$Int8** $tmp227 = &param1->pointer;
frost$core$Int8* $tmp228 = *$tmp227;
frost$core$Object** $tmp229 = &param1->target;
frost$core$Object* $tmp230 = *$tmp229;
bool $tmp231 = $tmp230 != ((frost$core$Object*) NULL);
if ($tmp231) goto block4; else goto block5;
block5:;
(($fn232) $tmp228)($tmp226);
goto block6;
block4:;
(($fn233) $tmp228)($tmp230, $tmp226);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
// unreffing REF($15:frost.collections.Iterator.T)
frost$core$Object* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp234);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 157
frost$collections$Array* $tmp235 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp236 = param0->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[0];
frost$core$Int64 $tmp239 = $tmp237(param0);
frost$collections$Array$init$frost$core$Int64($tmp235, $tmp239);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
frost$collections$Array* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local0) = $tmp235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($1:frost.collections.Array<frost.collections.CollectionView.map.U>)
// line 158
ITable* $tmp241 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp241->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[0];
frost$collections$Iterator* $tmp244 = $tmp242(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp245 = $tmp244->$class->itable;
while ($tmp245->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
frost$core$Bit $tmp248 = $tmp246($tmp244);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp250 = $tmp244->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[1];
frost$core$Object* $tmp253 = $tmp251($tmp244);
frost$core$Frost$ref$frost$core$Object$Q($tmp253);
frost$core$Object* $tmp254 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp254);
*(&local1) = $tmp253;
// line 159
frost$collections$Array* $tmp255 = *(&local0);
frost$core$Object* $tmp256 = *(&local1);
frost$core$Int8** $tmp257 = &param1->pointer;
frost$core$Int8* $tmp258 = *$tmp257;
frost$core$Object** $tmp259 = &param1->target;
frost$core$Object* $tmp260 = *$tmp259;
bool $tmp261 = $tmp260 != ((frost$core$Object*) NULL);
if ($tmp261) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp263 = (($fn262) $tmp258)($tmp256);
*(&local2) = $tmp263;
goto block6;
block4:;
frost$core$Object* $tmp265 = (($fn264) $tmp258)($tmp260, $tmp256);
*(&local2) = $tmp265;
goto block6;
block6:;
frost$core$Object* $tmp266 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp255, $tmp266);
frost$core$Frost$unref$frost$core$Object$Q($tmp266);
// unreffing REF($59:frost.collections.CollectionView.map.U)
frost$core$Frost$unref$frost$core$Object$Q($tmp253);
// unreffing REF($32:frost.collections.Iterator.T)
frost$core$Object* $tmp267 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp267);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($21:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 161
frost$collections$Array* $tmp268 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
frost$collections$Array* $tmp269 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp268;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 166
frost$collections$Array* $tmp270 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp271 = param0->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[0];
frost$core$Int64 $tmp274 = $tmp272(param0);
frost$collections$Array$init$frost$core$Int64($tmp270, $tmp274);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$collections$Array* $tmp275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local0) = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($1:frost.collections.Array<frost.collections.CollectionView.map.U>)
// line 167
ITable* $tmp276 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$collections$Iterator* $tmp279 = $tmp277(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp280 = $tmp279->$class->itable;
while ($tmp280->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp280 = $tmp280->next;
}
$fn282 $tmp281 = $tmp280->methods[0];
frost$core$Bit $tmp283 = $tmp281($tmp279);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp285 = $tmp279->$class->itable;
while ($tmp285->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp285 = $tmp285->next;
}
$fn287 $tmp286 = $tmp285->methods[1];
frost$core$Object* $tmp288 = $tmp286($tmp279);
frost$core$Frost$ref$frost$core$Object$Q($tmp288);
frost$core$Object* $tmp289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp289);
*(&local1) = $tmp288;
// line 168
frost$collections$Array* $tmp290 = *(&local0);
frost$core$Object* $tmp291 = *(&local1);
frost$core$Int8** $tmp292 = &param1->pointer;
frost$core$Int8* $tmp293 = *$tmp292;
frost$core$Object** $tmp294 = &param1->target;
frost$core$Object* $tmp295 = *$tmp294;
bool $tmp296 = $tmp295 != ((frost$core$Object*) NULL);
if ($tmp296) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp298 = (($fn297) $tmp293)($tmp291);
*(&local2) = $tmp298;
goto block6;
block4:;
frost$core$Object* $tmp300 = (($fn299) $tmp293)($tmp295, $tmp291);
*(&local2) = $tmp300;
goto block6;
block6:;
frost$core$Object* $tmp301 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp290, $tmp301);
frost$core$Frost$unref$frost$core$Object$Q($tmp301);
// unreffing REF($59:frost.collections.CollectionView.map.U)
frost$core$Frost$unref$frost$core$Object$Q($tmp288);
// unreffing REF($32:frost.collections.Iterator.T)
frost$core$Object* $tmp302 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp302);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($21:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 170
frost$collections$Array* $tmp303 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$collections$Array* $tmp304 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp303;

}






