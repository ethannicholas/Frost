#include "panda/core/String/Match.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Matcher.h"
#include "panda/core/String/Index.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"


static panda$core$String $s1;
panda$core$String$Match$class_type panda$core$String$Match$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$String$Match$convert$R$panda$core$String, panda$core$String$Match$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x4d\x61\x74\x63\x68", 23, 6480045009745533488, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, 1881012283434, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void panda$core$String$Match$init$panda$core$Matcher(panda$core$String$Match* self, panda$core$Matcher* p_m) {
    panda$core$String$Index $tmp5;
    panda$core$String$Index $tmp6;
    panda$collections$Array* g7 = NULL;
    panda$collections$Array* $tmp8;
    panda$collections$Array* $tmp9;
    panda$core$Range$LTpanda$core$Int64$GT $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$String* $tmp26;
    panda$collections$ImmutableArray* $tmp34;
    panda$collections$ImmutableArray* $tmp35;
    panda$collections$ImmutableArray* $tmp36;
    self->groups = NULL;
    int $tmp4;
    {
        panda$core$Matcher$get_start$R$panda$core$String$Index(&$tmp5, p_m);
        self->start = $tmp5;
        panda$core$Matcher$get_end$R$panda$core$String$Index(&$tmp6, p_m);
        self->end = $tmp6;
        panda$collections$Array* $tmp10 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp10);
        $tmp9 = $tmp10;
        $tmp8 = $tmp9;
        g7 = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp12, p_m);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp11, ((panda$core$Int64) { 0 }), $tmp12, ((panda$core$Bit) { false }));
        int64_t $tmp14 = $tmp11.min.value;
        panda$core$Int64 i13 = { $tmp14 };
        int64_t $tmp16 = $tmp11.max.value;
        bool $tmp17 = $tmp11.inclusive.value;
        if ($tmp17) goto $l24; else goto $l25;
        $l24:;
        if ($tmp14 <= $tmp16) goto $l18; else goto $l20;
        $l25:;
        if ($tmp14 < $tmp16) goto $l18; else goto $l20;
        $l18:;
        {
            panda$core$String* $tmp27 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(p_m, i13);
            $tmp26 = $tmp27;
            panda$collections$Array$add$panda$collections$Array$T(g7, ((panda$core$Object*) $tmp26));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
        }
        $l21:;
        int64_t $tmp29 = $tmp16 - i13.value;
        if ($tmp17) goto $l30; else goto $l31;
        $l30:;
        if ((uint64_t) $tmp29 >= 1) goto $l28; else goto $l20;
        $l31:;
        if ((uint64_t) $tmp29 > 1) goto $l28; else goto $l20;
        $l28:;
        i13.value += 1;
        goto $l18;
        $l20:;
        {
            $tmp34 = self->groups;
            panda$collections$ImmutableArray* $tmp37 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(g7);
            $tmp36 = $tmp37;
            $tmp35 = $tmp36;
            self->groups = $tmp35;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) g7));
    g7 = NULL;
    switch ($tmp4) {
        case -1: goto $l38;
    }
    $l38:;
}
panda$core$String* panda$core$String$Match$convert$R$panda$core$String(panda$core$String$Match* self) {
    panda$core$String* $returnValue39;
    panda$core$String* $tmp40;
    panda$core$String* $tmp41;
    panda$core$String* $tmp42;
    panda$core$Object* $tmp44;
    panda$core$Object* $tmp45 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->groups, ((panda$core$Int64) { 0 }));
    $tmp44 = $tmp45;
    panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s43, ((panda$core$String*) $tmp44));
    $tmp42 = $tmp46;
    panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, &$s47);
    $tmp41 = $tmp48;
    $tmp40 = $tmp41;
    $returnValue39 = $tmp40;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object($tmp44);
    return $returnValue39;
}
void panda$core$String$Match$cleanup(panda$core$String$Match* self) {
    int $tmp52;
    {
    }
    $tmp52 = -1;
    goto $l50;
    $l50:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp52) {
        case -1: goto $l53;
    }
    $l53:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->groups));
}

