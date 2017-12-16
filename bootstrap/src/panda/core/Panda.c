#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/Bit.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/UInt64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"


panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef void (*$fn9)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn21)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn111)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x44\x65\x62\x75\x67\x3a\x20", 7, 180468745123278, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp1 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp3 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2, p_file);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, &$s4);
    panda$core$String* $tmp6 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5, ((panda$core$Object*) wrap_panda$core$Int64(p_line)));
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6, &$s7);
    (($fn9) $tmp1->$class->vtable[19])($tmp1, $tmp8);
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp10 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp12 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s11, p_file);
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp12, &$s13);
    panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp14, ((panda$core$Object*) wrap_panda$core$Int64(p_line)));
    panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp15, &$s16);
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp17, p_msg);
    panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s19);
    (($fn21) $tmp10->$class->vtable[19])($tmp10, $tmp20);
    panda$core$System$crash();
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index24;
    panda$core$Char32 $match$46_927;
    panda$core$Char32 $tmp31;
    panda$core$Char32 $tmp34;
    panda$core$Char32 $tmp38;
    panda$core$Int64 width42;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp43;
    panda$core$Char32 fill47;
    panda$core$Char32 $tmp50;
    panda$core$Char32 $match$59_953;
    panda$core$Char32 $tmp55;
    panda$core$Char32 $tmp58;
    panda$core$Char32 $tmp61;
    panda$core$Int64 $tmp22 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp23 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp22, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp23.value);
    panda$core$String$Index $tmp25 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp26 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp25);
    index24 = $tmp26;
    {
        panda$core$Char32 $tmp28 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index24);
        $match$46_927 = $tmp28;
        panda$core$Char32$init$panda$core$Int32(&$tmp31, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp32 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$46_927, $tmp31);
        bool $tmp30 = $tmp32.value;
        if ($tmp30) goto $l33;
        panda$core$Char32$init$panda$core$Int32(&$tmp34, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp35 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$46_927, $tmp34);
        $tmp30 = $tmp35.value;
        $l33:;
        panda$core$Bit $tmp36 = { $tmp30 };
        bool $tmp29 = $tmp36.value;
        if ($tmp29) goto $l37;
        panda$core$Char32$init$panda$core$Int32(&$tmp38, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp39 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$46_927, $tmp38);
        $tmp29 = $tmp39.value;
        $l37:;
        panda$core$Bit $tmp40 = { $tmp29 };
        if ($tmp40.value) {
        {
            {
            }
        }
        }
        else {
        {
            panda$core$String$Index $tmp41 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index24 = $tmp41;
        }
        }
    }
    panda$core$String$Index $tmp44 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index24);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp43, ((panda$core$String$Index$nullable) { $tmp44, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp45 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp43);
    panda$core$Int64$nullable $tmp46 = panda$core$String$convert$R$panda$core$Int64$Q($tmp45);
    width42 = ((panda$core$Int64) $tmp46.value);
    panda$core$String$Index $tmp48 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp49 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index24, $tmp48);
    if ($tmp49.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp50, ((panda$core$Int32) { 32 }));
        fill47 = $tmp50;
    }
    }
    else {
    {
        panda$core$String$Index $tmp51 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp52 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp51);
        fill47 = $tmp52;
    }
    }
    {
        panda$core$Char32 $tmp54 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index24);
        $match$59_953 = $tmp54;
        panda$core$Char32$init$panda$core$Int32(&$tmp55, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp56 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$59_953, $tmp55);
        if ($tmp56.value) {
        {
            panda$core$String* $tmp57 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width42, fill47);
            return $tmp57;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp58, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp59 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$59_953, $tmp58);
        if ($tmp59.value) {
        {
            panda$core$String* $tmp60 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width42, fill47);
            return $tmp60;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp61, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp62 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$59_953, $tmp61);
        if ($tmp62.value) {
        {
            panda$core$String* $tmp63 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width42, fill47);
            return $tmp63;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
    }
}
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$UInt64 p_mask, panda$core$String* p_fmt) {
    panda$core$String$Index index64;
    panda$core$UInt64 base66;
    panda$collections$ListView* digits67;
    panda$core$Char32 $match$82_1372;
    panda$core$Char32 $tmp74;
    panda$core$Char32 $tmp76;
    panda$core$Char32 $tmp78;
    panda$core$Char32 $tmp80;
    panda$core$Char32 $tmp82;
    panda$core$Char32 $tmp84;
    panda$core$Char32 $tmp86;
    panda$core$Char32 $tmp88;
    panda$core$UInt64 value92;
    panda$core$Int64 max101;
    panda$core$Char8* chars102;
    panda$core$Int64 charIndex103;
    panda$core$Char8 $tmp120;
    panda$core$Int64 size123;
    panda$core$Range$LTpanda$core$Int64$GT $tmp125;
    panda$core$String$Index $tmp65 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
    index64 = $tmp65;
    base66 = ((panda$core$UInt64) { 10 });
    panda$collections$ListView* $tmp69 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s68);
    digits67 = $tmp69;
    panda$core$String$Index $tmp70 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
    panda$core$Bit $tmp71 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index64, $tmp70);
    if ($tmp71.value) {
    {
        {
            panda$core$Char32 $tmp73 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index64);
            $match$82_1372 = $tmp73;
            panda$core$Char32$init$panda$core$Int32(&$tmp74, ((panda$core$Int32) { 98 }));
            panda$core$Bit $tmp75 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp74);
            if ($tmp75.value) {
            {
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp76, ((panda$core$Int32) { 66 }));
            panda$core$Bit $tmp77 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp76);
            if ($tmp77.value) {
            {
                base66 = ((panda$core$UInt64) { 2 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp78, ((panda$core$Int32) { 111 }));
            panda$core$Bit $tmp79 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp78);
            if ($tmp79.value) {
            {
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp80, ((panda$core$Int32) { 79 }));
            panda$core$Bit $tmp81 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp80);
            if ($tmp81.value) {
            {
                base66 = ((panda$core$UInt64) { 8 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp82, ((panda$core$Int32) { 100 }));
            panda$core$Bit $tmp83 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp82);
            if ($tmp83.value) {
            {
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp84, ((panda$core$Int32) { 68 }));
            panda$core$Bit $tmp85 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp84);
            if ($tmp85.value) {
            {
                base66 = ((panda$core$UInt64) { 10 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp86, ((panda$core$Int32) { 120 }));
            panda$core$Bit $tmp87 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp86);
            if ($tmp87.value) {
            {
                base66 = ((panda$core$UInt64) { 16 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp88, ((panda$core$Int32) { 88 }));
            panda$core$Bit $tmp89 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_1372, $tmp88);
            if ($tmp89.value) {
            {
                base66 = ((panda$core$UInt64) { 16 });
                panda$collections$ListView* $tmp91 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s90);
                digits67 = $tmp91;
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
    }
    }
    bool $tmp93 = p_sign.value;
    if (!$tmp93) goto $l94;
    panda$core$Bit $tmp95 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base66, ((panda$core$UInt64) { 10 }));
    $tmp93 = $tmp95.value;
    $l94:;
    panda$core$Bit $tmp96 = { $tmp93 };
    if ($tmp96.value) {
    {
        panda$core$Int64 $tmp97 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
        panda$core$Int64 $tmp98 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp97);
        panda$core$UInt64 $tmp99 = panda$core$Int64$convert$R$panda$core$UInt64($tmp98);
        panda$core$UInt64 $tmp100 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp99, p_mask);
        value92 = $tmp100;
    }
    }
    else {
    {
        value92 = p_rawValue;
    }
    }
    max101 = ((panda$core$Int64) { 64 });
    chars102 = ((panda$core$Char8*) malloc(max101.value * 1));
    panda$core$Int64 $tmp104 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max101, ((panda$core$Int64) { 1 }));
    charIndex103 = $tmp104;
    $l105:;
    {
        panda$core$UInt64 $tmp107 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value92, base66);
        panda$core$Int64 $tmp108 = panda$core$UInt64$convert$R$panda$core$Int64($tmp107);
        ITable* $tmp109 = digits67->$class->itable;
        while ($tmp109->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp109 = $tmp109->next;
        }
        $fn111 $tmp110 = $tmp109->methods[0];
        panda$core$Object* $tmp112 = $tmp110(digits67, $tmp108);
        chars102[charIndex103.value] = ((panda$core$Char8$wrapper*) $tmp112)->value;
        panda$core$UInt64 $tmp113 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value92, base66);
        value92 = $tmp113;
        panda$core$Int64 $tmp114 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex103, ((panda$core$Int64) { 1 }));
        charIndex103 = $tmp114;
    }
    panda$core$Bit $tmp115 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value92, ((panda$core$UInt64) { 0 }));
    if ($tmp115.value) goto $l105;
    $l106:;
    bool $tmp116 = p_sign.value;
    if (!$tmp116) goto $l117;
    panda$core$Bit $tmp118 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base66, ((panda$core$UInt64) { 10 }));
    $tmp116 = $tmp118.value;
    $l117:;
    panda$core$Bit $tmp119 = { $tmp116 };
    if ($tmp119.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp120, ((panda$core$UInt8) { 45 }));
        chars102[charIndex103.value] = $tmp120;
        panda$core$Int64 $tmp121 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex103, ((panda$core$Int64) { 1 }));
        charIndex103 = $tmp121;
    }
    }
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex103, ((panda$core$Int64) { 1 }));
    charIndex103 = $tmp122;
    panda$core$Int64 $tmp124 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max101, charIndex103);
    size123 = $tmp124;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp125, ((panda$core$Int64) { 0 }), size123, ((panda$core$Bit) { false }));
    int64_t $tmp127 = $tmp125.min.value;
    panda$core$Int64 i126 = { $tmp127 };
    int64_t $tmp129 = $tmp125.max.value;
    bool $tmp130 = $tmp125.inclusive.value;
    if ($tmp130) goto $l137; else goto $l138;
    $l137:;
    if ($tmp127 <= $tmp129) goto $l131; else goto $l133;
    $l138:;
    if ($tmp127 < $tmp129) goto $l131; else goto $l133;
    $l131:;
    {
        panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i126, charIndex103);
        chars102[i126.value] = chars102[$tmp139.value];
    }
    $l134:;
    int64_t $tmp141 = $tmp129 - i126.value;
    if ($tmp130) goto $l142; else goto $l143;
    $l142:;
    if ($tmp141 >= 1) goto $l140; else goto $l133;
    $l143:;
    if ($tmp141 > 1) goto $l140; else goto $l133;
    $l140:;
    i126.value += 1;
    goto $l131;
    $l133:;
    panda$core$String* $tmp146 = (panda$core$String*) malloc(48);
    $tmp146->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp146->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp146, chars102, size123);
    return $tmp146;
}
void panda$core$Panda$debugPrint$builtin_int64(int64_t p_i) {
    panda$core$String* $tmp149 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s148, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { p_i }))));
    panda$core$String* $tmp151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp149, &$s150);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp151));
}
void panda$core$Panda$init(panda$core$Panda* self) {
}

