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
#include "panda/collections/CollectionView.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/regex/RegexToken/Kind.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Immutable.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/plex/runtime/DFA.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"


static panda$core$String $s1;
org$pandalanguage$regex$RegexParser$class_type org$pandalanguage$regex$RegexParser$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$regex$RegexParser$cleanup, org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String, org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken, org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken, org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken, org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String, org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String, org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit, org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q} };

typedef panda$core$Int64 (*$fn29)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn41)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn67)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn79)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn94)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn107)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn151)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 35, -3638705302730546102, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x63\x68\x61\x72\x61\x63\x74\x65\x72\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -3357971288758770892, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x61\x63\x68\x61\x72\x61\x63\x74\x65\x72\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -2197724215612836767, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x61\x74\x6f\x6d\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 89, 4225567051746029858, NULL };

void org$pandalanguage$regex$RegexParser$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT(org$pandalanguage$regex$RegexParser* param0, panda$threads$MessageQueue* param1) {

// line 10
org$pandalanguage$regex$RegexLexer* $tmp2 = (org$pandalanguage$regex$RegexLexer*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$regex$RegexLexer$class);
org$pandalanguage$regex$RegexLexer$init($tmp2);
org$pandalanguage$regex$RegexLexer** $tmp3 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
org$pandalanguage$regex$RegexLexer** $tmp5 = &param0->lexer;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:org.pandalanguage.regex.RegexLexer)
// line 18
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp6 = (panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$class);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$init($tmp6);
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp7 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp9 = &param0->pushbackBuffer;
*$tmp9 = $tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
// unreffing REF($15:panda.collections.SpecializedArray<org.pandalanguage.regex.RegexToken>)
// line 21
panda$threads$MessageQueue** $tmp10 = &param0->errors;
panda$threads$MessageQueue* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$threads$MessageQueue** $tmp12 = &param0->errors;
*$tmp12 = param1;
// line 22
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp13 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp14 = *$tmp13;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
return;

}
void org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(org$pandalanguage$regex$RegexParser* param0, panda$io$File* param1, panda$core$String* param2) {

// line 26
org$pandalanguage$regex$RegexLexer** $tmp15 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp16 = *$tmp15;
org$pandalanguage$regex$RegexLexer$start$panda$core$String($tmp16, param2);
// line 27
panda$io$File** $tmp17 = &param0->path;
panda$io$File* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp19 = &param0->path;
*$tmp19 = param1;
// line 28
panda$core$String** $tmp20 = &param0->source;
panda$core$String* $tmp21 = *$tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp22 = &param0->source;
*$tmp22 = param2;
// line 29
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp23 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp24 = *$tmp23;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear($tmp24);
return;

}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0) {

panda$core$Int64 local0;
org$pandalanguage$regex$RegexToken local1;
org$pandalanguage$regex$RegexToken local2;
// line 33
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp25 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp26 = *$tmp25;
ITable* $tmp27 = ((panda$collections$CollectionView*) $tmp26)->$class->itable;
while ($tmp27->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
panda$core$Int64 $tmp30 = $tmp28(((panda$collections$CollectionView*) $tmp26));
panda$core$Int64 $tmp31 = (panda$core$Int64) {0};
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 != $tmp33;
panda$core$Bit $tmp35 = (panda$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block1; else goto block2;
block1:;
// line 34
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp37 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp38 = *$tmp37;
ITable* $tmp39 = ((panda$collections$CollectionView*) $tmp38)->$class->itable;
while ($tmp39->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
panda$core$Int64 $tmp42 = $tmp40(((panda$collections$CollectionView*) $tmp38));
panda$core$Int64 $tmp43 = (panda$core$Int64) {1};
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44 - $tmp45;
panda$core$Int64 $tmp47 = (panda$core$Int64) {$tmp46};
*(&local0) = $tmp47;
// line 35
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp48 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp49 = *$tmp48;
panda$core$Int64 $tmp50 = *(&local0);
org$pandalanguage$regex$RegexToken $tmp51 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp49, $tmp50);
*(&local1) = $tmp51;
// line 36
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp52 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp53 = *$tmp52;
panda$core$Int64 $tmp54 = *(&local0);
org$pandalanguage$regex$RegexToken $tmp55 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp53, $tmp54);
// line 37
org$pandalanguage$regex$RegexToken $tmp56 = *(&local1);
return $tmp56;
block2:;
// line 39
org$pandalanguage$regex$RegexLexer** $tmp57 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp58 = *$tmp57;
org$pandalanguage$regex$RegexToken $tmp59 = org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken($tmp58);
*(&local2) = $tmp59;
// line 40
org$pandalanguage$regex$RegexToken $tmp60 = *(&local2);
return $tmp60;

}
void org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1) {

// line 44
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp61 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp62 = *$tmp61;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken($tmp62, param1);
return;

}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0) {

// line 48
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp63 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp64 = *$tmp63;
ITable* $tmp65 = ((panda$collections$CollectionView*) $tmp64)->$class->itable;
while ($tmp65->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp65 = $tmp65->next;
}
$fn67 $tmp66 = $tmp65->methods[0];
panda$core$Int64 $tmp68 = $tmp66(((panda$collections$CollectionView*) $tmp64));
panda$core$Int64 $tmp69 = (panda$core$Int64) {0};
panda$core$Bit $tmp70 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp68, $tmp69);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block1; else goto block2;
block1:;
// line 49
org$pandalanguage$regex$RegexToken $tmp72 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp72);
goto block2;
block2:;
// line 51
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp73 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp74 = *$tmp73;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp75 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp76 = *$tmp75;
ITable* $tmp77 = ((panda$collections$CollectionView*) $tmp76)->$class->itable;
while ($tmp77->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
panda$core$Int64 $tmp80 = $tmp78(((panda$collections$CollectionView*) $tmp76));
panda$core$Int64 $tmp81 = (panda$core$Int64) {1};
int64_t $tmp82 = $tmp80.value;
int64_t $tmp83 = $tmp81.value;
int64_t $tmp84 = $tmp82 - $tmp83;
panda$core$Int64 $tmp85 = (panda$core$Int64) {$tmp84};
org$pandalanguage$regex$RegexToken $tmp86 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp74, $tmp85);
return $tmp86;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken$Kind param1) {

org$pandalanguage$regex$RegexToken local0;
// line 55
org$pandalanguage$regex$RegexToken $tmp87 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp87;
// line 56
org$pandalanguage$regex$RegexToken $tmp88 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp89 = $tmp88.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp90;
$tmp90 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp90->value = $tmp89;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp91;
$tmp91 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp91->value = param1;
ITable* $tmp92 = ((panda$core$Equatable*) $tmp90)->$class->itable;
while ($tmp92->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
panda$core$Bit $tmp95 = $tmp93(((panda$core$Equatable*) $tmp90), ((panda$core$Equatable*) $tmp91));
bool $tmp96 = $tmp95.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp91)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp90)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.regex.RegexToken.Kind>)
if ($tmp96) goto block1; else goto block2;
block1:;
// line 57
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit(true);
return $tmp97;
block2:;
// line 59
org$pandalanguage$regex$RegexToken $tmp98 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp98);
// line 60
panda$core$Bit $tmp99 = panda$core$Bit$init$builtin_bit(false);
return $tmp99;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken$Kind param1, panda$core$String* param2) {

org$pandalanguage$regex$RegexToken local0;
// line 64
org$pandalanguage$regex$RegexToken $tmp100 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp100;
// line 65
org$pandalanguage$regex$RegexToken $tmp101 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp102 = $tmp101.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp103;
$tmp103 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp103->value = $tmp102;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp104;
$tmp104 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp104->value = param1;
ITable* $tmp105 = ((panda$core$Equatable*) $tmp103)->$class->itable;
while ($tmp105->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
panda$core$Bit $tmp108 = $tmp106(((panda$core$Equatable*) $tmp103), ((panda$core$Equatable*) $tmp104));
bool $tmp109 = $tmp108.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp104)));
// unreffing REF($8:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp103)));
// unreffing REF($6:panda.core.Equatable<org.pandalanguage.regex.RegexToken.Kind>)
if ($tmp109) goto block1; else goto block2;
block1:;
// line 66
panda$core$Bit $tmp110 = panda$core$Bit$init$builtin_bit(true);
return $tmp110;
block2:;
// line 68
org$pandalanguage$regex$RegexToken $tmp111 = *(&local0);
panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s113, param2);
panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, &$s115);
org$pandalanguage$regex$RegexToken $tmp116 = *(&local0);
panda$core$String* $tmp117 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(param0, $tmp116);
panda$core$String* $tmp118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp114, $tmp117);
panda$core$String* $tmp119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp118, &$s120);
org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(param0, $tmp111, $tmp119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
// unreffing REF($29:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
// unreffing REF($28:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// unreffing REF($27:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($24:panda.core.String)
// line 69
panda$core$Bit $tmp121 = panda$core$Bit$init$builtin_bit(false);
return $tmp121;

}
void org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1, panda$core$String* param2) {

// line 73
panda$threads$MessageQueue** $tmp122 = &param0->errors;
panda$threads$MessageQueue* $tmp123 = *$tmp122;
org$pandalanguage$pandac$Compiler$Error* $tmp124 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
panda$io$File** $tmp125 = &param0->path;
panda$io$File* $tmp126 = *$tmp125;
org$pandalanguage$pandac$Position $tmp127 = param1.position;
org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp124, $tmp126, $tmp127, param2);
panda$threads$MessageQueue$post$panda$threads$MessageQueue$T($tmp123, ((panda$core$Immutable*) $tmp124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($4:org.pandalanguage.pandac.Compiler.Error)
return;

}
panda$core$String* org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1) {

// line 77
panda$core$String** $tmp128 = &param0->source;
panda$core$String* $tmp129 = *$tmp128;
panda$core$String$Index $tmp130 = param1.start;
panda$core$String$Index $tmp131 = param1.end;
panda$core$Bit $tmp132 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp133 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp130, $tmp131, $tmp132);
panda$core$String* $tmp134 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp129, $tmp133);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($7:panda.core.String)
return $tmp134;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 84
goto block1;
block1:;
// line 85
org$pandalanguage$regex$RegexToken $tmp135 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp135;
// line 86
org$pandalanguage$regex$RegexToken $tmp136 = *(&local0);
panda$core$String* $tmp137 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(param0, $tmp136);
panda$core$Bit $tmp138 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp137, &$s139);
bool $tmp140 = $tmp138.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($7:panda.core.String)
if ($tmp140) goto block3; else goto block4;
block3:;
// line 87
org$pandalanguage$regex$RegexToken $tmp141 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp141);
// line 88
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit(true);
return $tmp142;
block4:;
// line 90
org$pandalanguage$regex$RegexToken $tmp143 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp144 = $tmp143.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp145;
$tmp145 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp145->value = $tmp144;
panda$core$Int64 $tmp146 = (panda$core$Int64) {0};
org$pandalanguage$regex$RegexToken$Kind $tmp147 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp146);
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp148;
$tmp148 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp148->value = $tmp147;
ITable* $tmp149 = ((panda$core$Equatable*) $tmp145)->$class->itable;
while ($tmp149->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[0];
panda$core$Bit $tmp152 = $tmp150(((panda$core$Equatable*) $tmp145), ((panda$core$Equatable*) $tmp148));
bool $tmp153 = $tmp152.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp148)));
// unreffing REF($27:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp145)));
// unreffing REF($23:panda.core.Equatable<org.pandalanguage.regex.RegexToken.Kind>)
if ($tmp153) goto block5; else goto block6;
block5:;
// line 91
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit(false);
return $tmp154;
block6:;
goto block1;
block2:;
panda$core$Bit $tmp155 = panda$core$Bit$init$builtin_bit(false);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp157 = (panda$core$Int64) {83};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s158, $tmp157, &$s159);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 100
panda$core$Int64 $tmp160 = (panda$core$Int64) {4};
org$pandalanguage$regex$RegexToken$Kind $tmp161 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp160);
panda$core$Bit $tmp162 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp161, &$s163);
panda$core$Bit $tmp164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp162);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block1; else goto block2;
block1:;
// line 101
panda$core$Bit $tmp166 = panda$core$Bit$init$builtin_bit(false);
return $tmp166;
block2:;
// line 103
goto block3;
block3:;
panda$core$Int64 $tmp167 = (panda$core$Int64) {4};
org$pandalanguage$regex$RegexToken$Kind $tmp168 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp167);
panda$core$Bit $tmp169 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block4; else goto block5;
block4:;
goto block3;
block5:;
// line 105
panda$core$Bit $tmp171 = panda$core$Bit$init$builtin_bit(true);
return $tmp171;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 112
org$pandalanguage$regex$RegexToken $tmp172 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp172;
// line 113
org$pandalanguage$regex$RegexToken $tmp173 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp174 = $tmp173.kind;
panda$core$Int64 $tmp175 = $tmp174.$rawValue;
panda$core$Int64 $tmp176 = (panda$core$Int64) {5};
panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp175, $tmp176);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp179 = (panda$core$Int64) {6};
panda$core$Bit $tmp180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp175, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block2; else goto block4;
block2:;
// line 115
panda$core$Int64 $tmp182 = (panda$core$Int64) {7};
org$pandalanguage$regex$RegexToken$Kind $tmp183 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp182);
panda$core$Bit $tmp184 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp183);
// line 116
panda$core$Bit $tmp185 = panda$core$Bit$init$builtin_bit(true);
return $tmp185;
block4:;
panda$core$Int64 $tmp186 = (panda$core$Int64) {7};
panda$core$Bit $tmp187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp175, $tmp186);
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block5; else goto block6;
block5:;
// line 119
panda$core$Bit $tmp189 = panda$core$Bit$init$builtin_bit(true);
return $tmp189;
block6:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {17};
panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp175, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block7; else goto block8;
block7:;
// line 122
org$pandalanguage$regex$RegexToken $tmp193 = org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(param0);
org$pandalanguage$regex$RegexToken$Kind $tmp194 = $tmp193.kind;
panda$core$Int64 $tmp195 = $tmp194.$rawValue;
panda$core$Int64 $tmp196 = (panda$core$Int64) {18};
panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp195, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp199 = (panda$core$Int64) {19};
panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp195, $tmp199);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block10; else goto block12;
block12:;
panda$core$Int64 $tmp202 = (panda$core$Int64) {17};
panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp195, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block10; else goto block9;
block10:;
// line 125
org$pandalanguage$regex$RegexToken $tmp205 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
goto block9;
block9:;
goto block1;
block8:;
// line 130
org$pandalanguage$regex$RegexToken $tmp206 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp206);
// line 131
panda$core$Bit $tmp207 = panda$core$Bit$init$builtin_bit(false);
return $tmp207;
block1:;
panda$core$Bit $tmp208 = panda$core$Bit$init$builtin_bit(false);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp210 = (panda$core$Int64) {111};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s211, $tmp210, &$s212);
abort(); // unreachable
block13:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 141
org$pandalanguage$regex$RegexToken $tmp213 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp213;
// line 142
org$pandalanguage$regex$RegexToken $tmp214 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp215 = $tmp214.kind;
panda$core$Int64 $tmp216 = $tmp215.$rawValue;
panda$core$Int64 $tmp217 = (panda$core$Int64) {3};
panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp217);
bool $tmp219 = $tmp218.value;
if ($tmp219) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp220 = (panda$core$Int64) {4};
panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp223 = (panda$core$Int64) {17};
panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp223);
bool $tmp225 = $tmp224.value;
if ($tmp225) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp226 = (panda$core$Int64) {16};
panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp226);
bool $tmp228 = $tmp227.value;
if ($tmp228) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp229 = (panda$core$Int64) {18};
panda$core$Bit $tmp230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp232 = (panda$core$Int64) {19};
panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp235 = (panda$core$Int64) {20};
panda$core$Bit $tmp236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block2; else goto block9;
block2:;
// line 146
panda$core$Bit $tmp238 = panda$core$Bit$init$builtin_bit(true);
return $tmp238;
block9:;
panda$core$Int64 $tmp239 = (panda$core$Int64) {8};
panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp239);
bool $tmp241 = $tmp240.value;
if ($tmp241) goto block10; else goto block11;
block10:;
// line 149
panda$core$Int64 $tmp242 = (panda$core$Int64) {7};
org$pandalanguage$regex$RegexToken$Kind $tmp243 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp242);
panda$core$Bit $tmp244 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp243);
// line 150
panda$core$Bit $tmp245 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
panda$core$Bit $tmp246 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block12; else goto block13;
block12:;
// line 151
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit(false);
return $tmp248;
block13:;
// line 153
panda$core$Int64 $tmp249 = (panda$core$Int64) {9};
org$pandalanguage$regex$RegexToken$Kind $tmp250 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp249);
panda$core$Bit $tmp251 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp250, &$s252);
return $tmp251;
block11:;
panda$core$Int64 $tmp253 = (panda$core$Int64) {12};
panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp253);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block14; else goto block15;
block14:;
// line 156
panda$core$Bit $tmp256 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(param0);
panda$core$Bit $tmp257 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block16; else goto block17;
block16:;
// line 157
panda$core$Bit $tmp259 = panda$core$Bit$init$builtin_bit(false);
return $tmp259;
block17:;
// line 159
panda$core$Int64 $tmp260 = (panda$core$Int64) {13};
org$pandalanguage$regex$RegexToken$Kind $tmp261 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp260);
panda$core$Bit $tmp262 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp261, &$s263);
return $tmp262;
block15:;
panda$core$Int64 $tmp264 = (panda$core$Int64) {10};
panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp216, $tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block18; else goto block19;
block18:;
// line 162
panda$core$Bit $tmp267 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(param0);
panda$core$Bit $tmp268 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp267);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block20; else goto block21;
block20:;
// line 163
panda$core$Bit $tmp270 = panda$core$Bit$init$builtin_bit(false);
return $tmp270;
block21:;
// line 165
panda$core$Int64 $tmp271 = (panda$core$Int64) {14};
org$pandalanguage$regex$RegexToken$Kind $tmp272 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp271);
panda$core$Bit $tmp273 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block22; else goto block23;
block22:;
// line 166
panda$core$Bit $tmp275 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(param0);
goto block23;
block23:;
// line 168
panda$core$Int64 $tmp276 = (panda$core$Int64) {11};
org$pandalanguage$regex$RegexToken$Kind $tmp277 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp276);
panda$core$Bit $tmp278 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp277, &$s279);
return $tmp278;
block19:;
// line 171
org$pandalanguage$regex$RegexToken $tmp280 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp280);
// line 172
panda$core$Bit $tmp281 = panda$core$Bit$init$builtin_bit(false);
return $tmp281;
block1:;
panda$core$Bit $tmp282 = panda$core$Bit$init$builtin_bit(false);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp284 = (panda$core$Int64) {140};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s285, $tmp284, &$s286);
abort(); // unreachable
block24:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 181
panda$core$Bit $tmp287 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(param0);
panda$core$Bit $tmp288 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp287);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block1; else goto block2;
block1:;
// line 182
panda$core$Bit $tmp290 = panda$core$Bit$init$builtin_bit(false);
return $tmp290;
block2:;
// line 184
panda$core$Bit $tmp291 = org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(param0);
// line 185
panda$core$Bit $tmp292 = panda$core$Bit$init$builtin_bit(true);
return $tmp292;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 192
panda$core$Bit $tmp293 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(param0);
panda$core$Bit $tmp294 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp293);
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block1; else goto block2;
block1:;
// line 193
panda$core$Bit $tmp296 = panda$core$Bit$init$builtin_bit(false);
return $tmp296;
block2:;
// line 195
panda$core$Bit $tmp297 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(param0);
// line 196
panda$core$Bit $tmp298 = panda$core$Bit$init$builtin_bit(true);
return $tmp298;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 203
panda$core$Bit $tmp299 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(param0);
panda$core$Bit $tmp300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp299);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block1:;
// line 204
panda$core$Bit $tmp302 = panda$core$Bit$init$builtin_bit(false);
return $tmp302;
block2:;
// line 206
panda$core$Bit $tmp303 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
// line 207
panda$core$Bit $tmp304 = panda$core$Bit$init$builtin_bit(true);
return $tmp304;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$pandac$Position local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Char8* local4;
panda$core$Int64 local5;
// line 214
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp305 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp306 = *$tmp305;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear($tmp306);
// line 215
org$pandalanguage$regex$RegexLexer** $tmp307 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp308 = *$tmp307;
org$pandalanguage$plex$runtime$DFA** $tmp309 = &$tmp308->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp310 = *$tmp309;
panda$core$Int64* $tmp311 = &$tmp310->line;
panda$core$Int64 $tmp312 = *$tmp311;
org$pandalanguage$regex$RegexLexer** $tmp313 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp314 = *$tmp313;
org$pandalanguage$plex$runtime$DFA** $tmp315 = &$tmp314->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp316 = *$tmp315;
panda$core$Int64* $tmp317 = &$tmp316->column;
panda$core$Int64 $tmp318 = *$tmp317;
org$pandalanguage$pandac$Position $tmp319 = org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64($tmp312, $tmp318);
*(&local0) = $tmp319;
// line 216
org$pandalanguage$regex$RegexLexer** $tmp320 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp321 = *$tmp320;
org$pandalanguage$plex$runtime$DFA** $tmp322 = &$tmp321->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp323 = *$tmp322;
panda$core$Int64* $tmp324 = &$tmp323->offset;
panda$core$Int64 $tmp325 = *$tmp324;
*(&local1) = $tmp325;
// line 217
panda$core$Bit $tmp326 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
panda$core$Bit $tmp327 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block1; else goto block2;
block1:;
// line 218
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 220
org$pandalanguage$regex$RegexLexer** $tmp329 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp330 = *$tmp329;
org$pandalanguage$plex$runtime$DFA** $tmp331 = &$tmp330->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp332 = *$tmp331;
panda$core$Int64* $tmp333 = &$tmp332->offset;
panda$core$Int64 $tmp334 = *$tmp333;
panda$core$Int64 $tmp335 = (panda$core$Int64) {1};
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336 - $tmp337;
panda$core$Int64 $tmp339 = (panda$core$Int64) {$tmp338};
panda$core$Int64* $tmp340 = &$tmp332->offset;
*$tmp340 = $tmp339;
// line 221
org$pandalanguage$regex$RegexLexer** $tmp341 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp342 = *$tmp341;
org$pandalanguage$plex$runtime$DFA** $tmp343 = &$tmp342->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp344 = *$tmp343;
panda$core$Int64* $tmp345 = &$tmp344->offset;
panda$core$Int64 $tmp346 = *$tmp345;
*(&local2) = $tmp346;
// line 222
panda$core$Int64 $tmp347 = *(&local2);
panda$core$Int64 $tmp348 = *(&local1);
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348.value;
int64_t $tmp351 = $tmp349 - $tmp350;
panda$core$Int64 $tmp352 = (panda$core$Int64) {$tmp351};
*(&local3) = $tmp352;
// line 223
panda$core$Int64 $tmp353 = *(&local3);
int64_t $tmp354 = $tmp353.value;
panda$core$Char8* $tmp355 = ((panda$core$Char8*) pandaZAlloc($tmp354 * 1));
*(&local4) = $tmp355;
// line 224
panda$core$Int64 $tmp356 = *(&local1);
panda$core$Int64 $tmp357 = *(&local2);
panda$core$Bit $tmp358 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp359 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp356, $tmp357, $tmp358);
panda$core$Int64 $tmp360 = $tmp359.min;
*(&local5) = $tmp360;
panda$core$Int64 $tmp361 = $tmp359.max;
panda$core$Bit $tmp362 = $tmp359.inclusive;
bool $tmp363 = $tmp362.value;
panda$core$Int64 $tmp364 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp365 = panda$core$Int64$convert$R$panda$core$UInt64($tmp364);
if ($tmp363) goto block6; else goto block7;
block6:;
int64_t $tmp366 = $tmp360.value;
int64_t $tmp367 = $tmp361.value;
bool $tmp368 = $tmp366 <= $tmp367;
panda$core$Bit $tmp369 = (panda$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block3; else goto block4;
block7:;
int64_t $tmp371 = $tmp360.value;
int64_t $tmp372 = $tmp361.value;
bool $tmp373 = $tmp371 < $tmp372;
panda$core$Bit $tmp374 = (panda$core$Bit) {$tmp373};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block3; else goto block4;
block3:;
// line 225
panda$core$Char8* $tmp376 = *(&local4);
panda$core$Int64 $tmp377 = *(&local5);
panda$core$Int64 $tmp378 = *(&local1);
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
panda$core$Int64 $tmp382 = (panda$core$Int64) {$tmp381};
org$pandalanguage$regex$RegexLexer** $tmp383 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp384 = *$tmp383;
org$pandalanguage$plex$runtime$DFA** $tmp385 = &$tmp384->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp386 = *$tmp385;
panda$core$Char8** $tmp387 = &$tmp386->source;
panda$core$Char8* $tmp388 = *$tmp387;
panda$core$Int64 $tmp389 = *(&local5);
int64_t $tmp390 = $tmp389.value;
panda$core$Char8 $tmp391 = $tmp388[$tmp390];
int64_t $tmp392 = $tmp382.value;
$tmp376[$tmp392] = $tmp391;
goto block5;
block5:;
panda$core$Int64 $tmp393 = *(&local5);
int64_t $tmp394 = $tmp361.value;
int64_t $tmp395 = $tmp393.value;
int64_t $tmp396 = $tmp394 - $tmp395;
panda$core$Int64 $tmp397 = (panda$core$Int64) {$tmp396};
panda$core$UInt64 $tmp398 = panda$core$Int64$convert$R$panda$core$UInt64($tmp397);
if ($tmp363) goto block9; else goto block10;
block9:;
uint64_t $tmp399 = $tmp398.value;
uint64_t $tmp400 = $tmp365.value;
bool $tmp401 = $tmp399 >= $tmp400;
panda$core$Bit $tmp402 = (panda$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block8; else goto block4;
block10:;
uint64_t $tmp404 = $tmp398.value;
uint64_t $tmp405 = $tmp365.value;
bool $tmp406 = $tmp404 > $tmp405;
panda$core$Bit $tmp407 = (panda$core$Bit) {$tmp406};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block8; else goto block4;
block8:;
int64_t $tmp409 = $tmp393.value;
int64_t $tmp410 = $tmp364.value;
int64_t $tmp411 = $tmp409 + $tmp410;
panda$core$Int64 $tmp412 = (panda$core$Int64) {$tmp411};
*(&local5) = $tmp412;
goto block3;
block4:;
// line 227
org$pandalanguage$pandac$ASTNode* $tmp413 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp414 = (panda$core$Int64) {35};
org$pandalanguage$pandac$Position $tmp415 = *(&local0);
panda$core$String* $tmp416 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp417 = *(&local4);
panda$core$Int64 $tmp418 = *(&local3);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp416, $tmp417, $tmp418);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp413, $tmp414, $tmp415, $tmp416);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
// unreffing REF($145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing REF($142:org.pandalanguage.pandac.ASTNode)
return $tmp413;

}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$regex$RegexLexer** $tmp419 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp420 = *$tmp419;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
panda$threads$MessageQueue** $tmp421 = &param0->errors;
panda$threads$MessageQueue* $tmp422 = *$tmp421;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
panda$io$File** $tmp423 = &param0->path;
panda$io$File* $tmp424 = *$tmp423;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
panda$core$String** $tmp425 = &param0->source;
panda$core$String* $tmp426 = *$tmp425;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp427 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp428 = *$tmp427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
return;

}

