#include "panda/io/Console.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$io$Console$class_type panda$io$Console$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$Console$cleanup} };

typedef panda$core$String* (*$fn3)(panda$core$Object*);
typedef panda$core$String* (*$fn6)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x43\x6f\x6e\x73\x6f\x6c\x65", 16, 2336552278051400340, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void panda$io$Console$printLine$panda$core$String(panda$core$String* p_s) {
    panda$io$Console$print$panda$core$String(p_s);
    panda$io$Console$printLine();
}
void panda$io$Console$print$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp4 = (($fn3) p_o->$class->vtable[0])(p_o);
    $tmp2 = $tmp4;
    panda$io$Console$print$panda$core$String($tmp2);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
}
void panda$io$Console$printLine$panda$core$Object(panda$core$Object* p_o) {
    panda$core$String* $tmp5;
    panda$core$String* $tmp7 = (($fn6) p_o->$class->vtable[0])(p_o);
    $tmp5 = $tmp7;
    panda$io$Console$printLine$panda$core$String($tmp5);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
}
void panda$io$Console$printLine() {
    panda$io$Console$print$panda$core$String(&$s8);
}
panda$core$String* panda$io$Console$readLine$R$panda$core$String$Q() {
    panda$core$MutableString* result12 = NULL;
    panda$core$MutableString* $tmp13;
    panda$core$MutableString* $tmp14;
    panda$core$Char8$nullable c18;
    panda$core$Char8$nullable $tmp19;
    panda$core$String* $returnValue21;
    panda$core$String* $tmp22;
    panda$core$Char8$nullable $tmp25;
    panda$core$Char8 $tmp30;
    panda$core$String* $tmp32;
    panda$core$String* $tmp33;
    int $tmp11;
    {
        panda$core$MutableString* $tmp15 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp15);
        $tmp14 = $tmp15;
        $tmp13 = $tmp14;
        result12 = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
        $l16:;
        while (true) {
        {
            panda$io$Console$read$R$panda$core$Char8$Q(&$tmp19);
            c18 = $tmp19;
            if (((panda$core$Bit) { !c18.nonnull }).value) {
            {
                panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result12->length, ((panda$core$Int64) { 0 }));
                if ($tmp20.value) {
                {
                    $tmp22 = NULL;
                    $returnValue21 = $tmp22;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
                    $tmp11 = 0;
                    goto $l9;
                    $l23:;
                    return $returnValue21;
                }
                }
                goto $l17;
            }
            }
            $tmp25 = c18;
            panda$core$Bit $tmp29;
            if (((panda$core$Bit) { $tmp25.nonnull }).value) goto $l26; else goto $l27;
            $l26:;
            panda$core$Char8$init$panda$core$UInt8(&$tmp30, ((panda$core$UInt8) { 10 }));
            panda$core$Bit $tmp31 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp25.value), $tmp30);
            $tmp29 = $tmp31;
            goto $l28;
            $l27:;
            $tmp29 = ((panda$core$Bit) { false });
            goto $l28;
            $l28:;
            if ($tmp29.value) {
            {
                goto $l17;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result12, ((panda$core$Char8) c18.value));
        }
        }
        $l17:;
        panda$core$String* $tmp34 = panda$core$MutableString$finish$R$panda$core$String(result12);
        $tmp33 = $tmp34;
        $tmp32 = $tmp33;
        $returnValue21 = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
        $tmp11 = 1;
        goto $l9;
        $l35:;
        return $returnValue21;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result12));
    result12 = NULL;
    switch ($tmp11) {
        case 0: goto $l23;
        case 1: goto $l35;
    }
    $l37:;
}
void panda$io$Console$init(panda$io$Console* self) {
}
void panda$io$Console$cleanup(panda$io$Console* self) {
    int $tmp40;
    {
    }
    $tmp40 = -1;
    goto $l38;
    $l38:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp40) {
        case -1: goto $l41;
    }
    $l41:;
}






