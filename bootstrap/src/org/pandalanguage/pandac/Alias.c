#include "org/pandalanguage/pandac/Alias.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Alias$class_type org$pandalanguage$pandac$Alias$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$Alias$convert$R$panda$core$String, org$pandalanguage$pandac$Alias$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6c\x69\x61\x73", 30, 3930399941291923048, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6c\x69\x61\x73\x28", 6, 1756024389231, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Alias* self, panda$core$String* p_alias, panda$core$String* p_fullName, org$pandalanguage$pandac$Position p_position) {
    org$pandalanguage$pandac$Symbol$Kind $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    self->name = NULL;
    self->fullName = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64(&$tmp2, $tmp3);
    org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), $tmp2, p_position, p_alias);
    {
        $tmp4 = self->fullName;
        $tmp5 = p_fullName;
        self->fullName = $tmp5;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
    }
}
panda$core$String* org$pandalanguage$pandac$Alias$convert$R$panda$core$String(org$pandalanguage$pandac$Alias* self) {
    panda$core$String* $returnValue6;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s12, self->name);
    $tmp11 = $tmp13;
    panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s14);
    $tmp10 = $tmp15;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, self->fullName);
    $tmp9 = $tmp16;
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s17);
    $tmp8 = $tmp18;
    $tmp7 = $tmp8;
    $returnValue6 = $tmp7;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
    return $returnValue6;
}
void org$pandalanguage$pandac$Alias$cleanup(org$pandalanguage$pandac$Alias* self) {
    int $tmp22;
    {
    }
    $tmp22 = -1;
    goto $l20;
    $l20:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp22) {
        case -1: goto $l23;
    }
    $l23:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->fullName));
}





