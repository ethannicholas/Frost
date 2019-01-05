#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure6.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$$anonymous5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn20)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);
typedef panda$core$String* (*$fn26)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);
typedef panda$core$String* (*$fn37)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$String*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x36", 52, -3708868777759363907, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x69\x6c\x74\x6f\x3a", 7, 223949750184005, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x61\x20\x68\x72\x65\x66\x3d\x22", 9, 1753834082639911106, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x22\x3e", 2, 13697, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f\x61\x3e", 4, 166367767, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 359
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* param0) {

// line 359
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$String* org$pandalanguage$pandac$pandadoc$Markdown$_Closure6$$anonymous5$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$_Closure6* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$String* local2 = NULL;
panda$core$String* local3 = NULL;
// line 360
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
// line 361
panda$core$MutableString* $tmp13 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String* $tmp14 = *(&local0);
panda$core$MutableString$init$panda$core$String($tmp13, $tmp14);
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp15 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
*(&local1) = $tmp13;
// line 362
org$pandalanguage$pandac$pandadoc$Markdown** $tmp16 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp17 = *$tmp16;
panda$core$MutableString* $tmp18 = *(&local1);
$fn20 $tmp19 = ($fn20) $tmp17->$class->vtable[11];
$tmp19($tmp17, $tmp18);
// line 363
org$pandalanguage$pandac$pandadoc$Markdown** $tmp21 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp22 = *$tmp21;
panda$core$MutableString* $tmp23 = *(&local1);
panda$core$String* $tmp24 = panda$core$MutableString$convert$R$panda$core$String($tmp23);
$fn26 $tmp25 = ($fn26) $tmp22->$class->vtable[12];
panda$core$String* $tmp27 = $tmp25($tmp22, $tmp24);
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp28 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
*(&local2) = $tmp27;
// line 364
org$pandalanguage$pandac$pandadoc$Markdown** $tmp29 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp30 = *$tmp29;
panda$core$MutableString* $tmp31 = *(&local1);
panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s33, ((panda$core$Object*) $tmp31));
panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, &$s35);
$fn37 $tmp36 = ($fn37) $tmp30->$class->vtable[12];
panda$core$String* $tmp38 = $tmp36($tmp30, $tmp34);
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp39 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
*(&local3) = $tmp38;
// line 365
panda$core$String* $tmp40 = *(&local3);
panda$core$String* $tmp41 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s42, $tmp40);
panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp41, &$s44);
panda$core$String* $tmp45 = *(&local2);
panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp43, $tmp45);
panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s48);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($67:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($66:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($64:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($63:panda.core.String)
panda$core$String* $tmp49 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing url
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($53:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($51:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($50:panda.core.String)
panda$core$String* $tmp50 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing addr
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($37:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($35:panda.core.String)
panda$core$MutableString* $tmp51 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
// unreffing ed
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($14:panda.core.MutableString)
panda$core$String* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing address
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
return $tmp47;

}

