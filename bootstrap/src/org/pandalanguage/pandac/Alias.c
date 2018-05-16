#include "org/pandalanguage/pandac/Alias.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Alias$class_type org$pandalanguage$pandac$Alias$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$Alias$convert$R$panda$core$String, org$pandalanguage$pandac$Alias$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6c\x69\x61\x73", 30, 3930399941291923048, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x6c\x69\x61\x73\x28", 6, 1756024389231, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$Alias$init$panda$core$String$panda$core$String$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$Alias* self, panda$core$String* p_alias, panda$core$String* p_fullName, org$pandalanguage$pandac$Position p_position) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    self->name = NULL;
    self->fullName = NULL;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 200 }), p_position, p_alias);
    {
        $tmp2 = self->fullName;
        $tmp3 = p_fullName;
        self->fullName = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$String* org$pandalanguage$pandac$Alias$convert$R$panda$core$String(org$pandalanguage$pandac$Alias* self) {
    panda$core$String* $finallyReturn3;
    panda$core$String* $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s10, self->name);
    $tmp9 = $tmp11;
    panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s12);
    $tmp8 = $tmp13;
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp8, self->fullName);
    $tmp7 = $tmp14;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s15);
    $tmp6 = $tmp16;
    $tmp5 = $tmp6;
    $finallyReturn3 = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    return $finallyReturn3;
}
void org$pandalanguage$pandac$Alias$cleanup(org$pandalanguage$pandac$Alias* self) {
    int $tmp20;
    {
    }
    $tmp20 = -1;
    goto $l18;
    $l18:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp20) {
        case -1: goto $l21;
    }
    $l21:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->fullName));
}






