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
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

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
    if (((panda$core$Bit) { !self->pushbackToken.nonnull }).value) goto $l20; else goto $l21;
    $l21:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s22, (panda$core$Int64) { 44 });
    abort();
    $l20:;
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { p_token, true });
}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token result23;
    org$pandalanguage$json$Token $returnValue25;
    org$pandalanguage$json$Token $tmp24 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    result23 = $tmp24;
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, result23);
    $returnValue25 = result23;
    return $returnValue25;
}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* self, org$pandalanguage$json$Token$Kind p_kind) {
    org$pandalanguage$json$Token token27;
    org$pandalanguage$json$Token$nullable $returnValue30;
    org$pandalanguage$json$Token $tmp28 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token27 = $tmp28;
    panda$core$Bit $tmp29 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token27.kind.$rawValue, p_kind.$rawValue);
    if ($tmp29.value) {
    {
        $returnValue30 = ((org$pandalanguage$json$Token$nullable) { token27, true });
        return $returnValue30;
    }
    }
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, token27);
    $returnValue30 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
    return $returnValue30;
}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    panda$core$String* $returnValue33;
    panda$core$String* $tmp34;
    panda$core$String* $tmp35;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp36;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp36, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp37 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp36);
    $tmp35 = $tmp37;
    $tmp34 = $tmp35;
    $returnValue33 = $tmp34;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    return $returnValue33;
}
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp42;
    panda$json$JSON* $returnValue44;
    panda$json$JSON* $tmp45;
    panda$json$JSON* $tmp46;
    panda$collections$ImmutableArray* $tmp48;
    panda$collections$Array* result52 = NULL;
    panda$collections$Array* $tmp53;
    panda$collections$Array* $tmp54;
    panda$json$JSON* $tmp58;
    org$pandalanguage$json$Token$Kind $match$78_1360;
    panda$json$JSON* $tmp63;
    panda$json$JSON* $tmp64;
    panda$collections$ImmutableArray* $tmp66;
    int $tmp41;
    {
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp42, ((panda$core$Int64) { 12 }));
        org$pandalanguage$json$Token$nullable $tmp43 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp42);
        if (((panda$core$Bit) { $tmp43.nonnull }).value) {
        {
            panda$json$JSON* $tmp47 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$collections$ImmutableArray* $tmp49 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp49);
            $tmp48 = $tmp49;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp47, ((panda$core$Int64) { 5 }), $tmp48);
            $tmp46 = $tmp47;
            $tmp45 = $tmp46;
            $returnValue44 = $tmp45;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
            $tmp41 = 0;
            goto $l39;
            $l50:;
            return $returnValue44;
        }
        }
        panda$collections$Array* $tmp55 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp55);
        $tmp54 = $tmp55;
        $tmp53 = $tmp54;
        result52 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
        $l56:;
        while (true) {
        {
            panda$json$JSON* $tmp59 = panda$json$JSONParser$node$R$panda$json$JSON(self);
            $tmp58 = $tmp59;
            panda$collections$Array$add$panda$collections$Array$T(result52, ((panda$core$Object*) $tmp58));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
            {
                org$pandalanguage$json$Token $tmp61 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                $match$78_1360 = $tmp61.kind;
                panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1360.$rawValue, ((panda$core$Int64) { 12 }));
                if ($tmp62.value) {
                {
                    panda$json$JSON* $tmp65 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                    panda$collections$ImmutableArray* $tmp67 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result52);
                    $tmp66 = $tmp67;
                    panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp65, ((panda$core$Int64) { 5 }), $tmp66);
                    $tmp64 = $tmp65;
                    $tmp63 = $tmp64;
                    $returnValue44 = $tmp63;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
                    $tmp41 = 1;
                    goto $l39;
                    $l68:;
                    return $returnValue44;
                }
                }
                else {
                panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_1360.$rawValue, ((panda$core$Int64) { 13 }));
                if ($tmp70.value) {
                {
                    goto $l56;
                }
                }
                else {
                {
                    if (((panda$core$Bit) { false }).value) goto $l71; else goto $l72;
                    $l72:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s73, (panda$core$Int64) { 84 }, &$s74);
                    abort();
                    $l71:;
                }
                }
                }
            }
        }
        }
        $l57:;
    }
    $tmp41 = -1;
    goto $l39;
    $l39:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result52));
    result52 = NULL;
    switch ($tmp41) {
        case 1: goto $l68;
        case -1: goto $l75;
        case 0: goto $l50;
    }
    $l75:;
    abort();
}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp79;
    panda$json$JSON* $returnValue81;
    panda$json$JSON* $tmp82;
    panda$json$JSON* $tmp83;
    panda$collections$ImmutableHashMap* $tmp85;
    panda$collections$HashMap* result89 = NULL;
    panda$collections$HashMap* $tmp90;
    panda$collections$HashMap* $tmp91;
    panda$core$String* key98 = NULL;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    org$pandalanguage$json$Token colon102;
    panda$json$JSON* $tmp109;
    org$pandalanguage$json$Token$Kind $match$102_13111;
    panda$json$JSON* $tmp114;
    panda$json$JSON* $tmp115;
    panda$collections$ImmutableHashMap* $tmp117;
    int $tmp78;
    {
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp79, ((panda$core$Int64) { 10 }));
        org$pandalanguage$json$Token$nullable $tmp80 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp79);
        if (((panda$core$Bit) { $tmp80.nonnull }).value) {
        {
            panda$json$JSON* $tmp84 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$collections$ImmutableHashMap* $tmp86 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
            panda$collections$ImmutableHashMap$init($tmp86);
            $tmp85 = $tmp86;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp84, ((panda$core$Int64) { 4 }), $tmp85);
            $tmp83 = $tmp84;
            $tmp82 = $tmp83;
            $returnValue81 = $tmp82;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
            $tmp78 = 0;
            goto $l76;
            $l87:;
            return $returnValue81;
        }
        }
        panda$collections$HashMap* $tmp92 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init($tmp92);
        $tmp91 = $tmp92;
        $tmp90 = $tmp91;
        result89 = $tmp90;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
        $l93:;
        while (true) {
        {
            int $tmp97;
            {
                panda$core$String* $tmp101 = panda$json$JSONParser$string$R$panda$core$String(self);
                $tmp100 = $tmp101;
                $tmp99 = $tmp100;
                key98 = $tmp99;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                org$pandalanguage$json$Token $tmp103 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                colon102 = $tmp103;
                panda$core$Bit $tmp104 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(colon102.kind.$rawValue, ((panda$core$Int64) { 14 }));
                if ($tmp104.value) {
                {
                    if (((panda$core$Bit) { false }).value) goto $l105; else goto $l106;
                    $l106:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s107, (panda$core$Int64) { 99 }, &$s108);
                    abort();
                    $l105:;
                }
                }
                panda$json$JSON* $tmp110 = panda$json$JSONParser$node$R$panda$json$JSON(self);
                $tmp109 = $tmp110;
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(result89, ((panda$collections$Key*) key98), ((panda$core$Object*) $tmp109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
                {
                    org$pandalanguage$json$Token $tmp112 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                    $match$102_13111 = $tmp112.kind;
                    panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13111.$rawValue, ((panda$core$Int64) { 10 }));
                    if ($tmp113.value) {
                    {
                        panda$json$JSON* $tmp116 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                        panda$collections$ImmutableHashMap* $tmp118 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(result89);
                        $tmp117 = $tmp118;
                        panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp116, ((panda$core$Int64) { 4 }), $tmp117);
                        $tmp115 = $tmp116;
                        $tmp114 = $tmp115;
                        $returnValue81 = $tmp114;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
                        $tmp97 = 0;
                        goto $l95;
                        $l119:;
                        $tmp78 = 1;
                        goto $l76;
                        $l120:;
                        return $returnValue81;
                    }
                    }
                    else {
                    panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$102_13111.$rawValue, ((panda$core$Int64) { 13 }));
                    if ($tmp122.value) {
                    {
                        $tmp97 = 1;
                        goto $l95;
                        $l123:;
                        goto $l93;
                    }
                    }
                    else {
                    {
                        if (((panda$core$Bit) { false }).value) goto $l124; else goto $l125;
                        $l125:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s126, (panda$core$Int64) { 108 }, &$s127);
                        abort();
                        $l124:;
                    }
                    }
                    }
                }
            }
            $tmp97 = -1;
            goto $l95;
            $l95:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) key98));
            key98 = NULL;
            switch ($tmp97) {
                case -1: goto $l128;
                case 1: goto $l123;
                case 0: goto $l119;
            }
            $l128:;
        }
        }
        $l94:;
    }
    $tmp78 = -1;
    goto $l76;
    $l76:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result89));
    result89 = NULL;
    switch ($tmp78) {
        case 1: goto $l120;
        case 0: goto $l87;
        case -1: goto $l129;
    }
    $l129:;
    abort();
}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token133;
    panda$core$String* $tmp139;
    panda$core$String* $tmp140;
    panda$core$String* $tmp142;
    panda$core$String* s147 = NULL;
    panda$core$String* $tmp148;
    panda$core$String* $tmp149;
    panda$core$String* $returnValue151;
    panda$core$String* $tmp152;
    panda$core$String* $tmp153;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp154;
    int $tmp132;
    {
        org$pandalanguage$json$Token $tmp134 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        token133 = $tmp134;
        panda$core$Bit $tmp135 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(token133.kind.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp135.value) {
        {
            if (((panda$core$Bit) { false }).value) goto $l136; else goto $l137;
            $l137:;
            panda$core$String* $tmp143 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token133);
            $tmp142 = $tmp143;
            panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s141, $tmp142);
            $tmp140 = $tmp144;
            panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp140, &$s145);
            $tmp139 = $tmp146;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s138, (panda$core$Int64) { 117 }, $tmp139);
            abort();
            $l136:;
        }
        }
        panda$core$String* $tmp150 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token133);
        $tmp149 = $tmp150;
        $tmp148 = $tmp149;
        s147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$String$Index $tmp155 = panda$core$String$start$R$panda$core$String$Index(s147);
        panda$core$String$Index $tmp156 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s147, $tmp155);
        panda$core$String$Index $tmp157 = panda$core$String$end$R$panda$core$String$Index(s147);
        panda$core$String$Index $tmp158 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s147, $tmp157);
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp154, $tmp156, $tmp158, ((panda$core$Bit) { false }));
        panda$core$String* $tmp159 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s147, $tmp154);
        $tmp153 = $tmp159;
        $tmp152 = $tmp153;
        $returnValue151 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
        $tmp132 = 0;
        goto $l130;
        $l160:;
        return $returnValue151;
    }
    $l130:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s147));
    s147 = NULL;
    switch ($tmp132) {
        case 0: goto $l160;
    }
    $l162:;
    abort();
}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token163;
    org$pandalanguage$json$Token$Kind $match$126_9165;
    panda$json$JSON* $returnValue167;
    panda$json$JSON* $tmp168;
    panda$json$JSON* $tmp169;
    panda$json$JSON* $tmp173;
    panda$json$JSON* $tmp174;
    panda$core$String* s181 = NULL;
    panda$core$String* $tmp182;
    panda$core$String* $tmp183;
    panda$json$JSON* $tmp185;
    panda$json$JSON* $tmp186;
    panda$core$String* $tmp188;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp189;
    panda$json$JSON* $tmp199;
    panda$json$JSON* $tmp200;
    panda$core$String* $tmp202;
    panda$json$JSON* $tmp207;
    panda$json$JSON* $tmp208;
    panda$core$String* $tmp210;
    panda$json$JSON* $tmp215;
    panda$json$JSON* $tmp216;
    panda$json$JSON* $tmp220;
    panda$json$JSON* $tmp221;
    panda$json$JSON* $tmp225;
    panda$json$JSON* $tmp226;
    panda$core$String* $tmp232;
    panda$core$String* $tmp233;
    panda$core$String* $tmp235;
    org$pandalanguage$json$Token $tmp164 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token163 = $tmp164;
    {
        $match$126_9165 = token163.kind;
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp166.value) {
        {
            panda$json$JSON* $tmp170 = panda$json$JSONParser$object$R$panda$json$JSON(self);
            $tmp169 = $tmp170;
            $tmp168 = $tmp169;
            $returnValue167 = $tmp168;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
            return $returnValue167;
        }
        }
        else {
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp172.value) {
        {
            panda$json$JSON* $tmp175 = panda$json$JSONParser$array$R$panda$json$JSON(self);
            $tmp174 = $tmp175;
            $tmp173 = $tmp174;
            $returnValue167 = $tmp173;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
            return $returnValue167;
        }
        }
        else {
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp177.value) {
        {
            int $tmp180;
            {
                panda$core$String* $tmp184 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token163);
                $tmp183 = $tmp184;
                $tmp182 = $tmp183;
                s181 = $tmp182;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                panda$json$JSON* $tmp187 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                panda$core$String$Index $tmp190 = panda$core$String$start$R$panda$core$String$Index(s181);
                panda$core$String$Index $tmp191 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s181, $tmp190);
                panda$core$String$Index $tmp192 = panda$core$String$end$R$panda$core$String$Index(s181);
                panda$core$String$Index $tmp193 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s181, $tmp192);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp189, $tmp191, $tmp193, ((panda$core$Bit) { false }));
                panda$core$String* $tmp194 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s181, $tmp189);
                $tmp188 = $tmp194;
                panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp187, ((panda$core$Int64) { 2 }), $tmp188);
                $tmp186 = $tmp187;
                $tmp185 = $tmp186;
                $returnValue167 = $tmp185;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp188));
                $tmp180 = 0;
                goto $l178;
                $l195:;
                return $returnValue167;
            }
            $l178:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s181));
            s181 = NULL;
            switch ($tmp180) {
                case 0: goto $l195;
            }
            $l197:;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp198.value) {
        {
            panda$json$JSON* $tmp201 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp203 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token163);
            $tmp202 = $tmp203;
            panda$core$Int64$nullable $tmp204 = panda$core$String$convert$R$panda$core$Int64$Q($tmp202);
            panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp201, ((panda$core$Int64) { 0 }), ((panda$core$Int64) $tmp204.value));
            $tmp200 = $tmp201;
            $tmp199 = $tmp200;
            $returnValue167 = $tmp199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
            return $returnValue167;
        }
        }
        else {
        panda$core$Bit $tmp206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp206.value) {
        {
            panda$json$JSON* $tmp209 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$String* $tmp211 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token163);
            $tmp210 = $tmp211;
            panda$core$Real64$nullable $tmp212 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q($tmp210);
            panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp209, ((panda$core$Int64) { 1 }), ((panda$core$Real64) $tmp212.value));
            $tmp208 = $tmp209;
            $tmp207 = $tmp208;
            $returnValue167 = $tmp207;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
            return $returnValue167;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp214.value) {
        {
            panda$json$JSON* $tmp217 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp217, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { true }));
            $tmp216 = $tmp217;
            $tmp215 = $tmp216;
            $returnValue167 = $tmp215;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
            return $returnValue167;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp219.value) {
        {
            panda$json$JSON* $tmp222 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp222, ((panda$core$Int64) { 3 }), ((panda$core$Bit) { false }));
            $tmp221 = $tmp222;
            $tmp220 = $tmp221;
            $returnValue167 = $tmp220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
            return $returnValue167;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$126_9165.$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp224.value) {
        {
            panda$json$JSON* $tmp227 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$json$JSON$init$panda$core$Int64($tmp227, ((panda$core$Int64) { 6 }));
            $tmp226 = $tmp227;
            $tmp225 = $tmp226;
            $returnValue167 = $tmp225;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226));
            return $returnValue167;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l229; else goto $l230;
            $l230:;
            panda$core$String* $tmp236 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token163);
            $tmp235 = $tmp236;
            panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s234, $tmp235);
            $tmp233 = $tmp237;
            panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp233, &$s238);
            $tmp232 = $tmp239;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s231, (panda$core$Int64) { 145 }, $tmp232);
            abort();
            $l229:;
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
    abort();
}
void panda$json$JSONParser$init(panda$json$JSONParser* self) {
    panda$core$String* $tmp240;
    org$pandalanguage$json$Lexer* $tmp242;
    org$pandalanguage$json$Lexer* $tmp243;
    self->source = NULL;
    self->lexer = NULL;
    $tmp240 = &$s241;
    self->source = $tmp240;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
    org$pandalanguage$json$Lexer* $tmp244 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
    org$pandalanguage$json$Lexer$init($tmp244);
    $tmp243 = $tmp244;
    $tmp242 = $tmp243;
    self->lexer = $tmp242;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self) {
    int $tmp247;
    {
    }
    $tmp247 = -1;
    goto $l245;
    $l245:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp247) {
        case -1: goto $l248;
    }
    $l248:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
}

