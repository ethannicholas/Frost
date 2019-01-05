#include "org/pandalanguage/pandac/IR/Block/ID.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit(((org$pandalanguage$pandac$IR$Block$ID$wrapper*) p0)->value, ((org$pandalanguage$pandac$IR$Block$ID$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String(((org$pandalanguage$pandac$IR$Block$ID$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$IR$Block$ID$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$IR$Block$ID$cleanup(((org$pandalanguage$pandac$IR$Block$ID$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$IR$Block$ID$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$IR$Block$ID$class_type org$pandalanguage$pandac$IR$Block$ID$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$IR$Block$ID$_panda$core$Equatable, { org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit$shim, org$pandalanguage$pandac$IR$Block$ID$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$IR$Block$ID$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$IR$Block$ID$wrapperclass_type org$pandalanguage$pandac$IR$Block$ID$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$IR$Block$ID$wrapper_panda$core$Equatable, { org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 36, -3373635925720273987, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 36, -3373635925720273987, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x6c\x6f\x63\x6b", 5, 20820434724, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

org$pandalanguage$pandac$IR$Block$ID org$pandalanguage$pandac$IR$Block$ID$init$panda$core$Int64(panda$core$Int64 param0) {

org$pandalanguage$pandac$IR$Block$ID local0;
// line 271
panda$core$Int64* $tmp3 = &(&local0)->value;
*$tmp3 = param0;
org$pandalanguage$pandac$IR$Block$ID $tmp4 = *(&local0);
return $tmp4;

}
panda$core$Bit org$pandalanguage$pandac$IR$Block$ID$$EQ$org$pandalanguage$pandac$IR$Block$ID$R$panda$core$Bit(org$pandalanguage$pandac$IR$Block$ID param0, org$pandalanguage$pandac$IR$Block$ID param1) {

// line 276
panda$core$Int64 $tmp5 = param0.value;
panda$core$Int64 $tmp6 = param1.value;
panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5, $tmp6);
return $tmp7;

}
panda$core$String* org$pandalanguage$pandac$IR$Block$ID$convert$R$panda$core$String(org$pandalanguage$pandac$IR$Block$ID param0) {

// line 281
panda$core$Int64 $tmp8 = param0.value;
panda$core$Int64$wrapper* $tmp9;
$tmp9 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp9->value = $tmp8;
panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s11, ((panda$core$Object*) $tmp9));
panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp10, &$s13);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($2:panda.core.Object)
return $tmp12;

}
void org$pandalanguage$pandac$IR$Block$ID$cleanup(org$pandalanguage$pandac$IR$Block$ID param0) {

return;

}

