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
static panda$core$String $s56 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s58 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };

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
    panda$core$Int64 $tmp15;
    panda$core$Int64 idx17;
    panda$core$Int64 $tmp19;
    org$pandalanguage$regex$RegexToken result21;
    org$pandalanguage$regex$RegexToken $returnValue23;
    org$pandalanguage$regex$RegexToken result25;
    panda$core$Int64 $tmp14 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp15, 0);
    panda$core$Bit $tmp16 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp14, $tmp15);
    if ($tmp16.value) {
    {
        panda$core$Int64 $tmp18 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
        panda$core$Int64$init$builtin_int64(&$tmp19, 1);
        panda$core$Int64 $tmp20 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp18, $tmp19);
        idx17 = $tmp20;
        org$pandalanguage$regex$RegexToken $tmp22 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, idx17);
        result21 = $tmp22;
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64(self->pushbackBuffer, idx17);
        $returnValue23 = result21;
        return $returnValue23;
    }
    }
    org$pandalanguage$regex$RegexToken $tmp26 = org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken(self->lexer);
    result25 = $tmp26;
    $returnValue23 = result25;
    return $returnValue23;
}
void org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, p_token);
}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Int64 $tmp29;
    org$pandalanguage$regex$RegexToken $returnValue32;
    panda$core$Int64 $tmp34;
    panda$core$Int64 $tmp28 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp29, 0);
    panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp28, $tmp29);
    if ($tmp30.value) {
    {
        org$pandalanguage$regex$RegexToken $tmp31 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
        org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, $tmp31);
    }
    }
    panda$core$Int64 $tmp33 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$get_count$R$panda$core$Int64(self->pushbackBuffer);
    panda$core$Int64$init$builtin_int64(&$tmp34, 1);
    panda$core$Int64 $tmp35 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp33, $tmp34);
    org$pandalanguage$regex$RegexToken $tmp36 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, $tmp35);
    $returnValue32 = $tmp36;
    return $returnValue32;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind) {
    org$pandalanguage$regex$RegexToken result38;
    panda$core$Bit $returnValue41;
    panda$core$Bit $tmp42;
    panda$core$Bit $tmp44;
    org$pandalanguage$regex$RegexToken $tmp39 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    result38 = $tmp39;
    panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result38.kind.$rawValue, p_kind.$rawValue);
    if ($tmp40.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp42, true);
        $returnValue41 = $tmp42;
        return $returnValue41;
    }
    }
    org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, result38);
    panda$core$Bit$init$builtin_bit(&$tmp44, false);
    $returnValue41 = $tmp44;
    return $returnValue41;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$regex$RegexToken result46;
    panda$core$Bit $returnValue49;
    panda$core$Bit $tmp50;
    panda$core$String* $tmp52;
    panda$core$String* $tmp53;
    panda$core$String* $tmp54;
    panda$core$String* $tmp55;
    panda$core$String* $tmp60;
    panda$core$Bit $tmp65;
    org$pandalanguage$regex$RegexToken $tmp47 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    result46 = $tmp47;
    panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result46.kind.$rawValue, p_kind.$rawValue);
    if ($tmp48.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp50, true);
        $returnValue49 = $tmp50;
        return $returnValue49;
    }
    }
    panda$core$String* $tmp57 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s56, p_expected);
    $tmp55 = $tmp57;
    panda$core$String* $tmp59 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp55, &$s58);
    $tmp54 = $tmp59;
    panda$core$String* $tmp61 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(self, result46);
    $tmp60 = $tmp61;
    panda$core$String* $tmp62 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp54, $tmp60);
    $tmp53 = $tmp62;
    panda$core$String* $tmp64 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp53, &$s63);
    $tmp52 = $tmp64;
    org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(self, result46, $tmp52);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    panda$core$Bit$init$builtin_bit(&$tmp65, false);
    $returnValue49 = $tmp65;
    return $returnValue49;
}
void org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp67;
    org$pandalanguage$pandac$Compiler$Error* $tmp68 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
    org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp68, self->path, p_token.position, p_msg);
    $tmp67 = $tmp68;
    panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp67));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
}
panda$core$String* org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token) {
    panda$core$String* $returnValue69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp72;
    panda$core$Bit $tmp73;
    panda$core$Bit$init$builtin_bit(&$tmp73, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp72, p_token.start, p_token.end, $tmp73);
    panda$core$String* $tmp74 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp72);
    $tmp71 = $tmp74;
    $tmp70 = $tmp71;
    $returnValue69 = $tmp70;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    return $returnValue69;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken char78;
    panda$core$String* $tmp80;
    panda$core$Bit $returnValue84;
    panda$core$Bit $tmp85;
    panda$core$Int64 $tmp87;
    panda$core$Bit $tmp89;
    $l76:;
    while (true) {
    {
        org$pandalanguage$regex$RegexToken $tmp79 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
        char78 = $tmp79;
        panda$core$String* $tmp81 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(self, char78);
        $tmp80 = $tmp81;
        panda$core$Bit $tmp83 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp80, &$s82);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
        if ($tmp83.value) {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, char78);
            panda$core$Bit$init$builtin_bit(&$tmp85, true);
            $returnValue84 = $tmp85;
            return $returnValue84;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp87, 0);
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(char78.kind.$rawValue, $tmp87);
        if ($tmp88.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp89, false);
            $returnValue84 = $tmp89;
            return $returnValue84;
        }
        }
    }
    }
    $l77:;
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken$Kind $tmp91;
    panda$core$Int64 $tmp92;
    panda$core$Bit $returnValue96;
    panda$core$Bit $tmp97;
    org$pandalanguage$regex$RegexToken$Kind $tmp102;
    panda$core$Int64 $tmp103;
    panda$core$Bit $tmp105;
    panda$core$Int64$init$builtin_int64(&$tmp92, 3);
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp91, $tmp92);
    panda$core$Bit $tmp94 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp91, &$s93);
    panda$core$Bit $tmp95 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp94);
    if ($tmp95.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp97, false);
        $returnValue96 = $tmp97;
        return $returnValue96;
    }
    }
    $l99:;
    panda$core$Int64$init$builtin_int64(&$tmp103, 3);
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp102, $tmp103);
    panda$core$Bit $tmp104 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp102);
    bool $tmp101 = $tmp104.value;
    if (!$tmp101) goto $l100;
    {
    }
    goto $l99;
    $l100:;
    panda$core$Bit$init$builtin_bit(&$tmp105, true);
    $returnValue96 = $tmp105;
    return $returnValue96;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token107;
    org$pandalanguage$regex$RegexToken$Kind $match$112_9109;
    panda$core$Int64 $tmp112;
    panda$core$Int64 $tmp115;
    panda$core$Int64 $tmp119;
    panda$core$Bit $returnValue122;
    panda$core$Bit $tmp123;
    panda$core$Bit $tmp125;
    org$pandalanguage$regex$RegexToken $tmp108 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token107 = $tmp108;
    {
        $match$112_9109 = token107.kind;
        panda$core$Int64$init$builtin_int64(&$tmp112, 4);
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9109.$rawValue, $tmp112);
        bool $tmp111 = $tmp113.value;
        if ($tmp111) goto $l114;
        panda$core$Int64$init$builtin_int64(&$tmp115, 5);
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9109.$rawValue, $tmp115);
        $tmp111 = $tmp116.value;
        $l114:;
        panda$core$Bit $tmp117 = { $tmp111 };
        bool $tmp110 = $tmp117.value;
        if ($tmp110) goto $l118;
        panda$core$Int64$init$builtin_int64(&$tmp119, 6);
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9109.$rawValue, $tmp119);
        $tmp110 = $tmp120.value;
        $l118:;
        panda$core$Bit $tmp121 = { $tmp110 };
        if ($tmp121.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp123, true);
            $returnValue122 = $tmp123;
            return $returnValue122;
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token107);
            panda$core$Bit$init$builtin_bit(&$tmp125, false);
            $returnValue122 = $tmp125;
            return $returnValue122;
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token127;
    org$pandalanguage$regex$RegexToken$Kind $match$127_9129;
    panda$core$Int64 $tmp131;
    panda$core$Int64 $tmp134;
    panda$core$Bit $returnValue137;
    panda$core$Bit $tmp138;
    panda$core$Int64 $tmp140;
    panda$core$Bit $tmp144;
    org$pandalanguage$regex$RegexToken$Kind $tmp146;
    panda$core$Int64 $tmp147;
    panda$core$Int64 $tmp151;
    panda$core$Bit $tmp155;
    org$pandalanguage$regex$RegexToken$Kind $tmp157;
    panda$core$Int64 $tmp158;
    panda$core$Int64 $tmp162;
    panda$core$Bit $tmp166;
    org$pandalanguage$regex$RegexToken$Kind $tmp168;
    panda$core$Int64 $tmp169;
    org$pandalanguage$regex$RegexToken$Kind $tmp171;
    panda$core$Int64 $tmp172;
    panda$core$Bit $tmp176;
    org$pandalanguage$regex$RegexToken $tmp128 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token127 = $tmp128;
    {
        $match$127_9129 = token127.kind;
        panda$core$Int64$init$builtin_int64(&$tmp131, 2);
        panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9129.$rawValue, $tmp131);
        bool $tmp130 = $tmp132.value;
        if ($tmp130) goto $l133;
        panda$core$Int64$init$builtin_int64(&$tmp134, 3);
        panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9129.$rawValue, $tmp134);
        $tmp130 = $tmp135.value;
        $l133:;
        panda$core$Bit $tmp136 = { $tmp130 };
        if ($tmp136.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp138, true);
            $returnValue137 = $tmp138;
            return $returnValue137;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp140, 7);
        panda$core$Bit $tmp141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9129.$rawValue, $tmp140);
        if ($tmp141.value) {
        {
            panda$core$Bit $tmp142 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
            panda$core$Bit $tmp143 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp142);
            if ($tmp143.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp144, false);
                $returnValue137 = $tmp144;
                return $returnValue137;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp147, 8);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp146, $tmp147);
            panda$core$Bit $tmp149 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp146, &$s148);
            $returnValue137 = $tmp149;
            return $returnValue137;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp151, 11);
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9129.$rawValue, $tmp151);
        if ($tmp152.value) {
        {
            panda$core$Bit $tmp153 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(self);
            panda$core$Bit $tmp154 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp153);
            if ($tmp154.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp155, false);
                $returnValue137 = $tmp155;
                return $returnValue137;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp158, 12);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp157, $tmp158);
            panda$core$Bit $tmp160 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp157, &$s159);
            $returnValue137 = $tmp160;
            return $returnValue137;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp162, 9);
        panda$core$Bit $tmp163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$127_9129.$rawValue, $tmp162);
        if ($tmp163.value) {
        {
            panda$core$Bit $tmp164 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            panda$core$Bit $tmp165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp164);
            if ($tmp165.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp166, false);
                $returnValue137 = $tmp166;
                return $returnValue137;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp169, 13);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp168, $tmp169);
            panda$core$Bit $tmp170 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp168);
            if ($tmp170.value) {
            {
                org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp172, 10);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp171, $tmp172);
            panda$core$Bit $tmp174 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp171, &$s173);
            $returnValue137 = $tmp174;
            return $returnValue137;
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token127);
            panda$core$Bit$init$builtin_bit(&$tmp176, false);
            $returnValue137 = $tmp176;
            return $returnValue137;
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue180;
    panda$core$Bit $tmp181;
    panda$core$Bit $tmp183;
    panda$core$Bit $tmp178 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(self);
    panda$core$Bit $tmp179 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp178);
    if ($tmp179.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp181, false);
        $returnValue180 = $tmp181;
        return $returnValue180;
    }
    }
    org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp183, true);
    $returnValue180 = $tmp183;
    return $returnValue180;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue187;
    panda$core$Bit $tmp188;
    panda$core$Bit $tmp190;
    panda$core$Bit $tmp185 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(self);
    panda$core$Bit $tmp186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp185);
    if ($tmp186.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp188, false);
        $returnValue187 = $tmp188;
        return $returnValue187;
    }
    }
    org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp190, true);
    $returnValue187 = $tmp190;
    return $returnValue187;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue194;
    panda$core$Bit $tmp195;
    panda$core$Bit $tmp197;
    panda$core$Bit $tmp192 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit $tmp193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp192);
    if ($tmp193.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp195, false);
        $returnValue194 = $tmp195;
        return $returnValue194;
    }
    }
    org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp197, true);
    $returnValue194 = $tmp197;
    return $returnValue194;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$pandac$Position position199;
    org$pandalanguage$pandac$Position $tmp200;
    panda$core$Int64 start201;
    org$pandalanguage$pandac$ASTNode* $returnValue204;
    org$pandalanguage$pandac$ASTNode* $tmp205;
    panda$core$Int64 $tmp207;
    panda$core$Int64 end209;
    panda$core$Int64 length210;
    panda$core$Char8* result212;
    panda$core$Range$LTpanda$core$Int64$GT $tmp213;
    panda$core$Bit $tmp214;
    org$pandalanguage$pandac$ASTNode* $tmp235;
    org$pandalanguage$pandac$ASTNode* $tmp236;
    panda$core$Int64 $tmp238;
    panda$core$String* $tmp239;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(self->pushbackBuffer);
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp200, self->lexer->dfa->line, self->lexer->dfa->column);
    position199 = $tmp200;
    start201 = self->lexer->dfa->offset;
    panda$core$Bit $tmp202 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit $tmp203 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp202);
    if ($tmp203.value) {
    {
        $tmp205 = NULL;
        $returnValue204 = $tmp205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
        return $returnValue204;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp207, 1);
    panda$core$Int64 $tmp208 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->lexer->dfa->offset, $tmp207);
    self->lexer->dfa->offset = $tmp208;
    end209 = self->lexer->dfa->offset;
    panda$core$Int64 $tmp211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end209, start201);
    length210 = $tmp211;
    result212 = ((panda$core$Char8*) pandaZAlloc(length210.value * 1));
    panda$core$Bit$init$builtin_bit(&$tmp214, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp213, start201, end209, $tmp214);
    int64_t $tmp216 = $tmp213.min.value;
    panda$core$Int64 i215 = { $tmp216 };
    int64_t $tmp218 = $tmp213.max.value;
    bool $tmp219 = $tmp213.inclusive.value;
    if ($tmp219) goto $l226; else goto $l227;
    $l226:;
    if ($tmp216 <= $tmp218) goto $l220; else goto $l222;
    $l227:;
    if ($tmp216 < $tmp218) goto $l220; else goto $l222;
    $l220:;
    {
        panda$core$Int64 $tmp228 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i215, start201);
        result212[$tmp228.value] = self->lexer->dfa->source[i215.value];
    }
    $l223:;
    int64_t $tmp230 = $tmp218 - i215.value;
    if ($tmp219) goto $l231; else goto $l232;
    $l231:;
    if ((uint64_t) $tmp230 >= 1) goto $l229; else goto $l222;
    $l232:;
    if ((uint64_t) $tmp230 > 1) goto $l229; else goto $l222;
    $l229:;
    i215.value += 1;
    goto $l220;
    $l222:;
    org$pandalanguage$pandac$ASTNode* $tmp237 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp238, 35);
    panda$core$String* $tmp240 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp240, result212, length210);
    $tmp239 = $tmp240;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp237, $tmp238, position199, $tmp239);
    $tmp236 = $tmp237;
    $tmp235 = $tmp236;
    $returnValue204 = $tmp235;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
    return $returnValue204;
}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* self) {
    int $tmp244;
    {
    }
    $tmp244 = -1;
    goto $l242;
    $l242:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp244) {
        case -1: goto $l245;
    }
    $l245:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

