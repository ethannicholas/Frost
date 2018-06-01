#include "org/pandalanguage/regex/RegexParser.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/regex/RegexLexer.h"
#include "panda/core/Panda.h"
#include "panda/collections/SpecializedArray.LTorg/pandalanguage/regex/RegexToken.GT.h"
#include "panda/io/File.h"
#include "org/pandalanguage/regex/RegexToken.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/regex/RegexToken/Kind.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

static panda$core$String $s1;
org$pandalanguage$regex$RegexParser$class_type org$pandalanguage$regex$RegexParser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$regex$RegexParser$cleanup, org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String, org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken, org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken, org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken, org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String, org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String, org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 35, -3638705302730546102, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };

void org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$regex$RegexParser* self, panda$threads$MessageQueue* p_errors) {
    org$pandalanguage$regex$RegexLexer* $tmp2;
    org$pandalanguage$regex$RegexLexer* $tmp3;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp5;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp6;
    panda$threads$MessageQueue* $tmp8;
    panda$threads$MessageQueue* $tmp9;
    self->lexer = NULL;
    self->errors = NULL;
    self->path = NULL;
    self->source = NULL;
    self->pushbackBuffer = NULL;
    org$pandalanguage$regex$RegexLexer* $tmp4 = (org$pandalanguage$regex$RegexLexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$regex$RegexLexer$class);
    org$pandalanguage$regex$RegexLexer$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->lexer = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp7 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init($tmp7);
    $tmp6 = $tmp7;
    $tmp5 = $tmp6;
    self->pushbackBuffer = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    {
        $tmp8 = self->errors;
        $tmp9 = p_errors;
        self->errors = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
}
void org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(org$pandalanguage$regex$RegexParser* self, panda$io$File* p_path, panda$core$String* p_source) {
    panda$io$File* $tmp10;
    panda$io$File* $tmp11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    org$pandalanguage$regex$RegexLexer$start$panda$core$String(self->lexer, p_source);
    {
        $tmp10 = self->path;
        $tmp11 = p_path;
        self->path = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
    {
        $tmp12 = self->source;
        $tmp13 = p_source;
        self->source = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(self->pushbackBuffer);
}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Int64 idx16;
    org$pandalanguage$regex$RegexToken result19;
    org$pandalanguage$regex$RegexToken $returnValue21;
    org$pandalanguage$regex$RegexToken result23;
    panda$core$Int64 $tmp14 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp15 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp14, ((panda$core$Int64) { 0 }));
    if ($tmp15.value) {
    {
        panda$core$Int64 $tmp17 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64 $tmp18 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp17, ((panda$core$Int64) { 1 }));
        idx16 = $tmp18;
        org$pandalanguage$regex$RegexToken $tmp20 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, idx16);
        result19 = $tmp20;
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx16);
        $returnValue21 = result19;
        return $returnValue21;
    }
    }
    org$pandalanguage$regex$RegexToken $tmp24 = org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken(self->lexer);
    result23 = $tmp24;
    $returnValue21 = result23;
    return $returnValue21;
}
void org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, p_token);
}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken $returnValue29;
    panda$core$Int64 $tmp26 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp26, ((panda$core$Int64) { 0 }));
    if ($tmp27.value) {
    {
        org$pandalanguage$regex$RegexToken $tmp28 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
        org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, $tmp28);
    }
    }
    panda$core$Int64 $tmp30 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64 $tmp31 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp30, ((panda$core$Int64) { 1 }));
    org$pandalanguage$regex$RegexToken $tmp32 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, $tmp31);
    $returnValue29 = $tmp32;
    return $returnValue29;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind) {
    org$pandalanguage$regex$RegexToken result34;
    panda$core$Bit $returnValue37;
    org$pandalanguage$regex$RegexToken $tmp35 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    result34 = $tmp35;
    panda$core$Bit $tmp36 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result34.kind.$rawValue, p_kind.$rawValue);
    if ($tmp36.value) {
    {
        $returnValue37 = ((panda$core$Bit) { true });
        return $returnValue37;
    }
    }
    org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, result34);
    $returnValue37 = ((panda$core$Bit) { false });
    return $returnValue37;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$regex$RegexToken result40;
    panda$core$Bit $returnValue43;
    panda$core$String* $tmp45;
    panda$core$String* $tmp46;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    panda$core$String* $tmp53;
    org$pandalanguage$regex$RegexToken $tmp41 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    result40 = $tmp41;
    panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result40.kind.$rawValue, p_kind.$rawValue);
    if ($tmp42.value) {
    {
        $returnValue43 = ((panda$core$Bit) { true });
        return $returnValue43;
    }
    }
    panda$core$String* $tmp50 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s49, p_expected);
    $tmp48 = $tmp50;
    panda$core$String* $tmp52 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s51);
    $tmp47 = $tmp52;
    panda$core$String* $tmp54 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(self, result40);
    $tmp53 = $tmp54;
    panda$core$String* $tmp55 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, $tmp53);
    $tmp46 = $tmp55;
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s56);
    $tmp45 = $tmp57;
    org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(self, result40, $tmp45);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    $returnValue43 = ((panda$core$Bit) { false });
    return $returnValue43;
}
void org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp59;
    org$pandalanguage$pandac$Compiler$Error* $tmp60 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
    org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp60, self->path, p_token.position, p_msg);
    $tmp59 = $tmp60;
    panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp59));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
}
panda$core$String* org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token) {
    panda$core$String* $returnValue61;
    panda$core$String* $tmp62;
    panda$core$String* $tmp63;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp64;
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp64, p_token.start, p_token.end, ((panda$core$Bit) { false }));
    panda$core$String* $tmp65 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp64);
    $tmp63 = $tmp65;
    $tmp62 = $tmp63;
    $returnValue61 = $tmp62;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
    return $returnValue61;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken char69;
    panda$core$String* $tmp71;
    panda$core$Bit $returnValue75;
    $l67:;
    while (true) {
    {
        org$pandalanguage$regex$RegexToken $tmp70 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
        char69 = $tmp70;
        panda$core$String* $tmp72 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(self, char69);
        $tmp71 = $tmp72;
        panda$core$Bit $tmp74 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp71, &$s73);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        if ($tmp74.value) {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, char69);
            $returnValue75 = ((panda$core$Bit) { true });
            return $returnValue75;
        }
        }
        panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(char69.kind.$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp77.value) {
        {
            $returnValue75 = ((panda$core$Bit) { false });
            return $returnValue75;
        }
        }
    }
    }
    $l68:;
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken$Kind $tmp79;
    panda$core$Bit $returnValue83;
    org$pandalanguage$regex$RegexToken$Kind $tmp88;
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp79, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp81 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp79, &$s80);
    panda$core$Bit $tmp82 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp81);
    if ($tmp82.value) {
    {
        $returnValue83 = ((panda$core$Bit) { false });
        return $returnValue83;
    }
    }
    $l85:;
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp88, ((panda$core$Int64) { 3 }));
    panda$core$Bit $tmp89 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp88);
    bool $tmp87 = $tmp89.value;
    if (!$tmp87) goto $l86;
    {
    }
    goto $l85;
    $l86:;
    $returnValue83 = ((panda$core$Bit) { true });
    return $returnValue83;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token91;
    org$pandalanguage$regex$RegexToken$Kind $match$112_993;
    panda$core$Bit $returnValue103;
    org$pandalanguage$regex$RegexToken $tmp92 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token91 = $tmp92;
    {
        $match$112_993 = token91.kind;
        panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_993.$rawValue, ((panda$core$Int64) { 4 }));
        bool $tmp95 = $tmp96.value;
        if ($tmp95) goto $l97;
        panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_993.$rawValue, ((panda$core$Int64) { 5 }));
        $tmp95 = $tmp98.value;
        $l97:;
        panda$core$Bit $tmp99 = { $tmp95 };
        bool $tmp94 = $tmp99.value;
        if ($tmp94) goto $l100;
        panda$core$Bit $tmp101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_993.$rawValue, ((panda$core$Int64) { 6 }));
        $tmp94 = $tmp101.value;
        $l100:;
        panda$core$Bit $tmp102 = { $tmp94 };
        if ($tmp102.value) {
        {
            $returnValue103 = ((panda$core$Bit) { true });
            return $returnValue103;
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token91);
            $returnValue103 = ((panda$core$Bit) { false });
            return $returnValue103;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token106;
    org$pandalanguage$regex$RegexToken$Kind $match$127_9108;
    panda$core$Bit $returnValue114;
    org$pandalanguage$regex$RegexToken$Kind $tmp120;
    org$pandalanguage$regex$RegexToken$Kind $tmp128;
    org$pandalanguage$regex$RegexToken$Kind $tmp136;
    org$pandalanguage$regex$RegexToken$Kind $tmp138;
    org$pandalanguage$regex$RegexToken $tmp107 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token106 = $tmp107;
    {
        $match$127_9108 = token106.kind;
        panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9108.$rawValue, ((panda$core$Int64) { 2 }));
        bool $tmp109 = $tmp110.value;
        if ($tmp109) goto $l111;
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9108.$rawValue, ((panda$core$Int64) { 3 }));
        $tmp109 = $tmp112.value;
        $l111:;
        panda$core$Bit $tmp113 = { $tmp109 };
        if ($tmp113.value) {
        {
            $returnValue114 = ((panda$core$Bit) { true });
            return $returnValue114;
        }
        }
        else {
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9108.$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp116.value) {
        {
            panda$core$Bit $tmp117 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
            panda$core$Bit $tmp118 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp117);
            if ($tmp118.value) {
            {
                $returnValue114 = ((panda$core$Bit) { false });
                return $returnValue114;
            }
            }
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp120, ((panda$core$Int64) { 8 }));
            panda$core$Bit $tmp122 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp120, &$s121);
            $returnValue114 = $tmp122;
            return $returnValue114;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9108.$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp124.value) {
        {
            panda$core$Bit $tmp125 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(self);
            panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
            if ($tmp126.value) {
            {
                $returnValue114 = ((panda$core$Bit) { false });
                return $returnValue114;
            }
            }
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp128, ((panda$core$Int64) { 12 }));
            panda$core$Bit $tmp130 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp128, &$s129);
            $returnValue114 = $tmp130;
            return $returnValue114;
        }
        }
        else {
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9108.$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp132.value) {
        {
            panda$core$Bit $tmp133 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            panda$core$Bit $tmp134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp133);
            if ($tmp134.value) {
            {
                $returnValue114 = ((panda$core$Bit) { false });
                return $returnValue114;
            }
            }
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp136, ((panda$core$Int64) { 13 }));
            panda$core$Bit $tmp137 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp136);
            if ($tmp137.value) {
            {
                org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            }
            }
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp138, ((panda$core$Int64) { 10 }));
            panda$core$Bit $tmp140 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp138, &$s139);
            $returnValue114 = $tmp140;
            return $returnValue114;
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token106);
            $returnValue114 = ((panda$core$Bit) { false });
            return $returnValue114;
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue145;
    panda$core$Bit $tmp143 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(self);
    panda$core$Bit $tmp144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp143);
    if ($tmp144.value) {
    {
        $returnValue145 = ((panda$core$Bit) { false });
        return $returnValue145;
    }
    }
    org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(self);
    $returnValue145 = ((panda$core$Bit) { true });
    return $returnValue145;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue150;
    panda$core$Bit $tmp148 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(self);
    panda$core$Bit $tmp149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp148);
    if ($tmp149.value) {
    {
        $returnValue150 = ((panda$core$Bit) { false });
        return $returnValue150;
    }
    }
    org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    $returnValue150 = ((panda$core$Bit) { true });
    return $returnValue150;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue155;
    panda$core$Bit $tmp153 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit $tmp154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp153);
    if ($tmp154.value) {
    {
        $returnValue155 = ((panda$core$Bit) { false });
        return $returnValue155;
    }
    }
    org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    $returnValue155 = ((panda$core$Bit) { true });
    return $returnValue155;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$pandac$Position position158;
    org$pandalanguage$pandac$Position $tmp159;
    panda$core$Int64 start160;
    org$pandalanguage$pandac$ASTNode* $returnValue163;
    org$pandalanguage$pandac$ASTNode* $tmp164;
    panda$core$Int64 end167;
    panda$core$Int64 length168;
    panda$core$Char8* result170;
    panda$core$Range$LTpanda$core$Int64$GT $tmp171;
    org$pandalanguage$pandac$ASTNode* $tmp192;
    org$pandalanguage$pandac$ASTNode* $tmp193;
    panda$core$String* $tmp195;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(self->pushbackBuffer);
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp159, self->lexer->dfa->line, self->lexer->dfa->column);
    position158 = $tmp159;
    start160 = self->lexer->dfa->offset;
    panda$core$Bit $tmp161 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp161);
    if ($tmp162.value) {
    {
        $tmp164 = NULL;
        $returnValue163 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        return $returnValue163;
    }
    }
    panda$core$Int64 $tmp166 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->lexer->dfa->offset, ((panda$core$Int64) { 1 }));
    self->lexer->dfa->offset = $tmp166;
    end167 = self->lexer->dfa->offset;
    panda$core$Int64 $tmp169 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end167, start160);
    length168 = $tmp169;
    result170 = ((panda$core$Char8*) pandaZAlloc(length168.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp171, start160, end167, ((panda$core$Bit) { false }));
    int64_t $tmp173 = $tmp171.min.value;
    panda$core$Int64 i172 = { $tmp173 };
    int64_t $tmp175 = $tmp171.max.value;
    bool $tmp176 = $tmp171.inclusive.value;
    if ($tmp176) goto $l183; else goto $l184;
    $l183:;
    if ($tmp173 <= $tmp175) goto $l177; else goto $l179;
    $l184:;
    if ($tmp173 < $tmp175) goto $l177; else goto $l179;
    $l177:;
    {
        panda$core$Int64 $tmp185 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i172, start160);
        result170[$tmp185.value] = self->lexer->dfa->source[i172.value];
    }
    $l180:;
    int64_t $tmp187 = $tmp175 - i172.value;
    if ($tmp176) goto $l188; else goto $l189;
    $l188:;
    if ((uint64_t) $tmp187 >= 1) goto $l186; else goto $l179;
    $l189:;
    if ((uint64_t) $tmp187 > 1) goto $l186; else goto $l179;
    $l186:;
    i172.value += 1;
    goto $l177;
    $l179:;
    org$pandalanguage$pandac$ASTNode* $tmp194 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$String* $tmp196 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp196, result170, length168);
    $tmp195 = $tmp196;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp194, ((panda$core$Int64) { 35 }), position158, $tmp195);
    $tmp193 = $tmp194;
    $tmp192 = $tmp193;
    $returnValue163 = $tmp192;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp193));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
    return $returnValue163;
}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* self) {
    int $tmp200;
    {
    }
    $tmp200 = -1;
    goto $l198;
    $l198:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp200) {
        case -1: goto $l201;
    }
    $l201:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

