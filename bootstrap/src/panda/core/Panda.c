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
typedef panda$core$Object* (*$fn230)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x50\x61\x6e\x64\x61", 16, -4218233432272217990, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s10 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3a\x20", 3, 1454432, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };

void panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(panda$core$String* p_file, panda$core$Int64 p_line) {
    panda$io$OutputStream* $tmp2;
    panda$core$String* $tmp4;
    panda$core$String* $tmp5;
    panda$core$String* $tmp6;
    panda$core$String* $tmp7;
    panda$core$Object* $tmp12;
    panda$io$OutputStream* $tmp3 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp2 = $tmp3;
    panda$core$String* $tmp9 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s8, p_file);
    $tmp7 = $tmp9;
    panda$core$String* $tmp11 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp7, &$s10);
    $tmp6 = $tmp11;
    panda$core$Int64$wrapper* $tmp13;
    $tmp13 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp13->value = p_line;
    $tmp12 = ((panda$core$Object*) $tmp13);
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6, $tmp12);
    $tmp5 = $tmp14;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s15);
    $tmp4 = $tmp16;
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
    panda$io$OutputStream* $tmp18;
    panda$core$String* $tmp20;
    panda$core$String* $tmp21;
    panda$core$String* $tmp22;
    panda$core$String* $tmp23;
    panda$core$String* $tmp24;
    panda$core$String* $tmp25;
    panda$core$Object* $tmp30;
    panda$io$OutputStream* $tmp19 = panda$io$Console$errorStream$R$panda$io$OutputStream();
    $tmp18 = $tmp19;
    panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s26, p_file);
    $tmp25 = $tmp27;
    panda$core$String* $tmp29 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp25, &$s28);
    $tmp24 = $tmp29;
    panda$core$Int64$wrapper* $tmp31;
    $tmp31 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp31->value = p_line;
    $tmp30 = ((panda$core$Object*) $tmp31);
    panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp24, $tmp30);
    $tmp23 = $tmp32;
    panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp23, &$s33);
    $tmp22 = $tmp34;
    panda$core$String* $tmp35 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp22, p_msg);
    $tmp21 = $tmp35;
    panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s36);
    $tmp20 = $tmp37;
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
    panda$core$UInt64$nullable $finallyReturn45;
    panda$core$Char8 $tmp48;
    panda$core$Char32 $tmp53;
    panda$core$Char32 $tmp56;
    panda$core$UInt64$nullable $finallyReturn58;
    panda$core$Char8 $tmp61;
    panda$core$Char32 $tmp67;
    panda$core$Char32 $tmp70;
    panda$core$UInt64$nullable $finallyReturn72;
    panda$core$Char8 $tmp75;
    panda$core$UInt64$nullable $finallyReturn79;
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
        $finallyReturn45 = ((panda$core$UInt64$nullable) { $tmp50, true });
        return $finallyReturn45;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp53, ((panda$core$Int32) { 65 }));
    panda$core$Bit $tmp54 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp53);
    bool $tmp52 = $tmp54.value;
    if (!$tmp52) goto $l55;
    panda$core$Char32$init$panda$core$Int32(&$tmp56, ((panda$core$Int32) { 90 }));
    panda$core$Bit $tmp57 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp56);
    $tmp52 = $tmp57.value;
    $l55:;
    panda$core$Bit $tmp58 = { $tmp52 };
    if ($tmp58.value) {
    {
        panda$core$UInt64 $tmp60 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp61, ((panda$core$UInt8) { 65 }));
        panda$core$UInt64 $tmp62 = panda$core$Char8$convert$R$panda$core$UInt64($tmp61);
        panda$core$UInt64 $tmp63 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp60, $tmp62);
        panda$core$UInt64 $tmp64 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp63, ((panda$core$UInt64) { 10 }));
        $finallyReturn58 = ((panda$core$UInt64$nullable) { $tmp64, true });
        return $finallyReturn58;
    }
    }
    panda$core$Char32$init$panda$core$Int32(&$tmp67, ((panda$core$Int32) { 97 }));
    panda$core$Bit $tmp68 = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp67);
    bool $tmp66 = $tmp68.value;
    if (!$tmp66) goto $l69;
    panda$core$Char32$init$panda$core$Int32(&$tmp70, ((panda$core$Int32) { 122 }));
    panda$core$Bit $tmp71 = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(p_c, $tmp70);
    $tmp66 = $tmp71.value;
    $l69:;
    panda$core$Bit $tmp72 = { $tmp66 };
    if ($tmp72.value) {
    {
        panda$core$UInt64 $tmp74 = panda$core$Char32$convert$R$panda$core$UInt64(p_c);
        panda$core$Char8$init$panda$core$UInt8(&$tmp75, ((panda$core$UInt8) { 97 }));
        panda$core$UInt64 $tmp76 = panda$core$Char8$convert$R$panda$core$UInt64($tmp75);
        panda$core$UInt64 $tmp77 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp74, $tmp76);
        panda$core$UInt64 $tmp78 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp77, ((panda$core$UInt64) { 10 }));
        $finallyReturn72 = ((panda$core$UInt64$nullable) { $tmp78, true });
        return $finallyReturn72;
    }
    }
    $finallyReturn79 = ((panda$core$UInt64$nullable) { .nonnull = false });
    return $finallyReturn79;
}
panda$core$UInt64$nullable panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_rawRadix) {
    panda$core$UInt64$nullable $finallyReturn83;
    panda$core$UInt64 result86;
    panda$core$UInt64 radix87;
    panda$core$String$Index index89;
    panda$core$UInt64$nullable value96;
    panda$core$UInt64$nullable $finallyReturn102;
    panda$core$UInt64$nullable $finallyReturn107;
    panda$core$Bit $tmp83 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(p_str, &$s82);
    if ($tmp83.value) {
    {
        $finallyReturn83 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $finallyReturn83;
    }
    }
    result86 = ((panda$core$UInt64) { 0 });
    panda$core$UInt64 $tmp88 = panda$core$Int64$convert$R$panda$core$UInt64(p_rawRadix);
    radix87 = $tmp88;
    panda$core$String$Index $tmp90 = panda$core$String$start$R$panda$core$String$Index(p_str);
    index89 = $tmp90;
    $l91:;
    panda$core$String$Index $tmp94 = panda$core$String$end$R$panda$core$String$Index(p_str);
    panda$core$Bit $tmp95 = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(index89, $tmp94);
    bool $tmp93 = $tmp95.value;
    if (!$tmp93) goto $l92;
    {
        panda$core$Char32 $tmp97 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_str, index89);
        panda$core$UInt64$nullable $tmp98 = panda$core$Panda$digit$panda$core$Char32$R$panda$core$UInt64$Q($tmp97);
        value96 = $tmp98;
        bool $tmp99 = ((panda$core$Bit) { !value96.nonnull }).value;
        if ($tmp99) goto $l100;
        panda$core$Bit $tmp101 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64) value96.value), radix87);
        $tmp99 = $tmp101.value;
        $l100:;
        panda$core$Bit $tmp102 = { $tmp99 };
        if ($tmp102.value) {
        {
            $finallyReturn102 = ((panda$core$UInt64$nullable) { .nonnull = false });
            return $finallyReturn102;
        }
        }
        panda$core$UInt64 $tmp105 = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(result86, radix87);
        panda$core$UInt64 $tmp106 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp105, ((panda$core$UInt64) value96.value));
        result86 = $tmp106;
        panda$core$String$Index $tmp107 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_str, index89);
        index89 = $tmp107;
    }
    goto $l91;
    $l92:;
    $finallyReturn107 = ((panda$core$UInt64$nullable) { result86, true });
    return $finallyReturn107;
}
panda$core$String* panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* p_str, panda$core$String* p_specifier) {
    panda$core$String$Index index112;
    panda$core$Char32 $match$104_9115;
    panda$core$Char32 $tmp119;
    panda$core$Char32 $tmp122;
    panda$core$Char32 $tmp126;
    panda$core$Int64 width130;
    panda$core$String* $tmp131;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp132;
    panda$core$Char32 fill136;
    panda$core$Char32 $tmp139;
    panda$core$Char32 $match$117_9142;
    panda$core$Char32 $tmp144;
    panda$core$String* $finallyReturn145;
    panda$core$String* $tmp147;
    panda$core$String* $tmp148;
    panda$core$Char32 $tmp151;
    panda$core$String* $finallyReturn152;
    panda$core$String* $tmp154;
    panda$core$String* $tmp155;
    panda$core$Char32 $tmp158;
    panda$core$String* $finallyReturn159;
    panda$core$String* $tmp161;
    panda$core$String* $tmp162;
    panda$core$Int64 $tmp110 = panda$core$String$length$R$panda$core$Int64(p_specifier);
    panda$core$Bit $tmp111 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp110, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp111.value);
    panda$core$String$Index $tmp113 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$String$Index $tmp114 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, $tmp113);
    index112 = $tmp114;
    {
        panda$core$Char32 $tmp116 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index112);
        $match$104_9115 = $tmp116;
        panda$core$Char32$init$panda$core$Int32(&$tmp119, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp120 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$104_9115, $tmp119);
        bool $tmp118 = $tmp120.value;
        if ($tmp118) goto $l121;
        panda$core$Char32$init$panda$core$Int32(&$tmp122, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp123 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$104_9115, $tmp122);
        $tmp118 = $tmp123.value;
        $l121:;
        panda$core$Bit $tmp124 = { $tmp118 };
        bool $tmp117 = $tmp124.value;
        if ($tmp117) goto $l125;
        panda$core$Char32$init$panda$core$Int32(&$tmp126, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp127 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$104_9115, $tmp126);
        $tmp117 = $tmp127.value;
        $l125:;
        panda$core$Bit $tmp128 = { $tmp117 };
        if ($tmp128.value) {
        {
        }
        }
        else {
        {
            panda$core$String$Index $tmp129 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
            index112 = $tmp129;
        }
        }
    }
    panda$core$String$Index $tmp133 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(p_specifier, index112);
    panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp132, ((panda$core$String$Index$nullable) { $tmp133, true }), ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
    panda$core$String* $tmp134 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p_specifier, $tmp132);
    $tmp131 = $tmp134;
    panda$core$Int64$nullable $tmp135 = panda$core$String$convert$R$panda$core$Int64$Q($tmp131);
    width130 = ((panda$core$Int64) $tmp135.value);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    memset(&fill136, 0, sizeof(fill136));
    panda$core$String$Index $tmp137 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
    panda$core$Bit $tmp138 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(index112, $tmp137);
    if ($tmp138.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp139, ((panda$core$Int32) { 32 }));
        fill136 = $tmp139;
    }
    }
    else {
    {
        panda$core$String$Index $tmp140 = panda$core$String$start$R$panda$core$String$Index(p_specifier);
        panda$core$Char32 $tmp141 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, $tmp140);
        fill136 = $tmp141;
    }
    }
    {
        panda$core$Char32 $tmp143 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_specifier, index112);
        $match$117_9142 = $tmp143;
        panda$core$Char32$init$panda$core$Int32(&$tmp144, ((panda$core$Int32) { 60 }));
        panda$core$Bit $tmp145 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$117_9142, $tmp144);
        if ($tmp145.value) {
        {
            panda$core$String* $tmp149 = panda$core$String$leftAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width130, fill136);
            $tmp148 = $tmp149;
            $tmp147 = $tmp148;
            $finallyReturn145 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
            return $finallyReturn145;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp151, ((panda$core$Int32) { 94 }));
        panda$core$Bit $tmp152 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$117_9142, $tmp151);
        if ($tmp152.value) {
        {
            panda$core$String* $tmp156 = panda$core$String$centerAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width130, fill136);
            $tmp155 = $tmp156;
            $tmp154 = $tmp155;
            $finallyReturn152 = $tmp154;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp155));
            return $finallyReturn152;
        }
        }
        else {
        panda$core$Char32$init$panda$core$Int32(&$tmp158, ((panda$core$Int32) { 62 }));
        panda$core$Bit $tmp159 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$117_9142, $tmp158);
        if ($tmp159.value) {
        {
            panda$core$String* $tmp163 = panda$core$String$rightAlign$panda$core$Int64$panda$core$Char32$R$panda$core$String(p_str, width130, fill136);
            $tmp162 = $tmp163;
            $tmp161 = $tmp162;
            $finallyReturn159 = $tmp161;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
            return $finallyReturn159;
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
    panda$core$String$Index index168;
    panda$core$UInt64 base170;
    panda$collections$ListView* digits171;
    panda$collections$ListView* $tmp172;
    panda$collections$ListView* $tmp173;
    panda$core$Char32 $match$140_13178;
    panda$core$Char32 $tmp181;
    panda$core$Char32 $tmp184;
    panda$core$Char32 $tmp188;
    panda$core$Char32 $tmp191;
    panda$core$Char32 $tmp195;
    panda$core$Char32 $tmp198;
    panda$core$Char32 $tmp201;
    panda$core$Char32 $tmp203;
    panda$collections$ListView* $tmp205;
    panda$collections$ListView* $tmp206;
    panda$collections$ListView* $tmp207;
    panda$core$UInt64 value210;
    panda$core$Int64 max219;
    panda$core$Char8* chars220;
    panda$core$Int64 charIndex221;
    panda$core$Object* $tmp225;
    panda$core$Char8 $tmp240;
    panda$core$Int64 size243;
    panda$core$Range$LTpanda$core$Int64$GT $tmp245;
    panda$core$String* $finallyReturn265;
    panda$core$String* $tmp267;
    panda$core$String* $tmp268;
    int $tmp167;
    {
        panda$core$String$Index $tmp169 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
        index168 = $tmp169;
        base170 = ((panda$core$UInt64) { 10 });
        panda$collections$ListView* $tmp175 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s174);
        $tmp173 = $tmp175;
        $tmp172 = $tmp173;
        digits171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$core$String$Index $tmp176 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
        panda$core$Bit $tmp177 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index168, $tmp176);
        if ($tmp177.value) {
        {
            {
                panda$core$Char32 $tmp179 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index168);
                $match$140_13178 = $tmp179;
                panda$core$Char32$init$panda$core$Int32(&$tmp181, ((panda$core$Int32) { 98 }));
                panda$core$Bit $tmp182 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp181);
                bool $tmp180 = $tmp182.value;
                if ($tmp180) goto $l183;
                panda$core$Char32$init$panda$core$Int32(&$tmp184, ((panda$core$Int32) { 66 }));
                panda$core$Bit $tmp185 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp184);
                $tmp180 = $tmp185.value;
                $l183:;
                panda$core$Bit $tmp186 = { $tmp180 };
                if ($tmp186.value) {
                {
                    base170 = ((panda$core$UInt64) { 2 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp188, ((panda$core$Int32) { 111 }));
                panda$core$Bit $tmp189 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp188);
                bool $tmp187 = $tmp189.value;
                if ($tmp187) goto $l190;
                panda$core$Char32$init$panda$core$Int32(&$tmp191, ((panda$core$Int32) { 79 }));
                panda$core$Bit $tmp192 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp191);
                $tmp187 = $tmp192.value;
                $l190:;
                panda$core$Bit $tmp193 = { $tmp187 };
                if ($tmp193.value) {
                {
                    base170 = ((panda$core$UInt64) { 8 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp195, ((panda$core$Int32) { 100 }));
                panda$core$Bit $tmp196 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp195);
                bool $tmp194 = $tmp196.value;
                if ($tmp194) goto $l197;
                panda$core$Char32$init$panda$core$Int32(&$tmp198, ((panda$core$Int32) { 68 }));
                panda$core$Bit $tmp199 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp198);
                $tmp194 = $tmp199.value;
                $l197:;
                panda$core$Bit $tmp200 = { $tmp194 };
                if ($tmp200.value) {
                {
                    base170 = ((panda$core$UInt64) { 10 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp201, ((panda$core$Int32) { 120 }));
                panda$core$Bit $tmp202 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp201);
                if ($tmp202.value) {
                {
                    base170 = ((panda$core$UInt64) { 16 });
                }
                }
                else {
                panda$core$Char32$init$panda$core$Int32(&$tmp203, ((panda$core$Int32) { 88 }));
                panda$core$Bit $tmp204 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$140_13178, $tmp203);
                if ($tmp204.value) {
                {
                    base170 = ((panda$core$UInt64) { 16 });
                    {
                        $tmp205 = digits171;
                        panda$collections$ListView* $tmp209 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s208);
                        $tmp207 = $tmp209;
                        $tmp206 = $tmp207;
                        digits171 = $tmp206;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
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
        memset(&value210, 0, sizeof(value210));
        bool $tmp211 = p_sign.value;
        if (!$tmp211) goto $l212;
        panda$core$Bit $tmp213 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(base170, ((panda$core$UInt64) { 10 }));
        $tmp211 = $tmp213.value;
        $l212:;
        panda$core$Bit $tmp214 = { $tmp211 };
        if ($tmp214.value) {
        {
            panda$core$Int64 $tmp215 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
            panda$core$Int64 $tmp216 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp215);
            panda$core$UInt64 $tmp217 = panda$core$Int64$convert$R$panda$core$UInt64($tmp216);
            panda$core$UInt64 $tmp218 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64($tmp217, p_mask);
            value210 = $tmp218;
        }
        }
        else {
        {
            value210 = p_rawValue;
        }
        }
        max219 = ((panda$core$Int64) { 64 });
        chars220 = ((panda$core$Char8*) pandaZAlloc(max219.value * 1));
        panda$core$Int64 $tmp222 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max219, ((panda$core$Int64) { 1 }));
        charIndex221 = $tmp222;
        $l223:;
        {
            panda$core$UInt64 $tmp226 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value210, base170);
            panda$core$Int64 $tmp227 = panda$core$UInt64$convert$R$panda$core$Int64($tmp226);
            ITable* $tmp228 = digits171->$class->itable;
            while ($tmp228->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp228 = $tmp228->next;
            }
            $fn230 $tmp229 = $tmp228->methods[0];
            panda$core$Object* $tmp231 = $tmp229(digits171, $tmp227);
            $tmp225 = $tmp231;
            chars220[charIndex221.value] = ((panda$core$Char8$wrapper*) $tmp225)->value;
            panda$core$Panda$unref$panda$core$Object($tmp225);
            panda$core$UInt64 $tmp232 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value210, base170);
            value210 = $tmp232;
            panda$core$Int64 $tmp233 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex221, ((panda$core$Int64) { 1 }));
            charIndex221 = $tmp233;
        }
        panda$core$Bit $tmp235 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value210, ((panda$core$UInt64) { 0 }));
        bool $tmp234 = $tmp235.value;
        if ($tmp234) goto $l223;
        $l224:;
        bool $tmp236 = p_sign.value;
        if (!$tmp236) goto $l237;
        panda$core$Bit $tmp238 = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(base170, ((panda$core$UInt64) { 10 }));
        $tmp236 = $tmp238.value;
        $l237:;
        panda$core$Bit $tmp239 = { $tmp236 };
        if ($tmp239.value) {
        {
            panda$core$Char8$init$panda$core$UInt8(&$tmp240, ((panda$core$UInt8) { 45 }));
            chars220[charIndex221.value] = $tmp240;
            panda$core$Int64 $tmp241 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(charIndex221, ((panda$core$Int64) { 1 }));
            charIndex221 = $tmp241;
        }
        }
        panda$core$Int64 $tmp242 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(charIndex221, ((panda$core$Int64) { 1 }));
        charIndex221 = $tmp242;
        panda$core$Int64 $tmp244 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max219, charIndex221);
        size243 = $tmp244;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp245, ((panda$core$Int64) { 0 }), size243, ((panda$core$Bit) { false }));
        int64_t $tmp247 = $tmp245.min.value;
        panda$core$Int64 i246 = { $tmp247 };
        int64_t $tmp249 = $tmp245.max.value;
        bool $tmp250 = $tmp245.inclusive.value;
        if ($tmp250) goto $l257; else goto $l258;
        $l257:;
        if ($tmp247 <= $tmp249) goto $l251; else goto $l253;
        $l258:;
        if ($tmp247 < $tmp249) goto $l251; else goto $l253;
        $l251:;
        {
            panda$core$Int64 $tmp259 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i246, charIndex221);
            chars220[i246.value] = chars220[$tmp259.value];
        }
        $l254:;
        int64_t $tmp261 = $tmp249 - i246.value;
        if ($tmp250) goto $l262; else goto $l263;
        $l262:;
        if ((uint64_t) $tmp261 >= 1) goto $l260; else goto $l253;
        $l263:;
        if ((uint64_t) $tmp261 > 1) goto $l260; else goto $l253;
        $l260:;
        i246.value += 1;
        goto $l251;
        $l253:;
        panda$core$String* $tmp269 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp269, chars220, size243);
        $tmp268 = $tmp269;
        $tmp267 = $tmp268;
        $finallyReturn265 = $tmp267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
        $tmp167 = 0;
        goto $l165;
        $l270:;
        return $finallyReturn265;
    }
    $l165:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) digits171));
    switch ($tmp167) {
        case 0: goto $l270;
    }
    $l272:;
}
void panda$core$Panda$init(panda$core$Panda* self) {
}
void panda$core$Panda$cleanup(panda$core$Panda* self) {
    int $tmp275;
    {
    }
    $tmp275 = -1;
    goto $l273;
    $l273:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp275) {
        case -1: goto $l276;
    }
    $l276:;
}

