#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"

__attribute__((weak)) panda$core$String* panda$core$Method$convert$R$panda$core$String$shim(panda$core$Method* p0) {
    panda$core$String* result = panda$core$Method$convert$R$panda$core$String(p0);

    return result;
}
__attribute__((weak)) void panda$core$Method$cleanup$shim(panda$core$Method* p0) {
    panda$core$Method$cleanup(p0);

}

static panda$core$String $s1;
panda$core$Method$class_type panda$core$Method$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Method$convert$R$panda$core$String$shim, panda$core$Method$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -1766462995282165597, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, 190024286257870, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 12, 705572558468735642, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x27", 76, 8041887271363779530, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, 190024286257870, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q(panda$core$Method* param0, panda$core$Int8* param1, panda$core$Immutable* param2) {

// line 37
panda$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// line 38
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$Immutable** $tmp3 = &param0->target;
panda$core$Immutable* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Immutable** $tmp5 = &param0->target;
*$tmp5 = param2;
return;

}
panda$core$String* panda$core$Method$convert$R$panda$core$String(panda$core$Method* param0) {

// line 43
panda$core$Immutable** $tmp6 = &param0->target;
panda$core$Immutable* $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 44
panda$core$Int8** $tmp10 = &param0->pointer;
panda$core$Int8* $tmp11 = *$tmp10;
panda$core$String* $tmp12 = panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(((panda$core$Object**) $tmp11));
panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s14, $tmp12);
panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s16);
panda$core$Immutable** $tmp17 = &param0->target;
panda$core$Immutable* $tmp18 = *$tmp17;
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit($tmp18 != NULL);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {44};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block3:;
panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp15, ((panda$core$Object*) $tmp18));
panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp24, &$s26);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($24:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($11:panda.core.String)
return $tmp25;
block2:;
// line 46
panda$core$Int8** $tmp27 = &param0->pointer;
panda$core$Int8* $tmp28 = *$tmp27;
panda$core$String* $tmp29 = panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(((panda$core$Object**) $tmp28));
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s31, $tmp29);
panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s33);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
// unreffing REF($50:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($49:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($48:panda.core.String)
return $tmp32;

}
void panda$core$Method$cleanup(panda$core$Method* param0) {

// line 7
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$core$Immutable** $tmp34 = &param0->target;
panda$core$Immutable* $tmp35 = *$tmp34;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
return;

}






