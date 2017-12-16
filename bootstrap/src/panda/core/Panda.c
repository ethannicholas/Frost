#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt64.h"
#include "panda/core/String/Index.h"
#include "panda/core/Char32.h"
#include "panda/core/Int32.h"


panda$core$Panda$class_type panda$core$Panda$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef void (*$fn9)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn21)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x20\x66\x61\x69\x6C\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x20\x66\x61\x69\x6C\x75\x72\x65\x20\x28", 19, -2375112016343986227, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3A\x20", 3, 1454432, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66", 16, 6478845731788479527, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x44\x65\x62\x75\x67\x3A\x20", 7, 180468745123278, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };

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
panda$core$String* panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$String$R$panda$core$String(panda$core$Bit p_sign, panda$core$UInt64 p_rawValue, panda$core$String* p_fmt) {
    panda$core$String$Index index22;
    panda$core$Int64 base24;
    panda$core$String* digits25;
    panda$core$Char32 $match$39_1329;
    panda$core$Char32 $tmp31;
    panda$core$Char32 $tmp33;
    panda$core$Char32 $tmp35;
    panda$core$Char32 $tmp37;
    panda$core$UInt64 value40;
    panda$core$String$Index $tmp23 = panda$core$String$start$R$panda$core$String$Index(p_fmt);
    index22 = $tmp23;
    base24 = ((panda$core$Int64) { 10 });
    digits25 = &$s26;
    panda$core$String$Index $tmp27 = panda$core$String$end$R$panda$core$String$Index(p_fmt);
    panda$core$Bit $tmp28 = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(index22, $tmp27);
    if ($tmp28.value) {
    {
        {
            panda$core$Char32 $tmp30 = panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(p_fmt, index22);
            $match$39_1329 = $tmp30;
            panda$core$Char32$init$panda$core$Int32(&$tmp31, ((panda$core$Int32) { 98 }));
            panda$core$Bit $tmp32 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$39_1329, $tmp31);
            if ($tmp32.value) {
            {
                base24 = ((panda$core$Int64) { 2 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp33, ((panda$core$Int32) { 111 }));
            panda$core$Bit $tmp34 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$39_1329, $tmp33);
            if ($tmp34.value) {
            {
                base24 = ((panda$core$Int64) { 8 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp35, ((panda$core$Int32) { 120 }));
            panda$core$Bit $tmp36 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$39_1329, $tmp35);
            if ($tmp36.value) {
            {
                base24 = ((panda$core$Int64) { 16 });
            }
            }
            else {
            panda$core$Char32$init$panda$core$Int32(&$tmp37, ((panda$core$Int32) { 88 }));
            panda$core$Bit $tmp38 = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit($match$39_1329, $tmp37);
            if ($tmp38.value) {
            {
                base24 = ((panda$core$Int64) { 16 });
                digits25 = &$s39;
            }
            }
            }
            }
            }
        }
    }
    }
    bool $tmp41 = p_sign.value;
    if (!$tmp41) goto $l42;
    panda$core$Bit $tmp43 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(base24, ((panda$core$Int64) { 10 }));
    $tmp41 = $tmp43.value;
    $l42:;
    panda$core$Bit $tmp44 = { $tmp41 };
    if ($tmp44.value) {
    {
        panda$core$Int64 $tmp45 = panda$core$UInt64$convert$R$panda$core$Int64(p_rawValue);
        panda$core$Int64 $tmp46 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp45);
        panda$core$UInt64 $tmp47 = panda$core$Int64$convert$R$panda$core$UInt64($tmp46);
        value40 = $tmp47;
    }
    }
    else {
    {
        value40 = p_rawValue;
    }
    }
    panda$core$String* $tmp48 = panda$core$UInt64$convert$R$panda$core$String(value40);
    return $tmp48;
}
void panda$core$Panda$debugPrint$builtin_int64(int64_t p_i) {
    panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s49, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { p_i }))));
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp50, &$s51);
    panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp52));
}
void panda$core$Panda$init(panda$core$Panda* self) {
}

