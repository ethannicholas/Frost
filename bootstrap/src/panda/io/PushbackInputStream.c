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
typedef panda$core$Int64 (*$fn29)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn53)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn69)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn93)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn110)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn134)(panda$collections$ListView*, panda$core$Int64);

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
    panda$core$UInt8$nullable $returnValue16;
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
        $returnValue16 = ((panda$core$UInt8$nullable) { result9, true });
        return $returnValue16;
    }
    }
    panda$core$UInt8$nullable $tmp19 = (($fn18) self->source->$class->vtable[2])(self->source);
    $returnValue16 = $tmp19;
    return $returnValue16;
}
void panda$io$PushbackInputStream$pushback$panda$core$UInt8(panda$io$PushbackInputStream* self, panda$core$UInt8 p_v) {
    panda$core$Object* $tmp21;
    panda$core$UInt8$wrapper* $tmp22;
    $tmp22 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp22->value = p_v;
    $tmp21 = ((panda$core$Object*) $tmp22);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp21);
    panda$core$Panda$unref$panda$core$Object($tmp21);
}
void panda$io$PushbackInputStream$pushback$panda$core$Int8(panda$io$PushbackInputStream* self, panda$core$Int8 p_v) {
    panda$core$Object* $tmp23;
    panda$core$UInt8 $tmp24 = panda$core$Int8$convert$R$panda$core$UInt8(p_v);
    panda$core$UInt8$wrapper* $tmp25;
    $tmp25 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp25->value = $tmp24;
    $tmp23 = ((panda$core$Object*) $tmp25);
    panda$collections$Array$add$panda$collections$Array$T(self->pushbackBuffer, $tmp23);
    panda$core$Panda$unref$panda$core$Object($tmp23);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp26;
    panda$core$Object* $tmp50;
    ITable* $tmp27 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp27->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp27 = $tmp27->next;
    }
    $fn29 $tmp28 = $tmp27->methods[0];
    panda$core$Int64 $tmp30 = $tmp28(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp31 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp30, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp26, $tmp31, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp33 = $tmp26.start.value;
    panda$core$Int64 i32 = { $tmp33 };
    int64_t $tmp35 = $tmp26.end.value;
    int64_t $tmp36 = $tmp26.step.value;
    bool $tmp37 = $tmp26.inclusive.value;
    bool $tmp44 = $tmp36 > 0;
    if ($tmp44) goto $l42; else goto $l43;
    $l42:;
    if ($tmp37) goto $l45; else goto $l46;
    $l45:;
    if ($tmp33 <= $tmp35) goto $l38; else goto $l40;
    $l46:;
    if ($tmp33 < $tmp35) goto $l38; else goto $l40;
    $l43:;
    if ($tmp37) goto $l47; else goto $l48;
    $l47:;
    if ($tmp33 >= $tmp35) goto $l38; else goto $l40;
    $l48:;
    if ($tmp33 > $tmp35) goto $l38; else goto $l40;
    $l38:;
    {
        ITable* $tmp51 = p_v->$class->itable;
        while ($tmp51->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp51 = $tmp51->next;
        }
        $fn53 $tmp52 = $tmp51->methods[0];
        panda$core$Object* $tmp54 = $tmp52(p_v, i32);
        $tmp50 = $tmp54;
        panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, ((panda$core$UInt8$wrapper*) $tmp50)->value);
        panda$core$Panda$unref$panda$core$Object($tmp50);
    }
    $l41:;
    if ($tmp44) goto $l56; else goto $l57;
    $l56:;
    int64_t $tmp58 = $tmp35 - i32.value;
    if ($tmp37) goto $l59; else goto $l60;
    $l59:;
    if ((uint64_t) $tmp58 >= $tmp36) goto $l55; else goto $l40;
    $l60:;
    if ((uint64_t) $tmp58 > $tmp36) goto $l55; else goto $l40;
    $l57:;
    int64_t $tmp62 = i32.value - $tmp35;
    if ($tmp37) goto $l63; else goto $l64;
    $l63:;
    if ((uint64_t) $tmp62 >= -$tmp36) goto $l55; else goto $l40;
    $l64:;
    if ((uint64_t) $tmp62 > -$tmp36) goto $l55; else goto $l40;
    $l55:;
    i32.value += $tmp36;
    goto $l38;
    $l40:;
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Int8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_v) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp66;
    panda$core$Object* $tmp90;
    ITable* $tmp67 = ((panda$collections$CollectionView*) p_v)->$class->itable;
    while ($tmp67->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp67 = $tmp67->next;
    }
    $fn69 $tmp68 = $tmp67->methods[0];
    panda$core$Int64 $tmp70 = $tmp68(((panda$collections$CollectionView*) p_v));
    panda$core$Int64 $tmp71 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp70, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp66, $tmp71, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp73 = $tmp66.start.value;
    panda$core$Int64 i72 = { $tmp73 };
    int64_t $tmp75 = $tmp66.end.value;
    int64_t $tmp76 = $tmp66.step.value;
    bool $tmp77 = $tmp66.inclusive.value;
    bool $tmp84 = $tmp76 > 0;
    if ($tmp84) goto $l82; else goto $l83;
    $l82:;
    if ($tmp77) goto $l85; else goto $l86;
    $l85:;
    if ($tmp73 <= $tmp75) goto $l78; else goto $l80;
    $l86:;
    if ($tmp73 < $tmp75) goto $l78; else goto $l80;
    $l83:;
    if ($tmp77) goto $l87; else goto $l88;
    $l87:;
    if ($tmp73 >= $tmp75) goto $l78; else goto $l80;
    $l88:;
    if ($tmp73 > $tmp75) goto $l78; else goto $l80;
    $l78:;
    {
        ITable* $tmp91 = p_v->$class->itable;
        while ($tmp91->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp91 = $tmp91->next;
        }
        $fn93 $tmp92 = $tmp91->methods[0];
        panda$core$Object* $tmp94 = $tmp92(p_v, i72);
        $tmp90 = $tmp94;
        panda$io$PushbackInputStream$pushback$panda$core$Int8(self, ((panda$core$Int8$wrapper*) $tmp90)->value);
        panda$core$Panda$unref$panda$core$Object($tmp90);
    }
    $l81:;
    if ($tmp84) goto $l96; else goto $l97;
    $l96:;
    int64_t $tmp98 = $tmp75 - i72.value;
    if ($tmp77) goto $l99; else goto $l100;
    $l99:;
    if ((uint64_t) $tmp98 >= $tmp76) goto $l95; else goto $l80;
    $l100:;
    if ((uint64_t) $tmp98 > $tmp76) goto $l95; else goto $l80;
    $l97:;
    int64_t $tmp102 = i72.value - $tmp75;
    if ($tmp77) goto $l103; else goto $l104;
    $l103:;
    if ((uint64_t) $tmp102 >= -$tmp76) goto $l95; else goto $l80;
    $l104:;
    if ((uint64_t) $tmp102 > -$tmp76) goto $l95; else goto $l80;
    $l95:;
    i72.value += $tmp76;
    goto $l78;
    $l80:;
}
void panda$io$PushbackInputStream$pushback$panda$core$Char8(panda$io$PushbackInputStream* self, panda$core$Char8 p_c) {
    panda$core$UInt8 $tmp106 = panda$core$Char8$convert$R$panda$core$UInt8(p_c);
    panda$io$PushbackInputStream$pushback$panda$core$UInt8(self, $tmp106);
}
void panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(panda$io$PushbackInputStream* self, panda$collections$ListView* p_c) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp107;
    panda$core$Object* $tmp131;
    ITable* $tmp108 = ((panda$collections$CollectionView*) p_c)->$class->itable;
    while ($tmp108->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp108 = $tmp108->next;
    }
    $fn110 $tmp109 = $tmp108->methods[0];
    panda$core$Int64 $tmp111 = $tmp109(((panda$collections$CollectionView*) p_c));
    panda$core$Int64 $tmp112 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp111, ((panda$core$Int64) { 1 }));
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp107, $tmp112, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { -1 }), ((panda$core$Bit) { true }));
    int64_t $tmp114 = $tmp107.start.value;
    panda$core$Int64 i113 = { $tmp114 };
    int64_t $tmp116 = $tmp107.end.value;
    int64_t $tmp117 = $tmp107.step.value;
    bool $tmp118 = $tmp107.inclusive.value;
    bool $tmp125 = $tmp117 > 0;
    if ($tmp125) goto $l123; else goto $l124;
    $l123:;
    if ($tmp118) goto $l126; else goto $l127;
    $l126:;
    if ($tmp114 <= $tmp116) goto $l119; else goto $l121;
    $l127:;
    if ($tmp114 < $tmp116) goto $l119; else goto $l121;
    $l124:;
    if ($tmp118) goto $l128; else goto $l129;
    $l128:;
    if ($tmp114 >= $tmp116) goto $l119; else goto $l121;
    $l129:;
    if ($tmp114 > $tmp116) goto $l119; else goto $l121;
    $l119:;
    {
        ITable* $tmp132 = p_c->$class->itable;
        while ($tmp132->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp132 = $tmp132->next;
        }
        $fn134 $tmp133 = $tmp132->methods[0];
        panda$core$Object* $tmp135 = $tmp133(p_c, i113);
        $tmp131 = $tmp135;
        panda$io$PushbackInputStream$pushback$panda$core$Char8(self, ((panda$core$Char8$wrapper*) $tmp131)->value);
        panda$core$Panda$unref$panda$core$Object($tmp131);
    }
    $l122:;
    if ($tmp125) goto $l137; else goto $l138;
    $l137:;
    int64_t $tmp139 = $tmp116 - i113.value;
    if ($tmp118) goto $l140; else goto $l141;
    $l140:;
    if ((uint64_t) $tmp139 >= $tmp117) goto $l136; else goto $l121;
    $l141:;
    if ((uint64_t) $tmp139 > $tmp117) goto $l136; else goto $l121;
    $l138:;
    int64_t $tmp143 = i113.value - $tmp116;
    if ($tmp118) goto $l144; else goto $l145;
    $l144:;
    if ((uint64_t) $tmp143 >= -$tmp117) goto $l136; else goto $l121;
    $l145:;
    if ((uint64_t) $tmp143 > -$tmp117) goto $l136; else goto $l121;
    $l136:;
    i113.value += $tmp117;
    goto $l119;
    $l121:;
}
void panda$io$PushbackInputStream$pushback$panda$core$String(panda$io$PushbackInputStream* self, panda$core$String* p_s) {
    panda$collections$ListView* $tmp147;
    panda$collections$ListView* $tmp148 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    $tmp147 = $tmp148;
    panda$io$PushbackInputStream$pushback$panda$collections$ListView$LTpanda$core$Char8$GT(self, $tmp147);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
}
void panda$io$PushbackInputStream$cleanup(panda$io$PushbackInputStream* self) {
    int $tmp151;
    {
    }
    $tmp151 = -1;
    goto $l149;
    $l149:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp151) {
        case -1: goto $l152;
    }
    $l152:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

