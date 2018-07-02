#include "org/pandalanguage/pandac/pandadoc/Protector.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Char32.h"
#include "panda/math/Random.h"

static panda$core$String $s1;
org$pandalanguage$pandac$pandadoc$Protector$class_type org$pandalanguage$pandac$pandadoc$Protector$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Protector$cleanup, org$pandalanguage$pandac$pandadoc$Protector$encode$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$pandadoc$Protector$decode$panda$core$String$R$panda$core$String$Q, org$pandalanguage$pandac$pandadoc$Protector$randomToken$R$panda$core$String} };

typedef panda$core$String* (*$fn12)(org$pandalanguage$pandac$pandadoc$Protector*);
typedef panda$core$Int64 (*$fn59)(panda$math$Random*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 43, 8647705865568288660, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x72\x6b\x64\x6f\x77\x6e\x2e\x70\x61\x6e\x64\x61", 14, -6276282637946974086, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$encode$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* self, panda$core$String* p_s) {
    panda$core$String* result5 = NULL;
    panda$core$String* $tmp6;
    panda$core$Object* $tmp7;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    panda$core$String* $returnValue14;
    panda$core$String* $tmp15;
    int $tmp4;
    {
        panda$core$Object* $tmp8 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->encodeMap, ((panda$collections$Key*) p_s));
        $tmp7 = $tmp8;
        $tmp6 = ((panda$core$String*) $tmp7);
        result5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object($tmp7);
        if (((panda$core$Bit) { result5 == NULL }).value) {
        {
            {
                $tmp9 = result5;
                panda$core$String* $tmp13 = (($fn12) self->$class->vtable[4])(self);
                $tmp11 = $tmp13;
                $tmp10 = $tmp11;
                result5 = $tmp10;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
            }
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->encodeMap, ((panda$collections$Key*) p_s), ((panda$core$Object*) result5));
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->decodeMap, ((panda$collections$Key*) result5), ((panda$core$Object*) p_s));
        }
        }
        $tmp15 = result5;
        $returnValue14 = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        $tmp4 = 0;
        goto $l2;
        $l16:;
        return $returnValue14;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result5));
    result5 = NULL;
    switch ($tmp4) {
        case 0: goto $l16;
    }
    $l18:;
    if (false) goto $l19; else goto $l20;
    $l20:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s21, (panda$core$Int64) { 58 }, &$s22);
    abort();
    $l19:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$decode$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$Protector* self, panda$core$String* p_s) {
    panda$core$String* $returnValue23;
    panda$core$String* $tmp24;
    panda$core$Object* $tmp25;
    panda$core$Object* $tmp26 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->decodeMap, ((panda$collections$Key*) p_s));
    $tmp25 = $tmp26;
    $tmp24 = ((panda$core$String*) $tmp25);
    $returnValue23 = $tmp24;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
    panda$core$Panda$unref$panda$core$Object($tmp25);
    return $returnValue23;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$randomToken$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* self) {
    panda$core$Int64 LENGTH31;
    panda$core$Int64 $tmp32;
    panda$core$String* SAFE_CHARS33 = NULL;
    panda$core$String* $tmp34;
    panda$core$MutableString* result36 = NULL;
    panda$core$MutableString* $tmp37;
    panda$core$MutableString* $tmp38;
    panda$core$Range$LTpanda$core$Int64$GT $tmp40;
    panda$core$Int64 $tmp41;
    panda$core$Bit $tmp42;
    panda$core$String* $returnValue68;
    panda$core$String* $tmp69;
    panda$core$String* $tmp70;
    int $tmp30;
    {
        panda$core$Int64$init$builtin_int64(&$tmp32, 20);
        LENGTH31 = $tmp32;
        $tmp34 = &$s35;
        SAFE_CHARS33 = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$MutableString* $tmp39 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp39);
        $tmp38 = $tmp39;
        $tmp37 = $tmp38;
        result36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Int64$init$builtin_int64(&$tmp41, 0);
        panda$core$Bit$init$builtin_bit(&$tmp42, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp40, $tmp41, LENGTH31, $tmp42);
        int64_t $tmp44 = $tmp40.min.value;
        panda$core$Int64 i43 = { $tmp44 };
        int64_t $tmp46 = $tmp40.max.value;
        bool $tmp47 = $tmp40.inclusive.value;
        if ($tmp47) goto $l54; else goto $l55;
        $l54:;
        if ($tmp44 <= $tmp46) goto $l48; else goto $l50;
        $l55:;
        if ($tmp44 < $tmp46) goto $l48; else goto $l50;
        $l48:;
        {
            panda$core$Int64 $tmp56 = panda$core$String$byteLength$R$panda$core$Int64(SAFE_CHARS33);
            ITable* $tmp57 = self->random->$class->itable;
            while ($tmp57->$class != (panda$core$Class*) &panda$math$Random$class) {
                $tmp57 = $tmp57->next;
            }
            $fn59 $tmp58 = $tmp57->methods[3];
            panda$core$Int64 $tmp60 = $tmp58(self->random, $tmp56);
            panda$core$Char32 $tmp61 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(SAFE_CHARS33, $tmp60);
            panda$core$MutableString$append$panda$core$Char32(result36, $tmp61);
        }
        $l51:;
        int64_t $tmp63 = $tmp46 - i43.value;
        if ($tmp47) goto $l64; else goto $l65;
        $l64:;
        if ((uint64_t) $tmp63 >= 1) goto $l62; else goto $l50;
        $l65:;
        if ((uint64_t) $tmp63 > 1) goto $l62; else goto $l50;
        $l62:;
        i43.value += 1;
        goto $l48;
        $l50:;
        panda$core$String* $tmp71 = panda$core$MutableString$finish$R$panda$core$String(result36);
        $tmp70 = $tmp71;
        $tmp69 = $tmp70;
        $returnValue68 = $tmp69;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
        $tmp30 = 0;
        goto $l28;
        $l72:;
        return $returnValue68;
    }
    $l28:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result36));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) SAFE_CHARS33));
    SAFE_CHARS33 = NULL;
    result36 = NULL;
    switch ($tmp30) {
        case 0: goto $l72;
    }
    $l74:;
    if (false) goto $l75; else goto $l76;
    $l76:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s77, (panda$core$Int64) { 72 }, &$s78);
    abort();
    $l75:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Protector$init(org$pandalanguage$pandac$pandadoc$Protector* self) {
    panda$collections$HashMap* $tmp79;
    panda$collections$HashMap* $tmp80;
    panda$collections$HashMap* $tmp82;
    panda$collections$HashMap* $tmp83;
    panda$math$Random* $tmp85;
    panda$math$Random* $tmp86;
    self->encodeMap = NULL;
    self->decodeMap = NULL;
    self->random = NULL;
    panda$collections$HashMap* $tmp81 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp81);
    $tmp80 = $tmp81;
    $tmp79 = $tmp80;
    self->encodeMap = $tmp79;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$collections$HashMap* $tmp84 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp84);
    $tmp83 = $tmp84;
    $tmp82 = $tmp83;
    self->decodeMap = $tmp82;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$math$Random* $tmp87 = panda$math$Random$default$R$panda$math$Random();
    $tmp86 = $tmp87;
    $tmp85 = $tmp86;
    self->random = $tmp85;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
}
void org$pandalanguage$pandac$pandadoc$Protector$cleanup(org$pandalanguage$pandac$pandadoc$Protector* self) {
    int $tmp90;
    {
    }
    $tmp90 = -1;
    goto $l88;
    $l88:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp90) {
        case -1: goto $l91;
    }
    $l91:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->encodeMap));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->decodeMap));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->random));
}

