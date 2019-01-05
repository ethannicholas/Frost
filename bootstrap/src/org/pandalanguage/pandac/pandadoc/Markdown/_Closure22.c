#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure22.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn17)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn24)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x32", 53, -5660865079504722641, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 782
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp4 = &param0->$self;
*$tmp4 = param1;
return;

}
void org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* param0) {

// line 782
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp5 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
return;

}
panda$core$Object* org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* param0, panda$collections$ListView* param1) {

panda$core$String* local0 = NULL;
panda$core$MutableString* local1 = NULL;
panda$core$Int64 local2;
panda$core$String* local3 = NULL;
// line 783
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
// line 784
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
panda$core$MutableString* $tmp19 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
*(&local1) = $tmp13;
// line 785
org$pandalanguage$pandac$pandadoc$Markdown** $tmp20 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp21 = *$tmp20;
panda$core$MutableString* $tmp22 = *(&local1);
$fn24 $tmp23 = ($fn24) $tmp21->$class->vtable[22];
$tmp23($tmp21, $tmp22);
// line 786
panda$core$String* $tmp25 = *(&local0);
panda$core$Int64 $tmp26 = panda$core$String$get_length$R$panda$core$Int64($tmp25);
*(&local2) = $tmp26;
// line 787
panda$core$Int64 $tmp27 = *(&local2);
panda$core$Int64$wrapper* $tmp28;
$tmp28 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp28->value = $tmp27;
panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s30, ((panda$core$Object*) $tmp28));
*(&local3) = ((panda$core$String*) NULL);
panda$core$String* $tmp31 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
*(&local3) = $tmp29;
// line 788
panda$core$String* $tmp32 = *(&local3);
panda$core$String* $tmp33 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s34, $tmp32);
panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp33, &$s36);
panda$core$MutableString* $tmp37 = *(&local1);
panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp35, ((panda$core$Object*) $tmp37));
panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp38, &$s40);
panda$core$String* $tmp41 = *(&local3);
panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, $tmp41);
panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, &$s44);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($61:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($60:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($53:panda.core.String)
panda$core$String* $tmp45 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing tag
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
// unreffing REF($42:panda.core.Object)
panda$core$MutableString* $tmp46 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing heading
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp18);
// unreffing REF($18:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($14:panda.core.MutableString)
panda$core$String* $tmp47 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing marker
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
return ((panda$core$Object*) $tmp43);

}

