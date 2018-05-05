#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ChoiceEntry$class_type org$pandalanguage$pandac$ChoiceEntry$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String, org$pandalanguage$pandac$ChoiceEntry$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x68\x6f\x69\x63\x65\x45\x6e\x74\x72\x79", 36, 4258235931078372511, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ChoiceEntry$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$panda$core$Int64$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT(org$pandalanguage$pandac$ChoiceEntry* self, org$pandalanguage$pandac$ClassDecl* p_owner, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name, panda$core$String* p_doccomment, panda$core$Int64 p_rawValue, panda$collections$ListView* p_fields) {
    self->name = NULL;
    self->owner = NULL;
    self->doccomment = NULL;
    self->fields = NULL;
    self->initMethod = NULL;
    org$pandalanguage$pandac$MethodDecl* $tmp2 = NULL;
    self->initMethod = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    self->resolved = ((panda$core$Bit) { false });
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3 = self->owner;
        org$pandalanguage$pandac$ClassDecl* $tmp4 = p_owner;
        self->owner = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    {
        panda$core$String* $tmp5 = self->doccomment;
        panda$core$String* $tmp6 = p_doccomment;
        self->doccomment = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
    self->rawValue = p_rawValue;
    {
        panda$collections$Array* $tmp7 = self->fields;
        panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp10, p_fields);
        panda$collections$Array* $tmp9 = $tmp10;
        panda$collections$Array* $tmp8 = $tmp9;
        self->fields = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 209 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(org$pandalanguage$pandac$ChoiceEntry* self) {
    panda$core$String* $tmp17 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) self->owner)->name);
    panda$core$String* $tmp16 = $tmp17;
    panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp16, &$s18);
    panda$core$String* $tmp15 = $tmp19;
    panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp15, self->name);
    panda$core$String* $tmp14 = $tmp20;
    panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s21);
    panda$core$String* $tmp13 = $tmp22;
    panda$core$String* $tmp12 = $tmp13;
    panda$core$String* $tmp11 = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    return $tmp11;
}
void org$pandalanguage$pandac$ChoiceEntry$cleanup(org$pandalanguage$pandac$ChoiceEntry* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->doccomment));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->fields));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->initMethod));
}

