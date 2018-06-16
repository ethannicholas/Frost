#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
__attribute__((weak)) void org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup(((org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type org$pandalanguage$pandac$CCodeGenerator$OpClass$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass_type org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 47, -2210284079518335582, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x4f\x70\x43\x6c\x61\x73\x73", 47, -2210284079518335582, NULL };

void org$pandalanguage$pandac$CCodeGenerator$OpClass$cleanup(org$pandalanguage$pandac$CCodeGenerator$OpClass self) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass $match$618_53;
    panda$core$Int64 $tmp4;
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp8;
    {
        $match$618_53 = self;
        panda$core$Int64$init$builtin_int64(&$tmp4, 0);
        panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$618_53.$rawValue, $tmp4);
        if ($tmp5.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp6, 1);
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$618_53.$rawValue, $tmp6);
        if ($tmp7.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp8, 2);
        panda$core$Bit $tmp9 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$618_53.$rawValue, $tmp8);
        if ($tmp9.value) {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator$OpClass* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}





