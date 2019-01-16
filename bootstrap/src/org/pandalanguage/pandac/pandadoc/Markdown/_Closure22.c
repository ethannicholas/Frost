#include "org/pandalanguage/pandac/pandadoc/Markdown/_Closure22.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/pandadoc/Markdown.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class_type org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$cleanup, org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$$anonymous21$panda$collections$ListView$LTpanda$core$String$Q$GT$R$panda$core$Object} };

typedef panda$core$Object* (*$fn10)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn17)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn29)(org$pandalanguage$pandac$pandadoc$Markdown*, panda$core$MutableString*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x32", 53, -5660865079504722641, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s34 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x66\x72\x6f\x73\x74", 14, -6276282638970051244, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x2f", 2, 16308, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x0a", 2, 16473, NULL };

void org$pandalanguage$pandac$pandadoc$Markdown$_Closure22$init$org$pandalanguage$pandac$pandadoc$Markdown(org$pandalanguage$pandac$pandadoc$Markdown$_Closure22* param0, org$pandalanguage$pandac$pandadoc$Markdown* param1) {

// line 782
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$pandadoc$Markdown** $tmp2 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp11)));
panda$core$String* $tmp12 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
*(&local0) = ((panda$core$String*) $tmp11);
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
// unreffing REF($4:panda.collections.ListView.T)
// line 784
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
panda$core$Int64 $tmp21 = (panda$core$Int64) {784};
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
// line 785
org$pandalanguage$pandac$pandadoc$Markdown** $tmp25 = &param0->$self;
org$pandalanguage$pandac$pandadoc$Markdown* $tmp26 = *$tmp25;
panda$core$MutableString* $tmp27 = *(&local1);
$fn29 $tmp28 = ($fn29) $tmp26->$class->vtable[22];
$tmp28($tmp26, $tmp27);
// line 786
panda$core$String* $tmp30 = *(&local0);
panda$core$Bit $tmp31 = panda$core$Bit$init$builtin_bit($tmp30 != NULL);
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp33 = (panda$core$Int64) {786};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s34, $tmp33, &$s35);
abort(); // unreachable
block3:;
panda$core$Int64 $tmp36 = panda$core$String$get_length$R$panda$core$Int64($tmp30);
*(&local2) = $tmp36;
// line 787
panda$core$Int64 $tmp37 = *(&local2);
panda$core$Int64$wrapper* $tmp38;
$tmp38 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp38->value = $tmp37;
panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s40, ((panda$core$Object*) $tmp38));
*(&local3) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$String* $tmp41 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
*(&local3) = $tmp39;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($66:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
// unreffing REF($65:panda.core.Object)
// line 788
panda$core$String* $tmp42 = *(&local3);
panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s44, $tmp42);
panda$core$String* $tmp45 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp43, &$s46);
panda$core$MutableString* $tmp47 = *(&local1);
panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp45, ((panda$core$Object*) $tmp47));
panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s50);
panda$core$String* $tmp51 = *(&local3);
panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp49, $tmp51);
panda$core$String* $tmp53 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp52, &$s54);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
// unreffing REF($90:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing REF($89:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($87:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($86:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
// unreffing REF($83:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($82:panda.core.String)
panda$core$String* $tmp55 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing tag
*(&local3) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp56 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing heading
*(&local1) = ((panda$core$MutableString*) NULL);
panda$core$String* $tmp57 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
// unreffing marker
*(&local0) = ((panda$core$String*) NULL);
return ((panda$core$Object*) $tmp53);

}

