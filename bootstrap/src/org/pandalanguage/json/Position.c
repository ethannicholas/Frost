#include "org/pandalanguage/json/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
panda$core$String* org$pandalanguage$json$Position$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$json$Position$convert$R$panda$core$String(((org$pandalanguage$json$Position$wrapper*) p0)->value);

    return result;
}
void org$pandalanguage$json$Position$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$json$Position$cleanup(((org$pandalanguage$json$Position$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$json$Position$class_type org$pandalanguage$json$Position$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$json$Position$convert$R$panda$core$String$shim, org$pandalanguage$json$Position$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$json$Position$wrapperclass_type org$pandalanguage$json$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$json$Position$convert$R$panda$core$String$shim, org$pandalanguage$json$Position$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, -5210778280495041410, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, -5210778280495041410, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x70\x61\x6e\x64\x61", 14, -2904814050009372044, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$json$Position$init(org$pandalanguage$json$Position* self) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
}
void org$pandalanguage$json$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$json$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    panda$core$Bit $tmp4 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_line, ((panda$core$Int64) { 0 }));
    bool $tmp3 = $tmp4.value;
    if (!$tmp3) goto $l5;
    panda$core$Bit $tmp6 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_column, ((panda$core$Int64) { 0 }));
    $tmp3 = $tmp6.value;
    $l5:;
    panda$core$Bit $tmp7 = { $tmp3 };
    if ($tmp7.value) goto $l8; else goto $l9;
    $l9:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s10, (panda$core$Int64) { 15 });
    abort();
    $l8:;
    self->line = p_line;
    self->column = p_column;
}
panda$core$String* org$pandalanguage$json$Position$convert$R$panda$core$String(org$pandalanguage$json$Position self) {
    panda$core$String* $returnValue11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    panda$core$String* $tmp14;
    panda$core$String* $tmp15;
    panda$core$String* $tmp16;
    panda$core$Object* $tmp20;
    panda$core$String* $tmp17 = panda$core$Int64$convert$R$panda$core$String(self.line);
    $tmp16 = $tmp17;
    panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp16, &$s18);
    $tmp15 = $tmp19;
    panda$core$Int64$wrapper* $tmp21;
    $tmp21 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp21->value = self.column;
    $tmp20 = ((panda$core$Object*) $tmp21);
    panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp15, $tmp20);
    $tmp14 = $tmp22;
    panda$core$String* $tmp24 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s23);
    $tmp13 = $tmp24;
    $tmp12 = $tmp13;
    $returnValue11 = $tmp12;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
    panda$core$Panda$unref$panda$core$Object($tmp20);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    return $returnValue11;
}
void org$pandalanguage$json$Position$cleanup(org$pandalanguage$json$Position self) {
}





