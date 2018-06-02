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

void panda$io$Console$init(panda$io$Console* self) {
}
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
    panda$core$Int64 $tmp20;
    panda$core$String* $returnValue22;
    panda$core$String* $tmp23;
    panda$core$Char8$nullable $tmp26;
    panda$core$Char8 $tmp31;
    panda$core$UInt8 $tmp32;
    panda$core$Bit $tmp34;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
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
                panda$core$Int64$init$builtin_int64(&$tmp20, 0);
                panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result12->length, $tmp20);
                if ($tmp21.value) {
                {
                    $tmp23 = NULL;
                    $returnValue22 = $tmp23;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
                    $tmp11 = 0;
                    goto $l9;
                    $l24:;
                    return $returnValue22;
                }
                }
                goto $l17;
            }
            }
            $tmp26 = c18;
            panda$core$Bit $tmp30;
            if (((panda$core$Bit) { $tmp26.nonnull }).value) goto $l27; else goto $l28;
            $l27:;
            panda$core$UInt8$init$builtin_uint8(&$tmp32, 10);
            panda$core$Char8$init$panda$core$UInt8(&$tmp31, $tmp32);
            panda$core$Bit $tmp33 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(((panda$core$Char8) $tmp26.value), $tmp31);
            $tmp30 = $tmp33;
            goto $l29;
            $l28:;
            panda$core$Bit$init$builtin_bit(&$tmp34, false);
            $tmp30 = $tmp34;
            goto $l29;
            $l29:;
            if ($tmp30.value) {
            {
                goto $l17;
            }
            }
            panda$core$MutableString$append$panda$core$Char8(result12, ((panda$core$Char8) c18.value));
        }
        }
        $l17:;
        panda$core$String* $tmp37 = panda$core$MutableString$finish$R$panda$core$String(result12);
        $tmp36 = $tmp37;
        $tmp35 = $tmp36;
        $returnValue22 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        $tmp11 = 1;
        goto $l9;
        $l38:;
        return $returnValue22;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result12));
    result12 = NULL;
    switch ($tmp11) {
        case 0: goto $l24;
        case 1: goto $l38;
    }
    $l40:;
    abort();
}
void panda$io$Console$cleanup(panda$io$Console* self) {
    int $tmp43;
    {
    }
    $tmp43 = -1;
    goto $l41;
    $l41:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp43) {
        case -1: goto $l44;
    }
    $l44:;
}





