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
panda$json$JSONParser$class_type panda$json$JSONParser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$json$JSONParser$cleanup, panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON$Q, panda$json$JSONParser$next$R$org$pandalanguage$json$Token, panda$json$JSONParser$pushback$org$pandalanguage$json$Token, panda$json$JSONParser$peek$R$org$pandalanguage$json$Token, panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q, panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String, panda$json$JSONParser$array$R$panda$json$JSON, panda$json$JSONParser$object$R$panda$json$JSON, panda$json$JSONParser$string$R$panda$core$String, panda$json$JSONParser$node$R$panda$json$JSON} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6a\x73\x6f\x6e\x2e\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72", 21, -3529150264525428738, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x61\x72\x72\x61\x79", 21, 4406323564333251946, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

panda$json$JSON* panda$json$JSONParser$parse$panda$core$String$R$panda$json$JSON$Q(panda$json$JSONParser* self, panda$core$String* p_json) {
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
    panda$core$Int64 $tmp17;
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
    panda$core$Int64$init$builtin_int64(&$tmp17, 5);
    panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result12.kind.$rawValue, $tmp17);
    bool $tmp16 = $tmp18.value;
    if (!$tmp16) goto $l15;
    {
        org$pandalanguage$json$Token $tmp19 = org$pandalanguage$json$Lexer$next$R$org$pandalanguage$json$Token(self->lexer);
        result12 = $tmp19;
    }
    goto $l14;
    $l15:;
    $returnValue10 = result12;
    return $returnValue10;
}
void panda$json$JSONParser$pushback$org$pandalanguage$json$Token(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    if (((panda$core$Bit) { !self->pushbackToken.nonnull }).value) goto $l21; else goto $l22;
    $l22:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s23, (panda$core$Int64) { 49 });
    abort();
    $l21:;
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { p_token, true });
}
org$pandalanguage$json$Token panda$json$JSONParser$peek$R$org$pandalanguage$json$Token(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token result24;
    org$pandalanguage$json$Token $returnValue26;
    org$pandalanguage$json$Token $tmp25 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    result24 = $tmp25;
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, result24);
    $returnValue26 = result24;
    return $returnValue26;
}
org$pandalanguage$json$Token$nullable panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(panda$json$JSONParser* self, org$pandalanguage$json$Token$Kind p_kind) {
    org$pandalanguage$json$Token token28;
    org$pandalanguage$json$Token$nullable $returnValue31;
    org$pandalanguage$json$Token $tmp29 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token28 = $tmp29;
    panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(token28.kind.$rawValue, p_kind.$rawValue);
    if ($tmp30.value) {
    {
        $returnValue31 = ((org$pandalanguage$json$Token$nullable) { token28, true });
        return $returnValue31;
    }
    }
    panda$json$JSONParser$pushback$org$pandalanguage$json$Token(self, token28);
    $returnValue31 = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
    return $returnValue31;
}
panda$core$String* panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(panda$json$JSONParser* self, org$pandalanguage$json$Token p_token) {
    panda$core$String* $returnValue34;
    panda$core$String* $tmp35;
    panda$core$String* $tmp36;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp37;
    panda$core$Bit $tmp38;
    panda$core$Bit$init$builtin_bit(&$tmp38, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp37, p_token.start, p_token.end, $tmp38);
    panda$core$String* $tmp39 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp37);
    $tmp36 = $tmp39;
    $tmp35 = $tmp36;
    $returnValue34 = $tmp35;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
    return $returnValue34;
}
panda$json$JSON* panda$json$JSONParser$array$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp44;
    panda$core$Int64 $tmp45;
    panda$json$JSON* $returnValue47;
    panda$json$JSON* $tmp48;
    panda$json$JSON* $tmp49;
    panda$core$Int64 $tmp51;
    panda$collections$ImmutableArray* $tmp52;
    panda$collections$Array* result56 = NULL;
    panda$collections$Array* $tmp57;
    panda$collections$Array* $tmp58;
    panda$json$JSON* $tmp62;
    org$pandalanguage$json$Token$Kind $match$83_1364;
    panda$core$Int64 $tmp66;
    panda$json$JSON* $tmp68;
    panda$json$JSON* $tmp69;
    panda$core$Int64 $tmp71;
    panda$collections$ImmutableArray* $tmp72;
    panda$core$Int64 $tmp76;
    panda$core$Bit $tmp78;
    int $tmp43;
    {
        panda$core$Int64$init$builtin_int64(&$tmp45, 12);
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp44, $tmp45);
        org$pandalanguage$json$Token$nullable $tmp46 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp44);
        if (((panda$core$Bit) { $tmp46.nonnull }).value) {
        {
            panda$json$JSON* $tmp50 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp51, 5);
            panda$collections$ImmutableArray* $tmp53 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
            panda$collections$ImmutableArray$init($tmp53);
            $tmp52 = $tmp53;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp50, $tmp51, $tmp52);
            $tmp49 = $tmp50;
            $tmp48 = $tmp49;
            $returnValue47 = $tmp48;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
            $tmp43 = 0;
            goto $l41;
            $l54:;
            return $returnValue47;
        }
        }
        panda$collections$Array* $tmp59 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp59);
        $tmp58 = $tmp59;
        $tmp57 = $tmp58;
        result56 = $tmp57;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
        $l60:;
        while (true) {
        {
            panda$json$JSON* $tmp63 = panda$json$JSONParser$node$R$panda$json$JSON(self);
            $tmp62 = $tmp63;
            panda$collections$Array$add$panda$collections$Array$T(result56, ((panda$core$Object*) $tmp62));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
            {
                org$pandalanguage$json$Token $tmp65 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                $match$83_1364 = $tmp65.kind;
                panda$core$Int64$init$builtin_int64(&$tmp66, 12);
                panda$core$Bit $tmp67 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$83_1364.$rawValue, $tmp66);
                if ($tmp67.value) {
                {
                    panda$json$JSON* $tmp70 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                    panda$core$Int64$init$builtin_int64(&$tmp71, 5);
                    panda$collections$ImmutableArray* $tmp73 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(result56);
                    $tmp72 = $tmp73;
                    panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableArray$LTpanda$json$JSON$GT($tmp70, $tmp71, $tmp72);
                    $tmp69 = $tmp70;
                    $tmp68 = $tmp69;
                    $returnValue47 = $tmp68;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
                    $tmp43 = 1;
                    goto $l41;
                    $l74:;
                    return $returnValue47;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp76, 13);
                panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$83_1364.$rawValue, $tmp76);
                if ($tmp77.value) {
                {
                    goto $l60;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp78, false);
                    if ($tmp78.value) goto $l79; else goto $l80;
                    $l80:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s81, (panda$core$Int64) { 89 }, &$s82);
                    abort();
                    $l79:;
                }
                }
                }
            }
        }
        }
        $l61:;
    }
    $tmp43 = -1;
    goto $l41;
    $l41:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result56));
    result56 = NULL;
    switch ($tmp43) {
        case 1: goto $l74;
        case 0: goto $l54;
        case -1: goto $l83;
    }
    $l83:;
    abort();
}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp87;
    panda$core$Int64 $tmp88;
    panda$json$JSON* $returnValue90;
    panda$json$JSON* $tmp91;
    panda$json$JSON* $tmp92;
    panda$core$Int64 $tmp94;
    panda$collections$ImmutableHashMap* $tmp95;
    panda$collections$HashMap* result99 = NULL;
    panda$collections$HashMap* $tmp100;
    panda$collections$HashMap* $tmp101;
    panda$core$String* key108 = NULL;
    panda$core$String* $tmp109;
    panda$core$String* $tmp110;
    org$pandalanguage$json$Token colon112;
    panda$core$Int64 $tmp114;
    panda$core$Bit $tmp116;
    panda$json$JSON* $tmp121;
    org$pandalanguage$json$Token$Kind $match$107_13123;
    panda$core$Int64 $tmp125;
    panda$json$JSON* $tmp127;
    panda$json$JSON* $tmp128;
    panda$core$Int64 $tmp130;
    panda$collections$ImmutableHashMap* $tmp131;
    panda$core$Int64 $tmp136;
    panda$core$Bit $tmp139;
    int $tmp86;
    {
        panda$core$Int64$init$builtin_int64(&$tmp88, 10);
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp87, $tmp88);
        org$pandalanguage$json$Token$nullable $tmp89 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp87);
        if (((panda$core$Bit) { $tmp89.nonnull }).value) {
        {
            panda$json$JSON* $tmp93 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp94, 4);
            panda$collections$ImmutableHashMap* $tmp96 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
            panda$collections$ImmutableHashMap$init($tmp96);
            $tmp95 = $tmp96;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp93, $tmp94, $tmp95);
            $tmp92 = $tmp93;
            $tmp91 = $tmp92;
            $returnValue90 = $tmp91;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
            $tmp86 = 0;
            goto $l84;
            $l97:;
            return $returnValue90;
        }
        }
        panda$collections$HashMap* $tmp102 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init($tmp102);
        $tmp101 = $tmp102;
        $tmp100 = $tmp101;
        result99 = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
        $l103:;
        while (true) {
        {
            int $tmp107;
            {
                panda$core$String* $tmp111 = panda$json$JSONParser$string$R$panda$core$String(self);
                $tmp110 = $tmp111;
                $tmp109 = $tmp110;
                key108 = $tmp109;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
                org$pandalanguage$json$Token $tmp113 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                colon112 = $tmp113;
                panda$core$Int64$init$builtin_int64(&$tmp114, 14);
                panda$core$Bit $tmp115 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(colon112.kind.$rawValue, $tmp114);
                if ($tmp115.value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp116, false);
                    if ($tmp116.value) goto $l117; else goto $l118;
                    $l118:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s119, (panda$core$Int64) { 104 }, &$s120);
                    abort();
                    $l117:;
                }
                }
                panda$json$JSON* $tmp122 = panda$json$JSONParser$node$R$panda$json$JSON(self);
                $tmp121 = $tmp122;
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(result99, ((panda$collections$Key*) key108), ((panda$core$Object*) $tmp121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
                {
                    org$pandalanguage$json$Token $tmp124 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                    $match$107_13123 = $tmp124.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp125, 10);
                    panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_13123.$rawValue, $tmp125);
                    if ($tmp126.value) {
                    {
                        panda$json$JSON* $tmp129 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                        panda$core$Int64$init$builtin_int64(&$tmp130, 4);
                        panda$collections$ImmutableHashMap* $tmp132 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(result99);
                        $tmp131 = $tmp132;
                        panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp129, $tmp130, $tmp131);
                        $tmp128 = $tmp129;
                        $tmp127 = $tmp128;
                        $returnValue90 = $tmp127;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
                        $tmp107 = 0;
                        goto $l105;
                        $l133:;
                        $tmp86 = 1;
                        goto $l84;
                        $l134:;
                        return $returnValue90;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp136, 13);
                    panda$core$Bit $tmp137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_13123.$rawValue, $tmp136);
                    if ($tmp137.value) {
                    {
                        $tmp107 = 1;
                        goto $l105;
                        $l138:;
                        goto $l103;
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp139, false);
                        if ($tmp139.value) goto $l140; else goto $l141;
                        $l141:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s142, (panda$core$Int64) { 113 }, &$s143);
                        abort();
                        $l140:;
                    }
                    }
                    }
                }
            }
            $tmp107 = -1;
            goto $l105;
            $l105:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) key108));
            key108 = NULL;
            switch ($tmp107) {
                case 0: goto $l133;
                case -1: goto $l144;
                case 1: goto $l138;
            }
            $l144:;
        }
        }
        $l104:;
    }
    $tmp86 = -1;
    goto $l84;
    $l84:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result99));
    result99 = NULL;
    switch ($tmp86) {
        case -1: goto $l145;
        case 1: goto $l134;
        case 0: goto $l97;
    }
    $l145:;
    abort();
}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token149;
    panda$core$Int64 $tmp151;
    panda$core$Bit $tmp153;
    panda$core$String* $tmp157;
    panda$core$String* $tmp158;
    panda$core$String* $tmp160;
    panda$core$String* s165 = NULL;
    panda$core$String* $tmp166;
    panda$core$String* $tmp167;
    panda$core$String* $returnValue169;
    panda$core$String* $tmp170;
    panda$core$String* $tmp171;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp172;
    panda$core$Bit $tmp177;
    int $tmp148;
    {
        org$pandalanguage$json$Token $tmp150 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        token149 = $tmp150;
        panda$core$Int64$init$builtin_int64(&$tmp151, 2);
        panda$core$Bit $tmp152 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(token149.kind.$rawValue, $tmp151);
        if ($tmp152.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp153, false);
            if ($tmp153.value) goto $l154; else goto $l155;
            $l155:;
            panda$core$String* $tmp161 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token149);
            $tmp160 = $tmp161;
            panda$core$String* $tmp162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s159, $tmp160);
            $tmp158 = $tmp162;
            panda$core$String* $tmp164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp158, &$s163);
            $tmp157 = $tmp164;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s156, (panda$core$Int64) { 122 }, $tmp157);
            abort();
            $l154:;
        }
        }
        panda$core$String* $tmp168 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token149);
        $tmp167 = $tmp168;
        $tmp166 = $tmp167;
        s165 = $tmp166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp167));
        panda$core$String$Index $tmp173 = panda$core$String$start$R$panda$core$String$Index(s165);
        panda$core$String$Index $tmp174 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s165, $tmp173);
        panda$core$String$Index $tmp175 = panda$core$String$end$R$panda$core$String$Index(s165);
        panda$core$String$Index $tmp176 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s165, $tmp175);
        panda$core$Bit$init$builtin_bit(&$tmp177, false);
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp172, $tmp174, $tmp176, $tmp177);
        panda$core$String* $tmp178 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s165, $tmp172);
        $tmp171 = $tmp178;
        $tmp170 = $tmp171;
        $returnValue169 = $tmp170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp171));
        $tmp148 = 0;
        goto $l146;
        $l179:;
        return $returnValue169;
    }
    $l146:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s165));
    s165 = NULL;
    switch ($tmp148) {
        case 0: goto $l179;
    }
    $l181:;
    abort();
}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token182;
    org$pandalanguage$json$Token$Kind $match$131_9184;
    panda$core$Int64 $tmp185;
    panda$json$JSON* $returnValue187;
    panda$json$JSON* $tmp188;
    panda$json$JSON* $tmp189;
    panda$core$Int64 $tmp192;
    panda$json$JSON* $tmp194;
    panda$json$JSON* $tmp195;
    panda$core$Int64 $tmp198;
    panda$core$String* s203 = NULL;
    panda$core$String* $tmp204;
    panda$core$String* $tmp205;
    panda$json$JSON* $tmp207;
    panda$json$JSON* $tmp208;
    panda$core$Int64 $tmp210;
    panda$core$String* $tmp211;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp212;
    panda$core$Bit $tmp217;
    panda$core$Int64 $tmp222;
    panda$json$JSON* $tmp224;
    panda$json$JSON* $tmp225;
    panda$core$Int64 $tmp227;
    panda$core$String* $tmp228;
    panda$core$Int64 $tmp232;
    panda$json$JSON* $tmp234;
    panda$json$JSON* $tmp235;
    panda$core$Int64 $tmp237;
    panda$core$String* $tmp238;
    panda$core$Int64 $tmp242;
    panda$json$JSON* $tmp244;
    panda$json$JSON* $tmp245;
    panda$core$Int64 $tmp247;
    panda$core$Bit $tmp248;
    panda$core$Int64 $tmp250;
    panda$json$JSON* $tmp252;
    panda$json$JSON* $tmp253;
    panda$core$Int64 $tmp255;
    panda$core$Bit $tmp256;
    panda$core$Int64 $tmp258;
    panda$json$JSON* $tmp260;
    panda$json$JSON* $tmp261;
    panda$core$Int64 $tmp263;
    panda$core$Bit $tmp265;
    panda$core$String* $tmp269;
    panda$core$String* $tmp270;
    panda$core$String* $tmp272;
    org$pandalanguage$json$Token $tmp183 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token182 = $tmp183;
    {
        $match$131_9184 = token182.kind;
        panda$core$Int64$init$builtin_int64(&$tmp185, 9);
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp185);
        if ($tmp186.value) {
        {
            panda$json$JSON* $tmp190 = panda$json$JSONParser$object$R$panda$json$JSON(self);
            $tmp189 = $tmp190;
            $tmp188 = $tmp189;
            $returnValue187 = $tmp188;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            return $returnValue187;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp192, 11);
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp192);
        if ($tmp193.value) {
        {
            panda$json$JSON* $tmp196 = panda$json$JSONParser$array$R$panda$json$JSON(self);
            $tmp195 = $tmp196;
            $tmp194 = $tmp195;
            $returnValue187 = $tmp194;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
            return $returnValue187;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp198, 2);
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp198);
        if ($tmp199.value) {
        {
            int $tmp202;
            {
                panda$core$String* $tmp206 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token182);
                $tmp205 = $tmp206;
                $tmp204 = $tmp205;
                s203 = $tmp204;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
                panda$json$JSON* $tmp209 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                panda$core$Int64$init$builtin_int64(&$tmp210, 2);
                panda$core$String$Index $tmp213 = panda$core$String$start$R$panda$core$String$Index(s203);
                panda$core$String$Index $tmp214 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s203, $tmp213);
                panda$core$String$Index $tmp215 = panda$core$String$end$R$panda$core$String$Index(s203);
                panda$core$String$Index $tmp216 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s203, $tmp215);
                panda$core$Bit$init$builtin_bit(&$tmp217, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp212, $tmp214, $tmp216, $tmp217);
                panda$core$String* $tmp218 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s203, $tmp212);
                $tmp211 = $tmp218;
                panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp209, $tmp210, $tmp211);
                $tmp208 = $tmp209;
                $tmp207 = $tmp208;
                $returnValue187 = $tmp207;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
                $tmp202 = 0;
                goto $l200;
                $l219:;
                return $returnValue187;
            }
            $l200:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s203));
            s203 = NULL;
            switch ($tmp202) {
                case 0: goto $l219;
            }
            $l221:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp222, 3);
        panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp222);
        if ($tmp223.value) {
        {
            panda$json$JSON* $tmp226 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp227, 0);
            panda$core$String* $tmp229 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token182);
            $tmp228 = $tmp229;
            panda$core$Int64$nullable $tmp230 = panda$core$String$convert$R$panda$core$Int64$Q($tmp228);
            panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp226, $tmp227, ((panda$core$Int64) $tmp230.value));
            $tmp225 = $tmp226;
            $tmp224 = $tmp225;
            $returnValue187 = $tmp224;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp228));
            return $returnValue187;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp232, 4);
        panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp232);
        if ($tmp233.value) {
        {
            panda$json$JSON* $tmp236 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp237, 1);
            panda$core$String* $tmp239 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token182);
            $tmp238 = $tmp239;
            panda$core$Real64$nullable $tmp240 = panda$core$String$convert$R$panda$core$Real64$Q($tmp238);
            panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp236, $tmp237, ((panda$core$Real64) $tmp240.value));
            $tmp235 = $tmp236;
            $tmp234 = $tmp235;
            $returnValue187 = $tmp234;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238));
            return $returnValue187;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp242, 6);
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp242);
        if ($tmp243.value) {
        {
            panda$json$JSON* $tmp246 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp247, 3);
            panda$core$Bit$init$builtin_bit(&$tmp248, true);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp246, $tmp247, $tmp248);
            $tmp245 = $tmp246;
            $tmp244 = $tmp245;
            $returnValue187 = $tmp244;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
            return $returnValue187;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp250, 7);
        panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp250);
        if ($tmp251.value) {
        {
            panda$json$JSON* $tmp254 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp255, 3);
            panda$core$Bit$init$builtin_bit(&$tmp256, false);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp254, $tmp255, $tmp256);
            $tmp253 = $tmp254;
            $tmp252 = $tmp253;
            $returnValue187 = $tmp252;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
            return $returnValue187;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp258, 8);
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9184.$rawValue, $tmp258);
        if ($tmp259.value) {
        {
            panda$json$JSON* $tmp262 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp263, 6);
            panda$json$JSON$init$panda$core$Int64($tmp262, $tmp263);
            $tmp261 = $tmp262;
            $tmp260 = $tmp261;
            $returnValue187 = $tmp260;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
            return $returnValue187;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp265, false);
            if ($tmp265.value) goto $l266; else goto $l267;
            $l267:;
            panda$core$String* $tmp273 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token182);
            $tmp272 = $tmp273;
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s271, $tmp272);
            $tmp270 = $tmp274;
            panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s275);
            $tmp269 = $tmp276;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s268, (panda$core$Int64) { 150 }, $tmp269);
            abort();
            $l266:;
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
    panda$core$String* $tmp277;
    org$pandalanguage$json$Lexer* $tmp279;
    org$pandalanguage$json$Lexer* $tmp280;
    self->source = NULL;
    self->lexer = NULL;
    $tmp277 = &$s278;
    self->source = $tmp277;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
    org$pandalanguage$json$Lexer* $tmp281 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
    org$pandalanguage$json$Lexer$init($tmp281);
    $tmp280 = $tmp281;
    $tmp279 = $tmp280;
    self->lexer = $tmp279;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self) {
    int $tmp284;
    {
    }
    $tmp284 = -1;
    goto $l282;
    $l282:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp284) {
        case -1: goto $l285;
    }
    $l285:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
}

