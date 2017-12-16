#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char32.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/collections/ListView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"


panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef void (*$fn9)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn21)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn176)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x44\x65\x62\x75\x67\x3a\x20", 7, 180468745123278, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp23;
    panda$core$Char32 $tmp26;
    panda$core$Char8 $tmp30;
    panda$core$Char32 $tmp34;
    panda$core$Char32 $tmp37;
    panda$core$Char8 $tmp41;
    panda$core$Char32 $tmp46;
    panda$core$Char32 $tmp49;
    panda$core$Char8 $tmp53;
    panda$core$Char32$init$panda$core$Int32(&$tmp23, ((panda$core$Int32) { 48 }));
    panda$core$Bit $tmp24 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp23);
    bool $tmp22 = $tmp24.value;
    if (!$tmp22) goto $l25;
    panda$core$Char32$init$panda$core$Int32(&$tmp26, ((panda$core$Int32) { 57 }));
    panda$core$Bit $tmp27 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp26);
    $tmp22 = $tmp27.value;
    $l25:;
    panda$core$Bit $tmp28 = { $tmp22 };
    if ($tmp28.value) {
    {
        panda$core$UInt64 $tmp29 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp30, ((panda$core$UInt8) { 48 }));
        panda$core$UInt64 $tmp31 = panda$core$Char8$convert$R$panda$core$UInt64($tmp30);
        panda$core$UInt64 $tmp32 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp29, $tmp31);
        return ((panda$core$UInt64$nullable) { $tmp32, true });
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp34, ((panda$core$Int32) { 65 }));
    panda$core$Bit $tmp35 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp34);
    bool $tmp33 = $tmp35.value;
    if (!$tmp33) goto $l36;
    panda$core$Char32$init$panda$core$Int32(&$tmp37, ((panda$core$Int32) { 90 }));
    panda$core$Bit $tmp38 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp37);
    $tmp33 = $tmp38.value;
    $l36:;
    panda$core$Bit $tmp39 = { $tmp33 };
    if ($tmp39.value) {
    {
        panda$core$UInt64 $tmp40 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp41, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp42 = panda$core$Char8$convert$R$panda$core$UInt64($tmp41);
        panda$core$UInt64 $tmp43 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp40, $tmp42);
        panda$core$UInt64 $tmp44 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp43, ((panda$core$UInt64) { 10 }));
        return ((panda$core$UInt64$nullable) { $tmp44, true });
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp46, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp47 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp46);
    bool $tmp45 = $tmp47.value;
    if (!$tmp45) goto $l48;
    panda$core$Char32$init$panda$core$Int32(&$tmp49, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp50 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp49);
    $tmp45 = $tmp50.value;
    $l48:;
    panda$core$Bit $tmp51 = { $tmp45 };
    if ($tmp51.value) {
    {
        panda$core$UInt64 $tmp52 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp54 = panda$core$Char8$convert$R$panda$core$UInt64($tmp53);
        panda$core$UInt64 $tmp55 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp52, $tmp54);
        panda$core$UInt64 $tmp56 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp55, ((panda$core$UInt64) { 10 }));
        return ((panda$core$UInt64$nullable) { $tmp56, true });
    }
    }
    return ((panda$core$UInt64$nullable) { .nonnull = false });
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64 result59;
    panda$core$UInt64 radix60;
    panda$core$String$Index index62;
    panda$core$UInt64$nullable value68;
    panda$core$Bit $tmp58 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s57);
    if ($tmp58.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result59 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp61 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix60 = $tmp61;
    panda$core$String$Index $tmp63 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index62 = $tmp63;
    $l64:;
    panda$core$String$Index $tmp66 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp67 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index62, $tmp66);
    if (!$tmp67.value) goto $l65;
    {
        panda$core$Char32 $tmp69 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index62);
        panda$core$UInt64$nullable $tmp70 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp69);
        value68 = $tmp70;
        bool $tmp71 = ((panda$core$Bit) { !value68.nonnull }).value;
        if ($tmp71) goto $l72;
        panda$core$Bit $tmp73 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value68.value), radix60);
        $tmp71 = $tmp73.value;
        $l72:;
        panda$core$Bit $tmp74 = { $tmp71 };
        if ($tmp74.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp75 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result59, radix60);
        panda$core$UInt64 $tmp76 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp75, ((panda$core$UInt64) value68.value));
        result59 = $tmp76;
        panda$core$String$Index $tmp77 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index62);
        index62 = $tmp77;
    }
    goto $l64;
    $l65:;
    return ((panda$core$UInt64$nullable) { result59, true });
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index80;
    panda$core$Char32 $match$82_983;
    panda$core$Char32 $tmp87;
    panda$core$Char32 $tmp90;
    panda$core$Char32 $tmp94;
    panda$core$Int64 width98;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp99;
    panda$core$Char32 fill103;
    panda$core$Char32 $tmp106;
    panda$core$Char32 $match$95_9109;
    panda$core$Char32 $tmp111;
    panda$core$Char32 $tmp114;
    panda$core$Char32 $tmp117;
    panda$core$Int64 $tmp78 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp79 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp78, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp79.value);
    panda$core$String$Index $tmp81 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp82 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp81);
    index80 = $tmp82;
    {
        panda$core$Char32 $tmp84 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index80);
        $match$82_983 = $tmp84;
        panda$core$Char32$init$panda$core$Int32(&$tmp87, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp88 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_983, $tmp87);
        bool $tmp86 = $tmp88.value;
        if ($tmp86) goto $l89;
        panda$core$Char32$init$panda$core$Int32(&$tmp90, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp91 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_983, $tmp90);
        $tmp86 = $tmp91.value;
        $l89:;
        panda$core$Bit $tmp92 = { $tmp86 };
        bool $tmp85 = $tmp92.value;
        if ($tmp85) goto $l93;
        panda$core$Char32$init$panda$core$Int32(&$tmp94, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp95 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_983, $tmp94);
        $tmp85 = $tmp95.value;
        $l93:;
        panda$core$Bit $tmp96 = { $tmp85 };
        if ($tmp96.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp97 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index80 = $tmp97;
        }
        }
    }
    panda$core$String$Index $tmp100 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index80);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp99, ((panda$core$String$Index$nullable) { $tmp100, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp101 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp99);
    panda$core$Int64$nullable $tmp102 = panda$core$String$convert$R$panda$core$Int64$Q($tmp101);
    width98 = ((panda$core$Int64) $tmp102.value);
    panda$core$String$Index $tmp104 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp105 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index80, $tmp104);
    if ($tmp105.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp106, ((panda$core$Int32) { 32 }));
        fill103 = $tmp106;
    }
    }
    else {
    {
        panda$core$String$Index $tmp107 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp108 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp107);
        fill103 = $tmp108;
    }
    }
    {
        panda$core$Char32 $tmp110 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index80);
        $match$95_9109 = $tmp110;
        panda$core$Char32$init$panda$core$Int32(&$tmp111, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp112 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$95_9109, $tmp111);
        if ($tmp112.value) {
        {
            panda$core$String* $tmp113 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width98, fill103);
            return $tmp113;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp114, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp115 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$95_9109, $tmp114);
        if ($tmp115.value) {
        {
            panda$core$String* $tmp116 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width98, fill103);
            return $tmp116;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp117, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp118 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$95_9109, $tmp117);
        if ($tmp118.value) {
        {
            panda$core$String* $tmp119 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width98, fill103);
            return $tmp119;
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
    panda$core$String$Index index120;
    panda$core$UInt64 base122;
    panda$collections$ListView* digits123;
    panda$core$Char32 $match$118_13128;
    panda$core$Char32 $tmp131;
    panda$core$Char32 $tmp134;
    panda$core$Char32 $tmp138;
    panda$core$Char32 $tmp141;
    panda$core$Char32 $tmp145;
    panda$core$Char32 $tmp148;
    panda$core$Char32 $tmp151;
    panda$core$Char32 $tmp153;
    panda$core$UInt64 value157;
    panda$core$Int64 max166;
    panda$core$Char8* chars167;
    panda$core$Int64 charIndex168;
    panda$core$Char8 $tmp185;
    panda$core$Int64 size188;
    panda$core$Range$LTpanda$core$Int64$GT $tmp190;
    panda$core$String$Index $tmp121 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
    index120 = $tmp121;
    base122 = ((panda$core$UInt64) { 10 });
    panda$collections$ListView* $tmp125 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s124);
    digits123 = $tmp125;
    panda$core$String$Index $tmp126 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
    panda$core$Bit $tmp127 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index120, $tmp126);
    if ($tmp127.value) {
    {
        {
            panda$core$Char32 $tmp129 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index120);
            $match$118_13128 = $tmp129;
            panda$core$Char32$init$panda$core$Int32(&$tmp131, ((panda$core$Int32) { 98 }));
            panda$core$Bit $tmp132 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp131);
            bool $tmp130 = $tmp132.value;
            if ($tmp130) goto $l133;
            panda$core$Char32$init$panda$core$Int32(&$tmp134, ((panda$core$Int32) { 66 }));
            panda$core$Bit $tmp135 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp134);
            $tmp130 = $tmp135.value;
            $l133:;
            panda$core$Bit $tmp136 = { $tmp130 };
            if ($tmp136.value) {
            {
                base122 = ((panda$core$UInt64) { 2 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp138, ((panda$core$Int32) { 111 }));
            panda$core$Bit $tmp139 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp138);
            bool $tmp137 = $tmp139.value;
            if ($tmp137) goto $l140;
            panda$core$Char32$init$panda$core$Int32(&$tmp141, ((panda$core$Int32) { 79 }));
            panda$core$Bit $tmp142 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp141);
            $tmp137 = $tmp142.value;
            $l140:;
            panda$core$Bit $tmp143 = { $tmp137 };
            if ($tmp143.value) {
            {
                base122 = ((panda$core$UInt64) { 8 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp145, ((panda$core$Int32) { 100 }));
            panda$core$Bit $tmp146 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp145);
            bool $tmp144 = $tmp146.value;
            if ($tmp144) goto $l147;
            panda$core$Char32$init$panda$core$Int32(&$tmp148, ((panda$core$Int32) { 68 }));
            panda$core$Bit $tmp149 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp148);
            $tmp144 = $tmp149.value;
            $l147:;
            panda$core$Bit $tmp150 = { $tmp144 };
            if ($tmp150.value) {
            {
                base122 = ((panda$core$UInt64) { 10 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp151, ((panda$core$Int32) { 120 }));
            panda$core$Bit $tmp152 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp151);
            if ($tmp152.value) {
            {
                base122 = ((panda$core$UInt64) { 16 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp153, ((panda$core$Int32) { 88 }));
            panda$core$Bit $tmp154 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13128, $tmp153);
            if ($tmp154.value) {
            {
                base122 = ((panda$core$UInt64) { 16 });
                panda$collections$ListView* $tmp156 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s155);
                digits123 = $tmp156;
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
    bool $tmp158 = p_sign.value;
    if (!$tmp158) goto $l159;
    panda$core$Bit $tmp160 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base122, ((panda$core$UInt64) { 10 }));
    $tmp158 = $tmp160.value;
    $l159:;
    panda$core$Bit $tmp161 = { $tmp158 };
    if ($tmp161.value) {
    {
        panda$core$Int64 $tmp162 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
        panda$core$Int64 $tmp163 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp162);
        panda$core$UInt64 $tmp164 = panda$core$Int64$convert$R$panda$core$UInt64($tmp163);
        panda$core$UInt64 $tmp165 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp164, p_mask);
        value157 = $tmp165;
    }
    }
    else {
    {
        value157 = p_rawValue;
    }
    }
    max166 = ((panda$core$Int64) { 64 });
    chars167 = ((panda$core$Char8*) malloc(max166.value * 1));
    panda$core$Int64 $tmp169 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max166, ((panda$core$Int64) { 1 }));
    charIndex168 = $tmp169;
    $l170:;
    {
        panda$core$UInt64 $tmp172 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value157, base122);
        panda$core$Int64 $tmp173 = panda$core$UInt64$convert$R$panda$core$Int64($tmp172);
        ITable* $tmp174 = digits123->$class->itable;
        while ($tmp174->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp174 = $tmp174->next;
        }
        $fn176 $tmp175 = $tmp174->methods[0];
        panda$core$Object* $tmp177 = $tmp175(digits123, $tmp173);
        chars167[charIndex168.value] = ((panda$core$Char8$wrapper*) $tmp177)->value;
        panda$core$UInt64 $tmp178 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value157, base122);
        value157 = $tmp178;
        panda$core$Int64 $tmp179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex168, ((panda$core$Int64) { 1 }));
        charIndex168 = $tmp179;
    }
    panda$core$Bit $tmp180 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value157, ((panda$core$UInt64) { 0 }));
    if ($tmp180.value) goto $l170;
    $l171:;
    bool $tmp181 = p_sign.value;
    if (!$tmp181) goto $l182;
    panda$core$Bit $tmp183 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base122, ((panda$core$UInt64) { 10 }));
    $tmp181 = $tmp183.value;
    $l182:;
    panda$core$Bit $tmp184 = { $tmp181 };
    if ($tmp184.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp185, ((panda$core$UInt8) { 45 }));
        chars167[charIndex168.value] = $tmp185;
        panda$core$Int64 $tmp186 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex168, ((panda$core$Int64) { 1 }));
        charIndex168 = $tmp186;
    }
    }
    panda$core$Int64 $tmp187 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex168, ((panda$core$Int64) { 1 }));
    charIndex168 = $tmp187;
    panda$core$Int64 $tmp189 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max166, charIndex168);
    size188 = $tmp189;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp190, ((panda$core$Int64) { 0 }), size188, ((panda$core$Bit) { false }));
    int64_t $tmp192 = $tmp190.min.value;
    panda$core$Int64 i191 = { $tmp192 };
    int64_t $tmp194 = $tmp190.max.value;
    bool $tmp195 = $tmp190.inclusive.value;
    if ($tmp195) goto $l202; else goto $l203;
    $l202:;
    if ($tmp192 <= $tmp194) goto $l196; else goto $l198;
    $l203:;
    if ($tmp192 < $tmp194) goto $l196; else goto $l198;
    $l196:;
    {
        panda$core$Int64 $tmp204 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i191, charIndex168);
        chars167[i191.value] = chars167[$tmp204.value];
    }
    $l199:;
    int64_t $tmp206 = $tmp194 - i191.value;
    if ($tmp195) goto $l207; else goto $l208;
    $l207:;
    if ($tmp206 >= 1) goto $l205; else goto $l198;
    $l208:;
    if ($tmp206 > 1) goto $l205; else goto $l198;
    $l205:;
    i191.value += 1;
    goto $l196;
    $l198:;
    panda$core$String* $tmp211 = (panda$core$String*) malloc(48);
    $tmp211->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp211->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp211, chars167, size188);
    return $tmp211;
}
void panda$core$Panda$debugPrint$builtin_int64(int64_t p_i) {
    panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s213, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { p_i }))));
    panda$core$String* $tmp216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp214, &$s215);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp216));
}
void panda$core$Panda$init(panda$core$Panda* self) {
}

