#include "panda/json/JSONParser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/json/Lexer.h"
#include "org/pandalanguage/json/Token.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/json/Token/Kind.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/Array.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/Key.h"
#include "panda/core/String/Index.h"
#include "panda/core/Real64.h"


static panda$core$String $s1;
panda$json$JSONParser$class_type panda$json$JSONParser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$json$JSONParser$cleanup, panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON, panda$json$JSONParser$next$R$org$pandalanguage$json$Token, panda$json$JSONParser$pushback$org$pandalanguage$json$Token, panda$json$JSONParser$peek$R$org$pandalanguage$json$Token, panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q, panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String, panda$json$JSONParser$array$R$panda$json$JSON, panda$json$JSONParser$object$R$panda$json$JSON, panda$json$JSONParser$string$R$panda$core$String, panda$json$JSONParser$node$R$panda$json$JSON} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -3529150264525428738, NULL };
static panda$core$String $s172 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON(panda$json$JSONParser* self, panda$core$String* p_json) {
    {
        panda$core$String* $tmp2 = self->source;
        panda$core$String* $tmp3 = p_json;
        self->source = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    org$pandalanguage$json$Lexer$start$panda$core$String(self->lexer, p_json);
    panda$json$JSON* $tmp7 = panda$json$JSONParser$node$R$panda$json$JSON(self);
    panda$json$JSON* $tmp6 = $tmp7;
    panda$json$JSON* $tmp5 = $tmp6;
    panda$json$JSON* $tmp4 = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    return $tmp4;
}
org$pandalanguage$json$Token panda$json$JSONParser$next$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$nullable result8;
    org$pandalanguage$json$Token result10;
    if (((panda$core$Bit) { self->pushbackToken.nonnull }).value) {
    {
        result8 = self->pushbackToken;
        self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
        org$pandalanguage$json$Token $tmp9 = ((org$pandalanguage$json$Token) result8.value);
        return $tmp9;
    }
    }
    org$pandalanguage$json$Token $tmp11 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(self->lexer);
    result10 = $tmp11;
    $l12:;
    panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result10.kind.$rawValue, ((panda$core$Int64) { 5 }));
    bool $tmp14 = $tmp15.value;
    if (!$tmp14) goto $l13;
    {
        org$pandalanguage$json$Token $tmp16 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(self->lexer);
        result10 = $tmp16;
    }
    goto $l12;
    $l13:;
    org$pandalanguage$json$Token $tmp17 = result10;
    return $tmp17;
}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    PANDA_ASSERT(((panda$core$Bit) { !self->pushbackToken.nonnull }).value);
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { p_token, true });
}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token result18;
    org$pandalanguage$json$Token $tmp19 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    result18 = $tmp19;
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, result18);
    org$pandalanguage$json$Token $tmp20 = result18;
    return $tmp20;
}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* self, org$pandalanguage$json$Token$Kind p_kind) {
    org$pandalanguage$json$Token token21;
    org$pandalanguage$json$Token $tmp22 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token21 = $tmp22;
    panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token21.kind.$rawValue, p_kind.$rawValue);
    if ($tmp23.value) {
    {
        org$pandalanguage$json$Token$nullable $tmp24 = ((org$pandalanguage$json$Token$nullable) { token21, true });
        return $tmp24;
    }
    }
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, token21);
    org$pandalanguage$json$Token$nullable $tmp25 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
    return $tmp25;
}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp29;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp29, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp30 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp29);
    panda$core$String* $tmp28 = $tmp30;
    panda$core$String* $tmp27 = $tmp28;
    panda$core$String* $tmp26 = $tmp27;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
    return $tmp26;
}
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp31;
    panda$collections$Array* result39;
    org$pandalanguage$json$Token$Kind $match$78_1347;
    panda$json$JSON* tmp150;
    org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp31, ((panda$core$Int64) { 12 }));
    org$pandalanguage$json$Token$nullable $tmp32 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp31);
    if (((panda$core$Bit) { $tmp32.nonnull }).value) {
    {
        panda$json$JSON* $tmp36 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
        panda$collections$ImmutableArray* $tmp38 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp38);
        panda$collections$ImmutableArray* $tmp37 = $tmp38;
        panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp36, ((panda$core$Int64) { 5 }), $tmp37);
        panda$json$JSON* $tmp35 = $tmp36;
        panda$json$JSON* $tmp34 = $tmp35;
        panda$json$JSON* $tmp33 = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        return $tmp33;
    }
    }
    panda$collections$Array* $tmp42 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp42);
    panda$collections$Array* $tmp41 = $tmp42;
    panda$collections$Array* $tmp40 = $tmp41;
    result39 = $tmp40;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    $l43:;
    while (true) {
    {
        panda$json$JSON* $tmp46 = panda$json$JSONParser$node$R$panda$json$JSON(self);
        panda$json$JSON* $tmp45 = $tmp46;
        panda$collections$Array$add$panda$collections$Array$T(result39, ((panda$core$Object*) $tmp45));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        {
            org$pandalanguage$json$Token $tmp48 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
            $match$78_1347 = $tmp48.kind;
            panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1347.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp49.value) {
            {
                {
                    panda$json$JSON* $tmp53 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                    panda$collections$ImmutableArray* $tmp55 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result39);
                    panda$collections$ImmutableArray* $tmp54 = $tmp55;
                    panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp53, ((panda$core$Int64) { 5 }), $tmp54);
                    panda$json$JSON* $tmp52 = $tmp53;
                    panda$json$JSON* $tmp51 = $tmp52;
                    tmp150 = $tmp51;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result39));
                    panda$json$JSON* $tmp56 = tmp150;
                    return $tmp56;
                }
            }
            }
            else {
            panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1347.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp57.value) {
            {
                goto $l43;
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
            }
        }
    }
    }
    $l44:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result39));
}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp58;
    panda$collections$HashMap* result66;
    panda$core$String* key72;
    org$pandalanguage$json$Token colon76;
    org$pandalanguage$json$Token$Kind $match$102_1381;
    panda$json$JSON* tmp284;
    panda$json$JSON* tmp390;
    org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp58, ((panda$core$Int64) { 10 }));
    org$pandalanguage$json$Token$nullable $tmp59 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp58);
    if (((panda$core$Bit) { $tmp59.nonnull }).value) {
    {
        panda$json$JSON* $tmp63 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
        panda$collections$ImmutableHashMap* $tmp65 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp65);
        panda$collections$ImmutableHashMap* $tmp64 = $tmp65;
        panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp63, ((panda$core$Int64) { 4 }), $tmp64);
        panda$json$JSON* $tmp62 = $tmp63;
        panda$json$JSON* $tmp61 = $tmp62;
        panda$json$JSON* $tmp60 = $tmp61;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
        return $tmp60;
    }
    }
    panda$collections$HashMap* $tmp69 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp69);
    panda$collections$HashMap* $tmp68 = $tmp69;
    panda$collections$HashMap* $tmp67 = $tmp68;
    result66 = $tmp67;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    $l70:;
    while (true) {
    {
        panda$core$String* $tmp75 = panda$json$JSONParser$string$R$panda$core$String(self);
        panda$core$String* $tmp74 = $tmp75;
        panda$core$String* $tmp73 = $tmp74;
        key72 = $tmp73;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        org$pandalanguage$json$Token $tmp77 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        colon76 = $tmp77;
        panda$core$Bit $tmp78 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(colon76.kind.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp78.value) {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$json$JSON* $tmp80 = panda$json$JSONParser$node$R$panda$json$JSON(self);
        panda$json$JSON* $tmp79 = $tmp80;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(result66, ((panda$collections$Key*) key72), ((panda$core$Object*) $tmp79));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
        {
            org$pandalanguage$json$Token $tmp82 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
            $match$102_1381 = $tmp82.kind;
            panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_1381.$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp83.value) {
            {
                {
                    panda$json$JSON* $tmp87 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                    panda$collections$ImmutableHashMap* $tmp89 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(result66);
                    panda$collections$ImmutableHashMap* $tmp88 = $tmp89;
                    panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp87, ((panda$core$Int64) { 4 }), $tmp88);
                    panda$json$JSON* $tmp86 = $tmp87;
                    panda$json$JSON* $tmp85 = $tmp86;
                    tmp284 = $tmp85;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) key72));
                    {
                        tmp390 = tmp284;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result66));
                        panda$json$JSON* $tmp91 = tmp390;
                        return $tmp91;
                    }
                }
            }
            }
            else {
            panda$core$Bit $tmp92 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_1381.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp92.value) {
            {
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) key72));
                    goto $l70;
                }
            }
            }
            else {
            {
                PANDA_ASSERT(((panda$core$Bit) { false }).value);
            }
            }
            }
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) key72));
    }
    }
    $l71:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result66));
}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token93;
    panda$core$String* s96;
    panda$core$String* tmp4100;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp103;
    org$pandalanguage$json$Token $tmp94 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token93 = $tmp94;
    panda$core$Bit $tmp95 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(token93.kind.$rawValue, ((panda$core$Int64) { 2 }));
    if ($tmp95.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp99 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token93);
    panda$core$String* $tmp98 = $tmp99;
    panda$core$String* $tmp97 = $tmp98;
    s96 = $tmp97;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp97));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    {
        panda$core$String$Index $tmp104 = panda$core$String$start$R$panda$core$String$Index(s96);
        panda$core$String$Index $tmp105 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s96, $tmp104);
        panda$core$String$Index $tmp106 = panda$core$String$end$R$panda$core$String$Index(s96);
        panda$core$String$Index $tmp107 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s96, $tmp106);
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp103, $tmp105, $tmp107, ((panda$core$Bit) { false }));
        panda$core$String* $tmp108 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s96, $tmp103);
        panda$core$String* $tmp102 = $tmp108;
        panda$core$String* $tmp101 = $tmp102;
        tmp4100 = $tmp101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s96));
        panda$core$String* $tmp109 = tmp4100;
        return $tmp109;
    }
}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token110;
    org$pandalanguage$json$Token$Kind $match$126_9112;
    panda$core$String* s124;
    panda$json$JSON* tmp5128;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp133;
    org$pandalanguage$json$Token $tmp111 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token110 = $tmp111;
    {
        $match$126_9112 = token110.kind;
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp113.value) {
        {
            panda$json$JSON* $tmp117 = panda$json$JSONParser$object$R$panda$json$JSON(self);
            panda$json$JSON* $tmp116 = $tmp117;
            panda$json$JSON* $tmp115 = $tmp116;
            panda$json$JSON* $tmp114 = $tmp115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
            return $tmp114;
        }
        }
        else {
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp118.value) {
        {
            panda$json$JSON* $tmp122 = panda$json$JSONParser$array$R$panda$json$JSON(self);
            panda$json$JSON* $tmp121 = $tmp122;
            panda$json$JSON* $tmp120 = $tmp121;
            panda$json$JSON* $tmp119 = $tmp120;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
            return $tmp119;
        }
        }
        else {
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp123.value) {
        {
            panda$core$String* $tmp127 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token110);
            panda$core$String* $tmp126 = $tmp127;
            panda$core$String* $tmp125 = $tmp126;
            s124 = $tmp125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
            {
                panda$json$JSON* $tmp131 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                panda$core$String$Index $tmp134 = panda$core$String$start$R$panda$core$String$Index(s124);
                panda$core$String$Index $tmp135 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s124, $tmp134);
                panda$core$String$Index $tmp136 = panda$core$String$end$R$panda$core$String$Index(s124);
                panda$core$String$Index $tmp137 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s124, $tmp136);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp133, $tmp135, $tmp137, ((panda$core$Bit) { false }));
                panda$core$String* $tmp138 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s124, $tmp133);
                panda$core$String* $tmp132 = $tmp138;
                panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp131, ((panda$core$Int64) { 2 }), $tmp132);
                panda$json$JSON* $tmp130 = $tmp131;
                panda$json$JSON* $tmp129 = $tmp130;
                tmp5128 = $tmp129;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s124));
                panda$json$JSON* $tmp139 = tmp5128;
                return $tmp139;
            }
        }
        }
        else {
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp140.value) {
        {
            panda$json$JSON* $tmp144 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp146 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token110);
            panda$core$String* $tmp145 = $tmp146;
            panda$core$Int64$nullable $tmp147 = panda$core$String$convert$R$panda$core$Int64$Q($tmp145);
            panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp144, ((panda$core$Int64) { 0 }), ((panda$core$Int64) $tmp147.value));
            panda$json$JSON* $tmp143 = $tmp144;
            panda$json$JSON* $tmp142 = $tmp143;
            panda$json$JSON* $tmp141 = $tmp142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
            return $tmp141;
        }
        }
        else {
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp148.value) {
        {
            panda$json$JSON* $tmp152 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp154 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token110);
            panda$core$String* $tmp153 = $tmp154;
            panda$core$Real64$nullable $tmp155 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp153);
            panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp152, ((panda$core$Int64) { 1 }), ((panda$core$Real64) $tmp155.value));
            panda$json$JSON* $tmp151 = $tmp152;
            panda$json$JSON* $tmp150 = $tmp151;
            panda$json$JSON* $tmp149 = $tmp150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
            return $tmp149;
        }
        }
        else {
        panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp156.value) {
        {
            panda$json$JSON* $tmp160 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp160, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { true }));
            panda$json$JSON* $tmp159 = $tmp160;
            panda$json$JSON* $tmp158 = $tmp159;
            panda$json$JSON* $tmp157 = $tmp158;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp159));
            return $tmp157;
        }
        }
        else {
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp161.value) {
        {
            panda$json$JSON* $tmp165 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp165, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { false }));
            panda$json$JSON* $tmp164 = $tmp165;
            panda$json$JSON* $tmp163 = $tmp164;
            panda$json$JSON* $tmp162 = $tmp163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            return $tmp162;
        }
        }
        else {
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9112.$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp166.value) {
        {
            panda$json$JSON* $tmp170 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64($tmp170, ((panda$core$Int64) { 6 }));
            panda$json$JSON* $tmp169 = $tmp170;
            panda$json$JSON* $tmp168 = $tmp169;
            panda$json$JSON* $tmp167 = $tmp168;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
            return $tmp167;
        }
        }
        else {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
}
void panda$json$JSONParser$init(panda$json$JSONParser* self) {
    self->source = NULL;
    self->lexer = NULL;
    panda$core$String* $tmp171 = &$s172;
    self->source = $tmp171;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp171));
    org$pandalanguage$json$Lexer* $tmp175 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
    org$pandalanguage$json$Lexer$init($tmp175);
    org$pandalanguage$json$Lexer* $tmp174 = $tmp175;
    org$pandalanguage$json$Lexer* $tmp173 = $tmp174;
    self->lexer = $tmp173;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
}

