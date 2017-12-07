#include "panda/io/Console.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"


panda$io$Console$class_type panda$io$Console$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

typedef panda$core$String* (*$fn31)(panda$core$Object*);
typedef panda$core$String* (*$fn33)(panda$core$Object*);
typedef void (*$fn46)(panda$core$MutableString*, panda$core$Char8);
typedef panda$core$String* (*$fn47)(panda$core$MutableString*);


void panda$io$Console$print$panda$core$String(panda$core$String* p_s) {
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3 = $tmp1.start.value;
    panda$core$Int64 i2 = { $tmp3 };
    int64_t $tmp5 = $tmp1.end.value;
    int64_t $tmp6 = $tmp1.step.value;
    bool $tmp7 = $tmp1.inclusive.value;
    bool $tmp14 = $tmp6 > 0;
    if ($tmp14) goto $l12; else goto $l13;
    $l12:;
    if ($tmp7) goto $l15; else goto $l16;
    $l15:;
    if ($tmp3 <= $tmp5) goto $l8; else goto $l10;
    $l16:;
    if ($tmp3 < $tmp5) goto $l8; else goto $l10;
    $l13:;
    if ($tmp7) goto $l17; else goto $l18;
    $l17:;
    if ($tmp3 >= $tmp5) goto $l8; else goto $l10;
    $l18:;
    if ($tmp3 > $tmp5) goto $l8; else goto $l10;
    $l8:;
    {
        panda$io$Console$write$panda$core$Char8(p_s->data[i2.value]);
    }
    $l11:;
    if ($tmp14) goto $l21; else goto $l22;
    $l21:;
    int64_t $tmp23 = $tmp5 - i2.value;
    if ($tmp7) goto $l24; else goto $l25;
    $l24:;
    if ($tmp23 >= $tmp6) goto $l20; else goto $l10;
    $l25:;
    if ($tmp23 > $tmp6) goto $l20; else goto $l10;
    $l22:;
    int64_t $tmp27 = i2.value - $tmp5;
    if ($tmp7) goto $l28; else goto $l29;
    $l28:;
    if ($tmp27 >= -$tmp6) goto $l20; else goto $l10;
    $l29:;
    if ($tmp27 > -$tmp6) goto $l20; else goto $l10;
    $l20:;
    i2.value += $tmp6;
    goto $l8;
    $l10:;
}
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp32 = (($fn31) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp32);
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp34 = (($fn33) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp34);
    panda$io$Console$printLine();
}
void panda$io$Console$printLine() {
    panda$core$Char8 $tmp35;
    panda$core$Char8$init$panda$core$UInt8(&$tmp35, ((panda$core$UInt8) { 10 }));
    panda$io$Console$print$panda$core$Object(((panda$core$Object*) wrap_panda$core$Char8($tmp35)));
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result36;
    panda$core$Char8$nullable c41;
    panda$core$Char8$nullable $tmp42;
    panda$core$Char8 $tmp44;
    panda$core$MutableString* $tmp37 = (panda$core$MutableString*) malloc(40);
    $tmp37->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp37->refCount.value = 1;
    panda$core$MutableString$init($tmp37);
    result36 = $tmp37;
    $l39:;
    while (true) {
    {
        panda$io$Console$read$R$panda$core$Char8$Q(&$tmp42);
        c41 = $tmp42;
        if (((panda$core$Bit) { !c41.nonnull }).value) {
        {
            panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result36->length, ((panda$core$Int64) { 0 }));
            if ($tmp43.value) {
            {
                return NULL;
            }
            }
            goto $l40;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp44, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp45 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c41.value), $tmp44);
        if ($tmp45.value) {
        {
            goto $l40;
        }
        }
        (($fn46) result36->$class->vtable[2])(result36, ((panda$core$Char8) c41.value));
    }
    }
    $l40:;
    panda$core$String* $tmp48 = (($fn47) result36->$class->vtable[0])(result36);
    return $tmp48;
}
void panda$io$Console$init(panda$io$Console* self) {
}

