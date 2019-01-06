#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure2.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown/LinkDefinition.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure2$$anonymous1$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn17)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn24)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Int64 (*$fn27)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn38)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 52, -3708868777759363911, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x26\x71\x75\x6f\x74\x3b", 6, 1472784484255, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
panda$core$MutableString* $tmp13 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Int64 $tmp14 = (panda$core$Int64) {2};
ITable* $tmp15 = param1->$class->itable;
while ($tmp15->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
panda$core$Object* $tmp18 = $tmp16(param1, $tmp14);
panda$core$MutableString$init$panda$core$String($tmp13, ((panda$core$String*) $tmp18));
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$MutableString* $tmp19 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
*(&local1) = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q($tmp18);
// unreffing REF($21:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($17:panda.core.MutableString)
// line 180
org$pandalanguage$pandac$pandadoc$Markdown** $tmp20 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp21 = *$tmp20;
panda$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[28];
$tmp23($tmp21, $tmp22);
// line 181
*(&local2) = ((panda$core$String*) NULL);
// line 182
ITable* $tmp25 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp25->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
panda$core$Int64 $tmp28 = $tmp26(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp29 = (panda$core$Int64) {3};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 > $tmp31;
panda$core$Bit $tmp33 = (panda$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block3;
block1:;
// line 183
panda$core$Int64 $tmp35 = (panda$core$Int64) {3};
ITable* $tmp36 = param1->$class->itable;
while ($tmp36->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[0];
panda$core$Object* $tmp39 = $tmp37(param1, $tmp35);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp39)));
panda$core$String* $tmp40 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
*(&local2) = ((panda$core$String*) $tmp39);
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
// unreffing REF($61:panda.collections.ListView.T)
// line 184
panda$core$String* $tmp41 = *(&local2);
panda$core$Bit $tmp42 = panda$core$Bit$init$builtin_bit($tmp41 == NULL);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block4; else goto block5;
block4:;
// line 185
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s44));
panda$core$String* $tmp45 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
*(&local2) = &$s44;
goto block5;
block5:;
// line 187
panda$core$String* $tmp46 = *(&local2);
panda$core$String* $tmp47 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp46, &$s48, &$s49);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$core$String* $tmp50 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
*(&local2) = $tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($90:panda.core.String)
goto block2;
block3:;
// line 1
// line 190
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s51));
panda$core$String* $tmp52 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
*(&local2) = &$s51;
goto block2;
block2:;
// line 193
org$pandalanguage$pandac$pandadoc$Markdown** $tmp53 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp54 = *$tmp53;
panda$collections$HashMap** $tmp55 = &$tmp54->linkDefinitions;
panda$collections$HashMap* $tmp56 = *$tmp55;
panda$core$String* $tmp57 = *(&local0);
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition* $tmp58 = (org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$class);
panda$core$MutableString* $tmp59 = *(&local1);
panda$core$String* $tmp60 = panda$core$MutableString$finish$R$panda$core$String($tmp59);
panda$core$String* $tmp61 = *(&local2);
org$pandalanguage$pandac$pandadoc$Markdown$LinkDefinition$init$panda$core$String$panda$core$String($tmp58, $tmp60, $tmp61);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp56, ((panda$collections$Key*) $tmp57), ((panda$core$Object*) $tmp58));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($123:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($121:org.pandalanguage.pandac.pandadoc.Markdown.LinkDefinition)
// line 194
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s62));
panda$core$String* $tmp63 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing title
*(&local2) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp64 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing url
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing id
*(&local0) = ((panda$core$String*) NULL);
return &$s66;

}






