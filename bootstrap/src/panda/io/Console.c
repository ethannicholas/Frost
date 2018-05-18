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
    panda$core$String* $tmp22;
    panda$core$String* $tmp24 = (($fn23) p_o->$class->vtable[0])(p_o);
    $tmp22 = $tmp24;
    panda$io$Console$print$panda$core$String($tmp22);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp25;
    panda$core$String* $tmp27 = (($fn26) p_o->$class->vtable[0])(p_o);
    $tmp25 = $tmp27;
    panda$io$Console$printLine$panda$core$String($tmp25);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
}
void panda$io$Console$printLine() {
    panda$io$Console$print$panda$core$String(&$s28);
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result32 = NULL;
    panda$core$MutableString* $tmp33;
    panda$core$MutableString* $tmp34;
    panda$core$Char8$nullable c38;
    panda$core$Char8$nullable $tmp39;
    panda$core$String* $returnValue41;
    panda$core$String* $tmp42;
    panda$core$Char8$nullable $tmp45;
    panda$core$Char8 $tmp50;
    panda$core$String* $tmp52;
    panda$core$String* $tmp53;
    int $tmp31;
    {
        panda$core$MutableString* $tmp35 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp35);
        $tmp34 = $tmp35;
        $tmp33 = $tmp34;
        result32 = $tmp33;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        $l36:;
        while (true) {
        {
            panda$io$Console$read$R$panda$core$Char8$Q(&$tmp39);
            c38 = $tmp39;
            if (((panda$core$Bit) { !c38.nonnull }).value) {
            {
                panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result32->length, ((panda$core$Int64) { 0 }));
                if ($tmp40.value) {
                {
                    $tmp42 = NULL;
                    $returnValue41 = $tmp42;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
                    $tmp31 = 0;
                    goto $l29;
                    $l43:;
                    return $returnValue41;
                }
                }
                goto $l37;
            }
            }
            $tmp45 = c38;
            panda$core$Bit $tmp49;
            if (((panda$core$Bit) { $tmp45.nonnull }).value) goto $l46; else goto $l47;
            $l46:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp50, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp51 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp45.value), $tmp50);
            $tmp49 = $tmp51;
            goto $l48;
            $l47:;
            $tmp49 = ((panda$core$Bit) { false });
            goto $l48;
            $l48:;
            if ($tmp49.value) {
            {
                goto $l37;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result32, ((panda$core$Char8) c38.value));
        }
        }
        $l37:;
        panda$core$String* $tmp54 = panda$core$MutableString$finish$R$panda$core$String(result32);
        $tmp53 = $tmp54;
        $tmp52 = $tmp53;
        $returnValue41 = $tmp52;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
        $tmp31 = 1;
        goto $l29;
        $l55:;
        return $returnValue41;
    }
    $l29:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result32));
    result32 = NULL;
    switch ($tmp31) {
        case 0: goto $l43;
        case 1: goto $l55;
    }
    $l57:;
}
void panda$io$Console$init(panda$io$Console* self) {
}
void panda$io$Console$cleanup(panda$io$Console* self) {
    int $tmp60;
    {
    }
    $tmp60 = -1;
    goto $l58;
    $l58:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp60) {
        case -1: goto $l61;
    }
    $l61:;
}

