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

typedef panda$core$Int32 (*$fn31)(panda$math$Random*);
typedef panda$collections$ListView* (*$fn55)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x4d\x65\x72\x73\x65\x6e\x6e\x65\x54\x77\x69\x73\x74\x65\x72", 26, 1964359889194503994, NULL };

void panda$math$MersenneTwister$init(panda$math$MersenneTwister* self) {
    panda$core$Int64 $tmp2;
    panda$math$Random* $tmp3;
    self->mt = NULL;
    self->state = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 624);
    self->index = $tmp2;
    panda$math$Random* $tmp4 = panda$math$Random$default$R$panda$math$Random();
    $tmp3 = $tmp4;
    panda$math$MersenneTwister$init$panda$math$Random(self, $tmp3);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
}
void panda$math$MersenneTwister$init$panda$math$Random(panda$math$MersenneTwister* self, panda$math$Random* p_seed) {
    panda$core$Int64 $tmp5;
    panda$collections$Array* $tmp6;
    panda$collections$Array* $tmp7;
    panda$collections$Array* $tmp8;
    panda$core$Int64 $tmp10;
    panda$core$Range$LTpanda$core$Int64$GT $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$Int64 $tmp13;
    panda$core$Bit $tmp14;
    panda$core$Object* $tmp28;
    self->mt = NULL;
    self->state = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp5, 624);
    self->index = $tmp5;
    {
        $tmp6 = self->mt;
        panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64$init$builtin_int64(&$tmp10, 624);
        panda$collections$Array$init$panda$core$Int64($tmp9, $tmp10);
        $tmp8 = $tmp9;
        $tmp7 = $tmp8;
        self->mt = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    panda$core$Int64$init$builtin_int64(&$tmp12, 0);
    panda$core$Int64$init$builtin_int64(&$tmp13, 624);
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
        ITable* $tmp29 = p_seed->$class->itable;
        while ($tmp29->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp29 = $tmp29->next;
        }
        $fn31 $tmp30 = $tmp29->methods[1];
        panda$core$Int32 $tmp32 = $tmp30(p_seed);
        panda$core$UInt32 $tmp33 = panda$core$Int32$convert$R$panda$core$UInt32($tmp32);
        panda$core$UInt32$wrapper* $tmp34;
        $tmp34 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp34->value = $tmp33;
        $tmp28 = ((panda$core$Object*) $tmp34);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp28);
        panda$core$Panda$unref$panda$core$Object($tmp28);
    }
    $l23:;
    int64_t $tmp36 = $tmp18 - i15.value;
    if ($tmp19) goto $l37; else goto $l38;
    $l37:;
    if ((uint64_t) $tmp36 >= 1) goto $l35; else goto $l22;
    $l38:;
    if ((uint64_t) $tmp36 > 1) goto $l35; else goto $l22;
    $l35:;
    i15.value += 1;
    goto $l20;
    $l22:;
}
void panda$math$MersenneTwister$init$panda$collections$Array$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self, panda$collections$Array* p_state) {
    panda$core$Int64 $tmp41;
    panda$core$Int64 $tmp42;
    panda$collections$Array* $tmp44;
    panda$collections$Array* $tmp45;
    panda$collections$Array* $tmp46;
    panda$collections$ListView* $tmp48;
    panda$core$Range$LTpanda$core$Int64$GT $tmp49;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp51;
    panda$core$Bit $tmp52;
    panda$collections$Array* $tmp57;
    panda$collections$Array* $tmp58;
    panda$collections$Array* $tmp59;
    panda$core$Range$LTpanda$core$Int64$GT $tmp61;
    panda$core$Int64 $tmp62;
    panda$core$Bit $tmp63;
    panda$core$Object* $tmp77;
    panda$core$Int32 $tmp78;
    panda$core$Object* $tmp79;
    panda$core$Int64 $tmp80;
    panda$core$Object* $tmp83;
    panda$core$Int64 $tmp84;
    panda$core$Int32 $tmp87;
    panda$core$Int32 $tmp88;
    self->mt = NULL;
    self->state = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp41, 624);
    self->index = $tmp41;
    panda$core$Int64$init$builtin_int64(&$tmp42, 624);
    panda$core$Bit $tmp43 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_state->count, $tmp42);
    if ($tmp43.value) {
    {
        {
            $tmp44 = self->mt;
            panda$collections$Array* $tmp47 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$core$Int64$init$builtin_int64(&$tmp50, 0);
            panda$core$Int64$init$builtin_int64(&$tmp51, 624);
            panda$core$Bit$init$builtin_bit(&$tmp52, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp49, $tmp50, $tmp51, $tmp52);
            ITable* $tmp53 = ((panda$collections$ListView*) p_state)->$class->itable;
            while ($tmp53->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp53 = $tmp53->next;
            }
            $fn55 $tmp54 = $tmp53->methods[1];
            panda$collections$ListView* $tmp56 = $tmp54(((panda$collections$ListView*) p_state), $tmp49);
            $tmp48 = $tmp56;
            panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp47, $tmp48);
            $tmp46 = $tmp47;
            $tmp45 = $tmp46;
            self->mt = $tmp45;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
        }
        return;
    }
    }
    {
        $tmp57 = self->mt;
        panda$collections$Array* $tmp60 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp60, ((panda$collections$ListView*) p_state));
        $tmp59 = $tmp60;
        $tmp58 = $tmp59;
        self->mt = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
    }
    panda$core$Int64$init$builtin_int64(&$tmp62, 624);
    panda$core$Bit$init$builtin_bit(&$tmp63, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp61, p_state->count, $tmp62, $tmp63);
    int64_t $tmp65 = $tmp61.min.value;
    panda$core$Int64 i64 = { $tmp65 };
    int64_t $tmp67 = $tmp61.max.value;
    bool $tmp68 = $tmp61.inclusive.value;
    if ($tmp68) goto $l75; else goto $l76;
    $l75:;
    if ($tmp65 <= $tmp67) goto $l69; else goto $l71;
    $l76:;
    if ($tmp65 < $tmp67) goto $l69; else goto $l71;
    $l69:;
    {
        panda$core$Int32$init$builtin_int32(&$tmp78, 1812433253);
        panda$core$Int64$init$builtin_int64(&$tmp80, 1);
        panda$core$Int64 $tmp81 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i64, $tmp80);
        panda$core$Object* $tmp82 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp81);
        $tmp79 = $tmp82;
        panda$core$Int64$init$builtin_int64(&$tmp84, 1);
        panda$core$Int64 $tmp85 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i64, $tmp84);
        panda$core$Object* $tmp86 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp85);
        $tmp83 = $tmp86;
        panda$core$Int32$init$builtin_int32(&$tmp87, 32);
        panda$core$Int32$init$builtin_int32(&$tmp88, 2);
        panda$core$Int32 $tmp89 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32($tmp87, $tmp88);
        panda$core$Int32 $tmp90 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp83)->value, $tmp89);
        panda$core$Int32 $tmp91 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp79)->value, $tmp90);
        panda$core$Int32 $tmp92 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32($tmp78, $tmp91);
        panda$core$Int64 $tmp93 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp92, i64);
        panda$core$UInt32 $tmp94 = panda$core$Int64$convert$R$panda$core$UInt32($tmp93);
        panda$core$UInt32$wrapper* $tmp95;
        $tmp95 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp95->value = $tmp94;
        $tmp77 = ((panda$core$Object*) $tmp95);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp77);
        panda$core$Panda$unref$panda$core$Object($tmp77);
        panda$core$Panda$unref$panda$core$Object($tmp83);
        panda$core$Panda$unref$panda$core$Object($tmp79);
    }
    $l72:;
    int64_t $tmp97 = $tmp67 - i64.value;
    if ($tmp68) goto $l98; else goto $l99;
    $l98:;
    if ((uint64_t) $tmp97 >= 1) goto $l96; else goto $l71;
    $l99:;
    if ((uint64_t) $tmp97 > 1) goto $l96; else goto $l71;
    $l96:;
    i64.value += 1;
    goto $l69;
    $l71:;
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) self->mt));
}
void panda$math$MersenneTwister$init$panda$core$Int64(panda$math$MersenneTwister* self, panda$core$Int64 p_seed) {
    panda$core$Int64 $tmp102;
    panda$collections$Array* $tmp103;
    panda$collections$Array* $tmp104;
    panda$collections$Array* $tmp105;
    panda$core$Int64 $tmp107;
    panda$core$Object* $tmp108;
    panda$core$Int64 $tmp109;
    panda$core$Object* $tmp113;
    panda$core$Range$LTpanda$core$Int64$GT $tmp116;
    panda$core$Int64 $tmp117;
    panda$core$Int64 $tmp118;
    panda$core$Bit $tmp119;
    panda$core$Object* $tmp133;
    panda$core$Int32 $tmp134;
    panda$core$Object* $tmp135;
    panda$core$Int64 $tmp136;
    panda$core$Object* $tmp139;
    panda$core$Int64 $tmp140;
    panda$core$Int32 $tmp143;
    panda$core$Int32 $tmp144;
    self->mt = NULL;
    self->state = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp102, 624);
    self->index = $tmp102;
    {
        $tmp103 = self->mt;
        panda$collections$Array* $tmp106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64$init$builtin_int64(&$tmp107, 624);
        panda$collections$Array$init$panda$core$Int64($tmp106, $tmp107);
        $tmp105 = $tmp106;
        $tmp104 = $tmp105;
        self->mt = $tmp104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    }
    panda$core$Int64$init$builtin_int64(&$tmp109, 32);
    panda$core$Int64 $tmp110 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(p_seed, $tmp109);
    panda$core$UInt32 $tmp111 = panda$core$Int64$convert$R$panda$core$UInt32($tmp110);
    panda$core$UInt32$wrapper* $tmp112;
    $tmp112 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp112->value = $tmp111;
    $tmp108 = ((panda$core$Object*) $tmp112);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp108);
    panda$core$Panda$unref$panda$core$Object($tmp108);
    panda$core$UInt32 $tmp114 = panda$core$Int64$convert$R$panda$core$UInt32(p_seed);
    panda$core$UInt32$wrapper* $tmp115;
    $tmp115 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp115->value = $tmp114;
    $tmp113 = ((panda$core$Object*) $tmp115);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp113);
    panda$core$Panda$unref$panda$core$Object($tmp113);
    panda$core$Int64$init$builtin_int64(&$tmp117, 2);
    panda$core$Int64$init$builtin_int64(&$tmp118, 624);
    panda$core$Bit$init$builtin_bit(&$tmp119, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp116, $tmp117, $tmp118, $tmp119);
    int64_t $tmp121 = $tmp116.min.value;
    panda$core$Int64 i120 = { $tmp121 };
    int64_t $tmp123 = $tmp116.max.value;
    bool $tmp124 = $tmp116.inclusive.value;
    if ($tmp124) goto $l131; else goto $l132;
    $l131:;
    if ($tmp121 <= $tmp123) goto $l125; else goto $l127;
    $l132:;
    if ($tmp121 < $tmp123) goto $l125; else goto $l127;
    $l125:;
    {
        panda$core$Int32$init$builtin_int32(&$tmp134, 1812433253);
        panda$core$Int64$init$builtin_int64(&$tmp136, 1);
        panda$core$Int64 $tmp137 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i120, $tmp136);
        panda$core$Object* $tmp138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp137);
        $tmp135 = $tmp138;
        panda$core$Int64$init$builtin_int64(&$tmp140, 1);
        panda$core$Int64 $tmp141 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i120, $tmp140);
        panda$core$Object* $tmp142 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp141);
        $tmp139 = $tmp142;
        panda$core$Int32$init$builtin_int32(&$tmp143, 32);
        panda$core$Int32$init$builtin_int32(&$tmp144, 2);
        panda$core$Int32 $tmp145 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32($tmp143, $tmp144);
        panda$core$Int32 $tmp146 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp139)->value, $tmp145);
        panda$core$Int32 $tmp147 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp135)->value, $tmp146);
        panda$core$Int32 $tmp148 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32($tmp134, $tmp147);
        panda$core$Int64 $tmp149 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp148, i120);
        panda$core$UInt32 $tmp150 = panda$core$Int64$convert$R$panda$core$UInt32($tmp149);
        panda$core$UInt32$wrapper* $tmp151;
        $tmp151 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp151->value = $tmp150;
        $tmp133 = ((panda$core$Object*) $tmp151);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp133);
        panda$core$Panda$unref$panda$core$Object($tmp133);
        panda$core$Panda$unref$panda$core$Object($tmp139);
        panda$core$Panda$unref$panda$core$Object($tmp135);
    }
    $l128:;
    int64_t $tmp153 = $tmp123 - i120.value;
    if ($tmp124) goto $l154; else goto $l155;
    $l154:;
    if ((uint64_t) $tmp153 >= 1) goto $l152; else goto $l127;
    $l155:;
    if ((uint64_t) $tmp153 > 1) goto $l152; else goto $l127;
    $l152:;
    i120.value += 1;
    goto $l125;
    $l127:;
}
panda$collections$ListView* panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self) {
    panda$collections$ListView* $returnValue158;
    panda$collections$ListView* $tmp159;
    panda$collections$Array* $tmp160;
    panda$collections$Array* $tmp161 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT($tmp161, ((panda$collections$ListView*) self->mt));
    $tmp160 = $tmp161;
    $tmp159 = ((panda$collections$ListView*) $tmp160);
    $returnValue158 = $tmp159;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
    return $returnValue158;
}
panda$core$UInt32 panda$math$MersenneTwister$extract$R$panda$core$UInt32(panda$math$MersenneTwister* self) {
    panda$core$Int64 $tmp163;
    panda$core$UInt32 y165;
    panda$core$Object* $tmp166;
    panda$core$UInt32 $tmp168;
    panda$core$UInt32 $tmp171;
    panda$core$UInt32 $tmp173;
    panda$core$UInt32 $tmp176;
    panda$core$UInt32 $tmp178;
    panda$core$UInt32 $tmp181;
    panda$core$Int64 $tmp184;
    panda$core$UInt32 $returnValue186;
    panda$core$Int64$init$builtin_int64(&$tmp163, 624);
    panda$core$Bit $tmp164 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, $tmp163);
    if ($tmp164.value) {
    {
        panda$math$MersenneTwister$twist(self);
    }
    }
    panda$core$Object* $tmp167 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, self->index);
    $tmp166 = $tmp167;
    y165 = ((panda$core$UInt32$wrapper*) $tmp166)->value;
    panda$core$Panda$unref$panda$core$Object($tmp166);
    panda$core$UInt32$init$builtin_uint32(&$tmp168, 11);
    panda$core$UInt32 $tmp169 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp168);
    panda$core$UInt32 $tmp170 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp169);
    y165 = $tmp170;
    panda$core$UInt32$init$builtin_uint32(&$tmp171, 7);
    panda$core$UInt32 $tmp172 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp171);
    panda$core$UInt32$init$builtin_uint32(&$tmp173, 2636928640);
    panda$core$UInt32 $tmp174 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp172, $tmp173);
    panda$core$UInt32 $tmp175 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp174);
    y165 = $tmp175;
    panda$core$UInt32$init$builtin_uint32(&$tmp176, 15);
    panda$core$UInt32 $tmp177 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp176);
    panda$core$UInt32$init$builtin_uint32(&$tmp178, 4022730752);
    panda$core$UInt32 $tmp179 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp177, $tmp178);
    panda$core$UInt32 $tmp180 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp179);
    y165 = $tmp180;
    panda$core$UInt32$init$builtin_uint32(&$tmp181, 18);
    panda$core$UInt32 $tmp182 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp181);
    panda$core$UInt32 $tmp183 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y165, $tmp182);
    y165 = $tmp183;
    panda$core$Int64$init$builtin_int64(&$tmp184, 1);
    panda$core$Int64 $tmp185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp184);
    self->index = $tmp185;
    $returnValue186 = y165;
    return $returnValue186;
}
void panda$math$MersenneTwister$twist(panda$math$MersenneTwister* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp188;
    panda$core$Int64 $tmp189;
    panda$core$Int64 $tmp190;
    panda$core$Bit $tmp191;
    panda$core$UInt32 y205;
    panda$core$Object* $tmp206;
    panda$core$UInt32 $tmp208;
    panda$core$Object* $tmp210;
    panda$core$Int64 $tmp211;
    panda$core$Int64 $tmp213;
    panda$core$UInt32 $tmp216;
    panda$core$Object* $tmp219;
    panda$core$Object* $tmp220;
    panda$core$Int32 $tmp221;
    panda$core$Int64 $tmp223;
    panda$core$UInt32 $tmp226;
    panda$core$UInt32 $tmp230;
    panda$core$UInt32 $tmp232;
    panda$collections$Array* $tmp234;
    panda$core$Int64 $tmp235;
    panda$core$Object* $tmp236;
    panda$core$Object* $tmp237;
    panda$core$UInt32 $tmp239;
    panda$core$Int64 $tmp248;
    panda$core$Int64$init$builtin_int64(&$tmp189, 0);
    panda$core$Int64$init$builtin_int64(&$tmp190, 624);
    panda$core$Bit$init$builtin_bit(&$tmp191, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp188, $tmp189, $tmp190, $tmp191);
    int64_t $tmp193 = $tmp188.min.value;
    panda$core$Int64 i192 = { $tmp193 };
    int64_t $tmp195 = $tmp188.max.value;
    bool $tmp196 = $tmp188.inclusive.value;
    if ($tmp196) goto $l203; else goto $l204;
    $l203:;
    if ($tmp193 <= $tmp195) goto $l197; else goto $l199;
    $l204:;
    if ($tmp193 < $tmp195) goto $l197; else goto $l199;
    $l197:;
    {
        panda$core$Object* $tmp207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, i192);
        $tmp206 = $tmp207;
        panda$core$UInt32$init$builtin_uint32(&$tmp208, 2147483648);
        panda$core$UInt32 $tmp209 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp206)->value, $tmp208);
        panda$core$Int64$init$builtin_int64(&$tmp211, 1);
        panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i192, $tmp211);
        panda$core$Int64$init$builtin_int64(&$tmp213, 624);
        panda$core$Int64 $tmp214 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp212, $tmp213);
        panda$core$Object* $tmp215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp214);
        $tmp210 = $tmp215;
        panda$core$UInt32$init$builtin_uint32(&$tmp216, 2147483647);
        panda$core$UInt32 $tmp217 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp210)->value, $tmp216);
        panda$core$UInt32 $tmp218 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp209, $tmp217);
        y205 = $tmp218;
        panda$core$Panda$unref$panda$core$Object($tmp210);
        panda$core$Panda$unref$panda$core$Object($tmp206);
        panda$core$Int32$init$builtin_int32(&$tmp221, 397);
        panda$core$Int64 $tmp222 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(i192, $tmp221);
        panda$core$Int64$init$builtin_int64(&$tmp223, 624);
        panda$core$Int64 $tmp224 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp222, $tmp223);
        panda$core$Object* $tmp225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp224);
        $tmp220 = $tmp225;
        panda$core$UInt32$init$builtin_uint32(&$tmp226, 1);
        panda$core$UInt32 $tmp227 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y205, $tmp226);
        panda$core$UInt32 $tmp228 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp220)->value, $tmp227);
        panda$core$UInt32$wrapper* $tmp229;
        $tmp229 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp229->value = $tmp228;
        $tmp219 = ((panda$core$Object*) $tmp229);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self->mt, i192, $tmp219);
        panda$core$Panda$unref$panda$core$Object($tmp219);
        panda$core$Panda$unref$panda$core$Object($tmp220);
        panda$core$UInt32$init$builtin_uint32(&$tmp230, 2);
        panda$core$UInt32 $tmp231 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(y205, $tmp230);
        panda$core$UInt32$init$builtin_uint32(&$tmp232, 0);
        panda$core$Bit $tmp233 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp231, $tmp232);
        if ($tmp233.value) {
        {
            $tmp234 = self->mt;
            $tmp235 = i192;
            panda$core$Object* $tmp238 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp234, $tmp235);
            $tmp237 = $tmp238;
            panda$core$UInt32$init$builtin_uint32(&$tmp239, 2567483615);
            panda$core$UInt32 $tmp240 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp237)->value, $tmp239);
            panda$core$UInt32$wrapper* $tmp241;
            $tmp241 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
            $tmp241->value = $tmp240;
            $tmp236 = ((panda$core$Object*) $tmp241);
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp234, $tmp235, $tmp236);
            panda$core$Panda$unref$panda$core$Object($tmp236);
            panda$core$Panda$unref$panda$core$Object($tmp237);
        }
        }
    }
    $l200:;
    int64_t $tmp243 = $tmp195 - i192.value;
    if ($tmp196) goto $l244; else goto $l245;
    $l244:;
    if ((uint64_t) $tmp243 >= 1) goto $l242; else goto $l199;
    $l245:;
    if ((uint64_t) $tmp243 > 1) goto $l242; else goto $l199;
    $l242:;
    i192.value += 1;
    goto $l197;
    $l199:;
    panda$core$Int64$init$builtin_int64(&$tmp248, 0);
    self->index = $tmp248;
}
panda$core$Int32 panda$math$MersenneTwister$int32$R$panda$core$Int32(panda$math$MersenneTwister* self) {
    panda$core$Int32 $returnValue249;
    panda$core$UInt32 $tmp250 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int32 $tmp251 = panda$core$UInt32$convert$R$panda$core$Int32($tmp250);
    $returnValue249 = $tmp251;
    return $returnValue249;
}
panda$core$Int64 panda$math$MersenneTwister$int64$R$panda$core$Int64(panda$math$MersenneTwister* self) {
    panda$core$Int64 $returnValue253;
    panda$core$Int64 $tmp256;
    panda$core$UInt32 $tmp254 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp255 = panda$core$UInt32$convert$R$panda$core$Int64($tmp254);
    panda$core$Int64$init$builtin_int64(&$tmp256, 32);
    panda$core$Int64 $tmp257 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp255, $tmp256);
    panda$core$UInt32 $tmp258 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp259 = panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64($tmp257, $tmp258);
    $returnValue253 = $tmp259;
    return $returnValue253;
}
void panda$math$MersenneTwister$cleanup(panda$math$MersenneTwister* self) {
    int $tmp263;
    {
    }
    $tmp263 = -1;
    goto $l261;
    $l261:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp263) {
        case -1: goto $l264;
    }
    $l264:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->mt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->state));
}

