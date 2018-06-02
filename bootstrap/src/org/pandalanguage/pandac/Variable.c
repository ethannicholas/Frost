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
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 14, -3338407112971726327, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x69\x6e\x69\x74\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x29", 213, 3933543666549636661, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x70\x61\x6e\x64\x61", 14, -3338407112971726327, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x69\x6e\x69\x74\x28\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x6b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x74\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x73\x74\x6f\x72\x61\x67\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65\x29", 263, 3162362164514313779, NULL };

void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$Q(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    org$pandalanguage$pandac$Type* $tmp2;
    org$pandalanguage$pandac$Type* $tmp7;
    panda$core$Bit $tmp10;
    org$pandalanguage$pandac$IRNode* $tmp15;
    org$pandalanguage$pandac$Variable$Storage $tmp16;
    panda$core$Int64 $tmp17;
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
    panda$core$Bit$init$builtin_bit(&$tmp10, true);
    $tmp6 = $tmp10;
    goto $l5;
    $l5:;
    if ($tmp6.value) goto $l11; else goto $l12;
    $l12:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s13, (panda$core$Int64) { 30 }, &$s14);
    abort();
    $l11:;
    $tmp15 = NULL;
    self->initialValue = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Int64$init$builtin_int64(&$tmp17, 0);
    org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(&$tmp16, $tmp17);
    org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(self, p_position, p_kind, p_name, p_type, $tmp16);
}
void org$pandalanguage$pandac$Variable$init$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable* self, org$pandalanguage$pandac$Position p_position, org$pandalanguage$pandac$Variable$Kind p_kind, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type, org$pandalanguage$pandac$Variable$Storage p_storage) {
    org$pandalanguage$pandac$Type* $tmp18;
    org$pandalanguage$pandac$IRNode* $tmp25;
    org$pandalanguage$pandac$Type* $tmp26;
    org$pandalanguage$pandac$Type* $tmp27;
    org$pandalanguage$pandac$Symbol$Kind $tmp28;
    panda$core$Int64 $tmp29;
    self->name = NULL;
    self->type = NULL;
    self->initialValue = NULL;
    org$pandalanguage$pandac$Type* $tmp19 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    $tmp18 = $tmp19;
    panda$core$Bit $tmp20 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_type, $tmp18);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    if ($tmp20.value) goto $l21; else goto $l22;
    $l22:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s23, (panda$core$Int64) { 35 }, &$s24);
    abort();
    $l21:;
    $tmp25 = NULL;
    self->initialValue = $tmp25;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
    self->varKind = p_kind;
    {
        $tmp26 = self->type;
        $tmp27 = p_type;
        self->type = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
    self->storage = p_storage;
    panda$core$Int64$init$builtin_int64(&$tmp29, 7);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp28, $tmp29);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp28, p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$Variable$convert$R$panda$core$String(org$pandalanguage$pandac$Variable* self) {
    panda$core$String* $returnValue30;
    panda$core$String* $tmp31;
    $tmp31 = self->name;
    $returnValue30 = $tmp31;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
    return $returnValue30;
}
void org$pandalanguage$pandac$Variable$cleanup(org$pandalanguage$pandac$Variable* self) {
    int $tmp35;
    {
    }
    $tmp35 = -1;
    goto $l33;
    $l33:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp35) {
        case -1: goto $l36;
    }
    $l36:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->initialValue));
}

