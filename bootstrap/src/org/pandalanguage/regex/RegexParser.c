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
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    if (false) goto $l103; else goto $l104;
    $l104:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s105, (panda$core$Int64) { 82 }, &$s106);
    abort();
    $l103:;
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken$Kind $tmp107;
    panda$core$Int64 $tmp108;
    panda$core$Bit $returnValue112;
    panda$core$Bit $tmp113;
    org$pandalanguage$regex$RegexToken$Kind $tmp118;
    panda$core$Int64 $tmp119;
    panda$core$Bit $tmp121;
    panda$core$Int64$init$builtin_int64(&$tmp108, 4);
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp107, $tmp108);
    panda$core$Bit $tmp110 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp107, &$s109);
    panda$core$Bit $tmp111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp110);
    if ($tmp111.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp113, false);
        $returnValue112 = $tmp113;
        return $returnValue112;
    }
    }
    $l115:;
    panda$core$Int64$init$builtin_int64(&$tmp119, 4);
    org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp118, $tmp119);
    panda$core$Bit $tmp120 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp118);
    bool $tmp117 = $tmp120.value;
    if (!$tmp117) goto $l116;
    {
    }
    goto $l115;
    $l116:;
    panda$core$Bit$init$builtin_bit(&$tmp121, true);
    $returnValue112 = $tmp121;
    return $returnValue112;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token123;
    org$pandalanguage$regex$RegexToken$Kind $match$112_9125;
    panda$core$Int64 $tmp127;
    panda$core$Int64 $tmp130;
    org$pandalanguage$regex$RegexToken$Kind $tmp133;
    panda$core$Int64 $tmp134;
    panda$core$Bit $returnValue135;
    panda$core$Bit $tmp136;
    panda$core$Int64 $tmp138;
    panda$core$Bit $tmp140;
    panda$core$Int64 $tmp142;
    org$pandalanguage$regex$RegexToken$Kind $match$119_17144;
    panda$core$Int64 $tmp148;
    panda$core$Int64 $tmp151;
    panda$core$Int64 $tmp155;
    panda$core$Bit $tmp158;
    org$pandalanguage$regex$RegexToken $tmp124 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token123 = $tmp124;
    {
        $match$112_9125 = token123.kind;
        panda$core$Int64$init$builtin_int64(&$tmp127, 5);
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9125.$rawValue, $tmp127);
        bool $tmp126 = $tmp128.value;
        if ($tmp126) goto $l129;
        panda$core$Int64$init$builtin_int64(&$tmp130, 6);
        panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9125.$rawValue, $tmp130);
        $tmp126 = $tmp131.value;
        $l129:;
        panda$core$Bit $tmp132 = { $tmp126 };
        if ($tmp132.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp134, 7);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp133, $tmp134);
            org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp133);
            panda$core$Bit$init$builtin_bit(&$tmp136, true);
            $returnValue135 = $tmp136;
            return $returnValue135;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp138, 7);
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9125.$rawValue, $tmp138);
        if ($tmp139.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp140, true);
            $returnValue135 = $tmp140;
            return $returnValue135;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp142, 17);
        panda$core$Bit $tmp143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$112_9125.$rawValue, $tmp142);
        if ($tmp143.value) {
        {
            {
                org$pandalanguage$regex$RegexToken $tmp145 = org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(self);
                $match$119_17144 = $tmp145.kind;
                panda$core$Int64$init$builtin_int64(&$tmp148, 18);
                panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17144.$rawValue, $tmp148);
                bool $tmp147 = $tmp149.value;
                if ($tmp147) goto $l150;
                panda$core$Int64$init$builtin_int64(&$tmp151, 19);
                panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17144.$rawValue, $tmp151);
                $tmp147 = $tmp152.value;
                $l150:;
                panda$core$Bit $tmp153 = { $tmp147 };
                bool $tmp146 = $tmp153.value;
                if ($tmp146) goto $l154;
                panda$core$Int64$init$builtin_int64(&$tmp155, 17);
                panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$119_17144.$rawValue, $tmp155);
                $tmp146 = $tmp156.value;
                $l154:;
                panda$core$Bit $tmp157 = { $tmp146 };
                if ($tmp157.value) {
                {
                    org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
                }
                }
            }
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token123);
            panda$core$Bit$init$builtin_bit(&$tmp158, false);
            $returnValue135 = $tmp158;
            return $returnValue135;
        }
        }
        }
        }
    }
    if (false) goto $l160; else goto $l161;
    $l161:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s162, (panda$core$Int64) { 110 }, &$s163);
    abort();
    $l160:;
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$regex$RegexToken token164;
    org$pandalanguage$regex$RegexToken$Kind $match$136_9166;
    panda$core$Int64 $tmp173;
    panda$core$Int64 $tmp176;
    panda$core$Int64 $tmp180;
    panda$core$Int64 $tmp184;
    panda$core$Int64 $tmp188;
    panda$core$Int64 $tmp192;
    panda$core$Int64 $tmp196;
    panda$core$Bit $returnValue199;
    panda$core$Bit $tmp200;
    panda$core$Int64 $tmp202;
    org$pandalanguage$regex$RegexToken$Kind $tmp204;
    panda$core$Int64 $tmp205;
    panda$core$Bit $tmp208;
    org$pandalanguage$regex$RegexToken$Kind $tmp210;
    panda$core$Int64 $tmp211;
    panda$core$Int64 $tmp215;
    panda$core$Bit $tmp219;
    org$pandalanguage$regex$RegexToken$Kind $tmp221;
    panda$core$Int64 $tmp222;
    panda$core$Int64 $tmp226;
    panda$core$Bit $tmp230;
    org$pandalanguage$regex$RegexToken$Kind $tmp232;
    panda$core$Int64 $tmp233;
    org$pandalanguage$regex$RegexToken$Kind $tmp235;
    panda$core$Int64 $tmp236;
    panda$core$Bit $tmp240;
    org$pandalanguage$regex$RegexToken $tmp165 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(self);
    token164 = $tmp165;
    {
        $match$136_9166 = token164.kind;
        panda$core$Int64$init$builtin_int64(&$tmp173, 3);
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp173);
        bool $tmp172 = $tmp174.value;
        if ($tmp172) goto $l175;
        panda$core$Int64$init$builtin_int64(&$tmp176, 4);
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp176);
        $tmp172 = $tmp177.value;
        $l175:;
        panda$core$Bit $tmp178 = { $tmp172 };
        bool $tmp171 = $tmp178.value;
        if ($tmp171) goto $l179;
        panda$core$Int64$init$builtin_int64(&$tmp180, 17);
        panda$core$Bit $tmp181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp180);
        $tmp171 = $tmp181.value;
        $l179:;
        panda$core$Bit $tmp182 = { $tmp171 };
        bool $tmp170 = $tmp182.value;
        if ($tmp170) goto $l183;
        panda$core$Int64$init$builtin_int64(&$tmp184, 16);
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp184);
        $tmp170 = $tmp185.value;
        $l183:;
        panda$core$Bit $tmp186 = { $tmp170 };
        bool $tmp169 = $tmp186.value;
        if ($tmp169) goto $l187;
        panda$core$Int64$init$builtin_int64(&$tmp188, 18);
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp188);
        $tmp169 = $tmp189.value;
        $l187:;
        panda$core$Bit $tmp190 = { $tmp169 };
        bool $tmp168 = $tmp190.value;
        if ($tmp168) goto $l191;
        panda$core$Int64$init$builtin_int64(&$tmp192, 19);
        panda$core$Bit $tmp193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp192);
        $tmp168 = $tmp193.value;
        $l191:;
        panda$core$Bit $tmp194 = { $tmp168 };
        bool $tmp167 = $tmp194.value;
        if ($tmp167) goto $l195;
        panda$core$Int64$init$builtin_int64(&$tmp196, 20);
        panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp196);
        $tmp167 = $tmp197.value;
        $l195:;
        panda$core$Bit $tmp198 = { $tmp167 };
        if ($tmp198.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp200, true);
            $returnValue199 = $tmp200;
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp202, 8);
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp202);
        if ($tmp203.value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp205, 7);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp204, $tmp205);
            org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp204);
            panda$core$Bit $tmp206 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
            panda$core$Bit $tmp207 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp206);
            if ($tmp207.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp208, false);
                $returnValue199 = $tmp208;
                return $returnValue199;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp211, 9);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp210, $tmp211);
            panda$core$Bit $tmp213 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp210, &$s212);
            $returnValue199 = $tmp213;
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp215, 12);
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp215);
        if ($tmp216.value) {
        {
            panda$core$Bit $tmp217 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(self);
            panda$core$Bit $tmp218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp217);
            if ($tmp218.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp219, false);
                $returnValue199 = $tmp219;
                return $returnValue199;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp222, 13);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp221, $tmp222);
            panda$core$Bit $tmp224 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp221, &$s223);
            $returnValue199 = $tmp224;
            return $returnValue199;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp226, 10);
        panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$136_9166.$rawValue, $tmp226);
        if ($tmp227.value) {
        {
            panda$core$Bit $tmp228 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            panda$core$Bit $tmp229 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp228);
            if ($tmp229.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp230, false);
                $returnValue199 = $tmp230;
                return $returnValue199;
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp233, 14);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp232, $tmp233);
            panda$core$Bit $tmp234 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(self, $tmp232);
            if ($tmp234.value) {
            {
                org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(self);
            }
            }
            panda$core$Int64$init$builtin_int64(&$tmp236, 11);
            org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(&$tmp235, $tmp236);
            panda$core$Bit $tmp238 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(self, $tmp235, &$s237);
            $returnValue199 = $tmp238;
            return $returnValue199;
        }
        }
        else {
        {
            org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(self, token164);
            panda$core$Bit$init$builtin_bit(&$tmp240, false);
            $returnValue199 = $tmp240;
            return $returnValue199;
        }
        }
        }
        }
        }
    }
    if (false) goto $l242; else goto $l243;
    $l243:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s244, (panda$core$Int64) { 134 }, &$s245);
    abort();
    $l242:;
    abort();
}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue248;
    panda$core$Bit $tmp249;
    panda$core$Bit $tmp251;
    panda$core$Bit $tmp246 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(self);
    panda$core$Bit $tmp247 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp246);
    if ($tmp247.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp249, false);
        $returnValue248 = $tmp249;
        return $returnValue248;
    }
    }
    org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp251, true);
    $returnValue248 = $tmp251;
    return $returnValue248;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue255;
    panda$core$Bit $tmp256;
    panda$core$Bit $tmp258;
    panda$core$Bit $tmp253 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(self);
    panda$core$Bit $tmp254 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp253);
    if ($tmp254.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp256, false);
        $returnValue255 = $tmp256;
        return $returnValue255;
    }
    }
    org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp258, true);
    $returnValue255 = $tmp258;
    return $returnValue255;
}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* self) {
    panda$core$Bit $returnValue262;
    panda$core$Bit $tmp263;
    panda$core$Bit $tmp265;
    panda$core$Bit $tmp260 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(self);
    panda$core$Bit $tmp261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp260);
    if ($tmp261.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp263, false);
        $returnValue262 = $tmp263;
        return $returnValue262;
    }
    }
    org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit$init$builtin_bit(&$tmp265, true);
    $returnValue262 = $tmp265;
    return $returnValue262;
}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* self) {
    org$pandalanguage$pandac$Position position267;
    org$pandalanguage$pandac$Position $tmp268;
    panda$core$Int64 start269;
    org$pandalanguage$pandac$ASTNode* $returnValue272;
    org$pandalanguage$pandac$ASTNode* $tmp273;
    org$pandalanguage$plex$runtime$DFA* $tmp275;
    panda$core$Int64 $tmp276;
    panda$core$Int64 end278;
    panda$core$Int64 length279;
    panda$core$Char8* result281;
    panda$core$Range$LTpanda$core$Int64$GT $tmp282;
    panda$core$Bit $tmp283;
    org$pandalanguage$pandac$ASTNode* $tmp304;
    org$pandalanguage$pandac$ASTNode* $tmp305;
    panda$core$Int64 $tmp307;
    panda$core$String* $tmp308;
    panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear(self->pushbackBuffer);
    org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(&$tmp268, self->lexer->dfa->line, self->lexer->dfa->column);
    position267 = $tmp268;
    start269 = self->lexer->dfa->offset;
    panda$core$Bit $tmp270 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(self);
    panda$core$Bit $tmp271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp270);
    if ($tmp271.value) {
    {
        $tmp273 = NULL;
        $returnValue272 = $tmp273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
        return $returnValue272;
    }
    }
    $tmp275 = self->lexer->dfa;
    panda$core$Int64$init$builtin_int64(&$tmp276, 1);
    panda$core$Int64 $tmp277 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp275->offset, $tmp276);
    $tmp275->offset = $tmp277;
    end278 = self->lexer->dfa->offset;
    panda$core$Int64 $tmp280 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end278, start269);
    length279 = $tmp280;
    result281 = ((panda$core$Char8*) pandaZAlloc(length279.value * 1));
    panda$core$Bit$init$builtin_bit(&$tmp283, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp282, start269, end278, $tmp283);
    int64_t $tmp285 = $tmp282.min.value;
    panda$core$Int64 i284 = { $tmp285 };
    int64_t $tmp287 = $tmp282.max.value;
    bool $tmp288 = $tmp282.inclusive.value;
    if ($tmp288) goto $l295; else goto $l296;
    $l295:;
    if ($tmp285 <= $tmp287) goto $l289; else goto $l291;
    $l296:;
    if ($tmp285 < $tmp287) goto $l289; else goto $l291;
    $l289:;
    {
        panda$core$Int64 $tmp297 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i284, start269);
        result281[$tmp297.value] = self->lexer->dfa->source[i284.value];
    }
    $l292:;
    int64_t $tmp299 = $tmp287 - i284.value;
    if ($tmp288) goto $l300; else goto $l301;
    $l300:;
    if ((uint64_t) $tmp299 >= 1) goto $l298; else goto $l291;
    $l301:;
    if ((uint64_t) $tmp299 > 1) goto $l298; else goto $l291;
    $l298:;
    i284.value += 1;
    goto $l289;
    $l291:;
    org$pandalanguage$pandac$ASTNode* $tmp306 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
    panda$core$Int64$init$builtin_int64(&$tmp307, 35);
    panda$core$String* $tmp309 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp309, result281, length279);
    $tmp308 = $tmp309;
    org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp306, $tmp307, position267, $tmp308);
    $tmp305 = $tmp306;
    $tmp304 = $tmp305;
    $returnValue272 = $tmp304;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
    return $returnValue272;
}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* self) {
    int $tmp313;
    {
    }
    $tmp313 = -1;
    goto $l311;
    $l311:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp313) {
        case -1: goto $l314;
    }
    $l314:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lexer));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->errors));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->path));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->source));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pushbackBuffer));
}

