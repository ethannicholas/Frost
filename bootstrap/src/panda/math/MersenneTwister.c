#include "panda/math/MersenneTwister.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/Random.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt32.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/io/Console.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$MersenneTwister$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$MersenneTwister$class_type panda$math$MersenneTwister$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$MersenneTwister$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$math$MersenneTwister$cleanup, panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT, panda$math$MersenneTwister$extract$R$panda$core$UInt32, panda$math$MersenneTwister$twist, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64} };

typedef panda$core$Int32 (*$fn30)(panda$math$Random*);
typedef panda$collections$ListView* (*$fn54)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x4d\x65\x72\x73\x65\x6e\x6e\x65\x54\x77\x69\x73\x74\x65\x72", 26, 1964359889194503994, NULL };

void panda$math$MersenneTwister$init(panda$math$MersenneTwister* self) {
    panda$math$Random* $tmp2;
    self->mt = NULL;
    self->state = NULL;
    panda$math$Random* $tmp3 = panda$math$Random$default$R$panda$math$Random();
    $tmp2 = $tmp3;
    panda$math$MersenneTwister$init$panda$math$Random(self, $tmp2);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
}
void panda$math$MersenneTwister$init$panda$math$Random(panda$math$MersenneTwister* self, panda$math$Random* p_seed) {
    panda$core$Int64 $tmp4;
    panda$collections$Array* $tmp5;
    panda$collections$Array* $tmp6;
    panda$collections$Array* $tmp7;
    panda$core$Int64 $tmp9;
    panda$core$Range$LTpanda$core$Int64$GT $tmp10;
    panda$core$Int64 $tmp11;
    panda$core$Int64 $tmp12;
    panda$core$Bit $tmp13;
    panda$core$Object* $tmp27;
    self->mt = NULL;
    self->state = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp4, 624);
    self->index = $tmp4;
    {
        $tmp5 = self->mt;
        panda$collections$Array* $tmp8 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64$init$builtin_int64(&$tmp9, 624);
        panda$collections$Array$init$panda$core$Int64($tmp8, $tmp9);
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        self->mt = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
    panda$core$Int64$init$builtin_int64(&$tmp11, 0);
    panda$core$Int64$init$builtin_int64(&$tmp12, 624);
    panda$core$Bit$init$builtin_bit(&$tmp13, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp10, $tmp11, $tmp12, $tmp13);
    int64_t $tmp15 = $tmp10.min.value;
    panda$core$Int64 i14 = { $tmp15 };
    int64_t $tmp17 = $tmp10.max.value;
    bool $tmp18 = $tmp10.inclusive.value;
    if ($tmp18) goto $l25; else goto $l26;
    $l25:;
    if ($tmp15 <= $tmp17) goto $l19; else goto $l21;
    $l26:;
    if ($tmp15 < $tmp17) goto $l19; else goto $l21;
    $l19:;
    {
        ITable* $tmp28 = p_seed->$class->itable;
        while ($tmp28->$class != (panda$core$Class*) &panda$math$Random$class) {
            $tmp28 = $tmp28->next;
        }
        $fn30 $tmp29 = $tmp28->methods[1];
        panda$core$Int32 $tmp31 = $tmp29(p_seed);
        panda$core$UInt32 $tmp32 = panda$core$Int32$convert$R$panda$core$UInt32($tmp31);
        panda$core$UInt32$wrapper* $tmp33;
        $tmp33 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp33->value = $tmp32;
        $tmp27 = ((panda$core$Object*) $tmp33);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp27);
        panda$core$Panda$unref$panda$core$Object($tmp27);
    }
    $l22:;
    int64_t $tmp35 = $tmp17 - i14.value;
    if ($tmp18) goto $l36; else goto $l37;
    $l36:;
    if ((uint64_t) $tmp35 >= 1) goto $l34; else goto $l21;
    $l37:;
    if ((uint64_t) $tmp35 > 1) goto $l34; else goto $l21;
    $l34:;
    i14.value += 1;
    goto $l19;
    $l21:;
}
void panda$math$MersenneTwister$init$panda$collections$Array$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self, panda$collections$Array* p_state) {
    panda$core$Int64 $tmp40;
    panda$core$Int64 $tmp41;
    panda$collections$Array* $tmp43;
    panda$collections$Array* $tmp44;
    panda$collections$Array* $tmp45;
    panda$collections$ListView* $tmp47;
    panda$core$Range$LTpanda$core$Int64$GT $tmp48;
    panda$core$Int64 $tmp49;
    panda$core$Int64 $tmp50;
    panda$core$Bit $tmp51;
    panda$collections$Array* $tmp56;
    panda$collections$Array* $tmp57;
    panda$collections$Array* $tmp58;
    panda$core$Range$LTpanda$core$Int64$GT $tmp60;
    panda$core$Int64 $tmp61;
    panda$core$Bit $tmp62;
    panda$core$Object* $tmp76;
    panda$core$Int32 $tmp77;
    panda$core$Object* $tmp78;
    panda$core$Int64 $tmp79;
    panda$core$Object* $tmp82;
    panda$core$Int64 $tmp83;
    panda$core$Int32 $tmp86;
    panda$core$Int32 $tmp87;
    self->mt = NULL;
    self->state = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp40, 624);
    self->index = $tmp40;
    panda$core$Int64$init$builtin_int64(&$tmp41, 624);
    panda$core$Bit $tmp42 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_state->count, $tmp41);
    if ($tmp42.value) {
    {
        {
            $tmp43 = self->mt;
            panda$collections$Array* $tmp46 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$core$Int64$init$builtin_int64(&$tmp49, 0);
            panda$core$Int64$init$builtin_int64(&$tmp50, 624);
            panda$core$Bit$init$builtin_bit(&$tmp51, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp48, $tmp49, $tmp50, $tmp51);
            ITable* $tmp52 = ((panda$collections$ListView*) p_state)->$class->itable;
            while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp52 = $tmp52->next;
            }
            $fn54 $tmp53 = $tmp52->methods[1];
            panda$collections$ListView* $tmp55 = $tmp53(((panda$collections$ListView*) p_state), $tmp48);
            $tmp47 = $tmp55;
            panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp46, ((panda$collections$CollectionView*) $tmp47));
            $tmp45 = $tmp46;
            $tmp44 = $tmp45;
            self->mt = $tmp44;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        }
        return;
    }
    }
    {
        $tmp56 = self->mt;
        panda$collections$Array* $tmp59 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp59, ((panda$collections$CollectionView*) p_state));
        $tmp58 = $tmp59;
        $tmp57 = $tmp58;
        self->mt = $tmp57;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
    }
    panda$core$Int64$init$builtin_int64(&$tmp61, 624);
    panda$core$Bit$init$builtin_bit(&$tmp62, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp60, p_state->count, $tmp61, $tmp62);
    int64_t $tmp64 = $tmp60.min.value;
    panda$core$Int64 i63 = { $tmp64 };
    int64_t $tmp66 = $tmp60.max.value;
    bool $tmp67 = $tmp60.inclusive.value;
    if ($tmp67) goto $l74; else goto $l75;
    $l74:;
    if ($tmp64 <= $tmp66) goto $l68; else goto $l70;
    $l75:;
    if ($tmp64 < $tmp66) goto $l68; else goto $l70;
    $l68:;
    {
        panda$core$Int32$init$builtin_int32(&$tmp77, 1812433253);
        panda$core$Int64$init$builtin_int64(&$tmp79, 1);
        panda$core$Int64 $tmp80 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i63, $tmp79);
        panda$core$Object* $tmp81 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp80);
        $tmp78 = $tmp81;
        panda$core$Int64$init$builtin_int64(&$tmp83, 1);
        panda$core$Int64 $tmp84 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i63, $tmp83);
        panda$core$Object* $tmp85 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp84);
        $tmp82 = $tmp85;
        panda$core$Int32$init$builtin_int32(&$tmp86, 32);
        panda$core$Int32$init$builtin_int32(&$tmp87, 2);
        panda$core$Int32 $tmp88 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32($tmp86, $tmp87);
        panda$core$Int32 $tmp89 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp82)->value, $tmp88);
        panda$core$Int32 $tmp90 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp78)->value, $tmp89);
        panda$core$Int32 $tmp91 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32($tmp77, $tmp90);
        panda$core$Int64 $tmp92 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp91, i63);
        panda$core$UInt32 $tmp93 = panda$core$Int64$convert$R$panda$core$UInt32($tmp92);
        panda$core$UInt32$wrapper* $tmp94;
        $tmp94 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp94->value = $tmp93;
        $tmp76 = ((panda$core$Object*) $tmp94);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp76);
        panda$core$Panda$unref$panda$core$Object($tmp76);
        panda$core$Panda$unref$panda$core$Object($tmp82);
        panda$core$Panda$unref$panda$core$Object($tmp78);
    }
    $l71:;
    int64_t $tmp96 = $tmp66 - i63.value;
    if ($tmp67) goto $l97; else goto $l98;
    $l97:;
    if ((uint64_t) $tmp96 >= 1) goto $l95; else goto $l70;
    $l98:;
    if ((uint64_t) $tmp96 > 1) goto $l95; else goto $l70;
    $l95:;
    i63.value += 1;
    goto $l68;
    $l70:;
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) self->mt));
}
void panda$math$MersenneTwister$init$panda$core$Int64(panda$math$MersenneTwister* self, panda$core$Int64 p_seed) {
    panda$core$Int64 $tmp101;
    panda$collections$Array* $tmp102;
    panda$collections$Array* $tmp103;
    panda$collections$Array* $tmp104;
    panda$core$Int64 $tmp106;
    panda$core$Object* $tmp107;
    panda$core$Int64 $tmp108;
    panda$core$Object* $tmp112;
    panda$core$Range$LTpanda$core$Int64$GT $tmp115;
    panda$core$Int64 $tmp116;
    panda$core$Int64 $tmp117;
    panda$core$Bit $tmp118;
    panda$core$Object* $tmp132;
    panda$core$Int32 $tmp133;
    panda$core$Object* $tmp134;
    panda$core$Int64 $tmp135;
    panda$core$Object* $tmp138;
    panda$core$Int64 $tmp139;
    panda$core$Int32 $tmp142;
    panda$core$Int32 $tmp143;
    self->mt = NULL;
    self->state = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp101, 624);
    self->index = $tmp101;
    {
        $tmp102 = self->mt;
        panda$collections$Array* $tmp105 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64$init$builtin_int64(&$tmp106, 624);
        panda$collections$Array$init$panda$core$Int64($tmp105, $tmp106);
        $tmp104 = $tmp105;
        $tmp103 = $tmp104;
        self->mt = $tmp103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    }
    panda$core$Int64$init$builtin_int64(&$tmp108, 32);
    panda$core$Int64 $tmp109 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(p_seed, $tmp108);
    panda$core$UInt32 $tmp110 = panda$core$Int64$convert$R$panda$core$UInt32($tmp109);
    panda$core$UInt32$wrapper* $tmp111;
    $tmp111 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp111->value = $tmp110;
    $tmp107 = ((panda$core$Object*) $tmp111);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp107);
    panda$core$Panda$unref$panda$core$Object($tmp107);
    panda$core$UInt32 $tmp113 = panda$core$Int64$convert$R$panda$core$UInt32(p_seed);
    panda$core$UInt32$wrapper* $tmp114;
    $tmp114 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp114->value = $tmp113;
    $tmp112 = ((panda$core$Object*) $tmp114);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp112);
    panda$core$Panda$unref$panda$core$Object($tmp112);
    panda$core$Int64$init$builtin_int64(&$tmp116, 2);
    panda$core$Int64$init$builtin_int64(&$tmp117, 624);
    panda$core$Bit$init$builtin_bit(&$tmp118, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp115, $tmp116, $tmp117, $tmp118);
    int64_t $tmp120 = $tmp115.min.value;
    panda$core$Int64 i119 = { $tmp120 };
    int64_t $tmp122 = $tmp115.max.value;
    bool $tmp123 = $tmp115.inclusive.value;
    if ($tmp123) goto $l130; else goto $l131;
    $l130:;
    if ($tmp120 <= $tmp122) goto $l124; else goto $l126;
    $l131:;
    if ($tmp120 < $tmp122) goto $l124; else goto $l126;
    $l124:;
    {
        panda$core$Int32$init$builtin_int32(&$tmp133, 1812433253);
        panda$core$Int64$init$builtin_int64(&$tmp135, 1);
        panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i119, $tmp135);
        panda$core$Object* $tmp137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp136);
        $tmp134 = $tmp137;
        panda$core$Int64$init$builtin_int64(&$tmp139, 1);
        panda$core$Int64 $tmp140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i119, $tmp139);
        panda$core$Object* $tmp141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp140);
        $tmp138 = $tmp141;
        panda$core$Int32$init$builtin_int32(&$tmp142, 32);
        panda$core$Int32$init$builtin_int32(&$tmp143, 2);
        panda$core$Int32 $tmp144 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32($tmp142, $tmp143);
        panda$core$Int32 $tmp145 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp138)->value, $tmp144);
        panda$core$Int32 $tmp146 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp134)->value, $tmp145);
        panda$core$Int32 $tmp147 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32($tmp133, $tmp146);
        panda$core$Int64 $tmp148 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp147, i119);
        panda$core$UInt32 $tmp149 = panda$core$Int64$convert$R$panda$core$UInt32($tmp148);
        panda$core$UInt32$wrapper* $tmp150;
        $tmp150 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp150->value = $tmp149;
        $tmp132 = ((panda$core$Object*) $tmp150);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp132);
        panda$core$Panda$unref$panda$core$Object($tmp132);
        panda$core$Panda$unref$panda$core$Object($tmp138);
        panda$core$Panda$unref$panda$core$Object($tmp134);
    }
    $l127:;
    int64_t $tmp152 = $tmp122 - i119.value;
    if ($tmp123) goto $l153; else goto $l154;
    $l153:;
    if ((uint64_t) $tmp152 >= 1) goto $l151; else goto $l126;
    $l154:;
    if ((uint64_t) $tmp152 > 1) goto $l151; else goto $l126;
    $l151:;
    i119.value += 1;
    goto $l124;
    $l126:;
}
panda$collections$ListView* panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self) {
    panda$collections$ListView* $returnValue157;
    panda$collections$ListView* $tmp158;
    panda$collections$Array* $tmp159;
    panda$collections$Array* $tmp160 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp160, ((panda$collections$CollectionView*) self->mt));
    $tmp159 = $tmp160;
    $tmp158 = ((panda$collections$ListView*) $tmp159);
    $returnValue157 = $tmp158;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
    return $returnValue157;
}
panda$core$UInt32 panda$math$MersenneTwister$extract$R$panda$core$UInt32(panda$math$MersenneTwister* self) {
    panda$core$Int64 $tmp162;
    panda$core$UInt32 y164;
    panda$core$Object* $tmp165;
    panda$core$UInt32 $tmp167;
    panda$core$UInt32 $tmp170;
    panda$core$UInt32 $tmp172;
    panda$core$UInt32 $tmp175;
    panda$core$UInt32 $tmp177;
    panda$core$UInt32 $tmp180;
    panda$core$Int64 $tmp183;
    panda$core$UInt32 $returnValue185;
    panda$core$Int64$init$builtin_int64(&$tmp162, 624);
    panda$core$Bit $tmp163 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, $tmp162);
    if ($tmp163.value) {
    {
        panda$math$MersenneTwister$twist(self);
    }
    }
    panda$core$Object* $tmp166 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, self->index);
    $tmp165 = $tmp166;
    y164 = ((panda$core$UInt32$wrapper*) $tmp165)->value;
    panda$core$Panda$unref$panda$core$Object($tmp165);
    panda$core$UInt32$init$builtin_uint32(&$tmp167, 11);
    panda$core$UInt32 $tmp168 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp167);
    panda$core$UInt32 $tmp169 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp168);
    y164 = $tmp169;
    panda$core$UInt32$init$builtin_uint32(&$tmp170, 7);
    panda$core$UInt32 $tmp171 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp170);
    panda$core$UInt32$init$builtin_uint32(&$tmp172, 2636928640);
    panda$core$UInt32 $tmp173 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp171, $tmp172);
    panda$core$UInt32 $tmp174 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp173);
    y164 = $tmp174;
    panda$core$UInt32$init$builtin_uint32(&$tmp175, 15);
    panda$core$UInt32 $tmp176 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp175);
    panda$core$UInt32$init$builtin_uint32(&$tmp177, 4022730752);
    panda$core$UInt32 $tmp178 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp176, $tmp177);
    panda$core$UInt32 $tmp179 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp178);
    y164 = $tmp179;
    panda$core$UInt32$init$builtin_uint32(&$tmp180, 18);
    panda$core$UInt32 $tmp181 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp180);
    panda$core$UInt32 $tmp182 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y164, $tmp181);
    y164 = $tmp182;
    panda$core$Int64$init$builtin_int64(&$tmp183, 1);
    panda$core$Int64 $tmp184 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp183);
    self->index = $tmp184;
    $returnValue185 = y164;
    return $returnValue185;
}
void panda$math$MersenneTwister$twist(panda$math$MersenneTwister* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp187;
    panda$core$Int64 $tmp188;
    panda$core$Int64 $tmp189;
    panda$core$Bit $tmp190;
    panda$core$UInt32 y204;
    panda$core$Object* $tmp205;
    panda$core$UInt32 $tmp207;
    panda$core$Object* $tmp209;
    panda$core$Int64 $tmp210;
    panda$core$Int64 $tmp212;
    panda$core$UInt32 $tmp215;
    panda$core$Object* $tmp218;
    panda$core$Object* $tmp219;
    panda$core$Int32 $tmp220;
    panda$core$Int64 $tmp222;
    panda$core$UInt32 $tmp225;
    panda$core$UInt32 $tmp229;
    panda$core$UInt32 $tmp231;
    panda$collections$Array* $tmp233;
    panda$core$Int64 $tmp234;
    panda$core$Object* $tmp235;
    panda$core$Object* $tmp236;
    panda$core$UInt32 $tmp238;
    panda$core$Int64 $tmp247;
    panda$core$Int64$init$builtin_int64(&$tmp188, 0);
    panda$core$Int64$init$builtin_int64(&$tmp189, 624);
    panda$core$Bit$init$builtin_bit(&$tmp190, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp187, $tmp188, $tmp189, $tmp190);
    int64_t $tmp192 = $tmp187.min.value;
    panda$core$Int64 i191 = { $tmp192 };
    int64_t $tmp194 = $tmp187.max.value;
    bool $tmp195 = $tmp187.inclusive.value;
    if ($tmp195) goto $l202; else goto $l203;
    $l202:;
    if ($tmp192 <= $tmp194) goto $l196; else goto $l198;
    $l203:;
    if ($tmp192 < $tmp194) goto $l196; else goto $l198;
    $l196:;
    {
        panda$core$Object* $tmp206 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, i191);
        $tmp205 = $tmp206;
        panda$core$UInt32$init$builtin_uint32(&$tmp207, 2147483648);
        panda$core$UInt32 $tmp208 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp205)->value, $tmp207);
        panda$core$Int64$init$builtin_int64(&$tmp210, 1);
        panda$core$Int64 $tmp211 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i191, $tmp210);
        panda$core$Int64$init$builtin_int64(&$tmp212, 624);
        panda$core$Int64 $tmp213 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp211, $tmp212);
        panda$core$Object* $tmp214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp213);
        $tmp209 = $tmp214;
        panda$core$UInt32$init$builtin_uint32(&$tmp215, 2147483647);
        panda$core$UInt32 $tmp216 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp209)->value, $tmp215);
        panda$core$UInt32 $tmp217 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp208, $tmp216);
        y204 = $tmp217;
        panda$core$Panda$unref$panda$core$Object($tmp209);
        panda$core$Panda$unref$panda$core$Object($tmp205);
        panda$core$Int32$init$builtin_int32(&$tmp220, 397);
        panda$core$Int64 $tmp221 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(i191, $tmp220);
        panda$core$Int64$init$builtin_int64(&$tmp222, 624);
        panda$core$Int64 $tmp223 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp221, $tmp222);
        panda$core$Object* $tmp224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp223);
        $tmp219 = $tmp224;
        panda$core$UInt32$init$builtin_uint32(&$tmp225, 1);
        panda$core$UInt32 $tmp226 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y204, $tmp225);
        panda$core$UInt32 $tmp227 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp219)->value, $tmp226);
        panda$core$UInt32$wrapper* $tmp228;
        $tmp228 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp228->value = $tmp227;
        $tmp218 = ((panda$core$Object*) $tmp228);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self->mt, i191, $tmp218);
        panda$core$Panda$unref$panda$core$Object($tmp218);
        panda$core$Panda$unref$panda$core$Object($tmp219);
        panda$core$UInt32$init$builtin_uint32(&$tmp229, 2);
        panda$core$UInt32 $tmp230 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(y204, $tmp229);
        panda$core$UInt32$init$builtin_uint32(&$tmp231, 0);
        panda$core$Bit $tmp232 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp230, $tmp231);
        if ($tmp232.value) {
        {
            $tmp233 = self->mt;
            $tmp234 = i191;
            panda$core$Object* $tmp237 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp233, $tmp234);
            $tmp236 = $tmp237;
            panda$core$UInt32$init$builtin_uint32(&$tmp238, 2567483615);
            panda$core$UInt32 $tmp239 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp236)->value, $tmp238);
            panda$core$UInt32$wrapper* $tmp240;
            $tmp240 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
            $tmp240->value = $tmp239;
            $tmp235 = ((panda$core$Object*) $tmp240);
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp233, $tmp234, $tmp235);
            panda$core$Panda$unref$panda$core$Object($tmp235);
            panda$core$Panda$unref$panda$core$Object($tmp236);
        }
        }
    }
    $l199:;
    int64_t $tmp242 = $tmp194 - i191.value;
    if ($tmp195) goto $l243; else goto $l244;
    $l243:;
    if ((uint64_t) $tmp242 >= 1) goto $l241; else goto $l198;
    $l244:;
    if ((uint64_t) $tmp242 > 1) goto $l241; else goto $l198;
    $l241:;
    i191.value += 1;
    goto $l196;
    $l198:;
    panda$core$Int64$init$builtin_int64(&$tmp247, 0);
    self->index = $tmp247;
}
panda$core$Int32 panda$math$MersenneTwister$int32$R$panda$core$Int32(panda$math$MersenneTwister* self) {
    panda$core$Int32 $returnValue248;
    panda$core$UInt32 $tmp249 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int32 $tmp250 = panda$core$UInt32$convert$R$panda$core$Int32($tmp249);
    $returnValue248 = $tmp250;
    return $returnValue248;
}
panda$core$Int64 panda$math$MersenneTwister$int64$R$panda$core$Int64(panda$math$MersenneTwister* self) {
    panda$core$Int64 $returnValue252;
    panda$core$Int64 $tmp255;
    panda$core$UInt32 $tmp253 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp254 = panda$core$UInt32$convert$R$panda$core$Int64($tmp253);
    panda$core$Int64$init$builtin_int64(&$tmp255, 32);
    panda$core$Int64 $tmp256 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp254, $tmp255);
    panda$core$UInt32 $tmp257 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp258 = panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64($tmp256, $tmp257);
    $returnValue252 = $tmp258;
    return $returnValue252;
}
void panda$math$MersenneTwister$cleanup(panda$math$MersenneTwister* self) {
    int $tmp262;
    {
    }
    $tmp262 = -1;
    goto $l260;
    $l260:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp262) {
        case -1: goto $l263;
    }
    $l263:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->mt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->state));
}

