#include "panda/io/Console.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"


panda$io$Console$class_type panda$io$Console$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn21)(panda$core$Object*);
typedef panda$core$String* (*$fn23)(panda$core$Object*);


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
    if ($tmp16 >= 1) goto $l15; else goto $l9;
    $l18:;
    if ($tmp16 > 1) goto $l15; else goto $l9;
    $l15:;
    i2.value += 1;
    goto $l7;
    $l9:;
}
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp22 = (($fn21) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp22);
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp24 = (($fn23) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp24);
    panda$io$Console$printLine();
}
void panda$io$Console$printLine() {
    panda$core$Char8 $tmp25;
    panda$core$Char8$init$panda$core$UInt8(&$tmp25, ((panda$core$UInt8) { 10 }));
    panda$io$Console$print$panda$core$Object(((panda$core$Object*) wrap_panda$core$Char8($tmp25)));
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result26;
    panda$core$Char8$nullable c31;
    panda$core$Char8$nullable $tmp32;
    panda$core$Char8 $tmp38;
    panda$core$MutableString* $tmp27 = (panda$core$MutableString*) malloc(48);
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
                return NULL;
            }
            }
            goto $l30;
        }
        }
        panda$core$Bit $tmp37;
        if (((panda$core$Bit) { c31.nonnull }).value) goto $l34; else goto $l35;
        $l34:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp38, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp39 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c31.value), $tmp38);
        $tmp37 = $tmp39;
        goto $l36;
        $l35:;
        $tmp37 = ((panda$core$Bit) { false });
        goto $l36;
        $l36:;
        if ($tmp37.value) {
        {
            goto $l30;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result26, ((panda$core$Char8) c31.value));
    }
    }
    $l30:;
    panda$core$String* $tmp40 = panda$core$MutableString$finish$R$panda$core$String(result26);
    return $tmp40;
}
void panda$io$Console$init(panda$io$Console* self) {
}

