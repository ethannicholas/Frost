#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"

panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String$wrappershim(org$pandalanguage$pandac$Position$wrapper* self) {
    return org$pandalanguage$pandac$Position$convert$R$panda$core$String(self->value);
}
void org$pandalanguage$pandac$Position$cleanup$wrappershim(org$pandalanguage$pandac$Position$wrapper* self) {
    org$pandalanguage$pandac$Position$cleanup(self->value);
}

static panda$core$String $s1;
org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$pandac$Position$convert$R$panda$core$String, org$pandalanguage$pandac$Position$cleanup} };

static panda$core$String $s2;
org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$wrappershim, org$pandalanguage$pandac$Position$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$Position$init(org$pandalanguage$pandac$Position* self) {
    self->line = ((panda$core$Int64) { 1 });
    self->column = ((panda$core$Int64) { 1 });
}
void org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(org$pandalanguage$pandac$Position* self, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    panda$core$Bit $tmp4 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_line, ((panda$core$Int64) { 0 }));
    bool $tmp3 = $tmp4.value;
    if (!$tmp3) goto $l5;
    panda$core$Bit $tmp6 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(p_column, ((panda$core$Int64) { 0 }));
    $tmp3 = $tmp6.value;
    $l5:;
    panda$core$Bit $tmp7 = { $tmp3 };
    PANDA_ASSERT($tmp7.value);
    self->line = p_line;
    self->column = p_column;
}
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position self) {
    panda$core$String* $finallyReturn7;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    panda$core$Object* $tmp17;
    panda$core$String* $tmp14 = panda$core$Int64$convert$R$panda$core$String(self.line);
    $tmp13 = $tmp14;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s15);
    $tmp12 = $tmp16;
    panda$core$Int64$wrapper* $tmp18;
    $tmp18 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp18->value = self.column;
    $tmp17 = ((panda$core$Object*) $tmp18);
    panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp12, $tmp17);
    $tmp11 = $tmp19;
    panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s20);
    $tmp10 = $tmp21;
    $tmp9 = $tmp10;
    $finallyReturn7 = $tmp9;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object($tmp17);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    return $finallyReturn7;
}
void org$pandalanguage$pandac$Position$cleanup(org$pandalanguage$pandac$Position self) {
}

