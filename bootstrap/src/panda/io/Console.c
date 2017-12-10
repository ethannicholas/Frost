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

typedef panda$core$String* (*$fn30)(panda$core$Object*);
typedef panda$core$String* (*$fn32)(panda$core$Object*);


void panda$io$Console$print$panda$core$String(panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp3 = $tmp1.min.value;
    panda$core$Int64 i2 = { $tmp3 };
    int64_t $tmp5 = $tmp1.max.value;
    bool $tmp6 = $tmp1.inclusive.value;
    bool $tmp13 = 1 > 0;
    if ($tmp13) goto $l11; else goto $l12;
    $l11:;
    if ($tmp6) goto $l14; else goto $l15;
    $l14:;
    if ($tmp3 <= $tmp5) goto $l7; else goto $l9;
    $l15:;
    if ($tmp3 < $tmp5) goto $l7; else goto $l9;
    $l12:;
    if ($tmp6) goto $l16; else goto $l17;
    $l16:;
    if ($tmp3 >= $tmp5) goto $l7; else goto $l9;
    $l17:;
    if ($tmp3 > $tmp5) goto $l7; else goto $l9;
    $l7:;
    {
        panda$io$Console$write$panda$core$Char8(p_s->data[i2.value]);
    }
    $l10:;
    if ($tmp13) goto $l20; else goto $l21;
    $l20:;
    int64_t $tmp22 = $tmp5 - i2.value;
    if ($tmp6) goto $l23; else goto $l24;
    $l23:;
    if ($tmp22 >= 1) goto $l19; else goto $l9;
    $l24:;
    if ($tmp22 > 1) goto $l19; else goto $l9;
    $l21:;
    int64_t $tmp26 = i2.value - $tmp5;
    if ($tmp6) goto $l27; else goto $l28;
    $l27:;
    if ($tmp26 >= -1) goto $l19; else goto $l9;
    $l28:;
    if ($tmp26 > -1) goto $l19; else goto $l9;
    $l19:;
    i2.value += 1;
    goto $l7;
    $l9:;
}
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp31 = (($fn30) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp31);
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp33 = (($fn32) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp33);
    panda$io$Console$printLine();
}
void panda$io$Console$printLine() {
    panda$core$Char8 $tmp34;
    panda$core$Char8$init$panda$core$UInt8(&$tmp34, ((panda$core$UInt8) { 10 }));
    panda$io$Console$print$panda$core$Object(((panda$core$Object*) wrap_panda$core$Char8($tmp34)));
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result35;
    panda$core$Char8$nullable c40;
    panda$core$Char8$nullable $tmp41;
    panda$core$Char8 $tmp43;
    panda$core$MutableString* $tmp36 = (panda$core$MutableString*) malloc(40);
    $tmp36->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp36->refCount.value = 1;
    panda$core$MutableString$init($tmp36);
    result35 = $tmp36;
    $l38:;
    while (true) {
    {
        panda$io$Console$read$R$panda$core$Char8$Q(&$tmp41);
        c40 = $tmp41;
        if (((panda$core$Bit) { !c40.nonnull }).value) {
        {
            panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result35->length, ((panda$core$Int64) { 0 }));
            if ($tmp42.value) {
            {
                return NULL;
            }
            }
            goto $l39;
        }
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp43, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp44 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c40.value), $tmp43);
        if ($tmp44.value) {
        {
            goto $l39;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result35, ((panda$core$Char8) c40.value));
    }
    }
    $l39:;
    panda$core$String* $tmp45 = panda$core$MutableString$convert$R$panda$core$String(result35);
    return $tmp45;
}
void panda$io$Console$init(panda$io$Console* self) {
}

