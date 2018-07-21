#include "panda/io/PushbackInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/collections/Array.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int8.h"
#include "panda/collections/ListView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Char8.h"

static panda$core$String $s1;
panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$PushbackInputStream$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn17)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn25)(panda$collections$CollectionView*);
typedef panda$core$UInt8$nullable (*$fn32)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn43)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn71)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn87)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn115)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn132)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn160)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, -1415712807475310042, NULL };

void panda$io$PushbackInputStream$init$panda$io$InputStream(panda$io$PushbackInputStream* self, panda$io$InputStream* p_source) {
    panda$collections$Array* $tmp2;
    panda$collections$Array* $tmp3;
    panda$io$InputStream* $tmp5;
    panda$io$InputStream* $tmp6;
    self->source = NULL;
    self->pushbackBuffer = NULL;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->pushbackBuffer = $tmp2;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    {
        $tmp5 = self->source;
        $tmp6 = p_source;
        self->source = $tmp6;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    }
    panda$io$InputStream$init(((panda$io$InputStream*) self));
}
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* self) {
    panda$core$Int64 $tmp11;
    panda$core$UInt8 result13;
    panda$core$Object* $tmp14;
    panda$core$Int64 $tmp19;
    panda$core$Object* $tmp22;
    panda$core$Int64 $tmp27;
    panda$core$UInt8$nullable $returnValue30;
    ITable* $tmp7 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp7 = $tmp7->next;
    }
    $fn9 $tmp8 = $tmp7->methods[0];
    panda$core$Int64 $tmp10 = $tmp8(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp11, 0);
    panda$core$Bit $tmp12 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp10, $tmp11);
    if ($tmp12.value) {
    {
        ITable* $tmp15 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
        while ($tmp15->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp15 = $tmp15->next;
        }
        $fn17 $tmp16 = $tmp15->methods[0];
        panda$core$Int64 $tmp18 = $tmp16(((panda$collections$CollectionView*) self->pushbackBuffer));
        panda$core$Int64$init$builtin_int64(&$tmp19, 1);
        panda$core$Int64 $tmp20 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp18, $tmp19);
        panda$core$Object* $tmp21 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp20);
        $tmp14 = $tmp21;
        result13 = ((panda$core$UInt8$wrapper*) $tmp14)->value;
        panda$core$Panda$unref$panda$core$Object$Q($tmp14);
        ITable* $tmp23 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
        while ($tmp23->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp23 = $tmp23->next;
        }
        $fn25 $tmp24 = $tmp23->methods[0];
        panda$core$Int64 $tmp26 = $tmp24(((panda$collections$CollectionView*) self->pushbackBuffer));
        panda$core$Int64$init$builtin_int64(&$tmp27, 1);
        panda$core$Int64 $tmp28 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp26, $tmp27);
        panda$core$Object* $tmp29 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp28);
        $tmp22 = $tmp29;
        panda$core$Panda$unref$panda$core$Object$Q($tmp22);
        $returnValue30 = ((panda$core$UInt8$nullable) { result13, true });
        return $returnValue30;
    }
    }
    panda$core$UInt8$nullable $tmp33 = (($fn32) self->source->$class->vtable[2])(self->source);
    $returnValue30 = $tmp33;
    return $returnValue30;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$core$Object* $tmp35;
    panda$core$UInt8$wrapper* $tmp36;
    $tmp36 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp36->value = p_v;
    $tmp35 = ((panda$core$Object*) $tmp36);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp35);
    panda$core$Panda$unref$panda$core$Object$Q($tmp35);
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$Object* $tmp37;
    panda$core$UInt8 $tmp38 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp39;
    $tmp39 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp39->value = $tmp38;
    $tmp37 = ((panda$core$Object*) $tmp39);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp37);
    panda$core$Panda$unref$panda$core$Object$Q($tmp37);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp40;
    panda$core$Int64 $tmp45;
    panda$core$Int64 $tmp47;
    panda$core$Int64 $tmp48;
    panda$core$Bit $tmp49;
    panda$core$Object* $tmp68;
    ITable* $tmp41 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp41->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp41 = $tmp41->next;
    }
    $fn43 $tmp42 = $tmp41->methods[0];
    panda$core$Int64 $tmp44 = $tmp42(((panda$collections$CollectionView*) p_v));
    panda$core$Int64$init$builtin_int64(&$tmp45, 1);
    panda$core$Int64 $tmp46 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp44, $tmp45);
    panda$core$Int64$init$builtin_int64(&$tmp47, 0);
    panda$core$Int64$init$builtin_int64(&$tmp48, -1);
    panda$core$Bit$init$builtin_bit(&$tmp49, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp40, $tmp46, $tmp47, $tmp48, $tmp49);
    int64_t $tmp51 = $tmp40.start.value;
    panda$core$Int64 i50 = { $tmp51 };
    int64_t $tmp53 = $tmp40.end.value;
    int64_t $tmp54 = $tmp40.step.value;
    bool $tmp55 = $tmp40.inclusive.value;
    bool $tmp62 = $tmp54 > 0;
    if ($tmp62) goto $l60; else goto $l61;
    $l60:;
    if ($tmp55) goto $l63; else goto $l64;
    $l63:;
    if ($tmp51 <= $tmp53) goto $l56; else goto $l58;
    $l64:;
    if ($tmp51 < $tmp53) goto $l56; else goto $l58;
    $l61:;
    if ($tmp55) goto $l65; else goto $l66;
    $l65:;
    if ($tmp51 >= $tmp53) goto $l56; else goto $l58;
    $l66:;
    if ($tmp51 > $tmp53) goto $l56; else goto $l58;
    $l56:;
    {
        ITable* $tmp69 = p_v->$class->itable;
        while ($tmp69->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp69 = $tmp69->next;
        }
        $fn71 $tmp70 = $tmp69->methods[0];
        panda$core$Object* $tmp72 = $tmp70(p_v, i50);
        $tmp68 = $tmp72;
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp68)->value);
        panda$core$Panda$unref$panda$core$Object$Q($tmp68);
    }
    $l59:;
    if ($tmp62) goto $l74; else goto $l75;
    $l74:;
    int64_t $tmp76 = $tmp53 - i50.value;
    if ($tmp55) goto $l77; else goto $l78;
    $l77:;
    if ((uint64_t) $tmp76 >= $tmp54) goto $l73; else goto $l58;
    $l78:;
    if ((uint64_t) $tmp76 > $tmp54) goto $l73; else goto $l58;
    $l75:;
    int64_t $tmp80 = i50.value - $tmp53;
    if ($tmp55) goto $l81; else goto $l82;
    $l81:;
    if ((uint64_t) $tmp80 >= -$tmp54) goto $l73; else goto $l58;
    $l82:;
    if ((uint64_t) $tmp80 > -$tmp54) goto $l73; else goto $l58;
    $l73:;
    i50.value += $tmp54;
    goto $l56;
    $l58:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp84;
    panda$core$Int64 $tmp89;
    panda$core$Int64 $tmp91;
    panda$core$Int64 $tmp92;
    panda$core$Bit $tmp93;
    panda$core$Object* $tmp112;
    ITable* $tmp85 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp85->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp85 = $tmp85->next;
    }
    $fn87 $tmp86 = $tmp85->methods[0];
    panda$core$Int64 $tmp88 = $tmp86(((panda$collections$CollectionView*) p_v));
    panda$core$Int64$init$builtin_int64(&$tmp89, 1);
    panda$core$Int64 $tmp90 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp88, $tmp89);
    panda$core$Int64$init$builtin_int64(&$tmp91, 0);
    panda$core$Int64$init$builtin_int64(&$tmp92, -1);
    panda$core$Bit$init$builtin_bit(&$tmp93, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp84, $tmp90, $tmp91, $tmp92, $tmp93);
    int64_t $tmp95 = $tmp84.start.value;
    panda$core$Int64 i94 = { $tmp95 };
    int64_t $tmp97 = $tmp84.end.value;
    int64_t $tmp98 = $tmp84.step.value;
    bool $tmp99 = $tmp84.inclusive.value;
    bool $tmp106 = $tmp98 > 0;
    if ($tmp106) goto $l104; else goto $l105;
    $l104:;
    if ($tmp99) goto $l107; else goto $l108;
    $l107:;
    if ($tmp95 <= $tmp97) goto $l100; else goto $l102;
    $l108:;
    if ($tmp95 < $tmp97) goto $l100; else goto $l102;
    $l105:;
    if ($tmp99) goto $l109; else goto $l110;
    $l109:;
    if ($tmp95 >= $tmp97) goto $l100; else goto $l102;
    $l110:;
    if ($tmp95 > $tmp97) goto $l100; else goto $l102;
    $l100:;
    {
        ITable* $tmp113 = p_v->$class->itable;
        while ($tmp113->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp113 = $tmp113->next;
        }
        $fn115 $tmp114 = $tmp113->methods[0];
        panda$core$Object* $tmp116 = $tmp114(p_v, i94);
        $tmp112 = $tmp116;
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp112)->value);
        panda$core$Panda$unref$panda$core$Object$Q($tmp112);
    }
    $l103:;
    if ($tmp106) goto $l118; else goto $l119;
    $l118:;
    int64_t $tmp120 = $tmp97 - i94.value;
    if ($tmp99) goto $l121; else goto $l122;
    $l121:;
    if ((uint64_t) $tmp120 >= $tmp98) goto $l117; else goto $l102;
    $l122:;
    if ((uint64_t) $tmp120 > $tmp98) goto $l117; else goto $l102;
    $l119:;
    int64_t $tmp124 = i94.value - $tmp97;
    if ($tmp99) goto $l125; else goto $l126;
    $l125:;
    if ((uint64_t) $tmp124 >= -$tmp98) goto $l117; else goto $l102;
    $l126:;
    if ((uint64_t) $tmp124 > -$tmp98) goto $l117; else goto $l102;
    $l117:;
    i94.value += $tmp98;
    goto $l100;
    $l102:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp128 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp128);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp129;
    panda$core$Int64 $tmp134;
    panda$core$Int64 $tmp136;
    panda$core$Int64 $tmp137;
    panda$core$Bit $tmp138;
    panda$core$Object* $tmp157;
    ITable* $tmp130 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp130->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp130 = $tmp130->next;
    }
    $fn132 $tmp131 = $tmp130->methods[0];
    panda$core$Int64 $tmp133 = $tmp131(((panda$collections$CollectionView*) p_c));
    panda$core$Int64$init$builtin_int64(&$tmp134, 1);
    panda$core$Int64 $tmp135 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp133, $tmp134);
    panda$core$Int64$init$builtin_int64(&$tmp136, 0);
    panda$core$Int64$init$builtin_int64(&$tmp137, -1);
    panda$core$Bit$init$builtin_bit(&$tmp138, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp129, $tmp135, $tmp136, $tmp137, $tmp138);
    int64_t $tmp140 = $tmp129.start.value;
    panda$core$Int64 i139 = { $tmp140 };
    int64_t $tmp142 = $tmp129.end.value;
    int64_t $tmp143 = $tmp129.step.value;
    bool $tmp144 = $tmp129.inclusive.value;
    bool $tmp151 = $tmp143 > 0;
    if ($tmp151) goto $l149; else goto $l150;
    $l149:;
    if ($tmp144) goto $l152; else goto $l153;
    $l152:;
    if ($tmp140 <= $tmp142) goto $l145; else goto $l147;
    $l153:;
    if ($tmp140 < $tmp142) goto $l145; else goto $l147;
    $l150:;
    if ($tmp144) goto $l154; else goto $l155;
    $l154:;
    if ($tmp140 >= $tmp142) goto $l145; else goto $l147;
    $l155:;
    if ($tmp140 > $tmp142) goto $l145; else goto $l147;
    $l145:;
    {
        ITable* $tmp158 = p_c->$class->itable;
        while ($tmp158->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp158 = $tmp158->next;
        }
        $fn160 $tmp159 = $tmp158->methods[0];
        panda$core$Object* $tmp161 = $tmp159(p_c, i139);
        $tmp157 = $tmp161;
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp157)->value);
        panda$core$Panda$unref$panda$core$Object$Q($tmp157);
    }
    $l148:;
    if ($tmp151) goto $l163; else goto $l164;
    $l163:;
    int64_t $tmp165 = $tmp142 - i139.value;
    if ($tmp144) goto $l166; else goto $l167;
    $l166:;
    if ((uint64_t) $tmp165 >= $tmp143) goto $l162; else goto $l147;
    $l167:;
    if ((uint64_t) $tmp165 > $tmp143) goto $l162; else goto $l147;
    $l164:;
    int64_t $tmp169 = i139.value - $tmp142;
    if ($tmp144) goto $l170; else goto $l171;
    $l170:;
    if ((uint64_t) $tmp169 >= -$tmp143) goto $l162; else goto $l147;
    $l171:;
    if ((uint64_t) $tmp169 > -$tmp143) goto $l162; else goto $l147;
    $l162:;
    i139.value += $tmp143;
    goto $l145;
    $l147:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp173;
    panda$collections$ListView* $tmp174 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    $tmp173 = $tmp174;
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp173);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp173));
}
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* self) {
    int $tmp177;
    {
    }
    $tmp177 = -1;
    goto $l175;
    $l175:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp177) {
        case -1: goto $l178;
    }
    $l178:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->pushbackBuffer));
}

