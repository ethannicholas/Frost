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
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON(panda$json$JSONParser* self, panda$core$String* p_json) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    panda$json$JSON* $finallyReturn3;
    panda$json$JSON* $tmp5;
    panda$json$JSON* $tmp6;
    {
        $tmp2 = self->source;
        $tmp3 = p_json;
        self->source = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    org$pandalanguage$json$Lexer$start$panda$core$String(self->lexer, p_json);
    panda$json$JSON* $tmp7 = panda$json$JSONParser$node$R$panda$json$JSON(self);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    $finallyReturn3 = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    return $finallyReturn3;
}
org$pandalanguage$json$Token panda$json$JSONParser$next$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$nullable result9;
    org$pandalanguage$json$Token $finallyReturn9;
    org$pandalanguage$json$Token result12;
    org$pandalanguage$json$Token $finallyReturn18;
    if (((panda$core$Bit) { self->pushbackToken.nonnull }).value) {
    {
        result9 = self->pushbackToken;
        self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
        $finallyReturn9 = ((org$pandalanguage$json$Token) result9.value);
        return $finallyReturn9;
    }
    }
    org$pandalanguage$json$Token $tmp13 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(self->lexer);
    result12 = $tmp13;
    $l14:;
    panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result12.kind.$rawValue, ((panda$core$Int64) { 5 }));
    bool $tmp16 = $tmp17.value;
    if (!$tmp16) goto $l15;
    {
        org$pandalanguage$json$Token $tmp18 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(self->lexer);
        result12 = $tmp18;
    }
    goto $l14;
    $l15:;
    $finallyReturn18 = result12;
    return $finallyReturn18;
}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    PANDA_ASSERT(((panda$core$Bit) { !self->pushbackToken.nonnull }).value);
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { p_token, true });
}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token result21;
    org$pandalanguage$json$Token $finallyReturn22;
    org$pandalanguage$json$Token $tmp22 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    result21 = $tmp22;
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, result21);
    $finallyReturn22 = result21;
    return $finallyReturn22;
}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* self, org$pandalanguage$json$Token$Kind p_kind) {
    org$pandalanguage$json$Token token25;
    org$pandalanguage$json$Token$nullable $finallyReturn27;
    org$pandalanguage$json$Token$nullable $finallyReturn29;
    org$pandalanguage$json$Token $tmp26 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token25 = $tmp26;
    panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token25.kind.$rawValue, p_kind.$rawValue);
    if ($tmp27.value) {
    {
        $finallyReturn27 = ((org$pandalanguage$json$Token$nullable) { token25, true });
        return $finallyReturn27;
    }
    }
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, token25);
    $finallyReturn29 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
    return $finallyReturn29;
}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    panda$core$String* $finallyReturn31;
    panda$core$String* $tmp33;
    panda$core$String* $tmp34;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp35;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp35, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp36 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp35);
    $tmp34 = $tmp36;
    $tmp33 = $tmp34;
    $finallyReturn31 = $tmp33;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    return $finallyReturn31;
}
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp41;
    panda$json$JSON* $finallyReturn42;
    panda$json$JSON* $tmp44;
    panda$json$JSON* $tmp45;
    panda$collections$ImmutableArray* $tmp47;
    panda$collections$Array* result51 = NULL;
    panda$collections$Array* $tmp52;
    panda$collections$Array* $tmp53;
    panda$json$JSON* $tmp57;
    org$pandalanguage$json$Token$Kind $match$78_1359;
    panda$json$JSON* $finallyReturn61;
    panda$json$JSON* $tmp63;
    panda$json$JSON* $tmp64;
    panda$collections$ImmutableArray* $tmp66;
    int $tmp40;
    {
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp41, ((panda$core$Int64) { 12 }));
        org$pandalanguage$json$Token$nullable $tmp42 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp41);
        if (((panda$core$Bit) { $tmp42.nonnull }).value) {
        {
            panda$json$JSON* $tmp46 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$collections$ImmutableArray* $tmp48 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp48);
            $tmp47 = $tmp48;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp46, ((panda$core$Int64) { 5 }), $tmp47);
            $tmp45 = $tmp46;
            $tmp44 = $tmp45;
            $finallyReturn42 = $tmp44;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
            $tmp40 = 0;
            goto $l38;
            $l49:;
            return $finallyReturn42;
        }
        }
        panda$collections$Array* $tmp54 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp54);
        $tmp53 = $tmp54;
        $tmp52 = $tmp53;
        result51 = $tmp52;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
        $l55:;
        while (true) {
        {
            panda$json$JSON* $tmp58 = panda$json$JSONParser$node$R$panda$json$JSON(self);
            $tmp57 = $tmp58;
            panda$collections$Array$add$panda$collections$Array$T(result51, ((panda$core$Object*) $tmp57));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
            {
                org$pandalanguage$json$Token $tmp60 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                $match$78_1359 = $tmp60.kind;
                panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1359.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp61.value) {
                {
                    panda$json$JSON* $tmp65 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                    panda$collections$ImmutableArray* $tmp67 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result51);
                    $tmp66 = $tmp67;
                    panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp65, ((panda$core$Int64) { 5 }), $tmp66);
                    $tmp64 = $tmp65;
                    $tmp63 = $tmp64;
                    $finallyReturn61 = $tmp63;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                    $tmp40 = 1;
                    goto $l38;
                    $l68:;
                    return $finallyReturn61;
                }
                }
                else {
                panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1359.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp70.value) {
                {
                    goto $l55;
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
        $l56:;
    }
    $tmp40 = -1;
    goto $l38;
    $l38:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result51));
    result51 = NULL;
    switch ($tmp40) {
        case -1: goto $l71;
        case 1: goto $l68;
        case 0: goto $l49;
    }
    $l71:;
}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp75;
    panda$json$JSON* $finallyReturn76;
    panda$json$JSON* $tmp78;
    panda$json$JSON* $tmp79;
    panda$collections$ImmutableHashMap* $tmp81;
    panda$collections$HashMap* result85 = NULL;
    panda$collections$HashMap* $tmp86;
    panda$collections$HashMap* $tmp87;
    panda$core$String* key94 = NULL;
    panda$core$String* $tmp95;
    panda$core$String* $tmp96;
    org$pandalanguage$json$Token colon98;
    panda$json$JSON* $tmp101;
    org$pandalanguage$json$Token$Kind $match$102_13103;
    panda$json$JSON* $finallyReturn105;
    panda$json$JSON* $tmp107;
    panda$json$JSON* $tmp108;
    panda$collections$ImmutableHashMap* $tmp110;
    int $tmp74;
    {
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp75, ((panda$core$Int64) { 10 }));
        org$pandalanguage$json$Token$nullable $tmp76 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp75);
        if (((panda$core$Bit) { $tmp76.nonnull }).value) {
        {
            panda$json$JSON* $tmp80 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$collections$ImmutableHashMap* $tmp82 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
            panda$collections$ImmutableHashMap$init($tmp82);
            $tmp81 = $tmp82;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp80, ((panda$core$Int64) { 4 }), $tmp81);
            $tmp79 = $tmp80;
            $tmp78 = $tmp79;
            $finallyReturn76 = $tmp78;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
            $tmp74 = 0;
            goto $l72;
            $l83:;
            return $finallyReturn76;
        }
        }
        panda$collections$HashMap* $tmp88 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init($tmp88);
        $tmp87 = $tmp88;
        $tmp86 = $tmp87;
        result85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        $l89:;
        while (true) {
        {
            int $tmp93;
            {
                panda$core$String* $tmp97 = panda$json$JSONParser$string$R$panda$core$String(self);
                $tmp96 = $tmp97;
                $tmp95 = $tmp96;
                key94 = $tmp95;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
                org$pandalanguage$json$Token $tmp99 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                colon98 = $tmp99;
                panda$core$Bit $tmp100 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(colon98.kind.$rawValue, ((panda$core$Int64) { 14 }));
                if ($tmp100.value) {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
                panda$json$JSON* $tmp102 = panda$json$JSONParser$node$R$panda$json$JSON(self);
                $tmp101 = $tmp102;
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(result85, ((panda$collections$Key*) key94), ((panda$core$Object*) $tmp101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
                {
                    org$pandalanguage$json$Token $tmp104 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                    $match$102_13103 = $tmp104.kind;
                    panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13103.$rawValue, ((panda$core$Int64) { 10 }));
                    if ($tmp105.value) {
                    {
                        panda$json$JSON* $tmp109 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                        panda$collections$ImmutableHashMap* $tmp111 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(result85);
                        $tmp110 = $tmp111;
                        panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp109, ((panda$core$Int64) { 4 }), $tmp110);
                        $tmp108 = $tmp109;
                        $tmp107 = $tmp108;
                        $finallyReturn105 = $tmp107;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
                        $tmp93 = 0;
                        goto $l91;
                        $l112:;
                        $tmp74 = 1;
                        goto $l72;
                        $l113:;
                        return $finallyReturn105;
                    }
                    }
                    else {
                    panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13103.$rawValue, ((panda$core$Int64) { 13 }));
                    if ($tmp115.value) {
                    {
                        $tmp93 = 1;
                        goto $l91;
                        $l116:;
                        goto $l89;
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
            $tmp93 = -1;
            goto $l91;
            $l91:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) key94));
            key94 = NULL;
            switch ($tmp93) {
                case -1: goto $l117;
                case 0: goto $l112;
                case 1: goto $l116;
            }
            $l117:;
        }
        }
        $l90:;
    }
    $tmp74 = -1;
    goto $l72;
    $l72:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result85));
    result85 = NULL;
    switch ($tmp74) {
        case -1: goto $l118;
        case 0: goto $l83;
        case 1: goto $l113;
    }
    $l118:;
}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token122;
    panda$core$String* s125 = NULL;
    panda$core$String* $tmp126;
    panda$core$String* $tmp127;
    panda$core$String* $finallyReturn128;
    panda$core$String* $tmp130;
    panda$core$String* $tmp131;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp132;
    int $tmp121;
    {
        org$pandalanguage$json$Token $tmp123 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        token122 = $tmp123;
        panda$core$Bit $tmp124 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(token122.kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp124.value) {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp128 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token122);
        $tmp127 = $tmp128;
        $tmp126 = $tmp127;
        s125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
        panda$core$String$Index $tmp133 = panda$core$String$start$R$panda$core$String$Index(s125);
        panda$core$String$Index $tmp134 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s125, $tmp133);
        panda$core$String$Index $tmp135 = panda$core$String$end$R$panda$core$String$Index(s125);
        panda$core$String$Index $tmp136 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s125, $tmp135);
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp132, $tmp134, $tmp136, ((panda$core$Bit) { false }));
        panda$core$String* $tmp137 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s125, $tmp132);
        $tmp131 = $tmp137;
        $tmp130 = $tmp131;
        $finallyReturn128 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
        $tmp121 = 0;
        goto $l119;
        $l138:;
        return $finallyReturn128;
    }
    $l119:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s125));
    s125 = NULL;
    switch ($tmp121) {
        case 0: goto $l138;
    }
    $l140:;
}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token141;
    org$pandalanguage$json$Token$Kind $match$126_9143;
    panda$json$JSON* $finallyReturn144;
    panda$json$JSON* $tmp146;
    panda$json$JSON* $tmp147;
    panda$json$JSON* $finallyReturn150;
    panda$json$JSON* $tmp152;
    panda$json$JSON* $tmp153;
    panda$core$String* s160 = NULL;
    panda$core$String* $tmp161;
    panda$core$String* $tmp162;
    panda$json$JSON* $finallyReturn163;
    panda$json$JSON* $tmp165;
    panda$json$JSON* $tmp166;
    panda$core$String* $tmp168;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp169;
    panda$json$JSON* $finallyReturn178;
    panda$json$JSON* $tmp180;
    panda$json$JSON* $tmp181;
    panda$core$String* $tmp183;
    panda$json$JSON* $finallyReturn187;
    panda$json$JSON* $tmp189;
    panda$json$JSON* $tmp190;
    panda$core$String* $tmp192;
    panda$json$JSON* $finallyReturn196;
    panda$json$JSON* $tmp198;
    panda$json$JSON* $tmp199;
    panda$json$JSON* $finallyReturn202;
    panda$json$JSON* $tmp204;
    panda$json$JSON* $tmp205;
    panda$json$JSON* $finallyReturn208;
    panda$json$JSON* $tmp210;
    panda$json$JSON* $tmp211;
    org$pandalanguage$json$Token $tmp142 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token141 = $tmp142;
    {
        $match$126_9143 = token141.kind;
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp144.value) {
        {
            panda$json$JSON* $tmp148 = panda$json$JSONParser$object$R$panda$json$JSON(self);
            $tmp147 = $tmp148;
            $tmp146 = $tmp147;
            $finallyReturn144 = $tmp146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
            return $finallyReturn144;
        }
        }
        else {
        panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp150.value) {
        {
            panda$json$JSON* $tmp154 = panda$json$JSONParser$array$R$panda$json$JSON(self);
            $tmp153 = $tmp154;
            $tmp152 = $tmp153;
            $finallyReturn150 = $tmp152;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
            return $finallyReturn150;
        }
        }
        else {
        panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp156.value) {
        {
            int $tmp159;
            {
                panda$core$String* $tmp163 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token141);
                $tmp162 = $tmp163;
                $tmp161 = $tmp162;
                s160 = $tmp161;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
                panda$json$JSON* $tmp167 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                panda$core$String$Index $tmp170 = panda$core$String$start$R$panda$core$String$Index(s160);
                panda$core$String$Index $tmp171 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s160, $tmp170);
                panda$core$String$Index $tmp172 = panda$core$String$end$R$panda$core$String$Index(s160);
                panda$core$String$Index $tmp173 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s160, $tmp172);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp169, $tmp171, $tmp173, ((panda$core$Bit) { false }));
                panda$core$String* $tmp174 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s160, $tmp169);
                $tmp168 = $tmp174;
                panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp167, ((panda$core$Int64) { 2 }), $tmp168);
                $tmp166 = $tmp167;
                $tmp165 = $tmp166;
                $finallyReturn163 = $tmp165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
                $tmp159 = 0;
                goto $l157;
                $l175:;
                return $finallyReturn163;
            }
            $l157:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s160));
            s160 = NULL;
            switch ($tmp159) {
                case 0: goto $l175;
            }
            $l177:;
        }
        }
        else {
        panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp178.value) {
        {
            panda$json$JSON* $tmp182 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp184 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token141);
            $tmp183 = $tmp184;
            panda$core$Int64$nullable $tmp185 = panda$core$String$convert$R$panda$core$Int64$Q($tmp183);
            panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp182, ((panda$core$Int64) { 0 }), ((panda$core$Int64) $tmp185.value));
            $tmp181 = $tmp182;
            $tmp180 = $tmp181;
            $finallyReturn178 = $tmp180;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
            return $finallyReturn178;
        }
        }
        else {
        panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp187.value) {
        {
            panda$json$JSON* $tmp191 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp193 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token141);
            $tmp192 = $tmp193;
            panda$core$Real64$nullable $tmp194 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp192);
            panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp191, ((panda$core$Int64) { 1 }), ((panda$core$Real64) $tmp194.value));
            $tmp190 = $tmp191;
            $tmp189 = $tmp190;
            $finallyReturn187 = $tmp189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp192));
            return $finallyReturn187;
        }
        }
        else {
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp196.value) {
        {
            panda$json$JSON* $tmp200 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp200, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { true }));
            $tmp199 = $tmp200;
            $tmp198 = $tmp199;
            $finallyReturn196 = $tmp198;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
            return $finallyReturn196;
        }
        }
        else {
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp202.value) {
        {
            panda$json$JSON* $tmp206 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp206, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { false }));
            $tmp205 = $tmp206;
            $tmp204 = $tmp205;
            $finallyReturn202 = $tmp204;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
            return $finallyReturn202;
        }
        }
        else {
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9143.$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp208.value) {
        {
            panda$json$JSON* $tmp212 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64($tmp212, ((panda$core$Int64) { 6 }));
            $tmp211 = $tmp212;
            $tmp210 = $tmp211;
            $finallyReturn208 = $tmp210;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
            return $finallyReturn208;
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
    panda$core$String* $tmp214;
    org$pandalanguage$json$Lexer* $tmp216;
    org$pandalanguage$json$Lexer* $tmp217;
    self->source = NULL;
    self->lexer = NULL;
    $tmp214 = &$s215;
    self->source = $tmp214;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
    org$pandalanguage$json$Lexer* $tmp218 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
    org$pandalanguage$json$Lexer$init($tmp218);
    $tmp217 = $tmp218;
    $tmp216 = $tmp217;
    self->lexer = $tmp216;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self) {
    int $tmp221;
    {
    }
    $tmp221 = -1;
    goto $l219;
    $l219:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp221) {
        case -1: goto $l222;
    }
    $l222:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
}

