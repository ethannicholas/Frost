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
#include "panda/core/Int8.h"
#include "panda/collections/ListView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"


static panda$core$String $s1;
panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$PushbackInputStream$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$UInt8$nullable (*$fn19)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn30)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn54)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn70)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn94)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn111)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn135)(panda$collections$ListView*, panda$core$Int64);

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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        $tmp5 = self->source;
        $tmp6 = p_source;
        self->source = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
}
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* self) {
    panda$core$UInt8 result9;
    panda$core$Object* $tmp10;
    panda$core$UInt8$nullable $finallyReturn15;
    panda$core$UInt8$nullable $finallyReturn17;
    panda$core$Int64 $tmp7 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp8 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp7, ((panda$core$Int64) { 0 }));
    if ($tmp8.value) {
    {
        panda$core$Int64 $tmp11 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp12 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp11, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp13 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp12);
        $tmp10 = $tmp13;
        result9 = ((panda$core$UInt8$wrapper*) $tmp10)->value;
        panda$core$Panda$unref$panda$core$Object($tmp10);
        panda$core$Int64 $tmp14 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp15 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp14, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(self->pushbackBuffer, $tmp15);
        $finallyReturn15 = ((panda$core$UInt8$nullable) { result9, true });
        return $finallyReturn15;
    }
    }
    panda$core$UInt8$nullable $tmp20 = (($fn19) self->source->$class->vtable[2])(self->source);
    $finallyReturn17 = $tmp20;
    return $finallyReturn17;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$core$Object* $tmp22;
    panda$core$UInt8$wrapper* $tmp23;
    $tmp23 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp23->value = p_v;
    $tmp22 = ((panda$core$Object*) $tmp23);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp22);
    panda$core$Panda$unref$panda$core$Object($tmp22);
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$Object* $tmp24;
    panda$core$UInt8 $tmp25 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp26;
    $tmp26 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp26->value = $tmp25;
    $tmp24 = ((panda$core$Object*) $tmp26);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp24);
    panda$core$Panda$unref$panda$core$Object($tmp24);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp27;
    panda$core$Object* $tmp51;
    ITable* $tmp28 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp28->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp28 = $tmp28->next;
    }
    $fn30 $tmp29 = $tmp28->methods[0];
    panda$core$Int64 $tmp31 = $tmp29(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp32 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp31, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp27, $tmp32, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp34 = $tmp27.start.value;
    panda$core$Int64 i33 = { $tmp34 };
    int64_t $tmp36 = $tmp27.end.value;
    int64_t $tmp37 = $tmp27.step.value;
    bool $tmp38 = $tmp27.inclusive.value;
    bool $tmp45 = $tmp37 > 0;
    if ($tmp45) goto $l43; else goto $l44;
    $l43:;
    if ($tmp38) goto $l46; else goto $l47;
    $l46:;
    if ($tmp34 <= $tmp36) goto $l39; else goto $l41;
    $l47:;
    if ($tmp34 < $tmp36) goto $l39; else goto $l41;
    $l44:;
    if ($tmp38) goto $l48; else goto $l49;
    $l48:;
    if ($tmp34 >= $tmp36) goto $l39; else goto $l41;
    $l49:;
    if ($tmp34 > $tmp36) goto $l39; else goto $l41;
    $l39:;
    {
        ITable* $tmp52 = p_v->$class->itable;
        while ($tmp52->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp52 = $tmp52->next;
        }
        $fn54 $tmp53 = $tmp52->methods[0];
        panda$core$Object* $tmp55 = $tmp53(p_v, i33);
        $tmp51 = $tmp55;
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp51)->value);
        panda$core$Panda$unref$panda$core$Object($tmp51);
    }
    $l42:;
    if ($tmp45) goto $l57; else goto $l58;
    $l57:;
    int64_t $tmp59 = $tmp36 - i33.value;
    if ($tmp38) goto $l60; else goto $l61;
    $l60:;
    if ((uint64_t) $tmp59 >= $tmp37) goto $l56; else goto $l41;
    $l61:;
    if ((uint64_t) $tmp59 > $tmp37) goto $l56; else goto $l41;
    $l58:;
    int64_t $tmp63 = i33.value - $tmp36;
    if ($tmp38) goto $l64; else goto $l65;
    $l64:;
    if ((uint64_t) $tmp63 >= -$tmp37) goto $l56; else goto $l41;
    $l65:;
    if ((uint64_t) $tmp63 > -$tmp37) goto $l56; else goto $l41;
    $l56:;
    i33.value += $tmp37;
    goto $l39;
    $l41:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp67;
    panda$core$Object* $tmp91;
    ITable* $tmp68 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp68->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp68 = $tmp68->next;
    }
    $fn70 $tmp69 = $tmp68->methods[0];
    panda$core$Int64 $tmp71 = $tmp69(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp72 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp71, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp67, $tmp72, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp74 = $tmp67.start.value;
    panda$core$Int64 i73 = { $tmp74 };
    int64_t $tmp76 = $tmp67.end.value;
    int64_t $tmp77 = $tmp67.step.value;
    bool $tmp78 = $tmp67.inclusive.value;
    bool $tmp85 = $tmp77 > 0;
    if ($tmp85) goto $l83; else goto $l84;
    $l83:;
    if ($tmp78) goto $l86; else goto $l87;
    $l86:;
    if ($tmp74 <= $tmp76) goto $l79; else goto $l81;
    $l87:;
    if ($tmp74 < $tmp76) goto $l79; else goto $l81;
    $l84:;
    if ($tmp78) goto $l88; else goto $l89;
    $l88:;
    if ($tmp74 >= $tmp76) goto $l79; else goto $l81;
    $l89:;
    if ($tmp74 > $tmp76) goto $l79; else goto $l81;
    $l79:;
    {
        ITable* $tmp92 = p_v->$class->itable;
        while ($tmp92->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp92 = $tmp92->next;
        }
        $fn94 $tmp93 = $tmp92->methods[0];
        panda$core$Object* $tmp95 = $tmp93(p_v, i73);
        $tmp91 = $tmp95;
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp91)->value);
        panda$core$Panda$unref$panda$core$Object($tmp91);
    }
    $l82:;
    if ($tmp85) goto $l97; else goto $l98;
    $l97:;
    int64_t $tmp99 = $tmp76 - i73.value;
    if ($tmp78) goto $l100; else goto $l101;
    $l100:;
    if ((uint64_t) $tmp99 >= $tmp77) goto $l96; else goto $l81;
    $l101:;
    if ((uint64_t) $tmp99 > $tmp77) goto $l96; else goto $l81;
    $l98:;
    int64_t $tmp103 = i73.value - $tmp76;
    if ($tmp78) goto $l104; else goto $l105;
    $l104:;
    if ((uint64_t) $tmp103 >= -$tmp77) goto $l96; else goto $l81;
    $l105:;
    if ((uint64_t) $tmp103 > -$tmp77) goto $l96; else goto $l81;
    $l96:;
    i73.value += $tmp77;
    goto $l79;
    $l81:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp107 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp107);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp108;
    panda$core$Object* $tmp132;
    ITable* $tmp109 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp109->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp109 = $tmp109->next;
    }
    $fn111 $tmp110 = $tmp109->methods[0];
    panda$core$Int64 $tmp112 = $tmp110(((panda$collections$CollectionView*) p_c));
    panda$core$Int64 $tmp113 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp112, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp108, $tmp113, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp115 = $tmp108.start.value;
    panda$core$Int64 i114 = { $tmp115 };
    int64_t $tmp117 = $tmp108.end.value;
    int64_t $tmp118 = $tmp108.step.value;
    bool $tmp119 = $tmp108.inclusive.value;
    bool $tmp126 = $tmp118 > 0;
    if ($tmp126) goto $l124; else goto $l125;
    $l124:;
    if ($tmp119) goto $l127; else goto $l128;
    $l127:;
    if ($tmp115 <= $tmp117) goto $l120; else goto $l122;
    $l128:;
    if ($tmp115 < $tmp117) goto $l120; else goto $l122;
    $l125:;
    if ($tmp119) goto $l129; else goto $l130;
    $l129:;
    if ($tmp115 >= $tmp117) goto $l120; else goto $l122;
    $l130:;
    if ($tmp115 > $tmp117) goto $l120; else goto $l122;
    $l120:;
    {
        ITable* $tmp133 = p_c->$class->itable;
        while ($tmp133->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp133 = $tmp133->next;
        }
        $fn135 $tmp134 = $tmp133->methods[0];
        panda$core$Object* $tmp136 = $tmp134(p_c, i114);
        $tmp132 = $tmp136;
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp132)->value);
        panda$core$Panda$unref$panda$core$Object($tmp132);
    }
    $l123:;
    if ($tmp126) goto $l138; else goto $l139;
    $l138:;
    int64_t $tmp140 = $tmp117 - i114.value;
    if ($tmp119) goto $l141; else goto $l142;
    $l141:;
    if ((uint64_t) $tmp140 >= $tmp118) goto $l137; else goto $l122;
    $l142:;
    if ((uint64_t) $tmp140 > $tmp118) goto $l137; else goto $l122;
    $l139:;
    int64_t $tmp144 = i114.value - $tmp117;
    if ($tmp119) goto $l145; else goto $l146;
    $l145:;
    if ((uint64_t) $tmp144 >= -$tmp118) goto $l137; else goto $l122;
    $l146:;
    if ((uint64_t) $tmp144 > -$tmp118) goto $l137; else goto $l122;
    $l137:;
    i114.value += $tmp118;
    goto $l120;
    $l122:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp148;
    panda$collections$ListView* $tmp149 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    $tmp148 = $tmp149;
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp148);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
}
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* self) {
    int $tmp152;
    {
    }
    $tmp152 = -1;
    goto $l150;
    $l150:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp152) {
        case -1: goto $l153;
    }
    $l153:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

