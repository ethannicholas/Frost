#include "panda/io/PushbackInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
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
#include "panda/core/String.h"


panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$UInt8$nullable (*$fn12)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn20)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn43)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn59)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn82)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn99)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn122)(panda$collections$ListView*, panda$core$Int64);


void panda$io$PushbackInputStream$init$panda$io$InputStream(panda$io$PushbackInputStream* self, panda$io$InputStream* p_source) {
    panda$collections$Array* $tmp1 = (panda$collections$Array*) malloc(40);
    $tmp1->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1->refCount.value = 1;
    panda$collections$Array$init($tmp1);
    self->pushbackBuffer = $tmp1;
    {
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_source));
        self->source = ((panda$io$InputStream*) $tmp3);
    }
}
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* self) {
    panda$core$UInt8 result6;
    panda$core$Int64 $tmp4 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp5 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4, ((panda$core$Int64) { 0 }));
    if ($tmp5.value) {
    {
        panda$core$Int64 $tmp7 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp8 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp7, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp9 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp8);
        result6 = ((panda$core$UInt8$wrapper*) $tmp9)->value;
        panda$core$Int64 $tmp10 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp11 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp10, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(self->pushbackBuffer, $tmp11);
        return ((panda$core$UInt8$nullable) { result6, true });
    }
    }
    panda$core$UInt8$nullable $tmp13 = (($fn12) self->source->$class->vtable[2])(self->source);
    return $tmp13;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$core$UInt8$wrapper* $tmp14;
    $tmp14 = (panda$core$UInt8$wrapper*) malloc(13);
    $tmp14->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
    $tmp14->refCount = 1;
    $tmp14->value = p_v;
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) $tmp14));
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$UInt8 $tmp15 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp16;
    $tmp16 = (panda$core$UInt8$wrapper*) malloc(13);
    $tmp16->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
    $tmp16->refCount = 1;
    $tmp16->value = $tmp15;
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, ((panda$core$Object*) $tmp16));
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp17;
    ITable* $tmp18 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp18->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp18 = $tmp18->next;
    }
    $fn20 $tmp19 = $tmp18->methods[0];
    panda$core$Int64 $tmp21 = $tmp19(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp22 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp21, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp17, $tmp22, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp24 = $tmp17.start.value;
    panda$core$Int64 i23 = { $tmp24 };
    int64_t $tmp26 = $tmp17.end.value;
    int64_t $tmp27 = $tmp17.step.value;
    bool $tmp28 = $tmp17.inclusive.value;
    bool $tmp35 = $tmp27 > 0;
    if ($tmp35) goto $l33; else goto $l34;
    $l33:;
    if ($tmp28) goto $l36; else goto $l37;
    $l36:;
    if ($tmp24 <= $tmp26) goto $l29; else goto $l31;
    $l37:;
    if ($tmp24 < $tmp26) goto $l29; else goto $l31;
    $l34:;
    if ($tmp28) goto $l38; else goto $l39;
    $l38:;
    if ($tmp24 >= $tmp26) goto $l29; else goto $l31;
    $l39:;
    if ($tmp24 > $tmp26) goto $l29; else goto $l31;
    $l29:;
    {
        ITable* $tmp41 = p_v->$class->itable;
        while ($tmp41->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp41 = $tmp41->next;
        }
        $fn43 $tmp42 = $tmp41->methods[0];
        panda$core$Object* $tmp44 = $tmp42(p_v, i23);
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp44)->value);
    }
    $l32:;
    if ($tmp35) goto $l46; else goto $l47;
    $l46:;
    int64_t $tmp48 = $tmp26 - i23.value;
    if ($tmp28) goto $l49; else goto $l50;
    $l49:;
    if ((uint64_t) $tmp48 >= $tmp27) goto $l45; else goto $l31;
    $l50:;
    if ((uint64_t) $tmp48 > $tmp27) goto $l45; else goto $l31;
    $l47:;
    int64_t $tmp52 = i23.value - $tmp26;
    if ($tmp28) goto $l53; else goto $l54;
    $l53:;
    if ((uint64_t) $tmp52 >= -$tmp27) goto $l45; else goto $l31;
    $l54:;
    if ((uint64_t) $tmp52 > -$tmp27) goto $l45; else goto $l31;
    $l45:;
    i23.value += $tmp27;
    goto $l29;
    $l31:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp56;
    ITable* $tmp57 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp57->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp57 = $tmp57->next;
    }
    $fn59 $tmp58 = $tmp57->methods[0];
    panda$core$Int64 $tmp60 = $tmp58(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp61 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp60, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp56, $tmp61, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp63 = $tmp56.start.value;
    panda$core$Int64 i62 = { $tmp63 };
    int64_t $tmp65 = $tmp56.end.value;
    int64_t $tmp66 = $tmp56.step.value;
    bool $tmp67 = $tmp56.inclusive.value;
    bool $tmp74 = $tmp66 > 0;
    if ($tmp74) goto $l72; else goto $l73;
    $l72:;
    if ($tmp67) goto $l75; else goto $l76;
    $l75:;
    if ($tmp63 <= $tmp65) goto $l68; else goto $l70;
    $l76:;
    if ($tmp63 < $tmp65) goto $l68; else goto $l70;
    $l73:;
    if ($tmp67) goto $l77; else goto $l78;
    $l77:;
    if ($tmp63 >= $tmp65) goto $l68; else goto $l70;
    $l78:;
    if ($tmp63 > $tmp65) goto $l68; else goto $l70;
    $l68:;
    {
        ITable* $tmp80 = p_v->$class->itable;
        while ($tmp80->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp80 = $tmp80->next;
        }
        $fn82 $tmp81 = $tmp80->methods[0];
        panda$core$Object* $tmp83 = $tmp81(p_v, i62);
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp83)->value);
    }
    $l71:;
    if ($tmp74) goto $l85; else goto $l86;
    $l85:;
    int64_t $tmp87 = $tmp65 - i62.value;
    if ($tmp67) goto $l88; else goto $l89;
    $l88:;
    if ((uint64_t) $tmp87 >= $tmp66) goto $l84; else goto $l70;
    $l89:;
    if ((uint64_t) $tmp87 > $tmp66) goto $l84; else goto $l70;
    $l86:;
    int64_t $tmp91 = i62.value - $tmp65;
    if ($tmp67) goto $l92; else goto $l93;
    $l92:;
    if ((uint64_t) $tmp91 >= -$tmp66) goto $l84; else goto $l70;
    $l93:;
    if ((uint64_t) $tmp91 > -$tmp66) goto $l84; else goto $l70;
    $l84:;
    i62.value += $tmp66;
    goto $l68;
    $l70:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp95 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp95);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp96;
    ITable* $tmp97 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp97->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp97 = $tmp97->next;
    }
    $fn99 $tmp98 = $tmp97->methods[0];
    panda$core$Int64 $tmp100 = $tmp98(((panda$collections$CollectionView*) p_c));
    panda$core$Int64 $tmp101 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp100, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp96, $tmp101, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp103 = $tmp96.start.value;
    panda$core$Int64 i102 = { $tmp103 };
    int64_t $tmp105 = $tmp96.end.value;
    int64_t $tmp106 = $tmp96.step.value;
    bool $tmp107 = $tmp96.inclusive.value;
    bool $tmp114 = $tmp106 > 0;
    if ($tmp114) goto $l112; else goto $l113;
    $l112:;
    if ($tmp107) goto $l115; else goto $l116;
    $l115:;
    if ($tmp103 <= $tmp105) goto $l108; else goto $l110;
    $l116:;
    if ($tmp103 < $tmp105) goto $l108; else goto $l110;
    $l113:;
    if ($tmp107) goto $l117; else goto $l118;
    $l117:;
    if ($tmp103 >= $tmp105) goto $l108; else goto $l110;
    $l118:;
    if ($tmp103 > $tmp105) goto $l108; else goto $l110;
    $l108:;
    {
        ITable* $tmp120 = p_c->$class->itable;
        while ($tmp120->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp120 = $tmp120->next;
        }
        $fn122 $tmp121 = $tmp120->methods[0];
        panda$core$Object* $tmp123 = $tmp121(p_c, i102);
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp123)->value);
    }
    $l111:;
    if ($tmp114) goto $l125; else goto $l126;
    $l125:;
    int64_t $tmp127 = $tmp105 - i102.value;
    if ($tmp107) goto $l128; else goto $l129;
    $l128:;
    if ((uint64_t) $tmp127 >= $tmp106) goto $l124; else goto $l110;
    $l129:;
    if ((uint64_t) $tmp127 > $tmp106) goto $l124; else goto $l110;
    $l126:;
    int64_t $tmp131 = i102.value - $tmp105;
    if ($tmp107) goto $l132; else goto $l133;
    $l132:;
    if ((uint64_t) $tmp131 >= -$tmp106) goto $l124; else goto $l110;
    $l133:;
    if ((uint64_t) $tmp131 > -$tmp106) goto $l124; else goto $l110;
    $l124:;
    i102.value += $tmp106;
    goto $l108;
    $l110:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp135 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp135);
}

