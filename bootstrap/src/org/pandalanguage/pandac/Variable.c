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

void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp2;
    org$pandalanguage$pandac$IRNode* $tmp5;
    org$pandalanguage$pandac$Variable$Storage $tmp6;
    self->name = NULL;
    self->type = NULL;
    self->initialValue = NULL;
    org$pandalanguage$pandac$Type* $tmp3 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    $tmp2 = $tmp3;
    panda$core$Bit $tmp4 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp2);
    PANDA_ASSERT($tmp4.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    $tmp5 = NULL;
    self->initialValue = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(&$tmp6, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(self, p_position, p_kind, p_name, p_type, $tmp6);
}
void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable$Storage p_storage) {
    org$pandalanguage$pandac$Type* $tmp7;
    org$pandalanguage$pandac$IRNode* $tmp10;
    org$pandalanguage$pandac$Type* $tmp11;
    org$pandalanguage$pandac$Type* $tmp12;
    org$pandalanguage$pandac$Symbol$Kind $tmp13;
    self->name = NULL;
    self->type = NULL;
    self->initialValue = NULL;
    org$pandalanguage$pandac$Type* $tmp8 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    $tmp7 = $tmp8;
    panda$core$Bit $tmp9 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp7);
    PANDA_ASSERT($tmp9.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    $tmp10 = NULL;
    self->initialValue = $tmp10;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
    self->varKind = p_kind;
    {
        $tmp11 = self->type;
        $tmp12 = p_type;
        self->type = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    }
    self->storage = p_storage;
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp13, ((panda$core$Int64) { 7 }));
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp13, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self) {
    panda$core$String* $returnValue14;
    panda$core$String* $tmp15;
    $tmp15 = self->name;
    $returnValue14 = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    return $returnValue14;
}
void org$pandalanguage$pandac$Variable$cleanup(org$pandalanguage$pandac$Variable* self) {
    int $tmp19;
    {
    }
    $tmp19 = -1;
    goto $l17;
    $l17:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp19) {
        case -1: goto $l20;
    }
    $l20:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->initialValue));
}

