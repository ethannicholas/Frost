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
panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$PushbackInputStream$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$UInt8$nullable (*$fn21)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn32)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn60)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn76)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn104)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn121)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn149)(panda$collections$ListView*, panda$core$Int64);

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
    panda$core$Int64 $tmp8;
    panda$core$UInt8 result10;
    panda$core$Object* $tmp11;
    panda$core$Int64 $tmp13;
    panda$core$Int64 $tmp17;
    panda$core$UInt8$nullable $returnValue19;
    panda$core$Int64 $tmp7 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp8, 0);
    panda$core$Bit $tmp9 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp7, $tmp8);
    if ($tmp9.value) {
    {
        panda$core$Int64 $tmp12 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp13, 1);
        panda$core$Int64 $tmp14 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp12, $tmp13);
        panda$core$Object* $tmp15 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp14);
        $tmp11 = $tmp15;
        result10 = ((panda$core$UInt8$wrapper*) $tmp11)->value;
        panda$core$Panda$unref$panda$core$Object($tmp11);
        panda$core$Int64 $tmp16 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp17, 1);
        panda$core$Int64 $tmp18 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp16, $tmp17);
        panda$collections$Array$removeIndex$panda$core$Int64(self->pushbackBuffer, $tmp18);
        $returnValue19 = ((panda$core$UInt8$nullable) { result10, true });
        return $returnValue19;
    }
    }
    panda$core$UInt8$nullable $tmp22 = (($fn21) self->source->$class->vtable[2])(self->source);
    $returnValue19 = $tmp22;
    return $returnValue19;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$core$Object* $tmp24;
    panda$core$UInt8$wrapper* $tmp25;
    $tmp25 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp25->value = p_v;
    $tmp24 = ((panda$core$Object*) $tmp25);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp24);
    panda$core$Panda$unref$panda$core$Object($tmp24);
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$Object* $tmp26;
    panda$core$UInt8 $tmp27 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp28;
    $tmp28 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp28->value = $tmp27;
    $tmp26 = ((panda$core$Object*) $tmp28);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp26);
    panda$core$Panda$unref$panda$core$Object($tmp26);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp29;
    panda$core$Int64 $tmp34;
    panda$core$Int64 $tmp36;
    panda$core$Int64 $tmp37;
    panda$core$Bit $tmp38;
    panda$core$Object* $tmp57;
    ITable* $tmp30 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp30->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp30 = $tmp30->next;
    }
    $fn32 $tmp31 = $tmp30->methods[0];
    panda$core$Int64 $tmp33 = $tmp31(((panda$collections$CollectionView*) p_v));
    panda$core$Int64$init$builtin_int64(&$tmp34, 1);
    panda$core$Int64 $tmp35 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp33, $tmp34);
    panda$core$Int64$init$builtin_int64(&$tmp36, 0);
    panda$core$Int64$init$builtin_int64(&$tmp37, -1);
    panda$core$Bit$init$builtin_bit(&$tmp38, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp29, $tmp35, $tmp36, $tmp37, $tmp38);
    int64_t $tmp40 = $tmp29.start.value;
    panda$core$Int64 i39 = { $tmp40 };
    int64_t $tmp42 = $tmp29.end.value;
    int64_t $tmp43 = $tmp29.step.value;
    bool $tmp44 = $tmp29.inclusive.value;
    bool $tmp51 = $tmp43 > 0;
    if ($tmp51) goto $l49; else goto $l50;
    $l49:;
    if ($tmp44) goto $l52; else goto $l53;
    $l52:;
    if ($tmp40 <= $tmp42) goto $l45; else goto $l47;
    $l53:;
    if ($tmp40 < $tmp42) goto $l45; else goto $l47;
    $l50:;
    if ($tmp44) goto $l54; else goto $l55;
    $l54:;
    if ($tmp40 >= $tmp42) goto $l45; else goto $l47;
    $l55:;
    if ($tmp40 > $tmp42) goto $l45; else goto $l47;
    $l45:;
    {
        ITable* $tmp58 = p_v->$class->itable;
        while ($tmp58->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp58 = $tmp58->next;
        }
        $fn60 $tmp59 = $tmp58->methods[0];
        panda$core$Object* $tmp61 = $tmp59(p_v, i39);
        $tmp57 = $tmp61;
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp57)->value);
        panda$core$Panda$unref$panda$core$Object($tmp57);
    }
    $l48:;
    if ($tmp51) goto $l63; else goto $l64;
    $l63:;
    int64_t $tmp65 = $tmp42 - i39.value;
    if ($tmp44) goto $l66; else goto $l67;
    $l66:;
    if ((uint64_t) $tmp65 >= $tmp43) goto $l62; else goto $l47;
    $l67:;
    if ((uint64_t) $tmp65 > $tmp43) goto $l62; else goto $l47;
    $l64:;
    int64_t $tmp69 = i39.value - $tmp42;
    if ($tmp44) goto $l70; else goto $l71;
    $l70:;
    if ((uint64_t) $tmp69 >= -$tmp43) goto $l62; else goto $l47;
    $l71:;
    if ((uint64_t) $tmp69 > -$tmp43) goto $l62; else goto $l47;
    $l62:;
    i39.value += $tmp43;
    goto $l45;
    $l47:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp73;
    panda$core$Int64 $tmp78;
    panda$core$Int64 $tmp80;
    panda$core$Int64 $tmp81;
    panda$core$Bit $tmp82;
    panda$core$Object* $tmp101;
    ITable* $tmp74 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp74->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp74 = $tmp74->next;
    }
    $fn76 $tmp75 = $tmp74->methods[0];
    panda$core$Int64 $tmp77 = $tmp75(((panda$collections$CollectionView*) p_v));
    panda$core$Int64$init$builtin_int64(&$tmp78, 1);
    panda$core$Int64 $tmp79 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp77, $tmp78);
    panda$core$Int64$init$builtin_int64(&$tmp80, 0);
    panda$core$Int64$init$builtin_int64(&$tmp81, -1);
    panda$core$Bit$init$builtin_bit(&$tmp82, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp73, $tmp79, $tmp80, $tmp81, $tmp82);
    int64_t $tmp84 = $tmp73.start.value;
    panda$core$Int64 i83 = { $tmp84 };
    int64_t $tmp86 = $tmp73.end.value;
    int64_t $tmp87 = $tmp73.step.value;
    bool $tmp88 = $tmp73.inclusive.value;
    bool $tmp95 = $tmp87 > 0;
    if ($tmp95) goto $l93; else goto $l94;
    $l93:;
    if ($tmp88) goto $l96; else goto $l97;
    $l96:;
    if ($tmp84 <= $tmp86) goto $l89; else goto $l91;
    $l97:;
    if ($tmp84 < $tmp86) goto $l89; else goto $l91;
    $l94:;
    if ($tmp88) goto $l98; else goto $l99;
    $l98:;
    if ($tmp84 >= $tmp86) goto $l89; else goto $l91;
    $l99:;
    if ($tmp84 > $tmp86) goto $l89; else goto $l91;
    $l89:;
    {
        ITable* $tmp102 = p_v->$class->itable;
        while ($tmp102->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp102 = $tmp102->next;
        }
        $fn104 $tmp103 = $tmp102->methods[0];
        panda$core$Object* $tmp105 = $tmp103(p_v, i83);
        $tmp101 = $tmp105;
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp101)->value);
        panda$core$Panda$unref$panda$core$Object($tmp101);
    }
    $l92:;
    if ($tmp95) goto $l107; else goto $l108;
    $l107:;
    int64_t $tmp109 = $tmp86 - i83.value;
    if ($tmp88) goto $l110; else goto $l111;
    $l110:;
    if ((uint64_t) $tmp109 >= $tmp87) goto $l106; else goto $l91;
    $l111:;
    if ((uint64_t) $tmp109 > $tmp87) goto $l106; else goto $l91;
    $l108:;
    int64_t $tmp113 = i83.value - $tmp86;
    if ($tmp88) goto $l114; else goto $l115;
    $l114:;
    if ((uint64_t) $tmp113 >= -$tmp87) goto $l106; else goto $l91;
    $l115:;
    if ((uint64_t) $tmp113 > -$tmp87) goto $l106; else goto $l91;
    $l106:;
    i83.value += $tmp87;
    goto $l89;
    $l91:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp117 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp117);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp118;
    panda$core$Int64 $tmp123;
    panda$core$Int64 $tmp125;
    panda$core$Int64 $tmp126;
    panda$core$Bit $tmp127;
    panda$core$Object* $tmp146;
    ITable* $tmp119 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp119->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp119 = $tmp119->next;
    }
    $fn121 $tmp120 = $tmp119->methods[0];
    panda$core$Int64 $tmp122 = $tmp120(((panda$collections$CollectionView*) p_c));
    panda$core$Int64$init$builtin_int64(&$tmp123, 1);
    panda$core$Int64 $tmp124 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp122, $tmp123);
    panda$core$Int64$init$builtin_int64(&$tmp125, 0);
    panda$core$Int64$init$builtin_int64(&$tmp126, -1);
    panda$core$Bit$init$builtin_bit(&$tmp127, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp118, $tmp124, $tmp125, $tmp126, $tmp127);
    int64_t $tmp129 = $tmp118.start.value;
    panda$core$Int64 i128 = { $tmp129 };
    int64_t $tmp131 = $tmp118.end.value;
    int64_t $tmp132 = $tmp118.step.value;
    bool $tmp133 = $tmp118.inclusive.value;
    bool $tmp140 = $tmp132 > 0;
    if ($tmp140) goto $l138; else goto $l139;
    $l138:;
    if ($tmp133) goto $l141; else goto $l142;
    $l141:;
    if ($tmp129 <= $tmp131) goto $l134; else goto $l136;
    $l142:;
    if ($tmp129 < $tmp131) goto $l134; else goto $l136;
    $l139:;
    if ($tmp133) goto $l143; else goto $l144;
    $l143:;
    if ($tmp129 >= $tmp131) goto $l134; else goto $l136;
    $l144:;
    if ($tmp129 > $tmp131) goto $l134; else goto $l136;
    $l134:;
    {
        ITable* $tmp147 = p_c->$class->itable;
        while ($tmp147->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp147 = $tmp147->next;
        }
        $fn149 $tmp148 = $tmp147->methods[0];
        panda$core$Object* $tmp150 = $tmp148(p_c, i128);
        $tmp146 = $tmp150;
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp146)->value);
        panda$core$Panda$unref$panda$core$Object($tmp146);
    }
    $l137:;
    if ($tmp140) goto $l152; else goto $l153;
    $l152:;
    int64_t $tmp154 = $tmp131 - i128.value;
    if ($tmp133) goto $l155; else goto $l156;
    $l155:;
    if ((uint64_t) $tmp154 >= $tmp132) goto $l151; else goto $l136;
    $l156:;
    if ((uint64_t) $tmp154 > $tmp132) goto $l151; else goto $l136;
    $l153:;
    int64_t $tmp158 = i128.value - $tmp131;
    if ($tmp133) goto $l159; else goto $l160;
    $l159:;
    if ((uint64_t) $tmp158 >= -$tmp132) goto $l151; else goto $l136;
    $l160:;
    if ((uint64_t) $tmp158 > -$tmp132) goto $l151; else goto $l136;
    $l151:;
    i128.value += $tmp132;
    goto $l134;
    $l136:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp162;
    panda$collections$ListView* $tmp163 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    $tmp162 = $tmp163;
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp162);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
}
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* self) {
    int $tmp166;
    {
    }
    $tmp166 = -1;
    goto $l164;
    $l164:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp166) {
        case -1: goto $l167;
    }
    $l167:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

