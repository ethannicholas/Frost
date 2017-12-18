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
typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn42)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn58)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn81)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn98)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn121)(panda$collections$ListView*, panda$core$Int64);


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
    panda$core$UInt8$wrapper* $tmp13;
    $tmp13 = (panda$core$UInt8$wrapper*) malloc(13);
    $tmp13->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
    $tmp13->refCount = 1;
    $tmp13->value = p_v;
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) $tmp13));
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$UInt8 $tmp14 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp15;
    $tmp15 = (panda$core$UInt8$wrapper*) malloc(13);
    $tmp15->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
    $tmp15->refCount = 1;
    $tmp15->value = $tmp14;
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) $tmp15));
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp16;
    ITable* $tmp17 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp17 = $tmp17->next;
    }
    $fn19 $tmp18 = $tmp17->methods[0];
    panda$core$Int64 $tmp20 = $tmp18(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp21 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp20, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp16, $tmp21, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp23 = $tmp16.start.value;
    panda$core$Int64 i22 = { $tmp23 };
    int64_t $tmp25 = $tmp16.end.value;
    int64_t $tmp26 = $tmp16.step.value;
    bool $tmp27 = $tmp16.inclusive.value;
    bool $tmp34 = $tmp26 > 0;
    if ($tmp34) goto $l32; else goto $l33;
    $l32:;
    if ($tmp27) goto $l35; else goto $l36;
    $l35:;
    if ($tmp23 <= $tmp25) goto $l28; else goto $l30;
    $l36:;
    if ($tmp23 < $tmp25) goto $l28; else goto $l30;
    $l33:;
    if ($tmp27) goto $l37; else goto $l38;
    $l37:;
    if ($tmp23 >= $tmp25) goto $l28; else goto $l30;
    $l38:;
    if ($tmp23 > $tmp25) goto $l28; else goto $l30;
    $l28:;
    {
        ITable* $tmp40 = p_v->$class->itable;
        while ($tmp40->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp40 = $tmp40->next;
        }
        $fn42 $tmp41 = $tmp40->methods[0];
        panda$core$Object* $tmp43 = $tmp41(p_v, i22);
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp43)->value);
    }
    $l31:;
    if ($tmp34) goto $l45; else goto $l46;
    $l45:;
    int64_t $tmp47 = $tmp25 - i22.value;
    if ($tmp27) goto $l48; else goto $l49;
    $l48:;
    if ((uint64_t) $tmp47 >= $tmp26) goto $l44; else goto $l30;
    $l49:;
    if ((uint64_t) $tmp47 > $tmp26) goto $l44; else goto $l30;
    $l46:;
    int64_t $tmp51 = i22.value - $tmp25;
    if ($tmp27) goto $l52; else goto $l53;
    $l52:;
    if ((uint64_t) $tmp51 >= -$tmp26) goto $l44; else goto $l30;
    $l53:;
    if ((uint64_t) $tmp51 > -$tmp26) goto $l44; else goto $l30;
    $l44:;
    i22.value += $tmp26;
    goto $l28;
    $l30:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp55;
    ITable* $tmp56 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp56->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp56 = $tmp56->next;
    }
    $fn58 $tmp57 = $tmp56->methods[0];
    panda$core$Int64 $tmp59 = $tmp57(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp60 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp59, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp55, $tmp60, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp62 = $tmp55.start.value;
    panda$core$Int64 i61 = { $tmp62 };
    int64_t $tmp64 = $tmp55.end.value;
    int64_t $tmp65 = $tmp55.step.value;
    bool $tmp66 = $tmp55.inclusive.value;
    bool $tmp73 = $tmp65 > 0;
    if ($tmp73) goto $l71; else goto $l72;
    $l71:;
    if ($tmp66) goto $l74; else goto $l75;
    $l74:;
    if ($tmp62 <= $tmp64) goto $l67; else goto $l69;
    $l75:;
    if ($tmp62 < $tmp64) goto $l67; else goto $l69;
    $l72:;
    if ($tmp66) goto $l76; else goto $l77;
    $l76:;
    if ($tmp62 >= $tmp64) goto $l67; else goto $l69;
    $l77:;
    if ($tmp62 > $tmp64) goto $l67; else goto $l69;
    $l67:;
    {
        ITable* $tmp79 = p_v->$class->itable;
        while ($tmp79->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp79 = $tmp79->next;
        }
        $fn81 $tmp80 = $tmp79->methods[0];
        panda$core$Object* $tmp82 = $tmp80(p_v, i61);
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp82)->value);
    }
    $l70:;
    if ($tmp73) goto $l84; else goto $l85;
    $l84:;
    int64_t $tmp86 = $tmp64 - i61.value;
    if ($tmp66) goto $l87; else goto $l88;
    $l87:;
    if ((uint64_t) $tmp86 >= $tmp65) goto $l83; else goto $l69;
    $l88:;
    if ((uint64_t) $tmp86 > $tmp65) goto $l83; else goto $l69;
    $l85:;
    int64_t $tmp90 = i61.value - $tmp64;
    if ($tmp66) goto $l91; else goto $l92;
    $l91:;
    if ((uint64_t) $tmp90 >= -$tmp65) goto $l83; else goto $l69;
    $l92:;
    if ((uint64_t) $tmp90 > -$tmp65) goto $l83; else goto $l69;
    $l83:;
    i61.value += $tmp65;
    goto $l67;
    $l69:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp94 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp94);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp95;
    ITable* $tmp96 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp96->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp96 = $tmp96->next;
    }
    $fn98 $tmp97 = $tmp96->methods[0];
    panda$core$Int64 $tmp99 = $tmp97(((panda$collections$CollectionView*) p_c));
    panda$core$Int64 $tmp100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp99, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp95, $tmp100, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp102 = $tmp95.start.value;
    panda$core$Int64 i101 = { $tmp102 };
    int64_t $tmp104 = $tmp95.end.value;
    int64_t $tmp105 = $tmp95.step.value;
    bool $tmp106 = $tmp95.inclusive.value;
    bool $tmp113 = $tmp105 > 0;
    if ($tmp113) goto $l111; else goto $l112;
    $l111:;
    if ($tmp106) goto $l114; else goto $l115;
    $l114:;
    if ($tmp102 <= $tmp104) goto $l107; else goto $l109;
    $l115:;
    if ($tmp102 < $tmp104) goto $l107; else goto $l109;
    $l112:;
    if ($tmp106) goto $l116; else goto $l117;
    $l116:;
    if ($tmp102 >= $tmp104) goto $l107; else goto $l109;
    $l117:;
    if ($tmp102 > $tmp104) goto $l107; else goto $l109;
    $l107:;
    {
        ITable* $tmp119 = p_c->$class->itable;
        while ($tmp119->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp119 = $tmp119->next;
        }
        $fn121 $tmp120 = $tmp119->methods[0];
        panda$core$Object* $tmp122 = $tmp120(p_c, i101);
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp122)->value);
    }
    $l110:;
    if ($tmp113) goto $l124; else goto $l125;
    $l124:;
    int64_t $tmp126 = $tmp104 - i101.value;
    if ($tmp106) goto $l127; else goto $l128;
    $l127:;
    if ((uint64_t) $tmp126 >= $tmp105) goto $l123; else goto $l109;
    $l128:;
    if ((uint64_t) $tmp126 > $tmp105) goto $l123; else goto $l109;
    $l125:;
    int64_t $tmp130 = i101.value - $tmp104;
    if ($tmp106) goto $l131; else goto $l132;
    $l131:;
    if ((uint64_t) $tmp130 >= -$tmp105) goto $l123; else goto $l109;
    $l132:;
    if ((uint64_t) $tmp130 > -$tmp105) goto $l123; else goto $l109;
    $l123:;
    i101.value += $tmp105;
    goto $l107;
    $l109:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp134 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp134);
}

