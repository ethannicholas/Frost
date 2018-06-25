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
panda$io$PushbackInputStream$class_type panda$io$PushbackInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$PushbackInputStream$cleanup, panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$R$panda$core$UInt16$Q, panda$io$InputStream$read$R$panda$core$UInt32$Q, panda$io$InputStream$read$R$panda$core$UInt64$Q, panda$io$InputStream$read$R$panda$core$Int8$Q, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT, panda$io$PushbackInputStream$pushback$panda$core$UInt8, panda$io$PushbackInputStream$pushback$panda$core$Int8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT, panda$io$PushbackInputStream$pushback$panda$core$Char8, panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT, panda$io$PushbackInputStream$pushback$panda$core$String} };

typedef panda$core$UInt8$nullable (*$fn23)(panda$io$InputStream*);
typedef panda$core$Int64 (*$fn34)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn62)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn78)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn106)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn123)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn151)(panda$collections$ListView*, panda$core$Int64);

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
    panda$io$InputStream$init(((panda$io$InputStream*) self));
}
panda$core$UInt8$nullable panda$io$PushbackInputStream$read$R$panda$core$UInt8$Q(panda$io$PushbackInputStream* self) {
    panda$core$Int64 $tmp8;
    panda$core$UInt8 result10;
    panda$core$Object* $tmp11;
    panda$core$Int64 $tmp13;
    panda$core$Object* $tmp16;
    panda$core$Int64 $tmp18;
    panda$core$UInt8$nullable $returnValue21;
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
        panda$core$Int64 $tmp17 = panda$collections$Array$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp18, 1);
        panda$core$Int64 $tmp19 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp17, $tmp18);
        panda$core$Object* $tmp20 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self->pushbackBuffer, $tmp19);
        $tmp16 = $tmp20;
        panda$core$Panda$unref$panda$core$Object($tmp16);
        $returnValue21 = ((panda$core$UInt8$nullable) { result10, true });
        return $returnValue21;
    }
    }
    panda$core$UInt8$nullable $tmp24 = (($fn23) self->source->$class->vtable[2])(self->source);
    $returnValue21 = $tmp24;
    return $returnValue21;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$core$Object* $tmp26;
    panda$core$UInt8$wrapper* $tmp27;
    $tmp27 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp27->value = p_v;
    $tmp26 = ((panda$core$Object*) $tmp27);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp26);
    panda$core$Panda$unref$panda$core$Object($tmp26);
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$Object* $tmp28;
    panda$core$UInt8 $tmp29 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp30;
    $tmp30 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp30->value = $tmp29;
    $tmp28 = ((panda$core$Object*) $tmp30);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp28);
    panda$core$Panda$unref$panda$core$Object($tmp28);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp31;
    panda$core$Int64 $tmp36;
    panda$core$Int64 $tmp38;
    panda$core$Int64 $tmp39;
    panda$core$Bit $tmp40;
    panda$core$Object* $tmp59;
    ITable* $tmp32 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp32->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp32 = $tmp32->next;
    }
    $fn34 $tmp33 = $tmp32->methods[0];
    panda$core$Int64 $tmp35 = $tmp33(((panda$collections$CollectionView*) p_v));
    panda$core$Int64$init$builtin_int64(&$tmp36, 1);
    panda$core$Int64 $tmp37 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp35, $tmp36);
    panda$core$Int64$init$builtin_int64(&$tmp38, 0);
    panda$core$Int64$init$builtin_int64(&$tmp39, -1);
    panda$core$Bit$init$builtin_bit(&$tmp40, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp31, $tmp37, $tmp38, $tmp39, $tmp40);
    int64_t $tmp42 = $tmp31.start.value;
    panda$core$Int64 i41 = { $tmp42 };
    int64_t $tmp44 = $tmp31.end.value;
    int64_t $tmp45 = $tmp31.step.value;
    bool $tmp46 = $tmp31.inclusive.value;
    bool $tmp53 = $tmp45 > 0;
    if ($tmp53) goto $l51; else goto $l52;
    $l51:;
    if ($tmp46) goto $l54; else goto $l55;
    $l54:;
    if ($tmp42 <= $tmp44) goto $l47; else goto $l49;
    $l55:;
    if ($tmp42 < $tmp44) goto $l47; else goto $l49;
    $l52:;
    if ($tmp46) goto $l56; else goto $l57;
    $l56:;
    if ($tmp42 >= $tmp44) goto $l47; else goto $l49;
    $l57:;
    if ($tmp42 > $tmp44) goto $l47; else goto $l49;
    $l47:;
    {
        ITable* $tmp60 = p_v->$class->itable;
        while ($tmp60->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp60 = $tmp60->next;
        }
        $fn62 $tmp61 = $tmp60->methods[0];
        panda$core$Object* $tmp63 = $tmp61(p_v, i41);
        $tmp59 = $tmp63;
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp59)->value);
        panda$core$Panda$unref$panda$core$Object($tmp59);
    }
    $l50:;
    if ($tmp53) goto $l65; else goto $l66;
    $l65:;
    int64_t $tmp67 = $tmp44 - i41.value;
    if ($tmp46) goto $l68; else goto $l69;
    $l68:;
    if ((uint64_t) $tmp67 >= $tmp45) goto $l64; else goto $l49;
    $l69:;
    if ((uint64_t) $tmp67 > $tmp45) goto $l64; else goto $l49;
    $l66:;
    int64_t $tmp71 = i41.value - $tmp44;
    if ($tmp46) goto $l72; else goto $l73;
    $l72:;
    if ((uint64_t) $tmp71 >= -$tmp45) goto $l64; else goto $l49;
    $l73:;
    if ((uint64_t) $tmp71 > -$tmp45) goto $l64; else goto $l49;
    $l64:;
    i41.value += $tmp45;
    goto $l47;
    $l49:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp75;
    panda$core$Int64 $tmp80;
    panda$core$Int64 $tmp82;
    panda$core$Int64 $tmp83;
    panda$core$Bit $tmp84;
    panda$core$Object* $tmp103;
    ITable* $tmp76 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp76->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp76 = $tmp76->next;
    }
    $fn78 $tmp77 = $tmp76->methods[0];
    panda$core$Int64 $tmp79 = $tmp77(((panda$collections$CollectionView*) p_v));
    panda$core$Int64$init$builtin_int64(&$tmp80, 1);
    panda$core$Int64 $tmp81 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp79, $tmp80);
    panda$core$Int64$init$builtin_int64(&$tmp82, 0);
    panda$core$Int64$init$builtin_int64(&$tmp83, -1);
    panda$core$Bit$init$builtin_bit(&$tmp84, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp75, $tmp81, $tmp82, $tmp83, $tmp84);
    int64_t $tmp86 = $tmp75.start.value;
    panda$core$Int64 i85 = { $tmp86 };
    int64_t $tmp88 = $tmp75.end.value;
    int64_t $tmp89 = $tmp75.step.value;
    bool $tmp90 = $tmp75.inclusive.value;
    bool $tmp97 = $tmp89 > 0;
    if ($tmp97) goto $l95; else goto $l96;
    $l95:;
    if ($tmp90) goto $l98; else goto $l99;
    $l98:;
    if ($tmp86 <= $tmp88) goto $l91; else goto $l93;
    $l99:;
    if ($tmp86 < $tmp88) goto $l91; else goto $l93;
    $l96:;
    if ($tmp90) goto $l100; else goto $l101;
    $l100:;
    if ($tmp86 >= $tmp88) goto $l91; else goto $l93;
    $l101:;
    if ($tmp86 > $tmp88) goto $l91; else goto $l93;
    $l91:;
    {
        ITable* $tmp104 = p_v->$class->itable;
        while ($tmp104->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp104 = $tmp104->next;
        }
        $fn106 $tmp105 = $tmp104->methods[0];
        panda$core$Object* $tmp107 = $tmp105(p_v, i85);
        $tmp103 = $tmp107;
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp103)->value);
        panda$core$Panda$unref$panda$core$Object($tmp103);
    }
    $l94:;
    if ($tmp97) goto $l109; else goto $l110;
    $l109:;
    int64_t $tmp111 = $tmp88 - i85.value;
    if ($tmp90) goto $l112; else goto $l113;
    $l112:;
    if ((uint64_t) $tmp111 >= $tmp89) goto $l108; else goto $l93;
    $l113:;
    if ((uint64_t) $tmp111 > $tmp89) goto $l108; else goto $l93;
    $l110:;
    int64_t $tmp115 = i85.value - $tmp88;
    if ($tmp90) goto $l116; else goto $l117;
    $l116:;
    if ((uint64_t) $tmp115 >= -$tmp89) goto $l108; else goto $l93;
    $l117:;
    if ((uint64_t) $tmp115 > -$tmp89) goto $l108; else goto $l93;
    $l108:;
    i85.value += $tmp89;
    goto $l91;
    $l93:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp119 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp119);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp120;
    panda$core$Int64 $tmp125;
    panda$core$Int64 $tmp127;
    panda$core$Int64 $tmp128;
    panda$core$Bit $tmp129;
    panda$core$Object* $tmp148;
    ITable* $tmp121 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp121->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp121 = $tmp121->next;
    }
    $fn123 $tmp122 = $tmp121->methods[0];
    panda$core$Int64 $tmp124 = $tmp122(((panda$collections$CollectionView*) p_c));
    panda$core$Int64$init$builtin_int64(&$tmp125, 1);
    panda$core$Int64 $tmp126 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp124, $tmp125);
    panda$core$Int64$init$builtin_int64(&$tmp127, 0);
    panda$core$Int64$init$builtin_int64(&$tmp128, -1);
    panda$core$Bit$init$builtin_bit(&$tmp129, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp120, $tmp126, $tmp127, $tmp128, $tmp129);
    int64_t $tmp131 = $tmp120.start.value;
    panda$core$Int64 i130 = { $tmp131 };
    int64_t $tmp133 = $tmp120.end.value;
    int64_t $tmp134 = $tmp120.step.value;
    bool $tmp135 = $tmp120.inclusive.value;
    bool $tmp142 = $tmp134 > 0;
    if ($tmp142) goto $l140; else goto $l141;
    $l140:;
    if ($tmp135) goto $l143; else goto $l144;
    $l143:;
    if ($tmp131 <= $tmp133) goto $l136; else goto $l138;
    $l144:;
    if ($tmp131 < $tmp133) goto $l136; else goto $l138;
    $l141:;
    if ($tmp135) goto $l145; else goto $l146;
    $l145:;
    if ($tmp131 >= $tmp133) goto $l136; else goto $l138;
    $l146:;
    if ($tmp131 > $tmp133) goto $l136; else goto $l138;
    $l136:;
    {
        ITable* $tmp149 = p_c->$class->itable;
        while ($tmp149->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp149 = $tmp149->next;
        }
        $fn151 $tmp150 = $tmp149->methods[0];
        panda$core$Object* $tmp152 = $tmp150(p_c, i130);
        $tmp148 = $tmp152;
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp148)->value);
        panda$core$Panda$unref$panda$core$Object($tmp148);
    }
    $l139:;
    if ($tmp142) goto $l154; else goto $l155;
    $l154:;
    int64_t $tmp156 = $tmp133 - i130.value;
    if ($tmp135) goto $l157; else goto $l158;
    $l157:;
    if ((uint64_t) $tmp156 >= $tmp134) goto $l153; else goto $l138;
    $l158:;
    if ((uint64_t) $tmp156 > $tmp134) goto $l153; else goto $l138;
    $l155:;
    int64_t $tmp160 = i130.value - $tmp133;
    if ($tmp135) goto $l161; else goto $l162;
    $l161:;
    if ((uint64_t) $tmp160 >= -$tmp134) goto $l153; else goto $l138;
    $l162:;
    if ((uint64_t) $tmp160 > -$tmp134) goto $l153; else goto $l138;
    $l153:;
    i130.value += $tmp134;
    goto $l136;
    $l138:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp164;
    panda$collections$ListView* $tmp165 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    $tmp164 = $tmp165;
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp164);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
}
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* self) {
    int $tmp168;
    {
    }
    $tmp168 = -1;
    goto $l166;
    $l166:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp168) {
        case -1: goto $l169;
    }
    $l169:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

