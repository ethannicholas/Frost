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
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x27\x3a\x27", 12, -1936739573544282417, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x65\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74", 22, 2316822374097444650, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s167 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x73\x74\x72\x69\x6e\x67\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 28, 4645362378420439520, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x6f\x64\x65\x3a\x20\x27", 15, -4926505223066910381, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4a\x53\x4f\x4e\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 16, 6076432502725271030, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };

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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
    org$pandalanguage$json$Lexer$start$panda$core$String(self->lexer, p_json);
    panda$json$JSON* $tmp7 = panda$json$JSONParser$node$R$panda$json$JSON(self);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    $returnValue4 = $tmp5;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
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
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
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
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
        $l60:;
        while (true) {
        {
            panda$json$JSON* $tmp63 = panda$json$JSONParser$node$R$panda$json$JSON(self);
            $tmp62 = $tmp63;
            panda$collections$Array$add$panda$collections$Array$T(result56, ((panda$core$Object*) $tmp62));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
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
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
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
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result56));
    result56 = NULL;
    switch ($tmp43) {
        case 1: goto $l74;
        case 0: goto $l54;
        case -1: goto $l83;
    }
    $l83:;
    if (false) goto $l84; else goto $l85;
    $l85:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s86, (panda$core$Int64) { 76 }, &$s87);
    abort();
    $l84:;
    abort();
}
panda$json$JSON* panda$json$JSONParser$object$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token$Kind $tmp91;
    panda$core$Int64 $tmp92;
    panda$json$JSON* $returnValue94;
    panda$json$JSON* $tmp95;
    panda$json$JSON* $tmp96;
    panda$core$Int64 $tmp98;
    panda$collections$ImmutableHashMap* $tmp99;
    panda$collections$HashMap* result103 = NULL;
    panda$collections$HashMap* $tmp104;
    panda$collections$HashMap* $tmp105;
    panda$core$String* key112 = NULL;
    panda$core$String* $tmp113;
    panda$core$String* $tmp114;
    org$pandalanguage$json$Token colon116;
    panda$core$Int64 $tmp118;
    panda$core$Bit $tmp120;
    panda$json$JSON* $tmp125;
    org$pandalanguage$json$Token$Kind $match$107_13127;
    panda$core$Int64 $tmp129;
    panda$json$JSON* $tmp131;
    panda$json$JSON* $tmp132;
    panda$core$Int64 $tmp134;
    panda$collections$ImmutableHashMap* $tmp135;
    panda$core$Int64 $tmp140;
    panda$core$Bit $tmp143;
    int $tmp90;
    {
        panda$core$Int64$init$builtin_int64(&$tmp92, 10);
        org$pandalanguage$json$Token$Kind$init$panda$core$Int64(&$tmp91, $tmp92);
        org$pandalanguage$json$Token$nullable $tmp93 = panda$json$JSONParser$checkNext$org$pandalanguage$json$Token$Kind$R$org$pandalanguage$json$Token$Q(self, $tmp91);
        if (((panda$core$Bit) { $tmp93.nonnull }).value) {
        {
            panda$json$JSON* $tmp97 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp98, 4);
            panda$collections$ImmutableHashMap* $tmp100 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
            panda$collections$ImmutableHashMap$init($tmp100);
            $tmp99 = $tmp100;
            panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp97, $tmp98, $tmp99);
            $tmp96 = $tmp97;
            $tmp95 = $tmp96;
            $returnValue94 = $tmp95;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
            $tmp90 = 0;
            goto $l88;
            $l101:;
            return $returnValue94;
        }
        }
        panda$collections$HashMap* $tmp106 = (panda$collections$HashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
        panda$collections$HashMap$init($tmp106);
        $tmp105 = $tmp106;
        $tmp104 = $tmp105;
        result103 = $tmp104;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
        $l107:;
        while (true) {
        {
            int $tmp111;
            {
                panda$core$String* $tmp115 = panda$json$JSONParser$string$R$panda$core$String(self);
                $tmp114 = $tmp115;
                $tmp113 = $tmp114;
                key112 = $tmp113;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
                org$pandalanguage$json$Token $tmp117 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                colon116 = $tmp117;
                panda$core$Int64$init$builtin_int64(&$tmp118, 14);
                panda$core$Bit $tmp119 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(colon116.kind.$rawValue, $tmp118);
                if ($tmp119.value) {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp120, false);
                    if ($tmp120.value) goto $l121; else goto $l122;
                    $l122:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s123, (panda$core$Int64) { 104 }, &$s124);
                    abort();
                    $l121:;
                }
                }
                panda$json$JSON* $tmp126 = panda$json$JSONParser$node$R$panda$json$JSON(self);
                $tmp125 = $tmp126;
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(result103, ((panda$collections$Key*) key112), ((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
                {
                    org$pandalanguage$json$Token $tmp128 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
                    $match$107_13127 = $tmp128.kind;
                    panda$core$Int64$init$builtin_int64(&$tmp129, 10);
                    panda$core$Bit $tmp130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_13127.$rawValue, $tmp129);
                    if ($tmp130.value) {
                    {
                        panda$json$JSON* $tmp133 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                        panda$core$Int64$init$builtin_int64(&$tmp134, 4);
                        panda$collections$ImmutableHashMap* $tmp136 = panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(result103);
                        $tmp135 = $tmp136;
                        panda$json$JSON$init$panda$core$Int64$panda$collections$ImmutableHashMap$LTpanda$core$String$Cpanda$json$JSON$GT($tmp133, $tmp134, $tmp135);
                        $tmp132 = $tmp133;
                        $tmp131 = $tmp132;
                        $returnValue94 = $tmp131;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
                        $tmp111 = 0;
                        goto $l109;
                        $l137:;
                        $tmp90 = 1;
                        goto $l88;
                        $l138:;
                        return $returnValue94;
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp140, 13);
                    panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$107_13127.$rawValue, $tmp140);
                    if ($tmp141.value) {
                    {
                        $tmp111 = 1;
                        goto $l109;
                        $l142:;
                        goto $l107;
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp143, false);
                        if ($tmp143.value) goto $l144; else goto $l145;
                        $l145:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s146, (panda$core$Int64) { 113 }, &$s147);
                        abort();
                        $l144:;
                    }
                    }
                    }
                }
            }
            $tmp111 = -1;
            goto $l109;
            $l109:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) key112));
            key112 = NULL;
            switch ($tmp111) {
                case 1: goto $l142;
                case -1: goto $l148;
                case 0: goto $l137;
            }
            $l148:;
        }
        }
        $l108:;
    }
    $tmp90 = -1;
    goto $l88;
    $l88:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result103));
    result103 = NULL;
    switch ($tmp90) {
        case -1: goto $l149;
        case 1: goto $l138;
        case 0: goto $l101;
    }
    $l149:;
    if (false) goto $l150; else goto $l151;
    $l151:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s152, (panda$core$Int64) { 95 }, &$s153);
    abort();
    $l150:;
    abort();
}
panda$core$String* panda$json$JSONParser$string$R$panda$core$String(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token157;
    panda$core$Int64 $tmp159;
    panda$core$Bit $tmp161;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    panda$core$String* $tmp168;
    panda$core$String* s173 = NULL;
    panda$core$String* $tmp174;
    panda$core$String* $tmp175;
    panda$core$String* $returnValue177;
    panda$core$String* $tmp178;
    panda$core$String* $tmp179;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp180;
    panda$core$Bit $tmp185;
    int $tmp156;
    {
        org$pandalanguage$json$Token $tmp158 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
        token157 = $tmp158;
        panda$core$Int64$init$builtin_int64(&$tmp159, 2);
        panda$core$Bit $tmp160 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(token157.kind.$rawValue, $tmp159);
        if ($tmp160.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp161, false);
            if ($tmp161.value) goto $l162; else goto $l163;
            $l163:;
            panda$core$String* $tmp169 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token157);
            $tmp168 = $tmp169;
            panda$core$String* $tmp170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s167, $tmp168);
            $tmp166 = $tmp170;
            panda$core$String* $tmp172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp166, &$s171);
            $tmp165 = $tmp172;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s164, (panda$core$Int64) { 122 }, $tmp165);
            abort();
            $l162:;
        }
        }
        panda$core$String* $tmp176 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token157);
        $tmp175 = $tmp176;
        $tmp174 = $tmp175;
        s173 = $tmp174;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
        panda$core$String$Index $tmp181 = panda$core$String$start$R$panda$core$String$Index(s173);
        panda$core$String$Index $tmp182 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s173, $tmp181);
        panda$core$String$Index $tmp183 = panda$core$String$end$R$panda$core$String$Index(s173);
        panda$core$String$Index $tmp184 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s173, $tmp183);
        panda$core$Bit$init$builtin_bit(&$tmp185, false);
        panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp180, $tmp182, $tmp184, $tmp185);
        panda$core$String* $tmp186 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s173, $tmp180);
        $tmp179 = $tmp186;
        $tmp178 = $tmp179;
        $returnValue177 = $tmp178;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp179));
        $tmp156 = 0;
        goto $l154;
        $l187:;
        return $returnValue177;
    }
    $l154:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s173));
    s173 = NULL;
    switch ($tmp156) {
        case 0: goto $l187;
    }
    $l189:;
    if (false) goto $l190; else goto $l191;
    $l191:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s192, (panda$core$Int64) { 119 }, &$s193);
    abort();
    $l190:;
    abort();
}
panda$json$JSON* panda$json$JSONParser$node$R$panda$json$JSON(panda$json$JSONParser* self) {
    org$pandalanguage$json$Token token194;
    org$pandalanguage$json$Token$Kind $match$131_9196;
    panda$core$Int64 $tmp197;
    panda$json$JSON* $returnValue199;
    panda$json$JSON* $tmp200;
    panda$json$JSON* $tmp201;
    panda$core$Int64 $tmp204;
    panda$json$JSON* $tmp206;
    panda$json$JSON* $tmp207;
    panda$core$Int64 $tmp210;
    panda$core$String* s215 = NULL;
    panda$core$String* $tmp216;
    panda$core$String* $tmp217;
    panda$json$JSON* $tmp219;
    panda$json$JSON* $tmp220;
    panda$core$Int64 $tmp222;
    panda$core$String* $tmp223;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp224;
    panda$core$Bit $tmp229;
    panda$core$Int64 $tmp234;
    panda$json$JSON* $tmp236;
    panda$json$JSON* $tmp237;
    panda$core$Int64 $tmp239;
    panda$core$String* $tmp240;
    panda$core$Int64 $tmp244;
    panda$json$JSON* $tmp246;
    panda$json$JSON* $tmp247;
    panda$core$Int64 $tmp249;
    panda$core$String* $tmp250;
    panda$core$Int64 $tmp254;
    panda$json$JSON* $tmp256;
    panda$json$JSON* $tmp257;
    panda$core$Int64 $tmp259;
    panda$core$Bit $tmp260;
    panda$core$Int64 $tmp262;
    panda$json$JSON* $tmp264;
    panda$json$JSON* $tmp265;
    panda$core$Int64 $tmp267;
    panda$core$Bit $tmp268;
    panda$core$Int64 $tmp270;
    panda$json$JSON* $tmp272;
    panda$json$JSON* $tmp273;
    panda$core$Int64 $tmp275;
    panda$core$Bit $tmp277;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$String* $tmp284;
    org$pandalanguage$json$Token $tmp195 = panda$json$JSONParser$next$R$org$pandalanguage$json$Token(self);
    token194 = $tmp195;
    {
        $match$131_9196 = token194.kind;
        panda$core$Int64$init$builtin_int64(&$tmp197, 9);
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp197);
        if ($tmp198.value) {
        {
            panda$json$JSON* $tmp202 = panda$json$JSONParser$object$R$panda$json$JSON(self);
            $tmp201 = $tmp202;
            $tmp200 = $tmp201;
            $returnValue199 = $tmp200;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp204, 11);
        panda$core$Bit $tmp205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp204);
        if ($tmp205.value) {
        {
            panda$json$JSON* $tmp208 = panda$json$JSONParser$array$R$panda$json$JSON(self);
            $tmp207 = $tmp208;
            $tmp206 = $tmp207;
            $returnValue199 = $tmp206;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp210, 2);
        panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp210);
        if ($tmp211.value) {
        {
            int $tmp214;
            {
                panda$core$String* $tmp218 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token194);
                $tmp217 = $tmp218;
                $tmp216 = $tmp217;
                s215 = $tmp216;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
                panda$json$JSON* $tmp221 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
                panda$core$Int64$init$builtin_int64(&$tmp222, 2);
                panda$core$String$Index $tmp225 = panda$core$String$start$R$panda$core$String$Index(s215);
                panda$core$String$Index $tmp226 = panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(s215, $tmp225);
                panda$core$String$Index $tmp227 = panda$core$String$end$R$panda$core$String$Index(s215);
                panda$core$String$Index $tmp228 = panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(s215, $tmp227);
                panda$core$Bit$init$builtin_bit(&$tmp229, false);
                panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp224, $tmp226, $tmp228, $tmp229);
                panda$core$String* $tmp230 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(s215, $tmp224);
                $tmp223 = $tmp230;
                panda$json$JSON$init$panda$core$Int64$panda$core$String($tmp221, $tmp222, $tmp223);
                $tmp220 = $tmp221;
                $tmp219 = $tmp220;
                $returnValue199 = $tmp219;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
                $tmp214 = 0;
                goto $l212;
                $l231:;
                return $returnValue199;
            }
            $l212:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s215));
            s215 = NULL;
            switch ($tmp214) {
                case 0: goto $l231;
            }
            $l233:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp234, 3);
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp234);
        if ($tmp235.value) {
        {
            panda$json$JSON* $tmp238 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp239, 0);
            panda$core$String* $tmp241 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token194);
            $tmp240 = $tmp241;
            panda$core$Int64$nullable $tmp242 = panda$core$String$convert$R$panda$core$Int64$Q($tmp240);
            panda$json$JSON$init$panda$core$Int64$panda$core$Int64($tmp238, $tmp239, ((panda$core$Int64) $tmp242.value));
            $tmp237 = $tmp238;
            $tmp236 = $tmp237;
            $returnValue199 = $tmp236;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp236));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp244, 4);
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp244);
        if ($tmp245.value) {
        {
            panda$json$JSON* $tmp248 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp249, 1);
            panda$core$String* $tmp251 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token194);
            $tmp250 = $tmp251;
            panda$core$Real64$nullable $tmp252 = panda$core$String$convert$R$panda$core$Real64$Q($tmp250);
            panda$json$JSON$init$panda$core$Int64$panda$core$Real64($tmp248, $tmp249, ((panda$core$Real64) $tmp252.value));
            $tmp247 = $tmp248;
            $tmp246 = $tmp247;
            $returnValue199 = $tmp246;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp254, 6);
        panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp254);
        if ($tmp255.value) {
        {
            panda$json$JSON* $tmp258 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp259, 3);
            panda$core$Bit$init$builtin_bit(&$tmp260, true);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp258, $tmp259, $tmp260);
            $tmp257 = $tmp258;
            $tmp256 = $tmp257;
            $returnValue199 = $tmp256;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp262, 7);
        panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp262);
        if ($tmp263.value) {
        {
            panda$json$JSON* $tmp266 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp267, 3);
            panda$core$Bit$init$builtin_bit(&$tmp268, false);
            panda$json$JSON$init$panda$core$Int64$panda$core$Bit($tmp266, $tmp267, $tmp268);
            $tmp265 = $tmp266;
            $tmp264 = $tmp265;
            $returnValue199 = $tmp264;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp270, 8);
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$131_9196.$rawValue, $tmp270);
        if ($tmp271.value) {
        {
            panda$json$JSON* $tmp274 = (panda$json$JSON*) pandaObjectAlloc(32, (panda$core$Class*) &panda$json$JSON$class);
            panda$core$Int64$init$builtin_int64(&$tmp275, 6);
            panda$json$JSON$init$panda$core$Int64($tmp274, $tmp275);
            $tmp273 = $tmp274;
            $tmp272 = $tmp273;
            $returnValue199 = $tmp272;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
            return $returnValue199;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp277, false);
            if ($tmp277.value) goto $l278; else goto $l279;
            $l279:;
            panda$core$String* $tmp285 = panda$json$JSONParser$text$org$pandalanguage$json$Token$R$panda$core$String(self, token194);
            $tmp284 = $tmp285;
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s283, $tmp284);
            $tmp282 = $tmp286;
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s287);
            $tmp281 = $tmp288;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s280, (panda$core$Int64) { 150 }, $tmp281);
            abort();
            $l278:;
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
    if (false) goto $l289; else goto $l290;
    $l290:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s291, (panda$core$Int64) { 129 }, &$s292);
    abort();
    $l289:;
    abort();
}
void panda$json$JSONParser$init(panda$json$JSONParser* self) {
    panda$core$String* $tmp293;
    org$pandalanguage$json$Lexer* $tmp295;
    org$pandalanguage$json$Lexer* $tmp296;
    self->source = NULL;
    self->lexer = NULL;
    $tmp293 = &$s294;
    self->source = $tmp293;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
    org$pandalanguage$json$Lexer* $tmp297 = (org$pandalanguage$json$Lexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$json$Lexer$class);
    org$pandalanguage$json$Lexer$init($tmp297);
    $tmp296 = $tmp297;
    $tmp295 = $tmp296;
    self->lexer = $tmp295;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
    self->pushbackToken = ((org$pandalanguage$json$Token$nullable) { .nonnull = false });
}
void panda$json$JSONParser$cleanup(panda$json$JSONParser* self) {
    int $tmp300;
    {
    }
    $tmp300 = -1;
    goto $l298;
    $l298:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp300) {
        case -1: goto $l301;
    }
    $l301:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->lexer));
}

