#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure2.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn17)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn29)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Int64 (*$fn32)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn43)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 52, -3708868777759363911, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s71 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 177
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* param0) {

// line 177
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure2* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$String* local2 = NULL;
// line 178
panda$core$Int64 $tmp7 = (panda$core$Int64) {1};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
// line 179
panda$core$MutableString* $tmp13 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Int64 $tmp14 = (panda$core$Int64) {2};
ITable* $tmp15 = param1->$class->itable;
while ($tmp15->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
panda$core$Object* $tmp18 = $tmp16(param1, $tmp14);
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp18) != NULL);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {179};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block1:;
panda$core$MutableString$init$panda$core$String($tmp13, ((panda$core$String*) $tmp18));
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$MutableString* $tmp24 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local1) = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q($tmp18);
// unreffing REF($21:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($17:panda.core.MutableString)
// line 180
org$pandalanguage$pandac$pandadoc$Markdown** $tmp25 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp26 = *$tmp25;
panda$core$MutableString* $tmp27 = *(&local1);
$fn29 $tmp28 = ($fn29) $tmp26->$class->vtable[28];
$tmp28($tmp26, $tmp27);
// line 181
*(&local2) = ((panda$core$String*) NULL);
// line 182
ITable* $tmp30 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp30->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[0];
panda$core$Int64 $tmp33 = $tmp31(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp34 = (panda$core$Int64) {3};
int64_t $tmp35 = $tmp33.value;
int64_t $tmp36 = $tmp34.value;
bool $tmp37 = $tmp35 > $tmp36;
panda$core$Bit $tmp38 = (panda$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block3; else goto block5;
block3:;
// line 183
panda$core$Int64 $tmp40 = (panda$core$Int64) {3};
ITable* $tmp41 = param1->$class->itable;
while ($tmp41->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
panda$core$Object* $tmp44 = $tmp42(param1, $tmp40);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp44)));
panda$core$String* $tmp45 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
*(&local2) = ((panda$core$String*) $tmp44);
panda$core$Panda$unref$panda$core$Object$Q($tmp44);
// unreffing REF($68:panda.collections.ListView.T)
// line 184
panda$core$String* $tmp46 = *(&local2);
panda$core$Bit $tmp47 = panda$core$Bit$init$builtin_bit($tmp46 == NULL);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block6; else goto block7;
block6:;
// line 185
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s49));
panda$core$String* $tmp50 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
*(&local2) = &$s49;
goto block7;
block7:;
// line 187
panda$core$String* $tmp51 = *(&local2);
panda$core$Bit $tmp52 = panda$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp54 = (panda$core$Int64) {187};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block8:;
panda$core$String* $tmp57 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp51, &$s58, &$s59);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$String* $tmp60 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
*(&local2) = $tmp57;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($104:panda.core.String)
goto block4;
block5:;
// line 1
// line 190
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s61));
panda$core$String* $tmp62 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
*(&local2) = &$s61;
goto block4;
block4:;
// line 193
org$pandalanguage$pandac$pandadoc$Markdown** $tmp63 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp64 = *$tmp63;
panda$collections$HashMap** $tmp65 = &$tmp64->linkDefinitions;
panda$collections$HashMap* $tmp66 = *$tmp65;
panda$core$String* $tmp67 = *(&local0);
panda$core$Bit $tmp68 = panda$core$Bit$init$builtin_bit($tmp67 != NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp70 = (panda$core$Int64) {193};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block10:;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp73 = (org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class);
panda$core$MutableString* $tmp74 = *(&local1);
panda$core$String* $tmp75 = panda$core$MutableString$finish$R$panda$core$String($tmp74);
panda$core$String* $tmp76 = *(&local2);
panda$core$Bit $tmp77 = panda$core$Bit$init$builtin_bit($tmp76 != NULL);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp79 = (panda$core$Int64) {193};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s80, $tmp79, &$s81);
abort(); // unreachable
block12:;
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String($tmp73, $tmp75, $tmp76);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp66, ((panda$collections$Key*) $tmp67), ((panda$core$Object*) $tmp73));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($142:org.pandalanguage.pandac.pandadoc.Markdown.LinkDefinition)
// line 194
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s82));
panda$core$String* $tmp83 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing title
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp84 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing url
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp85 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing id
*(&local0) = ((panda$core$String*) NULL);
return &$s86;

}






