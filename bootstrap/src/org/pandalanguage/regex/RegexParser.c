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

typedef panda$core$Int64 (*$fn27)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn36)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn62)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn74)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn89)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn102)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn146)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 35, -3638705302730546102, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x63\x68\x61\x72\x61\x63\x74\x65\x72\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -3357971288758770892, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static panda$core$String $s206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s207 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x61\x63\x68\x61\x72\x61\x63\x74\x65\x72\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -2197724215612836767, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x61\x74\x6f\x6d\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 89, 4225567051746029858, NULL };

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
// line 21
panda$threads$MessageQueue** $tmp10 = &param0->errors;
panda$threads$MessageQueue* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$threads$MessageQueue** $tmp12 = &param0->errors;
*$tmp12 = param1;
return;

}
void org$pandalanguage$regex$RegexParser$start$panda$io$File$panda$core$String(org$pandalanguage$regex$RegexParser* param0, panda$io$File* param1, panda$core$String* param2) {

// line 25
org$pandalanguage$regex$RegexLexer** $tmp13 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp14 = *$tmp13;
org$pandalanguage$regex$RegexLexer$start$panda$core$String($tmp14, param2);
// line 26
panda$io$File** $tmp15 = &param0->path;
panda$io$File* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$io$File** $tmp17 = &param0->path;
*$tmp17 = param1;
// line 27
panda$core$String** $tmp18 = &param0->source;
panda$core$String* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$String** $tmp20 = &param0->source;
*$tmp20 = param2;
// line 28
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp21 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp22 = *$tmp21;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear($tmp22);
return;

}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0) {

panda$core$Int64 local0;
org$pandalanguage$regex$RegexToken local1;
org$pandalanguage$regex$RegexToken local2;
// line 32
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp23 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp24 = *$tmp23;
ITable* $tmp25 = ((panda$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
panda$core$Int64 $tmp28 = $tmp26(((panda$collections$CollectionView*) $tmp24));
panda$core$Int64 $tmp29 = (panda$core$Int64) {0};
panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp28, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
// line 33
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp32 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp33 = *$tmp32;
ITable* $tmp34 = ((panda$collections$CollectionView*) $tmp33)->$class->itable;
while ($tmp34->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
panda$core$Int64 $tmp37 = $tmp35(((panda$collections$CollectionView*) $tmp33));
panda$core$Int64 $tmp38 = (panda$core$Int64) {1};
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38.value;
int64_t $tmp41 = $tmp39 - $tmp40;
panda$core$Int64 $tmp42 = (panda$core$Int64) {$tmp41};
*(&local0) = $tmp42;
// line 34
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp43 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp44 = *$tmp43;
panda$core$Int64 $tmp45 = *(&local0);
org$pandalanguage$regex$RegexToken $tmp46 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp44, $tmp45);
*(&local1) = $tmp46;
// line 35
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp47 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp48 = *$tmp47;
panda$core$Int64 $tmp49 = *(&local0);
org$pandalanguage$regex$RegexToken $tmp50 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp48, $tmp49);
// line 36
org$pandalanguage$regex$RegexToken $tmp51 = *(&local1);
return $tmp51;
block2:;
// line 38
org$pandalanguage$regex$RegexLexer** $tmp52 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp53 = *$tmp52;
org$pandalanguage$regex$RegexToken $tmp54 = org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken($tmp53);
*(&local2) = $tmp54;
// line 39
org$pandalanguage$regex$RegexToken $tmp55 = *(&local2);
return $tmp55;

}
void org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1) {

// line 43
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp56 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp57 = *$tmp56;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken($tmp57, param1);
return;

}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0) {

// line 47
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp58 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp59 = *$tmp58;
ITable* $tmp60 = ((panda$collections$CollectionView*) $tmp59)->$class->itable;
while ($tmp60->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[0];
panda$core$Int64 $tmp63 = $tmp61(((panda$collections$CollectionView*) $tmp59));
panda$core$Int64 $tmp64 = (panda$core$Int64) {0};
panda$core$Bit $tmp65 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp63, $tmp64);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
// line 48
org$pandalanguage$regex$RegexToken $tmp67 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp67);
goto block2;
block2:;
// line 50
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp68 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp69 = *$tmp68;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp70 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp71 = *$tmp70;
ITable* $tmp72 = ((panda$collections$CollectionView*) $tmp71)->$class->itable;
while ($tmp72->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp72 = $tmp72->next;
}
$fn74 $tmp73 = $tmp72->methods[0];
panda$core$Int64 $tmp75 = $tmp73(((panda$collections$CollectionView*) $tmp71));
panda$core$Int64 $tmp76 = (panda$core$Int64) {1};
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77 - $tmp78;
panda$core$Int64 $tmp80 = (panda$core$Int64) {$tmp79};
org$pandalanguage$regex$RegexToken $tmp81 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp69, $tmp80);
return $tmp81;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken$Kind param1) {

org$pandalanguage$regex$RegexToken local0;
// line 54
org$pandalanguage$regex$RegexToken $tmp82 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp82;
// line 55
org$pandalanguage$regex$RegexToken $tmp83 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp84 = $tmp83.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp85;
$tmp85 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp85->value = $tmp84;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp86;
$tmp86 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp86->value = param1;
ITable* $tmp87 = ((panda$core$Equatable*) $tmp85)->$class->itable;
while ($tmp87->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[0];
panda$core$Bit $tmp90 = $tmp88(((panda$core$Equatable*) $tmp85), ((panda$core$Equatable*) $tmp86));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp85)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp86)));
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block1; else goto block2;
block1:;
// line 56
panda$core$Bit $tmp92 = panda$core$Bit$init$builtin_bit(true);
return $tmp92;
block2:;
// line 58
org$pandalanguage$regex$RegexToken $tmp93 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp93);
// line 59
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit(false);
return $tmp94;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken$Kind param1, panda$core$String* param2) {

org$pandalanguage$regex$RegexToken local0;
// line 63
org$pandalanguage$regex$RegexToken $tmp95 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp95;
// line 64
org$pandalanguage$regex$RegexToken $tmp96 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp97 = $tmp96.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp98;
$tmp98 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp98->value = $tmp97;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp99;
$tmp99 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp99->value = param1;
ITable* $tmp100 = ((panda$core$Equatable*) $tmp98)->$class->itable;
while ($tmp100->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
panda$core$Bit $tmp103 = $tmp101(((panda$core$Equatable*) $tmp98), ((panda$core$Equatable*) $tmp99));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp98)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp99)));
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block1; else goto block2;
block1:;
// line 65
panda$core$Bit $tmp105 = panda$core$Bit$init$builtin_bit(true);
return $tmp105;
block2:;
// line 67
org$pandalanguage$regex$RegexToken $tmp106 = *(&local0);
panda$core$String* $tmp107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s108, param2);
panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp107, &$s110);
org$pandalanguage$regex$RegexToken $tmp111 = *(&local0);
panda$core$String* $tmp112 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(param0, $tmp111);
panda$core$String* $tmp113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp109, $tmp112);
panda$core$String* $tmp114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp113, &$s115);
org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(param0, $tmp106, $tmp114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
// line 68
panda$core$Bit $tmp116 = panda$core$Bit$init$builtin_bit(false);
return $tmp116;

}
void org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1, panda$core$String* param2) {

// line 72
panda$threads$MessageQueue** $tmp117 = &param0->errors;
panda$threads$MessageQueue* $tmp118 = *$tmp117;
org$pandalanguage$pandac$Compiler$Error* $tmp119 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
panda$io$File** $tmp120 = &param0->path;
panda$io$File* $tmp121 = *$tmp120;
org$pandalanguage$pandac$Position $tmp122 = param1.position;
org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp119, $tmp121, $tmp122, param2);
panda$threads$MessageQueue$post$panda$threads$MessageQueue$T($tmp118, ((panda$core$Immutable*) $tmp119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp119));
return;

}
panda$core$String* org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1) {

// line 76
panda$core$String** $tmp123 = &param0->source;
panda$core$String* $tmp124 = *$tmp123;
panda$core$String$Index $tmp125 = param1.start;
panda$core$String$Index $tmp126 = param1.end;
panda$core$Bit $tmp127 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp128 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp125, $tmp126, $tmp127);
panda$core$String* $tmp129 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp124, $tmp128);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
return $tmp129;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 83
goto block1;
block1:;
// line 84
org$pandalanguage$regex$RegexToken $tmp130 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp130;
// line 85
org$pandalanguage$regex$RegexToken $tmp131 = *(&local0);
panda$core$String* $tmp132 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(param0, $tmp131);
panda$core$Bit $tmp133 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp132, &$s134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
bool $tmp135 = $tmp133.value;
if ($tmp135) goto block3; else goto block4;
block3:;
// line 86
org$pandalanguage$regex$RegexToken $tmp136 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp136);
// line 87
panda$core$Bit $tmp137 = panda$core$Bit$init$builtin_bit(true);
return $tmp137;
block4:;
// line 89
org$pandalanguage$regex$RegexToken $tmp138 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp139 = $tmp138.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp140;
$tmp140 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp140->value = $tmp139;
panda$core$Int64 $tmp141 = (panda$core$Int64) {0};
org$pandalanguage$regex$RegexToken$Kind $tmp142 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp141);
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp143;
$tmp143 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp143->value = $tmp142;
ITable* $tmp144 = ((panda$core$Equatable*) $tmp140)->$class->itable;
while ($tmp144->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp144 = $tmp144->next;
}
$fn146 $tmp145 = $tmp144->methods[0];
panda$core$Bit $tmp147 = $tmp145(((panda$core$Equatable*) $tmp140), ((panda$core$Equatable*) $tmp143));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp140)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp143)));
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block5; else goto block6;
block5:;
// line 90
panda$core$Bit $tmp149 = panda$core$Bit$init$builtin_bit(false);
return $tmp149;
block6:;
goto block1;
block2:;
panda$core$Bit $tmp150 = panda$core$Bit$init$builtin_bit(false);
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp152 = (panda$core$Int64) {82};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s153, $tmp152, &$s154);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 99
panda$core$Int64 $tmp155 = (panda$core$Int64) {4};
org$pandalanguage$regex$RegexToken$Kind $tmp156 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp155);
panda$core$Bit $tmp157 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp156, &$s158);
panda$core$Bit $tmp159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp157);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block1; else goto block2;
block1:;
// line 100
panda$core$Bit $tmp161 = panda$core$Bit$init$builtin_bit(false);
return $tmp161;
block2:;
// line 102
goto block3;
block3:;
panda$core$Int64 $tmp162 = (panda$core$Int64) {4};
org$pandalanguage$regex$RegexToken$Kind $tmp163 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp162);
panda$core$Bit $tmp164 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp163);
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block4; else goto block5;
block4:;
goto block3;
block5:;
// line 104
panda$core$Bit $tmp166 = panda$core$Bit$init$builtin_bit(true);
return $tmp166;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 111
org$pandalanguage$regex$RegexToken $tmp167 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp167;
// line 112
org$pandalanguage$regex$RegexToken $tmp168 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp169 = $tmp168.kind;
panda$core$Int64 $tmp170 = $tmp169.$rawValue;
panda$core$Int64 $tmp171 = (panda$core$Int64) {5};
panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp170, $tmp171);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp174 = (panda$core$Int64) {6};
panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp170, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block2; else goto block4;
block2:;
// line 114
panda$core$Int64 $tmp177 = (panda$core$Int64) {7};
org$pandalanguage$regex$RegexToken$Kind $tmp178 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp177);
panda$core$Bit $tmp179 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp178);
// line 115
panda$core$Bit $tmp180 = panda$core$Bit$init$builtin_bit(true);
return $tmp180;
block4:;
panda$core$Int64 $tmp181 = (panda$core$Int64) {7};
panda$core$Bit $tmp182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp170, $tmp181);
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block5; else goto block6;
block5:;
// line 117
panda$core$Bit $tmp184 = panda$core$Bit$init$builtin_bit(true);
return $tmp184;
block6:;
panda$core$Int64 $tmp185 = (panda$core$Int64) {17};
panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp170, $tmp185);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block7; else goto block8;
block7:;
// line 119
org$pandalanguage$regex$RegexToken $tmp188 = org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(param0);
org$pandalanguage$regex$RegexToken$Kind $tmp189 = $tmp188.kind;
panda$core$Int64 $tmp190 = $tmp189.$rawValue;
panda$core$Int64 $tmp191 = (panda$core$Int64) {18};
panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp194 = (panda$core$Int64) {19};
panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block10; else goto block12;
block12:;
panda$core$Int64 $tmp197 = (panda$core$Int64) {17};
panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp190, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block10; else goto block9;
block10:;
// line 122
org$pandalanguage$regex$RegexToken $tmp200 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
goto block9;
block9:;
goto block1;
block8:;
// line 125
org$pandalanguage$regex$RegexToken $tmp201 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp201);
// line 126
panda$core$Bit $tmp202 = panda$core$Bit$init$builtin_bit(false);
return $tmp202;
block1:;
panda$core$Bit $tmp203 = panda$core$Bit$init$builtin_bit(false);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp205 = (panda$core$Int64) {110};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s206, $tmp205, &$s207);
abort(); // unreachable
block13:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 135
org$pandalanguage$regex$RegexToken $tmp208 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp208;
// line 136
org$pandalanguage$regex$RegexToken $tmp209 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp210 = $tmp209.kind;
panda$core$Int64 $tmp211 = $tmp210.$rawValue;
panda$core$Int64 $tmp212 = (panda$core$Int64) {3};
panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp215 = (panda$core$Int64) {4};
panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp218 = (panda$core$Int64) {17};
panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp221 = (panda$core$Int64) {16};
panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp224 = (panda$core$Int64) {18};
panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {19};
panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp230 = (panda$core$Int64) {20};
panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block2; else goto block9;
block2:;
// line 140
panda$core$Bit $tmp233 = panda$core$Bit$init$builtin_bit(true);
return $tmp233;
block9:;
panda$core$Int64 $tmp234 = (panda$core$Int64) {8};
panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block10; else goto block11;
block10:;
// line 142
panda$core$Int64 $tmp237 = (panda$core$Int64) {7};
org$pandalanguage$regex$RegexToken$Kind $tmp238 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp237);
panda$core$Bit $tmp239 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp238);
// line 143
panda$core$Bit $tmp240 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
panda$core$Bit $tmp241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block12; else goto block13;
block12:;
// line 144
panda$core$Bit $tmp243 = panda$core$Bit$init$builtin_bit(false);
return $tmp243;
block13:;
// line 146
panda$core$Int64 $tmp244 = (panda$core$Int64) {9};
org$pandalanguage$regex$RegexToken$Kind $tmp245 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp244);
panda$core$Bit $tmp246 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp245, &$s247);
return $tmp246;
block11:;
panda$core$Int64 $tmp248 = (panda$core$Int64) {12};
panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp248);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block14; else goto block15;
block14:;
// line 148
panda$core$Bit $tmp251 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(param0);
panda$core$Bit $tmp252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block16; else goto block17;
block16:;
// line 149
panda$core$Bit $tmp254 = panda$core$Bit$init$builtin_bit(false);
return $tmp254;
block17:;
// line 151
panda$core$Int64 $tmp255 = (panda$core$Int64) {13};
org$pandalanguage$regex$RegexToken$Kind $tmp256 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp255);
panda$core$Bit $tmp257 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp256, &$s258);
return $tmp257;
block15:;
panda$core$Int64 $tmp259 = (panda$core$Int64) {10};
panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp211, $tmp259);
bool $tmp261 = $tmp260.value;
if ($tmp261) goto block18; else goto block19;
block18:;
// line 153
panda$core$Bit $tmp262 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(param0);
panda$core$Bit $tmp263 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block20; else goto block21;
block20:;
// line 154
panda$core$Bit $tmp265 = panda$core$Bit$init$builtin_bit(false);
return $tmp265;
block21:;
// line 156
panda$core$Int64 $tmp266 = (panda$core$Int64) {14};
org$pandalanguage$regex$RegexToken$Kind $tmp267 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp266);
panda$core$Bit $tmp268 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp267);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block22; else goto block23;
block22:;
// line 157
panda$core$Bit $tmp270 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(param0);
goto block23;
block23:;
// line 159
panda$core$Int64 $tmp271 = (panda$core$Int64) {11};
org$pandalanguage$regex$RegexToken$Kind $tmp272 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp271);
panda$core$Bit $tmp273 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp272, &$s274);
return $tmp273;
block19:;
// line 161
org$pandalanguage$regex$RegexToken $tmp275 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp275);
// line 162
panda$core$Bit $tmp276 = panda$core$Bit$init$builtin_bit(false);
return $tmp276;
block1:;
panda$core$Bit $tmp277 = panda$core$Bit$init$builtin_bit(false);
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp279 = (panda$core$Int64) {134};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s280, $tmp279, &$s281);
abort(); // unreachable
block24:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 170
panda$core$Bit $tmp282 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(param0);
panda$core$Bit $tmp283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp282);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 171
panda$core$Bit $tmp285 = panda$core$Bit$init$builtin_bit(false);
return $tmp285;
block2:;
// line 173
panda$core$Bit $tmp286 = org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(param0);
// line 174
panda$core$Bit $tmp287 = panda$core$Bit$init$builtin_bit(true);
return $tmp287;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 181
panda$core$Bit $tmp288 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(param0);
panda$core$Bit $tmp289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block1; else goto block2;
block1:;
// line 182
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit(false);
return $tmp291;
block2:;
// line 184
panda$core$Bit $tmp292 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(param0);
// line 185
panda$core$Bit $tmp293 = panda$core$Bit$init$builtin_bit(true);
return $tmp293;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 192
panda$core$Bit $tmp294 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(param0);
panda$core$Bit $tmp295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp294);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block1; else goto block2;
block1:;
// line 193
panda$core$Bit $tmp297 = panda$core$Bit$init$builtin_bit(false);
return $tmp297;
block2:;
// line 195
panda$core$Bit $tmp298 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
// line 196
panda$core$Bit $tmp299 = panda$core$Bit$init$builtin_bit(true);
return $tmp299;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$pandac$Position local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Char8* local4;
panda$core$Int64 local5;
// line 203
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp300 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp301 = *$tmp300;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear($tmp301);
// line 204
org$pandalanguage$regex$RegexLexer** $tmp302 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp303 = *$tmp302;
org$pandalanguage$plex$runtime$DFA** $tmp304 = &$tmp303->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp305 = *$tmp304;
panda$core$Int64* $tmp306 = &$tmp305->line;
panda$core$Int64 $tmp307 = *$tmp306;
org$pandalanguage$regex$RegexLexer** $tmp308 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp309 = *$tmp308;
org$pandalanguage$plex$runtime$DFA** $tmp310 = &$tmp309->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp311 = *$tmp310;
panda$core$Int64* $tmp312 = &$tmp311->column;
panda$core$Int64 $tmp313 = *$tmp312;
org$pandalanguage$pandac$Position $tmp314 = org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64($tmp307, $tmp313);
*(&local0) = $tmp314;
// line 205
org$pandalanguage$regex$RegexLexer** $tmp315 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp316 = *$tmp315;
org$pandalanguage$plex$runtime$DFA** $tmp317 = &$tmp316->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp318 = *$tmp317;
panda$core$Int64* $tmp319 = &$tmp318->offset;
panda$core$Int64 $tmp320 = *$tmp319;
*(&local1) = $tmp320;
// line 206
panda$core$Bit $tmp321 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
panda$core$Bit $tmp322 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp321);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block1; else goto block2;
block1:;
// line 207
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 209
org$pandalanguage$regex$RegexLexer** $tmp324 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp325 = *$tmp324;
org$pandalanguage$plex$runtime$DFA** $tmp326 = &$tmp325->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp327 = *$tmp326;
panda$core$Int64* $tmp328 = &$tmp327->offset;
panda$core$Int64 $tmp329 = *$tmp328;
panda$core$Int64 $tmp330 = (panda$core$Int64) {1};
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331 - $tmp332;
panda$core$Int64 $tmp334 = (panda$core$Int64) {$tmp333};
panda$core$Int64* $tmp335 = &$tmp327->offset;
*$tmp335 = $tmp334;
// line 210
org$pandalanguage$regex$RegexLexer** $tmp336 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp337 = *$tmp336;
org$pandalanguage$plex$runtime$DFA** $tmp338 = &$tmp337->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp339 = *$tmp338;
panda$core$Int64* $tmp340 = &$tmp339->offset;
panda$core$Int64 $tmp341 = *$tmp340;
*(&local2) = $tmp341;
// line 211
panda$core$Int64 $tmp342 = *(&local2);
panda$core$Int64 $tmp343 = *(&local1);
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344 - $tmp345;
panda$core$Int64 $tmp347 = (panda$core$Int64) {$tmp346};
*(&local3) = $tmp347;
// line 212
panda$core$Int64 $tmp348 = *(&local3);
int64_t $tmp349 = $tmp348.value;
panda$core$Char8* $tmp350 = ((panda$core$Char8*) pandaZAlloc($tmp349 * 1));
*(&local4) = $tmp350;
// line 213
panda$core$Int64 $tmp351 = *(&local1);
panda$core$Int64 $tmp352 = *(&local2);
panda$core$Bit $tmp353 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp354 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp351, $tmp352, $tmp353);
panda$core$Int64 $tmp355 = $tmp354.min;
*(&local5) = $tmp355;
panda$core$Int64 $tmp356 = $tmp354.max;
panda$core$Bit $tmp357 = $tmp354.inclusive;
bool $tmp358 = $tmp357.value;
panda$core$Int64 $tmp359 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp360 = panda$core$Int64$convert$R$panda$core$UInt64($tmp359);
if ($tmp358) goto block6; else goto block7;
block6:;
int64_t $tmp361 = $tmp355.value;
int64_t $tmp362 = $tmp356.value;
bool $tmp363 = $tmp361 <= $tmp362;
panda$core$Bit $tmp364 = (panda$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block3; else goto block4;
block7:;
int64_t $tmp366 = $tmp355.value;
int64_t $tmp367 = $tmp356.value;
bool $tmp368 = $tmp366 < $tmp367;
panda$core$Bit $tmp369 = (panda$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block3; else goto block4;
block3:;
// line 214
panda$core$Char8* $tmp371 = *(&local4);
org$pandalanguage$regex$RegexLexer** $tmp372 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp373 = *$tmp372;
org$pandalanguage$plex$runtime$DFA** $tmp374 = &$tmp373->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp375 = *$tmp374;
panda$core$Char8** $tmp376 = &$tmp375->source;
panda$core$Char8* $tmp377 = *$tmp376;
panda$core$Int64 $tmp378 = *(&local5);
int64_t $tmp379 = $tmp378.value;
panda$core$Char8 $tmp380 = $tmp377[$tmp379];
panda$core$Int64 $tmp381 = *(&local5);
panda$core$Int64 $tmp382 = *(&local1);
int64_t $tmp383 = $tmp381.value;
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383 - $tmp384;
panda$core$Int64 $tmp386 = (panda$core$Int64) {$tmp385};
int64_t $tmp387 = $tmp386.value;
$tmp371[$tmp387] = $tmp380;
goto block5;
block5:;
panda$core$Int64 $tmp388 = *(&local5);
int64_t $tmp389 = $tmp356.value;
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389 - $tmp390;
panda$core$Int64 $tmp392 = (panda$core$Int64) {$tmp391};
panda$core$UInt64 $tmp393 = panda$core$Int64$convert$R$panda$core$UInt64($tmp392);
if ($tmp358) goto block9; else goto block10;
block9:;
uint64_t $tmp394 = $tmp393.value;
uint64_t $tmp395 = $tmp360.value;
bool $tmp396 = $tmp394 >= $tmp395;
panda$core$Bit $tmp397 = (panda$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block8; else goto block4;
block10:;
uint64_t $tmp399 = $tmp393.value;
uint64_t $tmp400 = $tmp360.value;
bool $tmp401 = $tmp399 > $tmp400;
panda$core$Bit $tmp402 = (panda$core$Bit) {$tmp401};
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block8; else goto block4;
block8:;
int64_t $tmp404 = $tmp388.value;
int64_t $tmp405 = $tmp359.value;
int64_t $tmp406 = $tmp404 + $tmp405;
panda$core$Int64 $tmp407 = (panda$core$Int64) {$tmp406};
*(&local5) = $tmp407;
goto block3;
block4:;
// line 216
org$pandalanguage$pandac$ASTNode* $tmp408 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp409 = (panda$core$Int64) {35};
org$pandalanguage$pandac$Position $tmp410 = *(&local0);
panda$core$String* $tmp411 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp412 = *(&local4);
panda$core$Int64 $tmp413 = *(&local3);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp411, $tmp412, $tmp413);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp408, $tmp409, $tmp410, $tmp411);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
return $tmp408;

}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexLexer** $tmp414 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp415 = *$tmp414;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
panda$threads$MessageQueue** $tmp416 = &param0->errors;
panda$threads$MessageQueue* $tmp417 = *$tmp416;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
panda$io$File** $tmp418 = &param0->path;
panda$io$File* $tmp419 = *$tmp418;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
panda$core$String** $tmp420 = &param0->source;
panda$core$String* $tmp421 = *$tmp420;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp422 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp423 = *$tmp422;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
return;

}

