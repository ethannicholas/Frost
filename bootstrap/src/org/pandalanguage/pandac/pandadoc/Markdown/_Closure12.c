#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure12.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/RegularExpression.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$$anonymous11$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn16)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn55)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x32", 53, -5660865079504722742, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b\x2a\x2b\x2d\x5d", 5, 20023312915, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6c", 2, 22126, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x6c", 2, 21520, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x6e\x7b\x32\x2c\x7d", 7, 205851892197837, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x0a\x0a", 3, 1133331, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5c\x5c\x73\x2b\x24", 5, 20179622579, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s66 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 658
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure12$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure12* param0) {

// line 658
panda$core$Object$cleanup(((panda$core$Object*) param0));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
// line 660
panda$core$Int64 $tmp13 = (panda$core$Int64) {3};
ITable* $tmp14 = param1->$class->itable;
while ($tmp14->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
$fn16 $tmp15 = $tmp14->methods[0];
panda$core$Object* $tmp17 = $tmp15(param1, $tmp13);
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp17)));
panda$core$String* $tmp18 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
*(&local1) = ((panda$core$String*) $tmp17);
panda$core$Panda$unref$panda$core$Object$Q($tmp17);
// unreffing REF($20:panda.collections.ListView.T)
// line 661
*(&local2) = ((panda$core$String*) NULL);
// line 662
panda$core$String* $tmp19 = *(&local1);
panda$core$Bit $tmp20 = panda$core$Bit$init$builtin_bit($tmp19 != NULL);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp22 = (panda$core$Int64) {662};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block3:;
panda$core$RegularExpression* $tmp25 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp25, &$s26);
panda$core$Bit $tmp27 = panda$core$String$matches$panda$core$RegularExpression$R$panda$core$Bit($tmp19, $tmp25);
bool $tmp28 = $tmp27.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($44:panda.core.RegularExpression)
if ($tmp28) goto block1; else goto block5;
block1:;
// line 663
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s29));
panda$core$String* $tmp30 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
*(&local2) = &$s31;
goto block2;
block5:;
// line 1
// line 666
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s32));
panda$core$String* $tmp33 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
*(&local2) = &$s34;
goto block2;
block2:;
// line 671
panda$core$String* $tmp35 = *(&local0);
panda$core$Bit $tmp36 = panda$core$Bit$init$builtin_bit($tmp35 != NULL);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp38 = (panda$core$Int64) {671};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block6:;
panda$core$RegularExpression* $tmp41 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp41, &$s42);
panda$core$String* $tmp43 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp35, $tmp41, &$s44);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$String* $tmp45 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
*(&local0) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($81:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($79:panda.core.RegularExpression)
// line 673
org$pandalanguage$pandac$pandadoc$Markdown** $tmp46 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp47 = *$tmp46;
panda$core$String* $tmp48 = *(&local0);
panda$core$Bit $tmp49 = panda$core$Bit$init$builtin_bit($tmp48 != NULL);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp51 = (panda$core$Int64) {673};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s52, $tmp51, &$s53);
abort(); // unreachable
block8:;
$fn55 $tmp54 = ($fn55) $tmp47->$class->vtable[20];
panda$core$String* $tmp56 = $tmp54($tmp47, $tmp48);
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$core$String* $tmp57 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
*(&local3) = $tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($108:panda.core.String)
// line 678
panda$core$String* $tmp58 = *(&local3);
panda$core$RegularExpression* $tmp59 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp59, &$s60);
panda$core$String* $tmp61 = panda$core$String$replace$panda$core$RegularExpression$panda$core$String$R$panda$core$String($tmp58, $tmp59, &$s62);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
panda$core$String* $tmp63 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
*(&local3) = $tmp61;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing REF($123:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($121:panda.core.RegularExpression)
// line 680
panda$core$String* $tmp64 = *(&local2);
panda$core$String* $tmp65 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s66, $tmp64);
panda$core$String* $tmp67 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, &$s68);
panda$core$String* $tmp69 = *(&local3);
panda$core$String* $tmp70 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, $tmp69);
panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp70, &$s72);
panda$core$String* $tmp73 = *(&local2);
panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, $tmp73);
panda$core$String* $tmp75 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s76);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp75));
// unreffing REF($145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
// unreffing REF($142:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
// unreffing REF($141:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($139:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing REF($138:panda.core.String)
panda$core$String* $tmp77 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
// unreffing result
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp78 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp78));
// unreffing listType
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp79 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing listStart
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp80 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp80));
// unreffing list
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$Object*) $tmp75);

}

