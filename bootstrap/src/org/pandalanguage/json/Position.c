#include "org/pandalanguage/json/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$core$String* org$pandalanguage$json$Position$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$json$Position$convert$R$panda$core$String(((org$pandalanguage$json$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void org$pandalanguage$json$Position$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$json$Position$cleanup(((org$pandalanguage$json$Position$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$json$Position$class_type org$pandalanguage$json$Position$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$json$Position$convert$R$panda$core$String$shim, org$pandalanguage$json$Position$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$json$Position$wrapperclass_type org$pandalanguage$json$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$json$Position$convert$R$panda$core$String$shim, org$pandalanguage$json$Position$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, -5210778280495041410, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, -5210778280495041410, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x70\x61\x6e\x64\x61", 14, -2904814050009372044, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$json$Position$init(org$pandalanguage$json$Position* self) {
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp3, 1);
    self->line = $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp4, 1);
    self->column = $tmp4;
}
void org$pandalanguage$json$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$json$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp9;
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    panda$core$Bit $tmp7 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_line, $tmp6);
    bool $tmp5 = $tmp7.value;
    if (!$tmp5) goto $l8;
    panda$core$Int64$init$builtin_int64(&$tmp9, 0);
    panda$core$Bit $tmp10 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_column, $tmp9);
    $tmp5 = $tmp10.value;
    $l8:;
    panda$core$Bit $tmp11 = { $tmp5 };
    if ($tmp11.value) goto $l12; else goto $l13;
    $l13:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s14, (panda$core$Int64) { 15 });
    abort();
    $l12:;
    self->line = p_line;
    self->column = p_column;
}
panda$core$String* org$pandalanguage$json$Position$convert$R$panda$core$String(org$pandalanguage$json$Position self) {
    panda$core$String* $returnValue15;
    panda$core$String* $tmp16;
    panda$core$String* $tmp17;
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    panda$core$Object* $tmp24;
    panda$core$String* $tmp21 = panda$core$Int64$convert$R$panda$core$String(self.line);
    $tmp20 = $tmp21;
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, &$s22);
    $tmp19 = $tmp23;
    panda$core$Int64$wrapper* $tmp25;
    $tmp25 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp25->value = self.column;
    $tmp24 = ((panda$core$Object*) $tmp25);
    panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp19, $tmp24);
    $tmp18 = $tmp26;
    panda$core$String* $tmp28 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s27);
    $tmp17 = $tmp28;
    $tmp16 = $tmp17;
    $returnValue15 = $tmp16;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object($tmp24);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp19));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    return $returnValue15;
}
void org$pandalanguage$json$Position$cleanup(org$pandalanguage$json$Position self) {
}





