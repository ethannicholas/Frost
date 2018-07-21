#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(((org$pandalanguage$pandac$Position$wrapper*) p0)->value, ((org$pandalanguage$pandac$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(((org$pandalanguage$pandac$Position$wrapper*) p0)->value, ((org$pandalanguage$pandac$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$pandac$Position$convert$R$panda$core$String(((org$pandalanguage$pandac$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void org$pandalanguage$pandac$Position$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$Position$cleanup(((org$pandalanguage$pandac$Position$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Position$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim} };

static panda$core$String $s1;
org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Position$_panda$core$Equatable, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim, panda$core$Value$cleanup, org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$Position$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim} };

static panda$core$String $s2;
org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Position$wrapper_panda$core$Equatable, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x70\x61\x6e\x64\x61", 14, -2904814050009372044, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Position$init(org$pandalanguage$pandac$Position* self) {
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp3, 1);
    self->line = $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp4, 1);
    self->column = $tmp4;
}
void org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column) {
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
panda$core$Bit org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(org$pandalanguage$pandac$Position self, org$pandalanguage$pandac$Position p_other) {
    panda$core$Bit $returnValue15;
    panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self.line, p_other.line);
    bool $tmp16 = $tmp17.value;
    if (!$tmp16) goto $l18;
    panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self.column, p_other.column);
    $tmp16 = $tmp19.value;
    $l18:;
    panda$core$Bit $tmp20 = { $tmp16 };
    $returnValue15 = $tmp20;
    return $returnValue15;
}
panda$core$Bit org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(org$pandalanguage$pandac$Position self, org$pandalanguage$pandac$Position p_other) {
    panda$core$Bit $returnValue22;
    panda$core$Bit $tmp24 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self.line, p_other.line);
    bool $tmp23 = $tmp24.value;
    if ($tmp23) goto $l25;
    panda$core$Bit $tmp26 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self.column, p_other.column);
    $tmp23 = $tmp26.value;
    $l25:;
    panda$core$Bit $tmp27 = { $tmp23 };
    $returnValue22 = $tmp27;
    return $returnValue22;
}
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position self) {
    panda$core$String* $returnValue29;
    panda$core$String* $tmp30;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    panda$core$String* $tmp34;
    panda$core$Object* $tmp38;
    panda$core$String* $tmp35 = panda$core$Int64$convert$R$panda$core$String(self.line);
    $tmp34 = $tmp35;
    panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp34, &$s36);
    $tmp33 = $tmp37;
    panda$core$Int64$wrapper* $tmp39;
    $tmp39 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp39->value = self.column;
    $tmp38 = ((panda$core$Object*) $tmp39);
    panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp33, $tmp38);
    $tmp32 = $tmp40;
    panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, &$s41);
    $tmp31 = $tmp42;
    $tmp30 = $tmp31;
    $returnValue29 = $tmp30;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
    panda$core$Panda$unref$panda$core$Object$Q($tmp38);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
    return $returnValue29;
}
void org$pandalanguage$pandac$Position$cleanup(org$pandalanguage$pandac$Position self) {
}





