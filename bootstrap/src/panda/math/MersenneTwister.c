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
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/io/Console.h"

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$MersenneTwister$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$MersenneTwister$class_type panda$math$MersenneTwister$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$MersenneTwister$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$math$MersenneTwister$cleanup, panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT, panda$math$MersenneTwister$extract$R$panda$core$UInt32, panda$math$MersenneTwister$twist, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64} };

typedef panda$core$Int32 (*$fn30)(panda$math$Random*);
typedef panda$core$Int64 (*$fn43)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn58)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn67)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x4d\x65\x72\x73\x65\x6e\x6e\x65\x54\x77\x69\x73\x74\x65\x72", 26, 1964359889194503994, NULL };

void panda$math$MersenneTwister$init(panda$math$MersenneTwister* self) {
    panda$math$Random* $tmp2;
    self->mt = NULL;
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
    panda$core$Int64 $tmp45;
    panda$collections$Array* $tmp47;
    panda$collections$Array* $tmp48;
    panda$collections$Array* $tmp49;
    panda$collections$ListView* $tmp51;
    panda$core$Range$LTpanda$core$Int64$GT $tmp52;
    panda$core$Int64 $tmp53;
    panda$core$Int64 $tmp54;
    panda$core$Bit $tmp55;
    panda$collections$Array* $tmp60;
    panda$collections$Array* $tmp61;
    panda$collections$Array* $tmp62;
    panda$core$Range$LTpanda$core$Int64$GT $tmp64;
    panda$core$Int64 $tmp69;
    panda$core$Bit $tmp70;
    panda$core$Object* $tmp84;
    panda$core$Int32 $tmp85;
    panda$core$Object* $tmp86;
    panda$core$Int64 $tmp87;
    panda$core$Object* $tmp90;
    panda$core$Int64 $tmp91;
    panda$core$Int32 $tmp94;
    panda$core$Int32 $tmp95;
    self->mt = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp40, 624);
    self->index = $tmp40;
    ITable* $tmp41 = ((panda$collections$CollectionView*) p_state)->$class->itable;
    while ($tmp41->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp41 = $tmp41->next;
    }
    $fn43 $tmp42 = $tmp41->methods[0];
    panda$core$Int64 $tmp44 = $tmp42(((panda$collections$CollectionView*) p_state));
    panda$core$Int64$init$builtin_int64(&$tmp45, 624);
    panda$core$Bit $tmp46 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp44, $tmp45);
    if ($tmp46.value) {
    {
        {
            $tmp47 = self->mt;
            panda$collections$Array* $tmp50 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
            panda$core$Int64$init$builtin_int64(&$tmp53, 0);
            panda$core$Int64$init$builtin_int64(&$tmp54, 624);
            panda$core$Bit$init$builtin_bit(&$tmp55, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp52, $tmp53, $tmp54, $tmp55);
            ITable* $tmp56 = ((panda$collections$ListView*) p_state)->$class->itable;
            while ($tmp56->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp56 = $tmp56->next;
            }
            $fn58 $tmp57 = $tmp56->methods[1];
            panda$collections$ListView* $tmp59 = $tmp57(((panda$collections$ListView*) p_state), $tmp52);
            $tmp51 = $tmp59;
            panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp50, ((panda$collections$CollectionView*) $tmp51));
            $tmp49 = $tmp50;
            $tmp48 = $tmp49;
            self->mt = $tmp48;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        }
        return;
    }
    }
    {
        $tmp60 = self->mt;
        panda$collections$Array* $tmp63 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp63, ((panda$collections$CollectionView*) p_state));
        $tmp62 = $tmp63;
        $tmp61 = $tmp62;
        self->mt = $tmp61;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
    }
    ITable* $tmp65 = ((panda$collections$CollectionView*) p_state)->$class->itable;
    while ($tmp65->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp65 = $tmp65->next;
    }
    $fn67 $tmp66 = $tmp65->methods[0];
    panda$core$Int64 $tmp68 = $tmp66(((panda$collections$CollectionView*) p_state));
    panda$core$Int64$init$builtin_int64(&$tmp69, 624);
    panda$core$Bit$init$builtin_bit(&$tmp70, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp64, $tmp68, $tmp69, $tmp70);
    int64_t $tmp72 = $tmp64.min.value;
    panda$core$Int64 i71 = { $tmp72 };
    int64_t $tmp74 = $tmp64.max.value;
    bool $tmp75 = $tmp64.inclusive.value;
    if ($tmp75) goto $l82; else goto $l83;
    $l82:;
    if ($tmp72 <= $tmp74) goto $l76; else goto $l78;
    $l83:;
    if ($tmp72 < $tmp74) goto $l76; else goto $l78;
    $l76:;
    {
        panda$core$Int32$init$builtin_int32(&$tmp85, 1812433253);
        panda$core$Int64$init$builtin_int64(&$tmp87, 1);
        panda$core$Int64 $tmp88 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i71, $tmp87);
        panda$core$Object* $tmp89 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp88);
        $tmp86 = $tmp89;
        panda$core$Int64$init$builtin_int64(&$tmp91, 1);
        panda$core$Int64 $tmp92 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i71, $tmp91);
        panda$core$Object* $tmp93 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp92);
        $tmp90 = $tmp93;
        panda$core$Int32$init$builtin_int32(&$tmp94, 32);
        panda$core$Int32$init$builtin_int32(&$tmp95, 2);
        panda$core$Int32 $tmp96 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32($tmp94, $tmp95);
        panda$core$Int32 $tmp97 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp90)->value, $tmp96);
        panda$core$Int32 $tmp98 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp86)->value, $tmp97);
        panda$core$Int32 $tmp99 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32($tmp85, $tmp98);
        panda$core$Int64 $tmp100 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp99, i71);
        panda$core$UInt32 $tmp101 = panda$core$Int64$convert$R$panda$core$UInt32($tmp100);
        panda$core$UInt32$wrapper* $tmp102;
        $tmp102 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp102->value = $tmp101;
        $tmp84 = ((panda$core$Object*) $tmp102);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp84);
        panda$core$Panda$unref$panda$core$Object($tmp84);
        panda$core$Panda$unref$panda$core$Object($tmp90);
        panda$core$Panda$unref$panda$core$Object($tmp86);
    }
    $l79:;
    int64_t $tmp104 = $tmp74 - i71.value;
    if ($tmp75) goto $l105; else goto $l106;
    $l105:;
    if ((uint64_t) $tmp104 >= 1) goto $l103; else goto $l78;
    $l106:;
    if ((uint64_t) $tmp104 > 1) goto $l103; else goto $l78;
    $l103:;
    i71.value += 1;
    goto $l76;
    $l78:;
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) self->mt));
}
void panda$math$MersenneTwister$init$panda$core$Int64(panda$math$MersenneTwister* self, panda$core$Int64 p_seed) {
    panda$core$Int64 $tmp109;
    panda$collections$Array* $tmp110;
    panda$collections$Array* $tmp111;
    panda$collections$Array* $tmp112;
    panda$core$Int64 $tmp114;
    panda$core$Object* $tmp115;
    panda$core$Int64 $tmp116;
    panda$core$Object* $tmp120;
    panda$core$Range$LTpanda$core$Int64$GT $tmp123;
    panda$core$Int64 $tmp124;
    panda$core$Int64 $tmp125;
    panda$core$Bit $tmp126;
    panda$core$Object* $tmp140;
    panda$core$Int32 $tmp141;
    panda$core$Object* $tmp142;
    panda$core$Int64 $tmp143;
    panda$core$Object* $tmp146;
    panda$core$Int64 $tmp147;
    panda$core$Int32 $tmp150;
    panda$core$Int32 $tmp151;
    self->mt = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp109, 624);
    self->index = $tmp109;
    {
        $tmp110 = self->mt;
        panda$collections$Array* $tmp113 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$core$Int64$init$builtin_int64(&$tmp114, 624);
        panda$collections$Array$init$panda$core$Int64($tmp113, $tmp114);
        $tmp112 = $tmp113;
        $tmp111 = $tmp112;
        self->mt = $tmp111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    }
    panda$core$Int64$init$builtin_int64(&$tmp116, 32);
    panda$core$Int64 $tmp117 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(p_seed, $tmp116);
    panda$core$UInt32 $tmp118 = panda$core$Int64$convert$R$panda$core$UInt32($tmp117);
    panda$core$UInt32$wrapper* $tmp119;
    $tmp119 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp119->value = $tmp118;
    $tmp115 = ((panda$core$Object*) $tmp119);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp115);
    panda$core$Panda$unref$panda$core$Object($tmp115);
    panda$core$UInt32 $tmp121 = panda$core$Int64$convert$R$panda$core$UInt32(p_seed);
    panda$core$UInt32$wrapper* $tmp122;
    $tmp122 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp122->value = $tmp121;
    $tmp120 = ((panda$core$Object*) $tmp122);
    panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp120);
    panda$core$Panda$unref$panda$core$Object($tmp120);
    panda$core$Int64$init$builtin_int64(&$tmp124, 2);
    panda$core$Int64$init$builtin_int64(&$tmp125, 624);
    panda$core$Bit$init$builtin_bit(&$tmp126, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp123, $tmp124, $tmp125, $tmp126);
    int64_t $tmp128 = $tmp123.min.value;
    panda$core$Int64 i127 = { $tmp128 };
    int64_t $tmp130 = $tmp123.max.value;
    bool $tmp131 = $tmp123.inclusive.value;
    if ($tmp131) goto $l138; else goto $l139;
    $l138:;
    if ($tmp128 <= $tmp130) goto $l132; else goto $l134;
    $l139:;
    if ($tmp128 < $tmp130) goto $l132; else goto $l134;
    $l132:;
    {
        panda$core$Int32$init$builtin_int32(&$tmp141, 1812433253);
        panda$core$Int64$init$builtin_int64(&$tmp143, 1);
        panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i127, $tmp143);
        panda$core$Object* $tmp145 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp144);
        $tmp142 = $tmp145;
        panda$core$Int64$init$builtin_int64(&$tmp147, 1);
        panda$core$Int64 $tmp148 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i127, $tmp147);
        panda$core$Object* $tmp149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp148);
        $tmp146 = $tmp149;
        panda$core$Int32$init$builtin_int32(&$tmp150, 32);
        panda$core$Int32$init$builtin_int32(&$tmp151, 2);
        panda$core$Int32 $tmp152 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32($tmp150, $tmp151);
        panda$core$Int32 $tmp153 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp146)->value, $tmp152);
        panda$core$Int32 $tmp154 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp142)->value, $tmp153);
        panda$core$Int32 $tmp155 = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32($tmp141, $tmp154);
        panda$core$Int64 $tmp156 = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64($tmp155, i127);
        panda$core$UInt32 $tmp157 = panda$core$Int64$convert$R$panda$core$UInt32($tmp156);
        panda$core$UInt32$wrapper* $tmp158;
        $tmp158 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp158->value = $tmp157;
        $tmp140 = ((panda$core$Object*) $tmp158);
        panda$collections$Array$add$panda$collections$Array$T(self->mt, $tmp140);
        panda$core$Panda$unref$panda$core$Object($tmp140);
        panda$core$Panda$unref$panda$core$Object($tmp146);
        panda$core$Panda$unref$panda$core$Object($tmp142);
    }
    $l135:;
    int64_t $tmp160 = $tmp130 - i127.value;
    if ($tmp131) goto $l161; else goto $l162;
    $l161:;
    if ((uint64_t) $tmp160 >= 1) goto $l159; else goto $l134;
    $l162:;
    if ((uint64_t) $tmp160 > 1) goto $l159; else goto $l134;
    $l159:;
    i127.value += 1;
    goto $l132;
    $l134:;
}
panda$collections$ListView* panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* self) {
    panda$collections$ListView* $returnValue165;
    panda$collections$ListView* $tmp166;
    panda$collections$Array* $tmp167;
    panda$collections$Array* $tmp168 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp168, ((panda$collections$CollectionView*) self->mt));
    $tmp167 = $tmp168;
    $tmp166 = ((panda$collections$ListView*) $tmp167);
    $returnValue165 = $tmp166;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
    return $returnValue165;
}
panda$core$UInt32 panda$math$MersenneTwister$extract$R$panda$core$UInt32(panda$math$MersenneTwister* self) {
    panda$core$Int64 $tmp170;
    panda$core$UInt32 y172;
    panda$core$Object* $tmp173;
    panda$core$UInt32 $tmp175;
    panda$core$UInt32 $tmp178;
    panda$core$UInt32 $tmp180;
    panda$core$UInt32 $tmp183;
    panda$core$UInt32 $tmp185;
    panda$core$UInt32 $tmp188;
    panda$math$MersenneTwister* $tmp191;
    panda$core$Int64 $tmp192;
    panda$core$UInt32 $returnValue194;
    panda$core$Int64$init$builtin_int64(&$tmp170, 624);
    panda$core$Bit $tmp171 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, $tmp170);
    if ($tmp171.value) {
    {
        panda$math$MersenneTwister$twist(self);
    }
    }
    panda$core$Object* $tmp174 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, self->index);
    $tmp173 = $tmp174;
    y172 = ((panda$core$UInt32$wrapper*) $tmp173)->value;
    panda$core$Panda$unref$panda$core$Object($tmp173);
    panda$core$UInt32$init$builtin_uint32(&$tmp175, 11);
    panda$core$UInt32 $tmp176 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp175);
    panda$core$UInt32 $tmp177 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp176);
    y172 = $tmp177;
    panda$core$UInt32$init$builtin_uint32(&$tmp178, 7);
    panda$core$UInt32 $tmp179 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp178);
    panda$core$UInt32$init$builtin_uint32(&$tmp180, 2636928640);
    panda$core$UInt32 $tmp181 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp179, $tmp180);
    panda$core$UInt32 $tmp182 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp181);
    y172 = $tmp182;
    panda$core$UInt32$init$builtin_uint32(&$tmp183, 15);
    panda$core$UInt32 $tmp184 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp183);
    panda$core$UInt32$init$builtin_uint32(&$tmp185, 4022730752);
    panda$core$UInt32 $tmp186 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp184, $tmp185);
    panda$core$UInt32 $tmp187 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp186);
    y172 = $tmp187;
    panda$core$UInt32$init$builtin_uint32(&$tmp188, 18);
    panda$core$UInt32 $tmp189 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp188);
    panda$core$UInt32 $tmp190 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(y172, $tmp189);
    y172 = $tmp190;
    $tmp191 = self;
    panda$core$Int64$init$builtin_int64(&$tmp192, 1);
    panda$core$Int64 $tmp193 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp191->index, $tmp192);
    $tmp191->index = $tmp193;
    $returnValue194 = y172;
    return $returnValue194;
}
void panda$math$MersenneTwister$twist(panda$math$MersenneTwister* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp196;
    panda$core$Int64 $tmp197;
    panda$core$Int64 $tmp198;
    panda$core$Bit $tmp199;
    panda$core$UInt32 y213;
    panda$core$Object* $tmp214;
    panda$core$UInt32 $tmp216;
    panda$core$Object* $tmp218;
    panda$core$Int64 $tmp219;
    panda$core$Int64 $tmp221;
    panda$core$UInt32 $tmp224;
    panda$core$Object* $tmp227;
    panda$core$Object* $tmp228;
    panda$core$Int32 $tmp229;
    panda$core$Int64 $tmp231;
    panda$core$UInt32 $tmp234;
    panda$core$UInt32 $tmp238;
    panda$core$UInt32 $tmp240;
    panda$collections$Array* $tmp242;
    panda$core$Int64 $tmp243;
    panda$core$Object* $tmp244;
    panda$core$Object* $tmp245;
    panda$core$UInt32 $tmp247;
    panda$core$Int64 $tmp256;
    panda$core$Int64$init$builtin_int64(&$tmp197, 0);
    panda$core$Int64$init$builtin_int64(&$tmp198, 624);
    panda$core$Bit$init$builtin_bit(&$tmp199, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp196, $tmp197, $tmp198, $tmp199);
    int64_t $tmp201 = $tmp196.min.value;
    panda$core$Int64 i200 = { $tmp201 };
    int64_t $tmp203 = $tmp196.max.value;
    bool $tmp204 = $tmp196.inclusive.value;
    if ($tmp204) goto $l211; else goto $l212;
    $l211:;
    if ($tmp201 <= $tmp203) goto $l205; else goto $l207;
    $l212:;
    if ($tmp201 < $tmp203) goto $l205; else goto $l207;
    $l205:;
    {
        panda$core$Object* $tmp215 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, i200);
        $tmp214 = $tmp215;
        panda$core$UInt32$init$builtin_uint32(&$tmp216, 2147483648);
        panda$core$UInt32 $tmp217 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp214)->value, $tmp216);
        panda$core$Int64$init$builtin_int64(&$tmp219, 1);
        panda$core$Int64 $tmp220 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i200, $tmp219);
        panda$core$Int64$init$builtin_int64(&$tmp221, 624);
        panda$core$Int64 $tmp222 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp220, $tmp221);
        panda$core$Object* $tmp223 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp222);
        $tmp218 = $tmp223;
        panda$core$UInt32$init$builtin_uint32(&$tmp224, 2147483647);
        panda$core$UInt32 $tmp225 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp218)->value, $tmp224);
        panda$core$UInt32 $tmp226 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp217, $tmp225);
        y213 = $tmp226;
        panda$core$Panda$unref$panda$core$Object($tmp218);
        panda$core$Panda$unref$panda$core$Object($tmp214);
        panda$core$Int32$init$builtin_int32(&$tmp229, 397);
        panda$core$Int64 $tmp230 = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(i200, $tmp229);
        panda$core$Int64$init$builtin_int64(&$tmp231, 624);
        panda$core$Int64 $tmp232 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp230, $tmp231);
        panda$core$Object* $tmp233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->mt, $tmp232);
        $tmp228 = $tmp233;
        panda$core$UInt32$init$builtin_uint32(&$tmp234, 1);
        panda$core$UInt32 $tmp235 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(y213, $tmp234);
        panda$core$UInt32 $tmp236 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp228)->value, $tmp235);
        panda$core$UInt32$wrapper* $tmp237;
        $tmp237 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
        $tmp237->value = $tmp236;
        $tmp227 = ((panda$core$Object*) $tmp237);
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self->mt, i200, $tmp227);
        panda$core$Panda$unref$panda$core$Object($tmp227);
        panda$core$Panda$unref$panda$core$Object($tmp228);
        panda$core$UInt32$init$builtin_uint32(&$tmp238, 2);
        panda$core$UInt32 $tmp239 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(y213, $tmp238);
        panda$core$UInt32$init$builtin_uint32(&$tmp240, 0);
        panda$core$Bit $tmp241 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp239, $tmp240);
        if ($tmp241.value) {
        {
            $tmp242 = self->mt;
            $tmp243 = i200;
            panda$core$Object* $tmp246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp242, $tmp243);
            $tmp245 = $tmp246;
            panda$core$UInt32$init$builtin_uint32(&$tmp247, 2567483615);
            panda$core$UInt32 $tmp248 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp245)->value, $tmp247);
            panda$core$UInt32$wrapper* $tmp249;
            $tmp249 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
            $tmp249->value = $tmp248;
            $tmp244 = ((panda$core$Object*) $tmp249);
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp242, $tmp243, $tmp244);
            panda$core$Panda$unref$panda$core$Object($tmp244);
            panda$core$Panda$unref$panda$core$Object($tmp245);
        }
        }
    }
    $l208:;
    int64_t $tmp251 = $tmp203 - i200.value;
    if ($tmp204) goto $l252; else goto $l253;
    $l252:;
    if ((uint64_t) $tmp251 >= 1) goto $l250; else goto $l207;
    $l253:;
    if ((uint64_t) $tmp251 > 1) goto $l250; else goto $l207;
    $l250:;
    i200.value += 1;
    goto $l205;
    $l207:;
    panda$core$Int64$init$builtin_int64(&$tmp256, 0);
    self->index = $tmp256;
}
panda$core$Int32 panda$math$MersenneTwister$int32$R$panda$core$Int32(panda$math$MersenneTwister* self) {
    panda$core$Int32 $returnValue257;
    panda$core$UInt32 $tmp258 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int32 $tmp259 = panda$core$UInt32$convert$R$panda$core$Int32($tmp258);
    $returnValue257 = $tmp259;
    return $returnValue257;
}
panda$core$Int64 panda$math$MersenneTwister$int64$R$panda$core$Int64(panda$math$MersenneTwister* self) {
    panda$core$Int64 $returnValue261;
    panda$core$Int64 $tmp264;
    panda$core$UInt32 $tmp262 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp263 = panda$core$UInt32$convert$R$panda$core$Int64($tmp262);
    panda$core$Int64$init$builtin_int64(&$tmp264, 32);
    panda$core$Int64 $tmp265 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp263, $tmp264);
    panda$core$UInt32 $tmp266 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(self);
    panda$core$Int64 $tmp267 = panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64($tmp265, $tmp266);
    $returnValue261 = $tmp267;
    return $returnValue261;
}
void panda$math$MersenneTwister$cleanup(panda$math$MersenneTwister* self) {
    int $tmp271;
    {
    }
    $tmp271 = -1;
    goto $l269;
    $l269:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp271) {
        case -1: goto $l272;
    }
    $l272:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->mt));
}

