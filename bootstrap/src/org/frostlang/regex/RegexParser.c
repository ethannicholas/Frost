#include "org/frostlang/regex/RegexParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/regex/RegexLexer.h"
#include "frost/core/Frost.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.h"
#include "frost/io/File.h"
#include "org/frostlang/regex/RegexToken.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Bit.h"
#include "org/frostlang/regex/RegexToken/Kind.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/Compiler/ErrorMsg.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Immutable.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"


static frost$core$String $s1;
org$frostlang$regex$RegexParser$class_type org$frostlang$regex$RegexParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$regex$RegexParser$cleanup, org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$String, org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit, org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit, org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String, org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String, org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit, org$frostlang$regex$RegexParser$integer$R$frost$core$Bit, org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit, org$frostlang$regex$RegexParser$atom$R$frost$core$Bit, org$frostlang$regex$RegexParser$factor$R$frost$core$Bit, org$frostlang$regex$RegexParser$term$R$frost$core$Bit, org$frostlang$regex$RegexParser$expression$R$frost$core$Bit, org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q} };

typedef frost$core$Int64 (*$fn27)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn39)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn65)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn77)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn92)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn105)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn149)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -5504260474530955886, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 16357834771717713, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x63\x68\x61\x72\x61\x63\x74\x65\x72\x43\x6c\x61\x73\x73\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 95, -7114080713589755786, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 16357834771717713, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x6d\x65\x74\x61\x63\x68\x61\x72\x61\x63\x74\x65\x72\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 94, -5180978670413668285, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };
static frost$core$String $s283 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x66\x72\x6f\x73\x74", 17, 16357834771717713, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72\x2e\x61\x74\x6f\x6d\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 85, -6585252284751030748, NULL };

