#include "org/pandalanguage/pandac/ChoiceEntry.h"
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
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ChoiceEntry$class_type org$pandalanguage$pandac$ChoiceEntry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String, org$pandalanguage$pandac$ChoiceEntry$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Object* (*$fn23)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x45\x6e\x74\x72\x79", 36, 4258235931078372511, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$ChoiceEntry* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name, panda$core$String* p_doccomment, panda$core$Int64 p_rawValue, panda$collections$ListView* p_fields) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp5;
    panda$core$Weak* $tmp6;
    panda$core$Weak* $tmp7;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$collections$Array* $tmp11;
    panda$collections$Array* $tmp12;
    panda$collections$Array* $tmp13;
    org$pandalanguage$pandac$Symbol$Kind $tmp15;
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->fields = NULL;
    self->initMethod = NULL;
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->initMethod = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    self->resolved = ((panda$core$Bit) { false });
    {
        $tmp5 = self->owner;
        panda$core$Weak* $tmp8 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp8, ((panda$core$Object*) p_owner));
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        self->owner = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
    {
        $tmp9 = self->doccomment;
        $tmp10 = p_doccomment;
        self->doccomment = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    }
    self->rawValue = p_rawValue;
    {
        $tmp11 = self->fields;
        panda$collections$Array* $tmp14 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp14, p_fields);
        $tmp13 = $tmp14;
        $tmp12 = $tmp13;
        self->fields = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp15, ((panda$core$Int64) { 8 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp15, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(org$pandalanguage$pandac$ChoiceEntry* self) {
    panda$core$String* $returnValue16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$Object* $tmp22;
    panda$core$Object* $tmp24 = (($fn23) self->owner->$class->vtable[2])(self->owner);
    $tmp22 = $tmp24;
    panda$core$String* $tmp25 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp22)->name);
    $tmp21 = $tmp25;
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s26);
    $tmp20 = $tmp27;
    panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, self->name);
    $tmp19 = $tmp28;
    panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s29);
    $tmp18 = $tmp30;
    $tmp17 = $tmp18;
    $returnValue16 = $tmp17;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object($tmp22);
    return $returnValue16;
}
void org$pandalanguage$pandac$ChoiceEntry$cleanup(org$pandalanguage$pandac$ChoiceEntry* self) {
    int $tmp34;
    {
    }
    $tmp34 = -1;
    goto $l32;
    $l32:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp34) {
        case -1: goto $l35;
    }
    $l35:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->fields));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->initMethod));
}






