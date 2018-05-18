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
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON(panda$json$JSONParser* self, panda$core$String* p_json) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    panda$json$JSON* $returnValue4;
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
    $returnValue4 = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    return $returnValue4;
}
org$pandalanguage$json$Token panda$json$JSONParser$next$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$nullable result9;
    org$pandalanguage$json$Token $returnValue10;
    org$pandalanguage$json$Token result12;
    if (((panda$core$Bit) { self->pushbackToken.nonnull }).value) {
    {
        result9 = self->pushbackToken;
        self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
        $returnValue10 = ((org$pandalanguage$json$Token) result9.value);
        return $returnValue10;
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
    $returnValue10 = result12;
    return $returnValue10;
}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    PANDA_ASSERT(((panda$core$Bit) { !self->pushbackToken.nonnull }).value);
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { p_token, true });
}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token result20;
    org$pandalanguage$json$Token $returnValue22;
    org$pandalanguage$json$Token $tmp21 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    result20 = $tmp21;
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, result20);
    $returnValue22 = result20;
    return $returnValue22;
}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* self, org$pandalanguage$json$Token$Kind p_kind) {
    org$pandalanguage$json$Token token24;
    org$pandalanguage$json$Token$nullable $returnValue27;
    org$pandalanguage$json$Token $tmp25 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token24 = $tmp25;
    panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token24.kind.$rawValue, p_kind.$rawValue);
    if ($tmp26.value) {
    {
        $returnValue27 = ((org$pandalanguage$json$Token$nullable) { token24, true });
        return $returnValue27;
    }
    }
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, token24);
    $returnValue27 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
    return $returnValue27;
}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    panda$core$String* $returnValue30;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp33;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp33, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp34 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp33);
    $tmp32 = $tmp34;
    $tmp31 = $tmp32;
    $returnValue30 = $tmp31;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp31));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    return $returnValue30;
}
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp39;
    panda$json$JSON* $returnValue41;
    panda$json$JSON* $tmp42;
    panda$json$JSON* $tmp43;
    panda$collections$ImmutableArray* $tmp45;
    panda$collections$Array* result49 = NULL;
    panda$collections$Array* $tmp50;
    panda$collections$Array* $tmp51;
    panda$json$JSON* $tmp55;
    org$pandalanguage$json$Token$Kind $match$78_1357;
    panda$json$JSON* $tmp60;
    panda$json$JSON* $tmp61;
    panda$collections$ImmutableArray* $tmp63;
    int $tmp38;
    {
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp39, ((panda$core$Int64) { 12 }));
        org$pandalanguage$json$Token$nullable $tmp40 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp39);
        if (((panda$core$Bit) { $tmp40.nonnull }).value) {
        {
            panda$json$JSON* $tmp44 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$collections$ImmutableArray* $tmp46 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp46);
            $tmp45 = $tmp46;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp44, ((panda$core$Int64) { 5 }), $tmp45);
            $tmp43 = $tmp44;
            $tmp42 = $tmp43;
            $returnValue41 = $tmp42;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
            $tmp38 = 0;
            goto $l36;
            $l47:;
            return $returnValue41;
        }
        }
        panda$collections$Array* $tmp52 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp52);
        $tmp51 = $tmp52;
        $tmp50 = $tmp51;
        result49 = $tmp50;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
        $l53:;
        while (true) {
        {
            panda$json$JSON* $tmp56 = panda$json$JSONParser$node$R$panda$json$JSON(self);
            $tmp55 = $tmp56;
            panda$collections$Array$add$panda$collections$Array$T(result49, ((panda$core$Object*) $tmp55));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
            {
                org$pandalanguage$json$Token $tmp58 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                $match$78_1357 = $tmp58.kind;
                panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1357.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp59.value) {
                {
                    panda$json$JSON* $tmp62 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                    panda$collections$ImmutableArray* $tmp64 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result49);
                    $tmp63 = $tmp64;
                    panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp62, ((panda$core$Int64) { 5 }), $tmp63);
                    $tmp61 = $tmp62;
                    $tmp60 = $tmp61;
                    $returnValue41 = $tmp60;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
                    $tmp38 = 1;
                    goto $l36;
                    $l65:;
                    return $returnValue41;
                }
                }
                else {
                panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1357.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp67.value) {
                {
                    goto $l53;
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
        $l54:;
    }
    $tmp38 = -1;
    goto $l36;
    $l36:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result49));
    result49 = NULL;
    switch ($tmp38) {
        case -1: goto $l68;
        case 1: goto $l65;
        case 0: goto $l47;
    }
    $l68:;
}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp72;
    panda$json$JSON* $returnValue74;
    panda$json$JSON* $tmp75;
    panda$json$JSON* $tmp76;
    panda$collections$ImmutableHashMap* $tmp78;
    panda$collections$HashMap* result82 = NULL;
    panda$collections$HashMap* $tmp83;
    panda$collections$HashMap* $tmp84;
    panda$core$String* key91 = NULL;
    panda$core$String* $tmp92;
    panda$core$String* $tmp93;
    org$pandalanguage$json$Token colon95;
    panda$json$JSON* $tmp98;
    org$pandalanguage$json$Token$Kind $match$102_13100;
    panda$json$JSON* $tmp103;
    panda$json$JSON* $tmp104;
    panda$collections$ImmutableHashMap* $tmp106;
    int $tmp71;
    {
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp72, ((panda$core$Int64) { 10 }));
        org$pandalanguage$json$Token$nullable $tmp73 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp72);
        if (((panda$core$Bit) { $tmp73.nonnull }).value) {
        {
            panda$json$JSON* $tmp77 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$collections$ImmutableHashMap* $tmp79 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
            panda$collections$ImmutableHashMap$init($tmp79);
            $tmp78 = $tmp79;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp77, ((panda$core$Int64) { 4 }), $tmp78);
            $tmp76 = $tmp77;
            $tmp75 = $tmp76;
            $returnValue74 = $tmp75;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp76));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
            $tmp71 = 0;
            goto $l69;
            $l80:;
            return $returnValue74;
        }
        }
        panda$collections$HashMap* $tmp85 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init($tmp85);
        $tmp84 = $tmp85;
        $tmp83 = $tmp84;
        result82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        $l86:;
        while (true) {
        {
            int $tmp90;
            {
                panda$core$String* $tmp94 = panda$json$JSONParser$string$R$panda$core$String(self);
                $tmp93 = $tmp94;
                $tmp92 = $tmp93;
                key91 = $tmp92;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
                org$pandalanguage$json$Token $tmp96 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                colon95 = $tmp96;
                panda$core$Bit $tmp97 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(colon95.kind.$rawValue, ((panda$core$Int64) { 14 }));
                if ($tmp97.value) {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
                panda$json$JSON* $tmp99 = panda$json$JSONParser$node$R$panda$json$JSON(self);
                $tmp98 = $tmp99;
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(result82, ((panda$collections$Key*) key91), ((panda$core$Object*) $tmp98));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
                {
                    org$pandalanguage$json$Token $tmp101 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                    $match$102_13100 = $tmp101.kind;
                    panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13100.$rawValue, ((panda$core$Int64) { 10 }));
                    if ($tmp102.value) {
                    {
                        panda$json$JSON* $tmp105 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                        panda$collections$ImmutableHashMap* $tmp107 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(result82);
                        $tmp106 = $tmp107;
                        panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp105, ((panda$core$Int64) { 4 }), $tmp106);
                        $tmp104 = $tmp105;
                        $tmp103 = $tmp104;
                        $returnValue74 = $tmp103;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
                        $tmp90 = 0;
                        goto $l88;
                        $l108:;
                        $tmp71 = 1;
                        goto $l69;
                        $l109:;
                        return $returnValue74;
                    }
                    }
                    else {
                    panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13100.$rawValue, ((panda$core$Int64) { 13 }));
                    if ($tmp111.value) {
                    {
                        $tmp90 = 1;
                        goto $l88;
                        $l112:;
                        goto $l86;
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
            $tmp90 = -1;
            goto $l88;
            $l88:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) key91));
            key91 = NULL;
            switch ($tmp90) {
                case 1: goto $l112;
                case 0: goto $l108;
                case -1: goto $l113;
            }
            $l113:;
        }
        }
        $l87:;
    }
    $tmp71 = -1;
    goto $l69;
    $l69:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result82));
    result82 = NULL;
    switch ($tmp71) {
        case -1: goto $l114;
        case 1: goto $l109;
        case 0: goto $l80;
    }
    $l114:;
}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token118;
    panda$core$String* s121 = NULL;
    panda$core$String* $tmp122;
    panda$core$String* $tmp123;
    panda$core$String* $returnValue125;
    panda$core$String* $tmp126;
    panda$core$String* $tmp127;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp128;
    int $tmp117;
    {
        org$pandalanguage$json$Token $tmp119 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        token118 = $tmp119;
        panda$core$Bit $tmp120 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(token118.kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp120.value) {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp124 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token118);
        $tmp123 = $tmp124;
        $tmp122 = $tmp123;
        s121 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
        panda$core$String$Index $tmp129 = panda$core$String$start$R$panda$core$String$Index(s121);
        panda$core$String$Index $tmp130 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s121, $tmp129);
        panda$core$String$Index $tmp131 = panda$core$String$end$R$panda$core$String$Index(s121);
        panda$core$String$Index $tmp132 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s121, $tmp131);
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp128, $tmp130, $tmp132, ((panda$core$Bit) { false }));
        panda$core$String* $tmp133 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s121, $tmp128);
        $tmp127 = $tmp133;
        $tmp126 = $tmp127;
        $returnValue125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
        $tmp117 = 0;
        goto $l115;
        $l134:;
        return $returnValue125;
    }
    $l115:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s121));
    s121 = NULL;
    switch ($tmp117) {
        case 0: goto $l134;
    }
    $l136:;
}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token137;
    org$pandalanguage$json$Token$Kind $match$126_9139;
    panda$json$JSON* $returnValue141;
    panda$json$JSON* $tmp142;
    panda$json$JSON* $tmp143;
    panda$json$JSON* $tmp147;
    panda$json$JSON* $tmp148;
    panda$core$String* s155 = NULL;
    panda$core$String* $tmp156;
    panda$core$String* $tmp157;
    panda$json$JSON* $tmp159;
    panda$json$JSON* $tmp160;
    panda$core$String* $tmp162;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp163;
    panda$json$JSON* $tmp173;
    panda$json$JSON* $tmp174;
    panda$core$String* $tmp176;
    panda$json$JSON* $tmp181;
    panda$json$JSON* $tmp182;
    panda$core$String* $tmp184;
    panda$json$JSON* $tmp189;
    panda$json$JSON* $tmp190;
    panda$json$JSON* $tmp194;
    panda$json$JSON* $tmp195;
    panda$json$JSON* $tmp199;
    panda$json$JSON* $tmp200;
    org$pandalanguage$json$Token $tmp138 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token137 = $tmp138;
    {
        $match$126_9139 = token137.kind;
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp140.value) {
        {
            panda$json$JSON* $tmp144 = panda$json$JSONParser$object$R$panda$json$JSON(self);
            $tmp143 = $tmp144;
            $tmp142 = $tmp143;
            $returnValue141 = $tmp142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
            return $returnValue141;
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp146.value) {
        {
            panda$json$JSON* $tmp149 = panda$json$JSONParser$array$R$panda$json$JSON(self);
            $tmp148 = $tmp149;
            $tmp147 = $tmp148;
            $returnValue141 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
            return $returnValue141;
        }
        }
        else {
        panda$core$Bit $tmp151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp151.value) {
        {
            int $tmp154;
            {
                panda$core$String* $tmp158 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token137);
                $tmp157 = $tmp158;
                $tmp156 = $tmp157;
                s155 = $tmp156;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
                panda$json$JSON* $tmp161 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                panda$core$String$Index $tmp164 = panda$core$String$start$R$panda$core$String$Index(s155);
                panda$core$String$Index $tmp165 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s155, $tmp164);
                panda$core$String$Index $tmp166 = panda$core$String$end$R$panda$core$String$Index(s155);
                panda$core$String$Index $tmp167 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s155, $tmp166);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp163, $tmp165, $tmp167, ((panda$core$Bit) { false }));
                panda$core$String* $tmp168 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s155, $tmp163);
                $tmp162 = $tmp168;
                panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp161, ((panda$core$Int64) { 2 }), $tmp162);
                $tmp160 = $tmp161;
                $tmp159 = $tmp160;
                $returnValue141 = $tmp159;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp160));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
                $tmp154 = 0;
                goto $l152;
                $l169:;
                return $returnValue141;
            }
            $l152:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s155));
            s155 = NULL;
            switch ($tmp154) {
                case 0: goto $l169;
            }
            $l171:;
        }
        }
        else {
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp172.value) {
        {
            panda$json$JSON* $tmp175 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp177 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token137);
            $tmp176 = $tmp177;
            panda$core$Int64$nullable $tmp178 = panda$core$String$convert$R$panda$core$Int64$Q($tmp176);
            panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp175, ((panda$core$Int64) { 0 }), ((panda$core$Int64) $tmp178.value));
            $tmp174 = $tmp175;
            $tmp173 = $tmp174;
            $returnValue141 = $tmp173;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
            return $returnValue141;
        }
        }
        else {
        panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp180.value) {
        {
            panda$json$JSON* $tmp183 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp185 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token137);
            $tmp184 = $tmp185;
            panda$core$Real64$nullable $tmp186 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp184);
            panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp183, ((panda$core$Int64) { 1 }), ((panda$core$Real64) $tmp186.value));
            $tmp182 = $tmp183;
            $tmp181 = $tmp182;
            $returnValue141 = $tmp181;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
            return $returnValue141;
        }
        }
        else {
        panda$core$Bit $tmp188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp188.value) {
        {
            panda$json$JSON* $tmp191 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp191, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { true }));
            $tmp190 = $tmp191;
            $tmp189 = $tmp190;
            $returnValue141 = $tmp189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            return $returnValue141;
        }
        }
        else {
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp193.value) {
        {
            panda$json$JSON* $tmp196 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp196, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { false }));
            $tmp195 = $tmp196;
            $tmp194 = $tmp195;
            $returnValue141 = $tmp194;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
            return $returnValue141;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9139.$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp198.value) {
        {
            panda$json$JSON* $tmp201 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64($tmp201, ((panda$core$Int64) { 6 }));
            $tmp200 = $tmp201;
            $tmp199 = $tmp200;
            $returnValue141 = $tmp199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            return $returnValue141;
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
    panda$core$String* $tmp203;
    org$pandalanguage$json$Lexer* $tmp205;
    org$pandalanguage$json$Lexer* $tmp206;
    self->source = NULL;
    self->lexer = NULL;
    $tmp203 = &$s204;
    self->source = $tmp203;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
    org$pandalanguage$json$Lexer* $tmp207 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
    org$pandalanguage$json$Lexer$init($tmp207);
    $tmp206 = $tmp207;
    $tmp205 = $tmp206;
    self->lexer = $tmp205;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self) {
    int $tmp210;
    {
    }
    $tmp210 = -1;
    goto $l208;
    $l208:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp210) {
        case -1: goto $l211;
    }
    $l211:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
}

