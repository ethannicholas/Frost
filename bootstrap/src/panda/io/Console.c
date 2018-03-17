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


static panda$core$String $s1;
panda$io$Console$class_type panda$io$Console$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$Console$cleanup} };

typedef panda$core$String* (*$fn22)(panda$core$Object*);
typedef panda$core$String* (*$fn24)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void panda$io$Console$print$panda$core$String(panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), p_s->_length, ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.min.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.max.value;
    bool $tmp7 = $tmp2.inclusive.value;
    if ($tmp7) goto $l14; else goto $l15;
    $l14:;
    if ($tmp4 <= $tmp6) goto $l8; else goto $l10;
    $l15:;
    if ($tmp4 < $tmp6) goto $l8; else goto $l10;
    $l8:;
    {
        panda$io$Console$write$panda$core$Char8(p_s->data[i3.value]);
    }
    $l11:;
    int64_t $tmp17 = $tmp6 - i3.value;
    if ($tmp7) goto $l18; else goto $l19;
    $l18:;
    if ((uint64_t) $tmp17 >= 1) goto $l16; else goto $l10;
    $l19:;
    if ((uint64_t) $tmp17 > 1) goto $l16; else goto $l10;
    $l16:;
    i3.value += 1;
    goto $l8;
    $l10:;
}
void panda$io$Console$printLine$panda$core$String(panda$core$String* p_s) {
    panda$io$Console$print$panda$core$String(p_s);
    panda$io$Console$printLine();
}
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp23 = (($fn22) p_o->$class->vtable[0])(p_o);
    panda$io$Console$print$panda$core$String($tmp23);
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp25 = (($fn24) p_o->$class->vtable[0])(p_o);
    panda$io$Console$printLine$panda$core$String($tmp25);
}
void panda$io$Console$printLine() {
    panda$io$Console$print$panda$core$String(&$s26);
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result27;
    panda$core$Char8$nullable c31;
    panda$core$Char8$nullable $tmp32;
    panda$core$String* tmp134;
    panda$core$Char8 $tmp39;
    panda$core$String* tmp241;
    panda$core$MutableString* $tmp28 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp28);
    result27 = $tmp28;
    $l29:;
    while (true) {
    {
        panda$io$Console$read$R$panda$core$Char8$Q(&$tmp32);
        c31 = $tmp32;
        if (((panda$core$Bit) { !c31.nonnull }).value) {
        {
            panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result27->length, ((panda$core$Int64) { 0 }));
            if ($tmp33.value) {
            {
                {
                    tmp134 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result27));
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
        panda$core$MutableString$append$panda$core$Char8(result27, ((panda$core$Char8) c31.value));
    }
    }
    $l30:;
    {
        panda$core$String* $tmp42 = panda$core$MutableString$finish$R$panda$core$String(result27);
        tmp241 = $tmp42;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result27));
        return tmp241;
    }
}
void panda$io$Console$init(panda$io$Console* self) {
}
void panda$io$Console$cleanup(panda$io$Console* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

