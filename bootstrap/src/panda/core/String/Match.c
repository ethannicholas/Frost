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
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x74\x63\x68\x28", 6, 1881012283434, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void panda$core$String$Match$init$panda$core$Matcher(panda$core$String$Match* self, panda$core$Matcher* p_m) {
    panda$core$String$Index $tmp5;
    panda$core$String$Index $tmp6;
    panda$collections$Array* g7 = NULL;
    panda$collections$Array* $tmp8;
    panda$collections$Array* $tmp9;
    panda$core$Range$LTpanda$core$Int64$GT $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$Int64 $tmp13;
    panda$core$Bit $tmp14;
    panda$core$String* $tmp28;
    panda$collections$ImmutableArray* $tmp36;
    panda$collections$ImmutableArray* $tmp37;
    panda$collections$ImmutableArray* $tmp38;
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
        panda$core$Int64$init$builtin_int64(&$tmp12, 0);
        panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp13, p_m);
        panda$core$Bit$init$builtin_bit(&$tmp14, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp11, $tmp12, $tmp13, $tmp14);
        int64_t $tmp16 = $tmp11.min.value;
        panda$core$Int64 i15 = { $tmp16 };
        int64_t $tmp18 = $tmp11.max.value;
        bool $tmp19 = $tmp11.inclusive.value;
        if ($tmp19) goto $l26; else goto $l27;
        $l26:;
        if ($tmp16 <= $tmp18) goto $l20; else goto $l22;
        $l27:;
        if ($tmp16 < $tmp18) goto $l20; else goto $l22;
        $l20:;
        {
            panda$core$String* $tmp29 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String(p_m, i15);
            $tmp28 = $tmp29;
            panda$collections$Array$add$panda$collections$Array$T(g7, ((panda$core$Object*) $tmp28));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        }
        $l23:;
        int64_t $tmp31 = $tmp18 - i15.value;
        if ($tmp19) goto $l32; else goto $l33;
        $l32:;
        if ((uint64_t) $tmp31 >= 1) goto $l30; else goto $l22;
        $l33:;
        if ((uint64_t) $tmp31 > 1) goto $l30; else goto $l22;
        $l30:;
        i15.value += 1;
        goto $l20;
        $l22:;
        {
            $tmp36 = self->groups;
            panda$collections$ImmutableArray* $tmp39 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(g7);
            $tmp38 = $tmp39;
            $tmp37 = $tmp38;
            self->groups = $tmp37;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        }
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) g7));
    g7 = NULL;
    switch ($tmp4) {
        case -1: goto $l40;
    }
    $l40:;
}
panda$core$String* panda$core$String$Match$convert$R$panda$core$String(panda$core$String$Match* self) {
    panda$core$String* $returnValue41;
    panda$core$String* $tmp42;
    panda$core$String* $tmp43;
    panda$core$String* $tmp44;
    panda$core$Object* $tmp46;
    panda$core$Int64 $tmp47;
    panda$core$Int64$init$builtin_int64(&$tmp47, 0);
    panda$core$Object* $tmp48 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->groups, $tmp47);
    $tmp46 = $tmp48;
    panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s45, ((panda$core$String*) $tmp46));
    $tmp44 = $tmp49;
    panda$core$String* $tmp51 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp44, &$s50);
    $tmp43 = $tmp51;
    $tmp42 = $tmp43;
    $returnValue41 = $tmp42;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    panda$core$Panda$unref$panda$core$Object($tmp46);
    return $returnValue41;
}
void panda$core$String$Match$cleanup(panda$core$String$Match* self) {
    int $tmp55;
    {
    }
    $tmp55 = -1;
    goto $l53;
    $l53:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp55) {
        case -1: goto $l56;
    }
    $l56:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->groups));
}

