#include "panda/io/Console.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/Panda.h"
#include "panda/core/UInt8.h"


panda$io$Console$class_type panda$io$Console$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$Console$cleanup} };

typedef panda$core$String* (*$fn21)(panda$core$Object*);
typedef panda$core$String* (*$fn23)(panda$core$Object*);

static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void panda$io$Console$print$panda$core$String(panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp3 = $tmp1.min.value;
    panda$core$Int64 i2 = { $tmp3 };
    int64_t $tmp5 = $tmp1.max.value;
    bool $tmp6 = $tmp1.inclusive.value;
    if ($tmp6) goto $l13; else goto $l14;
    $l13:;
    if ($tmp3 <= $tmp5) goto $l7; else goto $l9;
    $l14:;
    if ($tmp3 < $tmp5) goto $l7; else goto $l9;
    $l7:;
    {
        panda$io$Console$write$panda$core$Char8(p_s->data[i2.value]);
    }
    $l10:;
    int64_t $tmp16 = $tmp5 - i2.value;
    if ($tmp6) goto $l17; else goto $l18;
    $l17:;
    if ((uint64_t) $tmp16 >= 1) goto $l15; else goto $l9;
    $l18:;
    if ((uint64_t) $tmp16 > 1) goto $l15; else goto $l9;
    $l15:;
    i2.value += 1;
    goto $l7;
    $l9:;
}
void panda$io$Console$printLine$panda$core$String(panda$core$String* p_s) {
    panda$io$Console$print$panda$core$String(p_s);
    panda$io$Console$printLine();
}
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp22 = (($fn21) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp22);
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp24 = (($fn23) p_o->$class->vtable[0])(p_o);
    panda$io$Console$printLine$panda$core$String($tmp24);
}
void panda$io$Console$printLine() {
    panda$io$Console$print$panda$core$String(&$s25);
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result26;
    panda$core$Char8$nullable c31;
    panda$core$Char8$nullable $tmp32;
    panda$core$String* tmp134;
    panda$core$Char8 $tmp39;
    panda$core$String* tmp241;
    panda$core$MutableString* $tmp27 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp27->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp27->refCount.value = 1;
    panda$core$MutableString$init($tmp27);
    result26 = $tmp27;
    $l29:;
    while (true) {
    {
        panda$io$Console$read$R$panda$core$Char8$Q(&$tmp32);
        c31 = $tmp32;
        if (((panda$core$Bit) { !c31.nonnull }).value) {
        {
            panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result26->length, ((panda$core$Int64) { 0 }));
            if ($tmp33.value) {
            {
                {
                    tmp134 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result26));
                    return tmp134;
                }
            }
            }
            goto $l30;
        }
        }
        panda$core$Bit $tmp38;
        if (((panda$core$Bit) { c31.nonnull }).value) goto $l35; else goto $l36;
        $l35:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp39, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp40 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c31.value), $tmp39);
        $tmp38 = $tmp40;
        goto $l37;
        $l36:;
        $tmp38 = ((panda$core$Bit) { false });
        goto $l37;
        $l37:;
        if ($tmp38.value) {
        {
            goto $l30;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result26, ((panda$core$Char8) c31.value));
    }
    }
    $l30:;
    {
        panda$core$String* $tmp42 = panda$core$MutableString$finish$R$panda$core$String(result26);
        tmp241 = $tmp42;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result26));
        return tmp241;
    }
}
void panda$io$Console$init(panda$io$Console* self) {
}
void panda$io$Console$cleanup(panda$io$Console* self) {
}

