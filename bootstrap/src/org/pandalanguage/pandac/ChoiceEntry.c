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


static panda$core$String $s1;
org$pandalanguage$pandac$ChoiceEntry$class_type org$pandalanguage$pandac$ChoiceEntry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String, org$pandalanguage$pandac$ChoiceEntry$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Object* (*$fn22)(panda$core$Weak*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x45\x6e\x74\x72\x79", 36, 4258235931078372511, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 209 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(org$pandalanguage$pandac$ChoiceEntry* self) {
    panda$core$String* $returnValue15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    panda$core$Object* $tmp21;
    panda$core$Object* $tmp23 = (($fn22) self->owner->$class->vtable[2])(self->owner);
    $tmp21 = $tmp23;
    panda$core$String* $tmp24 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$ClassDecl*) $tmp21)->name);
    $tmp20 = $tmp24;
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, &$s25);
    $tmp19 = $tmp26;
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, self->name);
    $tmp18 = $tmp27;
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s28);
    $tmp17 = $tmp29;
    $tmp16 = $tmp17;
    $returnValue15 = $tmp16;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object($tmp21);
    return $returnValue15;
}
void org$pandalanguage$pandac$ChoiceEntry$cleanup(org$pandalanguage$pandac$ChoiceEntry* self) {
    int $tmp33;
    {
    }
    $tmp33 = -1;
    goto $l31;
    $l31:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp33) {
        case -1: goto $l34;
    }
    $l34:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->fields));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->initMethod));
}






