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


static panda$core$String $s1;
panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Panda$cleanup} };

typedef void (*$fn11)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn24)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn179)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };

void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp2 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3, p_file);
    panda$core$String* $tmp6 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4, &$s5);
    panda$core$Int64$wrapper* $tmp7;
    $tmp7 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp7->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp7->refCount = 1;
    $tmp7->value = p_line;
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6, ((panda$core$Object*) $tmp7));
    panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp8, &$s9);
    (($fn11) $tmp2->$class->vtable[19])($tmp2, $tmp10);
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp12 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s13, p_file);
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp14, &$s15);
    panda$core$Int64$wrapper* $tmp17;
    $tmp17 = (panda$core$Int64$wrapper*) pandaZAlloc(24);
    $tmp17->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp17->refCount = 1;
    $tmp17->value = p_line;
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp16, ((panda$core$Object*) $tmp17));
    panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp18, &$s19);
    panda$core$String* $tmp21 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp20, p_msg);
    panda$core$String* $tmp23 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s22);
    (($fn24) $tmp12->$class->vtable[19])($tmp12, $tmp23);
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp26;
    panda$core$Char32 $tmp29;
    panda$core$Char8 $tmp33;
    panda$core$Char32 $tmp37;
    panda$core$Char32 $tmp40;
    panda$core$Char8 $tmp44;
    panda$core$Char32 $tmp49;
    panda$core$Char32 $tmp52;
    panda$core$Char8 $tmp56;
    panda$core$Char32$init$panda$core$Int32(&$tmp26, ((panda$core$Int32) { 48 }));
    panda$core$Bit $tmp27 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp26);
    bool $tmp25 = $tmp27.value;
    if (!$tmp25) goto $l28;
    panda$core$Char32$init$panda$core$Int32(&$tmp29, ((panda$core$Int32) { 57 }));
    panda$core$Bit $tmp30 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp29);
    $tmp25 = $tmp30.value;
    $l28:;
    panda$core$Bit $tmp31 = { $tmp25 };
    if ($tmp31.value) {
    {
        panda$core$UInt64 $tmp32 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp33, ((panda$core$UInt8) { 48 }));
        panda$core$UInt64 $tmp34 = panda$core$Char8$convert$R$panda$core$UInt64($tmp33);
        panda$core$UInt64 $tmp35 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp32, $tmp34);
        return ((panda$core$UInt64$nullable) { $tmp35, true });
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp37, ((panda$core$Int32) { 65 }));
    panda$core$Bit $tmp38 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp37);
    bool $tmp36 = $tmp38.value;
    if (!$tmp36) goto $l39;
    panda$core$Char32$init$panda$core$Int32(&$tmp40, ((panda$core$Int32) { 90 }));
    panda$core$Bit $tmp41 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp40);
    $tmp36 = $tmp41.value;
    $l39:;
    panda$core$Bit $tmp42 = { $tmp36 };
    if ($tmp42.value) {
    {
        panda$core$UInt64 $tmp43 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp44, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp45 = panda$core$Char8$convert$R$panda$core$UInt64($tmp44);
        panda$core$UInt64 $tmp46 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp43, $tmp45);
        panda$core$UInt64 $tmp47 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp46, ((panda$core$UInt64) { 10 }));
        return ((panda$core$UInt64$nullable) { $tmp47, true });
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp49, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp50 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp49);
    bool $tmp48 = $tmp50.value;
    if (!$tmp48) goto $l51;
    panda$core$Char32$init$panda$core$Int32(&$tmp52, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp53 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp52);
    $tmp48 = $tmp53.value;
    $l51:;
    panda$core$Bit $tmp54 = { $tmp48 };
    if ($tmp54.value) {
    {
        panda$core$UInt64 $tmp55 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp56, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp57 = panda$core$Char8$convert$R$panda$core$UInt64($tmp56);
        panda$core$UInt64 $tmp58 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp55, $tmp57);
        panda$core$UInt64 $tmp59 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp58, ((panda$core$UInt64) { 10 }));
        return ((panda$core$UInt64$nullable) { $tmp59, true });
    }
    }
    return ((panda$core$UInt64$nullable) { .nonnull = false });
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64 result62;
    panda$core$UInt64 radix63;
    panda$core$String$Index index65;
    panda$core$UInt64$nullable value71;
    panda$core$Bit $tmp61 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s60);
    if ($tmp61.value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    result62 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp64 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix63 = $tmp64;
    panda$core$String$Index $tmp66 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index65 = $tmp66;
    $l67:;
    panda$core$String$Index $tmp69 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp70 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index65, $tmp69);
    if (!$tmp70.value) goto $l68;
    {
        panda$core$Char32 $tmp72 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index65);
        panda$core$UInt64$nullable $tmp73 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp72);
        value71 = $tmp73;
        bool $tmp74 = ((panda$core$Bit) { !value71.nonnull }).value;
        if ($tmp74) goto $l75;
        panda$core$Bit $tmp76 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value71.value), radix63);
        $tmp74 = $tmp76.value;
        $l75:;
        panda$core$Bit $tmp77 = { $tmp74 };
        if ($tmp77.value) {
        {
            return ((panda$core$UInt64$nullable) { .nonnull = false });
        }
        }
        panda$core$UInt64 $tmp78 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result62, radix63);
        panda$core$UInt64 $tmp79 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp78, ((panda$core$UInt64) value71.value));
        result62 = $tmp79;
        panda$core$String$Index $tmp80 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index65);
        index65 = $tmp80;
    }
    goto $l67;
    $l68:;
    return ((panda$core$UInt64$nullable) { result62, true });
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index83;
    panda$core$Char32 $match$94_986;
    panda$core$Char32 $tmp90;
    panda$core$Char32 $tmp93;
    panda$core$Char32 $tmp97;
    panda$core$Int64 width101;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp102;
    panda$core$Char32 fill106;
    panda$core$Char32 $tmp109;
    panda$core$Char32 $match$107_9112;
    panda$core$Char32 $tmp114;
    panda$core$Char32 $tmp117;
    panda$core$Char32 $tmp120;
    panda$core$Int64 $tmp81 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp82 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp81, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp82.value);
    panda$core$String$Index $tmp84 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp85 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp84);
    index83 = $tmp85;
    {
        panda$core$Char32 $tmp87 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index83);
        $match$94_986 = $tmp87;
        panda$core$Char32$init$panda$core$Int32(&$tmp90, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp91 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$94_986, $tmp90);
        bool $tmp89 = $tmp91.value;
        if ($tmp89) goto $l92;
        panda$core$Char32$init$panda$core$Int32(&$tmp93, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp94 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$94_986, $tmp93);
        $tmp89 = $tmp94.value;
        $l92:;
        panda$core$Bit $tmp95 = { $tmp89 };
        bool $tmp88 = $tmp95.value;
        if ($tmp88) goto $l96;
        panda$core$Char32$init$panda$core$Int32(&$tmp97, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp98 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$94_986, $tmp97);
        $tmp88 = $tmp98.value;
        $l96:;
        panda$core$Bit $tmp99 = { $tmp88 };
        if ($tmp99.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp100 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index83 = $tmp100;
        }
        }
    }
    panda$core$String$Index $tmp103 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index83);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp102, ((panda$core$String$Index$nullable) { $tmp103, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp104 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp102);
    panda$core$Int64$nullable $tmp105 = panda$core$String$convert$R$panda$core$Int64$Q($tmp104);
    width101 = ((panda$core$Int64) $tmp105.value);
    memset(&fill106, 0, sizeof(fill106));
    panda$core$String$Index $tmp107 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp108 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index83, $tmp107);
    if ($tmp108.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp109, ((panda$core$Int32) { 32 }));
        fill106 = $tmp109;
    }
    }
    else {
    {
        panda$core$String$Index $tmp110 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp111 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp110);
        fill106 = $tmp111;
    }
    }
    {
        panda$core$Char32 $tmp113 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index83);
        $match$107_9112 = $tmp113;
        panda$core$Char32$init$panda$core$Int32(&$tmp114, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp115 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$107_9112, $tmp114);
        if ($tmp115.value) {
        {
            panda$core$String* $tmp116 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width101, fill106);
            return $tmp116;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp117, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp118 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$107_9112, $tmp117);
        if ($tmp118.value) {
        {
            panda$core$String* $tmp119 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width101, fill106);
            return $tmp119;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp120, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp121 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$107_9112, $tmp120);
        if ($tmp121.value) {
        {
            panda$core$String* $tmp122 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width101, fill106);
            return $tmp122;
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
    panda$core$String$Index index123;
    panda$core$UInt64 base125;
    panda$collections$ListView* digits126;
    panda$core$Char32 $match$130_13131;
    panda$core$Char32 $tmp134;
    panda$core$Char32 $tmp137;
    panda$core$Char32 $tmp141;
    panda$core$Char32 $tmp144;
    panda$core$Char32 $tmp148;
    panda$core$Char32 $tmp151;
    panda$core$Char32 $tmp154;
    panda$core$Char32 $tmp156;
    panda$core$UInt64 value160;
    panda$core$Int64 max169;
    panda$core$Char8* chars170;
    panda$core$Int64 charIndex171;
    panda$core$Char8 $tmp188;
    panda$core$Int64 size191;
    panda$core$Range$LTpanda$core$Int64$GT $tmp193;
    panda$core$String* tmp1214;
    panda$core$String$Index $tmp124 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
    index123 = $tmp124;
    base125 = ((panda$core$UInt64) { 10 });
    panda$collections$ListView* $tmp128 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s127);
    digits126 = $tmp128;
    panda$core$String$Index $tmp129 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
    panda$core$Bit $tmp130 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index123, $tmp129);
    if ($tmp130.value) {
    {
        {
            panda$core$Char32 $tmp132 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index123);
            $match$130_13131 = $tmp132;
            panda$core$Char32$init$panda$core$Int32(&$tmp134, ((panda$core$Int32) { 98 }));
            panda$core$Bit $tmp135 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp134);
            bool $tmp133 = $tmp135.value;
            if ($tmp133) goto $l136;
            panda$core$Char32$init$panda$core$Int32(&$tmp137, ((panda$core$Int32) { 66 }));
            panda$core$Bit $tmp138 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp137);
            $tmp133 = $tmp138.value;
            $l136:;
            panda$core$Bit $tmp139 = { $tmp133 };
            if ($tmp139.value) {
            {
                base125 = ((panda$core$UInt64) { 2 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp141, ((panda$core$Int32) { 111 }));
            panda$core$Bit $tmp142 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp141);
            bool $tmp140 = $tmp142.value;
            if ($tmp140) goto $l143;
            panda$core$Char32$init$panda$core$Int32(&$tmp144, ((panda$core$Int32) { 79 }));
            panda$core$Bit $tmp145 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp144);
            $tmp140 = $tmp145.value;
            $l143:;
            panda$core$Bit $tmp146 = { $tmp140 };
            if ($tmp146.value) {
            {
                base125 = ((panda$core$UInt64) { 8 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp148, ((panda$core$Int32) { 100 }));
            panda$core$Bit $tmp149 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp148);
            bool $tmp147 = $tmp149.value;
            if ($tmp147) goto $l150;
            panda$core$Char32$init$panda$core$Int32(&$tmp151, ((panda$core$Int32) { 68 }));
            panda$core$Bit $tmp152 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp151);
            $tmp147 = $tmp152.value;
            $l150:;
            panda$core$Bit $tmp153 = { $tmp147 };
            if ($tmp153.value) {
            {
                base125 = ((panda$core$UInt64) { 10 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp154, ((panda$core$Int32) { 120 }));
            panda$core$Bit $tmp155 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp154);
            if ($tmp155.value) {
            {
                base125 = ((panda$core$UInt64) { 16 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp156, ((panda$core$Int32) { 88 }));
            panda$core$Bit $tmp157 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$130_13131, $tmp156);
            if ($tmp157.value) {
            {
                base125 = ((panda$core$UInt64) { 16 });
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits126));
                    panda$collections$ListView* $tmp159 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s158);
                    digits126 = $tmp159;
                }
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
    memset(&value160, 0, sizeof(value160));
    bool $tmp161 = p_sign.value;
    if (!$tmp161) goto $l162;
    panda$core$Bit $tmp163 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base125, ((panda$core$UInt64) { 10 }));
    $tmp161 = $tmp163.value;
    $l162:;
    panda$core$Bit $tmp164 = { $tmp161 };
    if ($tmp164.value) {
    {
        panda$core$Int64 $tmp165 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
        panda$core$Int64 $tmp166 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp165);
        panda$core$UInt64 $tmp167 = panda$core$Int64$convert$R$panda$core$UInt64($tmp166);
        panda$core$UInt64 $tmp168 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp167, p_mask);
        value160 = $tmp168;
    }
    }
    else {
    {
        value160 = p_rawValue;
    }
    }
    max169 = ((panda$core$Int64) { 64 });
    chars170 = ((panda$core$Char8*) pandaZAlloc(max169.value * 1));
    panda$core$Int64 $tmp172 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max169, ((panda$core$Int64) { 1 }));
    charIndex171 = $tmp172;
    $l173:;
    {
        panda$core$UInt64 $tmp175 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value160, base125);
        panda$core$Int64 $tmp176 = panda$core$UInt64$convert$R$panda$core$Int64($tmp175);
        ITable* $tmp177 = digits126->$class->itable;
        while ($tmp177->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp177 = $tmp177->next;
        }
        $fn179 $tmp178 = $tmp177->methods[0];
        panda$core$Object* $tmp180 = $tmp178(digits126, $tmp176);
        chars170[charIndex171.value] = ((panda$core$Char8$wrapper*) $tmp180)->value;
        panda$core$UInt64 $tmp181 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value160, base125);
        value160 = $tmp181;
        panda$core$Int64 $tmp182 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex171, ((panda$core$Int64) { 1 }));
        charIndex171 = $tmp182;
    }
    panda$core$Bit $tmp183 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value160, ((panda$core$UInt64) { 0 }));
    if ($tmp183.value) goto $l173;
    $l174:;
    bool $tmp184 = p_sign.value;
    if (!$tmp184) goto $l185;
    panda$core$Bit $tmp186 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base125, ((panda$core$UInt64) { 10 }));
    $tmp184 = $tmp186.value;
    $l185:;
    panda$core$Bit $tmp187 = { $tmp184 };
    if ($tmp187.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp188, ((panda$core$UInt8) { 45 }));
        chars170[charIndex171.value] = $tmp188;
        panda$core$Int64 $tmp189 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex171, ((panda$core$Int64) { 1 }));
        charIndex171 = $tmp189;
    }
    }
    panda$core$Int64 $tmp190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex171, ((panda$core$Int64) { 1 }));
    charIndex171 = $tmp190;
    panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max169, charIndex171);
    size191 = $tmp192;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp193, ((panda$core$Int64) { 0 }), size191, ((panda$core$Bit) { false }));
    int64_t $tmp195 = $tmp193.min.value;
    panda$core$Int64 i194 = { $tmp195 };
    int64_t $tmp197 = $tmp193.max.value;
    bool $tmp198 = $tmp193.inclusive.value;
    if ($tmp198) goto $l205; else goto $l206;
    $l205:;
    if ($tmp195 <= $tmp197) goto $l199; else goto $l201;
    $l206:;
    if ($tmp195 < $tmp197) goto $l199; else goto $l201;
    $l199:;
    {
        panda$core$Int64 $tmp207 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i194, charIndex171);
        chars170[i194.value] = chars170[$tmp207.value];
    }
    $l202:;
    int64_t $tmp209 = $tmp197 - i194.value;
    if ($tmp198) goto $l210; else goto $l211;
    $l210:;
    if ((uint64_t) $tmp209 >= 1) goto $l208; else goto $l201;
    $l211:;
    if ((uint64_t) $tmp209 > 1) goto $l208; else goto $l201;
    $l208:;
    i194.value += 1;
    goto $l199;
    $l201:;
    {
        panda$core$String* $tmp215 = (panda$core$String*) pandaZAlloc(48);
        $tmp215->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp215->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp215, chars170, size191);
        tmp1214 = $tmp215;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits126));
        return tmp1214;
    }
}
void panda$core$Panda$init(panda$core$Panda* self) {
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
}

