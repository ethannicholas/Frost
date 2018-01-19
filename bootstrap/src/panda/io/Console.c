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
    panda$core$Char8$nullable c32;
    panda$core$Char8$nullable $tmp33;
    panda$core$String* tmp135;
    panda$core$Char8 $tmp40;
    panda$core$String* tmp242;
    panda$core$MutableString* $tmp28 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp28->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp28->refCount.value = 1;
    panda$core$MutableString$init($tmp28);
    result27 = $tmp28;
    $l30:;
    while (true) {
    {
        panda$io$Console$read$R$panda$core$Char8$Q(&$tmp33);
        c32 = $tmp33;
        if (((panda$core$Bit) { !c32.nonnull }).value) {
        {
            panda$core$Bit $tmp34 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result27->length, ((panda$core$Int64) { 0 }));
            if ($tmp34.value) {
            {
                {
                    tmp135 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result27));
                    return tmp135;
                }
            }
            }
            goto $l31;
        }
        }
        panda$core$Bit $tmp39;
        if (((panda$core$Bit) { c32.nonnull }).value) goto $l36; else goto $l37;
        $l36:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp40, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp41 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) c32.value), $tmp40);
        $tmp39 = $tmp41;
        goto $l38;
        $l37:;
        $tmp39 = ((panda$core$Bit) { false });
        goto $l38;
        $l38:;
        if ($tmp39.value) {
        {
            goto $l31;
        }
        }
        panda$core$MutableString$append$panda$core$Char8(result27, ((panda$core$Char8) c32.value));
    }
    }
    $l31:;
    {
        panda$core$String* $tmp43 = panda$core$MutableString$finish$R$panda$core$String(result27);
        tmp242 = $tmp43;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result27));
        return tmp242;
    }
}
void panda$io$Console$init(panda$io$Console* self) {
}
void panda$io$Console$cleanup(panda$io$Console* self) {
}

