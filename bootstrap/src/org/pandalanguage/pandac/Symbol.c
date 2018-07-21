#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Equatable.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Symbol$class_type org$pandalanguage$pandac$Symbol$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Symbol$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

typedef panda$core$Bit (*$fn7)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 31, -8857975360587182364, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31", 1, 150, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x70\x61\x6e\x64\x61", 12, 3933075218527676353, NULL };

void org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Symbol* self, org$pandalanguage$pandac$Symbol$Kind p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    self->name = NULL;
    self->kind = p_kind;
    self->position = p_position;
    {
        $tmp2 = self->name;
        $tmp3 = p_name;
        self->name = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
    ITable* $tmp5 = ((panda$core$Equatable*) p_name)->$class->itable;
    while ($tmp5->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp5 = $tmp5->next;
    }
    $fn7 $tmp6 = $tmp5->methods[1];
    panda$core$Bit $tmp8 = $tmp6(((panda$core$Equatable*) p_name), ((panda$core$Equatable*) &$s4));
    if ($tmp8.value) goto $l9; else goto $l10;
    $l10:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s11, (panda$core$Int64) { 26 });
    abort();
    $l9:;
}
panda$core$Bit org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$Symbol* self) {
    panda$core$Bit $returnValue12;
    panda$core$Bit $tmp13;
    panda$core$Bit$init$builtin_bit(&$tmp13, true);
    $returnValue12 = $tmp13;
    return $returnValue12;
}
void org$pandalanguage$pandac$Symbol$cleanup(org$pandalanguage$pandac$Symbol* self) {
    int $tmp17;
    {
    }
    $tmp17 = -1;
    goto $l15;
    $l15:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp17) {
        case -1: goto $l18;
    }
    $l18:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->name));
}

