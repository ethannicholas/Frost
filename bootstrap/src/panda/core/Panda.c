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

typedef void (*$fn17)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn38)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn217)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };

void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp3 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp2 = $tmp3;
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s8, p_file);
    panda$core$String* $tmp7 = $tmp9;
    panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s10);
    panda$core$String* $tmp6 = $tmp11;
    panda$core$Int64$wrapper* $tmp13;
    $tmp13 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp13->value = p_line;
    panda$core$Object* $tmp12 = ((panda$core$Object*) $tmp13);
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6, $tmp12);
    panda$core$String* $tmp5 = $tmp14;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s15);
    panda$core$String* $tmp4 = $tmp16;
    (($fn17) $tmp2->$class->vtable[19])($tmp2, $tmp4);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object($tmp12);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$System$crash();
}
void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(panda$core$String* p_file, panda$core$Int64 p_line, panda$core$String* p_msg) {
    panda$io$OutputStream* $tmp19 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    panda$io$OutputStream* $tmp18 = $tmp19;
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s26, p_file);
    panda$core$String* $tmp25 = $tmp27;
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp25, &$s28);
    panda$core$String* $tmp24 = $tmp29;
    panda$core$Int64$wrapper* $tmp31;
    $tmp31 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp31->value = p_line;
    panda$core$Object* $tmp30 = ((panda$core$Object*) $tmp31);
    panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp24, $tmp30);
    panda$core$String* $tmp23 = $tmp32;
    panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s33);
    panda$core$String* $tmp22 = $tmp34;
    panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, p_msg);
    panda$core$String* $tmp21 = $tmp35;
    panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s36);
    panda$core$String* $tmp20 = $tmp37;
    (($fn38) $tmp18->$class->vtable[19])($tmp18, $tmp20);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
    panda$core$Panda$unref$panda$core$Object($tmp30);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    panda$core$System$crash();
}
panda$core$UInt64$nullable panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q(panda$core$Char32 p_c) {
    panda$core$Char32 $tmp40;
    panda$core$Char32 $tmp43;
    panda$core$Char8 $tmp48;
    panda$core$Char32 $tmp52;
    panda$core$Char32 $tmp55;
    panda$core$Char8 $tmp60;
    panda$core$Char32 $tmp65;
    panda$core$Char32 $tmp68;
    panda$core$Char8 $tmp73;
    panda$core$Char32$init$panda$core$Int32(&$tmp40, ((panda$core$Int32) { 48 }));
    panda$core$Bit $tmp41 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp40);
    bool $tmp39 = $tmp41.value;
    if (!$tmp39) goto $l42;
    panda$core$Char32$init$panda$core$Int32(&$tmp43, ((panda$core$Int32) { 57 }));
    panda$core$Bit $tmp44 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp43);
    $tmp39 = $tmp44.value;
    $l42:;
    panda$core$Bit $tmp45 = { $tmp39 };
    if ($tmp45.value) {
    {
        panda$core$UInt64 $tmp47 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp48, ((panda$core$UInt8) { 48 }));
        panda$core$UInt64 $tmp49 = panda$core$Char8$convert$R$panda$core$UInt64($tmp48);
        panda$core$UInt64 $tmp50 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp47, $tmp49);
        panda$core$UInt64$nullable $tmp46 = ((panda$core$UInt64$nullable) { $tmp50, true });
        return $tmp46;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp52, ((panda$core$Int32) { 65 }));
    panda$core$Bit $tmp53 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp52);
    bool $tmp51 = $tmp53.value;
    if (!$tmp51) goto $l54;
    panda$core$Char32$init$panda$core$Int32(&$tmp55, ((panda$core$Int32) { 90 }));
    panda$core$Bit $tmp56 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp55);
    $tmp51 = $tmp56.value;
    $l54:;
    panda$core$Bit $tmp57 = { $tmp51 };
    if ($tmp57.value) {
    {
        panda$core$UInt64 $tmp59 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp60, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp61 = panda$core$Char8$convert$R$panda$core$UInt64($tmp60);
        panda$core$UInt64 $tmp62 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp59, $tmp61);
        panda$core$UInt64 $tmp63 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp62, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64$nullable $tmp58 = ((panda$core$UInt64$nullable) { $tmp63, true });
        return $tmp58;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp65, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp66 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp65);
    bool $tmp64 = $tmp66.value;
    if (!$tmp64) goto $l67;
    panda$core$Char32$init$panda$core$Int32(&$tmp68, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp69 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp68);
    $tmp64 = $tmp69.value;
    $l67:;
    panda$core$Bit $tmp70 = { $tmp64 };
    if ($tmp70.value) {
    {
        panda$core$UInt64 $tmp72 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp73, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp74 = panda$core$Char8$convert$R$panda$core$UInt64($tmp73);
        panda$core$UInt64 $tmp75 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp72, $tmp74);
        panda$core$UInt64 $tmp76 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp75, ((panda$core$UInt64) { 10 }));
        panda$core$UInt64$nullable $tmp71 = ((panda$core$UInt64$nullable) { $tmp76, true });
        return $tmp71;
    }
    }
    panda$core$UInt64$nullable $tmp77 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $tmp77;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64 result81;
    panda$core$UInt64 radix82;
    panda$core$String$Index index84;
    panda$core$UInt64$nullable value91;
    panda$core$Bit $tmp79 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s78);
    if ($tmp79.value) {
    {
        panda$core$UInt64$nullable $tmp80 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $tmp80;
    }
    }
    result81 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp83 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix82 = $tmp83;
    panda$core$String$Index $tmp85 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index84 = $tmp85;
    $l86:;
    panda$core$String$Index $tmp89 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp90 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index84, $tmp89);
    bool $tmp88 = $tmp90.value;
    if (!$tmp88) goto $l87;
    {
        panda$core$Char32 $tmp92 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index84);
        panda$core$UInt64$nullable $tmp93 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp92);
        value91 = $tmp93;
        bool $tmp94 = ((panda$core$Bit) { !value91.nonnull }).value;
        if ($tmp94) goto $l95;
        panda$core$Bit $tmp96 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value91.value), radix82);
        $tmp94 = $tmp96.value;
        $l95:;
        panda$core$Bit $tmp97 = { $tmp94 };
        if ($tmp97.value) {
        {
            panda$core$UInt64$nullable $tmp98 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $tmp98;
        }
        }
        panda$core$UInt64 $tmp99 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result81, radix82);
        panda$core$UInt64 $tmp100 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp99, ((panda$core$UInt64) value91.value));
        result81 = $tmp100;
        panda$core$String$Index $tmp101 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index84);
        index84 = $tmp101;
    }
    goto $l86;
    $l87:;
    panda$core$UInt64$nullable $tmp102 = ((panda$core$UInt64$nullable) { result81, true });
    return $tmp102;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index105;
    panda$core$Char32 $match$104_9108;
    panda$core$Char32 $tmp112;
    panda$core$Char32 $tmp115;
    panda$core$Char32 $tmp119;
    panda$core$Int64 width123;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp125;
    panda$core$Char32 fill129;
    panda$core$Char32 $tmp132;
    panda$core$Char32 $match$117_9135;
    panda$core$Char32 $tmp137;
    panda$core$Char32 $tmp143;
    panda$core$Char32 $tmp149;
    panda$core$Int64 $tmp103 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp104 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp103, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp104.value);
    panda$core$String$Index $tmp106 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp107 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp106);
    index105 = $tmp107;
    {
        panda$core$Char32 $tmp109 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index105);
        $match$104_9108 = $tmp109;
        panda$core$Char32$init$panda$core$Int32(&$tmp112, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp113 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$104_9108, $tmp112);
        bool $tmp111 = $tmp113.value;
        if ($tmp111) goto $l114;
        panda$core$Char32$init$panda$core$Int32(&$tmp115, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp116 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$104_9108, $tmp115);
        $tmp111 = $tmp116.value;
        $l114:;
        panda$core$Bit $tmp117 = { $tmp111 };
        bool $tmp110 = $tmp117.value;
        if ($tmp110) goto $l118;
        panda$core$Char32$init$panda$core$Int32(&$tmp119, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp120 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$104_9108, $tmp119);
        $tmp110 = $tmp120.value;
        $l118:;
        panda$core$Bit $tmp121 = { $tmp110 };
        if ($tmp121.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp122 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index105 = $tmp122;
        }
        }
    }
    panda$core$String$Index $tmp126 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index105);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp125, ((panda$core$String$Index$nullable) { $tmp126, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp127 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp125);
    panda$core$String* $tmp124 = $tmp127;
    panda$core$Int64$nullable $tmp128 = panda$core$String$convert$R$panda$core$Int64$Q($tmp124);
    width123 = ((panda$core$Int64) $tmp128.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    memset(&fill129, 0, sizeof(fill129));
    panda$core$String$Index $tmp130 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp131 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index105, $tmp130);
    if ($tmp131.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp132, ((panda$core$Int32) { 32 }));
        fill129 = $tmp132;
    }
    }
    else {
    {
        panda$core$String$Index $tmp133 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp134 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp133);
        fill129 = $tmp134;
    }
    }
    {
        panda$core$Char32 $tmp136 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index105);
        $match$117_9135 = $tmp136;
        panda$core$Char32$init$panda$core$Int32(&$tmp137, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp138 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$117_9135, $tmp137);
        if ($tmp138.value) {
        {
            panda$core$String* $tmp142 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width123, fill129);
            panda$core$String* $tmp141 = $tmp142;
            panda$core$String* $tmp140 = $tmp141;
            panda$core$String* $tmp139 = $tmp140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
            return $tmp139;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp143, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp144 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$117_9135, $tmp143);
        if ($tmp144.value) {
        {
            panda$core$String* $tmp148 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width123, fill129);
            panda$core$String* $tmp147 = $tmp148;
            panda$core$String* $tmp146 = $tmp147;
            panda$core$String* $tmp145 = $tmp146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
            return $tmp145;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp149, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp150 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$117_9135, $tmp149);
        if ($tmp150.value) {
        {
            panda$core$String* $tmp154 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width123, fill129);
            panda$core$String* $tmp153 = $tmp154;
            panda$core$String* $tmp152 = $tmp153;
            panda$core$String* $tmp151 = $tmp152;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
            return $tmp151;
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
    panda$core$String$Index index155;
    panda$core$UInt64 base157;
    panda$collections$ListView* digits158;
    panda$core$Char32 $match$140_13165;
    panda$core$Char32 $tmp168;
    panda$core$Char32 $tmp171;
    panda$core$Char32 $tmp175;
    panda$core$Char32 $tmp178;
    panda$core$Char32 $tmp182;
    panda$core$Char32 $tmp185;
    panda$core$Char32 $tmp188;
    panda$core$Char32 $tmp190;
    panda$core$UInt64 value197;
    panda$core$Int64 max206;
    panda$core$Char8* chars207;
    panda$core$Int64 charIndex208;
    panda$core$Char8 $tmp227;
    panda$core$Int64 size230;
    panda$core$Range$LTpanda$core$Int64$GT $tmp232;
    panda$core$String* tmp1253;
    panda$core$String$Index $tmp156 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
    index155 = $tmp156;
    base157 = ((panda$core$UInt64) { 10 });
    panda$collections$ListView* $tmp162 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s161);
    panda$collections$ListView* $tmp160 = $tmp162;
    panda$collections$ListView* $tmp159 = $tmp160;
    digits158 = $tmp159;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
    panda$core$String$Index $tmp163 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
    panda$core$Bit $tmp164 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index155, $tmp163);
    if ($tmp164.value) {
    {
        {
            panda$core$Char32 $tmp166 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index155);
            $match$140_13165 = $tmp166;
            panda$core$Char32$init$panda$core$Int32(&$tmp168, ((panda$core$Int32) { 98 }));
            panda$core$Bit $tmp169 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp168);
            bool $tmp167 = $tmp169.value;
            if ($tmp167) goto $l170;
            panda$core$Char32$init$panda$core$Int32(&$tmp171, ((panda$core$Int32) { 66 }));
            panda$core$Bit $tmp172 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp171);
            $tmp167 = $tmp172.value;
            $l170:;
            panda$core$Bit $tmp173 = { $tmp167 };
            if ($tmp173.value) {
            {
                base157 = ((panda$core$UInt64) { 2 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp175, ((panda$core$Int32) { 111 }));
            panda$core$Bit $tmp176 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp175);
            bool $tmp174 = $tmp176.value;
            if ($tmp174) goto $l177;
            panda$core$Char32$init$panda$core$Int32(&$tmp178, ((panda$core$Int32) { 79 }));
            panda$core$Bit $tmp179 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp178);
            $tmp174 = $tmp179.value;
            $l177:;
            panda$core$Bit $tmp180 = { $tmp174 };
            if ($tmp180.value) {
            {
                base157 = ((panda$core$UInt64) { 8 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp182, ((panda$core$Int32) { 100 }));
            panda$core$Bit $tmp183 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp182);
            bool $tmp181 = $tmp183.value;
            if ($tmp181) goto $l184;
            panda$core$Char32$init$panda$core$Int32(&$tmp185, ((panda$core$Int32) { 68 }));
            panda$core$Bit $tmp186 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp185);
            $tmp181 = $tmp186.value;
            $l184:;
            panda$core$Bit $tmp187 = { $tmp181 };
            if ($tmp187.value) {
            {
                base157 = ((panda$core$UInt64) { 10 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp188, ((panda$core$Int32) { 120 }));
            panda$core$Bit $tmp189 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp188);
            if ($tmp189.value) {
            {
                base157 = ((panda$core$UInt64) { 16 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp190, ((panda$core$Int32) { 88 }));
            panda$core$Bit $tmp191 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13165, $tmp190);
            if ($tmp191.value) {
            {
                base157 = ((panda$core$UInt64) { 16 });
                {
                    panda$collections$ListView* $tmp192 = digits158;
                    panda$collections$ListView* $tmp196 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s195);
                    panda$collections$ListView* $tmp194 = $tmp196;
                    panda$collections$ListView* $tmp193 = $tmp194;
                    digits158 = $tmp193;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
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
    memset(&value197, 0, sizeof(value197));
    bool $tmp198 = p_sign.value;
    if (!$tmp198) goto $l199;
    panda$core$Bit $tmp200 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base157, ((panda$core$UInt64) { 10 }));
    $tmp198 = $tmp200.value;
    $l199:;
    panda$core$Bit $tmp201 = { $tmp198 };
    if ($tmp201.value) {
    {
        panda$core$Int64 $tmp202 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
        panda$core$Int64 $tmp203 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp202);
        panda$core$UInt64 $tmp204 = panda$core$Int64$convert$R$panda$core$UInt64($tmp203);
        panda$core$UInt64 $tmp205 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp204, p_mask);
        value197 = $tmp205;
    }
    }
    else {
    {
        value197 = p_rawValue;
    }
    }
    max206 = ((panda$core$Int64) { 64 });
    chars207 = ((panda$core$Char8*) pandaZAlloc(max206.value * 1));
    panda$core$Int64 $tmp209 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max206, ((panda$core$Int64) { 1 }));
    charIndex208 = $tmp209;
    $l210:;
    {
        panda$core$UInt64 $tmp213 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value197, base157);
        panda$core$Int64 $tmp214 = panda$core$UInt64$convert$R$panda$core$Int64($tmp213);
        ITable* $tmp215 = digits158->$class->itable;
        while ($tmp215->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp215 = $tmp215->next;
        }
        $fn217 $tmp216 = $tmp215->methods[0];
        panda$core$Object* $tmp218 = $tmp216(digits158, $tmp214);
        panda$core$Object* $tmp212 = $tmp218;
        chars207[charIndex208.value] = ((panda$core$Char8$wrapper*) $tmp212)->value;
        panda$core$Panda$unref$panda$core$Object($tmp212);
        panda$core$UInt64 $tmp219 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value197, base157);
        value197 = $tmp219;
        panda$core$Int64 $tmp220 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex208, ((panda$core$Int64) { 1 }));
        charIndex208 = $tmp220;
    }
    panda$core$Bit $tmp222 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value197, ((panda$core$UInt64) { 0 }));
    bool $tmp221 = $tmp222.value;
    if ($tmp221) goto $l210;
    $l211:;
    bool $tmp223 = p_sign.value;
    if (!$tmp223) goto $l224;
    panda$core$Bit $tmp225 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base157, ((panda$core$UInt64) { 10 }));
    $tmp223 = $tmp225.value;
    $l224:;
    panda$core$Bit $tmp226 = { $tmp223 };
    if ($tmp226.value) {
    {
        panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 45 }));
        chars207[charIndex208.value] = $tmp227;
        panda$core$Int64 $tmp228 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex208, ((panda$core$Int64) { 1 }));
        charIndex208 = $tmp228;
    }
    }
    panda$core$Int64 $tmp229 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex208, ((panda$core$Int64) { 1 }));
    charIndex208 = $tmp229;
    panda$core$Int64 $tmp231 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max206, charIndex208);
    size230 = $tmp231;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp232, ((panda$core$Int64) { 0 }), size230, ((panda$core$Bit) { false }));
    int64_t $tmp234 = $tmp232.min.value;
    panda$core$Int64 i233 = { $tmp234 };
    int64_t $tmp236 = $tmp232.max.value;
    bool $tmp237 = $tmp232.inclusive.value;
    if ($tmp237) goto $l244; else goto $l245;
    $l244:;
    if ($tmp234 <= $tmp236) goto $l238; else goto $l240;
    $l245:;
    if ($tmp234 < $tmp236) goto $l238; else goto $l240;
    $l238:;
    {
        panda$core$Int64 $tmp246 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i233, charIndex208);
        chars207[i233.value] = chars207[$tmp246.value];
    }
    $l241:;
    int64_t $tmp248 = $tmp236 - i233.value;
    if ($tmp237) goto $l249; else goto $l250;
    $l249:;
    if ((uint64_t) $tmp248 >= 1) goto $l247; else goto $l240;
    $l250:;
    if ((uint64_t) $tmp248 > 1) goto $l247; else goto $l240;
    $l247:;
    i233.value += 1;
    goto $l238;
    $l240:;
    {
        panda$core$String* $tmp256 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp256, chars207, size230);
        panda$core$String* $tmp255 = $tmp256;
        panda$core$String* $tmp254 = $tmp255;
        tmp1253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits158));
        panda$core$String* $tmp257 = tmp1253;
        return $tmp257;
    }
}
void panda$core$Panda$init(panda$core$Panda* self) {
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

