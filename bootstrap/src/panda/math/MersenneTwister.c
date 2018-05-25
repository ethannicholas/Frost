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
    panda$collections$Array* $tmp40;
    panda$core$Range$LTpanda$core$Int64$GT $tmp41;
    panda$collections$Array* $tmp43;
    panda$collections$Array* $tmp44;
    panda$collections$Array* $tmp45;
    panda$core$Range$LTpanda$core$Int64$GT $tmp47;
    panda$core$Object* $tmp61;
    panda$core$Object* $tmp62;
    panda$core$Object* $tmp65;
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
            panda$collections$Array* $tmp42 = panda$collections$Array$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$Array$LTpanda$collections$Array$T$GT(p_state, $tmp41);
            $tmp40 = $tmp42;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp39, ((panda$collections$ListView*) $tmp40));
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
        $tmp43 = self->mt;
        panda$collections$Array* $tmp46 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp46, ((panda$collections$ListView*) p_state));
        $tmp45 = $tmp46;
        $tmp44 = $tmp45;
        self->mt = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp47, p_state->count, ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
    int64_t $tmp49 = $tmp47.min.value;
    panda$core$Int64 i48 = { $tmp49 };
    int64_t $tmp51 = $tmp47.max.value;
    bool $tmp52 = $tmp47.inclusive.value;
    if ($tmp52) goto $l59; else goto $l60;
    $l59:;
    if ($tmp49 <= $tmp51) goto $l53; else goto $l55;
    $l60:;
    if ($tmp49 < $tmp51) goto $l53; else goto $l55;
    $l53:;
    {
        panda$core$Int64 $tmp63 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i48, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp64 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp63);
        $tmp62 = $tmp64;
        panda$core$Int64 $tmp66 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i48, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp67 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp66);
        $tmp65 = $tmp67;
        panda$core$Int32 $tmp68 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 32 }), ((panda$core$Int32) { 2 }));
        panda$core$Int32 $tmp69 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp65)->value, $tmp68);
        panda$core$Int32 $tmp70 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp62)->value, $tmp69);
        panda$core$Int32 $tmp71 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1812433253 }), $tmp70);
        panda$core$Int64 $tmp72 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp71, i48);
        panda$core$UInt32 $tmp73 = panda$core$Int64$convert$R$panda$core$UInt32($tmp72);
        panda$core$UInt32$wrapper* $tmp74;
        $tmp74 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp74->value = $tmp73;
        $tmp61 = ((panda$core$Object*) $tmp74);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp61);
        panda$core$Panda$unref$panda$core$Object($tmp61);
        panda$core$Panda$unref$panda$core$Object($tmp65);
        panda$core$Panda$unref$panda$core$Object($tmp62);
    }
    $l56:;
    int64_t $tmp76 = $tmp51 - i48.value;
    if ($tmp52) goto $l77; else goto $l78;
    $l77:;
    if ((uint64_t) $tmp76 >= 1) goto $l75; else goto $l55;
    $l78:;
    if ((uint64_t) $tmp76 > 1) goto $l75; else goto $l55;
    $l75:;
    i48.value += 1;
    goto $l53;
    $l55:;
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) self->mt));
}
void panda$math$MersenneTwister$init$panda$core$Int64(panda$math$MersenneTwister* self, panda$core$Int64 p_seed) {
    panda$collections$Array* $tmp81;
    panda$collections$Array* $tmp82;
    panda$collections$Array* $tmp83;
    panda$core$Object* $tmp85;
    panda$core$Object* $tmp89;
    panda$core$Range$LTpanda$core$Int64$GT $tmp92;
    panda$core$Object* $tmp106;
    panda$core$Object* $tmp107;
    panda$core$Object* $tmp110;
    self->mt = NULL;
    self->state = NULL;
    self->index = ((panda$core$Int64) { 624 });
    {
        $tmp81 = self->mt;
        panda$collections$Array* $tmp84 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$core$Int64($tmp84, ((panda$core$Int64) { 624 }));
        $tmp83 = $tmp84;
        $tmp82 = $tmp83;
        self->mt = $tmp82;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
    }
    panda$core$Int64 $tmp86 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(p_seed, ((panda$core$Int64) { 32 }));
    panda$core$UInt32 $tmp87 = panda$core$Int64$convert$R$panda$core$UInt32($tmp86);
    panda$core$UInt32$wrapper* $tmp88;
    $tmp88 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp88->value = $tmp87;
    $tmp85 = ((panda$core$Object*) $tmp88);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp85);
    panda$core$Panda$unref$panda$core$Object($tmp85);
    panda$core$UInt32 $tmp90 = panda$core$Int64$convert$R$panda$core$UInt32(p_seed);
    panda$core$UInt32$wrapper* $tmp91;
    $tmp91 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp91->value = $tmp90;
    $tmp89 = ((panda$core$Object*) $tmp91);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp89);
    panda$core$Panda$unref$panda$core$Object($tmp89);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 2 }), ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
    int64_t $tmp94 = $tmp92.min.value;
    panda$core$Int64 i93 = { $tmp94 };
    int64_t $tmp96 = $tmp92.max.value;
    bool $tmp97 = $tmp92.inclusive.value;
    if ($tmp97) goto $l104; else goto $l105;
    $l104:;
    if ($tmp94 <= $tmp96) goto $l98; else goto $l100;
    $l105:;
    if ($tmp94 < $tmp96) goto $l98; else goto $l100;
    $l98:;
    {
        panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i93, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp109 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp108);
        $tmp107 = $tmp109;
        panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i93, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp112 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp111);
        $tmp110 = $tmp112;
        panda$core$Int32 $tmp113 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 32 }), ((panda$core$Int32) { 2 }));
        panda$core$Int32 $tmp114 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp110)->value, $tmp113);
        panda$core$Int32 $tmp115 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp107)->value, $tmp114);
        panda$core$Int32 $tmp116 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1812433253 }), $tmp115);
        panda$core$Int64 $tmp117 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp116, i93);
        panda$core$UInt32 $tmp118 = panda$core$Int64$convert$R$panda$core$UInt32($tmp117);
        panda$core$UInt32$wrapper* $tmp119;
        $tmp119 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp119->value = $tmp118;
        $tmp106 = ((panda$core$Object*) $tmp119);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp106);
        panda$core$Panda$unref$panda$core$Object($tmp106);
        panda$core$Panda$unref$panda$core$Object($tmp110);
        panda$core$Panda$unref$panda$core$Object($tmp107);
    }
    $l101:;
    int64_t $tmp121 = $tmp96 - i93.value;
    if ($tmp97) goto $l122; else goto $l123;
    $l122:;
    if ((uint64_t) $tmp121 >= 1) goto $l120; else goto $l100;
    $l123:;
    if ((uint64_t) $tmp121 > 1) goto $l120; else goto $l100;
    $l120:;
    i93.value += 1;
    goto $l98;
    $l100:;
}
panda$collections$ListView* panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self) {
    panda$collections$ListView* $returnValue126;
    panda$collections$ListView* $tmp127;
    panda$collections$Array* $tmp128;
    panda$collections$Array* $tmp129 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp129, ((panda$collections$ListView*) self->mt));
    $tmp128 = $tmp129;
    $tmp127 = ((panda$collections$ListView*) $tmp128);
    $returnValue126 = $tmp127;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
    return $returnValue126;
}
panda$core$UInt32 panda$math$MersenneTwister$extract$R$panda$core$UInt32(panda$math$MersenneTwister* self) {
    panda$core$UInt32 y132;
    panda$core$Object* $tmp133;
    panda$core$UInt32 $returnValue146;
    panda$core$Bit $tmp131 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, ((panda$core$Int64) { 624 }));
    if ($tmp131.value) {
    {
        panda$math$MersenneTwister$twist(self);
    }
    }
    panda$core$Object* $tmp134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, self->index);
    $tmp133 = $tmp134;
    y132 = ((panda$core$UInt32$wrapper*) $tmp133)->value;
    panda$core$Panda$unref$panda$core$Object($tmp133);
    panda$core$UInt32 $tmp135 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y132, ((panda$core$UInt32) { 11 }));
    panda$core$UInt32 $tmp136 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y132, $tmp135);
    y132 = $tmp136;
    panda$core$UInt32 $tmp137 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y132, ((panda$core$UInt32) { 7 }));
    panda$core$UInt32 $tmp138 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp137, ((panda$core$UInt32) { 2636928640 }));
    panda$core$UInt32 $tmp139 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y132, $tmp138);
    y132 = $tmp139;
    panda$core$UInt32 $tmp140 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y132, ((panda$core$UInt32) { 15 }));
    panda$core$UInt32 $tmp141 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp140, ((panda$core$UInt32) { 4022730752 }));
    panda$core$UInt32 $tmp142 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y132, $tmp141);
    y132 = $tmp142;
    panda$core$UInt32 $tmp143 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y132, ((panda$core$UInt32) { 18 }));
    panda$core$UInt32 $tmp144 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y132, $tmp143);
    y132 = $tmp144;
    panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp145;
    $returnValue146 = y132;
    return $returnValue146;
}
void panda$math$MersenneTwister$twist(panda$math$MersenneTwister* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp148;
    panda$core$UInt32 y162;
    panda$core$Object* $tmp163;
    panda$core$Object* $tmp166;
    panda$core$Object* $tmp172;
    panda$core$Object* $tmp173;
    panda$collections$Array* $tmp182;
    panda$core$Int64 $tmp183;
    panda$core$Object* $tmp184;
    panda$core$Object* $tmp185;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp148, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { 624 }), ((panda$core$Bit) { false }));
    int64_t $tmp150 = $tmp148.min.value;
    panda$core$Int64 i149 = { $tmp150 };
    int64_t $tmp152 = $tmp148.max.value;
    bool $tmp153 = $tmp148.inclusive.value;
    if ($tmp153) goto $l160; else goto $l161;
    $l160:;
    if ($tmp150 <= $tmp152) goto $l154; else goto $l156;
    $l161:;
    if ($tmp150 < $tmp152) goto $l154; else goto $l156;
    $l154:;
    {
        panda$core$Object* $tmp164 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, i149);
        $tmp163 = $tmp164;
        panda$core$UInt32 $tmp165 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp163)->value, ((panda$core$UInt32) { 2147483648 }));
        panda$core$Int64 $tmp167 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i149, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp168 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp167, ((panda$core$Int64) { 624 }));
        panda$core$Object* $tmp169 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp168);
        $tmp166 = $tmp169;
        panda$core$UInt32 $tmp170 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp166)->value, ((panda$core$UInt32) { 2147483647 }));
        panda$core$UInt32 $tmp171 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp165, $tmp170);
        y162 = $tmp171;
        panda$core$Panda$unref$panda$core$Object($tmp166);
        panda$core$Panda$unref$panda$core$Object($tmp163);
        panda$core$Int64 $tmp174 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(i149, ((panda$core$Int32) { 397 }));
        panda$core$Int64 $tmp175 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp174, ((panda$core$Int64) { 624 }));
        panda$core$Object* $tmp176 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp175);
        $tmp173 = $tmp176;
        panda$core$UInt32 $tmp177 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y162, ((panda$core$UInt32) { 1 }));
        panda$core$UInt32 $tmp178 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp173)->value, $tmp177);
        panda$core$UInt32$wrapper* $tmp179;
        $tmp179 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp179->value = $tmp178;
        $tmp172 = ((panda$core$Object*) $tmp179);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self->mt, i149, $tmp172);
        panda$core$Panda$unref$panda$core$Object($tmp172);
        panda$core$Panda$unref$panda$core$Object($tmp173);
        panda$core$UInt32 $tmp180 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(y162, ((panda$core$UInt32) { 2 }));
        panda$core$Bit $tmp181 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp180, ((panda$core$UInt32) { 0 }));
        if ($tmp181.value) {
        {
            $tmp182 = self->mt;
            $tmp183 = i149;
            panda$core$Object* $tmp186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp182, $tmp183);
            $tmp185 = $tmp186;
            panda$core$UInt32 $tmp187 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp185)->value, ((panda$core$UInt32) { 2567483615 }));
            panda$core$UInt32$wrapper* $tmp188;
            $tmp188 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
            $tmp188->value = $tmp187;
            $tmp184 = ((panda$core$Object*) $tmp188);
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp182, $tmp183, $tmp184);
            panda$core$Panda$unref$panda$core$Object($tmp184);
            panda$core$Panda$unref$panda$core$Object($tmp185);
        }
        }
    }
    $l157:;
    int64_t $tmp190 = $tmp152 - i149.value;
    if ($tmp153) goto $l191; else goto $l192;
    $l191:;
    if ((uint64_t) $tmp190 >= 1) goto $l189; else goto $l156;
    $l192:;
    if ((uint64_t) $tmp190 > 1) goto $l189; else goto $l156;
    $l189:;
    i149.value += 1;
    goto $l154;
    $l156:;
    self->index = ((panda$core$Int64) { 0 });
}
panda$core$Int32 panda$math$MersenneTwister$int32$R$panda$core$Int32(panda$math$MersenneTwister* self) {
    panda$core$Int32 $returnValue195;
    panda$core$UInt32 $tmp196 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int32 $tmp197 = panda$core$UInt32$convert$R$panda$core$Int32($tmp196);
    $returnValue195 = $tmp197;
    return $returnValue195;
}
panda$core$Int64 panda$math$MersenneTwister$int64$R$panda$core$Int64(panda$math$MersenneTwister* self) {
    panda$core$Int64 $returnValue199;
    panda$core$UInt32 $tmp200 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp201 = panda$core$UInt32$convert$R$panda$core$Int64($tmp200);
    panda$core$Int64 $tmp202 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp201, ((panda$core$Int64) { 32 }));
    panda$core$UInt32 $tmp203 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp204 = panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64($tmp202, $tmp203);
    $returnValue199 = $tmp204;
    return $returnValue199;
}
void panda$math$MersenneTwister$cleanup(panda$math$MersenneTwister* self) {
    int $tmp208;
    {
    }
    $tmp208 = -1;
    goto $l206;
    $l206:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp208) {
        case -1: goto $l209;
    }
    $l209:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->mt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->state));
}

