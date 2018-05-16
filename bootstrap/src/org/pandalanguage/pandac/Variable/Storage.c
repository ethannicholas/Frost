#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"

void org$pandalanguage$pandac$Variable$Storage$cleanup$wrappershim(org$pandalanguage$pandac$Variable$Storage$wrapper* self) {
    org$pandalanguage$pandac$Variable$Storage$cleanup(self->value);
}

static panda$core$String $s1;
org$pandalanguage$pandac$Variable$Storage$class_type org$pandalanguage$pandac$Variable$Storage$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Variable$Storage$cleanup} };

static panda$core$String $s2;
org$pandalanguage$pandac$Variable$Storage$wrapperclass_type org$pandalanguage$pandac$Variable$Storage$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Variable$Storage$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65", 41, -3893682112086944269, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x56\x61\x72\x69\x61\x62\x6c\x65\x2e\x53\x74\x6f\x72\x61\x67\x65", 41, -3893682112086944269, NULL };

void org$pandalanguage$pandac$Variable$Storage$cleanup(org$pandalanguage$pandac$Variable$Storage self) {
    org$pandalanguage$pandac$Variable$Storage $match$15_53;
    {
        $match$15_53 = self;
        panda$core$Bit $tmp4 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15_53.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp4.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15_53.$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp5.value) {
        {
        }
        }
        else {
        panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$15_53.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp6.value) {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Storage* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}






