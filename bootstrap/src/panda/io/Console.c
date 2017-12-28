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
#include "panda/core/Panda.h"


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
    if ((uint64_t) $tmp16 >= 1) goto $l15; else goto $l9;
    $l18:;
    if ((uint64_t) $tmp16 > 1) goto $l15; else goto $l9;
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
    panda$core$Char8$wrapper* $tmp26;
    $tmp26 = (panda$core$Char8$wrapper*) pandaAlloc(13);
    $tmp26->cl = (panda$core$Class*) &panda$core$Char8$wrapperclass;
    $tmp26->refCount = 1;
    $tmp26->value = $tmp25;
    panda$io$Console$print$panda$core$Object(((panda$core$Object*) $tmp26));
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result27;
    panda$core$Char8$nullable c33;
    panda$core$Char8$nullable $tmp34;
    panda$core$Char8 $tmp40;
    panda$core$MutableString* $tmp28 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp28->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp28->refCount.value = 1;
    panda$core$MutableString$init($tmp28);
    panda$core$Object* $tmp30 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp28));
    result27 = ((panda$core$MutableString*) $tmp30);
    $l31:;
    while (true) {
    {
        panda$io$Console$read$R$panda$core$Char8$Q(&$tmp34);
        c33 = $tmp34;
        if (((panda$core$Bit) { !c33.nonnull }).value) {
        {
            panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result27->length, ((panda$core$Int64) { 0 }));
            if ($tmp35.value) {
            {
                return NULL;
            }
            }
            goto $l32;
        }
        }
        panda$core$Bit $tmp39;
        if (((panda$core$Bit) { c33.nonnull }).value) goto $l36; else goto $l37;
        $l36:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp40, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp41 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c33.value), $tmp40);
        $tmp39 = $tmp41;
        goto $l38;
        $l37:;
        $tmp39 = ((panda$core$Bit) { false });
        goto $l38;
        $l38:;
        if ($tmp39.value) {
        {
            goto $l32;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result27, ((panda$core$Char8) c33.value));
    }
    }
    $l32:;
    panda$core$String* $tmp42 = panda$core$MutableString$finish$R$panda$core$String(result27);
    return $tmp42;
}
void panda$io$Console$init(panda$io$Console* self) {
}

