#include "org/pandalanguage/pandac/Config.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Config$class_type org$pandalanguage$pandac$Config$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Config$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6e\x66\x69\x67", 31, -8857975529788323896, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x55\x73\x65\x72\x73\x2f\x65\x74\x68\x61\x6e\x6e\x69\x63\x68\x6f\x6c\x61\x73\x2f\x44\x72\x6f\x70\x62\x6f\x78\x2f\x50\x61\x6e\x64\x61\x2f\x73\x72\x63", 38, -4683299716064170687, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x55\x73\x65\x72\x73\x2f\x65\x74\x68\x61\x6e\x6e\x69\x63\x68\x6f\x6c\x61\x73\x2f\x44\x72\x6f\x70\x62\x6f\x78\x2f\x50\x61\x6e\x64\x61\x2f\x62\x75\x69\x6c\x64", 40, 2726747335367643653, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x35\x2e\x30", 27, -855196788127931458, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x75\x63\x2e\x61\x3b\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x69\x31\x38\x6e\x2e\x64\x79\x6c\x69\x62", 57, -9070932862195135721, NULL };

panda$core$String* org$pandalanguage$pandac$Config$pandaSourceDir$R$panda$core$String() {
    panda$core$String* $returnValue2;
    panda$core$String* $tmp3;
    $tmp3 = &$s4;
    $returnValue2 = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    return $returnValue2;
}
panda$core$String* org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String() {
    panda$core$String* $returnValue6;
    panda$core$String* $tmp7;
    $tmp7 = &$s8;
    $returnValue6 = $tmp7;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
    return $returnValue6;
}
panda$core$String* org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String() {
    panda$core$String* $returnValue10;
    panda$core$String* $tmp11;
    $tmp11 = &$s12;
    $returnValue10 = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    return $returnValue10;
}
panda$core$String* org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String() {
    panda$core$String* $returnValue14;
    panda$core$String* $tmp15;
    $tmp15 = &$s16;
    $returnValue14 = $tmp15;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
    return $returnValue14;
}
panda$core$String* org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String() {
    panda$core$String* $returnValue18;
    panda$core$String* $tmp19;
    $tmp19 = &$s20;
    $returnValue18 = $tmp19;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
    return $returnValue18;
}
void org$pandalanguage$pandac$Config$init(org$pandalanguage$pandac$Config* self) {
}
void org$pandalanguage$pandac$Config$cleanup(org$pandalanguage$pandac$Config* self) {
    int $tmp24;
    {
    }
    $tmp24 = -1;
    goto $l22;
    $l22:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp24) {
        case -1: goto $l25;
    }
    $l25:;
}





