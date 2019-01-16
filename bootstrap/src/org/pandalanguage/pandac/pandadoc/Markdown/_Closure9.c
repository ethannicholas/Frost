#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure9.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/core/MutableMethod.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn24)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn44)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn54)(panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 52, -3708868777759363904, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20", 2, 13465, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 408
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* param0) {

// line 408
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous33$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(panda$collections$ListView* param0) {

// line 416
panda$core$Int64 $tmp7 = (panda$core$Int64) {1};
ITable* $tmp8 = param0->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
panda$core$Object* $tmp11 = $tmp9(param0, $tmp7);
panda$core$Bit $tmp12 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp11) != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {416};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s15, $tmp14, &$s16);
abort(); // unreachable
block1:;
panda$core$String* $tmp17 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp11), &$s18, &$s19);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
return ((panda$core$Object*) $tmp17);

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 409
panda$core$MutableString* $tmp20 = (panda$core$MutableString*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Int64 $tmp21 = (panda$core$Int64) {1};
ITable* $tmp22 = param1->$class->itable;
while ($tmp22->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp22 = $tmp22->next;
}
$fn24 $tmp23 = $tmp22->methods[0];
panda$core$Object* $tmp25 = $tmp23(param1, $tmp21);
panda$core$Bit $tmp26 = panda$core$Bit$init$builtin_bit(((panda$core$String*) $tmp25) != NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp28 = (panda$core$Int64) {409};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, $tmp28, &$s30);
abort(); // unreachable
block1:;
panda$core$MutableString$init$panda$core$String($tmp20, ((panda$core$String*) $tmp25));
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$MutableString* $tmp31 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
*(&local0) = $tmp20;
panda$core$Panda$unref$panda$core$Object$Q($tmp25);
// unreffing REF($5:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($1:panda.core.MutableString)
// line 410
panda$core$MutableString* $tmp32 = *(&local0);
panda$core$RegularExpression* $tmp33 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp33, &$s34);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp32, $tmp33, &$s35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($31:panda.core.RegularExpression)
// line 411
panda$core$MutableString* $tmp36 = *(&local0);
panda$core$RegularExpression* $tmp37 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp37, &$s38);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp36, $tmp37, &$s39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($39:panda.core.RegularExpression)
// line 412
org$pandalanguage$pandac$pandadoc$Markdown** $tmp40 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp41 = *$tmp40;
panda$core$MutableString* $tmp42 = *(&local0);
$fn44 $tmp43 = ($fn44) $tmp41->$class->vtable[6];
$tmp43($tmp41, $tmp42);
// line 413
panda$core$MutableString* $tmp45 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp45, &$s46, &$s47);
// line 415
panda$core$RegularExpression* $tmp48 = (panda$core$RegularExpression*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp49 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp48, &$s50, $tmp49);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$RegularExpression* $tmp51 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
*(&local1) = $tmp48;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($55:panda.core.RegularExpression)
// line 416
panda$core$MutableString* $tmp52 = *(&local0);
panda$core$RegularExpression* $tmp53 = *(&local1);
panda$core$Method* $tmp55 = (panda$core$Method*) frostObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp55, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous33$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP($tmp52, $tmp53, ((panda$core$MutableMethod*) $tmp55));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing REF($72:panda.core.Method)
// line 417
panda$core$MutableString* $tmp56 = *(&local0);
panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s58, ((panda$core$Object*) $tmp56));
panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp57, &$s60);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing REF($83:panda.core.String)
panda$core$RegularExpression* $tmp61 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
// unreffing p1
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$MutableString* $tmp62 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing blockQuote
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$Object*) $tmp59);

}

