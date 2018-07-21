#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$ChoiceCase$class_type org$pandalanguage$pandac$ChoiceCase$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String, org$pandalanguage$pandac$ChoiceCase$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x43\x61\x73\x65", 35, 1868571056118340221, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ChoiceCase$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$ChoiceCase* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name, panda$core$String* p_doccomment, panda$core$Int64 p_rawValue, panda$collections$ListView* p_fields) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    org$pandalanguage$pandac$Compiler$Resolution $tmp5;
    panda$core$Int64 $tmp6;
    panda$core$Weak* $tmp7;
    panda$core$Weak* $tmp8;
    panda$core$Weak* $tmp9;
    panda$core$String* $tmp11;
    panda$core$String* $tmp12;
    panda$collections$Array* $tmp13;
    panda$collections$Array* $tmp14;
    panda$collections$Array* $tmp15;
    org$pandalanguage$pandac$Symbol$Kind $tmp17;
    panda$core$Int64 $tmp18;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->fields = NULL;
    self->initMethod = NULL;
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T$Q($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->initMethod = $tmp2;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64(&$tmp5, $tmp6);
    self->resolved = $tmp5;
    {
        $tmp7 = self->owner;
        panda$core$Weak* $tmp10 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T$Q($tmp10, ((panda$core$Object*) p_owner));
        $tmp9 = $tmp10;
        $tmp8 = $tmp9;
        self->owner = $tmp8;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
    }
    {
        $tmp11 = self->doccomment;
        $tmp12 = p_doccomment;
        self->doccomment = $tmp12;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
    }
    self->rawValue = p_rawValue;
    {
        $tmp13 = self->fields;
        panda$collections$Array* $tmp16 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp16, ((panda$collections$CollectionView*) p_fields));
        $tmp15 = $tmp16;
        $tmp14 = $tmp15;
        self->fields = $tmp14;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
    }
    panda$core$Int64$init$builtin_int64(&$tmp18, 1);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp17, $tmp18);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp17, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String(org$pandalanguage$pandac$ChoiceCase* self) {
    panda$core$String* $returnValue19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$String* $tmp22;
    panda$core$String* $tmp23;
    panda$core$String* $tmp24;
    panda$core$Object* $tmp25;
    panda$core$Object* $tmp26 = panda$core$Weak$get$R$panda$core$Weak$T$Q(self->owner);
    $tmp25 = $tmp26;
    panda$core$String* $tmp27 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp25)->name);
    $tmp24 = $tmp27;
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s28);
    $tmp23 = $tmp29;
    panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, self->name);
    $tmp22 = $tmp30;
    panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, &$s31);
    $tmp21 = $tmp32;
    $tmp20 = $tmp21;
    $returnValue19 = $tmp20;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
    panda$core$Panda$unref$panda$core$Object$Q($tmp25);
    return $returnValue19;
}
void org$pandalanguage$pandac$ChoiceCase$cleanup(org$pandalanguage$pandac$ChoiceCase* self) {
    int $tmp36;
    {
    }
    $tmp36 = -1;
    goto $l34;
    $l34:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp36) {
        case -1: goto $l37;
    }
    $l37:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->fields));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->initMethod));
}





