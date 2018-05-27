#include "panda/math/MersenneTwister.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/Random.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt32.h"
#include "panda/collections/ListView.h"
#include "panda/io/Console.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$MersenneTwister$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$MersenneTwister$class_type panda$math$MersenneTwister$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$MersenneTwister$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$math$MersenneTwister$cleanup, panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT, panda$math$MersenneTwister$extract$R$panda$core$UInt32, panda$math$MersenneTwister$twist, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64} };

typedef panda$core$Int32 (*$fn25)(panda$math$Random*);
typedef panda$collections$ListView* (*$fn44)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x4d\x65\x72\x73\x65\x6e\x6e\x65\x54\x77\x69\x73\x74\x65\x72", 26, 1964359889194503994, NULL };

void panda$math$MersenneTwister$init(panda$math$MersenneTwister* self) {
    panda$math$Random* $tmp2;
    self->mt = NULL;
    self->state = NULL;
    self->index = ((panda$core$Int64) { 624 });
    panda$math$Random* $tmp3 = panda$math$Random$default$R$panda$math$Random();
    $tmp2 = $tmp3;
    panda$math$MersenneTwister$init$panda$math$Random(self, $tmp2);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
}
void panda$math$MersenneTwister$init$panda$math$Random(panda$math$MersenneTwister* self, panda$math$Random* p_seed) {
    panda$collections$Array* $tmp4;
    panda$collections$Array* $tmp5;
    panda$collections$Array* $tmp6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Object* $tmp22;
    self->mt = NULL;
    self->state = NULL;
    self->index = ((panda$core$Int64) { 624 });
    {
        $tmp4 = self->mt;
        panda$collections$Array* $tmp7 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$core$Int64($tmp7, ((panda$core$Int64) { 624 }));
        $tmp6 = $tmp7;
        $tmp5 = $tmp6;
        self->mt = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp8, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
    int64_t $tmp10 = $tmp8.min.value;
    panda$core$Int64 i9 = { $tmp10 };
    int64_t $tmp12 = $tmp8.max.value;
    bool $tmp13 = $tmp8.inclusive.value;
    if ($tmp13) goto $l20; else goto $l21;
    $l20:;
    if ($tmp10 <= $tmp12) goto $l14; else goto $l16;
    $l21:;
    if ($tmp10 < $tmp12) goto $l14; else goto $l16;
    $l14:;
    {
        ITable* $tmp23 = p_seed->$class->itable;
        while ($tmp23->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp23 = $tmp23->next;
        }
        $fn25 $tmp24 = $tmp23->methods[1];
        panda$core$Int32 $tmp26 = $tmp24(p_seed);
        panda$core$UInt32 $tmp27 = panda$core$Int32$convert$R$panda$core$UInt32($tmp26);
        panda$core$UInt32$wrapper* $tmp28;
        $tmp28 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp28->value = $tmp27;
        $tmp22 = ((panda$core$Object*) $tmp28);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp22);
        panda$core$Panda$unref$panda$core$Object($tmp22);
    }
    $l17:;
    int64_t $tmp30 = $tmp12 - i9.value;
    if ($tmp13) goto $l31; else goto $l32;
    $l31:;
    if ((uint64_t) $tmp30 >= 1) goto $l29; else goto $l16;
    $l32:;
    if ((uint64_t) $tmp30 > 1) goto $l29; else goto $l16;
    $l29:;
    i9.value += 1;
    goto $l14;
    $l16:;
}
void panda$math$MersenneTwister$init$panda$collections$Array$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self, panda$collections$Array* p_state) {
    panda$collections$Array* $tmp36;
    panda$collections$Array* $tmp37;
    panda$collections$Array* $tmp38;
    panda$collections$ListView* $tmp40;
    panda$core$Range$LTpanda$core$Int64$GT $tmp41;
    panda$collections$Array* $tmp46;
    panda$collections$Array* $tmp47;
    panda$collections$Array* $tmp48;
    panda$core$Range$LTpanda$core$Int64$GT $tmp50;
    panda$core$Object* $tmp64;
    panda$core$Object* $tmp65;
    panda$core$Object* $tmp68;
    self->mt = NULL;
    self->state = NULL;
    self->index = ((panda$core$Int64) { 624 });
    panda$core$Bit $tmp35 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_state->count, ((panda$core$Int64) { 624 }));
    if ($tmp35.value) {
    {
        {
            $tmp36 = self->mt;
            panda$collections$Array* $tmp39 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp41, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
            ITable* $tmp42 = ((panda$collections$ListView*) p_state)->$class->itable;
            while ($tmp42->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp42 = $tmp42->next;
            }
            $fn44 $tmp43 = $tmp42->methods[1];
            panda$collections$ListView* $tmp45 = $tmp43(((panda$collections$ListView*) p_state), $tmp41);
            $tmp40 = $tmp45;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp39, $tmp40);
            $tmp38 = $tmp39;
            $tmp37 = $tmp38;
            self->mt = $tmp37;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        }
        return;
    }
    }
    {
        $tmp46 = self->mt;
        panda$collections$Array* $tmp49 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp49, ((panda$collections$ListView*) p_state));
        $tmp48 = $tmp49;
        $tmp47 = $tmp48;
        self->mt = $tmp47;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp50, p_state->count, ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
    int64_t $tmp52 = $tmp50.min.value;
    panda$core$Int64 i51 = { $tmp52 };
    int64_t $tmp54 = $tmp50.max.value;
    bool $tmp55 = $tmp50.inclusive.value;
    if ($tmp55) goto $l62; else goto $l63;
    $l62:;
    if ($tmp52 <= $tmp54) goto $l56; else goto $l58;
    $l63:;
    if ($tmp52 < $tmp54) goto $l56; else goto $l58;
    $l56:;
    {
        panda$core$Int64 $tmp66 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i51, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp67 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp66);
        $tmp65 = $tmp67;
        panda$core$Int64 $tmp69 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i51, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp70 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp69);
        $tmp68 = $tmp70;
        panda$core$Int32 $tmp71 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 32 }), ((panda$core$Int32) { 2 }));
        panda$core$Int32 $tmp72 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp68)->value, $tmp71);
        panda$core$Int32 $tmp73 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp65)->value, $tmp72);
        panda$core$Int32 $tmp74 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1812433253 }), $tmp73);
        panda$core$Int64 $tmp75 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp74, i51);
        panda$core$UInt32 $tmp76 = panda$core$Int64$convert$R$panda$core$UInt32($tmp75);
        panda$core$UInt32$wrapper* $tmp77;
        $tmp77 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp77->value = $tmp76;
        $tmp64 = ((panda$core$Object*) $tmp77);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp64);
        panda$core$Panda$unref$panda$core$Object($tmp64);
        panda$core$Panda$unref$panda$core$Object($tmp68);
        panda$core$Panda$unref$panda$core$Object($tmp65);
    }
    $l59:;
    int64_t $tmp79 = $tmp54 - i51.value;
    if ($tmp55) goto $l80; else goto $l81;
    $l80:;
    if ((uint64_t) $tmp79 >= 1) goto $l78; else goto $l58;
    $l81:;
    if ((uint64_t) $tmp79 > 1) goto $l78; else goto $l58;
    $l78:;
    i51.value += 1;
    goto $l56;
    $l58:;
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) self->mt));
}
void panda$math$MersenneTwister$init$panda$core$Int64(panda$math$MersenneTwister* self, panda$core$Int64 p_seed) {
    panda$collections$Array* $tmp84;
    panda$collections$Array* $tmp85;
    panda$collections$Array* $tmp86;
    panda$core$Object* $tmp88;
    panda$core$Object* $tmp92;
    panda$core$Range$LTpanda$core$Int64$GT $tmp95;
    panda$core$Object* $tmp109;
    panda$core$Object* $tmp110;
    panda$core$Object* $tmp113;
    self->mt = NULL;
    self->state = NULL;
    self->index = ((panda$core$Int64) { 624 });
    {
        $tmp84 = self->mt;
        panda$collections$Array* $tmp87 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$core$Int64($tmp87, ((panda$core$Int64) { 624 }));
        $tmp86 = $tmp87;
        $tmp85 = $tmp86;
        self->mt = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    }
    panda$core$Int64 $tmp89 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(p_seed, ((panda$core$Int64) { 32 }));
    panda$core$UInt32 $tmp90 = panda$core$Int64$convert$R$panda$core$UInt32($tmp89);
    panda$core$UInt32$wrapper* $tmp91;
    $tmp91 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp91->value = $tmp90;
    $tmp88 = ((panda$core$Object*) $tmp91);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp88);
    panda$core$Panda$unref$panda$core$Object($tmp88);
    panda$core$UInt32 $tmp93 = panda$core$Int64$convert$R$panda$core$UInt32(p_seed);
    panda$core$UInt32$wrapper* $tmp94;
    $tmp94 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp94->value = $tmp93;
    $tmp92 = ((panda$core$Object*) $tmp94);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp92);
    panda$core$Panda$unref$panda$core$Object($tmp92);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp95, ((panda$core$Int64) { 2 }), ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
    int64_t $tmp97 = $tmp95.min.value;
    panda$core$Int64 i96 = { $tmp97 };
    int64_t $tmp99 = $tmp95.max.value;
    bool $tmp100 = $tmp95.inclusive.value;
    if ($tmp100) goto $l107; else goto $l108;
    $l107:;
    if ($tmp97 <= $tmp99) goto $l101; else goto $l103;
    $l108:;
    if ($tmp97 < $tmp99) goto $l101; else goto $l103;
    $l101:;
    {
        panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i96, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp111);
        $tmp110 = $tmp112;
        panda$core$Int64 $tmp114 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i96, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp115 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp114);
        $tmp113 = $tmp115;
        panda$core$Int32 $tmp116 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 32 }), ((panda$core$Int32) { 2 }));
        panda$core$Int32 $tmp117 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp113)->value, $tmp116);
        panda$core$Int32 $tmp118 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp110)->value, $tmp117);
        panda$core$Int32 $tmp119 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1812433253 }), $tmp118);
        panda$core$Int64 $tmp120 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp119, i96);
        panda$core$UInt32 $tmp121 = panda$core$Int64$convert$R$panda$core$UInt32($tmp120);
        panda$core$UInt32$wrapper* $tmp122;
        $tmp122 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp122->value = $tmp121;
        $tmp109 = ((panda$core$Object*) $tmp122);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp109);
        panda$core$Panda$unref$panda$core$Object($tmp109);
        panda$core$Panda$unref$panda$core$Object($tmp113);
        panda$core$Panda$unref$panda$core$Object($tmp110);
    }
    $l104:;
    int64_t $tmp124 = $tmp99 - i96.value;
    if ($tmp100) goto $l125; else goto $l126;
    $l125:;
    if ((uint64_t) $tmp124 >= 1) goto $l123; else goto $l103;
    $l126:;
    if ((uint64_t) $tmp124 > 1) goto $l123; else goto $l103;
    $l123:;
    i96.value += 1;
    goto $l101;
    $l103:;
}
panda$collections$ListView* panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self) {
    panda$collections$ListView* $returnValue129;
    panda$collections$ListView* $tmp130;
    panda$collections$Array* $tmp131;
    panda$collections$Array* $tmp132 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp132, ((panda$collections$ListView*) self->mt));
    $tmp131 = $tmp132;
    $tmp130 = ((panda$collections$ListView*) $tmp131);
    $returnValue129 = $tmp130;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    return $returnValue129;
}
panda$core$UInt32 panda$math$MersenneTwister$extract$R$panda$core$UInt32(panda$math$MersenneTwister* self) {
    panda$core$UInt32 y135;
    panda$core$Object* $tmp136;
    panda$core$UInt32 $returnValue149;
    panda$core$Bit $tmp134 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, ((panda$core$Int64) { 624 }));
    if ($tmp134.value) {
    {
        panda$math$MersenneTwister$twist(self);
    }
    }
    panda$core$Object* $tmp137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, self->index);
    $tmp136 = $tmp137;
    y135 = ((panda$core$UInt32$wrapper*) $tmp136)->value;
    panda$core$Panda$unref$panda$core$Object($tmp136);
    panda$core$UInt32 $tmp138 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y135, ((panda$core$UInt32) { 11 }));
    panda$core$UInt32 $tmp139 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y135, $tmp138);
    y135 = $tmp139;
    panda$core$UInt32 $tmp140 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y135, ((panda$core$UInt32) { 7 }));
    panda$core$UInt32 $tmp141 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp140, ((panda$core$UInt32) { 2636928640 }));
    panda$core$UInt32 $tmp142 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y135, $tmp141);
    y135 = $tmp142;
    panda$core$UInt32 $tmp143 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y135, ((panda$core$UInt32) { 15 }));
    panda$core$UInt32 $tmp144 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp143, ((panda$core$UInt32) { 4022730752 }));
    panda$core$UInt32 $tmp145 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y135, $tmp144);
    y135 = $tmp145;
    panda$core$UInt32 $tmp146 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y135, ((panda$core$UInt32) { 18 }));
    panda$core$UInt32 $tmp147 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y135, $tmp146);
    y135 = $tmp147;
    panda$core$Int64 $tmp148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp148;
    $returnValue149 = y135;
    return $returnValue149;
}
void panda$math$MersenneTwister$twist(panda$math$MersenneTwister* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp151;
    panda$core$UInt32 y165;
    panda$core$Object* $tmp166;
    panda$core$Object* $tmp169;
    panda$core$Object* $tmp175;
    panda$core$Object* $tmp176;
    panda$collections$Array* $tmp185;
    panda$core$Int64 $tmp186;
    panda$core$Object* $tmp187;
    panda$core$Object* $tmp188;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp151, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
    int64_t $tmp153 = $tmp151.min.value;
    panda$core$Int64 i152 = { $tmp153 };
    int64_t $tmp155 = $tmp151.max.value;
    bool $tmp156 = $tmp151.inclusive.value;
    if ($tmp156) goto $l163; else goto $l164;
    $l163:;
    if ($tmp153 <= $tmp155) goto $l157; else goto $l159;
    $l164:;
    if ($tmp153 < $tmp155) goto $l157; else goto $l159;
    $l157:;
    {
        panda$core$Object* $tmp167 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, i152);
        $tmp166 = $tmp167;
        panda$core$UInt32 $tmp168 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp166)->value, ((panda$core$UInt32) { 2147483648 }));
        panda$core$Int64 $tmp170 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i152, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp171 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp170, ((panda$core$Int64) { 624 }));
        panda$core$Object* $tmp172 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp171);
        $tmp169 = $tmp172;
        panda$core$UInt32 $tmp173 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp169)->value, ((panda$core$UInt32) { 2147483647 }));
        panda$core$UInt32 $tmp174 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp168, $tmp173);
        y165 = $tmp174;
        panda$core$Panda$unref$panda$core$Object($tmp169);
        panda$core$Panda$unref$panda$core$Object($tmp166);
        panda$core$Int64 $tmp177 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(i152, ((panda$core$Int32) { 397 }));
        panda$core$Int64 $tmp178 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp177, ((panda$core$Int64) { 624 }));
        panda$core$Object* $tmp179 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp178);
        $tmp176 = $tmp179;
        panda$core$UInt32 $tmp180 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y165, ((panda$core$UInt32) { 1 }));
        panda$core$UInt32 $tmp181 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp176)->value, $tmp180);
        panda$core$UInt32$wrapper* $tmp182;
        $tmp182 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp182->value = $tmp181;
        $tmp175 = ((panda$core$Object*) $tmp182);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self->mt, i152, $tmp175);
        panda$core$Panda$unref$panda$core$Object($tmp175);
        panda$core$Panda$unref$panda$core$Object($tmp176);
        panda$core$UInt32 $tmp183 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(y165, ((panda$core$UInt32) { 2 }));
        panda$core$Bit $tmp184 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp183, ((panda$core$UInt32) { 0 }));
        if ($tmp184.value) {
        {
            $tmp185 = self->mt;
            $tmp186 = i152;
            panda$core$Object* $tmp189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp185, $tmp186);
            $tmp188 = $tmp189;
            panda$core$UInt32 $tmp190 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp188)->value, ((panda$core$UInt32) { 2567483615 }));
            panda$core$UInt32$wrapper* $tmp191;
            $tmp191 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
            $tmp191->value = $tmp190;
            $tmp187 = ((panda$core$Object*) $tmp191);
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp185, $tmp186, $tmp187);
            panda$core$Panda$unref$panda$core$Object($tmp187);
            panda$core$Panda$unref$panda$core$Object($tmp188);
        }
        }
    }
    $l160:;
    int64_t $tmp193 = $tmp155 - i152.value;
    if ($tmp156) goto $l194; else goto $l195;
    $l194:;
    if ((uint64_t) $tmp193 >= 1) goto $l192; else goto $l159;
    $l195:;
    if ((uint64_t) $tmp193 > 1) goto $l192; else goto $l159;
    $l192:;
    i152.value += 1;
    goto $l157;
    $l159:;
    self->index = ((panda$core$Int64) { 0 });
}
panda$core$Int32 panda$math$MersenneTwister$int32$R$panda$core$Int32(panda$math$MersenneTwister* self) {
    panda$core$Int32 $returnValue198;
    panda$core$UInt32 $tmp199 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int32 $tmp200 = panda$core$UInt32$convert$R$panda$core$Int32($tmp199);
    $returnValue198 = $tmp200;
    return $returnValue198;
}
panda$core$Int64 panda$math$MersenneTwister$int64$R$panda$core$Int64(panda$math$MersenneTwister* self) {
    panda$core$Int64 $returnValue202;
    panda$core$UInt32 $tmp203 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp204 = panda$core$UInt32$convert$R$panda$core$Int64($tmp203);
    panda$core$Int64 $tmp205 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp204, ((panda$core$Int64) { 32 }));
    panda$core$UInt32 $tmp206 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp207 = panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64($tmp205, $tmp206);
    $returnValue202 = $tmp207;
    return $returnValue202;
}
void panda$math$MersenneTwister$cleanup(panda$math$MersenneTwister* self) {
    int $tmp211;
    {
    }
    $tmp211 = -1;
    goto $l209;
    $l209:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp211) {
        case -1: goto $l212;
    }
    $l212:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->mt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->state));
}

