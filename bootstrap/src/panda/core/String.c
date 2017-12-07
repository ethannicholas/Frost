#include "panda/core/String.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/String/UTF8List.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String/UTF16Iterator.h"
#include "panda/core/String/UTF32Iterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/String/Index.h"
#include "panda/core/Object.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/collections/Array.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt64.h"
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, ((panda$core$String*) p0));
    return result;
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim(panda$core$String* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(self, ((panda$core$String*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$String$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$_panda$collections$Key, { panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim} };

panda$core$String$class_type panda$core$String$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, (ITable*) &panda$core$String$_panda$core$Equatable, { panda$core$String$convert$R$panda$core$String, panda$core$String$cleanup, panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT, panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT, panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT, panda$core$String$length$R$panda$core$Int64, panda$core$String$startsWith$panda$core$String$R$panda$core$Bit, panda$core$String$endsWith$panda$core$String$R$panda$core$Bit, panda$core$String$trimmed$R$panda$core$String, panda$core$String$$ADD$panda$core$String$R$panda$core$String, panda$core$String$$ADD$panda$core$Object$R$panda$core$String, panda$core$String$$MUL$panda$core$Int64$R$panda$core$String, panda$core$String$$EQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit$shim, panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String, panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String, panda$core$String$contains$panda$core$Char8$R$panda$core$Bit, panda$core$String$contains$panda$core$String$R$panda$core$Bit, panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q, panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q, panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String, panda$core$String$start$R$panda$core$String$Index, panda$core$String$end$R$panda$core$String$Index, panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index, panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index, panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT, panda$core$String$convert$R$panda$core$Int64$Q, panda$core$String$convert$R$panda$core$UInt64$Q, panda$core$String$hash$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn3)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn26)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn52)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn58)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn215)(panda$core$Object*);
typedef void (*$fn240)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn252)(panda$core$MutableString*);
typedef panda$core$String* (*$fn254)(panda$core$Object*);
typedef void (*$fn359)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn363)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn367)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn371)(panda$core$MutableString*, panda$core$Char8);
typedef panda$core$String* (*$fn393)(panda$core$MutableString*);
typedef void (*$fn412)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn417)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn421)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn425)(panda$core$MutableString*, panda$core$Char8);
typedef panda$core$String* (*$fn456)(panda$core$MutableString*);
typedef void (*$fn483)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn487)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn491)(panda$core$MutableString*, panda$core$Char8);
typedef void (*$fn495)(panda$core$MutableString*, panda$core$Char8);
typedef panda$core$String* (*$fn496)(panda$core$MutableString*);
typedef void (*$fn685)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn688)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn689)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn692)(panda$core$MutableString*);


