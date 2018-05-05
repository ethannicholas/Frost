#include "panda/json/JSONParser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/json/JSON.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/json/Lexer.h"
#include "panda/json/JSON/Node.h"
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
#include "panda/io/Console.h"


static panda$core$String $s1;
panda$json$JSONParser$class_type panda$json$JSONParser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$json$JSONParser$cleanup, panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON, panda$json$JSONParser$next$R$org$pandalanguage$json$Token, panda$json$JSONParser$pushback$org$pandalanguage$json$Token, panda$json$JSONParser$peek$R$org$pandalanguage$json$Token, panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q, panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String, panda$json$JSONParser$array$R$panda$json$JSON$Node, panda$json$JSONParser$object$R$panda$json$JSON$Node, panda$json$JSONParser$doNode$R$panda$json$JSON$Node, panda$json$JSONParser$node$R$panda$json$JSON$Node} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -3529150264525428738, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x64\x65\x3a\x20", 6, 2229285976513, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON(panda$json$JSONParser* self, panda$core$String* p_json) {
    {
        panda$core$String* $tmp2 = self->source;
        panda$core$String* $tmp3 = p_json;
        self->source = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    org$pandalanguage$json$Lexer$start$panda$core$String(self->lexer, p_json);
    panda$json$JSON* $tmp7 = (panda$json$JSON*) pandaObjectAlloc(24, (panda$core$Class*) &panda$json$JSON$class);
    panda$json$JSON$Node* $tmp9 = panda$json$JSONParser$node$R$panda$json$JSON$Node(self);
    panda$json$JSON$Node* $tmp8 = $tmp9;
    panda$json$JSON$init$panda$json$JSON$Node($tmp7, $tmp8);
    panda$json$JSON* $tmp6 = $tmp7;
    panda$json$JSON* $tmp5 = $tmp6;
    panda$json$JSON* $tmp4 = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    return $tmp4;
}
org$pandalanguage$json$Token panda$json$JSONParser$next$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$nullable result10;
    org$pandalanguage$json$Token result12;
    if (((panda$core$Bit) { self->pushbackToken.nonnull }).value) {
    {
        result10 = self->pushbackToken;
        self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
        org$pandalanguage$json$Token $tmp11 = ((org$pandalanguage$json$Token) result10.value);
        return $tmp11;
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
    org$pandalanguage$json$Token $tmp19 = result12;
    return $tmp19;
}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    PANDA_ASSERT(((panda$core$Bit) { !self->pushbackToken.nonnull }).value);
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { p_token, true });
}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token result20;
    org$pandalanguage$json$Token $tmp21 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    result20 = $tmp21;
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, result20);
    org$pandalanguage$json$Token $tmp22 = result20;
    return $tmp22;
}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* self, org$pandalanguage$json$Token$Kind p_kind) {
    org$pandalanguage$json$Token token23;
    org$pandalanguage$json$Token $tmp24 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token23 = $tmp24;
    panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token23.kind.$rawValue, p_kind.$rawValue);
    if ($tmp25.value) {
    {
        org$pandalanguage$json$Token$nullable $tmp26 = ((org$pandalanguage$json$Token$nullable) { token23, true });
        return $tmp26;
    }
    }
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, token23);
    org$pandalanguage$json$Token$nullable $tmp27 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
    return $tmp27;
}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    panda$core$Range$LTpanda$core$String$Index$GT $tmp31;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp31, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp32 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp31);
    panda$core$String* $tmp30 = $tmp32;
    panda$core$String* $tmp29 = $tmp30;
    panda$core$String* $tmp28 = $tmp29;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
    return $tmp28;
}
panda$json$JSON$Node* panda$json$JSONParser$array$R$panda$json$JSON$Node(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp33;
    panda$collections$Array* result41;
    org$pandalanguage$json$Token$Kind $match$74_1349;
    panda$json$JSON$Node* tmp152;
    org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp33, ((panda$core$Int64) { 12 }));
    org$pandalanguage$json$Token$nullable $tmp34 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp33);
    if (((panda$core$Bit) { $tmp34.nonnull }).value) {
    {
        panda$json$JSON$Node* $tmp38 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
        panda$collections$ImmutableArray* $tmp40 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp40);
        panda$collections$ImmutableArray* $tmp39 = $tmp40;
        panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$Node$GT($tmp38, ((panda$core$Int64) { 5 }), $tmp39);
        panda$json$JSON$Node* $tmp37 = $tmp38;
        panda$json$JSON$Node* $tmp36 = $tmp37;
        panda$json$JSON$Node* $tmp35 = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
        return $tmp35;
    }
    }
    panda$collections$Array* $tmp44 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp44);
    panda$collections$Array* $tmp43 = $tmp44;
    panda$collections$Array* $tmp42 = $tmp43;
    result41 = $tmp42;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    $l45:;
    while (true) {
    {
        panda$json$JSON$Node* $tmp48 = panda$json$JSONParser$node$R$panda$json$JSON$Node(self);
        panda$json$JSON$Node* $tmp47 = $tmp48;
        panda$collections$Array$add$panda$collections$Array$T(result41, ((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        {
            org$pandalanguage$json$Token $tmp50 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
            $match$74_1349 = $tmp50.kind;
            panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_1349.$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp51.value) {
            {
                {
                    panda$json$JSON$Node* $tmp55 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
                    panda$collections$ImmutableArray* $tmp57 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result41);
                    panda$collections$ImmutableArray* $tmp56 = $tmp57;
                    panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$Node$GT($tmp55, ((panda$core$Int64) { 5 }), $tmp56);
                    panda$json$JSON$Node* $tmp54 = $tmp55;
                    panda$json$JSON$Node* $tmp53 = $tmp54;
                    tmp152 = $tmp53;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result41));
                    panda$json$JSON$Node* $tmp58 = tmp152;
                    return $tmp58;
                }
            }
            }
            else {
            panda$core$Bit $tmp59 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_1349.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp59.value) {
            {
                goto $l45;
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
    $l46:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result41));
}
panda$json$JSON$Node* panda$json$JSONParser$object$R$panda$json$JSON$Node(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp60;
    panda$collections$HashMap* result68;
    org$pandalanguage$json$Token key74;
    org$pandalanguage$json$Token colon77;
    org$pandalanguage$json$Token$Kind $match$101_1384;
    panda$json$JSON$Node* tmp287;
    org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp60, ((panda$core$Int64) { 10 }));
    org$pandalanguage$json$Token$nullable $tmp61 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp60);
    if (((panda$core$Bit) { $tmp61.nonnull }).value) {
    {
        panda$json$JSON$Node* $tmp65 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
        panda$collections$ImmutableHashMap* $tmp67 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp67);
        panda$collections$ImmutableHashMap* $tmp66 = $tmp67;
        panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$Node$GT($tmp65, ((panda$core$Int64) { 4 }), $tmp66);
        panda$json$JSON$Node* $tmp64 = $tmp65;
        panda$json$JSON$Node* $tmp63 = $tmp64;
        panda$json$JSON$Node* $tmp62 = $tmp63;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
        return $tmp62;
    }
    }
    panda$collections$HashMap* $tmp71 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
    panda$collections$HashMap$init($tmp71);
    panda$collections$HashMap* $tmp70 = $tmp71;
    panda$collections$HashMap* $tmp69 = $tmp70;
    result68 = $tmp69;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    $l72:;
    while (true) {
    {
        org$pandalanguage$json$Token $tmp75 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        key74 = $tmp75;
        panda$core$Bit $tmp76 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(key74.kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp76.value) {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        org$pandalanguage$json$Token $tmp78 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        colon77 = $tmp78;
        panda$core$Bit $tmp79 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(colon77.kind.$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp79.value) {
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp81 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, key74);
        panda$core$String* $tmp80 = $tmp81;
        panda$json$JSON$Node* $tmp83 = panda$json$JSONParser$node$R$panda$json$JSON$Node(self);
        panda$json$JSON$Node* $tmp82 = $tmp83;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(result68, ((panda$collections$Key*) $tmp80), ((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        {
            org$pandalanguage$json$Token $tmp85 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
            $match$101_1384 = $tmp85.kind;
            panda$core$Bit $tmp86 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$101_1384.$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp86.value) {
            {
                {
                    panda$json$JSON$Node* $tmp90 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
                    panda$collections$ImmutableHashMap* $tmp92 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(result68);
                    panda$collections$ImmutableHashMap* $tmp91 = $tmp92;
                    panda$json$JSON$Node$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$Node$GT($tmp90, ((panda$core$Int64) { 4 }), $tmp91);
                    panda$json$JSON$Node* $tmp89 = $tmp90;
                    panda$json$JSON$Node* $tmp88 = $tmp89;
                    tmp287 = $tmp88;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result68));
                    panda$json$JSON$Node* $tmp93 = tmp287;
                    return $tmp93;
                }
            }
            }
            else {
            panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$101_1384.$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp94.value) {
            {
                goto $l72;
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
    $l73:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result68));
}
panda$json$JSON$Node* panda$json$JSONParser$doNode$R$panda$json$JSON$Node(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token95;
    org$pandalanguage$json$Token$Kind $match$115_997;
    org$pandalanguage$json$Token $tmp96 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token95 = $tmp96;
    {
        $match$115_997 = token95.kind;
        panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_997.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp98.value) {
        {
            panda$json$JSON$Node* $tmp102 = panda$json$JSONParser$object$R$panda$json$JSON$Node(self);
            panda$json$JSON$Node* $tmp101 = $tmp102;
            panda$json$JSON$Node* $tmp100 = $tmp101;
            panda$json$JSON$Node* $tmp99 = $tmp100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
            return $tmp99;
        }
        }
        else {
        panda$core$Bit $tmp103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_997.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp103.value) {
        {
            panda$json$JSON$Node* $tmp107 = panda$json$JSONParser$array$R$panda$json$JSON$Node(self);
            panda$json$JSON$Node* $tmp106 = $tmp107;
            panda$json$JSON$Node* $tmp105 = $tmp106;
            panda$json$JSON$Node* $tmp104 = $tmp105;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
            return $tmp104;
        }
        }
        else {
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_997.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp108.value) {
        {
            panda$json$JSON$Node* $tmp112 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
            panda$core$String* $tmp114 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token95);
            panda$core$String* $tmp113 = $tmp114;
            panda$json$JSON$Node$init$panda$core$Int64$panda$core$String($tmp112, ((panda$core$Int64) { 2 }), $tmp113);
            panda$json$JSON$Node* $tmp111 = $tmp112;
            panda$json$JSON$Node* $tmp110 = $tmp111;
            panda$json$JSON$Node* $tmp109 = $tmp110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
            return $tmp109;
        }
        }
        else {
        panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_997.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp115.value) {
        {
            panda$json$JSON$Node* $tmp119 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
            panda$core$String* $tmp121 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token95);
            panda$core$String* $tmp120 = $tmp121;
            panda$core$Int64$nullable $tmp122 = panda$core$String$convert$R$panda$core$Int64$Q($tmp120);
            panda$json$JSON$Node$init$panda$core$Int64$panda$core$Int64($tmp119, ((panda$core$Int64) { 0 }), ((panda$core$Int64) $tmp122.value));
            panda$json$JSON$Node* $tmp118 = $tmp119;
            panda$json$JSON$Node* $tmp117 = $tmp118;
            panda$json$JSON$Node* $tmp116 = $tmp117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
            return $tmp116;
        }
        }
        else {
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_997.$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp123.value) {
        {
            panda$json$JSON$Node* $tmp127 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
            panda$json$JSON$Node$init$panda$core$Int64$panda$core$Bit($tmp127, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { true }));
            panda$json$JSON$Node* $tmp126 = $tmp127;
            panda$json$JSON$Node* $tmp125 = $tmp126;
            panda$json$JSON$Node* $tmp124 = $tmp125;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126));
            return $tmp124;
        }
        }
        else {
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_997.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp128.value) {
        {
            panda$json$JSON$Node* $tmp132 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
            panda$json$JSON$Node$init$panda$core$Int64$panda$core$Bit($tmp132, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { false }));
            panda$json$JSON$Node* $tmp131 = $tmp132;
            panda$json$JSON$Node* $tmp130 = $tmp131;
            panda$json$JSON$Node* $tmp129 = $tmp130;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
            return $tmp129;
        }
        }
        else {
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$115_997.$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp133.value) {
        {
            panda$json$JSON$Node* $tmp137 = (panda$json$JSON$Node*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$Node$class);
            panda$json$JSON$Node$init$panda$core$Int64($tmp137, ((panda$core$Int64) { 6 }));
            panda$json$JSON$Node* $tmp136 = $tmp137;
            panda$json$JSON$Node* $tmp135 = $tmp136;
            panda$json$JSON$Node* $tmp134 = $tmp135;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
            return $tmp134;
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
panda$json$JSON$Node* panda$json$JSONParser$node$R$panda$json$JSON$Node(panda$json$JSONParser* self) {
    panda$json$JSON$Node* result138;
    panda$json$JSON$Node* tmp3148;
    panda$json$JSON$Node* $tmp141 = panda$json$JSONParser$doNode$R$panda$json$JSON$Node(self);
    panda$json$JSON$Node* $tmp140 = $tmp141;
    panda$json$JSON$Node* $tmp139 = $tmp140;
    result138 = $tmp139;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    panda$core$String* $tmp145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s144, ((panda$core$Object*) result138));
    panda$core$String* $tmp143 = $tmp145;
    panda$core$String* $tmp147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp143, &$s146);
    panda$core$String* $tmp142 = $tmp147;
    panda$io$Console$printLine$panda$core$String($tmp142);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
    {
        panda$json$JSON$Node* $tmp149 = result138;
        tmp3148 = $tmp149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result138));
        panda$json$JSON$Node* $tmp150 = tmp3148;
        return $tmp150;
    }
}
void panda$json$JSONParser$init(panda$json$JSONParser* self) {
    self->source = NULL;
    self->lexer = NULL;
    panda$core$String* $tmp151 = &$s152;
    self->source = $tmp151;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
    org$pandalanguage$json$Lexer* $tmp155 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
    org$pandalanguage$json$Lexer$init($tmp155);
    org$pandalanguage$json$Lexer* $tmp154 = $tmp155;
    org$pandalanguage$json$Lexer* $tmp153 = $tmp154;
    self->lexer = $tmp153;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
}

