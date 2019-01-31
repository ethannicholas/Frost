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
#include "org/frostlang/frostc/Compiler/Message.h"
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
typedef frost$core$Bit (*$fn150)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -5504260474530955886, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, 2200356131793558883, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, 2997537454666094279, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, -3616559055790534302, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x29\x27", 3, 1432320, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x5d\x27", 3, 1437572, NULL };
static frost$core$String $s269 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x7d\x27", 3, 1440804, NULL };

void org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(org$frostlang$regex$RegexParser* param0, frost$threads$MessageQueue* param1) {

// line 10
FROST_ASSERT(40 == sizeof(org$frostlang$regex$RegexLexer));
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
FROST_ASSERT(40 == sizeof(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT));
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
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp122 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int64 $tmp123 = (frost$core$Int64) {0};
frost$io$File** $tmp124 = &param0->path;
frost$io$File* $tmp125 = *$tmp124;
org$frostlang$frostc$Position $tmp126 = param1.position;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$io$File$org$frostlang$frostc$Position$frost$core$String($tmp122, $tmp123, $tmp125, $tmp126, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp121, ((frost$core$Immutable*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
return;

}
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// line 76
frost$core$String** $tmp127 = &param0->source;
frost$core$String* $tmp128 = *$tmp127;
frost$core$String$Index $tmp129 = param1.start;
frost$core$String$Index $tmp130 = param1.end;
frost$core$Bit $tmp131 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp132 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp129, $tmp130, $tmp131);
frost$core$String* $tmp133 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp128, $tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
return $tmp133;

}
frost$core$Bit org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 83
goto block1;
block1:;
// line 84
org$frostlang$regex$RegexToken $tmp134 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp134;
// line 85
org$frostlang$regex$RegexToken $tmp135 = *(&local0);
frost$core$String* $tmp136 = org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(param0, $tmp135);
frost$core$Bit $tmp137 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp136, &$s138);
bool $tmp139 = $tmp137.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
if ($tmp139) goto block3; else goto block4;
block3:;
// line 86
org$frostlang$regex$RegexToken $tmp140 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp140);
// line 87
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit(true);
return $tmp141;
block4:;
// line 89
org$frostlang$regex$RegexToken $tmp142 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp143 = $tmp142.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp144;
$tmp144 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp144->value = $tmp143;
frost$core$Int64 $tmp145 = (frost$core$Int64) {0};
org$frostlang$regex$RegexToken$Kind $tmp146 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp145);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp147;
$tmp147 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp147->value = $tmp146;
ITable* $tmp148 = ((frost$core$Equatable*) $tmp144)->$class->itable;
while ($tmp148->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp148 = $tmp148->next;
}
$fn150 $tmp149 = $tmp148->methods[0];
frost$core$Bit $tmp151 = $tmp149(((frost$core$Equatable*) $tmp144), ((frost$core$Equatable*) $tmp147));
bool $tmp152 = $tmp151.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp147)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp144)));
if ($tmp152) goto block5; else goto block6;
block5:;
// line 90
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit(false);
return $tmp153;
block6:;
goto block1;
block2:;
goto block7;
block7:;

}
frost$core$Bit org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 99
frost$core$Int64 $tmp154 = (frost$core$Int64) {4};
org$frostlang$regex$RegexToken$Kind $tmp155 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp154);
frost$core$Bit $tmp156 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp155, &$s157);
frost$core$Bit $tmp158 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp156);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block1; else goto block2;
block1:;
// line 100
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(false);
return $tmp160;
block2:;
// line 102
goto block3;
block3:;
frost$core$Int64 $tmp161 = (frost$core$Int64) {4};
org$frostlang$regex$RegexToken$Kind $tmp162 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp161);
frost$core$Bit $tmp163 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp162);
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block4; else goto block5;
block4:;
goto block3;
block5:;
// line 104
frost$core$Bit $tmp165 = frost$core$Bit$init$builtin_bit(true);
return $tmp165;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 111
org$frostlang$regex$RegexToken $tmp166 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp166;
// line 112
org$frostlang$regex$RegexToken $tmp167 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp168 = $tmp167.kind;
frost$core$Int64 $tmp169 = $tmp168.$rawValue;
frost$core$Int64 $tmp170 = (frost$core$Int64) {5};
frost$core$Bit $tmp171 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp173 = (frost$core$Int64) {6};
frost$core$Bit $tmp174 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp173);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block2; else goto block4;
block2:;
// line 114
frost$core$Int64 $tmp176 = (frost$core$Int64) {7};
org$frostlang$regex$RegexToken$Kind $tmp177 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp176);
frost$core$Bit $tmp178 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp177);
// line 115
frost$core$Bit $tmp179 = frost$core$Bit$init$builtin_bit(true);
return $tmp179;
block4:;
frost$core$Int64 $tmp180 = (frost$core$Int64) {7};
frost$core$Bit $tmp181 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp180);
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block5; else goto block6;
block5:;
// line 118
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit(true);
return $tmp183;
block6:;
frost$core$Int64 $tmp184 = (frost$core$Int64) {17};
frost$core$Bit $tmp185 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp169, $tmp184);
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block7; else goto block8;
block7:;
// line 121
org$frostlang$regex$RegexToken $tmp187 = org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(param0);
org$frostlang$regex$RegexToken$Kind $tmp188 = $tmp187.kind;
frost$core$Int64 $tmp189 = $tmp188.$rawValue;
frost$core$Int64 $tmp190 = (frost$core$Int64) {18};
frost$core$Bit $tmp191 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp189, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp193 = (frost$core$Int64) {19};
frost$core$Bit $tmp194 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp189, $tmp193);
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block10; else goto block12;
block12:;
frost$core$Int64 $tmp196 = (frost$core$Int64) {17};
frost$core$Bit $tmp197 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp189, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block10; else goto block9;
block10:;
// line 124
org$frostlang$regex$RegexToken $tmp199 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block9;
block9:;
// line 127
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit(true);
return $tmp200;
block8:;
// line 130
org$frostlang$regex$RegexToken $tmp201 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp201);
// line 131
frost$core$Bit $tmp202 = frost$core$Bit$init$builtin_bit(false);
return $tmp202;
block1:;
goto block13;
block13:;

}
frost$core$Bit org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
// line 141
org$frostlang$regex$RegexToken $tmp203 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp203;
// line 142
org$frostlang$regex$RegexToken $tmp204 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp205 = $tmp204.kind;
frost$core$Int64 $tmp206 = $tmp205.$rawValue;
frost$core$Int64 $tmp207 = (frost$core$Int64) {3};
frost$core$Bit $tmp208 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp207);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp210 = (frost$core$Int64) {4};
frost$core$Bit $tmp211 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block2; else goto block4;
block4:;
frost$core$Int64 $tmp213 = (frost$core$Int64) {17};
frost$core$Bit $tmp214 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp213);
bool $tmp215 = $tmp214.value;
if ($tmp215) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp216 = (frost$core$Int64) {16};
frost$core$Bit $tmp217 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp216);
bool $tmp218 = $tmp217.value;
if ($tmp218) goto block2; else goto block6;
block6:;
frost$core$Int64 $tmp219 = (frost$core$Int64) {18};
frost$core$Bit $tmp220 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp222 = (frost$core$Int64) {19};
frost$core$Bit $tmp223 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block2; else goto block8;
block8:;
frost$core$Int64 $tmp225 = (frost$core$Int64) {20};
frost$core$Bit $tmp226 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp225);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block2; else goto block9;
block2:;
// line 146
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit(true);
return $tmp228;
block9:;
frost$core$Int64 $tmp229 = (frost$core$Int64) {8};
frost$core$Bit $tmp230 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block10; else goto block11;
block10:;
// line 149
frost$core$Int64 $tmp232 = (frost$core$Int64) {7};
org$frostlang$regex$RegexToken$Kind $tmp233 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp232);
frost$core$Bit $tmp234 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp233);
// line 150
frost$core$Bit $tmp235 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
frost$core$Bit $tmp236 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block12; else goto block13;
block12:;
// line 151
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit(false);
return $tmp238;
block13:;
// line 153
frost$core$Int64 $tmp239 = (frost$core$Int64) {9};
org$frostlang$regex$RegexToken$Kind $tmp240 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp239);
frost$core$Bit $tmp241 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp240, &$s242);
return $tmp241;
block11:;
frost$core$Int64 $tmp243 = (frost$core$Int64) {12};
frost$core$Bit $tmp244 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block14; else goto block15;
block14:;
// line 156
frost$core$Bit $tmp246 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
frost$core$Bit $tmp247 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block16; else goto block17;
block16:;
// line 157
frost$core$Bit $tmp249 = frost$core$Bit$init$builtin_bit(false);
return $tmp249;
block17:;
// line 159
frost$core$Int64 $tmp250 = (frost$core$Int64) {13};
org$frostlang$regex$RegexToken$Kind $tmp251 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp250);
frost$core$Bit $tmp252 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp251, &$s253);
return $tmp252;
block15:;
frost$core$Int64 $tmp254 = (frost$core$Int64) {10};
frost$core$Bit $tmp255 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp206, $tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block18; else goto block19;
block18:;
// line 162
frost$core$Bit $tmp257 = org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(param0);
frost$core$Bit $tmp258 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block20; else goto block21;
block20:;
// line 163
frost$core$Bit $tmp260 = frost$core$Bit$init$builtin_bit(false);
return $tmp260;
block21:;
// line 165
frost$core$Int64 $tmp261 = (frost$core$Int64) {14};
org$frostlang$regex$RegexToken$Kind $tmp262 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp261);
frost$core$Bit $tmp263 = org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(param0, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block22; else goto block23;
block22:;
// line 166
frost$core$Bit $tmp265 = org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(param0);
goto block23;
block23:;
// line 168
frost$core$Int64 $tmp266 = (frost$core$Int64) {11};
org$frostlang$regex$RegexToken$Kind $tmp267 = org$frostlang$regex$RegexToken$Kind$init$frost$core$Int64($tmp266);
frost$core$Bit $tmp268 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp267, &$s269);
return $tmp268;
block19:;
// line 171
org$frostlang$regex$RegexToken $tmp270 = *(&local0);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp270);
// line 172
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit(false);
return $tmp271;
block1:;
goto block24;
block24:;

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 181
frost$core$Bit $tmp272 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp273 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block1; else goto block2;
block1:;
// line 182
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit(false);
return $tmp275;
block2:;
// line 184
frost$core$Bit $tmp276 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// line 185
frost$core$Bit $tmp277 = frost$core$Bit$init$builtin_bit(true);
return $tmp277;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 192
frost$core$Bit $tmp278 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp279 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block1; else goto block2;
block1:;
// line 193
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit(false);
return $tmp281;
block2:;
// line 195
frost$core$Bit $tmp282 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// line 196
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit(true);
return $tmp283;

}
frost$core$Bit org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// line 203
frost$core$Bit $tmp284 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp285 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block1; else goto block2;
block1:;
// line 204
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit(false);
return $tmp287;
block2:;
// line 206
frost$core$Bit $tmp288 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// line 207
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit(true);
return $tmp289;

}
org$frostlang$frostc$ASTNode* org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$regex$RegexParser* param0) {

org$frostlang$frostc$Position local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Char8* local4;
frost$core$Int64 local5;
// line 214
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp290 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp291 = *$tmp290;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$clear($tmp291);
// line 215
org$frostlang$regex$RegexLexer** $tmp292 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp293 = *$tmp292;
org$frostlang$plex$runtime$DFA** $tmp294 = &$tmp293->dfa;
org$frostlang$plex$runtime$DFA* $tmp295 = *$tmp294;
frost$core$Int64* $tmp296 = &$tmp295->line;
frost$core$Int64 $tmp297 = *$tmp296;
org$frostlang$regex$RegexLexer** $tmp298 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp299 = *$tmp298;
org$frostlang$plex$runtime$DFA** $tmp300 = &$tmp299->dfa;
org$frostlang$plex$runtime$DFA* $tmp301 = *$tmp300;
frost$core$Int64* $tmp302 = &$tmp301->column;
frost$core$Int64 $tmp303 = *$tmp302;
org$frostlang$frostc$Position $tmp304 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64($tmp297, $tmp303);
*(&local0) = $tmp304;
// line 216
org$frostlang$regex$RegexLexer** $tmp305 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp306 = *$tmp305;
org$frostlang$plex$runtime$DFA** $tmp307 = &$tmp306->dfa;
org$frostlang$plex$runtime$DFA* $tmp308 = *$tmp307;
frost$core$Int64* $tmp309 = &$tmp308->offset;
frost$core$Int64 $tmp310 = *$tmp309;
*(&local1) = $tmp310;
// line 217
frost$core$Bit $tmp311 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
frost$core$Bit $tmp312 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block1; else goto block2;
block1:;
// line 218
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block2:;
// line 220
org$frostlang$regex$RegexLexer** $tmp314 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp315 = *$tmp314;
org$frostlang$plex$runtime$DFA** $tmp316 = &$tmp315->dfa;
org$frostlang$plex$runtime$DFA* $tmp317 = *$tmp316;
frost$core$Int64* $tmp318 = &$tmp317->offset;
frost$core$Int64 $tmp319 = *$tmp318;
frost$core$Int64 $tmp320 = (frost$core$Int64) {1};
int64_t $tmp321 = $tmp319.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 - $tmp322;
frost$core$Int64 $tmp324 = (frost$core$Int64) {$tmp323};
frost$core$Int64* $tmp325 = &$tmp317->offset;
*$tmp325 = $tmp324;
// line 221
org$frostlang$regex$RegexLexer** $tmp326 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp327 = *$tmp326;
org$frostlang$plex$runtime$DFA** $tmp328 = &$tmp327->dfa;
org$frostlang$plex$runtime$DFA* $tmp329 = *$tmp328;
frost$core$Int64* $tmp330 = &$tmp329->offset;
frost$core$Int64 $tmp331 = *$tmp330;
*(&local2) = $tmp331;
// line 222
frost$core$Int64 $tmp332 = *(&local2);
frost$core$Int64 $tmp333 = *(&local1);
int64_t $tmp334 = $tmp332.value;
int64_t $tmp335 = $tmp333.value;
int64_t $tmp336 = $tmp334 - $tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {$tmp336};
*(&local3) = $tmp337;
// line 223
frost$core$Int64 $tmp338 = *(&local3);
int64_t $tmp339 = $tmp338.value;
frost$core$Char8* $tmp340 = ((frost$core$Char8*) frostAlloc($tmp339 * 1));
*(&local4) = $tmp340;
// line 224
frost$core$Int64 $tmp341 = *(&local1);
frost$core$Int64 $tmp342 = *(&local2);
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp344 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp341, $tmp342, $tmp343);
frost$core$Int64 $tmp345 = $tmp344.min;
*(&local5) = $tmp345;
frost$core$Int64 $tmp346 = $tmp344.max;
frost$core$Bit $tmp347 = $tmp344.inclusive;
bool $tmp348 = $tmp347.value;
frost$core$Int64 $tmp349 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp350 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp349);
if ($tmp348) goto block6; else goto block7;
block6:;
int64_t $tmp351 = $tmp345.value;
int64_t $tmp352 = $tmp346.value;
bool $tmp353 = $tmp351 <= $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block3; else goto block4;
block7:;
int64_t $tmp356 = $tmp345.value;
int64_t $tmp357 = $tmp346.value;
bool $tmp358 = $tmp356 < $tmp357;
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block3; else goto block4;
block3:;
// line 225
frost$core$Char8* $tmp361 = *(&local4);
frost$core$Int64 $tmp362 = *(&local5);
frost$core$Int64 $tmp363 = *(&local1);
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363.value;
int64_t $tmp366 = $tmp364 - $tmp365;
frost$core$Int64 $tmp367 = (frost$core$Int64) {$tmp366};
org$frostlang$regex$RegexLexer** $tmp368 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp369 = *$tmp368;
org$frostlang$plex$runtime$DFA** $tmp370 = &$tmp369->dfa;
org$frostlang$plex$runtime$DFA* $tmp371 = *$tmp370;
frost$core$Char8** $tmp372 = &$tmp371->source;
frost$core$Char8* $tmp373 = *$tmp372;
frost$core$Int64 $tmp374 = *(&local5);
int64_t $tmp375 = $tmp374.value;
frost$core$Char8 $tmp376 = $tmp373[$tmp375];
int64_t $tmp377 = $tmp367.value;
$tmp361[$tmp377] = $tmp376;
goto block5;
block5:;
frost$core$Int64 $tmp378 = *(&local5);
int64_t $tmp379 = $tmp346.value;
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379 - $tmp380;
frost$core$Int64 $tmp382 = (frost$core$Int64) {$tmp381};
frost$core$UInt64 $tmp383 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp382);
if ($tmp348) goto block9; else goto block10;
block9:;
uint64_t $tmp384 = $tmp383.value;
uint64_t $tmp385 = $tmp350.value;
bool $tmp386 = $tmp384 >= $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block8; else goto block4;
block10:;
uint64_t $tmp389 = $tmp383.value;
uint64_t $tmp390 = $tmp350.value;
bool $tmp391 = $tmp389 > $tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block8; else goto block4;
block8:;
int64_t $tmp394 = $tmp378.value;
int64_t $tmp395 = $tmp349.value;
int64_t $tmp396 = $tmp394 + $tmp395;
frost$core$Int64 $tmp397 = (frost$core$Int64) {$tmp396};
*(&local5) = $tmp397;
goto block3;
block4:;
// line 227
FROST_ASSERT(104 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp398 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp399 = (frost$core$Int64) {37};
org$frostlang$frostc$Position $tmp400 = *(&local0);
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp401 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp402 = *(&local4);
frost$core$Int64 $tmp403 = *(&local3);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp401, $tmp402, $tmp403);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp398, $tmp399, $tmp400, $tmp401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
return $tmp398;

}
void org$frostlang$regex$RegexParser$cleanup(org$frostlang$regex$RegexParser* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$regex$RegexLexer** $tmp404 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp405 = *$tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
frost$threads$MessageQueue** $tmp406 = &param0->errors;
frost$threads$MessageQueue* $tmp407 = *$tmp406;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$io$File** $tmp408 = &param0->path;
frost$io$File* $tmp409 = *$tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$String** $tmp410 = &param0->source;
frost$core$String* $tmp411 = *$tmp410;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp412 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp413 = *$tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
return;

}