void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length, panda$core$Bit p_owned) {
    self->data = p_data;
    self->_length = p_length;
    self->owned = p_owned;
}
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    ITable* $tmp1 = ((panda$collections$CollectionView*) p_chars)->$class->itable;
    while ($tmp1->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1 = $tmp1->next;
    }
    $fn3 $tmp2 = $tmp1->methods[0];
    panda$core$Int64 $tmp4 = $tmp2(((panda$collections$CollectionView*) p_chars));
    self->_length = $tmp4;
    self->data = ((panda$core$Char8*) malloc(self->_length.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp7 = $tmp5.start.value;
    panda$core$Int64 i6 = { $tmp7 };
    int64_t $tmp9 = $tmp5.end.value;
    int64_t $tmp10 = $tmp5.step.value;
    bool $tmp11 = $tmp5.inclusive.value;
    bool $tmp18 = $tmp10 > 0;
    if ($tmp18) goto $l16; else goto $l17;
    $l16:;
    if ($tmp11) goto $l19; else goto $l20;
    $l19:;
    if ($tmp7 <= $tmp9) goto $l12; else goto $l14;
    $l20:;
    if ($tmp7 < $tmp9) goto $l12; else goto $l14;
    $l17:;
    if ($tmp11) goto $l21; else goto $l22;
    $l21:;
    if ($tmp7 >= $tmp9) goto $l12; else goto $l14;
    $l22:;
    if ($tmp7 > $tmp9) goto $l12; else goto $l14;
    $l12:;
    {
        ITable* $tmp24 = p_chars->$class->itable;
        while ($tmp24->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp24 = $tmp24->next;
        }
        $fn26 $tmp25 = $tmp24->methods[0];
        panda$core$Object* $tmp27 = $tmp25(p_chars, i6);
        self->data[i6.value] = ((panda$core$Char8$wrapper*) $tmp27)->value;
    }
    $l15:;
    if ($tmp18) goto $l29; else goto $l30;
    $l29:;
    int64_t $tmp31 = $tmp9 - i6.value;
    if ($tmp11) goto $l32; else goto $l33;
    $l32:;
    if ($tmp31 >= $tmp10) goto $l28; else goto $l14;
    $l33:;
    if ($tmp31 > $tmp10) goto $l28; else goto $l14;
    $l30:;
    int64_t $tmp35 = i6.value - $tmp9;
    if ($tmp11) goto $l36; else goto $l37;
    $l36:;
    if ($tmp35 >= -$tmp10) goto $l28; else goto $l14;
    $l37:;
    if ($tmp35 > -$tmp10) goto $l28; else goto $l14;
    $l28:;
    i6.value += $tmp10;
    goto $l12;
    $l14:;
}
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self) {
    return self;
}
void panda$core$String$cleanup(panda$core$String* self) {
    free(self->data);
}
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self) {
    panda$core$String$UTF8List* $tmp39 = (panda$core$String$UTF8List*) malloc(24);
    $tmp39->$class = (panda$core$Class*) &panda$core$String$UTF8List$class;
    $tmp39->refCount.value = 1;
    panda$core$String$UTF8List$init$panda$core$String($tmp39, self);
    return ((panda$collections$ListView*) $tmp39);
}
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self) {
    panda$core$String$UTF16Iterator* $tmp41 = (panda$core$String$UTF16Iterator*) malloc(32);
    $tmp41->$class = (panda$core$Class*) &panda$core$String$UTF16Iterator$class;
    $tmp41->refCount.value = 1;
    panda$core$String$UTF16Iterator$init$panda$core$String($tmp41, self);
    return ((panda$collections$Iterator*) $tmp41);
}
panda$collections$Iterator* panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self) {
    panda$core$String$UTF32Iterator* $tmp43 = (panda$core$String$UTF32Iterator*) malloc(32);
    $tmp43->$class = (panda$core$Class*) &panda$core$String$UTF32Iterator$class;
    $tmp43->refCount.value = 1;
    panda$core$String$UTF32Iterator$init$panda$core$String($tmp43, self);
    return ((panda$collections$Iterator*) $tmp43);
}
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 count45;
    panda$collections$Iterator* iter46;
    count45 = ((panda$core$Int64) { 0 });
    panda$collections$Iterator* $tmp47 = panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(self);
    iter46 = $tmp47;
    $l48:;
    ITable* $tmp50 = iter46->$class->itable;
    while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
        $tmp50 = $tmp50->next;
    }
    $fn52 $tmp51 = $tmp50->methods[0];
    panda$core$Bit $tmp53 = $tmp51(iter46);
    panda$core$Bit $tmp54 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp53);
    if (!$tmp54.value) goto $l49;
    {
        panda$core$Int64 $tmp55 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(count45, ((panda$core$Int64) { 1 }));
        count45 = $tmp55;
        ITable* $tmp56 = iter46->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[1];
        $tmp57(iter46);
    }
    goto $l48;
    $l49:;
    return count45;
}
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp60;
    panda$core$Bit $tmp59 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp59.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp60, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp62 = $tmp60.start.value;
    panda$core$Int64 i61 = { $tmp62 };
    int64_t $tmp64 = $tmp60.end.value;
    int64_t $tmp65 = $tmp60.step.value;
    bool $tmp66 = $tmp60.inclusive.value;
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
        panda$core$Bit $tmp79 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i61.value], p_other->data[i61.value]);
        if ($tmp79.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l70:;
    if ($tmp73) goto $l81; else goto $l82;
    $l81:;
    int64_t $tmp83 = $tmp64 - i61.value;
    if ($tmp66) goto $l84; else goto $l85;
    $l84:;
    if ($tmp83 >= $tmp65) goto $l80; else goto $l69;
    $l85:;
    if ($tmp83 > $tmp65) goto $l80; else goto $l69;
    $l82:;
    int64_t $tmp87 = i61.value - $tmp64;
    if ($tmp66) goto $l88; else goto $l89;
    $l88:;
    if ($tmp87 >= -$tmp65) goto $l80; else goto $l69;
    $l89:;
    if ($tmp87 > -$tmp65) goto $l80; else goto $l69;
    $l80:;
    i61.value += $tmp65;
    goto $l67;
    $l69:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp92;
    panda$core$Bit $tmp91 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp91.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp94 = $tmp92.start.value;
    panda$core$Int64 i93 = { $tmp94 };
    int64_t $tmp96 = $tmp92.end.value;
    int64_t $tmp97 = $tmp92.step.value;
    bool $tmp98 = $tmp92.inclusive.value;
    bool $tmp105 = $tmp97 > 0;
    if ($tmp105) goto $l103; else goto $l104;
    $l103:;
    if ($tmp98) goto $l106; else goto $l107;
    $l106:;
    if ($tmp94 <= $tmp96) goto $l99; else goto $l101;
    $l107:;
    if ($tmp94 < $tmp96) goto $l99; else goto $l101;
    $l104:;
    if ($tmp98) goto $l108; else goto $l109;
    $l108:;
    if ($tmp94 >= $tmp96) goto $l99; else goto $l101;
    $l109:;
    if ($tmp94 > $tmp96) goto $l99; else goto $l101;
    $l99:;
    {
        panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp112 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp111, i93);
        panda$core$Bit $tmp113 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp112.value], p_other->data[i93.value]);
        if ($tmp113.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l102:;
    if ($tmp105) goto $l115; else goto $l116;
    $l115:;
    int64_t $tmp117 = $tmp96 - i93.value;
    if ($tmp98) goto $l118; else goto $l119;
    $l118:;
    if ($tmp117 >= $tmp97) goto $l114; else goto $l101;
    $l119:;
    if ($tmp117 > $tmp97) goto $l114; else goto $l101;
    $l116:;
    int64_t $tmp121 = i93.value - $tmp96;
    if ($tmp98) goto $l122; else goto $l123;
    $l122:;
    if ($tmp121 >= -$tmp97) goto $l114; else goto $l101;
    $l123:;
    if ($tmp121 > -$tmp97) goto $l114; else goto $l101;
    $l114:;
    i93.value += $tmp97;
    goto $l99;
    $l101:;
    return ((panda$core$Bit) { true });
}
panda$core$String* panda$core$String$trimmed$R$panda$core$String(panda$core$String* self) {
    panda$core$Int64 start126;
    panda$core$Int64 end135;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp145;
    panda$core$String$Index $tmp146;
    panda$core$String$Index $tmp147;
    panda$core$Bit $tmp125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp125.value) {
    {
        return self;
    }
    }
    start126 = ((panda$core$Int64) { 0 });
    $l127:;
    panda$core$Bit $tmp130 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(start126, self->_length);
    bool $tmp129 = $tmp130.value;
    if (!$tmp129) goto $l131;
    panda$core$Bit $tmp132 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[start126.value]);
    $tmp129 = $tmp132.value;
    $l131:;
    panda$core$Bit $tmp133 = { $tmp129 };
    if (!$tmp133.value) goto $l128;
    {
        panda$core$Int64 $tmp134 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(start126, ((panda$core$Int64) { 1 }));
        start126 = $tmp134;
    }
    goto $l127;
    $l128:;
    panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, ((panda$core$Int64) { 1 }));
    end135 = $tmp136;
    $l137:;
    panda$core$Bit $tmp140 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(end135, start126);
    bool $tmp139 = $tmp140.value;
    if (!$tmp139) goto $l141;
    panda$core$Bit $tmp142 = panda$core$Char8$isWhitespace$R$panda$core$Bit(self->data[end135.value]);
    $tmp139 = $tmp142.value;
    $l141:;
    panda$core$Bit $tmp143 = { $tmp139 };
    if (!$tmp143.value) goto $l138;
    {
        panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end135, ((panda$core$Int64) { 1 }));
        end135 = $tmp144;
    }
    goto $l137;
    $l138:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp146, start126);
    panda$core$String$Index$init$panda$core$Int64(&$tmp147, end135);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp145, ((panda$core$String$Index$nullable) { $tmp146, true }), ((panda$core$String$Index$nullable) { $tmp147, true }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
    panda$core$String* $tmp148 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp145);
    return $tmp148;
}
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Char8* result149;
    panda$core$Range$LTpanda$core$Int64$GT $tmp151;
    panda$core$Range$LTpanda$core$Int64$GT $tmp181;
    panda$core$Int64 $tmp150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    result149 = ((panda$core$Char8*) malloc($tmp150.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp151, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp153 = $tmp151.start.value;
    panda$core$Int64 i152 = { $tmp153 };
    int64_t $tmp155 = $tmp151.end.value;
    int64_t $tmp156 = $tmp151.step.value;
    bool $tmp157 = $tmp151.inclusive.value;
    bool $tmp164 = $tmp156 > 0;
    if ($tmp164) goto $l162; else goto $l163;
    $l162:;
    if ($tmp157) goto $l165; else goto $l166;
    $l165:;
    if ($tmp153 <= $tmp155) goto $l158; else goto $l160;
    $l166:;
    if ($tmp153 < $tmp155) goto $l158; else goto $l160;
    $l163:;
    if ($tmp157) goto $l167; else goto $l168;
    $l167:;
    if ($tmp153 >= $tmp155) goto $l158; else goto $l160;
    $l168:;
    if ($tmp153 > $tmp155) goto $l158; else goto $l160;
    $l158:;
    {
        result149[i152.value] = self->data[i152.value];
    }
    $l161:;
    if ($tmp164) goto $l171; else goto $l172;
    $l171:;
    int64_t $tmp173 = $tmp155 - i152.value;
    if ($tmp157) goto $l174; else goto $l175;
    $l174:;
    if ($tmp173 >= $tmp156) goto $l170; else goto $l160;
    $l175:;
    if ($tmp173 > $tmp156) goto $l170; else goto $l160;
    $l172:;
    int64_t $tmp177 = i152.value - $tmp155;
    if ($tmp157) goto $l178; else goto $l179;
    $l178:;
    if ($tmp177 >= -$tmp156) goto $l170; else goto $l160;
    $l179:;
    if ($tmp177 > -$tmp156) goto $l170; else goto $l160;
    $l170:;
    i152.value += $tmp156;
    goto $l158;
    $l160:;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp181, ((panda$core$Int64) { 0 }), p_other->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp183 = $tmp181.start.value;
    panda$core$Int64 i182 = { $tmp183 };
    int64_t $tmp185 = $tmp181.end.value;
    int64_t $tmp186 = $tmp181.step.value;
    bool $tmp187 = $tmp181.inclusive.value;
    bool $tmp194 = $tmp186 > 0;
    if ($tmp194) goto $l192; else goto $l193;
    $l192:;
    if ($tmp187) goto $l195; else goto $l196;
    $l195:;
    if ($tmp183 <= $tmp185) goto $l188; else goto $l190;
    $l196:;
    if ($tmp183 < $tmp185) goto $l188; else goto $l190;
    $l193:;
    if ($tmp187) goto $l197; else goto $l198;
    $l197:;
    if ($tmp183 >= $tmp185) goto $l188; else goto $l190;
    $l198:;
    if ($tmp183 > $tmp185) goto $l188; else goto $l190;
    $l188:;
    {
        panda$core$Int64 $tmp200 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i182);
        result149[$tmp200.value] = p_other->data[i182.value];
    }
    $l191:;
    if ($tmp194) goto $l202; else goto $l203;
    $l202:;
    int64_t $tmp204 = $tmp185 - i182.value;
    if ($tmp187) goto $l205; else goto $l206;
    $l205:;
    if ($tmp204 >= $tmp186) goto $l201; else goto $l190;
    $l206:;
    if ($tmp204 > $tmp186) goto $l201; else goto $l190;
    $l203:;
    int64_t $tmp208 = i182.value - $tmp185;
    if ($tmp187) goto $l209; else goto $l210;
    $l209:;
    if ($tmp208 >= -$tmp186) goto $l201; else goto $l190;
    $l210:;
    if ($tmp208 > -$tmp186) goto $l201; else goto $l190;
    $l201:;
    i182.value += $tmp186;
    goto $l188;
    $l190:;
    panda$core$String* $tmp212 = (panda$core$String*) malloc(33);
    $tmp212->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp212->refCount.value = 1;
    panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp212, result149, $tmp214, ((panda$core$Bit) { true }));
    return $tmp212;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other) {
    panda$core$String* $tmp216 = (($fn215) p_other->$class->vtable[0])(p_other);
    panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(self, $tmp216);
    return $tmp217;
}
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count) {
    panda$core$MutableString* result218;
    panda$core$Range$LTpanda$core$Int64$GT $tmp221;
    panda$core$MutableString* $tmp219 = (panda$core$MutableString*) malloc(40);
    $tmp219->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp219->refCount.value = 1;
    panda$core$MutableString$init($tmp219);
    result218 = $tmp219;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp221, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp223 = $tmp221.start.value;
    panda$core$Int64 i222 = { $tmp223 };
    int64_t $tmp225 = $tmp221.end.value;
    int64_t $tmp226 = $tmp221.step.value;
    bool $tmp227 = $tmp221.inclusive.value;
    bool $tmp234 = $tmp226 > 0;
    if ($tmp234) goto $l232; else goto $l233;
    $l232:;
    if ($tmp227) goto $l235; else goto $l236;
    $l235:;
    if ($tmp223 <= $tmp225) goto $l228; else goto $l230;
    $l236:;
    if ($tmp223 < $tmp225) goto $l228; else goto $l230;
    $l233:;
    if ($tmp227) goto $l237; else goto $l238;
    $l237:;
    if ($tmp223 >= $tmp225) goto $l228; else goto $l230;
    $l238:;
    if ($tmp223 > $tmp225) goto $l228; else goto $l230;
    $l228:;
    {
        (($fn240) result218->$class->vtable[3])(result218, self);
    }
    $l231:;
    if ($tmp234) goto $l242; else goto $l243;
    $l242:;
    int64_t $tmp244 = $tmp225 - i222.value;
    if ($tmp227) goto $l245; else goto $l246;
    $l245:;
    if ($tmp244 >= $tmp226) goto $l241; else goto $l230;
    $l246:;
    if ($tmp244 > $tmp226) goto $l241; else goto $l230;
    $l243:;
    int64_t $tmp248 = i222.value - $tmp225;
    if ($tmp227) goto $l249; else goto $l250;
    $l249:;
    if ($tmp248 >= -$tmp226) goto $l241; else goto $l230;
    $l250:;
    if ($tmp248 > -$tmp226) goto $l241; else goto $l230;
    $l241:;
    i222.value += $tmp226;
    goto $l228;
    $l230:;
    panda$core$String* $tmp253 = (($fn252) result218->$class->vtable[0])(result218);
    return $tmp253;
}
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s) {
    panda$core$String* $tmp255 = (($fn254) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, p_s);
    return $tmp256;
}
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp258;
    panda$core$Bit $tmp257 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp257.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp258, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp260 = $tmp258.start.value;
    panda$core$Int64 i259 = { $tmp260 };
    int64_t $tmp262 = $tmp258.end.value;
    int64_t $tmp263 = $tmp258.step.value;
    bool $tmp264 = $tmp258.inclusive.value;
    bool $tmp271 = $tmp263 > 0;
    if ($tmp271) goto $l269; else goto $l270;
    $l269:;
    if ($tmp264) goto $l272; else goto $l273;
    $l272:;
    if ($tmp260 <= $tmp262) goto $l265; else goto $l267;
    $l273:;
    if ($tmp260 < $tmp262) goto $l265; else goto $l267;
    $l270:;
    if ($tmp264) goto $l274; else goto $l275;
    $l274:;
    if ($tmp260 >= $tmp262) goto $l265; else goto $l267;
    $l275:;
    if ($tmp260 > $tmp262) goto $l265; else goto $l267;
    $l265:;
    {
        panda$core$Bit $tmp277 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i259.value], p_other->data[i259.value]);
        if ($tmp277.value) {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
    $l268:;
    if ($tmp271) goto $l279; else goto $l280;
    $l279:;
    int64_t $tmp281 = $tmp262 - i259.value;
    if ($tmp264) goto $l282; else goto $l283;
    $l282:;
    if ($tmp281 >= $tmp263) goto $l278; else goto $l267;
    $l283:;
    if ($tmp281 > $tmp263) goto $l278; else goto $l267;
    $l280:;
    int64_t $tmp285 = i259.value - $tmp262;
    if ($tmp264) goto $l286; else goto $l287;
    $l286:;
    if ($tmp285 >= -$tmp263) goto $l278; else goto $l267;
    $l287:;
    if ($tmp285 > -$tmp263) goto $l278; else goto $l267;
    $l278:;
    i259.value += $tmp263;
    goto $l265;
    $l267:;
    return ((panda$core$Bit) { true });
}
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other) {
    panda$core$Bit $tmp289 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp289);
    return $tmp290;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index) {
    panda$core$Int64 idx291;
    panda$core$Char8 c292;
    panda$core$Int32 result293;
    panda$core$Char32 $tmp297;
    panda$core$Char32 $tmp306;
    panda$core$Char32 $tmp320;
    panda$core$Char32 $tmp337;
    idx291 = p_index.value;
    c292 = self->data[idx291.value];
    panda$core$Int32 $tmp294 = panda$core$Char8$convert$R$panda$core$Int32(c292);
    result293 = $tmp294;
    int64_t $tmp295 = ((int64_t) c292.value) & 255;
    bool $tmp296 = $tmp295 < 192;
    if (((panda$core$Bit) { $tmp296 }).value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp297, result293);
        return $tmp297;
    }
    }
    int64_t $tmp298 = ((int64_t) c292.value) & 255;
    bool $tmp299 = $tmp298 < 224;
    if (((panda$core$Bit) { $tmp299 }).value) {
    {
        panda$core$Int32 $tmp300 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result293, ((panda$core$Int32) { 31 }));
        panda$core$Int32 $tmp301 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp300, ((panda$core$Int32) { 6 }));
        panda$core$Int64 $tmp302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx291, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp303 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp302.value]);
        panda$core$Int32 $tmp304 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp303, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp305 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp301, $tmp304);
        result293 = $tmp305;
        panda$core$Char32$init$panda$core$Int32(&$tmp306, result293);
        return $tmp306;
    }
    }
    int64_t $tmp307 = ((int64_t) c292.value) & 255;
    bool $tmp308 = $tmp307 < 240;
    if (((panda$core$Bit) { $tmp308 }).value) {
    {
        panda$core$Int32 $tmp309 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result293, ((panda$core$Int32) { 15 }));
        panda$core$Int32 $tmp310 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp309, ((panda$core$Int32) { 12 }));
        panda$core$Int64 $tmp311 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx291, ((panda$core$Int64) { 1 }));
        panda$core$Int32 $tmp312 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp311.value]);
        panda$core$Int32 $tmp313 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp312, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp314 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp313, ((panda$core$Int32) { 6 }));
        panda$core$Int32 $tmp315 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp310, $tmp314);
        panda$core$Int64 $tmp316 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx291, ((panda$core$Int64) { 2 }));
        panda$core$Int32 $tmp317 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp316.value]);
        panda$core$Int32 $tmp318 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp317, ((panda$core$Int32) { 63 }));
        panda$core$Int32 $tmp319 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp315, $tmp318);
        result293 = $tmp319;
        panda$core$Char32$init$panda$core$Int32(&$tmp320, result293);
        return $tmp320;
    }
    }
    panda$core$Int32 $tmp321 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result293, ((panda$core$Int32) { 7 }));
    panda$core$Int32 $tmp322 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp321, ((panda$core$Int32) { 18 }));
    panda$core$Int64 $tmp323 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx291, ((panda$core$Int64) { 1 }));
    panda$core$Int32 $tmp324 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp323.value]);
    panda$core$Int32 $tmp325 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp324, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp326 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp325, ((panda$core$Int32) { 12 }));
    panda$core$Int32 $tmp327 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp322, $tmp326);
    panda$core$Int64 $tmp328 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx291, ((panda$core$Int64) { 2 }));
    panda$core$Int32 $tmp329 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp328.value]);
    panda$core$Int32 $tmp330 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp329, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp331 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp330, ((panda$core$Int32) { 6 }));
    panda$core$Int32 $tmp332 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp327, $tmp331);
    panda$core$Int64 $tmp333 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx291, ((panda$core$Int64) { 3 }));
    panda$core$Int32 $tmp334 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp333.value]);
    panda$core$Int32 $tmp335 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp334, ((panda$core$Int32) { 63 }));
    panda$core$Int32 $tmp336 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp332, $tmp335);
    result293 = $tmp336;
    panda$core$Char32$init$panda$core$Int32(&$tmp337, result293);
    return $tmp337;
}
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index) {
    panda$core$String$Index $tmp338 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index $tmp339 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp338, p_index);
    panda$core$Char32 $tmp340 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(self, $tmp339);
    return $tmp340;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$String$Index$Q$GT p_r) {
    panda$core$Int64 step341;
    panda$core$Int64 current342;
    panda$core$Int64 end347;
    panda$core$MutableString* result351;
    panda$core$Char8 c358;
    panda$core$Range$LTpanda$core$Int64$GT $tmp373;
    panda$core$String$Index $tmp395;
    panda$core$Char8 c411;
    panda$core$Int64 old413;
    panda$core$Range$LTpanda$core$Int64$GT $tmp436;
    panda$core$String$Index $tmp458;
    panda$core$Char8 c482;
    step341 = p_r.step;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current342 = ((panda$core$String$Index) p_r.start.value).value;
    }
    }
    else {
    panda$core$Bit $tmp343 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step341, ((panda$core$Int64) { 0 }));
    if ($tmp343.value) {
    {
        panda$core$String$Index $tmp344 = panda$core$String$start$R$panda$core$String$Index(self);
        current342 = $tmp344.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp345 = panda$core$String$end$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp346 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp345);
        current342 = $tmp346.value;
    }
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end347 = ((panda$core$String$Index) p_r.end.value).value;
    }
    }
    else {
    panda$core$Bit $tmp348 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step341, ((panda$core$Int64) { 0 }));
    if ($tmp348.value) {
    {
        panda$core$String$Index $tmp349 = panda$core$String$end$R$panda$core$String$Index(self);
        end347 = $tmp349.value;
    }
    }
    else {
    {
        panda$core$String$Index $tmp350 = panda$core$String$start$R$panda$core$String$Index(self);
        end347 = $tmp350.value;
    }
    }
    }
    panda$core$MutableString* $tmp352 = (panda$core$MutableString*) malloc(40);
    $tmp352->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp352->refCount.value = 1;
    panda$core$MutableString$init($tmp352);
    result351 = $tmp352;
    panda$core$Bit $tmp354 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp354.value) {
    {
        $l355:;
        panda$core$Bit $tmp357 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current342, end347);
        if (!$tmp357.value) goto $l356;
        {
            c358 = self->data[current342.value];
            (($fn359) result351->$class->vtable[2])(result351, c358);
            panda$core$Int64 $tmp360 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
            current342 = $tmp360;
            int64_t $tmp361 = ((int64_t) c358.value) & 255;
            bool $tmp362 = $tmp361 >= 192;
            if (((panda$core$Bit) { $tmp362 }).value) {
            {
                (($fn363) result351->$class->vtable[2])(result351, self->data[current342.value]);
                panda$core$Int64 $tmp364 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
                current342 = $tmp364;
            }
            }
            int64_t $tmp365 = ((int64_t) c358.value) & 255;
            bool $tmp366 = $tmp365 >= 224;
            if (((panda$core$Bit) { $tmp366 }).value) {
            {
                (($fn367) result351->$class->vtable[2])(result351, self->data[current342.value]);
                panda$core$Int64 $tmp368 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
                current342 = $tmp368;
            }
            }
            int64_t $tmp369 = ((int64_t) c358.value) & 255;
            bool $tmp370 = $tmp369 >= 240;
            if (((panda$core$Bit) { $tmp370 }).value) {
            {
                (($fn371) result351->$class->vtable[2])(result351, self->data[current342.value]);
                panda$core$Int64 $tmp372 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
                current342 = $tmp372;
            }
            }
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp373, ((panda$core$Int64) { 1 }), step341, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp375 = $tmp373.start.value;
            panda$core$Int64 i374 = { $tmp375 };
            int64_t $tmp377 = $tmp373.end.value;
            int64_t $tmp378 = $tmp373.step.value;
            bool $tmp379 = $tmp373.inclusive.value;
            bool $tmp386 = $tmp378 > 0;
            if ($tmp386) goto $l384; else goto $l385;
            $l384:;
            if ($tmp379) goto $l387; else goto $l388;
            $l387:;
            if ($tmp375 <= $tmp377) goto $l380; else goto $l382;
            $l388:;
            if ($tmp375 < $tmp377) goto $l380; else goto $l382;
            $l385:;
            if ($tmp379) goto $l389; else goto $l390;
            $l389:;
            if ($tmp375 >= $tmp377) goto $l380; else goto $l382;
            $l390:;
            if ($tmp375 > $tmp377) goto $l380; else goto $l382;
            $l380:;
            {
                panda$core$Bit $tmp392 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(current342, end347);
                if ($tmp392.value) {
                {
                    panda$core$String* $tmp394 = (($fn393) result351->$class->vtable[0])(result351);
                    return $tmp394;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp395, current342);
                panda$core$String$Index $tmp396 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, $tmp395);
                current342 = $tmp396.value;
            }
            $l383:;
            if ($tmp386) goto $l398; else goto $l399;
            $l398:;
            int64_t $tmp400 = $tmp377 - i374.value;
            if ($tmp379) goto $l401; else goto $l402;
            $l401:;
            if ($tmp400 >= $tmp378) goto $l397; else goto $l382;
            $l402:;
            if ($tmp400 > $tmp378) goto $l397; else goto $l382;
            $l399:;
            int64_t $tmp404 = i374.value - $tmp377;
            if ($tmp379) goto $l405; else goto $l406;
            $l405:;
            if ($tmp404 >= -$tmp378) goto $l397; else goto $l382;
            $l406:;
            if ($tmp404 > -$tmp378) goto $l397; else goto $l382;
            $l397:;
            i374.value += $tmp378;
            goto $l380;
            $l382:;
        }
        goto $l355;
        $l356:;
    }
    }
    else {
    {
        $l408:;
        panda$core$Bit $tmp410 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current342, end347);
        if (!$tmp410.value) goto $l409;
        {
            c411 = self->data[current342.value];
            (($fn412) result351->$class->vtable[2])(result351, c411);
            old413 = current342;
            panda$core$Int64 $tmp414 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
            current342 = $tmp414;
            int64_t $tmp415 = ((int64_t) c411.value) & 255;
            bool $tmp416 = $tmp415 >= 192;
            if (((panda$core$Bit) { $tmp416 }).value) {
            {
                (($fn417) result351->$class->vtable[2])(result351, self->data[current342.value]);
                panda$core$Int64 $tmp418 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
                current342 = $tmp418;
            }
            }
            int64_t $tmp419 = ((int64_t) c411.value) & 255;
            bool $tmp420 = $tmp419 >= 224;
            if (((panda$core$Bit) { $tmp420 }).value) {
            {
                (($fn421) result351->$class->vtable[2])(result351, self->data[current342.value]);
                panda$core$Int64 $tmp422 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
                current342 = $tmp422;
            }
            }
            int64_t $tmp423 = ((int64_t) c411.value) & 255;
            bool $tmp424 = $tmp423 >= 240;
            if (((panda$core$Bit) { $tmp424 }).value) {
            {
                (($fn425) result351->$class->vtable[2])(result351, self->data[current342.value]);
            }
            }
            panda$core$Int64 $tmp426 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(old413, ((panda$core$Int64) { 1 }));
            current342 = $tmp426;
            $l427:;
            int64_t $tmp430 = ((int64_t) self->data[current342.value].value) & 255;
            bool $tmp431 = $tmp430 >= 128;
            bool $tmp429 = $tmp431;
            if (!$tmp429) goto $l432;
            int64_t $tmp433 = ((int64_t) self->data[current342.value].value) & 255;
            bool $tmp434 = $tmp433 < 192;
            $tmp429 = $tmp434;
            $l432:;
            if (!((panda$core$Bit) { $tmp429 }).value) goto $l428;
            {
                panda$core$Int64 $tmp435 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
                current342 = $tmp435;
            }
            goto $l427;
            $l428:;
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp436, ((panda$core$Int64) { -1 }), step341, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp438 = $tmp436.start.value;
            panda$core$Int64 i437 = { $tmp438 };
            int64_t $tmp440 = $tmp436.end.value;
            int64_t $tmp441 = $tmp436.step.value;
            bool $tmp442 = $tmp436.inclusive.value;
            bool $tmp449 = $tmp441 > 0;
            if ($tmp449) goto $l447; else goto $l448;
            $l447:;
            if ($tmp442) goto $l450; else goto $l451;
            $l450:;
            if ($tmp438 <= $tmp440) goto $l443; else goto $l445;
            $l451:;
            if ($tmp438 < $tmp440) goto $l443; else goto $l445;
            $l448:;
            if ($tmp442) goto $l452; else goto $l453;
            $l452:;
            if ($tmp438 >= $tmp440) goto $l443; else goto $l445;
            $l453:;
            if ($tmp438 > $tmp440) goto $l443; else goto $l445;
            $l443:;
            {
                panda$core$Bit $tmp455 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(current342, end347);
                if ($tmp455.value) {
                {
                    panda$core$String* $tmp457 = (($fn456) result351->$class->vtable[0])(result351);
                    return $tmp457;
                }
                }
                panda$core$String$Index$init$panda$core$Int64(&$tmp458, current342);
                panda$core$String$Index $tmp459 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, $tmp458);
                current342 = $tmp459.value;
            }
            $l446:;
            if ($tmp449) goto $l461; else goto $l462;
            $l461:;
            int64_t $tmp463 = $tmp440 - i437.value;
            if ($tmp442) goto $l464; else goto $l465;
            $l464:;
            if ($tmp463 >= $tmp441) goto $l460; else goto $l445;
            $l465:;
            if ($tmp463 > $tmp441) goto $l460; else goto $l445;
            $l462:;
            int64_t $tmp467 = i437.value - $tmp440;
            if ($tmp442) goto $l468; else goto $l469;
            $l468:;
            if ($tmp467 >= -$tmp441) goto $l460; else goto $l445;
            $l469:;
            if ($tmp467 > -$tmp441) goto $l460; else goto $l445;
            $l460:;
            i437.value += $tmp441;
            goto $l443;
            $l445:;
        }
        goto $l408;
        $l409:;
    }
    }
    bool $tmp473 = p_r.inclusive.value;
    if ($tmp473) goto $l474;
    $tmp473 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l474:;
    panda$core$Bit $tmp475 = { $tmp473 };
    bool $tmp472 = $tmp475.value;
    if (!$tmp472) goto $l476;
    panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current342, end347);
    $tmp472 = $tmp477.value;
    $l476:;
    panda$core$Bit $tmp478 = { $tmp472 };
    bool $tmp471 = $tmp478.value;
    if (!$tmp471) goto $l479;
    panda$core$Bit $tmp480 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end347, self->_length);
    $tmp471 = $tmp480.value;
    $l479:;
    panda$core$Bit $tmp481 = { $tmp471 };
    if ($tmp481.value) {
    {
        c482 = self->data[current342.value];
        (($fn483) result351->$class->vtable[2])(result351, c482);
        panda$core$Int64 $tmp484 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
        current342 = $tmp484;
        int64_t $tmp485 = ((int64_t) c482.value) & 255;
        bool $tmp486 = $tmp485 >= 192;
        if (((panda$core$Bit) { $tmp486 }).value) {
        {
            (($fn487) result351->$class->vtable[2])(result351, self->data[current342.value]);
            panda$core$Int64 $tmp488 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
            current342 = $tmp488;
        }
        }
        int64_t $tmp489 = ((int64_t) c482.value) & 255;
        bool $tmp490 = $tmp489 >= 224;
        if (((panda$core$Bit) { $tmp490 }).value) {
        {
            (($fn491) result351->$class->vtable[2])(result351, self->data[current342.value]);
            panda$core$Int64 $tmp492 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current342, ((panda$core$Int64) { 1 }));
            current342 = $tmp492;
        }
        }
        int64_t $tmp493 = ((int64_t) c482.value) & 255;
        bool $tmp494 = $tmp493 >= 240;
        if (((panda$core$Bit) { $tmp494 }).value) {
        {
            (($fn495) result351->$class->vtable[2])(result351, self->data[current342.value]);
        }
        }
    }
    }
    panda$core$String* $tmp497 = (($fn496) result351->$class->vtable[0])(result351);
    return $tmp497;
}
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$String$Index$nullable start498;
    panda$core$String$Index$nullable end501;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp504;
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        panda$core$String$Index $tmp499 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp500 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp499, ((panda$core$Int64) p_r.start.value));
        start498 = ((panda$core$String$Index$nullable) { $tmp500, true });
    }
    }
    else {
    {
        start498 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        panda$core$String$Index $tmp502 = panda$core$String$start$R$panda$core$String$Index(self);
        panda$core$String$Index $tmp503 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, $tmp502, ((panda$core$Int64) p_r.end.value));
        end501 = ((panda$core$String$Index$nullable) { $tmp503, true });
    }
    }
    else {
    {
        end501 = ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp504, start498, end501, ((panda$core$Int64$nullable) { p_r.step, true }), p_r.inclusive);
    panda$core$String* $tmp505 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp504);
    return $tmp505;
}
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp506;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp506, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp508 = $tmp506.start.value;
    panda$core$Int64 i507 = { $tmp508 };
    int64_t $tmp510 = $tmp506.end.value;
    int64_t $tmp511 = $tmp506.step.value;
    bool $tmp512 = $tmp506.inclusive.value;
    bool $tmp519 = $tmp511 > 0;
    if ($tmp519) goto $l517; else goto $l518;
    $l517:;
    if ($tmp512) goto $l520; else goto $l521;
    $l520:;
    if ($tmp508 <= $tmp510) goto $l513; else goto $l515;
    $l521:;
    if ($tmp508 < $tmp510) goto $l513; else goto $l515;
    $l518:;
    if ($tmp512) goto $l522; else goto $l523;
    $l522:;
    if ($tmp508 >= $tmp510) goto $l513; else goto $l515;
    $l523:;
    if ($tmp508 > $tmp510) goto $l513; else goto $l515;
    $l513:;
    {
        panda$core$Bit $tmp525 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i507.value], p_c);
        if ($tmp525.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
    }
    $l516:;
    if ($tmp519) goto $l527; else goto $l528;
    $l527:;
    int64_t $tmp529 = $tmp510 - i507.value;
    if ($tmp512) goto $l530; else goto $l531;
    $l530:;
    if ($tmp529 >= $tmp511) goto $l526; else goto $l515;
    $l531:;
    if ($tmp529 > $tmp511) goto $l526; else goto $l515;
    $l528:;
    int64_t $tmp533 = i507.value - $tmp510;
    if ($tmp512) goto $l534; else goto $l535;
    $l534:;
    if ($tmp533 >= -$tmp511) goto $l526; else goto $l515;
    $l535:;
    if ($tmp533 > -$tmp511) goto $l526; else goto $l515;
    $l526:;
    i507.value += $tmp511;
    goto $l513;
    $l515:;
    return ((panda$core$Bit) { false });
}
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index$nullable $tmp537 = panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(self, p_s);
    return ((panda$core$Bit) { $tmp537.nonnull });
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp538 = panda$core$String$start$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp539 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp538);
    return $tmp539;
}
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp541;
    panda$core$Range$LTpanda$core$Int64$GT $tmp561;
    panda$core$String$Index $tmp593;
    panda$core$Bit $tmp540 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp540.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp542 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp541, p_start.value, $tmp542, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp544 = $tmp541.start.value;
    panda$core$Int64 i543 = { $tmp544 };
    int64_t $tmp546 = $tmp541.end.value;
    int64_t $tmp547 = $tmp541.step.value;
    bool $tmp548 = $tmp541.inclusive.value;
    bool $tmp555 = $tmp547 > 0;
    if ($tmp555) goto $l553; else goto $l554;
    $l553:;
    if ($tmp548) goto $l556; else goto $l557;
    $l556:;
    if ($tmp544 <= $tmp546) goto $l549; else goto $l551;
    $l557:;
    if ($tmp544 < $tmp546) goto $l549; else goto $l551;
    $l554:;
    if ($tmp548) goto $l558; else goto $l559;
    $l558:;
    if ($tmp544 >= $tmp546) goto $l549; else goto $l551;
    $l559:;
    if ($tmp544 > $tmp546) goto $l549; else goto $l551;
    $l549:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp561, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp563 = $tmp561.start.value;
        panda$core$Int64 j562 = { $tmp563 };
        int64_t $tmp565 = $tmp561.end.value;
        int64_t $tmp566 = $tmp561.step.value;
        bool $tmp567 = $tmp561.inclusive.value;
        bool $tmp574 = $tmp566 > 0;
        if ($tmp574) goto $l572; else goto $l573;
        $l572:;
        if ($tmp567) goto $l575; else goto $l576;
        $l575:;
        if ($tmp563 <= $tmp565) goto $l568; else goto $l570;
        $l576:;
        if ($tmp563 < $tmp565) goto $l568; else goto $l570;
        $l573:;
        if ($tmp567) goto $l577; else goto $l578;
        $l577:;
        if ($tmp563 >= $tmp565) goto $l568; else goto $l570;
        $l578:;
        if ($tmp563 > $tmp565) goto $l568; else goto $l570;
        $l568:;
        {
            panda$core$Int64 $tmp580 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i543, j562);
            panda$core$Bit $tmp581 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp580.value], p_s->data[j562.value]);
            if ($tmp581.value) {
            {
                goto $l552;
            }
            }
        }
        $l571:;
        if ($tmp574) goto $l583; else goto $l584;
        $l583:;
        int64_t $tmp585 = $tmp565 - j562.value;
        if ($tmp567) goto $l586; else goto $l587;
        $l586:;
        if ($tmp585 >= $tmp566) goto $l582; else goto $l570;
        $l587:;
        if ($tmp585 > $tmp566) goto $l582; else goto $l570;
        $l584:;
        int64_t $tmp589 = j562.value - $tmp565;
        if ($tmp567) goto $l590; else goto $l591;
        $l590:;
        if ($tmp589 >= -$tmp566) goto $l582; else goto $l570;
        $l591:;
        if ($tmp589 > -$tmp566) goto $l582; else goto $l570;
        $l582:;
        j562.value += $tmp566;
        goto $l568;
        $l570:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp593, i543);
        return ((panda$core$String$Index$nullable) { $tmp593, true });
    }
    $l552:;
    if ($tmp555) goto $l595; else goto $l596;
    $l595:;
    int64_t $tmp597 = $tmp546 - i543.value;
    if ($tmp548) goto $l598; else goto $l599;
    $l598:;
    if ($tmp597 >= $tmp547) goto $l594; else goto $l551;
    $l599:;
    if ($tmp597 > $tmp547) goto $l594; else goto $l551;
    $l596:;
    int64_t $tmp601 = i543.value - $tmp546;
    if ($tmp548) goto $l602; else goto $l603;
    $l602:;
    if ($tmp601 >= -$tmp547) goto $l594; else goto $l551;
    $l603:;
    if ($tmp601 > -$tmp547) goto $l594; else goto $l551;
    $l594:;
    i543.value += $tmp547;
    goto $l549;
    $l551:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s) {
    panda$core$String$Index $tmp605 = panda$core$String$end$R$panda$core$String$Index(self);
    panda$core$String$Index$nullable $tmp606 = panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_s, $tmp605);
    return $tmp606;
}
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start) {
    panda$core$Int64 startPos608;
    panda$core$Range$LTpanda$core$Int64$GT $tmp611;
    panda$core$Range$LTpanda$core$Int64$GT $tmp630;
    panda$core$String$Index $tmp662;
    panda$core$Bit $tmp607 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp607.value) {
    {
        return ((panda$core$String$Index$nullable) { .nonnull = false });
    }
    }
    panda$core$Int64 $tmp609 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp610 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp609);
    startPos608 = $tmp610;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp611, startPos608, ((panda$core$Int64) { 0 }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { true }));
    int64_t $tmp613 = $tmp611.start.value;
    panda$core$Int64 i612 = { $tmp613 };
    int64_t $tmp615 = $tmp611.end.value;
    int64_t $tmp616 = $tmp611.step.value;
    bool $tmp617 = $tmp611.inclusive.value;
    bool $tmp624 = $tmp616 > 0;
    if ($tmp624) goto $l622; else goto $l623;
    $l622:;
    if ($tmp617) goto $l625; else goto $l626;
    $l625:;
    if ($tmp613 <= $tmp615) goto $l618; else goto $l620;
    $l626:;
    if ($tmp613 < $tmp615) goto $l618; else goto $l620;
    $l623:;
    if ($tmp617) goto $l627; else goto $l628;
    $l627:;
    if ($tmp613 >= $tmp615) goto $l618; else goto $l620;
    $l628:;
    if ($tmp613 > $tmp615) goto $l618; else goto $l620;
    $l618:;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp630, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp632 = $tmp630.start.value;
        panda$core$Int64 j631 = { $tmp632 };
        int64_t $tmp634 = $tmp630.end.value;
        int64_t $tmp635 = $tmp630.step.value;
        bool $tmp636 = $tmp630.inclusive.value;
        bool $tmp643 = $tmp635 > 0;
        if ($tmp643) goto $l641; else goto $l642;
        $l641:;
        if ($tmp636) goto $l644; else goto $l645;
        $l644:;
        if ($tmp632 <= $tmp634) goto $l637; else goto $l639;
        $l645:;
        if ($tmp632 < $tmp634) goto $l637; else goto $l639;
        $l642:;
        if ($tmp636) goto $l646; else goto $l647;
        $l646:;
        if ($tmp632 >= $tmp634) goto $l637; else goto $l639;
        $l647:;
        if ($tmp632 > $tmp634) goto $l637; else goto $l639;
        $l637:;
        {
            panda$core$Int64 $tmp649 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i612, j631);
            panda$core$Bit $tmp650 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp649.value], p_s->data[j631.value]);
            if ($tmp650.value) {
            {
                goto $l621;
            }
            }
        }
        $l640:;
        if ($tmp643) goto $l652; else goto $l653;
        $l652:;
        int64_t $tmp654 = $tmp634 - j631.value;
        if ($tmp636) goto $l655; else goto $l656;
        $l655:;
        if ($tmp654 >= $tmp635) goto $l651; else goto $l639;
        $l656:;
        if ($tmp654 > $tmp635) goto $l651; else goto $l639;
        $l653:;
        int64_t $tmp658 = j631.value - $tmp634;
        if ($tmp636) goto $l659; else goto $l660;
        $l659:;
        if ($tmp658 >= -$tmp635) goto $l651; else goto $l639;
        $l660:;
        if ($tmp658 > -$tmp635) goto $l651; else goto $l639;
        $l651:;
        j631.value += $tmp635;
        goto $l637;
        $l639:;
        panda$core$String$Index$init$panda$core$Int64(&$tmp662, i612);
        return ((panda$core$String$Index$nullable) { $tmp662, true });
    }
    $l621:;
    if ($tmp624) goto $l664; else goto $l665;
    $l664:;
    int64_t $tmp666 = $tmp615 - i612.value;
    if ($tmp617) goto $l667; else goto $l668;
    $l667:;
    if ($tmp666 >= $tmp616) goto $l663; else goto $l620;
    $l668:;
    if ($tmp666 > $tmp616) goto $l663; else goto $l620;
    $l665:;
    int64_t $tmp670 = i612.value - $tmp615;
    if ($tmp617) goto $l671; else goto $l672;
    $l671:;
    if ($tmp670 >= -$tmp616) goto $l663; else goto $l620;
    $l672:;
    if ($tmp670 > -$tmp616) goto $l663; else goto $l620;
    $l663:;
    i612.value += $tmp616;
    goto $l618;
    $l620:;
    return ((panda$core$String$Index$nullable) { .nonnull = false });
}
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString* result674;
    panda$core$String$Index index677;
    panda$core$String$Index$nullable nextIndex681;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp683;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp686;
    panda$core$String$Index $tmp690;
    panda$core$MutableString* $tmp675 = (panda$core$MutableString*) malloc(40);
    $tmp675->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp675->refCount.value = 1;
    panda$core$MutableString$init($tmp675);
    result674 = $tmp675;
    panda$core$String$Index $tmp678 = panda$core$String$start$R$panda$core$String$Index(self);
    index677 = $tmp678;
    $l679:;
    while (true) {
    {
        panda$core$String$Index$nullable $tmp682 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_search, index677);
        nextIndex681 = $tmp682;
        if (((panda$core$Bit) { !nextIndex681.nonnull }).value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp683, ((panda$core$String$Index$nullable) { index677, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp684 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp683);
            (($fn685) result674->$class->vtable[3])(result674, $tmp684);
            goto $l680;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp686, ((panda$core$String$Index$nullable) { index677, true }), nextIndex681, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp687 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp686);
        (($fn688) result674->$class->vtable[3])(result674, $tmp687);
        (($fn689) result674->$class->vtable[3])(result674, p_replacement);
        panda$core$Int64 $tmp691 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$String$Index) nextIndex681.value).value, p_search->_length);
        panda$core$String$Index$init$panda$core$Int64(&$tmp690, $tmp691);
        index677 = $tmp690;
    }
    }
    $l680:;
    panda$core$String* $tmp693 = (($fn692) result674->$class->vtable[0])(result674);
    return $tmp693;
}
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp694;
    panda$core$String$Index$init$panda$core$Int64(&$tmp694, ((panda$core$Int64) { 0 }));
    return $tmp694;
}
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self) {
    panda$core$String$Index $tmp695;
    panda$core$String$Index$init$panda$core$Int64(&$tmp695, self->_length);
    return $tmp695;
}
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    int64_t c696;
    panda$core$String$Index $tmp699;
    panda$core$String$Index $tmp702;
    panda$core$String$Index $tmp705;
    panda$core$String$Index $tmp707;
    int64_t $tmp697 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c696 = $tmp697;
    bool $tmp698 = c696 >= 240;
    if (((panda$core$Bit) { $tmp698 }).value) {
    {
        panda$core$Int64 $tmp700 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 4 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp699, $tmp700);
        return $tmp699;
    }
    }
    bool $tmp701 = c696 >= 224;
    if (((panda$core$Bit) { $tmp701 }).value) {
    {
        panda$core$Int64 $tmp703 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 3 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp702, $tmp703);
        return $tmp702;
    }
    }
    bool $tmp704 = c696 >= 192;
    if (((panda$core$Bit) { $tmp704 }).value) {
    {
        panda$core$Int64 $tmp706 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 2 }));
        panda$core$String$Index$init$panda$core$Int64(&$tmp705, $tmp706);
        return $tmp705;
    }
    }
    panda$core$Int64 $tmp708 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    panda$core$String$Index$init$panda$core$Int64(&$tmp707, $tmp708);
    return $tmp707;
}
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i) {
    panda$core$Int64 newValue709;
    panda$core$String$Index $tmp720;
    panda$core$Int64 $tmp710 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, ((panda$core$Int64) { 1 }));
    newValue709 = $tmp710;
    $l711:;
    int64_t $tmp714 = ((int64_t) self->data[newValue709.value].value) & 255;
    bool $tmp715 = $tmp714 >= 128;
    bool $tmp713 = $tmp715;
    if (!$tmp713) goto $l716;
    int64_t $tmp717 = ((int64_t) self->data[newValue709.value].value) & 255;
    bool $tmp718 = $tmp717 < 192;
    $tmp713 = $tmp718;
    $l716:;
    if (!((panda$core$Bit) { $tmp713 }).value) goto $l712;
    {
        panda$core$Int64 $tmp719 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue709, ((panda$core$Int64) { 1 }));
        newValue709 = $tmp719;
    }
    goto $l711;
    $l712:;
    panda$core$String$Index$init$panda$core$Int64(&$tmp720, newValue709);
    return $tmp720;
}
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset) {
    panda$core$String$Index result721;
    panda$core$Range$LTpanda$core$Int64$GT $tmp723;
    panda$core$Range$LTpanda$core$Int64$GT $tmp754;
    result721 = p_index;
    panda$core$Bit $tmp722 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, ((panda$core$Int64) { 0 }));
    if ($tmp722.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp723, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp725 = $tmp723.start.value;
        panda$core$Int64 i724 = { $tmp725 };
        int64_t $tmp727 = $tmp723.end.value;
        int64_t $tmp728 = $tmp723.step.value;
        bool $tmp729 = $tmp723.inclusive.value;
        bool $tmp736 = $tmp728 > 0;
        if ($tmp736) goto $l734; else goto $l735;
        $l734:;
        if ($tmp729) goto $l737; else goto $l738;
        $l737:;
        if ($tmp725 <= $tmp727) goto $l730; else goto $l732;
        $l738:;
        if ($tmp725 < $tmp727) goto $l730; else goto $l732;
        $l735:;
        if ($tmp729) goto $l739; else goto $l740;
        $l739:;
        if ($tmp725 >= $tmp727) goto $l730; else goto $l732;
        $l740:;
        if ($tmp725 > $tmp727) goto $l730; else goto $l732;
        $l730:;
        {
            panda$core$String$Index $tmp742 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, result721);
            result721 = $tmp742;
        }
        $l733:;
        if ($tmp736) goto $l744; else goto $l745;
        $l744:;
        int64_t $tmp746 = $tmp727 - i724.value;
        if ($tmp729) goto $l747; else goto $l748;
        $l747:;
        if ($tmp746 >= $tmp728) goto $l743; else goto $l732;
        $l748:;
        if ($tmp746 > $tmp728) goto $l743; else goto $l732;
        $l745:;
        int64_t $tmp750 = i724.value - $tmp727;
        if ($tmp729) goto $l751; else goto $l752;
        $l751:;
        if ($tmp750 >= -$tmp728) goto $l743; else goto $l732;
        $l752:;
        if ($tmp750 > -$tmp728) goto $l743; else goto $l732;
        $l743:;
        i724.value += $tmp728;
        goto $l730;
        $l732:;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp754, ((panda$core$Int64) { 0 }), p_offset, ((panda$core$Int64$nullable) { ((panda$core$Int64) { -1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp756 = $tmp754.start.value;
        panda$core$Int64 i755 = { $tmp756 };
        int64_t $tmp758 = $tmp754.end.value;
        int64_t $tmp759 = $tmp754.step.value;
        bool $tmp760 = $tmp754.inclusive.value;
        bool $tmp767 = $tmp759 > 0;
        if ($tmp767) goto $l765; else goto $l766;
        $l765:;
        if ($tmp760) goto $l768; else goto $l769;
        $l768:;
        if ($tmp756 <= $tmp758) goto $l761; else goto $l763;
        $l769:;
        if ($tmp756 < $tmp758) goto $l761; else goto $l763;
        $l766:;
        if ($tmp760) goto $l770; else goto $l771;
        $l770:;
        if ($tmp756 >= $tmp758) goto $l761; else goto $l763;
        $l771:;
        if ($tmp756 > $tmp758) goto $l761; else goto $l763;
        $l761:;
        {
            panda$core$String$Index $tmp773 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(self, result721);
            result721 = $tmp773;
        }
        $l764:;
        if ($tmp767) goto $l775; else goto $l776;
        $l775:;
        int64_t $tmp777 = $tmp758 - i755.value;
        if ($tmp760) goto $l778; else goto $l779;
        $l778:;
        if ($tmp777 >= $tmp759) goto $l774; else goto $l763;
        $l779:;
        if ($tmp777 > $tmp759) goto $l774; else goto $l763;
        $l776:;
        int64_t $tmp781 = i755.value - $tmp758;
        if ($tmp760) goto $l782; else goto $l783;
        $l782:;
        if ($tmp781 >= -$tmp759) goto $l774; else goto $l763;
        $l783:;
        if ($tmp781 > -$tmp759) goto $l774; else goto $l763;
        $l774:;
        i755.value += $tmp759;
        goto $l761;
        $l763:;
    }
    }
    return result721;
}
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter) {
    panda$collections$Array* $tmp785 = panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(self, p_delimiter, ((panda$core$Int64) { 9223372036854775807 }));
    return $tmp785;
}
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults) {
    panda$collections$Array* result786;
    panda$core$String$Index index789;
    panda$core$String$Index$nullable nextIndex793;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp802;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp804;
    panda$collections$Array* $tmp787 = (panda$collections$Array*) malloc(40);
    $tmp787->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp787->refCount.value = 1;
    panda$collections$Array$init($tmp787);
    result786 = $tmp787;
    panda$core$String$Index $tmp790 = panda$core$String$start$R$panda$core$String$Index(self);
    index789 = $tmp790;
    $l791:;
    while (true) {
    {
        panda$core$Bit $tmp794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_delimiter->_length, ((panda$core$Int64) { 0 }));
        if ($tmp794.value) {
        {
            panda$core$String$Index $tmp795 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(self, index789);
            nextIndex793 = ((panda$core$String$Index$nullable) { $tmp795, true });
        }
        }
        else {
        {
            panda$core$String$Index$nullable $tmp796 = panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(self, p_delimiter, index789);
            nextIndex793 = $tmp796;
        }
        }
        bool $tmp797 = ((panda$core$Bit) { !nextIndex793.nonnull }).value;
        if ($tmp797) goto $l798;
        panda$core$Int64 $tmp799 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_maxResults, ((panda$core$Int64) { 1 }));
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result786->count, $tmp799);
        $tmp797 = $tmp800.value;
        $l798:;
        panda$core$Bit $tmp801 = { $tmp797 };
        if ($tmp801.value) {
        {
            panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp802, ((panda$core$String$Index$nullable) { index789, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            panda$core$String* $tmp803 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp802);
            panda$collections$Array$add$panda$collections$Array$T(result786, ((panda$core$Object*) $tmp803));
            goto $l792;
        }
        }
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp804, ((panda$core$String$Index$nullable) { index789, true }), nextIndex793, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp805 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(self, $tmp804);
        panda$collections$Array$add$panda$collections$Array$T(result786, ((panda$core$Object*) $tmp805));
        panda$core$String$Index $tmp806 = panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(self, ((panda$core$String$Index) nextIndex793.value), p_delimiter->_length);
        index789 = $tmp806;
    }
    }
    $l792:;
    return result786;
}
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self) {
    panda$core$Int64 result808;
    panda$core$Int64 start809;
    panda$core$Char8 $tmp810;
    panda$core$Range$LTpanda$core$Int64$GT $tmp812;
    panda$core$Int64 digit831;
    panda$core$Char8 $tmp851;
    panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp807.value) {
    {
        return ((panda$core$Int64$nullable) { .nonnull = false });
    }
    }
    result808 = ((panda$core$Int64) { 0 });
    panda$core$Char8$init$panda$core$UInt8(&$tmp810, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp811 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp810);
    if ($tmp811.value) {
    {
        start809 = ((panda$core$Int64) { 1 });
    }
    }
    else {
    {
        start809 = ((panda$core$Int64) { 0 });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp812, start809, self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp814 = $tmp812.start.value;
    panda$core$Int64 i813 = { $tmp814 };
    int64_t $tmp816 = $tmp812.end.value;
    int64_t $tmp817 = $tmp812.step.value;
    bool $tmp818 = $tmp812.inclusive.value;
    bool $tmp825 = $tmp817 > 0;
    if ($tmp825) goto $l823; else goto $l824;
    $l823:;
    if ($tmp818) goto $l826; else goto $l827;
    $l826:;
    if ($tmp814 <= $tmp816) goto $l819; else goto $l821;
    $l827:;
    if ($tmp814 < $tmp816) goto $l819; else goto $l821;
    $l824:;
    if ($tmp818) goto $l828; else goto $l829;
    $l828:;
    if ($tmp814 >= $tmp816) goto $l819; else goto $l821;
    $l829:;
    if ($tmp814 > $tmp816) goto $l819; else goto $l821;
    $l819:;
    {
        panda$core$Int64 $tmp832 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { ((int64_t) self->data[i813.value].value) }), ((panda$core$Int64) { 48 }));
        digit831 = $tmp832;
        panda$core$Bit $tmp834 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(digit831, ((panda$core$Int64) { 0 }));
        bool $tmp833 = $tmp834.value;
        if ($tmp833) goto $l835;
        panda$core$Bit $tmp836 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(digit831, ((panda$core$Int64) { 9 }));
        $tmp833 = $tmp836.value;
        $l835:;
        panda$core$Bit $tmp837 = { $tmp833 };
        if ($tmp837.value) {
        {
            return ((panda$core$Int64$nullable) { .nonnull = false });
        }
        }
        panda$core$Int64 $tmp838 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result808, ((panda$core$Int64) { 10 }));
        panda$core$Int64 $tmp839 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp838, digit831);
        result808 = $tmp839;
    }
    $l822:;
    if ($tmp825) goto $l841; else goto $l842;
    $l841:;
    int64_t $tmp843 = $tmp816 - i813.value;
    if ($tmp818) goto $l844; else goto $l845;
    $l844:;
    if ($tmp843 >= $tmp817) goto $l840; else goto $l821;
    $l845:;
    if ($tmp843 > $tmp817) goto $l840; else goto $l821;
    $l842:;
    int64_t $tmp847 = i813.value - $tmp816;
    if ($tmp818) goto $l848; else goto $l849;
    $l848:;
    if ($tmp847 >= -$tmp817) goto $l840; else goto $l821;
    $l849:;
    if ($tmp847 > -$tmp817) goto $l840; else goto $l821;
    $l840:;
    i813.value += $tmp817;
    goto $l819;
    $l821:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp851, ((panda$core$UInt8) { 45 }));
    panda$core$Bit $tmp852 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[((panda$core$Int64) { 0 }).value], $tmp851);
    if ($tmp852.value) {
    {
        panda$core$Int64 $tmp853 = panda$core$Int64$$SUB$R$panda$core$Int64(result808);
        result808 = $tmp853;
    }
    }
    return ((panda$core$Int64$nullable) { result808, true });
}
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self) {
    panda$core$UInt64 result855;
    panda$core$Range$LTpanda$core$Int64$GT $tmp856;
    panda$core$UInt64 digit875;
    panda$core$Bit $tmp854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, ((panda$core$Int64) { 0 }));
    if ($tmp854.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result855 = ((panda$core$UInt64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp856, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp858 = $tmp856.start.value;
    panda$core$Int64 i857 = { $tmp858 };
    int64_t $tmp860 = $tmp856.end.value;
    int64_t $tmp861 = $tmp856.step.value;
    bool $tmp862 = $tmp856.inclusive.value;
    bool $tmp869 = $tmp861 > 0;
    if ($tmp869) goto $l867; else goto $l868;
    $l867:;
    if ($tmp862) goto $l870; else goto $l871;
    $l870:;
    if ($tmp858 <= $tmp860) goto $l863; else goto $l865;
    $l871:;
    if ($tmp858 < $tmp860) goto $l863; else goto $l865;
    $l868:;
    if ($tmp862) goto $l872; else goto $l873;
    $l872:;
    if ($tmp858 >= $tmp860) goto $l863; else goto $l865;
    $l873:;
    if ($tmp858 > $tmp860) goto $l863; else goto $l865;
    $l863:;
    {
        panda$core$UInt64 $tmp876 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { ((int64_t) self->data[i857.value].value) }), ((panda$core$UInt64) { 48 }));
        digit875 = $tmp876;
        panda$core$Bit $tmp878 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(digit875, ((panda$core$UInt64) { 0 }));
        bool $tmp877 = $tmp878.value;
        if ($tmp877) goto $l879;
        panda$core$Bit $tmp880 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(digit875, ((panda$core$UInt64) { 9 }));
        $tmp877 = $tmp880.value;
        $l879:;
        panda$core$Bit $tmp881 = { $tmp877 };
        if ($tmp881.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp882 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result855, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64 $tmp883 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp882, digit875);
        result855 = $tmp883;
    }
    $l866:;
    if ($tmp869) goto $l885; else goto $l886;
    $l885:;
    int64_t $tmp887 = $tmp860 - i857.value;
    if ($tmp862) goto $l888; else goto $l889;
    $l888:;
    if ($tmp887 >= $tmp861) goto $l884; else goto $l865;
    $l889:;
    if ($tmp887 > $tmp861) goto $l884; else goto $l865;
    $l886:;
    int64_t $tmp891 = i857.value - $tmp860;
    if ($tmp862) goto $l892; else goto $l893;
    $l892:;
    if ($tmp891 >= -$tmp861) goto $l884; else goto $l865;
    $l893:;
    if ($tmp891 > -$tmp861) goto $l884; else goto $l865;
    $l884:;
    i857.value += $tmp861;
    goto $l863;
    $l865:;
    return ((panda$core$UInt64$nullable) { result855, true });
}
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self) {
    panda$core$Int64 result895;
    panda$core$Range$LTpanda$core$Int64$GT $tmp896;
    result895 = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp896, ((panda$core$Int64) { 0 }), self->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp898 = $tmp896.start.value;
    panda$core$Int64 i897 = { $tmp898 };
    int64_t $tmp900 = $tmp896.end.value;
    int64_t $tmp901 = $tmp896.step.value;
    bool $tmp902 = $tmp896.inclusive.value;
    bool $tmp909 = $tmp901 > 0;
    if ($tmp909) goto $l907; else goto $l908;
    $l907:;
    if ($tmp902) goto $l910; else goto $l911;
    $l910:;
    if ($tmp898 <= $tmp900) goto $l903; else goto $l905;
    $l911:;
    if ($tmp898 < $tmp900) goto $l903; else goto $l905;
    $l908:;
    if ($tmp902) goto $l912; else goto $l913;
    $l912:;
    if ($tmp898 >= $tmp900) goto $l903; else goto $l905;
    $l913:;
    if ($tmp898 > $tmp900) goto $l903; else goto $l905;
    $l903:;
    {
        panda$core$Int64 $tmp915 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(result895, ((panda$core$Int64) { 101 }));
        panda$core$Int64 $tmp916 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp915, ((panda$core$Int64) { ((int64_t) self->data[i897.value].value) }));
        result895 = $tmp916;
    }
    $l906:;
    if ($tmp909) goto $l918; else goto $l919;
    $l918:;
    int64_t $tmp920 = $tmp900 - i897.value;
    if ($tmp902) goto $l921; else goto $l922;
    $l921:;
    if ($tmp920 >= $tmp901) goto $l917; else goto $l905;
    $l922:;
    if ($tmp920 > $tmp901) goto $l917; else goto $l905;
    $l919:;
    int64_t $tmp924 = i897.value - $tmp900;
    if ($tmp902) goto $l925; else goto $l926;
    $l925:;
    if ($tmp924 >= -$tmp901) goto $l917; else goto $l905;
    $l926:;
    if ($tmp924 > -$tmp901) goto $l917; else goto $l905;
    $l917:;
    i897.value += $tmp901;
    goto $l903;
    $l905:;
    return result895;
}

