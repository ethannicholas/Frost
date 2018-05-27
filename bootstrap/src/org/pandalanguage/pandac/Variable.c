#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Variable$class_type org$pandalanguage$pandac$Variable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$Variable$convert$R$panda$core$String, org$pandalanguage$pandac$Variable$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65", 33, -8053884103077052220, NULL };

void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp2;
    org$pandalanguage$pandac$Type* $tmp7;
    org$pandalanguage$pandac$IRNode* $tmp10;
    org$pandalanguage$pandac$Variable$Storage $tmp11;
    self->name = NULL;
    self->type = NULL;
    self->initialValue = NULL;
    $tmp2 = p_type;
    panda$core$Bit $tmp6;
    if (((panda$core$Bit) { $tmp2 != NULL }).value) goto $l3; else goto $l4;
    $l3:;
    org$pandalanguage$pandac$Type* $tmp8 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    $tmp7 = $tmp8;
    panda$core$Bit $tmp9 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp2, $tmp7);
    $tmp6 = $tmp9;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    goto $l5;
    $l4:;
    $tmp6 = ((panda$core$Bit) { true });
    goto $l5;
    $l5:;
    PANDA_ASSERT($tmp6.value);
    $tmp10 = NULL;
    self->initialValue = $tmp10;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
    org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(&$tmp11, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(self, p_position, p_kind, p_name, p_type, $tmp11);
}
void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable$Storage p_storage) {
    org$pandalanguage$pandac$Type* $tmp12;
    org$pandalanguage$pandac$IRNode* $tmp15;
    org$pandalanguage$pandac$Type* $tmp16;
    org$pandalanguage$pandac$Type* $tmp17;
    org$pandalanguage$pandac$Symbol$Kind $tmp18;
    self->name = NULL;
    self->type = NULL;
    self->initialValue = NULL;
    org$pandalanguage$pandac$Type* $tmp13 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    $tmp12 = $tmp13;
    panda$core$Bit $tmp14 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp12);
    PANDA_ASSERT($tmp14.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    $tmp15 = NULL;
    self->initialValue = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    self->varKind = p_kind;
    {
        $tmp16 = self->type;
        $tmp17 = p_type;
        self->type = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    self->storage = p_storage;
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp18, ((panda$core$Int64) { 7 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp18, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self) {
    panda$core$String* $returnValue19;
    panda$core$String* $tmp20;
    $tmp20 = self->name;
    $returnValue19 = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    return $returnValue19;
}
void org$pandalanguage$pandac$Variable$cleanup(org$pandalanguage$pandac$Variable* self) {
    int $tmp24;
    {
    }
    $tmp24 = -1;
    goto $l22;
    $l22:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp24) {
        case -1: goto $l25;
    }
    $l25:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->initialValue));
}

