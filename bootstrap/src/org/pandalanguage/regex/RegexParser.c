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
typedef panda$core$Int64 (*$fn39)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn65)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn77)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn92)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn105)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn149)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 35, -3638705302730546102, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x63\x68\x61\x72\x61\x63\x74\x65\x72\x43\x6c\x61\x73\x73\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -3357971288758770892, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x61\x63\x68\x61\x72\x61\x63\x74\x65\x72\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 98, -2197724215612836767, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x70\x61\x6e\x64\x61", 17, 16357835794794871, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x61\x74\x6f\x6d\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 89, 4225567051746029858, NULL };

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
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 != $tmp31;
panda$core$Bit $tmp33 = (panda$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block1:;
// line 33
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp35 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp36 = *$tmp35;
ITable* $tmp37 = ((panda$collections$CollectionView*) $tmp36)->$class->itable;
while ($tmp37->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
panda$core$Int64 $tmp40 = $tmp38(((panda$collections$CollectionView*) $tmp36));
panda$core$Int64 $tmp41 = (panda$core$Int64) {1};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42 - $tmp43;
panda$core$Int64 $tmp45 = (panda$core$Int64) {$tmp44};
*(&local0) = $tmp45;
// line 34
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp46 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp47 = *$tmp46;
panda$core$Int64 $tmp48 = *(&local0);
org$pandalanguage$regex$RegexToken $tmp49 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp47, $tmp48);
*(&local1) = $tmp49;
// line 35
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp50 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp51 = *$tmp50;
panda$core$Int64 $tmp52 = *(&local0);
org$pandalanguage$regex$RegexToken $tmp53 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$removeIndex$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp51, $tmp52);
// line 36
org$pandalanguage$regex$RegexToken $tmp54 = *(&local1);
return $tmp54;
block2:;
// line 38
org$pandalanguage$regex$RegexLexer** $tmp55 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp56 = *$tmp55;
org$pandalanguage$regex$RegexToken $tmp57 = org$pandalanguage$regex$RegexLexer$next$R$org$pandalanguage$regex$RegexToken($tmp56);
*(&local2) = $tmp57;
// line 39
org$pandalanguage$regex$RegexToken $tmp58 = *(&local2);
return $tmp58;

}
void org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1) {

// line 43
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp59 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp60 = *$tmp59;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$add$org$pandalanguage$regex$RegexToken($tmp60, param1);
return;

}
org$pandalanguage$regex$RegexToken org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(org$pandalanguage$regex$RegexParser* param0) {

// line 47
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp61 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp62 = *$tmp61;
ITable* $tmp63 = ((panda$collections$CollectionView*) $tmp62)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
panda$core$Int64 $tmp66 = $tmp64(((panda$collections$CollectionView*) $tmp62));
panda$core$Int64 $tmp67 = (panda$core$Int64) {0};
panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp66, $tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block1; else goto block2;
block1:;
// line 48
org$pandalanguage$regex$RegexToken $tmp70 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp70);
goto block2;
block2:;
// line 50
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp71 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp72 = *$tmp71;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp73 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp74 = *$tmp73;
ITable* $tmp75 = ((panda$collections$CollectionView*) $tmp74)->$class->itable;
while ($tmp75->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
panda$core$Int64 $tmp78 = $tmp76(((panda$collections$CollectionView*) $tmp74));
panda$core$Int64 $tmp79 = (panda$core$Int64) {1};
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80 - $tmp81;
panda$core$Int64 $tmp83 = (panda$core$Int64) {$tmp82};
org$pandalanguage$regex$RegexToken $tmp84 = panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$$IDX$panda$core$Int64$R$org$pandalanguage$regex$RegexToken($tmp72, $tmp83);
return $tmp84;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken$Kind param1) {

org$pandalanguage$regex$RegexToken local0;
// line 54
org$pandalanguage$regex$RegexToken $tmp85 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp85;
// line 55
org$pandalanguage$regex$RegexToken $tmp86 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp87 = $tmp86.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp88;
$tmp88 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp88->value = $tmp87;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp89;
$tmp89 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp89->value = param1;
ITable* $tmp90 = ((panda$core$Equatable*) $tmp88)->$class->itable;
while ($tmp90->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
panda$core$Bit $tmp93 = $tmp91(((panda$core$Equatable*) $tmp88), ((panda$core$Equatable*) $tmp89));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp88)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp89)));
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block1; else goto block2;
block1:;
// line 56
panda$core$Bit $tmp95 = panda$core$Bit$init$builtin_bit(true);
return $tmp95;
block2:;
// line 58
org$pandalanguage$regex$RegexToken $tmp96 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp96);
// line 59
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit(false);
return $tmp97;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken$Kind param1, panda$core$String* param2) {

org$pandalanguage$regex$RegexToken local0;
// line 63
org$pandalanguage$regex$RegexToken $tmp98 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp98;
// line 64
org$pandalanguage$regex$RegexToken $tmp99 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp100 = $tmp99.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp101;
$tmp101 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp101->value = $tmp100;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp102;
$tmp102 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp102->value = param1;
ITable* $tmp103 = ((panda$core$Equatable*) $tmp101)->$class->itable;
while ($tmp103->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
panda$core$Bit $tmp106 = $tmp104(((panda$core$Equatable*) $tmp101), ((panda$core$Equatable*) $tmp102));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp101)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp102)));
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block1; else goto block2;
block1:;
// line 65
panda$core$Bit $tmp108 = panda$core$Bit$init$builtin_bit(true);
return $tmp108;
block2:;
// line 67
org$pandalanguage$regex$RegexToken $tmp109 = *(&local0);
panda$core$String* $tmp110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s111, param2);
panda$core$String* $tmp112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp110, &$s113);
org$pandalanguage$regex$RegexToken $tmp114 = *(&local0);
panda$core$String* $tmp115 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(param0, $tmp114);
panda$core$String* $tmp116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp112, $tmp115);
panda$core$String* $tmp117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp116, &$s118);
org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(param0, $tmp109, $tmp117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
// line 68
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit(false);
return $tmp119;

}
void org$pandalanguage$regex$RegexParser$error$org$pandalanguage$regex$RegexToken$panda$core$String(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1, panda$core$String* param2) {

// line 72
panda$threads$MessageQueue** $tmp120 = &param0->errors;
panda$threads$MessageQueue* $tmp121 = *$tmp120;
org$pandalanguage$pandac$Compiler$Error* $tmp122 = (org$pandalanguage$pandac$Compiler$Error*) pandaObjectAlloc(56, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Error$class);
panda$io$File** $tmp123 = &param0->path;
panda$io$File* $tmp124 = *$tmp123;
org$pandalanguage$pandac$Position $tmp125 = param1.position;
org$pandalanguage$pandac$Compiler$Error$init$panda$io$File$org$pandalanguage$pandac$Position$panda$core$String($tmp122, $tmp124, $tmp125, param2);
panda$threads$MessageQueue$post$panda$threads$MessageQueue$T($tmp121, ((panda$core$Immutable*) $tmp122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
return;

}
panda$core$String* org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(org$pandalanguage$regex$RegexParser* param0, org$pandalanguage$regex$RegexToken param1) {

// line 76
panda$core$String** $tmp126 = &param0->source;
panda$core$String* $tmp127 = *$tmp126;
panda$core$String$Index $tmp128 = param1.start;
panda$core$String$Index $tmp129 = param1.end;
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$String$Index$GT $tmp131 = panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit($tmp128, $tmp129, $tmp130);
panda$core$String* $tmp132 = panda$core$String$substring$panda$core$Range$LTpanda$core$String$Index$GT$R$panda$core$String($tmp127, $tmp131);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
return $tmp132;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 83
goto block1;
block1:;
// line 84
org$pandalanguage$regex$RegexToken $tmp133 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp133;
// line 85
org$pandalanguage$regex$RegexToken $tmp134 = *(&local0);
panda$core$String* $tmp135 = org$pandalanguage$regex$RegexParser$text$org$pandalanguage$regex$RegexToken$R$panda$core$String(param0, $tmp134);
panda$core$Bit $tmp136 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp135, &$s137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp135));
bool $tmp138 = $tmp136.value;
if ($tmp138) goto block3; else goto block4;
block3:;
// line 86
org$pandalanguage$regex$RegexToken $tmp139 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp139);
// line 87
panda$core$Bit $tmp140 = panda$core$Bit$init$builtin_bit(true);
return $tmp140;
block4:;
// line 89
org$pandalanguage$regex$RegexToken $tmp141 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp142 = $tmp141.kind;
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp143;
$tmp143 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp143->value = $tmp142;
panda$core$Int64 $tmp144 = (panda$core$Int64) {0};
org$pandalanguage$regex$RegexToken$Kind $tmp145 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp144);
org$pandalanguage$regex$RegexToken$Kind$wrapper* $tmp146;
$tmp146 = (org$pandalanguage$regex$RegexToken$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$regex$RegexToken$Kind$wrapperclass);
$tmp146->value = $tmp145;
ITable* $tmp147 = ((panda$core$Equatable*) $tmp143)->$class->itable;
while ($tmp147->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
panda$core$Bit $tmp150 = $tmp148(((panda$core$Equatable*) $tmp143), ((panda$core$Equatable*) $tmp146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp143)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp146)));
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block5; else goto block6;
block5:;
// line 90
panda$core$Bit $tmp152 = panda$core$Bit$init$builtin_bit(false);
return $tmp152;
block6:;
goto block1;
block2:;
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit(false);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {82};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 99
panda$core$Int64 $tmp158 = (panda$core$Int64) {4};
org$pandalanguage$regex$RegexToken$Kind $tmp159 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp158);
panda$core$Bit $tmp160 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp159, &$s161);
panda$core$Bit $tmp162 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp160);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block1; else goto block2;
block1:;
// line 100
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit(false);
return $tmp164;
block2:;
// line 102
goto block3;
block3:;
panda$core$Int64 $tmp165 = (panda$core$Int64) {4};
org$pandalanguage$regex$RegexToken$Kind $tmp166 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp165);
panda$core$Bit $tmp167 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block4; else goto block5;
block4:;
goto block3;
block5:;
// line 104
panda$core$Bit $tmp169 = panda$core$Bit$init$builtin_bit(true);
return $tmp169;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 111
org$pandalanguage$regex$RegexToken $tmp170 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp170;
// line 112
org$pandalanguage$regex$RegexToken $tmp171 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp172 = $tmp171.kind;
panda$core$Int64 $tmp173 = $tmp172.$rawValue;
panda$core$Int64 $tmp174 = (panda$core$Int64) {5};
panda$core$Bit $tmp175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp177 = (panda$core$Int64) {6};
panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp177);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block2; else goto block4;
block2:;
// line 114
panda$core$Int64 $tmp180 = (panda$core$Int64) {7};
org$pandalanguage$regex$RegexToken$Kind $tmp181 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp180);
panda$core$Bit $tmp182 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp181);
// line 115
panda$core$Bit $tmp183 = panda$core$Bit$init$builtin_bit(true);
return $tmp183;
block4:;
panda$core$Int64 $tmp184 = (panda$core$Int64) {7};
panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block5; else goto block6;
block5:;
// line 118
panda$core$Bit $tmp187 = panda$core$Bit$init$builtin_bit(true);
return $tmp187;
block6:;
panda$core$Int64 $tmp188 = (panda$core$Int64) {17};
panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp173, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block7; else goto block8;
block7:;
// line 121
org$pandalanguage$regex$RegexToken $tmp191 = org$pandalanguage$regex$RegexParser$peek$R$org$pandalanguage$regex$RegexToken(param0);
org$pandalanguage$regex$RegexToken$Kind $tmp192 = $tmp191.kind;
panda$core$Int64 $tmp193 = $tmp192.$rawValue;
panda$core$Int64 $tmp194 = (panda$core$Int64) {18};
panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp193, $tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp197 = (panda$core$Int64) {19};
panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp193, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block10; else goto block12;
block12:;
panda$core$Int64 $tmp200 = (panda$core$Int64) {17};
panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp193, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block10; else goto block9;
block10:;
// line 124
org$pandalanguage$regex$RegexToken $tmp203 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
goto block9;
block9:;
goto block1;
block8:;
// line 129
org$pandalanguage$regex$RegexToken $tmp204 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp204);
// line 130
panda$core$Bit $tmp205 = panda$core$Bit$init$builtin_bit(false);
return $tmp205;
block1:;
panda$core$Bit $tmp206 = panda$core$Bit$init$builtin_bit(false);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {110};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block13:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexToken local0;
// line 140
org$pandalanguage$regex$RegexToken $tmp211 = org$pandalanguage$regex$RegexParser$next$R$org$pandalanguage$regex$RegexToken(param0);
*(&local0) = $tmp211;
// line 141
org$pandalanguage$regex$RegexToken $tmp212 = *(&local0);
org$pandalanguage$regex$RegexToken$Kind $tmp213 = $tmp212.kind;
panda$core$Int64 $tmp214 = $tmp213.$rawValue;
panda$core$Int64 $tmp215 = (panda$core$Int64) {3};
panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block2; else goto block3;
block3:;
panda$core$Int64 $tmp218 = (panda$core$Int64) {4};
panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block2; else goto block4;
block4:;
panda$core$Int64 $tmp221 = (panda$core$Int64) {17};
panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block2; else goto block5;
block5:;
panda$core$Int64 $tmp224 = (panda$core$Int64) {16};
panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block2; else goto block6;
block6:;
panda$core$Int64 $tmp227 = (panda$core$Int64) {18};
panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block2; else goto block7;
block7:;
panda$core$Int64 $tmp230 = (panda$core$Int64) {19};
panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block2; else goto block8;
block8:;
panda$core$Int64 $tmp233 = (panda$core$Int64) {20};
panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block2; else goto block9;
block2:;
// line 145
panda$core$Bit $tmp236 = panda$core$Bit$init$builtin_bit(true);
return $tmp236;
block9:;
panda$core$Int64 $tmp237 = (panda$core$Int64) {8};
panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block10; else goto block11;
block10:;
// line 148
panda$core$Int64 $tmp240 = (panda$core$Int64) {7};
org$pandalanguage$regex$RegexToken$Kind $tmp241 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp240);
panda$core$Bit $tmp242 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp241);
// line 149
panda$core$Bit $tmp243 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
panda$core$Bit $tmp244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block12; else goto block13;
block12:;
// line 150
panda$core$Bit $tmp246 = panda$core$Bit$init$builtin_bit(false);
return $tmp246;
block13:;
// line 152
panda$core$Int64 $tmp247 = (panda$core$Int64) {9};
org$pandalanguage$regex$RegexToken$Kind $tmp248 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp247);
panda$core$Bit $tmp249 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp248, &$s250);
return $tmp249;
block11:;
panda$core$Int64 $tmp251 = (panda$core$Int64) {12};
panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block14; else goto block15;
block14:;
// line 155
panda$core$Bit $tmp254 = org$pandalanguage$regex$RegexParser$characterClass$R$panda$core$Bit(param0);
panda$core$Bit $tmp255 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block16; else goto block17;
block16:;
// line 156
panda$core$Bit $tmp257 = panda$core$Bit$init$builtin_bit(false);
return $tmp257;
block17:;
// line 158
panda$core$Int64 $tmp258 = (panda$core$Int64) {13};
org$pandalanguage$regex$RegexToken$Kind $tmp259 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp258);
panda$core$Bit $tmp260 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp259, &$s261);
return $tmp260;
block15:;
panda$core$Int64 $tmp262 = (panda$core$Int64) {10};
panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp214, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block18; else goto block19;
block18:;
// line 161
panda$core$Bit $tmp265 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(param0);
panda$core$Bit $tmp266 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block20; else goto block21;
block20:;
// line 162
panda$core$Bit $tmp268 = panda$core$Bit$init$builtin_bit(false);
return $tmp268;
block21:;
// line 164
panda$core$Int64 $tmp269 = (panda$core$Int64) {14};
org$pandalanguage$regex$RegexToken$Kind $tmp270 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp269);
panda$core$Bit $tmp271 = org$pandalanguage$regex$RegexParser$checkNext$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(param0, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block22; else goto block23;
block22:;
// line 165
panda$core$Bit $tmp273 = org$pandalanguage$regex$RegexParser$integer$R$panda$core$Bit(param0);
goto block23;
block23:;
// line 167
panda$core$Int64 $tmp274 = (panda$core$Int64) {11};
org$pandalanguage$regex$RegexToken$Kind $tmp275 = org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64($tmp274);
panda$core$Bit $tmp276 = org$pandalanguage$regex$RegexParser$expect$org$pandalanguage$regex$RegexToken$Kind$panda$core$String$R$panda$core$Bit(param0, $tmp275, &$s277);
return $tmp276;
block19:;
// line 170
org$pandalanguage$regex$RegexToken $tmp278 = *(&local0);
org$pandalanguage$regex$RegexParser$pushback$org$pandalanguage$regex$RegexToken(param0, $tmp278);
// line 171
panda$core$Bit $tmp279 = panda$core$Bit$init$builtin_bit(false);
return $tmp279;
block1:;
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit(false);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block24; else goto block25;
block25:;
panda$core$Int64 $tmp282 = (panda$core$Int64) {139};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s283, $tmp282, &$s284);
abort(); // unreachable
block24:;
abort(); // unreachable

}
panda$core$Bit org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 180
panda$core$Bit $tmp285 = org$pandalanguage$regex$RegexParser$atom$R$panda$core$Bit(param0);
panda$core$Bit $tmp286 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp285);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block1; else goto block2;
block1:;
// line 181
panda$core$Bit $tmp288 = panda$core$Bit$init$builtin_bit(false);
return $tmp288;
block2:;
// line 183
panda$core$Bit $tmp289 = org$pandalanguage$regex$RegexParser$metacharacter$R$panda$core$Bit(param0);
// line 184
panda$core$Bit $tmp290 = panda$core$Bit$init$builtin_bit(true);
return $tmp290;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 191
panda$core$Bit $tmp291 = org$pandalanguage$regex$RegexParser$factor$R$panda$core$Bit(param0);
panda$core$Bit $tmp292 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp291);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block1; else goto block2;
block1:;
// line 192
panda$core$Bit $tmp294 = panda$core$Bit$init$builtin_bit(false);
return $tmp294;
block2:;
// line 194
panda$core$Bit $tmp295 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(param0);
// line 195
panda$core$Bit $tmp296 = panda$core$Bit$init$builtin_bit(true);
return $tmp296;

}
panda$core$Bit org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(org$pandalanguage$regex$RegexParser* param0) {

// line 202
panda$core$Bit $tmp297 = org$pandalanguage$regex$RegexParser$term$R$panda$core$Bit(param0);
panda$core$Bit $tmp298 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block1; else goto block2;
block1:;
// line 203
panda$core$Bit $tmp300 = panda$core$Bit$init$builtin_bit(false);
return $tmp300;
block2:;
// line 205
panda$core$Bit $tmp301 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
// line 206
panda$core$Bit $tmp302 = panda$core$Bit$init$builtin_bit(true);
return $tmp302;

}
org$pandalanguage$pandac$ASTNode* org$pandalanguage$regex$RegexParser$regex$R$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$pandac$Position local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Char8* local4;
panda$core$Int64 local5;
// line 213
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp303 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp304 = *$tmp303;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT$clear($tmp304);
// line 214
org$pandalanguage$regex$RegexLexer** $tmp305 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp306 = *$tmp305;
org$pandalanguage$plex$runtime$DFA** $tmp307 = &$tmp306->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp308 = *$tmp307;
panda$core$Int64* $tmp309 = &$tmp308->line;
panda$core$Int64 $tmp310 = *$tmp309;
org$pandalanguage$regex$RegexLexer** $tmp311 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp312 = *$tmp311;
org$pandalanguage$plex$runtime$DFA** $tmp313 = &$tmp312->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp314 = *$tmp313;
panda$core$Int64* $tmp315 = &$tmp314->column;
panda$core$Int64 $tmp316 = *$tmp315;
org$pandalanguage$pandac$Position $tmp317 = org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64($tmp310, $tmp316);
*(&local0) = $tmp317;
// line 215
org$pandalanguage$regex$RegexLexer** $tmp318 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp319 = *$tmp318;
org$pandalanguage$plex$runtime$DFA** $tmp320 = &$tmp319->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp321 = *$tmp320;
panda$core$Int64* $tmp322 = &$tmp321->offset;
panda$core$Int64 $tmp323 = *$tmp322;
*(&local1) = $tmp323;
// line 216
panda$core$Bit $tmp324 = org$pandalanguage$regex$RegexParser$expression$R$panda$core$Bit(param0);
panda$core$Bit $tmp325 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block1; else goto block2;
block1:;
// line 217
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) NULL)));
return ((org$pandalanguage$pandac$ASTNode*) NULL);
block2:;
// line 219
org$pandalanguage$regex$RegexLexer** $tmp327 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp328 = *$tmp327;
org$pandalanguage$plex$runtime$DFA** $tmp329 = &$tmp328->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp330 = *$tmp329;
panda$core$Int64* $tmp331 = &$tmp330->offset;
panda$core$Int64 $tmp332 = *$tmp331;
panda$core$Int64 $tmp333 = (panda$core$Int64) {1};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334 - $tmp335;
panda$core$Int64 $tmp337 = (panda$core$Int64) {$tmp336};
panda$core$Int64* $tmp338 = &$tmp330->offset;
*$tmp338 = $tmp337;
// line 220
org$pandalanguage$regex$RegexLexer** $tmp339 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp340 = *$tmp339;
org$pandalanguage$plex$runtime$DFA** $tmp341 = &$tmp340->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp342 = *$tmp341;
panda$core$Int64* $tmp343 = &$tmp342->offset;
panda$core$Int64 $tmp344 = *$tmp343;
*(&local2) = $tmp344;
// line 221
panda$core$Int64 $tmp345 = *(&local2);
panda$core$Int64 $tmp346 = *(&local1);
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347 - $tmp348;
panda$core$Int64 $tmp350 = (panda$core$Int64) {$tmp349};
*(&local3) = $tmp350;
// line 222
panda$core$Int64 $tmp351 = *(&local3);
int64_t $tmp352 = $tmp351.value;
panda$core$Char8* $tmp353 = ((panda$core$Char8*) pandaZAlloc($tmp352 * 1));
*(&local4) = $tmp353;
// line 223
panda$core$Int64 $tmp354 = *(&local1);
panda$core$Int64 $tmp355 = *(&local2);
panda$core$Bit $tmp356 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp357 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp354, $tmp355, $tmp356);
panda$core$Int64 $tmp358 = $tmp357.min;
*(&local5) = $tmp358;
panda$core$Int64 $tmp359 = $tmp357.max;
panda$core$Bit $tmp360 = $tmp357.inclusive;
bool $tmp361 = $tmp360.value;
panda$core$Int64 $tmp362 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp363 = panda$core$Int64$convert$R$panda$core$UInt64($tmp362);
if ($tmp361) goto block6; else goto block7;
block6:;
int64_t $tmp364 = $tmp358.value;
int64_t $tmp365 = $tmp359.value;
bool $tmp366 = $tmp364 <= $tmp365;
panda$core$Bit $tmp367 = (panda$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block3; else goto block4;
block7:;
int64_t $tmp369 = $tmp358.value;
int64_t $tmp370 = $tmp359.value;
bool $tmp371 = $tmp369 < $tmp370;
panda$core$Bit $tmp372 = (panda$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block3; else goto block4;
block3:;
// line 224
panda$core$Char8* $tmp374 = *(&local4);
panda$core$Int64 $tmp375 = *(&local5);
panda$core$Int64 $tmp376 = *(&local1);
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 - $tmp378;
panda$core$Int64 $tmp380 = (panda$core$Int64) {$tmp379};
org$pandalanguage$regex$RegexLexer** $tmp381 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp382 = *$tmp381;
org$pandalanguage$plex$runtime$DFA** $tmp383 = &$tmp382->dfa;
org$pandalanguage$plex$runtime$DFA* $tmp384 = *$tmp383;
panda$core$Char8** $tmp385 = &$tmp384->source;
panda$core$Char8* $tmp386 = *$tmp385;
panda$core$Int64 $tmp387 = *(&local5);
int64_t $tmp388 = $tmp387.value;
panda$core$Char8 $tmp389 = $tmp386[$tmp388];
int64_t $tmp390 = $tmp380.value;
$tmp374[$tmp390] = $tmp389;
goto block5;
block5:;
panda$core$Int64 $tmp391 = *(&local5);
int64_t $tmp392 = $tmp359.value;
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392 - $tmp393;
panda$core$Int64 $tmp395 = (panda$core$Int64) {$tmp394};
panda$core$UInt64 $tmp396 = panda$core$Int64$convert$R$panda$core$UInt64($tmp395);
if ($tmp361) goto block9; else goto block10;
block9:;
uint64_t $tmp397 = $tmp396.value;
uint64_t $tmp398 = $tmp363.value;
bool $tmp399 = $tmp397 >= $tmp398;
panda$core$Bit $tmp400 = (panda$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block8; else goto block4;
block10:;
uint64_t $tmp402 = $tmp396.value;
uint64_t $tmp403 = $tmp363.value;
bool $tmp404 = $tmp402 > $tmp403;
panda$core$Bit $tmp405 = (panda$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block8; else goto block4;
block8:;
int64_t $tmp407 = $tmp391.value;
int64_t $tmp408 = $tmp362.value;
int64_t $tmp409 = $tmp407 + $tmp408;
panda$core$Int64 $tmp410 = (panda$core$Int64) {$tmp409};
*(&local5) = $tmp410;
goto block3;
block4:;
// line 226
org$pandalanguage$pandac$ASTNode* $tmp411 = (org$pandalanguage$pandac$ASTNode*) pandaObjectAlloc(104, (panda$core$Class*) &org$pandalanguage$pandac$ASTNode$class);
panda$core$Int64 $tmp412 = (panda$core$Int64) {35};
org$pandalanguage$pandac$Position $tmp413 = *(&local0);
panda$core$String* $tmp414 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp415 = *(&local4);
panda$core$Int64 $tmp416 = *(&local3);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp414, $tmp415, $tmp416);
org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String($tmp411, $tmp412, $tmp413, $tmp414);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
return $tmp411;

}
void org$pandalanguage$regex$RegexParser$cleanup(org$pandalanguage$regex$RegexParser* param0) {

org$pandalanguage$regex$RegexLexer** $tmp417 = &param0->lexer;
org$pandalanguage$regex$RegexLexer* $tmp418 = *$tmp417;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
panda$threads$MessageQueue** $tmp419 = &param0->errors;
panda$threads$MessageQueue* $tmp420 = *$tmp419;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
panda$io$File** $tmp421 = &param0->path;
panda$io$File* $tmp422 = *$tmp421;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
panda$core$String** $tmp423 = &param0->source;
panda$core$String* $tmp424 = *$tmp423;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT** $tmp425 = &param0->pushbackBuffer;
panda$collections$SpecializedArray$LTorg$pandalanguage$regex$RegexToken$GT* $tmp426 = *$tmp425;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
return;

}

