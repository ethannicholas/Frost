#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

void org$pandalanguage$pandac$ClassDecl$Kind$cleanup$wrappershim(org$pandalanguage$pandac$ClassDecl$Kind$wrapper* self) {
    org$pandalanguage$pandac$ClassDecl$Kind$cleanup(self->value);
}

static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$Kind$class_type org$pandalanguage$pandac$ClassDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$Kind$cleanup} };

static panda$core$String $s2;
org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass_type org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$Kind$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 39, -2435870461219294496, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64", 39, -2435870461219294496, NULL };

void org$pandalanguage$pandac$ClassDecl$Kind$cleanup(org$pandalanguage$pandac$ClassDecl$Kind self) {
    org$pandalanguage$pandac$ClassDecl$Kind $match$5_53;
    {
        $match$5_53 = self;
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_53.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp4.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_53.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp5.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_53.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp6.value) {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(org$pandalanguage$pandac$ClassDecl$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

