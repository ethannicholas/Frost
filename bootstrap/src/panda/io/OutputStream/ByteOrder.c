#include "panda/io/OutputStream/ByteOrder.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
__attribute__((weak)) void panda$io$OutputStream$ByteOrder$cleanup$shim(panda$core$Object* p0) {
    panda$io$OutputStream$ByteOrder$cleanup(((panda$io$OutputStream$ByteOrder$wrapper*) p0)->value);

}

static panda$core$String $s1;
panda$io$OutputStream$ByteOrder$class_type panda$io$OutputStream$ByteOrder$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$OutputStream$ByteOrder$cleanup$shim} };

static panda$core$String $s2;
panda$io$OutputStream$ByteOrder$wrapperclass_type panda$io$OutputStream$ByteOrder$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$OutputStream$ByteOrder$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 31, 2321080163369284876, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4f\x75\x74\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x42\x79\x74\x65\x4f\x72\x64\x65\x72", 31, 2321080163369284876, NULL };

void panda$io$OutputStream$ByteOrder$cleanup(panda$io$OutputStream$ByteOrder self) {
    panda$io$OutputStream$ByteOrder $match$13_53;
    panda$core$Int64 $tmp4;
    panda$core$Int64 $tmp6;
    {
        $match$13_53 = self;
        panda$core$Int64$init$builtin_int64(&$tmp4, 0);
        panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$13_53.$rawValue, $tmp4);
        if ($tmp5.value) {
        {
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp6, 1);
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$13_53.$rawValue, $tmp6);
        if ($tmp7.value) {
        {
        }
        }
        }
    }
}
void panda$io$OutputStream$ByteOrder$init$panda$core$Int64(panda$io$OutputStream$ByteOrder* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}





