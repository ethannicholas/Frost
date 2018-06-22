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
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };

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
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, idx17);
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
    panda$core$Int64$init$builtin_int64(&$tmp92, 4);
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
    panda$core$Int64$init$builtin_int64(&$tmp103, 4);
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
    panda$core$Int64 $tmp111;
    panda$core$Int64 $tmp114;
    org$pandalanguage$regex$RegexToken$Kind $tmp117;
    panda$core$Int64 $tmp118;
    panda$core$Bit $returnValue119;
    panda$core$Bit $tmp120;
    panda$core$Int64 $tmp122;
    panda$core$Bit $tmp124;
    panda$core$Int64 $tmp126;
    org$pandalanguage$regex$RegexToken$Kind $match$119_17128;
    panda$core$Int64 $tmp132;
    panda$core$Int64 $tmp135;
    panda$core$Int64 $tmp139;
    panda$core$Bit $tmp142;
    org$pandalanguage$regex$RegexToken $tmp108 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token107 = $tmp108;
    {
        $match$112_9109 = token107.kind;
        panda$core$Int64$init$builtin_int64(&$tmp111, 5);
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9109.$rawValue, $tmp111);
        bool $tmp110 = $tmp112.value;
        if ($tmp110) goto $l113;
        panda$core$Int64$init$builtin_int64(&$tmp114, 6);
        panda$core$Bit $tmp115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9109.$rawValue, $tmp114);
        $tmp110 = $tmp115.value;
        $l113:;
        panda$core$Bit $tmp116 = { $tmp110 };
        if ($tmp116.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp118, 7);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp117, $tmp118);
            org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp117);
            panda$core$Bit$init$builtin_bit(&$tmp120, true);
            $returnValue119 = $tmp120;
            return $returnValue119;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp122, 7);
        panda$core$Bit $tmp123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9109.$rawValue, $tmp122);
        if ($tmp123.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp124, true);
            $returnValue119 = $tmp124;
            return $returnValue119;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp126, 17);
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9109.$rawValue, $tmp126);
        if ($tmp127.value) {
        {
            {
                org$pandalanguage$regex$RegexToken $tmp129 = org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(self);
                $match$119_17128 = $tmp129.kind;
                panda$core$Int64$init$builtin_int64(&$tmp132, 18);
                panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17128.$rawValue, $tmp132);
                bool $tmp131 = $tmp133.value;
                if ($tmp131) goto $l134;
                panda$core$Int64$init$builtin_int64(&$tmp135, 19);
                panda$core$Bit $tmp136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17128.$rawValue, $tmp135);
                $tmp131 = $tmp136.value;
                $l134:;
                panda$core$Bit $tmp137 = { $tmp131 };
                bool $tmp130 = $tmp137.value;
                if ($tmp130) goto $l138;
                panda$core$Int64$init$builtin_int64(&$tmp139, 17);
                panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17128.$rawValue, $tmp139);
                $tmp130 = $tmp140.value;
                $l138:;
                panda$core$Bit $tmp141 = { $tmp130 };
                if ($tmp141.value) {
                {
                    org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
                }
                }
            }
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token107);
            panda$core$Bit$init$builtin_bit(&$tmp142, false);
            $returnValue119 = $tmp142;
            return $returnValue119;
        }
        }
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token144;
    org$pandalanguage$regex$RegexToken$Kind $match$136_9146;
    panda$core$Int64 $tmp153;
    panda$core$Int64 $tmp156;
    panda$core$Int64 $tmp160;
    panda$core$Int64 $tmp164;
    panda$core$Int64 $tmp168;
    panda$core$Int64 $tmp172;
    panda$core$Int64 $tmp176;
    panda$core$Bit $returnValue179;
    panda$core$Bit $tmp180;
    panda$core$Int64 $tmp182;
    org$pandalanguage$regex$RegexToken$Kind $tmp184;
    panda$core$Int64 $tmp185;
    panda$core$Bit $tmp188;
    org$pandalanguage$regex$RegexToken$Kind $tmp190;
    panda$core$Int64 $tmp191;
    panda$core$Int64 $tmp195;
    panda$core$Bit $tmp199;
    org$pandalanguage$regex$RegexToken$Kind $tmp201;
    panda$core$Int64 $tmp202;
    panda$core$Int64 $tmp206;
    panda$core$Bit $tmp210;
    org$pandalanguage$regex$RegexToken$Kind $tmp212;
    panda$core$Int64 $tmp213;
    org$pandalanguage$regex$RegexToken$Kind $tmp215;
    panda$core$Int64 $tmp216;
    panda$core$Bit $tmp220;
    org$pandalanguage$regex$RegexToken $tmp145 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token144 = $tmp145;
    {
        $match$136_9146 = token144.kind;
        panda$core$Int64$init$builtin_int64(&$tmp153, 3);
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp153);
        bool $tmp152 = $tmp154.value;
        if ($tmp152) goto $l155;
        panda$core$Int64$init$builtin_int64(&$tmp156, 4);
        panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp156);
        $tmp152 = $tmp157.value;
        $l155:;
        panda$core$Bit $tmp158 = { $tmp152 };
        bool $tmp151 = $tmp158.value;
        if ($tmp151) goto $l159;
        panda$core$Int64$init$builtin_int64(&$tmp160, 17);
        panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp160);
        $tmp151 = $tmp161.value;
        $l159:;
        panda$core$Bit $tmp162 = { $tmp151 };
        bool $tmp150 = $tmp162.value;
        if ($tmp150) goto $l163;
        panda$core$Int64$init$builtin_int64(&$tmp164, 16);
        panda$core$Bit $tmp165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp164);
        $tmp150 = $tmp165.value;
        $l163:;
        panda$core$Bit $tmp166 = { $tmp150 };
        bool $tmp149 = $tmp166.value;
        if ($tmp149) goto $l167;
        panda$core$Int64$init$builtin_int64(&$tmp168, 18);
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp168);
        $tmp149 = $tmp169.value;
        $l167:;
        panda$core$Bit $tmp170 = { $tmp149 };
        bool $tmp148 = $tmp170.value;
        if ($tmp148) goto $l171;
        panda$core$Int64$init$builtin_int64(&$tmp172, 19);
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp172);
        $tmp148 = $tmp173.value;
        $l171:;
        panda$core$Bit $tmp174 = { $tmp148 };
        bool $tmp147 = $tmp174.value;
        if ($tmp147) goto $l175;
        panda$core$Int64$init$builtin_int64(&$tmp176, 20);
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp176);
        $tmp147 = $tmp177.value;
        $l175:;
        panda$core$Bit $tmp178 = { $tmp147 };
        if ($tmp178.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp180, true);
            $returnValue179 = $tmp180;
            return $returnValue179;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp182, 8);
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp182);
        if ($tmp183.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp185, 7);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp184, $tmp185);
            org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp184);
            panda$core$Bit $tmp186 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
            panda$core$Bit $tmp187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp186);
            if ($tmp187.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp188, false);
                $returnValue179 = $tmp188;
                return $returnValue179;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp191, 9);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp190, $tmp191);
            panda$core$Bit $tmp193 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp190, &$s192);
            $returnValue179 = $tmp193;
            return $returnValue179;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp195, 12);
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp195);
        if ($tmp196.value) {
        {
            panda$core$Bit $tmp197 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(self);
            panda$core$Bit $tmp198 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp197);
            if ($tmp198.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp199, false);
                $returnValue179 = $tmp199;
                return $returnValue179;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp202, 13);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp201, $tmp202);
            panda$core$Bit $tmp204 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp201, &$s203);
            $returnValue179 = $tmp204;
            return $returnValue179;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp206, 10);
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9146.$rawValue, $tmp206);
        if ($tmp207.value) {
        {
            panda$core$Bit $tmp208 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            panda$core$Bit $tmp209 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp208);
            if ($tmp209.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp210, false);
                $returnValue179 = $tmp210;
                return $returnValue179;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp213, 14);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp212, $tmp213);
            panda$core$Bit $tmp214 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp212);
            if ($tmp214.value) {
            {
                org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp216, 11);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp215, $tmp216);
            panda$core$Bit $tmp218 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp215, &$s217);
            $returnValue179 = $tmp218;
            return $returnValue179;
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token144);
            panda$core$Bit$init$builtin_bit(&$tmp220, false);
            $returnValue179 = $tmp220;
            return $returnValue179;
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue224;
    panda$core$Bit $tmp225;
    panda$core$Bit $tmp227;
    panda$core$Bit $tmp222 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(self);
    panda$core$Bit $tmp223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp222);
    if ($tmp223.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp225, false);
        $returnValue224 = $tmp225;
        return $returnValue224;
    }
    }
    org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp227, true);
    $returnValue224 = $tmp227;
    return $returnValue224;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue231;
    panda$core$Bit $tmp232;
    panda$core$Bit $tmp234;
    panda$core$Bit $tmp229 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(self);
    panda$core$Bit $tmp230 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp229);
    if ($tmp230.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp232, false);
        $returnValue231 = $tmp232;
        return $returnValue231;
    }
    }
    org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp234, true);
    $returnValue231 = $tmp234;
    return $returnValue231;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue238;
    panda$core$Bit $tmp239;
    panda$core$Bit $tmp241;
    panda$core$Bit $tmp236 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit $tmp237 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp236);
    if ($tmp237.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp239, false);
        $returnValue238 = $tmp239;
        return $returnValue238;
    }
    }
    org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp241, true);
    $returnValue238 = $tmp241;
    return $returnValue238;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$pandac$Position position243;
    org$pandalanguage$pandac$Position $tmp244;
    panda$core$Int64 start245;
    org$pandalanguage$pandac$ASTNode* $returnValue248;
    org$pandalanguage$pandac$ASTNode* $tmp249;
    panda$core$Int64 $tmp251;
    panda$core$Int64 end253;
    panda$core$Int64 length254;
    panda$core$Char8* result256;
    panda$core$Range$LTpanda$core$Int64$GT $tmp257;
    panda$core$Bit $tmp258;
    org$pandalanguage$pandac$ASTNode* $tmp279;
    org$pandalanguage$pandac$ASTNode* $tmp280;
    panda$core$Int64 $tmp282;
    panda$core$String* $tmp283;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(self->pushbackBuffer);
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp244, self->lexer->dfa->line, self->lexer->dfa->column);
    position243 = $tmp244;
    start245 = self->lexer->dfa->offset;
    panda$core$Bit $tmp246 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit $tmp247 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp246);
    if ($tmp247.value) {
    {
        $tmp249 = NULL;
        $returnValue248 = $tmp249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp249));
        return $returnValue248;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp251, 1);
    panda$core$Int64 $tmp252 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->lexer->dfa->offset, $tmp251);
    self->lexer->dfa->offset = $tmp252;
    end253 = self->lexer->dfa->offset;
    panda$core$Int64 $tmp255 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end253, start245);
    length254 = $tmp255;
    result256 = ((panda$core$Char8*) pandaZAlloc(length254.value * 1));
    panda$core$Bit$init$builtin_bit(&$tmp258, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp257, start245, end253, $tmp258);
    int64_t $tmp260 = $tmp257.min.value;
    panda$core$Int64 i259 = { $tmp260 };
    int64_t $tmp262 = $tmp257.max.value;
    bool $tmp263 = $tmp257.inclusive.value;
    if ($tmp263) goto $l270; else goto $l271;
    $l270:;
    if ($tmp260 <= $tmp262) goto $l264; else goto $l266;
    $l271:;
    if ($tmp260 < $tmp262) goto $l264; else goto $l266;
    $l264:;
    {
        panda$core$Int64 $tmp272 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i259, start245);
        result256[$tmp272.value] = self->lexer->dfa->source[i259.value];
    }
    $l267:;
    int64_t $tmp274 = $tmp262 - i259.value;
    if ($tmp263) goto $l275; else goto $l276;
    $l275:;
    if ((uint64_t) $tmp274 >= 1) goto $l273; else goto $l266;
    $l276:;
    if ((uint64_t) $tmp274 > 1) goto $l273; else goto $l266;
    $l273:;
    i259.value += 1;
    goto $l264;
    $l266:;
    org$pandalanguage$pandac$ASTNode* $tmp281 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp282, 35);
    panda$core$String* $tmp284 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp284, result256, length254);
    $tmp283 = $tmp284;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp281, $tmp282, position243, $tmp283);
    $tmp280 = $tmp281;
    $tmp279 = $tmp280;
    $returnValue248 = $tmp279;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
    return $returnValue248;
}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* self) {
    int $tmp288;
    {
    }
    $tmp288 = -1;
    goto $l286;
    $l286:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp288) {
        case -1: goto $l289;
    }
    $l289:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

