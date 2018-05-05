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

typedef panda$core$UInt8$nullable (*$fn18)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn28)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn52)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn68)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn92)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn109)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn133)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x50\x75\x73\x68\x62\x61\x63\x6b\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 28, -1415712807475310042, NULL };

void panda$io$PushbackInputStream$init$panda$io$InputStream(panda$io$PushbackInputStream* self, panda$io$InputStream* p_source) {
    self->source = NULL;
    self->pushbackBuffer = NULL;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp4);
    panda$collections$Array* $tmp3 = $tmp4;
    panda$collections$Array* $tmp2 = $tmp3;
    self->pushbackBuffer = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        panda$io$InputStream* $tmp5 = self->source;
        panda$io$InputStream* $tmp6 = p_source;
        self->source = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
}
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* self) {
    panda$core$UInt8 result9;
    panda$core$Int64 $tmp7 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp8 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp7, ((panda$core$Int64) { 0 }));
    if ($tmp8.value) {
    {
        panda$core$Int64 $tmp11 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp12 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp11, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp13 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp12);
        panda$core$Object* $tmp10 = $tmp13;
        result9 = ((panda$core$UInt8$wrapper*) $tmp10)->value;
        panda$core$Panda$unref$panda$core$Object($tmp10);
        panda$core$Int64 $tmp14 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp15 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp14, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(self->pushbackBuffer, $tmp15);
        panda$core$UInt8$nullable $tmp16 = ((panda$core$UInt8$nullable) { result9, true });
        return $tmp16;
    }
    }
    panda$core$UInt8$nullable $tmp19 = (($fn18) self->source->$class->vtable[2])(self->source);
    panda$core$UInt8$nullable $tmp17 = $tmp19;
    return $tmp17;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$core$UInt8$wrapper* $tmp21;
    $tmp21 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp21->value = p_v;
    panda$core$Object* $tmp20 = ((panda$core$Object*) $tmp21);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp20);
    panda$core$Panda$unref$panda$core$Object($tmp20);
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$UInt8 $tmp23 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp24;
    $tmp24 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp24->value = $tmp23;
    panda$core$Object* $tmp22 = ((panda$core$Object*) $tmp24);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp22);
    panda$core$Panda$unref$panda$core$Object($tmp22);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp25;
    ITable* $tmp26 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp26->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp26 = $tmp26->next;
    }
    $fn28 $tmp27 = $tmp26->methods[0];
    panda$core$Int64 $tmp29 = $tmp27(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp30 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp29, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp25, $tmp30, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp32 = $tmp25.start.value;
    panda$core$Int64 i31 = { $tmp32 };
    int64_t $tmp34 = $tmp25.end.value;
    int64_t $tmp35 = $tmp25.step.value;
    bool $tmp36 = $tmp25.inclusive.value;
    bool $tmp43 = $tmp35 > 0;
    if ($tmp43) goto $l41; else goto $l42;
    $l41:;
    if ($tmp36) goto $l44; else goto $l45;
    $l44:;
    if ($tmp32 <= $tmp34) goto $l37; else goto $l39;
    $l45:;
    if ($tmp32 < $tmp34) goto $l37; else goto $l39;
    $l42:;
    if ($tmp36) goto $l46; else goto $l47;
    $l46:;
    if ($tmp32 >= $tmp34) goto $l37; else goto $l39;
    $l47:;
    if ($tmp32 > $tmp34) goto $l37; else goto $l39;
    $l37:;
    {
        ITable* $tmp50 = p_v->$class->itable;
        while ($tmp50->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp50 = $tmp50->next;
        }
        $fn52 $tmp51 = $tmp50->methods[0];
        panda$core$Object* $tmp53 = $tmp51(p_v, i31);
        panda$core$Object* $tmp49 = $tmp53;
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp49)->value);
        panda$core$Panda$unref$panda$core$Object($tmp49);
    }
    $l40:;
    if ($tmp43) goto $l55; else goto $l56;
    $l55:;
    int64_t $tmp57 = $tmp34 - i31.value;
    if ($tmp36) goto $l58; else goto $l59;
    $l58:;
    if ((uint64_t) $tmp57 >= $tmp35) goto $l54; else goto $l39;
    $l59:;
    if ((uint64_t) $tmp57 > $tmp35) goto $l54; else goto $l39;
    $l56:;
    int64_t $tmp61 = i31.value - $tmp34;
    if ($tmp36) goto $l62; else goto $l63;
    $l62:;
    if ((uint64_t) $tmp61 >= -$tmp35) goto $l54; else goto $l39;
    $l63:;
    if ((uint64_t) $tmp61 > -$tmp35) goto $l54; else goto $l39;
    $l54:;
    i31.value += $tmp35;
    goto $l37;
    $l39:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp65;
    ITable* $tmp66 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp66->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp66 = $tmp66->next;
    }
    $fn68 $tmp67 = $tmp66->methods[0];
    panda$core$Int64 $tmp69 = $tmp67(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp70 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp69, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp65, $tmp70, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp72 = $tmp65.start.value;
    panda$core$Int64 i71 = { $tmp72 };
    int64_t $tmp74 = $tmp65.end.value;
    int64_t $tmp75 = $tmp65.step.value;
    bool $tmp76 = $tmp65.inclusive.value;
    bool $tmp83 = $tmp75 > 0;
    if ($tmp83) goto $l81; else goto $l82;
    $l81:;
    if ($tmp76) goto $l84; else goto $l85;
    $l84:;
    if ($tmp72 <= $tmp74) goto $l77; else goto $l79;
    $l85:;
    if ($tmp72 < $tmp74) goto $l77; else goto $l79;
    $l82:;
    if ($tmp76) goto $l86; else goto $l87;
    $l86:;
    if ($tmp72 >= $tmp74) goto $l77; else goto $l79;
    $l87:;
    if ($tmp72 > $tmp74) goto $l77; else goto $l79;
    $l77:;
    {
        ITable* $tmp90 = p_v->$class->itable;
        while ($tmp90->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp90 = $tmp90->next;
        }
        $fn92 $tmp91 = $tmp90->methods[0];
        panda$core$Object* $tmp93 = $tmp91(p_v, i71);
        panda$core$Object* $tmp89 = $tmp93;
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp89)->value);
        panda$core$Panda$unref$panda$core$Object($tmp89);
    }
    $l80:;
    if ($tmp83) goto $l95; else goto $l96;
    $l95:;
    int64_t $tmp97 = $tmp74 - i71.value;
    if ($tmp76) goto $l98; else goto $l99;
    $l98:;
    if ((uint64_t) $tmp97 >= $tmp75) goto $l94; else goto $l79;
    $l99:;
    if ((uint64_t) $tmp97 > $tmp75) goto $l94; else goto $l79;
    $l96:;
    int64_t $tmp101 = i71.value - $tmp74;
    if ($tmp76) goto $l102; else goto $l103;
    $l102:;
    if ((uint64_t) $tmp101 >= -$tmp75) goto $l94; else goto $l79;
    $l103:;
    if ((uint64_t) $tmp101 > -$tmp75) goto $l94; else goto $l79;
    $l94:;
    i71.value += $tmp75;
    goto $l77;
    $l79:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp105 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp105);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp106;
    ITable* $tmp107 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp107->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp107 = $tmp107->next;
    }
    $fn109 $tmp108 = $tmp107->methods[0];
    panda$core$Int64 $tmp110 = $tmp108(((panda$collections$CollectionView*) p_c));
    panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp110, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp106, $tmp111, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp113 = $tmp106.start.value;
    panda$core$Int64 i112 = { $tmp113 };
    int64_t $tmp115 = $tmp106.end.value;
    int64_t $tmp116 = $tmp106.step.value;
    bool $tmp117 = $tmp106.inclusive.value;
    bool $tmp124 = $tmp116 > 0;
    if ($tmp124) goto $l122; else goto $l123;
    $l122:;
    if ($tmp117) goto $l125; else goto $l126;
    $l125:;
    if ($tmp113 <= $tmp115) goto $l118; else goto $l120;
    $l126:;
    if ($tmp113 < $tmp115) goto $l118; else goto $l120;
    $l123:;
    if ($tmp117) goto $l127; else goto $l128;
    $l127:;
    if ($tmp113 >= $tmp115) goto $l118; else goto $l120;
    $l128:;
    if ($tmp113 > $tmp115) goto $l118; else goto $l120;
    $l118:;
    {
        ITable* $tmp131 = p_c->$class->itable;
        while ($tmp131->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp131 = $tmp131->next;
        }
        $fn133 $tmp132 = $tmp131->methods[0];
        panda$core$Object* $tmp134 = $tmp132(p_c, i112);
        panda$core$Object* $tmp130 = $tmp134;
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp130)->value);
        panda$core$Panda$unref$panda$core$Object($tmp130);
    }
    $l121:;
    if ($tmp124) goto $l136; else goto $l137;
    $l136:;
    int64_t $tmp138 = $tmp115 - i112.value;
    if ($tmp117) goto $l139; else goto $l140;
    $l139:;
    if ((uint64_t) $tmp138 >= $tmp116) goto $l135; else goto $l120;
    $l140:;
    if ((uint64_t) $tmp138 > $tmp116) goto $l135; else goto $l120;
    $l137:;
    int64_t $tmp142 = i112.value - $tmp115;
    if ($tmp117) goto $l143; else goto $l144;
    $l143:;
    if ((uint64_t) $tmp142 >= -$tmp116) goto $l135; else goto $l120;
    $l144:;
    if ((uint64_t) $tmp142 > -$tmp116) goto $l135; else goto $l120;
    $l135:;
    i112.value += $tmp116;
    goto $l118;
    $l120:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp147 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    panda$collections$ListView* $tmp146 = $tmp147;
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp146);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
}
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* self) {
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

