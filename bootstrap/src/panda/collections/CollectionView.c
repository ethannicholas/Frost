#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/collections/Iterator.h"
#include "panda/core/MutableMethod.h"


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$CollectionView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$CollectionView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$CollectionView$_panda$collections$Iterable, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$CollectionView$class_type panda$collections$CollectionView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$CollectionView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

typedef panda$core$String* (*$fn4)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn21)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn50)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn63)(panda$collections$Iterable*);
typedef panda$core$Object* (*$fn69)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn75)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn90)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn92)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn106)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn111)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn121)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn123)(panda$core$Object*, panda$core$Object*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn141)(panda$collections$Iterator*);
typedef void (*$fn150)(panda$core$Object*);
typedef void (*$fn151)(panda$core$Object*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77", 32, 608517271074877699, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 20, -8354478927819022082, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x66\x6f\x6c\x64\x28\x66\x3a\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x3d\x3e\x28\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54\x29\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x54", 220, 4801410937435133769, NULL };

panda$core$String* panda$collections$CollectionView$join$R$panda$core$String(panda$collections$CollectionView* param0) {

// line 27
ITable* $tmp2 = param0->$class->itable;
while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[2];
panda$core$String* $tmp5 = $tmp3(param0, &$s6);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($3:panda.core.String)
return $tmp5;

}
panda$core$String* panda$collections$CollectionView$join$panda$core$String$R$panda$core$String(panda$collections$CollectionView* param0, panda$core$String* param1) {

panda$core$Bit local0;
panda$core$MutableString* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 40
ITable* $tmp7 = param0->$class->itable;
while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
$fn9 $tmp8 = $tmp7->methods[0];
panda$core$Int64 $tmp10 = $tmp8(param0);
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp10, $tmp11);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
// line 41
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s14));
return &$s15;
block2:;
// line 43
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit(true);
*(&local0) = $tmp16;
// line 44
panda$core$MutableString* $tmp17 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp17);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
*(&local1) = $tmp17;
// line 45
ITable* $tmp19 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
panda$collections$Iterator* $tmp22 = $tmp20(((panda$collections$Iterable*) param0));
goto block3;
block3:;
ITable* $tmp23 = $tmp22->$class->itable;
while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp23 = $tmp23->next;
}
$fn25 $tmp24 = $tmp23->methods[0];
panda$core$Bit $tmp26 = $tmp24($tmp22);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block5; else goto block4;
block4:;
*(&local2) = ((panda$core$Object*) NULL);
ITable* $tmp28 = $tmp22->$class->itable;
while ($tmp28->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp28 = $tmp28->next;
}
$fn30 $tmp29 = $tmp28->methods[1];
panda$core$Object* $tmp31 = $tmp29($tmp22);
panda$core$Object* $tmp32 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q($tmp32);
panda$core$Panda$ref$panda$core$Object$Q($tmp31);
*(&local2) = $tmp31;
// line 46
panda$core$Bit $tmp33 = *(&local0);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block6; else goto block8;
block6:;
// line 47
panda$core$Bit $tmp35 = panda$core$Bit$init$builtin_bit(false);
*(&local0) = $tmp35;
goto block7;
block8:;
// line 1
// line 50
panda$core$MutableString* $tmp36 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp36, param1);
goto block7;
block7:;
// line 52
panda$core$Object* $tmp37 = *(&local2);
panda$core$Bit $tmp38 = panda$core$Bit$init$builtin_bit(true);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block9; else goto block11;
block9:;
// line 53
panda$core$MutableString* $tmp40 = *(&local1);
panda$core$Object* $tmp41 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp40, $tmp41);
goto block10;
block11:;
// line 1
// line 56
panda$core$MutableString* $tmp42 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp42, &$s43);
goto block10;
block10:;
panda$core$Panda$unref$panda$core$Object$Q($tmp31);
// unreffing REF($40:panda.collections.Iterator.T)
panda$core$Object* $tmp44 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q($tmp44);
// unreffing v
*(&local2) = ((panda$core$Object*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
// unreffing REF($29:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 59
panda$core$MutableString* $tmp45 = *(&local1);
panda$core$String* $tmp46 = panda$core$MutableString$finish$R$panda$core$String($tmp45);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($91:panda.core.String)
panda$core$MutableString* $tmp47 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing result
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($16:panda.core.MutableString)
return $tmp46;

}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T(panda$collections$CollectionView* param0, panda$core$MutableMethod* param1) {

panda$collections$Iterator* local0 = NULL;
panda$core$Object* local1 = NULL;
panda$core$Object* local2 = NULL;
ITable* $tmp48 = param0->$class->itable;
while ($tmp48->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
panda$core$Int64 $tmp51 = $tmp49(param0);
panda$core$Int64 $tmp52 = (panda$core$Int64) {0};
int64_t $tmp53 = $tmp51.value;
int64_t $tmp54 = $tmp52.value;
bool $tmp55 = $tmp53 > $tmp54;
panda$core$Bit $tmp56 = (panda$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp58 = (panda$core$Int64) {87};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s59, $tmp58, &$s60);
abort(); // unreachable
block1:;
// line 88
ITable* $tmp61 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
panda$collections$Iterator* $tmp64 = $tmp62(((panda$collections$Iterable*) param0));
*(&local0) = ((panda$collections$Iterator*) NULL);
panda$collections$Iterator* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
*(&local0) = $tmp64;
// line 89
panda$collections$Iterator* $tmp66 = *(&local0);
ITable* $tmp67 = $tmp66->$class->itable;
while ($tmp67->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[1];
panda$core$Object* $tmp70 = $tmp68($tmp66);
*(&local1) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp71 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp71);
panda$core$Panda$ref$panda$core$Object$Q($tmp70);
*(&local1) = $tmp70;
// line 90
goto block3;
block3:;
panda$collections$Iterator* $tmp72 = *(&local0);
ITable* $tmp73 = $tmp72->$class->itable;
while ($tmp73->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
panda$core$Bit $tmp76 = $tmp74($tmp72);
panda$core$Bit $tmp77 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block4; else goto block5;
block4:;
// line 91
panda$core$Object* $tmp79 = *(&local1);
panda$collections$Iterator* $tmp80 = *(&local0);
ITable* $tmp81 = $tmp80->$class->itable;
while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[1];
panda$core$Object* $tmp84 = $tmp82($tmp80);
panda$core$Int8** $tmp85 = &param1->pointer;
panda$core$Int8* $tmp86 = *$tmp85;
panda$core$Object** $tmp87 = &param1->target;
panda$core$Object* $tmp88 = *$tmp87;
bool $tmp89 = $tmp88 != ((panda$core$Object*) NULL);
if ($tmp89) goto block6; else goto block7;
block7:;
panda$core$Object* $tmp91 = (($fn90) $tmp86)($tmp79, $tmp84);
*(&local2) = $tmp91;
goto block8;
block6:;
panda$core$Object* $tmp93 = (($fn92) $tmp86)($tmp88, $tmp79, $tmp84);
*(&local2) = $tmp93;
goto block8;
block8:;
panda$core$Object* $tmp94 = *(&local2);
panda$core$Object* $tmp95 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp95);
panda$core$Panda$ref$panda$core$Object$Q($tmp94);
*(&local1) = $tmp94;
panda$core$Panda$unref$panda$core$Object$Q($tmp94);
// unreffing REF($69:panda.collections.CollectionView.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp84);
// unreffing REF($52:panda.collections.Iterator.T)
goto block3;
block5:;
// line 93
panda$core$Object* $tmp96 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q($tmp96);
panda$core$Object* $tmp97 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp97);
// unreffing result
*(&local1) = ((panda$core$Object*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp70);
// unreffing REF($29:panda.collections.Iterator.T)
panda$collections$Iterator* $tmp98 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing i
*(&local0) = ((panda$collections$Iterator*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing REF($16:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp96;

}
panda$core$Object* panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T(panda$collections$CollectionView* param0, panda$core$MutableMethod* param1, panda$core$Object* param2) {

panda$core$Object* local0 = NULL;
panda$core$Object* local1 = NULL;
panda$core$Object* local2 = NULL;
// line 108
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp99 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp99);
panda$core$Panda$ref$panda$core$Object$Q(param2);
*(&local0) = param2;
// line 109
ITable* $tmp100 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
panda$collections$Iterator* $tmp103 = $tmp101(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp104 = $tmp103->$class->itable;
while ($tmp104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[0];
panda$core$Bit $tmp107 = $tmp105($tmp103);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$Object*) NULL);
ITable* $tmp109 = $tmp103->$class->itable;
while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[1];
panda$core$Object* $tmp112 = $tmp110($tmp103);
panda$core$Object* $tmp113 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp113);
panda$core$Panda$ref$panda$core$Object$Q($tmp112);
*(&local1) = $tmp112;
// line 110
panda$core$Object* $tmp114 = *(&local0);
panda$core$Object* $tmp115 = *(&local1);
panda$core$Int8** $tmp116 = &param1->pointer;
panda$core$Int8* $tmp117 = *$tmp116;
panda$core$Object** $tmp118 = &param1->target;
panda$core$Object* $tmp119 = *$tmp118;
bool $tmp120 = $tmp119 != ((panda$core$Object*) NULL);
if ($tmp120) goto block4; else goto block5;
block5:;
panda$core$Object* $tmp122 = (($fn121) $tmp117)($tmp114, $tmp115);
*(&local2) = $tmp122;
goto block6;
block4:;
panda$core$Object* $tmp124 = (($fn123) $tmp117)($tmp119, $tmp114, $tmp115);
*(&local2) = $tmp124;
goto block6;
block6:;
panda$core$Object* $tmp125 = *(&local2);
panda$core$Object* $tmp126 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp126);
panda$core$Panda$ref$panda$core$Object$Q($tmp125);
*(&local0) = $tmp125;
panda$core$Panda$unref$panda$core$Object$Q($tmp125);
// unreffing REF($49:panda.collections.CollectionView.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp112);
// unreffing REF($23:panda.collections.Iterator.T)
panda$core$Object* $tmp127 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp127);
// unreffing v
*(&local1) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($12:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 112
panda$core$Object* $tmp128 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp128);
panda$core$Object* $tmp129 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp129);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp128;

}
void panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(panda$collections$CollectionView* param0, panda$core$MutableMethod* param1) {

panda$core$Object* local0 = NULL;
// line 125
ITable* $tmp130 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp130 = $tmp130->next;
}
$fn132 $tmp131 = $tmp130->methods[0];
panda$collections$Iterator* $tmp133 = $tmp131(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp134 = $tmp133->$class->itable;
while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[0];
panda$core$Bit $tmp137 = $tmp135($tmp133);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block3; else goto block2;
block2:;
*(&local0) = ((panda$core$Object*) NULL);
ITable* $tmp139 = $tmp133->$class->itable;
while ($tmp139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[1];
panda$core$Object* $tmp142 = $tmp140($tmp133);
panda$core$Object* $tmp143 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp143);
panda$core$Panda$ref$panda$core$Object$Q($tmp142);
*(&local0) = $tmp142;
// line 126
panda$core$Object* $tmp144 = *(&local0);
panda$core$Int8** $tmp145 = &param1->pointer;
panda$core$Int8* $tmp146 = *$tmp145;
panda$core$Object** $tmp147 = &param1->target;
panda$core$Object* $tmp148 = *$tmp147;
bool $tmp149 = $tmp148 != ((panda$core$Object*) NULL);
if ($tmp149) goto block4; else goto block5;
block5:;
(($fn150) $tmp146)($tmp144);
goto block6;
block4:;
(($fn151) $tmp146)($tmp148, $tmp144);
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp142);
// unreffing REF($15:panda.collections.Iterator.T)
panda$core$Object* $tmp152 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp152);
// unreffing v
*(&local0) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing REF($4:panda.collections.Iterator<panda.collections.Iterable.T>)
return;

}