void org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT(org$frostlang$regex$RegexParser* param0, frost$threads$MessageQueue* param1) {

// line 10
org$frostlang$regex$RegexLexer* $tmp2 = (org$frostlang$regex$RegexLexer*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$regex$RegexLexer$class);
org$frostlang$regex$RegexLexer$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$regex$RegexLexer** $tmp3 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$regex$RegexLexer** $tmp5 = &param0->lexer;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// unreffing REF($1:org.frostlang.regex.RegexLexer)
// line 18
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp6 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init($tmp6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp7 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp9 = &param0->pushbackBuffer;
*$tmp9 = $tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
// unreffing REF($15:frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>)
// line 21
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$threads$MessageQueue** $tmp10 = &param0->errors;
frost$threads$MessageQueue* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$threads$MessageQueue** $tmp12 = &param0->errors;
*$tmp12 = param1;
return;

}
void org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$String(org$frostlang$regex$RegexParser* param0, frost$io$File* param1, frost$core$String* param2) {

// line 25
org$frostlang$regex$RegexLexer** $tmp13 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp14 = *$tmp13;
org$frostlang$regex$RegexLexer$start$frost$core$String($tmp14, param2);
// line 26
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp15 = &param0->path;
frost$io$File* $tmp16 = *$tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$io$File** $tmp17 = &param0->path;
*$tmp17 = param1;
// line 27
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp18 = &param0->source;
frost$core$String* $tmp19 = *$tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$String** $tmp20 = &param0->source;
*$tmp20 = param2;
// line 28
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp21 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp22 = *$tmp21;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear($tmp22);
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

frost$core$Int64 local0;
org$frostlang$regex$RegexToken local1;
org$frostlang$regex$RegexToken local2;
// line 32
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp23 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp24 = *$tmp23;
ITable* $tmp25 = ((frost$collections$CollectionView*) $tmp24)->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Int64 $tmp28 = $tmp26(((frost$collections$CollectionView*) $tmp24));
frost$core$Int64 $tmp29 = (frost$core$Int64) {0};
int64_t $tmp30 = $tmp28.value;
int64_t $tmp31 = $tmp29.value;
bool $tmp32 = $tmp30 != $tmp31;
frost$core$Bit $tmp33 = (frost$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block1; else goto block2;
block1:;
// line 33
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp35 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp36 = *$tmp35;
ITable* $tmp37 = ((frost$collections$CollectionView*) $tmp36)->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
frost$core$Int64 $tmp40 = $tmp38(((frost$collections$CollectionView*) $tmp36));
frost$core$Int64 $tmp41 = (frost$core$Int64) {1};
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42 - $tmp43;
frost$core$Int64 $tmp45 = (frost$core$Int64) {$tmp44};
*(&local0) = $tmp45;
// line 34
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp46 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp47 = *$tmp46;
frost$core$Int64 $tmp48 = *(&local0);
org$frostlang$regex$RegexToken $tmp49 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken($tmp47, $tmp48);
*(&local1) = $tmp49;
// line 35
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp50 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp51 = *$tmp50;
frost$core$Int64 $tmp52 = *(&local0);
org$frostlang$regex$RegexToken $tmp53 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken($tmp51, $tmp52);
// line 36
org$frostlang$regex$RegexToken $tmp54 = *(&local1);
return $tmp54;
block2:;
// line 38
org$frostlang$regex$RegexLexer** $tmp55 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp56 = *$tmp55;
org$frostlang$regex$RegexToken $tmp57 = org$frostlang$regex$RegexLexer$next$R$org$frostlang$regex$RegexToken($tmp56);
*(&local2) = $tmp57;
// line 39
org$frostlang$regex$RegexToken $tmp58 = *(&local2);
return $tmp58;

}
void org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// line 43
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp59 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp60 = *$tmp59;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp60, param1);
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

// line 47
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp61 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp62 = *$tmp61;
ITable* $tmp63 = ((frost$collections$CollectionView*) $tmp62)->$class->itable;
while ($tmp63->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[0];
frost$core$Int64 $tmp66 = $tmp64(((frost$collections$CollectionView*) $tmp62));
frost$core$Int64 $tmp67 = (frost$core$Int64) {0};
frost$core$Bit $tmp68 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp66, $tmp67);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block1; else goto block2;
block1:;
// line 48
org$frostlang$regex$RegexToken $tmp70 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp70);
goto block2;
block2:;
// line 50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp71 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp72 = *$tmp71;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp73 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp74 = *$tmp73;
ITable* $tmp75 = ((frost$collections$CollectionView*) $tmp74)->$class->itable;
while ($tmp75->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp75 = $tmp75->next;
}
$fn77 $tmp76 = $tmp75->methods[0];
frost$core$Int64 $tmp78 = $tmp76(((frost$collections$CollectionView*) $tmp74));
frost$core$Int64 $tmp79 = (frost$core$Int64) {1};
int64_t $tmp80 = $tmp78.value;
int64_t $tmp81 = $tmp79.value;
int64_t $tmp82 = $tmp80 - $tmp81;
frost$core$Int64 $tmp83 = (frost$core$Int64) {$tmp82};
org$frostlang$regex$RegexToken $tmp84 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$$IDX$frost$core$Int64$R$org$frostlang$regex$RegexToken($tmp72, $tmp83);
return $tmp84;

}
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1) {

org$frostlang$regex$RegexToken local0;
// line 54
org$frostlang$regex$RegexToken $tmp85 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp85;
// line 55
org$frostlang$regex$RegexToken $tmp86 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp87 = $tmp86.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp88;
$tmp88 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp88->value = $tmp87;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp89;
$tmp89 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp89->value = param1;
ITable* $tmp90 = ((frost$core$Equatable*) $tmp88)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Bit $tmp93 = $tmp91(((frost$core$Equatable*) $tmp88), ((frost$core$Equatable*) $tmp89));
bool $tmp94 = $tmp93.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp89)));
// unreffing REF($8:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp88)));
// unreffing REF($6:frost.core.Equatable<org.frostlang.regex.RegexToken.Kind>)
if ($tmp94) goto block1; else goto block2;
block1:;
// line 56
frost$core$Bit $tmp95 = frost$core$Bit$init$builtin_bit(true);
return $tmp95;
block2:;
// line 58
org$frostlang$regex$RegexToken $tmp96 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp96);
// line 59
frost$core$Bit $tmp97 = frost$core$Bit$init$builtin_bit(false);
return $tmp97;

}
frost$core$Bit org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1, frost$core$String* param2) {

org$frostlang$regex$RegexToken local0;
// line 63
org$frostlang$regex$RegexToken $tmp98 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp98;
// line 64
org$frostlang$regex$RegexToken $tmp99 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp100 = $tmp99.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp101;
$tmp101 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp101->value = $tmp100;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp102;
$tmp102 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp102->value = param1;
ITable* $tmp103 = ((frost$core$Equatable*) $tmp101)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$core$Bit $tmp106 = $tmp104(((frost$core$Equatable*) $tmp101), ((frost$core$Equatable*) $tmp102));
bool $tmp107 = $tmp106.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp102)));
// unreffing REF($8:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp101)));
// unreffing REF($6:frost.core.Equatable<org.frostlang.regex.RegexToken.Kind>)
if ($tmp107) goto block1; else goto block2;
block1:;
// line 65
frost$core$Bit $tmp108 = frost$core$Bit$init$builtin_bit(true);
return $tmp108;
block2:;
// line 67
org$frostlang$regex$RegexToken $tmp109 = *(&local0);
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s111, param2);
frost$core$String* $tmp112 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp110, &$s113);
org$frostlang$regex$RegexToken $tmp114 = *(&local0);
frost$core$String* $tmp115 = org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(param0, $tmp114);
frost$core$String* $tmp116 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp112, $tmp115);
frost$core$String* $tmp117 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp116, &$s118);
org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(param0, $tmp109, $tmp117);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($29:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing REF($28:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
// unreffing REF($27:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($24:frost.core.String)
// line 68
frost$core$Bit $tmp119 = frost$core$Bit$init$builtin_bit(false);
return $tmp119;

}
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1, frost$core$String* param2) {

// line 72
frost$threads$MessageQueue** $tmp120 = &param0->errors;
frost$threads$MessageQueue* $tmp121 = *$tmp120;
org$frostlang$frostc$Compiler$ErrorMsg* $tmp122 = (org$frostlang$frostc$Compiler$ErrorMsg*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$ErrorMsg$class);
frost$io$File** $tmp123 = &param0->path;
frost$io$File* $tmp124 = *$tmp123;
org$frostlang$frostc$Position $tmp125 = param1.position;
org$frostlang$frostc$Compiler$ErrorMsg$init$frost$io$File$org$frostlang$frostc$Position$frost$core$String($tmp122, $tmp124, $tmp125, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp121, ((frost$core$Immutable*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($4:org.frostlang.frostc.Compiler.ErrorMsg)
return;

}
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// line 76
frost$core$String** $tmp126 = &param0->source;
frost$core$String* $tmp127 = *$tmp126;
frost$core$String$Index $tmp128 = param1.start;
frost$core$String$Index $tmp129 = param1.end;
frost$core$Bit $tmp130 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp131 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp128, $tmp129, $tmp130);
frost$core$String* $tmp132 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp127, $tmp131);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($7:frost.core.String)
return $tmp132;

}
frost$core$Bit org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 83
goto block1;
block1:;
// line 84
org$frostlang$regex$RegexToken $tmp133 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp133;
// line 85
org$frostlang$regex$RegexToken $tmp134 = *(&local0);
frost$core$String* $tmp135 = org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(param0, $tmp134);
frost$core$Bit $tmp136 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp135, &$s137);
bool $tmp138 = $tmp136.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($7:frost.core.String)
if ($tmp138) goto block3; else goto block4;
block3:;
// line 86
org$frostlang$regex$RegexToken $tmp139 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp139);
// line 87
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit(true);
return $tmp140;
block4:;
// line 89
org$frostlang$regex$RegexToken $tmp141 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp142 = $tmp141.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp143;
$tmp143 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp143->value = $tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {0};
org$frostlang$regex$RegexToken$Kind $tmp145 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp144);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp146;
$tmp146 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp146->value = $tmp145;
ITable* $tmp147 = ((frost$core$Equatable*) $tmp143)->$class->itable;
while ($tmp147->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[0];
frost$core$Bit $tmp150 = $tmp148(((frost$core$Equatable*) $tmp143), ((frost$core$Equatable*) $tmp146));
bool $tmp151 = $tmp150.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp146)));
// unreffing REF($27:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp143)));
// unreffing REF($23:frost.core.Equatable<org.frostlang.regex.RegexToken.Kind>)
if ($tmp151) goto block5; else goto block6;
block5:;
// line 90
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit(false);
return $tmp152;
block6:;
goto block1;
block2:;
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit(false);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s156, $tmp155, &$s157);
abort(); // unreachable
block7:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 99
frost$core$Int64 $tmp158 = (frost$core$Int64) {4};
org$frostlang$regex$RegexToken$Kind $tmp159 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp158);
frost$core$Bit $tmp160 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp159, &$s161);
frost$core$Bit $tmp162 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp160);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block1; else goto block2;
block1:;
// line 100
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit(false);
return $tmp164;
block2:;
// line 102
goto block3;
block3:;
frost$core$Int64 $tmp165 = (frost$core$Int64) {4};
org$frostlang$regex$RegexToken$Kind $tmp166 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp165);
frost$core$Bit $tmp167 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp166);
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block4; else goto block5;
block4:;
goto block3;
block5:;
// line 104
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit(true);
return $tmp169;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 111
org$frostlang$regex$RegexToken $tmp170 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp170;
// line 112
org$frostlang$regex$RegexToken $tmp171 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp172 = $tmp171.kind;
frost$core$Int64 $tmp173 = $tmp172.$rawValue;
frost$core$Int64 $tmp174 = (frost$core$Int64) {5};
frost$core$Bit $tmp175 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp174);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {6};
frost$core$Bit $tmp178 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp177);
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block2; else goto block4;
block2:;
// line 114
frost$core$Int64 $tmp180 = (frost$core$Int64) {7};
org$frostlang$regex$RegexToken$Kind $tmp181 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp180);
frost$core$Bit $tmp182 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp181);
// line 115
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(true);
return $tmp183;
block4:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {7};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block5; else goto block6;
block5:;
// line 118
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit(true);
return $tmp187;
block6:;
frost$core$Int64 $tmp188 = (frost$core$Int64) {17};
frost$core$Bit $tmp189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp173, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block7; else goto block8;
block7:;
// line 121
org$frostlang$regex$RegexToken $tmp191 = org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(param0);
org$frostlang$regex$RegexToken$Kind $tmp192 = $tmp191.kind;
frost$core$Int64 $tmp193 = $tmp192.$rawValue;
frost$core$Int64 $tmp194 = (frost$core$Int64) {18};
frost$core$Bit $tmp195 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp193, $tmp194);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp197 = (frost$core$Int64) {19};
frost$core$Bit $tmp198 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp193, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block10; else goto block12;
block12:;
frost$core$Int64 $tmp200 = (frost$core$Int64) {17};
frost$core$Bit $tmp201 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp193, $tmp200);
bool $tmp202 = $tmp201.value;
if ($tmp202) goto block10; else goto block9;
block10:;
// line 124
org$frostlang$regex$RegexToken $tmp203 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block9;
block9:;
goto block1;
block8:;
// line 129
org$frostlang$regex$RegexToken $tmp204 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp204);
// line 130
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit(false);
return $tmp205;
block1:;
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit(false);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block13:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 140
org$frostlang$regex$RegexToken $tmp211 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp211;
// line 141
org$frostlang$regex$RegexToken $tmp212 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp213 = $tmp212.kind;
frost$core$Int64 $tmp214 = $tmp213.$rawValue;
frost$core$Int64 $tmp215 = (frost$core$Int64) {3};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {4};
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp221 = (frost$core$Int64) {17};
frost$core$Bit $tmp222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {16};
frost$core$Bit $tmp225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp227 = (frost$core$Int64) {18};
frost$core$Bit $tmp228 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp230 = (frost$core$Int64) {19};
frost$core$Bit $tmp231 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp230);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp233 = (frost$core$Int64) {20};
frost$core$Bit $tmp234 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp233);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block2; else goto block9;
block2:;
// line 145
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit(true);
return $tmp236;
block9:;
frost$core$Int64 $tmp237 = (frost$core$Int64) {8};
frost$core$Bit $tmp238 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block10; else goto block11;
block10:;
// line 148
frost$core$Int64 $tmp240 = (frost$core$Int64) {7};
org$frostlang$regex$RegexToken$Kind $tmp241 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp240);
frost$core$Bit $tmp242 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp241);
// line 149
frost$core$Bit $tmp243 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
frost$core$Bit $tmp244 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block12; else goto block13;
block12:;
// line 150
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit(false);
return $tmp246;
block13:;
// line 152
frost$core$Int64 $tmp247 = (frost$core$Int64) {9};
org$frostlang$regex$RegexToken$Kind $tmp248 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp247);
frost$core$Bit $tmp249 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp248, &$s250);
return $tmp249;
block11:;
frost$core$Int64 $tmp251 = (frost$core$Int64) {12};
frost$core$Bit $tmp252 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp251);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block14; else goto block15;
block14:;
// line 155
frost$core$Bit $tmp254 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
frost$core$Bit $tmp255 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block16; else goto block17;
block16:;
// line 156
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit(false);
return $tmp257;
block17:;
// line 158
frost$core$Int64 $tmp258 = (frost$core$Int64) {13};
org$frostlang$regex$RegexToken$Kind $tmp259 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp258);
frost$core$Bit $tmp260 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp259, &$s261);
return $tmp260;
block15:;
frost$core$Int64 $tmp262 = (frost$core$Int64) {10};
frost$core$Bit $tmp263 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp214, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block18; else goto block19;
block18:;
// line 161
frost$core$Bit $tmp265 = org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(param0);
frost$core$Bit $tmp266 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block20; else goto block21;
block20:;
// line 162
frost$core$Bit $tmp268 = frost$core$Bit$init$builtin_bit(false);
return $tmp268;
block21:;
// line 164
frost$core$Int64 $tmp269 = (frost$core$Int64) {14};
org$frostlang$regex$RegexToken$Kind $tmp270 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp269);
frost$core$Bit $tmp271 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block22; else goto block23;
block22:;
// line 165
frost$core$Bit $tmp273 = org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(param0);
goto block23;
block23:;
// line 167
frost$core$Int64 $tmp274 = (frost$core$Int64) {11};
org$frostlang$regex$RegexToken$Kind $tmp275 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp274);
frost$core$Bit $tmp276 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp275, &$s277);
return $tmp276;
block19:;
// line 170
org$frostlang$regex$RegexToken $tmp278 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp278);
// line 171
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit(false);
return $tmp279;
block1:;
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(false);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp282 = (frost$core$Int64) {139};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s283, $tmp282, &$s284);
abort(); // unreachable
block24:;
abort(); // unreachable

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 180
frost$core$Bit $tmp285 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp286 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp285);
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block1; else goto block2;
block1:;
// line 181
frost$core$Bit $tmp288 = frost$core$Bit$init$builtin_bit(false);
return $tmp288;
block2:;
// line 183
frost$core$Bit $tmp289 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// line 184
frost$core$Bit $tmp290 = frost$core$Bit$init$builtin_bit(true);
return $tmp290;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 191
frost$core$Bit $tmp291 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp292 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp291);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block1; else goto block2;
block1:;
// line 192
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit(false);
return $tmp294;
block2:;
// line 194
frost$core$Bit $tmp295 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// line 195
frost$core$Bit $tmp296 = frost$core$Bit$init$builtin_bit(true);
return $tmp296;

}
frost$core$Bit org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 202
frost$core$Bit $tmp297 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp298 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp297);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block1; else goto block2;
block1:;
// line 203
frost$core$Bit $tmp300 = frost$core$Bit$init$builtin_bit(false);
return $tmp300;
block2:;
// line 205
frost$core$Bit $tmp301 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// line 206
frost$core$Bit $tmp302 = frost$core$Bit$init$builtin_bit(true);
return $tmp302;

}
org$frostlang$frostc$ASTNode* org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$regex$RegexParser* param0) {

org$frostlang$frostc$Position local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Char8* local4;
frost$core$Int64 local5;
// line 213
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp303 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp304 = *$tmp303;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear($tmp304);
// line 214
org$frostlang$regex$RegexLexer** $tmp305 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp306 = *$tmp305;
org$frostlang$plex$runtime$DFA** $tmp307 = &$tmp306->dfa;
org$frostlang$plex$runtime$DFA* $tmp308 = *$tmp307;
frost$core$Int64* $tmp309 = &$tmp308->line;
frost$core$Int64 $tmp310 = *$tmp309;
org$frostlang$regex$RegexLexer** $tmp311 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp312 = *$tmp311;
org$frostlang$plex$runtime$DFA** $tmp313 = &$tmp312->dfa;
org$frostlang$plex$runtime$DFA* $tmp314 = *$tmp313;
frost$core$Int64* $tmp315 = &$tmp314->column;
frost$core$Int64 $tmp316 = *$tmp315;
org$frostlang$frostc$Position $tmp317 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64($tmp310, $tmp316);
*(&local0) = $tmp317;
// line 215
org$frostlang$regex$RegexLexer** $tmp318 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp319 = *$tmp318;
org$frostlang$plex$runtime$DFA** $tmp320 = &$tmp319->dfa;
org$frostlang$plex$runtime$DFA* $tmp321 = *$tmp320;
frost$core$Int64* $tmp322 = &$tmp321->offset;
frost$core$Int64 $tmp323 = *$tmp322;
*(&local1) = $tmp323;
// line 216
frost$core$Bit $tmp324 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
frost$core$Bit $tmp325 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp324);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block1; else goto block2;
block1:;
// line 217
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 219
org$frostlang$regex$RegexLexer** $tmp327 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp328 = *$tmp327;
org$frostlang$plex$runtime$DFA** $tmp329 = &$tmp328->dfa;
org$frostlang$plex$runtime$DFA* $tmp330 = *$tmp329;
frost$core$Int64* $tmp331 = &$tmp330->offset;
frost$core$Int64 $tmp332 = *$tmp331;
frost$core$Int64 $tmp333 = (frost$core$Int64) {1};
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334 - $tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {$tmp336};
frost$core$Int64* $tmp338 = &$tmp330->offset;
*$tmp338 = $tmp337;
// line 220
org$frostlang$regex$RegexLexer** $tmp339 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp340 = *$tmp339;
org$frostlang$plex$runtime$DFA** $tmp341 = &$tmp340->dfa;
org$frostlang$plex$runtime$DFA* $tmp342 = *$tmp341;
frost$core$Int64* $tmp343 = &$tmp342->offset;
frost$core$Int64 $tmp344 = *$tmp343;
*(&local2) = $tmp344;
// line 221
frost$core$Int64 $tmp345 = *(&local2);
frost$core$Int64 $tmp346 = *(&local1);
int64_t $tmp347 = $tmp345.value;
int64_t $tmp348 = $tmp346.value;
int64_t $tmp349 = $tmp347 - $tmp348;
frost$core$Int64 $tmp350 = (frost$core$Int64) {$tmp349};
*(&local3) = $tmp350;
// line 222
frost$core$Int64 $tmp351 = *(&local3);
int64_t $tmp352 = $tmp351.value;
frost$core$Char8* $tmp353 = ((frost$core$Char8*) frostAlloc($tmp352 * 1));
*(&local4) = $tmp353;
// line 223
frost$core$Int64 $tmp354 = *(&local1);
frost$core$Int64 $tmp355 = *(&local2);
frost$core$Bit $tmp356 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp357 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp354, $tmp355, $tmp356);
frost$core$Int64 $tmp358 = $tmp357.min;
*(&local5) = $tmp358;
frost$core$Int64 $tmp359 = $tmp357.max;
frost$core$Bit $tmp360 = $tmp357.inclusive;
bool $tmp361 = $tmp360.value;
frost$core$Int64 $tmp362 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp363 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp362);
if ($tmp361) goto block6; else goto block7;
block6:;
int64_t $tmp364 = $tmp358.value;
int64_t $tmp365 = $tmp359.value;
bool $tmp366 = $tmp364 <= $tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block3; else goto block4;
block7:;
int64_t $tmp369 = $tmp358.value;
int64_t $tmp370 = $tmp359.value;
bool $tmp371 = $tmp369 < $tmp370;
frost$core$Bit $tmp372 = (frost$core$Bit) {$tmp371};
bool $tmp373 = $tmp372.value;
if ($tmp373) goto block3; else goto block4;
block3:;
// line 224
frost$core$Char8* $tmp374 = *(&local4);
frost$core$Int64 $tmp375 = *(&local5);
frost$core$Int64 $tmp376 = *(&local1);
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 - $tmp378;
frost$core$Int64 $tmp380 = (frost$core$Int64) {$tmp379};
org$frostlang$regex$RegexLexer** $tmp381 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp382 = *$tmp381;
org$frostlang$plex$runtime$DFA** $tmp383 = &$tmp382->dfa;
org$frostlang$plex$runtime$DFA* $tmp384 = *$tmp383;
frost$core$Char8** $tmp385 = &$tmp384->source;
frost$core$Char8* $tmp386 = *$tmp385;
frost$core$Int64 $tmp387 = *(&local5);
int64_t $tmp388 = $tmp387.value;
frost$core$Char8 $tmp389 = $tmp386[$tmp388];
int64_t $tmp390 = $tmp380.value;
$tmp374[$tmp390] = $tmp389;
goto block5;
block5:;
frost$core$Int64 $tmp391 = *(&local5);
int64_t $tmp392 = $tmp359.value;
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392 - $tmp393;
frost$core$Int64 $tmp395 = (frost$core$Int64) {$tmp394};
frost$core$UInt64 $tmp396 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp395);
if ($tmp361) goto block9; else goto block10;
block9:;
uint64_t $tmp397 = $tmp396.value;
uint64_t $tmp398 = $tmp363.value;
bool $tmp399 = $tmp397 >= $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block8; else goto block4;
block10:;
uint64_t $tmp402 = $tmp396.value;
uint64_t $tmp403 = $tmp363.value;
bool $tmp404 = $tmp402 > $tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block8; else goto block4;
block8:;
int64_t $tmp407 = $tmp391.value;
int64_t $tmp408 = $tmp362.value;
int64_t $tmp409 = $tmp407 + $tmp408;
frost$core$Int64 $tmp410 = (frost$core$Int64) {$tmp409};
*(&local5) = $tmp410;
goto block3;
block4:;
// line 226
org$frostlang$frostc$ASTNode* $tmp411 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp412 = (frost$core$Int64) {37};
org$frostlang$frostc$Position $tmp413 = *(&local0);
frost$core$String* $tmp414 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp415 = *(&local4);
frost$core$Int64 $tmp416 = *(&local3);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp414, $tmp415, $tmp416);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp411, $tmp412, $tmp413, $tmp414);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing REF($145:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($142:org.frostlang.frostc.ASTNode)
return $tmp411;

}
void org$frostlang$regex$RegexParser$cleanup(org$frostlang$regex$RegexParser* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$regex$RegexLexer** $tmp417 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp418 = *$tmp417;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
frost$threads$MessageQueue** $tmp419 = &param0->errors;
frost$threads$MessageQueue* $tmp420 = *$tmp419;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp420));
frost$io$File** $tmp421 = &param0->path;
frost$io$File* $tmp422 = *$tmp421;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp422));
frost$core$String** $tmp423 = &param0->source;
frost$core$String* $tmp424 = *$tmp423;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp425 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp426 = *$tmp425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
return;

}

