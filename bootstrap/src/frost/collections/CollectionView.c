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

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$CollectionView$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$CollectionView$_frost$collections$Iterable, { NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$collections$CollectionView$class_type frost$collections$CollectionView$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$CollectionView$_frost$collections$CollectionView, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

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
typedef frost$collections$Iterator* (*$fn102)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn106)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn111)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn121)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn123)(frost$core$Object*, frost$core$Object*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn132)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn136)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn141)(frost$collections$Iterator*);
typedef void (*$fn150)(frost$core$Object*);
typedef void (*$fn151)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Int64 (*$fn156)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn161)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn165)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn170)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn180)(frost$core$Object*);
typedef frost$core$Object* (*$fn182)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 211247639363960309, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 20, -8354478928842099240, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4982243977219181099, NULL };

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
frost$core$Int64 $tmp58 = (frost$core$Int64) {87};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s59, $tmp58, &$s60);
abort(); // unreachable
block1:;
// line 89
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
// line 90
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
// line 91
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
// line 92
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
// line 94
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
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1, frost$core$Object* param2) {

frost$core$Object* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 109
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp99);
*(&local0) = param2;
// line 110
ITable* $tmp100 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$collections$Iterator* $tmp103 = $tmp101(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp104 = $tmp103->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[0];
frost$core$Bit $tmp107 = $tmp105($tmp103);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp109 = $tmp103->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[1];
frost$core$Object* $tmp112 = $tmp110($tmp103);
frost$core$Frost$ref$frost$core$Object$Q($tmp112);
frost$core$Object* $tmp113 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
*(&local1) = $tmp112;
// line 111
frost$core$Object* $tmp114 = *(&local0);
frost$core$Object* $tmp115 = *(&local1);
frost$core$Int8** $tmp116 = &param1->pointer;
frost$core$Int8* $tmp117 = *$tmp116;
frost$core$Object** $tmp118 = &param1->target;
frost$core$Object* $tmp119 = *$tmp118;
bool $tmp120 = $tmp119 != ((frost$core$Object*) NULL);
if ($tmp120) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp122 = (($fn121) $tmp117)($tmp114, $tmp115);
*(&local2) = $tmp122;
goto block6;
block4:;
frost$core$Object* $tmp124 = (($fn123) $tmp117)($tmp119, $tmp114, $tmp115);
*(&local2) = $tmp124;
goto block6;
block6:;
frost$core$Object* $tmp125 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
frost$core$Object* $tmp126 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
*(&local0) = $tmp125;
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
// unreffing REF($49:frost.collections.CollectionView.T)
frost$core$Frost$unref$frost$core$Object$Q($tmp112);
// unreffing REF($23:frost.collections.Iterator.T)
frost$core$Object* $tmp127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($12:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 113
frost$core$Object* $tmp128 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp128);
frost$core$Object* $tmp129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp129);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp128;

}
void frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$core$Object* local0 = NULL;
// line 126
ITable* $tmp130 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp130->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[0];
frost$collections$Iterator* $tmp133 = $tmp131(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp134 = $tmp133->$class->itable;
while ($tmp134->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[0];
frost$core$Bit $tmp137 = $tmp135($tmp133);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp139 = $tmp133->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[1];
frost$core$Object* $tmp142 = $tmp140($tmp133);
frost$core$Frost$ref$frost$core$Object$Q($tmp142);
frost$core$Object* $tmp143 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp143);
*(&local0) = $tmp142;
// line 127
frost$core$Object* $tmp144 = *(&local0);
frost$core$Int8** $tmp145 = &param1->pointer;
frost$core$Int8* $tmp146 = *$tmp145;
frost$core$Object** $tmp147 = &param1->target;
frost$core$Object* $tmp148 = *$tmp147;
bool $tmp149 = $tmp148 != ((frost$core$Object*) NULL);
if ($tmp149) goto block4; else goto block5;
block5:;
(($fn150) $tmp146)($tmp144);
goto block6;
block4:;
(($fn151) $tmp146)($tmp148, $tmp144);
goto block6;
block6:;
frost$core$Frost$unref$frost$core$Object$Q($tmp142);
// unreffing REF($15:frost.collections.Iterator.T)
frost$core$Object* $tmp152 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp152);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($4:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(frost$collections$CollectionView* param0, frost$core$MutableMethod* param1) {

frost$collections$Array* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 133
frost$collections$Array* $tmp153 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
ITable* $tmp154 = param0->$class->itable;
while ($tmp154->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp154 = $tmp154->next;
}
$fn156 $tmp155 = $tmp154->methods[0];
frost$core$Int64 $tmp157 = $tmp155(param0);
frost$collections$Array$init$frost$core$Int64($tmp153, $tmp157);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$collections$Array* $tmp158 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local0) = $tmp153;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($1:frost.collections.Array<frost.collections.CollectionView.map.U>)
// line 134
ITable* $tmp159 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$collections$Iterator* $tmp162 = $tmp160(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp163 = $tmp162->$class->itable;
while ($tmp163->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp163 = $tmp163->next;
}
$fn165 $tmp164 = $tmp163->methods[0];
frost$core$Bit $tmp166 = $tmp164($tmp162);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block3; else goto block2;
block2:;
*(&local1) = ((frost$core$Object*) NULL);
ITable* $tmp168 = $tmp162->$class->itable;
while ($tmp168->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[1];
frost$core$Object* $tmp171 = $tmp169($tmp162);
frost$core$Frost$ref$frost$core$Object$Q($tmp171);
frost$core$Object* $tmp172 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp172);
*(&local1) = $tmp171;
// line 135
frost$collections$Array* $tmp173 = *(&local0);
frost$core$Object* $tmp174 = *(&local1);
frost$core$Int8** $tmp175 = &param1->pointer;
frost$core$Int8* $tmp176 = *$tmp175;
frost$core$Object** $tmp177 = &param1->target;
frost$core$Object* $tmp178 = *$tmp177;
bool $tmp179 = $tmp178 != ((frost$core$Object*) NULL);
if ($tmp179) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp181 = (($fn180) $tmp176)($tmp174);
*(&local2) = $tmp181;
goto block6;
block4:;
frost$core$Object* $tmp183 = (($fn182) $tmp176)($tmp178, $tmp174);
*(&local2) = $tmp183;
goto block6;
block6:;
frost$core$Object* $tmp184 = *(&local2);
frost$collections$Array$add$frost$collections$Array$T($tmp173, $tmp184);
frost$core$Frost$unref$frost$core$Object$Q($tmp184);
// unreffing REF($59:frost.collections.CollectionView.map.U)
frost$core$Frost$unref$frost$core$Object$Q($tmp171);
// unreffing REF($32:frost.collections.Iterator.T)
frost$core$Object* $tmp185 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
// unreffing v
*(&local1) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($21:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 137
frost$collections$Array* $tmp186 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
frost$collections$Array* $tmp187 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing result
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp186;

}






