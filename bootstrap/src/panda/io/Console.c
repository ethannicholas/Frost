#include "panda/io/Console.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$io$Console$class_type panda$io$Console$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$Console$cleanup} };

typedef panda$core$String* (*$fn23)(panda$core$Object*);
typedef panda$core$String* (*$fn26)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$String* $tmp24 = (($fn23) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp22 = $tmp24;
    panda$io$Console$print$panda$core$String($tmp22);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp27 = (($fn26) p_o->$class->vtable[0])(p_o);
    panda$core$String* $tmp25 = $tmp27;
    panda$io$Console$printLine$panda$core$String($tmp25);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
}
void panda$io$Console$printLine() {
    panda$io$Console$print$panda$core$String(&$s28);
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result29;
    panda$core$Char8$nullable c35;
    panda$core$Char8$nullable $tmp36;
    panda$core$String* tmp138;
    panda$core$Char8 $tmp46;
    panda$core$String* tmp248;
    panda$core$MutableString* $tmp32 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp32);
    panda$core$MutableString* $tmp31 = $tmp32;
    panda$core$MutableString* $tmp30 = $tmp31;
    result29 = $tmp30;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
    $l33:;
    while (true) {
    {
        panda$io$Console$read$R$panda$core$Char8$Q(&$tmp36);
        c35 = $tmp36;
        if (((panda$core$Bit) { !c35.nonnull }).value) {
        {
            panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result29->length, ((panda$core$Int64) { 0 }));
            if ($tmp37.value) {
            {
                {
                    panda$core$String* $tmp39 = NULL;
                    tmp138 = $tmp39;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result29));
                    panda$core$String* $tmp40 = tmp138;
                    return $tmp40;
                }
            }
            }
            goto $l34;
        }
        }
        panda$core$Char8$nullable $tmp41 = c35;
        panda$core$Bit $tmp45;
        if (((panda$core$Bit) { $tmp41.nonnull }).value) goto $l42; else goto $l43;
        $l42:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp46, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp47 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp41.value), $tmp46);
        $tmp45 = $tmp47;
        goto $l44;
        $l43:;
        $tmp45 = ((panda$core$Bit) { false });
        goto $l44;
        $l44:;
        if ($tmp45.value) {
        {
            goto $l34;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result29, ((panda$core$Char8) c35.value));
    }
    }
    $l34:;
    {
        panda$core$String* $tmp51 = panda$core$MutableString$finish$R$panda$core$String(result29);
        panda$core$String* $tmp50 = $tmp51;
        panda$core$String* $tmp49 = $tmp50;
        tmp248 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result29));
        panda$core$String* $tmp52 = tmp248;
        return $tmp52;
    }
}
void panda$io$Console$init(panda$io$Console* self) {
}
void panda$io$Console$cleanup(panda$io$Console* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

