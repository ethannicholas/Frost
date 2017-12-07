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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Char8.h"
#include "panda/core/String.h"


panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$UInt8$nullable (*$fn11)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn17)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn40)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn42)(panda$io$PushbackInputStream*, panda$core$UInt8);
typedef panda$core$Int64 (*$fn57)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn80)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn82)(panda$io$PushbackInputStream*, panda$core$Int8);
typedef void (*$fn95)(panda$io$PushbackInputStream*, panda$core$UInt8);
typedef panda$core$Int64 (*$fn99)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn122)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn124)(panda$io$PushbackInputStream*, panda$core$Char8);
typedef void (*$fn137)(panda$io$PushbackInputStream*, panda$collections$ListView*);


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
    panda$core$Range$LTpanda$core$Int64$GT $tmp14;
    ITable* $tmp15 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp15->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp15 = $tmp15->next;
    }
    $fn17 $tmp16 = $tmp15->methods[0];
    panda$core$Int64 $tmp18 = $tmp16(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp19 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp18, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp14, $tmp19, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
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
        (($fn42) self->$class->vtable[13])(self, ((panda$core$UInt8$wrapper*) $tmp41)->value);
    }
    $l29:;
    if ($tmp32) goto $l44; else goto $l45;
    $l44:;
    int64_t $tmp46 = $tmp23 - i20.value;
    if ($tmp25) goto $l47; else goto $l48;
    $l47:;
    if ($tmp46 >= $tmp24) goto $l43; else goto $l28;
    $l48:;
    if ($tmp46 > $tmp24) goto $l43; else goto $l28;
    $l45:;
    int64_t $tmp50 = i20.value - $tmp23;
    if ($tmp25) goto $l51; else goto $l52;
    $l51:;
    if ($tmp50 >= -$tmp24) goto $l43; else goto $l28;
    $l52:;
    if ($tmp50 > -$tmp24) goto $l43; else goto $l28;
    $l43:;
    i20.value += $tmp24;
    goto $l26;
    $l28:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp54;
    ITable* $tmp55 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp55->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp55 = $tmp55->next;
    }
    $fn57 $tmp56 = $tmp55->methods[0];
    panda$core$Int64 $tmp58 = $tmp56(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp59 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp58, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp54, $tmp59, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp61 = $tmp54.start.value;
    panda$core$Int64 i60 = { $tmp61 };
    int64_t $tmp63 = $tmp54.end.value;
    int64_t $tmp64 = $tmp54.step.value;
    bool $tmp65 = $tmp54.inclusive.value;
    bool $tmp72 = $tmp64 > 0;
    if ($tmp72) goto $l70; else goto $l71;
    $l70:;
    if ($tmp65) goto $l73; else goto $l74;
    $l73:;
    if ($tmp61 <= $tmp63) goto $l66; else goto $l68;
    $l74:;
    if ($tmp61 < $tmp63) goto $l66; else goto $l68;
    $l71:;
    if ($tmp65) goto $l75; else goto $l76;
    $l75:;
    if ($tmp61 >= $tmp63) goto $l66; else goto $l68;
    $l76:;
    if ($tmp61 > $tmp63) goto $l66; else goto $l68;
    $l66:;
    {
        ITable* $tmp78 = p_v->$class->itable;
        while ($tmp78->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp78 = $tmp78->next;
        }
        $fn80 $tmp79 = $tmp78->methods[0];
        panda$core$Object* $tmp81 = $tmp79(p_v, i60);
        (($fn82) self->$class->vtable[14])(self, ((panda$core$Int8$wrapper*) $tmp81)->value);
    }
    $l69:;
    if ($tmp72) goto $l84; else goto $l85;
    $l84:;
    int64_t $tmp86 = $tmp63 - i60.value;
    if ($tmp65) goto $l87; else goto $l88;
    $l87:;
    if ($tmp86 >= $tmp64) goto $l83; else goto $l68;
    $l88:;
    if ($tmp86 > $tmp64) goto $l83; else goto $l68;
    $l85:;
    int64_t $tmp90 = i60.value - $tmp63;
    if ($tmp65) goto $l91; else goto $l92;
    $l91:;
    if ($tmp90 >= -$tmp64) goto $l83; else goto $l68;
    $l92:;
    if ($tmp90 > -$tmp64) goto $l83; else goto $l68;
    $l83:;
    i60.value += $tmp64;
    goto $l66;
    $l68:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp94 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    (($fn95) self->$class->vtable[13])(self, $tmp94);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp96;
    ITable* $tmp97 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp97->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp97 = $tmp97->next;
    }
    $fn99 $tmp98 = $tmp97->methods[0];
    panda$core$Int64 $tmp100 = $tmp98(((panda$collections$CollectionView*) p_c));
    panda$core$Int64 $tmp101 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp100, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp96, $tmp101, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
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
        (($fn124) self->$class->vtable[17])(self, ((panda$core$Char8$wrapper*) $tmp123)->value);
    }
    $l111:;
    if ($tmp114) goto $l126; else goto $l127;
    $l126:;
    int64_t $tmp128 = $tmp105 - i102.value;
    if ($tmp107) goto $l129; else goto $l130;
    $l129:;
    if ($tmp128 >= $tmp106) goto $l125; else goto $l110;
    $l130:;
    if ($tmp128 > $tmp106) goto $l125; else goto $l110;
    $l127:;
    int64_t $tmp132 = i102.value - $tmp105;
    if ($tmp107) goto $l133; else goto $l134;
    $l133:;
    if ($tmp132 >= -$tmp106) goto $l125; else goto $l110;
    $l134:;
    if ($tmp132 > -$tmp106) goto $l125; else goto $l110;
    $l125:;
    i102.value += $tmp106;
    goto $l108;
    $l110:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp136 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    (($fn137) self->$class->vtable[18])(self, $tmp136);
}

