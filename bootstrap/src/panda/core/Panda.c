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

typedef void (*$fn10)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn23)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn178)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x44\x65\x62\x75\x67\x3a\x20", 7, 180468745123278, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp1 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp3 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2, p_file);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, &$s4);
    panda$core$Int64$wrapper* $tmp6;
    $tmp6 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp6->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp6->refCount = 1;
    $tmp6->value = p_line;
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5, ((panda$core$Object*) $tmp6));
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s8);
    (($fn10) $tmp1->$class->vtable[19])($tmp1, $tmp9);
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp11 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s12, p_file);
    panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s14);
    panda$core$Int64$wrapper* $tmp16;
    $tmp16 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp16->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp16->refCount = 1;
    $tmp16->value = p_line;
    panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp15, ((panda$core$Object*) $tmp16));
    panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp17, &$s18);
    panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp19, p_msg);
    panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, &$s21);
    (($fn23) $tmp11->$class->vtable[19])($tmp11, $tmp22);
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp25;
    panda$core$Char32 $tmp28;
    panda$core$Char8 $tmp32;
    panda$core$Char32 $tmp36;
    panda$core$Char32 $tmp39;
    panda$core$Char8 $tmp43;
    panda$core$Char32 $tmp48;
    panda$core$Char32 $tmp51;
    panda$core$Char8 $tmp55;
    panda$core$Char32$init$panda$core$Int32(&$tmp25, ((panda$core$Int32) { 48 }));
    panda$core$Bit $tmp26 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp25);
    bool $tmp24 = $tmp26.value;
    if (!$tmp24) goto $l27;
    panda$core$Char32$init$panda$core$Int32(&$tmp28, ((panda$core$Int32) { 57 }));
    panda$core$Bit $tmp29 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp28);
    $tmp24 = $tmp29.value;
    $l27:;
    panda$core$Bit $tmp30 = { $tmp24 };
    if ($tmp30.value) {
    {
        panda$core$UInt64 $tmp31 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp32, ((panda$core$UInt8) { 48 }));
        panda$core$UInt64 $tmp33 = panda$core$Char8$convert$R$panda$core$UInt64($tmp32);
        panda$core$UInt64 $tmp34 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp31, $tmp33);
        return ((panda$core$UInt64$nullable) { $tmp34, true });
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp36, ((panda$core$Int32) { 65 }));
    panda$core$Bit $tmp37 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp36);
    bool $tmp35 = $tmp37.value;
    if (!$tmp35) goto $l38;
    panda$core$Char32$init$panda$core$Int32(&$tmp39, ((panda$core$Int32) { 90 }));
    panda$core$Bit $tmp40 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp39);
    $tmp35 = $tmp40.value;
    $l38:;
    panda$core$Bit $tmp41 = { $tmp35 };
    if ($tmp41.value) {
    {
        panda$core$UInt64 $tmp42 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp43, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp44 = panda$core$Char8$convert$R$panda$core$UInt64($tmp43);
        panda$core$UInt64 $tmp45 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp42, $tmp44);
        panda$core$UInt64 $tmp46 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp45, ((panda$core$UInt64) { 10 }));
        return ((panda$core$UInt64$nullable) { $tmp46, true });
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp48, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp49 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp48);
    bool $tmp47 = $tmp49.value;
    if (!$tmp47) goto $l50;
    panda$core$Char32$init$panda$core$Int32(&$tmp51, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp52 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp51);
    $tmp47 = $tmp52.value;
    $l50:;
    panda$core$Bit $tmp53 = { $tmp47 };
    if ($tmp53.value) {
    {
        panda$core$UInt64 $tmp54 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp55, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp56 = panda$core$Char8$convert$R$panda$core$UInt64($tmp55);
        panda$core$UInt64 $tmp57 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp54, $tmp56);
        panda$core$UInt64 $tmp58 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp57, ((panda$core$UInt64) { 10 }));
        return ((panda$core$UInt64$nullable) { $tmp58, true });
    }
    }
    return ((panda$core$UInt64$nullable) { .nonnull = false });
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64 result61;
    panda$core$UInt64 radix62;
    panda$core$String$Index index64;
    panda$core$UInt64$nullable value70;
    panda$core$Bit $tmp60 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s59);
    if ($tmp60.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result61 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp63 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix62 = $tmp63;
    panda$core$String$Index $tmp65 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index64 = $tmp65;
    $l66:;
    panda$core$String$Index $tmp68 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp69 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index64, $tmp68);
    if (!$tmp69.value) goto $l67;
    {
        panda$core$Char32 $tmp71 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index64);
        panda$core$UInt64$nullable $tmp72 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp71);
        value70 = $tmp72;
        bool $tmp73 = ((panda$core$Bit) { !value70.nonnull }).value;
        if ($tmp73) goto $l74;
        panda$core$Bit $tmp75 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value70.value), radix62);
        $tmp73 = $tmp75.value;
        $l74:;
        panda$core$Bit $tmp76 = { $tmp73 };
        if ($tmp76.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp77 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result61, radix62);
        panda$core$UInt64 $tmp78 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp77, ((panda$core$UInt64) value70.value));
        result61 = $tmp78;
        panda$core$String$Index $tmp79 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index64);
        index64 = $tmp79;
    }
    goto $l66;
    $l67:;
    return ((panda$core$UInt64$nullable) { result61, true });
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index82;
    panda$core$Char32 $match$82_985;
    panda$core$Char32 $tmp89;
    panda$core$Char32 $tmp92;
    panda$core$Char32 $tmp96;
    panda$core$Int64 width100;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp101;
    panda$core$Char32 fill105;
    panda$core$Char32 $tmp108;
    panda$core$Char32 $match$95_9111;
    panda$core$Char32 $tmp113;
    panda$core$Char32 $tmp116;
    panda$core$Char32 $tmp119;
    panda$core$Int64 $tmp80 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp81 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp80, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp81.value);
    panda$core$String$Index $tmp83 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp84 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp83);
    index82 = $tmp84;
    {
        panda$core$Char32 $tmp86 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index82);
        $match$82_985 = $tmp86;
        panda$core$Char32$init$panda$core$Int32(&$tmp89, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp90 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_985, $tmp89);
        bool $tmp88 = $tmp90.value;
        if ($tmp88) goto $l91;
        panda$core$Char32$init$panda$core$Int32(&$tmp92, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp93 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_985, $tmp92);
        $tmp88 = $tmp93.value;
        $l91:;
        panda$core$Bit $tmp94 = { $tmp88 };
        bool $tmp87 = $tmp94.value;
        if ($tmp87) goto $l95;
        panda$core$Char32$init$panda$core$Int32(&$tmp96, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp97 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$82_985, $tmp96);
        $tmp87 = $tmp97.value;
        $l95:;
        panda$core$Bit $tmp98 = { $tmp87 };
        if ($tmp98.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp99 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index82 = $tmp99;
        }
        }
    }
    panda$core$String$Index $tmp102 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index82);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp101, ((panda$core$String$Index$nullable) { $tmp102, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp103 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp101);
    panda$core$Int64$nullable $tmp104 = panda$core$String$convert$R$panda$core$Int64$Q($tmp103);
    width100 = ((panda$core$Int64) $tmp104.value);
    panda$core$String$Index $tmp106 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp107 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index82, $tmp106);
    if ($tmp107.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp108, ((panda$core$Int32) { 32 }));
        fill105 = $tmp108;
    }
    }
    else {
    {
        panda$core$String$Index $tmp109 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp110 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp109);
        fill105 = $tmp110;
    }
    }
    {
        panda$core$Char32 $tmp112 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index82);
        $match$95_9111 = $tmp112;
        panda$core$Char32$init$panda$core$Int32(&$tmp113, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp114 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$95_9111, $tmp113);
        if ($tmp114.value) {
        {
            panda$core$String* $tmp115 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width100, fill105);
            return $tmp115;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp116, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp117 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$95_9111, $tmp116);
        if ($tmp117.value) {
        {
            panda$core$String* $tmp118 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width100, fill105);
            return $tmp118;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp119, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp120 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$95_9111, $tmp119);
        if ($tmp120.value) {
        {
            panda$core$String* $tmp121 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width100, fill105);
            return $tmp121;
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
    panda$core$String$Index index122;
    panda$core$UInt64 base124;
    panda$collections$ListView* digits125;
    panda$core$Char32 $match$118_13130;
    panda$core$Char32 $tmp133;
    panda$core$Char32 $tmp136;
    panda$core$Char32 $tmp140;
    panda$core$Char32 $tmp143;
    panda$core$Char32 $tmp147;
    panda$core$Char32 $tmp150;
    panda$core$Char32 $tmp153;
    panda$core$Char32 $tmp155;
    panda$core$UInt64 value159;
    panda$core$Int64 max168;
    panda$core$Char8* chars169;
    panda$core$Int64 charIndex170;
    panda$core$Char8 $tmp187;
    panda$core$Int64 size190;
    panda$core$Range$LTpanda$core$Int64$GT $tmp192;
    panda$core$String$Index $tmp123 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
    index122 = $tmp123;
    base124 = ((panda$core$UInt64) { 10 });
    panda$collections$ListView* $tmp127 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s126);
    digits125 = $tmp127;
    panda$core$String$Index $tmp128 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
    panda$core$Bit $tmp129 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index122, $tmp128);
    if ($tmp129.value) {
    {
        {
            panda$core$Char32 $tmp131 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index122);
            $match$118_13130 = $tmp131;
            panda$core$Char32$init$panda$core$Int32(&$tmp133, ((panda$core$Int32) { 98 }));
            panda$core$Bit $tmp134 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp133);
            bool $tmp132 = $tmp134.value;
            if ($tmp132) goto $l135;
            panda$core$Char32$init$panda$core$Int32(&$tmp136, ((panda$core$Int32) { 66 }));
            panda$core$Bit $tmp137 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp136);
            $tmp132 = $tmp137.value;
            $l135:;
            panda$core$Bit $tmp138 = { $tmp132 };
            if ($tmp138.value) {
            {
                base124 = ((panda$core$UInt64) { 2 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp140, ((panda$core$Int32) { 111 }));
            panda$core$Bit $tmp141 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp140);
            bool $tmp139 = $tmp141.value;
            if ($tmp139) goto $l142;
            panda$core$Char32$init$panda$core$Int32(&$tmp143, ((panda$core$Int32) { 79 }));
            panda$core$Bit $tmp144 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp143);
            $tmp139 = $tmp144.value;
            $l142:;
            panda$core$Bit $tmp145 = { $tmp139 };
            if ($tmp145.value) {
            {
                base124 = ((panda$core$UInt64) { 8 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp147, ((panda$core$Int32) { 100 }));
            panda$core$Bit $tmp148 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp147);
            bool $tmp146 = $tmp148.value;
            if ($tmp146) goto $l149;
            panda$core$Char32$init$panda$core$Int32(&$tmp150, ((panda$core$Int32) { 68 }));
            panda$core$Bit $tmp151 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp150);
            $tmp146 = $tmp151.value;
            $l149:;
            panda$core$Bit $tmp152 = { $tmp146 };
            if ($tmp152.value) {
            {
                base124 = ((panda$core$UInt64) { 10 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp153, ((panda$core$Int32) { 120 }));
            panda$core$Bit $tmp154 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp153);
            if ($tmp154.value) {
            {
                base124 = ((panda$core$UInt64) { 16 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp155, ((panda$core$Int32) { 88 }));
            panda$core$Bit $tmp156 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$118_13130, $tmp155);
            if ($tmp156.value) {
            {
                base124 = ((panda$core$UInt64) { 16 });
                panda$collections$ListView* $tmp158 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s157);
                digits125 = $tmp158;
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
    bool $tmp160 = p_sign.value;
    if (!$tmp160) goto $l161;
    panda$core$Bit $tmp162 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base124, ((panda$core$UInt64) { 10 }));
    $tmp160 = $tmp162.value;
    $l161:;
    panda$core$Bit $tmp163 = { $tmp160 };
    if ($tmp163.value) {
    {
        panda$core$Int64 $tmp164 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
        panda$core$Int64 $tmp165 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp164);
        panda$core$UInt64 $tmp166 = panda$core$Int64$convert$R$panda$core$UInt64($tmp165);
        panda$core$UInt64 $tmp167 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp166, p_mask);
        value159 = $tmp167;
    }
    }
    else {
    {
        value159 = p_rawValue;
    }
    }
    max168 = ((panda$core$Int64) { 64 });
    chars169 = ((panda$core$Char8*) malloc(max168.value * 1));
    panda$core$Int64 $tmp171 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max168, ((panda$core$Int64) { 1 }));
    charIndex170 = $tmp171;
    $l172:;
    {
        panda$core$UInt64 $tmp174 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value159, base124);
        panda$core$Int64 $tmp175 = panda$core$UInt64$convert$R$panda$core$Int64($tmp174);
        ITable* $tmp176 = digits125->$class->itable;
        while ($tmp176->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp176 = $tmp176->next;
        }
        $fn178 $tmp177 = $tmp176->methods[0];
        panda$core$Object* $tmp179 = $tmp177(digits125, $tmp175);
        chars169[charIndex170.value] = ((panda$core$Char8$wrapper*) $tmp179)->value;
        panda$core$UInt64 $tmp180 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value159, base124);
        value159 = $tmp180;
        panda$core$Int64 $tmp181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex170, ((panda$core$Int64) { 1 }));
        charIndex170 = $tmp181;
    }
    panda$core$Bit $tmp182 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value159, ((panda$core$UInt64) { 0 }));
    if ($tmp182.value) goto $l172;
    $l173:;
    bool $tmp183 = p_sign.value;
    if (!$tmp183) goto $l184;
    panda$core$Bit $tmp185 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base124, ((panda$core$UInt64) { 10 }));
    $tmp183 = $tmp185.value;
    $l184:;
    panda$core$Bit $tmp186 = { $tmp183 };
    if ($tmp186.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp187, ((panda$core$UInt8) { 45 }));
        chars169[charIndex170.value] = $tmp187;
        panda$core$Int64 $tmp188 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex170, ((panda$core$Int64) { 1 }));
        charIndex170 = $tmp188;
    }
    }
    panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex170, ((panda$core$Int64) { 1 }));
    charIndex170 = $tmp189;
    panda$core$Int64 $tmp191 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max168, charIndex170);
    size190 = $tmp191;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp192, ((panda$core$Int64) { 0 }), size190, ((panda$core$Bit) { false }));
    int64_t $tmp194 = $tmp192.min.value;
    panda$core$Int64 i193 = { $tmp194 };
    int64_t $tmp196 = $tmp192.max.value;
    bool $tmp197 = $tmp192.inclusive.value;
    if ($tmp197) goto $l204; else goto $l205;
    $l204:;
    if ($tmp194 <= $tmp196) goto $l198; else goto $l200;
    $l205:;
    if ($tmp194 < $tmp196) goto $l198; else goto $l200;
    $l198:;
    {
        panda$core$Int64 $tmp206 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i193, charIndex170);
        chars169[i193.value] = chars169[$tmp206.value];
    }
    $l201:;
    int64_t $tmp208 = $tmp196 - i193.value;
    if ($tmp197) goto $l209; else goto $l210;
    $l209:;
    if ($tmp208 >= 1) goto $l207; else goto $l200;
    $l210:;
    if ($tmp208 > 1) goto $l207; else goto $l200;
    $l207:;
    i193.value += 1;
    goto $l198;
    $l200:;
    panda$core$String* $tmp213 = (panda$core$String*) malloc(48);
    $tmp213->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp213->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp213, chars169, size190);
    return $tmp213;
}
void panda$core$Panda$debugPrint$builtin_int64(int64_t p_i) {
    panda$core$Int64$wrapper* $tmp216;
    $tmp216 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp216->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp216->refCount = 1;
    $tmp216->value = ((panda$core$Int64) { p_i });
    panda$core$String* $tmp217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s215, ((panda$core$Object*) $tmp216));
    panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp217, &$s218);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp219));
}
void panda$core$Panda$init(panda$core$Panda* self) {
}

