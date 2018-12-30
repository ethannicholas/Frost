#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure9.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/core/MutableMethod.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn19)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn34)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$Object* (*$fn44)(panda$collections$ListView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 52, -3708868777759363904, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e\x20\x20", 3, 1992459, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2a\x3e\x5b\x20\x5c\x74\x5d\x3f", 18, -7646264414083764081, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x3f\x6d\x29\x5e\x5b\x20\x5c\x74\x5d\x2b\x24", 12, 4609931141593742675, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20", 2, 13465, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x5c\x73\x2a\x3c\x70\x72\x65\x3e\x2e\x2a\x3f\x3c\x2f\x70\x72\x65\x3e\x29", 19, -2639512543099520141, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a", 13, -5037006854090612730, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x3c\x2f\x62\x6c\x6f\x63\x6b\x71\x75\x6f\x74\x65\x3e\x0a\x0a", 16, -5426254764564286611, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 408
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* param0) {

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
panda$core$String* $tmp12 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(((panda$core$String*) $tmp11), &$s13, &$s14);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
return ((panda$core$Object*) $tmp12);

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous7$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown$_Closure9* param0, panda$collections$ListView* param1) {

panda$core$MutableString* local0 = NULL;
panda$core$RegularExpression* local1 = NULL;
// line 409
panda$core$MutableString* $tmp15 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$Int64 $tmp16 = (panda$core$Int64) {1};
ITable* $tmp17 = param1->$class->itable;
while ($tmp17->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp17 = $tmp17->next;
}
$fn19 $tmp18 = $tmp17->methods[0];
panda$core$Object* $tmp20 = $tmp18(param1, $tmp16);
panda$core$MutableString$init$panda$core$String($tmp15, ((panda$core$String*) $tmp20));
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp21 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
*(&local0) = $tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$unref$panda$core$Object$Q($tmp20);
// line 410
panda$core$MutableString* $tmp22 = *(&local0);
panda$core$RegularExpression* $tmp23 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp23, &$s24);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp22, $tmp23, &$s25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// line 411
panda$core$MutableString* $tmp26 = *(&local0);
panda$core$RegularExpression* $tmp27 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$RegularExpression$init$panda$core$String($tmp27, &$s28);
panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String($tmp26, $tmp27, &$s29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// line 412
org$pandalanguage$pandac$pandadoc$Markdown** $tmp30 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp31 = *$tmp30;
panda$core$MutableString* $tmp32 = *(&local0);
$fn34 $tmp33 = ($fn34) $tmp31->$class->vtable[6];
$tmp33($tmp31, $tmp32);
// line 413
panda$core$MutableString* $tmp35 = *(&local0);
panda$core$MutableString$replace$panda$core$String$panda$core$String($tmp35, &$s36, &$s37);
// line 415
panda$core$RegularExpression* $tmp38 = (panda$core$RegularExpression*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$RegularExpression$class);
panda$core$Int64 $tmp39 = (panda$core$Int64) {4};
panda$core$RegularExpression$init$panda$core$String$panda$core$Int64($tmp38, &$s40, $tmp39);
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$RegularExpression* $tmp41 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
*(&local1) = $tmp38;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// line 416
panda$core$MutableString* $tmp42 = *(&local0);
panda$core$RegularExpression* $tmp43 = *(&local1);
panda$core$Method* $tmp45 = (panda$core$Method*) pandaObjectAlloc(32, (panda$core$Class*) &panda$core$Method$class);
panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q($tmp45, ((panda$core$Int8*) org$pandalanguage$pandac$pandadoc$Markdown$_Closure9$$anonymous33$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object), ((panda$core$Immutable*) NULL));
panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP($tmp42, $tmp43, ((panda$core$MutableMethod*) $tmp45));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// line 417
panda$core$MutableString* $tmp46 = *(&local0);
panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s48, ((panda$core$Object*) $tmp46));
panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, &$s50);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$RegularExpression* $tmp51 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing p1
*(&local1) = ((panda$core$RegularExpression*) NULL);
panda$core$MutableString* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing blockQuote
*(&local0) = ((panda$core$MutableString*) NULL);
return ((panda$core$Object*) $tmp49);

}

