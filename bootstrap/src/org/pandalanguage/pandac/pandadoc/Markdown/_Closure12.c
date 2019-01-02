#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure12.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn40)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x32", 53, -5660865079504722742, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, 205851892197837, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 20179622579, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 658
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* param0) {

org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 659
panda$core$Int64 $tmp7 = (panda$core$Int64) {1};
ITable* $tmp8 = param1->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Object* $tmp11 = $tmp9(param1, $tmp7);
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
*(&local0) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// line 660
panda$core$Int64 $tmp13 = (panda$core$Int64) {3};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
panda$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp17)));
*(&local1) = ((panda$core$String*) $tmp17);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// line 661
*(&local2) = ((panda$core$String*) NULL);
// line 662
panda$core$String* $tmp19 = *(&local1);
panda$core$RegularExpression* $tmp20 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp20, &$s21);
panda$core$Bit $tmp22 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit($tmp19, $tmp20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block3;
block1:;
// line 663
panda$core$String* $tmp24 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s25));
*(&local2) = &$s26;
goto block2;
block3:;
// line 1
// line 666
panda$core$String* $tmp27 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s28));
*(&local2) = &$s29;
goto block2;
block2:;
// line 671
panda$core$String* $tmp30 = *(&local0);
panda$core$RegularExpression* $tmp31 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp31, &$s32);
panda$core$String* $tmp33 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp30, $tmp31, &$s34);
panda$core$String* $tmp35 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
*(&local0) = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// line 673
org$pandalanguage$pandac$pandadoc$Markdown** $tmp36 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp37 = *$tmp36;
panda$core$String* $tmp38 = *(&local0);
$fn40 $tmp39 = ($fn40) $tmp37->$class->vtable[20];
panda$core$String* $tmp41 = $tmp39($tmp37, $tmp38);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp42 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
*(&local3) = $tmp41;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// line 678
panda$core$String* $tmp43 = *(&local3);
panda$core$RegularExpression* $tmp44 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp44, &$s45);
panda$core$String* $tmp46 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp43, $tmp44, &$s47);
panda$core$String* $tmp48 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
*(&local3) = $tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// line 680
panda$core$String* $tmp49 = *(&local2);
panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s51, $tmp49);
panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s53);
panda$core$String* $tmp54 = *(&local3);
panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, $tmp54);
panda$core$String* $tmp56 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s57);
panda$core$String* $tmp58 = *(&local2);
panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp56, $tmp58);
panda$core$String* $tmp60 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp59, &$s61);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$String* $tmp62 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp63 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing listType
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp64 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// unreffing listStart
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$Object*) $tmp60);

}

