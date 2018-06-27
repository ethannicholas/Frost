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
#include "panda/collections/CollectionView.h"
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

typedef panda$core$Int64 (*$fn16)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn23)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn36)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn44)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 35, -3638705302730546102, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };

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
    panda$core$Int64 $tmp18;
    panda$core$Int64 idx20;
    panda$core$Int64 $tmp25;
    org$pandalanguage$regex$RegexToken result27;
    org$pandalanguage$regex$RegexToken $returnValue29;
    org$pandalanguage$regex$RegexToken result31;
    ITable* $tmp14 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp14->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp14 = $tmp14->next;
    }
    $fn16 $tmp15 = $tmp14->methods[0];
    panda$core$Int64 $tmp17 = $tmp15(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp18, 0);
    panda$core$Bit $tmp19 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp17, $tmp18);
    if ($tmp19.value) {
    {
        ITable* $tmp21 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
        while ($tmp21->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp21 = $tmp21->next;
        }
        $fn23 $tmp22 = $tmp21->methods[0];
        panda$core$Int64 $tmp24 = $tmp22(((panda$collections$CollectionView*) self->pushbackBuffer));
        panda$core$Int64$init$builtin_int64(&$tmp25, 1);
        panda$core$Int64 $tmp26 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp24, $tmp25);
        idx20 = $tmp26;
        org$pandalanguage$regex$RegexToken $tmp28 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, idx20);
        result27 = $tmp28;
        panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, idx20);
        $returnValue29 = result27;
        return $returnValue29;
    }
    }
    org$pandalanguage$regex$RegexToken $tmp32 = org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken(self->lexer);
    result31 = $tmp32;
    $returnValue29 = result31;
    return $returnValue29;
}
void org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, p_token);
}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Int64 $tmp38;
    org$pandalanguage$regex$RegexToken $returnValue41;
    panda$core$Int64 $tmp46;
    ITable* $tmp34 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp34->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp34 = $tmp34->next;
    }
    $fn36 $tmp35 = $tmp34->methods[0];
    panda$core$Int64 $tmp37 = $tmp35(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp38, 0);
    panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp37, $tmp38);
    if ($tmp39.value) {
    {
        org$pandalanguage$regex$RegexToken $tmp40 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
        org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, $tmp40);
    }
    }
    ITable* $tmp42 = ((panda$collections$CollectionView*) self->pushbackBuffer)->$class->itable;
    while ($tmp42->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp42 = $tmp42->next;
    }
    $fn44 $tmp43 = $tmp42->methods[0];
    panda$core$Int64 $tmp45 = $tmp43(((panda$collections$CollectionView*) self->pushbackBuffer));
    panda$core$Int64$init$builtin_int64(&$tmp46, 1);
    panda$core$Int64 $tmp47 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp45, $tmp46);
    org$pandalanguage$regex$RegexToken $tmp48 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken(self->pushbackBuffer, $tmp47);
    $returnValue41 = $tmp48;
    return $returnValue41;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind) {
    org$pandalanguage$regex$RegexToken result50;
    panda$core$Bit $returnValue53;
    panda$core$Bit $tmp54;
    panda$core$Bit $tmp56;
    org$pandalanguage$regex$RegexToken $tmp51 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    result50 = $tmp51;
    panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result50.kind.$rawValue, p_kind.$rawValue);
    if ($tmp52.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp54, true);
        $returnValue53 = $tmp54;
        return $returnValue53;
    }
    }
    org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, result50);
    panda$core$Bit$init$builtin_bit(&$tmp56, false);
    $returnValue53 = $tmp56;
    return $returnValue53;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken$Kind p_kind, panda$core$String* p_expected) {
    org$pandalanguage$regex$RegexToken result58;
    panda$core$Bit $returnValue61;
    panda$core$Bit $tmp62;
    panda$core$String* $tmp64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$String* $tmp67;
    panda$core$String* $tmp72;
    panda$core$Bit $tmp77;
    org$pandalanguage$regex$RegexToken $tmp59 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    result58 = $tmp59;
    panda$core$Bit $tmp60 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(result58.kind.$rawValue, p_kind.$rawValue);
    if ($tmp60.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp62, true);
        $returnValue61 = $tmp62;
        return $returnValue61;
    }
    }
    panda$core$String* $tmp69 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s68, p_expected);
    $tmp67 = $tmp69;
    panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp67, &$s70);
    $tmp66 = $tmp71;
    panda$core$String* $tmp73 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(self, result58);
    $tmp72 = $tmp73;
    panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp66, $tmp72);
    $tmp65 = $tmp74;
    panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp65, &$s75);
    $tmp64 = $tmp76;
    org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(self, result58, $tmp64);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
    panda$core$Bit$init$builtin_bit(&$tmp77, false);
    $returnValue61 = $tmp77;
    return $returnValue61;
}
void org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token, panda$core$String* p_msg) {
    org$pandalanguage$pandac$Compiler$Error* $tmp79;
    org$pandalanguage$pandac$Compiler$Error* $tmp80 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
    org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp80, self->path, p_token.position, p_msg);
    $tmp79 = $tmp80;
    panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(self->errors, ((panda$core$Immutable*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
}
panda$core$String* org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(org$pandalanguage$regex$RegexParser* self, org$pandalanguage$regex$RegexToken p_token) {
    panda$core$String* $returnValue81;
    panda$core$String* $tmp82;
    panda$core$String* $tmp83;
    panda$core$Range$LTpanda$core$String$Index$GT $tmp84;
    panda$core$Bit $tmp85;
    panda$core$Bit$init$builtin_bit(&$tmp85, false);
    panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(&$tmp84, p_token.start, p_token.end, $tmp85);
    panda$core$String* $tmp86 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String(self->source, $tmp84);
    $tmp83 = $tmp86;
    $tmp82 = $tmp83;
    $returnValue81 = $tmp82;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    return $returnValue81;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken char90;
    panda$core$String* $tmp92;
    panda$core$Bit $returnValue96;
    panda$core$Bit $tmp97;
    panda$core$Int64 $tmp99;
    panda$core$Bit $tmp101;
    $l88:;
    while (true) {
    {
        org$pandalanguage$regex$RegexToken $tmp91 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
        char90 = $tmp91;
        panda$core$String* $tmp93 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(self, char90);
        $tmp92 = $tmp93;
        panda$core$Bit $tmp95 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp92, &$s94);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
        if ($tmp95.value) {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, char90);
            panda$core$Bit$init$builtin_bit(&$tmp97, true);
            $returnValue96 = $tmp97;
            return $returnValue96;
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp99, 0);
        panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(char90.kind.$rawValue, $tmp99);
        if ($tmp100.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp101, false);
            $returnValue96 = $tmp101;
            return $returnValue96;
        }
        }
    }
    }
    $l89:;
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken$Kind $tmp103;
    panda$core$Int64 $tmp104;
    panda$core$Bit $returnValue108;
    panda$core$Bit $tmp109;
    org$pandalanguage$regex$RegexToken$Kind $tmp114;
    panda$core$Int64 $tmp115;
    panda$core$Bit $tmp117;
    panda$core$Int64$init$builtin_int64(&$tmp104, 4);
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp103, $tmp104);
    panda$core$Bit $tmp106 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp103, &$s105);
    panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
    if ($tmp107.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp109, false);
        $returnValue108 = $tmp109;
        return $returnValue108;
    }
    }
    $l111:;
    panda$core$Int64$init$builtin_int64(&$tmp115, 4);
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp114, $tmp115);
    panda$core$Bit $tmp116 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp114);
    bool $tmp113 = $tmp116.value;
    if (!$tmp113) goto $l112;
    {
    }
    goto $l111;
    $l112:;
    panda$core$Bit$init$builtin_bit(&$tmp117, true);
    $returnValue108 = $tmp117;
    return $returnValue108;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token119;
    org$pandalanguage$regex$RegexToken$Kind $match$112_9121;
    panda$core$Int64 $tmp123;
    panda$core$Int64 $tmp126;
    org$pandalanguage$regex$RegexToken$Kind $tmp129;
    panda$core$Int64 $tmp130;
    panda$core$Bit $returnValue131;
    panda$core$Bit $tmp132;
    panda$core$Int64 $tmp134;
    panda$core$Bit $tmp136;
    panda$core$Int64 $tmp138;
    org$pandalanguage$regex$RegexToken$Kind $match$119_17140;
    panda$core$Int64 $tmp144;
    panda$core$Int64 $tmp147;
    panda$core$Int64 $tmp151;
    panda$core$Bit $tmp154;
    org$pandalanguage$regex$RegexToken $tmp120 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token119 = $tmp120;
    {
        $match$112_9121 = token119.kind;
        panda$core$Int64$init$builtin_int64(&$tmp123, 5);
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9121.$rawValue, $tmp123);
        bool $tmp122 = $tmp124.value;
        if ($tmp122) goto $l125;
        panda$core$Int64$init$builtin_int64(&$tmp126, 6);
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9121.$rawValue, $tmp126);
        $tmp122 = $tmp127.value;
        $l125:;
        panda$core$Bit $tmp128 = { $tmp122 };
        if ($tmp128.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp130, 7);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp129, $tmp130);
            org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp129);
            panda$core$Bit$init$builtin_bit(&$tmp132, true);
            $returnValue131 = $tmp132;
            return $returnValue131;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp134, 7);
        panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9121.$rawValue, $tmp134);
        if ($tmp135.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp136, true);
            $returnValue131 = $tmp136;
            return $returnValue131;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp138, 17);
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9121.$rawValue, $tmp138);
        if ($tmp139.value) {
        {
            {
                org$pandalanguage$regex$RegexToken $tmp141 = org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(self);
                $match$119_17140 = $tmp141.kind;
                panda$core$Int64$init$builtin_int64(&$tmp144, 18);
                panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17140.$rawValue, $tmp144);
                bool $tmp143 = $tmp145.value;
                if ($tmp143) goto $l146;
                panda$core$Int64$init$builtin_int64(&$tmp147, 19);
                panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17140.$rawValue, $tmp147);
                $tmp143 = $tmp148.value;
                $l146:;
                panda$core$Bit $tmp149 = { $tmp143 };
                bool $tmp142 = $tmp149.value;
                if ($tmp142) goto $l150;
                panda$core$Int64$init$builtin_int64(&$tmp151, 17);
                panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17140.$rawValue, $tmp151);
                $tmp142 = $tmp152.value;
                $l150:;
                panda$core$Bit $tmp153 = { $tmp142 };
                if ($tmp153.value) {
                {
                    org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
                }
                }
            }
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token119);
            panda$core$Bit$init$builtin_bit(&$tmp154, false);
            $returnValue131 = $tmp154;
            return $returnValue131;
        }
        }
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token156;
    org$pandalanguage$regex$RegexToken$Kind $match$136_9158;
    panda$core$Int64 $tmp165;
    panda$core$Int64 $tmp168;
    panda$core$Int64 $tmp172;
    panda$core$Int64 $tmp176;
    panda$core$Int64 $tmp180;
    panda$core$Int64 $tmp184;
    panda$core$Int64 $tmp188;
    panda$core$Bit $returnValue191;
    panda$core$Bit $tmp192;
    panda$core$Int64 $tmp194;
    org$pandalanguage$regex$RegexToken$Kind $tmp196;
    panda$core$Int64 $tmp197;
    panda$core$Bit $tmp200;
    org$pandalanguage$regex$RegexToken$Kind $tmp202;
    panda$core$Int64 $tmp203;
    panda$core$Int64 $tmp207;
    panda$core$Bit $tmp211;
    org$pandalanguage$regex$RegexToken$Kind $tmp213;
    panda$core$Int64 $tmp214;
    panda$core$Int64 $tmp218;
    panda$core$Bit $tmp222;
    org$pandalanguage$regex$RegexToken$Kind $tmp224;
    panda$core$Int64 $tmp225;
    org$pandalanguage$regex$RegexToken$Kind $tmp227;
    panda$core$Int64 $tmp228;
    panda$core$Bit $tmp232;
    org$pandalanguage$regex$RegexToken $tmp157 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token156 = $tmp157;
    {
        $match$136_9158 = token156.kind;
        panda$core$Int64$init$builtin_int64(&$tmp165, 3);
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp165);
        bool $tmp164 = $tmp166.value;
        if ($tmp164) goto $l167;
        panda$core$Int64$init$builtin_int64(&$tmp168, 4);
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp168);
        $tmp164 = $tmp169.value;
        $l167:;
        panda$core$Bit $tmp170 = { $tmp164 };
        bool $tmp163 = $tmp170.value;
        if ($tmp163) goto $l171;
        panda$core$Int64$init$builtin_int64(&$tmp172, 17);
        panda$core$Bit $tmp173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp172);
        $tmp163 = $tmp173.value;
        $l171:;
        panda$core$Bit $tmp174 = { $tmp163 };
        bool $tmp162 = $tmp174.value;
        if ($tmp162) goto $l175;
        panda$core$Int64$init$builtin_int64(&$tmp176, 16);
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp176);
        $tmp162 = $tmp177.value;
        $l175:;
        panda$core$Bit $tmp178 = { $tmp162 };
        bool $tmp161 = $tmp178.value;
        if ($tmp161) goto $l179;
        panda$core$Int64$init$builtin_int64(&$tmp180, 18);
        panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp180);
        $tmp161 = $tmp181.value;
        $l179:;
        panda$core$Bit $tmp182 = { $tmp161 };
        bool $tmp160 = $tmp182.value;
        if ($tmp160) goto $l183;
        panda$core$Int64$init$builtin_int64(&$tmp184, 19);
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp184);
        $tmp160 = $tmp185.value;
        $l183:;
        panda$core$Bit $tmp186 = { $tmp160 };
        bool $tmp159 = $tmp186.value;
        if ($tmp159) goto $l187;
        panda$core$Int64$init$builtin_int64(&$tmp188, 20);
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp188);
        $tmp159 = $tmp189.value;
        $l187:;
        panda$core$Bit $tmp190 = { $tmp159 };
        if ($tmp190.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp192, true);
            $returnValue191 = $tmp192;
            return $returnValue191;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp194, 8);
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp194);
        if ($tmp195.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp197, 7);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp196, $tmp197);
            org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp196);
            panda$core$Bit $tmp198 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
            panda$core$Bit $tmp199 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp198);
            if ($tmp199.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp200, false);
                $returnValue191 = $tmp200;
                return $returnValue191;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp203, 9);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp202, $tmp203);
            panda$core$Bit $tmp205 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp202, &$s204);
            $returnValue191 = $tmp205;
            return $returnValue191;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp207, 12);
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp207);
        if ($tmp208.value) {
        {
            panda$core$Bit $tmp209 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(self);
            panda$core$Bit $tmp210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp209);
            if ($tmp210.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp211, false);
                $returnValue191 = $tmp211;
                return $returnValue191;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp214, 13);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp213, $tmp214);
            panda$core$Bit $tmp216 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp213, &$s215);
            $returnValue191 = $tmp216;
            return $returnValue191;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp218, 10);
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9158.$rawValue, $tmp218);
        if ($tmp219.value) {
        {
            panda$core$Bit $tmp220 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            panda$core$Bit $tmp221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp220);
            if ($tmp221.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp222, false);
                $returnValue191 = $tmp222;
                return $returnValue191;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp225, 14);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp224, $tmp225);
            panda$core$Bit $tmp226 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp224);
            if ($tmp226.value) {
            {
                org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp228, 11);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp227, $tmp228);
            panda$core$Bit $tmp230 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp227, &$s229);
            $returnValue191 = $tmp230;
            return $returnValue191;
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token156);
            panda$core$Bit$init$builtin_bit(&$tmp232, false);
            $returnValue191 = $tmp232;
            return $returnValue191;
        }
        }
        }
        }
        }
    }
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue236;
    panda$core$Bit $tmp237;
    panda$core$Bit $tmp239;
    panda$core$Bit $tmp234 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(self);
    panda$core$Bit $tmp235 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp234);
    if ($tmp235.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp237, false);
        $returnValue236 = $tmp237;
        return $returnValue236;
    }
    }
    org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp239, true);
    $returnValue236 = $tmp239;
    return $returnValue236;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue243;
    panda$core$Bit $tmp244;
    panda$core$Bit $tmp246;
    panda$core$Bit $tmp241 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(self);
    panda$core$Bit $tmp242 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp241);
    if ($tmp242.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp244, false);
        $returnValue243 = $tmp244;
        return $returnValue243;
    }
    }
    org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp246, true);
    $returnValue243 = $tmp246;
    return $returnValue243;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue250;
    panda$core$Bit $tmp251;
    panda$core$Bit $tmp253;
    panda$core$Bit $tmp248 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit $tmp249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp248);
    if ($tmp249.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp251, false);
        $returnValue250 = $tmp251;
        return $returnValue250;
    }
    }
    org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp253, true);
    $returnValue250 = $tmp253;
    return $returnValue250;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$pandac$Position position255;
    org$pandalanguage$pandac$Position $tmp256;
    panda$core$Int64 start257;
    org$pandalanguage$pandac$ASTNode* $returnValue260;
    org$pandalanguage$pandac$ASTNode* $tmp261;
    org$pandalanguage$plex$runtime$DFA* $tmp263;
    panda$core$Int64 $tmp264;
    panda$core$Int64 end266;
    panda$core$Int64 length267;
    panda$core$Char8* result269;
    panda$core$Range$LTpanda$core$Int64$GT $tmp270;
    panda$core$Bit $tmp271;
    org$pandalanguage$pandac$ASTNode* $tmp292;
    org$pandalanguage$pandac$ASTNode* $tmp293;
    panda$core$Int64 $tmp295;
    panda$core$String* $tmp296;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(self->pushbackBuffer);
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp256, self->lexer->dfa->line, self->lexer->dfa->column);
    position255 = $tmp256;
    start257 = self->lexer->dfa->offset;
    panda$core$Bit $tmp258 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
    if ($tmp259.value) {
    {
        $tmp261 = NULL;
        $returnValue260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        return $returnValue260;
    }
    }
    $tmp263 = self->lexer->dfa;
    panda$core$Int64$init$builtin_int64(&$tmp264, 1);
    panda$core$Int64 $tmp265 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp263->offset, $tmp264);
    $tmp263->offset = $tmp265;
    end266 = self->lexer->dfa->offset;
    panda$core$Int64 $tmp268 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end266, start257);
    length267 = $tmp268;
    result269 = ((panda$core$Char8*) pandaZAlloc(length267.value * 1));
    panda$core$Bit$init$builtin_bit(&$tmp271, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp270, start257, end266, $tmp271);
    int64_t $tmp273 = $tmp270.min.value;
    panda$core$Int64 i272 = { $tmp273 };
    int64_t $tmp275 = $tmp270.max.value;
    bool $tmp276 = $tmp270.inclusive.value;
    if ($tmp276) goto $l283; else goto $l284;
    $l283:;
    if ($tmp273 <= $tmp275) goto $l277; else goto $l279;
    $l284:;
    if ($tmp273 < $tmp275) goto $l277; else goto $l279;
    $l277:;
    {
        panda$core$Int64 $tmp285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i272, start257);
        result269[$tmp285.value] = self->lexer->dfa->source[i272.value];
    }
    $l280:;
    int64_t $tmp287 = $tmp275 - i272.value;
    if ($tmp276) goto $l288; else goto $l289;
    $l288:;
    if ((uint64_t) $tmp287 >= 1) goto $l286; else goto $l279;
    $l289:;
    if ((uint64_t) $tmp287 > 1) goto $l286; else goto $l279;
    $l286:;
    i272.value += 1;
    goto $l277;
    $l279:;
    org$pandalanguage$pandac$ASTNode* $tmp294 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp295, 35);
    panda$core$String* $tmp297 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp297, result269, length267);
    $tmp296 = $tmp297;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp294, $tmp295, position255, $tmp296);
    $tmp293 = $tmp294;
    $tmp292 = $tmp293;
    $returnValue260 = $tmp292;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp292));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
    return $returnValue260;
}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* self) {
    int $tmp301;
    {
    }
    $tmp301 = -1;
    goto $l299;
    $l299:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp301) {
        case -1: goto $l302;
    }
    $l302:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

