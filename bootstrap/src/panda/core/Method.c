#include "panda/core/Method.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"

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
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, 190024286257870, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };

void panda$core$Method$init$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Immutable$Q(panda$core$Method* param0, panda$core$Int8* param1, panda$core$Immutable* param2) {

// line 37
panda$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// line 38
panda$core$Immutable** $tmp3 = &param0->target;
panda$core$Immutable* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
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
panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp15, ((panda$core$Object*) $tmp18));
panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, &$s21);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($11:panda.core.String)
return $tmp20;
block2:;
// line 46
panda$core$Int8** $tmp22 = &param0->pointer;
panda$core$Int8* $tmp23 = *$tmp22;
panda$core$String* $tmp24 = panda$core$Panda$pointerConvert$panda$unsafe$Pointer$LTpanda$core$Object$Q$GT$R$panda$core$String(((panda$core$Object**) $tmp23));
panda$core$String* $tmp25 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s26, $tmp24);
panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp25, &$s28);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
// unreffing REF($43:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// unreffing REF($41:panda.core.String)
return $tmp27;

}
void panda$core$Method$cleanup(panda$core$Method* param0) {

// line 7
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$core$Immutable** $tmp29 = &param0->target;
panda$core$Immutable* $tmp30 = *$tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
return;

}






