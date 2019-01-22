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
static frost$core$String $s156 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s252 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s268 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };

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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp88)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp101)));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp143)));
if ($tmp151) goto block5; else goto block6;
block5:;
// line 90
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit(false);
return $tmp152;
block6:;
goto block1;
block2:;
goto block7;
block7:;

}
frost$core$Bit org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 99
frost$core$Int64 $tmp153 = (frost$core$Int64) {4};
org$frostlang$regex$RegexToken$Kind $tmp154 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp153);
frost$core$Bit $tmp155 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp154, &$s156);
frost$core$Bit $tmp157 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp155);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block1; else goto block2;
block1:;
// line 100
frost$core$Bit $tmp159 = frost$core$Bit$init$builtin_bit(false);
return $tmp159;
block2:;
// line 102
goto block3;
block3:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {4};
org$frostlang$regex$RegexToken$Kind $tmp161 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp160);
frost$core$Bit $tmp162 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp161);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block4; else goto block5;
block4:;
goto block3;
block5:;
// line 104
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit(true);
return $tmp164;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 111
org$frostlang$regex$RegexToken $tmp165 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp165;
// line 112
org$frostlang$regex$RegexToken $tmp166 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp167 = $tmp166.kind;
frost$core$Int64 $tmp168 = $tmp167.$rawValue;
frost$core$Int64 $tmp169 = (frost$core$Int64) {5};
frost$core$Bit $tmp170 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp168, $tmp169);
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp172 = (frost$core$Int64) {6};
frost$core$Bit $tmp173 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp168, $tmp172);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block2; else goto block4;
block2:;
// line 114
frost$core$Int64 $tmp175 = (frost$core$Int64) {7};
org$frostlang$regex$RegexToken$Kind $tmp176 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp175);
frost$core$Bit $tmp177 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp176);
// line 115
frost$core$Bit $tmp178 = frost$core$Bit$init$builtin_bit(true);
return $tmp178;
block4:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {7};
frost$core$Bit $tmp180 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp168, $tmp179);
bool $tmp181 = $tmp180.value;
if ($tmp181) goto block5; else goto block6;
block5:;
// line 118
frost$core$Bit $tmp182 = frost$core$Bit$init$builtin_bit(true);
return $tmp182;
block6:;
frost$core$Int64 $tmp183 = (frost$core$Int64) {17};
frost$core$Bit $tmp184 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp168, $tmp183);
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block7; else goto block8;
block7:;
// line 121
org$frostlang$regex$RegexToken $tmp186 = org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(param0);
org$frostlang$regex$RegexToken$Kind $tmp187 = $tmp186.kind;
frost$core$Int64 $tmp188 = $tmp187.$rawValue;
frost$core$Int64 $tmp189 = (frost$core$Int64) {18};
frost$core$Bit $tmp190 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp189);
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp192 = (frost$core$Int64) {19};
frost$core$Bit $tmp193 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp192);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block10; else goto block12;
block12:;
frost$core$Int64 $tmp195 = (frost$core$Int64) {17};
frost$core$Bit $tmp196 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp188, $tmp195);
bool $tmp197 = $tmp196.value;
if ($tmp197) goto block10; else goto block9;
block10:;
// line 124
org$frostlang$regex$RegexToken $tmp198 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block9;
block9:;
// line 127
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit(true);
return $tmp199;
block8:;
// line 130
org$frostlang$regex$RegexToken $tmp200 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp200);
// line 131
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit(false);
return $tmp201;
block1:;
goto block13;
block13:;

}
frost$core$Bit org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 141
org$frostlang$regex$RegexToken $tmp202 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp202;
// line 142
org$frostlang$regex$RegexToken $tmp203 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp204 = $tmp203.kind;
frost$core$Int64 $tmp205 = $tmp204.$rawValue;
frost$core$Int64 $tmp206 = (frost$core$Int64) {3};
frost$core$Bit $tmp207 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp206);
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp209 = (frost$core$Int64) {4};
frost$core$Bit $tmp210 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp212 = (frost$core$Int64) {17};
frost$core$Bit $tmp213 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp215 = (frost$core$Int64) {16};
frost$core$Bit $tmp216 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp218 = (frost$core$Int64) {18};
frost$core$Bit $tmp219 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp218);
bool $tmp220 = $tmp219.value;
if ($tmp220) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp221 = (frost$core$Int64) {19};
frost$core$Bit $tmp222 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp221);
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp224 = (frost$core$Int64) {20};
frost$core$Bit $tmp225 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp224);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block2; else goto block9;
block2:;
// line 146
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit(true);
return $tmp227;
block9:;
frost$core$Int64 $tmp228 = (frost$core$Int64) {8};
frost$core$Bit $tmp229 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block10; else goto block11;
block10:;
// line 149
frost$core$Int64 $tmp231 = (frost$core$Int64) {7};
org$frostlang$regex$RegexToken$Kind $tmp232 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp231);
frost$core$Bit $tmp233 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp232);
// line 150
frost$core$Bit $tmp234 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
frost$core$Bit $tmp235 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp234);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block12; else goto block13;
block12:;
// line 151
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit(false);
return $tmp237;
block13:;
// line 153
frost$core$Int64 $tmp238 = (frost$core$Int64) {9};
org$frostlang$regex$RegexToken$Kind $tmp239 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp238);
frost$core$Bit $tmp240 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp239, &$s241);
return $tmp240;
block11:;
frost$core$Int64 $tmp242 = (frost$core$Int64) {12};
frost$core$Bit $tmp243 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp242);
bool $tmp244 = $tmp243.value;
if ($tmp244) goto block14; else goto block15;
block14:;
// line 156
frost$core$Bit $tmp245 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
frost$core$Bit $tmp246 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block16; else goto block17;
block16:;
// line 157
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit(false);
return $tmp248;
block17:;
// line 159
frost$core$Int64 $tmp249 = (frost$core$Int64) {13};
org$frostlang$regex$RegexToken$Kind $tmp250 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp249);
frost$core$Bit $tmp251 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp250, &$s252);
return $tmp251;
block15:;
frost$core$Int64 $tmp253 = (frost$core$Int64) {10};
frost$core$Bit $tmp254 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp205, $tmp253);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block18; else goto block19;
block18:;
// line 162
frost$core$Bit $tmp256 = org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(param0);
frost$core$Bit $tmp257 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block20; else goto block21;
block20:;
// line 163
frost$core$Bit $tmp259 = frost$core$Bit$init$builtin_bit(false);
return $tmp259;
block21:;
// line 165
frost$core$Int64 $tmp260 = (frost$core$Int64) {14};
org$frostlang$regex$RegexToken$Kind $tmp261 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp260);
frost$core$Bit $tmp262 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block22; else goto block23;
block22:;
// line 166
frost$core$Bit $tmp264 = org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(param0);
goto block23;
block23:;
// line 168
frost$core$Int64 $tmp265 = (frost$core$Int64) {11};
org$frostlang$regex$RegexToken$Kind $tmp266 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp265);
frost$core$Bit $tmp267 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp266, &$s268);
return $tmp267;
block19:;
// line 171
org$frostlang$regex$RegexToken $tmp269 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp269);
// line 172
frost$core$Bit $tmp270 = frost$core$Bit$init$builtin_bit(false);
return $tmp270;
block1:;
goto block24;
block24:;

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 181
frost$core$Bit $tmp271 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp272 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block1:;
// line 182
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit(false);
return $tmp274;
block2:;
// line 184
frost$core$Bit $tmp275 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// line 185
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit(true);
return $tmp276;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 192
frost$core$Bit $tmp277 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp278 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp277);
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block1; else goto block2;
block1:;
// line 193
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(false);
return $tmp280;
block2:;
// line 195
frost$core$Bit $tmp281 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// line 196
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit(true);
return $tmp282;

}
frost$core$Bit org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 203
frost$core$Bit $tmp283 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp284 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp283);
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block1; else goto block2;
block1:;
// line 204
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit(false);
return $tmp286;
block2:;
// line 206
frost$core$Bit $tmp287 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// line 207
frost$core$Bit $tmp288 = frost$core$Bit$init$builtin_bit(true);
return $tmp288;

}
org$frostlang$frostc$ASTNode* org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$regex$RegexParser* param0) {

org$frostlang$frostc$Position local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Char8* local4;
frost$core$Int64 local5;
// line 214
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp289 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp290 = *$tmp289;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear($tmp290);
// line 215
org$frostlang$regex$RegexLexer** $tmp291 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp292 = *$tmp291;
org$frostlang$plex$runtime$DFA** $tmp293 = &$tmp292->dfa;
org$frostlang$plex$runtime$DFA* $tmp294 = *$tmp293;
frost$core$Int64* $tmp295 = &$tmp294->line;
frost$core$Int64 $tmp296 = *$tmp295;
org$frostlang$regex$RegexLexer** $tmp297 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp298 = *$tmp297;
org$frostlang$plex$runtime$DFA** $tmp299 = &$tmp298->dfa;
org$frostlang$plex$runtime$DFA* $tmp300 = *$tmp299;
frost$core$Int64* $tmp301 = &$tmp300->column;
frost$core$Int64 $tmp302 = *$tmp301;
org$frostlang$frostc$Position $tmp303 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64($tmp296, $tmp302);
*(&local0) = $tmp303;
// line 216
org$frostlang$regex$RegexLexer** $tmp304 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp305 = *$tmp304;
org$frostlang$plex$runtime$DFA** $tmp306 = &$tmp305->dfa;
org$frostlang$plex$runtime$DFA* $tmp307 = *$tmp306;
frost$core$Int64* $tmp308 = &$tmp307->offset;
frost$core$Int64 $tmp309 = *$tmp308;
*(&local1) = $tmp309;
// line 217
frost$core$Bit $tmp310 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
frost$core$Bit $tmp311 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp310);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block1; else goto block2;
block1:;
// line 218
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 220
org$frostlang$regex$RegexLexer** $tmp313 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp314 = *$tmp313;
org$frostlang$plex$runtime$DFA** $tmp315 = &$tmp314->dfa;
org$frostlang$plex$runtime$DFA* $tmp316 = *$tmp315;
frost$core$Int64* $tmp317 = &$tmp316->offset;
frost$core$Int64 $tmp318 = *$tmp317;
frost$core$Int64 $tmp319 = (frost$core$Int64) {1};
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320 - $tmp321;
frost$core$Int64 $tmp323 = (frost$core$Int64) {$tmp322};
frost$core$Int64* $tmp324 = &$tmp316->offset;
*$tmp324 = $tmp323;
// line 221
org$frostlang$regex$RegexLexer** $tmp325 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp326 = *$tmp325;
org$frostlang$plex$runtime$DFA** $tmp327 = &$tmp326->dfa;
org$frostlang$plex$runtime$DFA* $tmp328 = *$tmp327;
frost$core$Int64* $tmp329 = &$tmp328->offset;
frost$core$Int64 $tmp330 = *$tmp329;
*(&local2) = $tmp330;
// line 222
frost$core$Int64 $tmp331 = *(&local2);
frost$core$Int64 $tmp332 = *(&local1);
int64_t $tmp333 = $tmp331.value;
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333 - $tmp334;
frost$core$Int64 $tmp336 = (frost$core$Int64) {$tmp335};
*(&local3) = $tmp336;
// line 223
frost$core$Int64 $tmp337 = *(&local3);
int64_t $tmp338 = $tmp337.value;
frost$core$Char8* $tmp339 = ((frost$core$Char8*) frostAlloc($tmp338 * 1));
*(&local4) = $tmp339;
// line 224
frost$core$Int64 $tmp340 = *(&local1);
frost$core$Int64 $tmp341 = *(&local2);
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp343 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp340, $tmp341, $tmp342);
frost$core$Int64 $tmp344 = $tmp343.min;
*(&local5) = $tmp344;
frost$core$Int64 $tmp345 = $tmp343.max;
frost$core$Bit $tmp346 = $tmp343.inclusive;
bool $tmp347 = $tmp346.value;
frost$core$Int64 $tmp348 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp349 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp348);
if ($tmp347) goto block6; else goto block7;
block6:;
int64_t $tmp350 = $tmp344.value;
int64_t $tmp351 = $tmp345.value;
bool $tmp352 = $tmp350 <= $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block3; else goto block4;
block7:;
int64_t $tmp355 = $tmp344.value;
int64_t $tmp356 = $tmp345.value;
bool $tmp357 = $tmp355 < $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block3; else goto block4;
block3:;
// line 225
frost$core$Char8* $tmp360 = *(&local4);
frost$core$Int64 $tmp361 = *(&local5);
frost$core$Int64 $tmp362 = *(&local1);
int64_t $tmp363 = $tmp361.value;
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363 - $tmp364;
frost$core$Int64 $tmp366 = (frost$core$Int64) {$tmp365};
org$frostlang$regex$RegexLexer** $tmp367 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp368 = *$tmp367;
org$frostlang$plex$runtime$DFA** $tmp369 = &$tmp368->dfa;
org$frostlang$plex$runtime$DFA* $tmp370 = *$tmp369;
frost$core$Char8** $tmp371 = &$tmp370->source;
frost$core$Char8* $tmp372 = *$tmp371;
frost$core$Int64 $tmp373 = *(&local5);
int64_t $tmp374 = $tmp373.value;
frost$core$Char8 $tmp375 = $tmp372[$tmp374];
int64_t $tmp376 = $tmp366.value;
$tmp360[$tmp376] = $tmp375;
goto block5;
block5:;
frost$core$Int64 $tmp377 = *(&local5);
int64_t $tmp378 = $tmp345.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 - $tmp379;
frost$core$Int64 $tmp381 = (frost$core$Int64) {$tmp380};
frost$core$UInt64 $tmp382 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp381);
if ($tmp347) goto block9; else goto block10;
block9:;
uint64_t $tmp383 = $tmp382.value;
uint64_t $tmp384 = $tmp349.value;
bool $tmp385 = $tmp383 >= $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block8; else goto block4;
block10:;
uint64_t $tmp388 = $tmp382.value;
uint64_t $tmp389 = $tmp349.value;
bool $tmp390 = $tmp388 > $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block8; else goto block4;
block8:;
int64_t $tmp393 = $tmp377.value;
int64_t $tmp394 = $tmp348.value;
int64_t $tmp395 = $tmp393 + $tmp394;
frost$core$Int64 $tmp396 = (frost$core$Int64) {$tmp395};
*(&local5) = $tmp396;
goto block3;
block4:;
// line 227
org$frostlang$frostc$ASTNode* $tmp397 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp398 = (frost$core$Int64) {37};
org$frostlang$frostc$Position $tmp399 = *(&local0);
frost$core$String* $tmp400 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp401 = *(&local4);
frost$core$Int64 $tmp402 = *(&local3);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp400, $tmp401, $tmp402);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp397, $tmp398, $tmp399, $tmp400);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
return $tmp397;

}
void org$frostlang$regex$RegexParser$cleanup(org$frostlang$regex$RegexParser* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$regex$RegexLexer** $tmp403 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp404 = *$tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$threads$MessageQueue** $tmp405 = &param0->errors;
frost$threads$MessageQueue* $tmp406 = *$tmp405;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
frost$io$File** $tmp407 = &param0->path;
frost$io$File* $tmp408 = *$tmp407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$String** $tmp409 = &param0->source;
frost$core$String* $tmp410 = *$tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp410));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp411 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp412 = *$tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
return;

}

