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
typedef panda$core$Int64 (*$fn55)(panda$math$Random*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x6e\x64\x61\x64\x6f\x63\x2e\x50\x72\x6f\x74\x65\x63\x74\x6f\x72", 43, 8647705865568288660, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x42\x43\x44\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x2d\x2f\x2c\x2e", 66, 8332415192204060750, NULL };

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
    abort();
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$decode$panda$core$String$R$panda$core$String$Q(org$pandalanguage$pandac$pandadoc$Protector* self, panda$core$String* p_s) {
    panda$core$String* $returnValue19;
    panda$core$String* $tmp20;
    panda$core$Object* $tmp21;
    panda$core$Object* $tmp22 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->decodeMap, ((panda$collections$Key*) p_s));
    $tmp21 = $tmp22;
    $tmp20 = ((panda$core$String*) $tmp21);
    $returnValue19 = $tmp20;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
    panda$core$Panda$unref$panda$core$Object($tmp21);
    return $returnValue19;
}
panda$core$String* org$pandalanguage$pandac$pandadoc$Protector$randomToken$R$panda$core$String(org$pandalanguage$pandac$pandadoc$Protector* self) {
    panda$core$Int64 LENGTH27;
    panda$core$Int64 $tmp28;
    panda$core$String* SAFE_CHARS29 = NULL;
    panda$core$String* $tmp30;
    panda$core$MutableString* result32 = NULL;
    panda$core$MutableString* $tmp33;
    panda$core$MutableString* $tmp34;
    panda$core$Range$LTpanda$core$Int64$GT $tmp36;
    panda$core$Int64 $tmp37;
    panda$core$Bit $tmp38;
    panda$core$String* $returnValue64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    int $tmp26;
    {
        panda$core$Int64$init$builtin_int64(&$tmp28, 20);
        LENGTH27 = $tmp28;
        $tmp30 = &$s31;
        SAFE_CHARS29 = $tmp30;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp30));
        panda$core$MutableString* $tmp35 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp35);
        $tmp34 = $tmp35;
        $tmp33 = $tmp34;
        result32 = $tmp33;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Int64$init$builtin_int64(&$tmp37, 0);
        panda$core$Bit$init$builtin_bit(&$tmp38, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp36, $tmp37, LENGTH27, $tmp38);
        int64_t $tmp40 = $tmp36.min.value;
        panda$core$Int64 i39 = { $tmp40 };
        int64_t $tmp42 = $tmp36.max.value;
        bool $tmp43 = $tmp36.inclusive.value;
        if ($tmp43) goto $l50; else goto $l51;
        $l50:;
        if ($tmp40 <= $tmp42) goto $l44; else goto $l46;
        $l51:;
        if ($tmp40 < $tmp42) goto $l44; else goto $l46;
        $l44:;
        {
            panda$core$Int64 $tmp52 = panda$core$String$byteLength$R$panda$core$Int64(SAFE_CHARS29);
            ITable* $tmp53 = self->random->$class->itable;
            while ($tmp53->$class != (panda$core$Class*) &panda$math$Random$class) {
                $tmp53 = $tmp53->next;
            }
            $fn55 $tmp54 = $tmp53->methods[3];
            panda$core$Int64 $tmp56 = $tmp54(self->random, $tmp52);
            panda$core$Char32 $tmp57 = panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(SAFE_CHARS29, $tmp56);
            panda$core$MutableString$append$panda$core$Char32(result32, $tmp57);
        }
        $l47:;
        int64_t $tmp59 = $tmp42 - i39.value;
        if ($tmp43) goto $l60; else goto $l61;
        $l60:;
        if ((uint64_t) $tmp59 >= 1) goto $l58; else goto $l46;
        $l61:;
        if ((uint64_t) $tmp59 > 1) goto $l58; else goto $l46;
        $l58:;
        i39.value += 1;
        goto $l44;
        $l46:;
        panda$core$String* $tmp67 = panda$core$MutableString$finish$R$panda$core$String(result32);
        $tmp66 = $tmp67;
        $tmp65 = $tmp66;
        $returnValue64 = $tmp65;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
        $tmp26 = 0;
        goto $l24;
        $l68:;
        return $returnValue64;
    }
    $l24:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result32));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) SAFE_CHARS29));
    SAFE_CHARS29 = NULL;
    result32 = NULL;
    switch ($tmp26) {
        case 0: goto $l68;
    }
    $l70:;
    abort();
}
void org$pandalanguage$pandac$pandadoc$Protector$init(org$pandalanguage$pandac$pandadoc$Protector* self) {
    panda$collections$HashMap* $tmp71;
    panda$collections$HashMap* $tmp72;
    panda$collections$HashMap* $tmp74;
    panda$collections$HashMap* $tmp75;
    panda$math$Random* $tmp77;
    panda$math$Random* $tmp78;
    self->encodeMap = NULL;
    self->decodeMap = NULL;
    self->random = NULL;
    panda$collections$HashMap* $tmp73 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp73);
    $tmp72 = $tmp73;
    $tmp71 = $tmp72;
    self->encodeMap = $tmp71;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$collections$HashMap* $tmp76 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp76);
    $tmp75 = $tmp76;
    $tmp74 = $tmp75;
    self->decodeMap = $tmp74;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    panda$math$Random* $tmp79 = panda$math$Random$default$R$panda$math$Random();
    $tmp78 = $tmp79;
    $tmp77 = $tmp78;
    self->random = $tmp77;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
}
void org$pandalanguage$pandac$pandadoc$Protector$cleanup(org$pandalanguage$pandac$pandadoc$Protector* self) {
    int $tmp82;
    {
    }
    $tmp82 = -1;
    goto $l80;
    $l80:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp82) {
        case -1: goto $l83;
    }
    $l83:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->encodeMap));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->decodeMap));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->random));
}

