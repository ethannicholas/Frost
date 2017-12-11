#include "panda/io/PushbackInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/collections/Array.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Int8.h"
#include "panda/collections/ListView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"


panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$UInt8$nullable (*$fn11)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn17)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn40)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn56)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn79)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn96)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn119)(panda$collections$ListView*, panda$core$Int64);


void panda$io$PushbackInputStream$init$panda$io$InputStream(panda$io$PushbackInputStream* self, panda$io$InputStream* p_source) {
    panda$collections$Array* $tmp1 = (panda$collections$Array*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->pushbackBuffer = $tmp1;
    self->source = p_source;
}
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* self) {
    panda$core$UInt8 result5;
    panda$core$Int64 $tmp3 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp4 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3, ((panda$core$Int64) { 0 }));
    if ($tmp4.value) {
    {
        panda$core$Int64 $tmp6 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp7 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp8 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp7);
        result5 = ((panda$core$UInt8$wrapper*) $tmp8)->value;
        panda$core$Int64 $tmp9 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp10 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp9, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(self->pushbackBuffer, $tmp10);
        return ((panda$core$UInt8$nullable) { result5, true });
    }
    }
    panda$core$UInt8$nullable $tmp12 = (($fn11) self->source->$class->vtable[2])(self->source);
    return $tmp12;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_panda$core$UInt8(p_v)));
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$UInt8 $tmp13 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) wrap_panda$core$UInt8($tmp13)));
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp14;
    ITable* $tmp15 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp15->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp15 = $tmp15->next;
    }
    $fn17 $tmp16 = $tmp15->methods[0];
    panda$core$Int64 $tmp18 = $tmp16(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp19 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp18, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp14, $tmp19, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp21 = $tmp14.start.value;
    panda$core$Int64 i20 = { $tmp21 };
    int64_t $tmp23 = $tmp14.end.value;
    int64_t $tmp24 = $tmp14.step.value;
    bool $tmp25 = $tmp14.inclusive.value;
    bool $tmp32 = $tmp24 > 0;
    if ($tmp32) goto $l30; else goto $l31;
    $l30:;
    if ($tmp25) goto $l33; else goto $l34;
    $l33:;
    if ($tmp21 <= $tmp23) goto $l26; else goto $l28;
    $l34:;
    if ($tmp21 < $tmp23) goto $l26; else goto $l28;
    $l31:;
    if ($tmp25) goto $l35; else goto $l36;
    $l35:;
    if ($tmp21 >= $tmp23) goto $l26; else goto $l28;
    $l36:;
    if ($tmp21 > $tmp23) goto $l26; else goto $l28;
    $l26:;
    {
        ITable* $tmp38 = p_v->$class->itable;
        while ($tmp38->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp38 = $tmp38->next;
        }
        $fn40 $tmp39 = $tmp38->methods[0];
        panda$core$Object* $tmp41 = $tmp39(p_v, i20);
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp41)->value);
    }
    $l29:;
    if ($tmp32) goto $l43; else goto $l44;
    $l43:;
    int64_t $tmp45 = $tmp23 - i20.value;
    if ($tmp25) goto $l46; else goto $l47;
    $l46:;
    if ($tmp45 >= $tmp24) goto $l42; else goto $l28;
    $l47:;
    if ($tmp45 > $tmp24) goto $l42; else goto $l28;
    $l44:;
    int64_t $tmp49 = i20.value - $tmp23;
    if ($tmp25) goto $l50; else goto $l51;
    $l50:;
    if ($tmp49 >= -$tmp24) goto $l42; else goto $l28;
    $l51:;
    if ($tmp49 > -$tmp24) goto $l42; else goto $l28;
    $l42:;
    i20.value += $tmp24;
    goto $l26;
    $l28:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp53;
    ITable* $tmp54 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp54->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp54 = $tmp54->next;
    }
    $fn56 $tmp55 = $tmp54->methods[0];
    panda$core$Int64 $tmp57 = $tmp55(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp58 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp57, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp53, $tmp58, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp60 = $tmp53.start.value;
    panda$core$Int64 i59 = { $tmp60 };
    int64_t $tmp62 = $tmp53.end.value;
    int64_t $tmp63 = $tmp53.step.value;
    bool $tmp64 = $tmp53.inclusive.value;
    bool $tmp71 = $tmp63 > 0;
    if ($tmp71) goto $l69; else goto $l70;
    $l69:;
    if ($tmp64) goto $l72; else goto $l73;
    $l72:;
    if ($tmp60 <= $tmp62) goto $l65; else goto $l67;
    $l73:;
    if ($tmp60 < $tmp62) goto $l65; else goto $l67;
    $l70:;
    if ($tmp64) goto $l74; else goto $l75;
    $l74:;
    if ($tmp60 >= $tmp62) goto $l65; else goto $l67;
    $l75:;
    if ($tmp60 > $tmp62) goto $l65; else goto $l67;
    $l65:;
    {
        ITable* $tmp77 = p_v->$class->itable;
        while ($tmp77->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp77 = $tmp77->next;
        }
        $fn79 $tmp78 = $tmp77->methods[0];
        panda$core$Object* $tmp80 = $tmp78(p_v, i59);
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp80)->value);
    }
    $l68:;
    if ($tmp71) goto $l82; else goto $l83;
    $l82:;
    int64_t $tmp84 = $tmp62 - i59.value;
    if ($tmp64) goto $l85; else goto $l86;
    $l85:;
    if ($tmp84 >= $tmp63) goto $l81; else goto $l67;
    $l86:;
    if ($tmp84 > $tmp63) goto $l81; else goto $l67;
    $l83:;
    int64_t $tmp88 = i59.value - $tmp62;
    if ($tmp64) goto $l89; else goto $l90;
    $l89:;
    if ($tmp88 >= -$tmp63) goto $l81; else goto $l67;
    $l90:;
    if ($tmp88 > -$tmp63) goto $l81; else goto $l67;
    $l81:;
    i59.value += $tmp63;
    goto $l65;
    $l67:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp92 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp92);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp93;
    ITable* $tmp94 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp94->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp94 = $tmp94->next;
    }
    $fn96 $tmp95 = $tmp94->methods[0];
    panda$core$Int64 $tmp97 = $tmp95(((panda$collections$CollectionView*) p_c));
    panda$core$Int64 $tmp98 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp97, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp93, $tmp98, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp100 = $tmp93.start.value;
    panda$core$Int64 i99 = { $tmp100 };
    int64_t $tmp102 = $tmp93.end.value;
    int64_t $tmp103 = $tmp93.step.value;
    bool $tmp104 = $tmp93.inclusive.value;
    bool $tmp111 = $tmp103 > 0;
    if ($tmp111) goto $l109; else goto $l110;
    $l109:;
    if ($tmp104) goto $l112; else goto $l113;
    $l112:;
    if ($tmp100 <= $tmp102) goto $l105; else goto $l107;
    $l113:;
    if ($tmp100 < $tmp102) goto $l105; else goto $l107;
    $l110:;
    if ($tmp104) goto $l114; else goto $l115;
    $l114:;
    if ($tmp100 >= $tmp102) goto $l105; else goto $l107;
    $l115:;
    if ($tmp100 > $tmp102) goto $l105; else goto $l107;
    $l105:;
    {
        ITable* $tmp117 = p_c->$class->itable;
        while ($tmp117->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp117 = $tmp117->next;
        }
        $fn119 $tmp118 = $tmp117->methods[0];
        panda$core$Object* $tmp120 = $tmp118(p_c, i99);
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp120)->value);
    }
    $l108:;
    if ($tmp111) goto $l122; else goto $l123;
    $l122:;
    int64_t $tmp124 = $tmp102 - i99.value;
    if ($tmp104) goto $l125; else goto $l126;
    $l125:;
    if ($tmp124 >= $tmp103) goto $l121; else goto $l107;
    $l126:;
    if ($tmp124 > $tmp103) goto $l121; else goto $l107;
    $l123:;
    int64_t $tmp128 = i99.value - $tmp102;
    if ($tmp104) goto $l129; else goto $l130;
    $l129:;
    if ($tmp128 >= -$tmp103) goto $l121; else goto $l107;
    $l130:;
    if ($tmp128 > -$tmp103) goto $l121; else goto $l107;
    $l121:;
    i99.value += $tmp103;
    goto $l105;
    $l107:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp132 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp132);
}

