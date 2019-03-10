#include "org/frostlang/regex/RegexParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/regex/RegexLexer.h"
#include "frost/core/Frost.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.h"
#include "frost/io/File.h"
#include "frost/core/Int.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "org/frostlang/regex/RegexToken.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "org/frostlang/regex/RegexToken/Kind.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/Position.h"
#include "frost/core/Equatable.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Char8.h"


static frost$core$String $s1;
org$frostlang$regex$RegexParser$class_type org$frostlang$regex$RegexParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$regex$RegexParser$cleanup, org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$Int$frost$core$String, org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit, org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit, org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String, org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String, org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit, org$frostlang$regex$RegexParser$integer$R$frost$core$Bit, org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit, org$frostlang$regex$RegexParser$atom$R$frost$core$Bit, org$frostlang$regex$RegexParser$factor$R$frost$core$Bit, org$frostlang$regex$RegexParser$term$R$frost$core$Bit, org$frostlang$regex$RegexParser$expression$R$frost$core$Bit, org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q} };

typedef frost$core$Int (*$fn82)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn94)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn112)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn162)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn179)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn194)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn216)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn231)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn346)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn372)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn410)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn437)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn454)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn469)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn574)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn661)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn687)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn719)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -6942695123981101410, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, -2601544468634851439, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, -6209632553346483666, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, -6228684890836339374, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, -6259365663303883918, NULL };

void org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(org$frostlang$regex$RegexParser* param0, frost$threads$MessageQueue* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:10
FROST_ASSERT(48 == sizeof(org$frostlang$regex$RegexLexer));
org$frostlang$regex$RegexLexer* $tmp2 = (org$frostlang$regex$RegexLexer*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$regex$RegexLexer$class);
org$frostlang$regex$RegexLexer$init($tmp2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$regex$RegexLexer** $tmp3 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
org$frostlang$regex$RegexLexer** $tmp5 = &param0->lexer;
*$tmp5 = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:20
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
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$threads$MessageQueue** $tmp10 = &param0->errors;
frost$threads$MessageQueue* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$threads$MessageQueue** $tmp12 = &param0->errors;
*$tmp12 = param1;
return;

}
void org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$Int$frost$core$String(org$frostlang$regex$RegexParser* param0, frost$io$File* param1, frost$core$Int param2, frost$core$String* param3) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:27
org$frostlang$regex$RegexLexer** $tmp13 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp14 = *$tmp13;
// begin inline call to method org.frostlang.regex.RegexLexer.start(source:frost.core.String) from RegexParser.frost:27:20
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexLexer.frost:21
FROST_ASSERT(80 == sizeof(org$frostlang$plex$runtime$DFA));
org$frostlang$plex$runtime$DFA* $tmp15 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int $tmp16 = (frost$core$Int) {20u};
frost$core$Int*** $tmp17 = &$tmp14->transitions;
frost$core$Int** $tmp18 = *$tmp17;
frost$core$Int** $tmp19 = &$tmp14->accepts;
frost$core$Int* $tmp20 = *$tmp19;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT($tmp15, param3, $tmp16, $tmp18, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$plex$runtime$DFA** $tmp21 = &$tmp14->dfa;
org$frostlang$plex$runtime$DFA* $tmp22 = *$tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$plex$runtime$DFA** $tmp23 = &$tmp14->dfa;
*$tmp23 = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp24 = &param0->path;
frost$io$File* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$io$File** $tmp26 = &param0->path;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:29
frost$core$Int* $tmp27 = &param0->pathIndex;
*$tmp27 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp28 = &param0->source;
frost$core$String* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String** $tmp30 = &param0->source;
*$tmp30 = param3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:31
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp31 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp32 = *$tmp31;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:31:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:133
frost$core$Int $tmp33 = (frost$core$Int) {0u};
frost$core$Int* $tmp34 = &$tmp32->_count;
*$tmp34 = $tmp33;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:134
frost$core$Int $tmp35 = (frost$core$Int) {0u};
frost$core$Int* $tmp36 = &$tmp32->capacity;
frost$core$Int $tmp37 = *$tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp39 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp35, $tmp37, $tmp38);
frost$core$Int $tmp40 = $tmp39.min;
*(&local0) = $tmp40;
frost$core$Int $tmp41 = $tmp39.max;
frost$core$Bit $tmp42 = $tmp39.inclusive;
bool $tmp43 = $tmp42.value;
frost$core$Int $tmp44 = (frost$core$Int) {1u};
if ($tmp43) goto block6; else goto block7;
block6:;
int64_t $tmp45 = $tmp40.value;
int64_t $tmp46 = $tmp41.value;
bool $tmp47 = $tmp45 <= $tmp46;
frost$core$Bit $tmp48 = (frost$core$Bit) {$tmp47};
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block3; else goto block4;
block7:;
int64_t $tmp50 = $tmp40.value;
int64_t $tmp51 = $tmp41.value;
bool $tmp52 = $tmp50 < $tmp51;
frost$core$Bit $tmp53 = (frost$core$Bit) {$tmp52};
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp55 = &$tmp32->data;
org$frostlang$regex$RegexToken* $tmp56 = *$tmp55;
frost$core$Int $tmp57 = *(&local0);
frost$core$Int64 $tmp58 = frost$core$Int64$init$frost$core$Int($tmp57);
frost$core$Int $tmp59 = *(&local0);
int64_t $tmp60 = $tmp41.value;
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60 - $tmp61;
frost$core$Int $tmp63 = (frost$core$Int) {$tmp62};
if ($tmp43) goto block9; else goto block10;
block9:;
int64_t $tmp64 = $tmp63.value;
int64_t $tmp65 = $tmp44.value;
bool $tmp66 = $tmp64 >= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block8; else goto block4;
block10:;
int64_t $tmp69 = $tmp63.value;
int64_t $tmp70 = $tmp44.value;
bool $tmp71 = $tmp69 > $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block8; else goto block4;
block8:;
int64_t $tmp74 = $tmp59.value;
int64_t $tmp75 = $tmp44.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int $tmp77 = (frost$core$Int) {$tmp76};
*(&local0) = $tmp77;
goto block3;
block4:;
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

frost$core$Int local0;
org$frostlang$regex$RegexToken local1;
org$frostlang$plex$runtime$RawToken local2;
org$frostlang$regex$RegexToken$Kind local3;
org$frostlang$regex$RegexToken$Kind local4;
org$frostlang$regex$RegexToken local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:35
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp78 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp79 = *$tmp78;
ITable* $tmp80 = ((frost$collections$CollectionView*) $tmp79)->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
frost$core$Int $tmp83 = $tmp81(((frost$collections$CollectionView*) $tmp79));
frost$core$Int $tmp84 = (frost$core$Int) {0u};
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 != $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:36
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp90 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp91 = *$tmp90;
ITable* $tmp92 = ((frost$collections$CollectionView*) $tmp91)->$class->itable;
while ($tmp92->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp92 = $tmp92->next;
}
$fn94 $tmp93 = $tmp92->methods[0];
frost$core$Int $tmp95 = $tmp93(((frost$collections$CollectionView*) $tmp91));
frost$core$Int $tmp96 = (frost$core$Int) {1u};
int64_t $tmp97 = $tmp95.value;
int64_t $tmp98 = $tmp96.value;
int64_t $tmp99 = $tmp97 - $tmp98;
frost$core$Int $tmp100 = (frost$core$Int) {$tmp99};
*(&local0) = $tmp100;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:37
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp101 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp102 = *$tmp101;
frost$core$Int $tmp103 = *(&local0);
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:37:41
frost$core$Int $tmp104 = (frost$core$Int) {0u};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 >= $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block6; else goto block5;
block6:;
ITable* $tmp110 = ((frost$collections$CollectionView*) $tmp102)->$class->itable;
while ($tmp110->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
frost$core$Int $tmp113 = $tmp111(((frost$collections$CollectionView*) $tmp102));
int64_t $tmp114 = $tmp103.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 < $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block4; else goto block5;
block5:;
frost$core$Int $tmp119 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp122 = &$tmp102->data;
org$frostlang$regex$RegexToken* $tmp123 = *$tmp122;
frost$core$Int64 $tmp124 = frost$core$Int64$init$frost$core$Int($tmp103);
int64_t $tmp125 = $tmp124.value;
org$frostlang$regex$RegexToken $tmp126 = $tmp123[$tmp125];
*(&local1) = $tmp126;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:38
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp127 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp128 = *$tmp127;
frost$core$Int $tmp129 = *(&local0);
org$frostlang$regex$RegexToken $tmp130 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken($tmp128, $tmp129);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:39
org$frostlang$regex$RegexToken $tmp131 = *(&local1);
return $tmp131;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:41
org$frostlang$regex$RegexLexer** $tmp132 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp133 = *$tmp132;
// begin inline call to method org.frostlang.regex.RegexLexer.next():org.frostlang.regex.RegexToken from RegexParser.frost:41:33
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexLexer.frost:384
org$frostlang$plex$runtime$DFA** $tmp134 = &$tmp133->dfa;
org$frostlang$plex$runtime$DFA* $tmp135 = *$tmp134;
org$frostlang$plex$runtime$RawToken $tmp136 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp135);
*(&local2) = $tmp136;
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexLexer.frost:385
org$frostlang$plex$runtime$RawToken $tmp137 = *(&local2);
frost$core$Int $tmp138 = $tmp137.kind;
frost$core$Int64 $tmp139 = frost$core$Int64$init$frost$core$Int($tmp138);
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:385:82
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp140 = &(&local4)->$rawValue;
*$tmp140 = $tmp139;
org$frostlang$regex$RegexToken$Kind $tmp141 = *(&local4);
*(&local3) = $tmp141;
org$frostlang$regex$RegexToken$Kind $tmp142 = *(&local3);
org$frostlang$plex$runtime$RawToken $tmp143 = *(&local2);
frost$core$String$Index $tmp144 = $tmp143.start;
org$frostlang$plex$runtime$RawToken $tmp145 = *(&local2);
frost$core$String$Index $tmp146 = $tmp145.end;
frost$core$Int* $tmp147 = &$tmp133->file;
frost$core$Int $tmp148 = *$tmp147;
org$frostlang$plex$runtime$RawToken $tmp149 = *(&local2);
frost$core$Int $tmp150 = $tmp149.line;
org$frostlang$plex$runtime$RawToken $tmp151 = *(&local2);
frost$core$Int $tmp152 = $tmp151.column;
org$frostlang$frostc$Position $tmp153 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int($tmp148, $tmp150, $tmp152);
org$frostlang$regex$RegexToken $tmp154 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp142, $tmp144, $tmp146, $tmp153);
*(&local5) = $tmp154;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:42
org$frostlang$regex$RegexToken $tmp155 = *(&local5);
return $tmp155;

}
void org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp156 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp157 = *$tmp156;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp157, param1);
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp158 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp159 = *$tmp158;
ITable* $tmp160 = ((frost$collections$CollectionView*) $tmp159)->$class->itable;
while ($tmp160->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp160 = $tmp160->next;
}
$fn162 $tmp161 = $tmp160->methods[0];
frost$core$Int $tmp163 = $tmp161(((frost$collections$CollectionView*) $tmp159));
frost$core$Int $tmp164 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp165 = $tmp163.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 == $tmp166;
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp170 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp171 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp172 = *$tmp171;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp172, $tmp170);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:53
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp173 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp174 = *$tmp173;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp175 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp176 = *$tmp175;
ITable* $tmp177 = ((frost$collections$CollectionView*) $tmp176)->$class->itable;
while ($tmp177->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp177 = $tmp177->next;
}
$fn179 $tmp178 = $tmp177->methods[0];
frost$core$Int $tmp180 = $tmp178(((frost$collections$CollectionView*) $tmp176));
frost$core$Int $tmp181 = (frost$core$Int) {1u};
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181.value;
int64_t $tmp184 = $tmp182 - $tmp183;
frost$core$Int $tmp185 = (frost$core$Int) {$tmp184};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
frost$core$Int $tmp186 = (frost$core$Int) {0u};
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186.value;
bool $tmp189 = $tmp187 >= $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block8; else goto block7;
block8:;
ITable* $tmp192 = ((frost$collections$CollectionView*) $tmp174)->$class->itable;
while ($tmp192->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[0];
frost$core$Int $tmp195 = $tmp193(((frost$collections$CollectionView*) $tmp174));
int64_t $tmp196 = $tmp185.value;
int64_t $tmp197 = $tmp195.value;
bool $tmp198 = $tmp196 < $tmp197;
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
bool $tmp200 = $tmp199.value;
if ($tmp200) goto block6; else goto block7;
block7:;
frost$core$Int $tmp201 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s202, $tmp201, &$s203);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp204 = &$tmp174->data;
org$frostlang$regex$RegexToken* $tmp205 = *$tmp204;
frost$core$Int64 $tmp206 = frost$core$Int64$init$frost$core$Int($tmp185);
int64_t $tmp207 = $tmp206.value;
org$frostlang$regex$RegexToken $tmp208 = $tmp205[$tmp207];
return $tmp208;

}
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1) {

org$frostlang$regex$RegexToken local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp209 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp209;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp210 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp211 = $tmp210.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp212->value = $tmp211;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp213;
$tmp213 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp213->value = param1;
ITable* $tmp214 = ((frost$core$Equatable*) $tmp212)->$class->itable;
while ($tmp214->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp214 = $tmp214->next;
}
$fn216 $tmp215 = $tmp214->methods[0];
frost$core$Bit $tmp217 = $tmp215(((frost$core$Equatable*) $tmp212), ((frost$core$Equatable*) $tmp213));
bool $tmp218 = $tmp217.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp213)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp212)));
if ($tmp218) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp219 = (frost$core$Bit) {true};
return $tmp219;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp220 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp221 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp222 = *$tmp221;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp222, $tmp220);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp223 = (frost$core$Bit) {false};
return $tmp223;

}
frost$core$Bit org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1, frost$core$String* param2) {

org$frostlang$regex$RegexToken local0;
frost$core$String* local1 = NULL;
frost$core$String$Index$nullable local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:66
org$frostlang$regex$RegexToken $tmp224 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp224;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:67
org$frostlang$regex$RegexToken $tmp225 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp226 = $tmp225.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp227;
$tmp227 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp227->value = $tmp226;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp228;
$tmp228 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp228->value = param1;
ITable* $tmp229 = ((frost$core$Equatable*) $tmp227)->$class->itable;
while ($tmp229->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
frost$core$Bit $tmp232 = $tmp230(((frost$core$Equatable*) $tmp227), ((frost$core$Equatable*) $tmp228));
bool $tmp233 = $tmp232.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp228)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp227)));
if ($tmp233) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:68
frost$core$Bit $tmp234 = (frost$core$Bit) {true};
return $tmp234;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:70
org$frostlang$regex$RegexToken $tmp235 = *(&local0);
frost$core$String* $tmp236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s237, param2);
frost$core$String* $tmp238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp236, &$s239);
org$frostlang$regex$RegexToken $tmp240 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:70:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp241 = &param0->source;
frost$core$String* $tmp242 = *$tmp241;
frost$core$String$Index $tmp243 = $tmp240.start;
frost$core$String$Index $tmp244 = $tmp240.end;
frost$core$Bit $tmp245 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp246 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp243, $tmp244, $tmp245);
frost$core$String* $tmp247 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp242, $tmp246);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$String* $tmp248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp238, $tmp247);
frost$core$String* $tmp249 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp248, &$s250);
// begin inline call to method org.frostlang.regex.RegexParser.error(token:org.frostlang.regex.RegexToken, msg:frost.core.String) from RegexParser.frost:70:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp251 = &param0->errors;
frost$threads$MessageQueue* $tmp252 = *$tmp251;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp253 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int64 $tmp254 = (frost$core$Int64) {0u};
frost$io$File** $tmp255 = &param0->path;
frost$io$File* $tmp256 = *$tmp255;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp257 = &$tmp256->path;
frost$core$String* $tmp258 = *$tmp257;
frost$core$String$Index$nullable $tmp259 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp258, &$s260);
*(&local2) = $tmp259;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp261 = *(&local2);
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261.nonnull};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp264 = &$tmp256->path;
frost$core$String* $tmp265 = *$tmp264;
frost$core$String** $tmp266 = &$tmp256->path;
frost$core$String* $tmp267 = *$tmp266;
frost$core$String$Index$nullable $tmp268 = *(&local2);
frost$core$String$Index $tmp269 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp267, ((frost$core$String$Index) $tmp268.value));
frost$core$Bit $tmp270 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp271 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp269, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp270);
frost$core$String* $tmp272 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp265, $tmp271);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local1) = $tmp272;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
goto block5;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp273 = &$tmp256->path;
frost$core$String* $tmp274 = *$tmp273;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local1) = $tmp274;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
goto block5;
block7:;
goto block5;
block5:;
frost$core$String* $tmp275 = *(&local1);
org$frostlang$frostc$Position $tmp276 = $tmp235.position;
frost$core$Int $tmp277 = $tmp276.line;
org$frostlang$frostc$Position $tmp278 = $tmp235.position;
frost$core$Int $tmp279 = $tmp278.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String($tmp253, $tmp254, $tmp275, $tmp277, $tmp279, $tmp249);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp252, ((frost$core$Immutable*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
frost$core$String* $tmp280 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:71
frost$core$Bit $tmp281 = (frost$core$Bit) {false};
return $tmp281;

}
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp282 = &param0->errors;
frost$threads$MessageQueue* $tmp283 = *$tmp282;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp284 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int64 $tmp285 = (frost$core$Int64) {0u};
frost$io$File** $tmp286 = &param0->path;
frost$io$File* $tmp287 = *$tmp286;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp288 = &$tmp287->path;
frost$core$String* $tmp289 = *$tmp288;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
frost$core$String$Index $tmp290 = frost$core$String$get_end$R$frost$core$String$Index($tmp289);
frost$core$String$Index$nullable $tmp291 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp289, &$s292, $tmp290);
*(&local1) = $tmp291;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp293 = *(&local1);
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293.nonnull};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp296 = &$tmp287->path;
frost$core$String* $tmp297 = *$tmp296;
frost$core$String** $tmp298 = &$tmp287->path;
frost$core$String* $tmp299 = *$tmp298;
frost$core$String$Index$nullable $tmp300 = *(&local1);
frost$core$String$Index $tmp301 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp299, ((frost$core$String$Index) $tmp300.value));
frost$core$Bit $tmp302 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp303 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp301, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp302);
frost$core$String* $tmp304 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp297, $tmp303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local0) = $tmp304;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp305 = &$tmp287->path;
frost$core$String* $tmp306 = *$tmp305;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local0) = $tmp306;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
goto block1;
block4:;
goto block1;
block1:;
frost$core$String* $tmp307 = *(&local0);
org$frostlang$frostc$Position $tmp308 = param1.position;
frost$core$Int $tmp309 = $tmp308.line;
org$frostlang$frostc$Position $tmp310 = param1.position;
frost$core$Int $tmp311 = $tmp310.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String($tmp284, $tmp285, $tmp307, $tmp309, $tmp311, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp283, ((frost$core$Immutable*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$String* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
return;

}
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp313 = &param0->source;
frost$core$String* $tmp314 = *$tmp313;
frost$core$String$Index $tmp315 = param1.start;
frost$core$String$Index $tmp316 = param1.end;
frost$core$Bit $tmp317 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp318 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp315, $tmp316, $tmp317);
frost$core$String* $tmp319 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp314, $tmp318);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
return $tmp319;

}
frost$core$Bit org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:87
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:88
org$frostlang$regex$RegexToken $tmp320 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp320;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:89
org$frostlang$regex$RegexToken $tmp321 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:89:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp322 = &param0->source;
frost$core$String* $tmp323 = *$tmp322;
frost$core$String$Index $tmp324 = $tmp321.start;
frost$core$String$Index $tmp325 = $tmp321.end;
frost$core$Bit $tmp326 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp327 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp324, $tmp325, $tmp326);
frost$core$String* $tmp328 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp323, $tmp327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Bit $tmp329 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp328, &$s330);
bool $tmp331 = $tmp329.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
if ($tmp331) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:90
org$frostlang$regex$RegexToken $tmp332 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:90:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp333 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp334 = *$tmp333;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp334, $tmp332);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:91
frost$core$Bit $tmp335 = (frost$core$Bit) {true};
return $tmp335;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:93
org$frostlang$regex$RegexToken $tmp336 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp337 = $tmp336.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp338;
$tmp338 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp338->value = $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:93:43
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp340 = &(&local2)->$rawValue;
*$tmp340 = $tmp339;
org$frostlang$regex$RegexToken$Kind $tmp341 = *(&local2);
*(&local1) = $tmp341;
org$frostlang$regex$RegexToken$Kind $tmp342 = *(&local1);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp343;
$tmp343 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp343->value = $tmp342;
ITable* $tmp344 = ((frost$core$Equatable*) $tmp338)->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
frost$core$Bit $tmp347 = $tmp345(((frost$core$Equatable*) $tmp338), ((frost$core$Equatable*) $tmp343));
bool $tmp348 = $tmp347.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp343)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp338)));
if ($tmp348) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:94
frost$core$Bit $tmp349 = (frost$core$Bit) {false};
return $tmp349;
block8:;
goto block1;
block2:;
goto block10;
block10:;

}
frost$core$Bit org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken$Kind local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
org$frostlang$regex$RegexToken$Kind local3;
frost$core$Bit local4;
org$frostlang$regex$RegexToken local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int64 $tmp350 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp351 = &(&local1)->$rawValue;
*$tmp351 = $tmp350;
org$frostlang$regex$RegexToken$Kind $tmp352 = *(&local1);
*(&local0) = $tmp352;
org$frostlang$regex$RegexToken$Kind $tmp353 = *(&local0);
frost$core$Bit $tmp354 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp353, &$s355);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp356 = $tmp354.value;
bool $tmp357 = !$tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp360 = (frost$core$Bit) {false};
return $tmp360;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block5;
block5:;
frost$core$Int64 $tmp361 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp362 = &(&local3)->$rawValue;
*$tmp362 = $tmp361;
org$frostlang$regex$RegexToken$Kind $tmp363 = *(&local3);
*(&local2) = $tmp363;
org$frostlang$regex$RegexToken$Kind $tmp364 = *(&local2);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp365 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local5) = $tmp365;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp366 = *(&local5);
org$frostlang$regex$RegexToken$Kind $tmp367 = $tmp366.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp368;
$tmp368 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp368->value = $tmp367;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp369;
$tmp369 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp369->value = $tmp364;
ITable* $tmp370 = ((frost$core$Equatable*) $tmp368)->$class->itable;
while ($tmp370->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
frost$core$Bit $tmp373 = $tmp371(((frost$core$Equatable*) $tmp368), ((frost$core$Equatable*) $tmp369));
bool $tmp374 = $tmp373.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp369)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp368)));
if ($tmp374) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp375 = (frost$core$Bit) {true};
*(&local4) = $tmp375;
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp376 = *(&local5);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp377 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp378 = *$tmp377;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp378, $tmp376);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp379 = (frost$core$Bit) {false};
*(&local4) = $tmp379;
goto block9;
block9:;
frost$core$Bit $tmp380 = *(&local4);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block6; else goto block7;
block6:;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp382 = (frost$core$Bit) {true};
return $tmp382;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
frost$core$Bit local3;
org$frostlang$regex$RegexToken local4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:115
org$frostlang$regex$RegexToken $tmp383 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp383;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:116
org$frostlang$regex$RegexToken $tmp384 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp385 = $tmp384.kind;
frost$core$Int64 $tmp386 = $tmp385.$rawValue;
frost$core$Int64 $tmp387 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:117:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp393 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:117:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp394 = $tmp386.value;
int64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:118
frost$core$Int64 $tmp399 = (frost$core$Int64) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:118:42
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp400 = &(&local2)->$rawValue;
*$tmp400 = $tmp399;
org$frostlang$regex$RegexToken$Kind $tmp401 = *(&local2);
*(&local1) = $tmp401;
org$frostlang$regex$RegexToken$Kind $tmp402 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:118:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp403 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp403;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp404 = *(&local4);
org$frostlang$regex$RegexToken$Kind $tmp405 = $tmp404.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp406;
$tmp406 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp406->value = $tmp405;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp407;
$tmp407 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp407->value = $tmp402;
ITable* $tmp408 = ((frost$core$Equatable*) $tmp406)->$class->itable;
while ($tmp408->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp408 = $tmp408->next;
}
$fn410 $tmp409 = $tmp408->methods[0];
frost$core$Bit $tmp411 = $tmp409(((frost$core$Equatable*) $tmp406), ((frost$core$Equatable*) $tmp407));
bool $tmp412 = $tmp411.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp407)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp406)));
if ($tmp412) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp413 = (frost$core$Bit) {true};
*(&local3) = $tmp413;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp414 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp415 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp416 = *$tmp415;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp416, $tmp414);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp417 = (frost$core$Bit) {false};
*(&local3) = $tmp417;
goto block8;
block8:;
frost$core$Bit $tmp418 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:119
frost$core$Bit $tmp419 = (frost$core$Bit) {true};
return $tmp419;
block5:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:121:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp421 = $tmp386.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:122
frost$core$Bit $tmp426 = (frost$core$Bit) {true};
return $tmp426;
block13:;
frost$core$Int64 $tmp427 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:124:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp428 = $tmp386.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 == $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:125
// begin inline call to method org.frostlang.regex.RegexParser.peek():org.frostlang.regex.RegexToken from RegexParser.frost:125:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp433 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp434 = *$tmp433;
ITable* $tmp435 = ((frost$collections$CollectionView*) $tmp434)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$core$Int $tmp438 = $tmp436(((frost$collections$CollectionView*) $tmp434));
frost$core$Int $tmp439 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439.value;
bool $tmp442 = $tmp440 == $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp445 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp446 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp447 = *$tmp446;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp447, $tmp445);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:53
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp448 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp449 = *$tmp448;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp450 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp451 = *$tmp450;
ITable* $tmp452 = ((frost$collections$CollectionView*) $tmp451)->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
frost$core$Int $tmp455 = $tmp453(((frost$collections$CollectionView*) $tmp451));
frost$core$Int $tmp456 = (frost$core$Int) {1u};
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457 - $tmp458;
frost$core$Int $tmp460 = (frost$core$Int) {$tmp459};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
frost$core$Int $tmp461 = (frost$core$Int) {0u};
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461.value;
bool $tmp464 = $tmp462 >= $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block26; else goto block25;
block26:;
ITable* $tmp467 = ((frost$collections$CollectionView*) $tmp449)->$class->itable;
while ($tmp467->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp467 = $tmp467->next;
}
$fn469 $tmp468 = $tmp467->methods[0];
frost$core$Int $tmp470 = $tmp468(((frost$collections$CollectionView*) $tmp449));
int64_t $tmp471 = $tmp460.value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 < $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block24; else goto block25;
block25:;
frost$core$Int $tmp476 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s477, $tmp476, &$s478);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp479 = &$tmp449->data;
org$frostlang$regex$RegexToken* $tmp480 = *$tmp479;
frost$core$Int64 $tmp481 = frost$core$Int64$init$frost$core$Int($tmp460);
int64_t $tmp482 = $tmp481.value;
org$frostlang$regex$RegexToken $tmp483 = $tmp480[$tmp482];
org$frostlang$regex$RegexToken$Kind $tmp484 = $tmp483.kind;
frost$core$Int64 $tmp485 = $tmp484.$rawValue;
frost$core$Int64 $tmp486 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:126:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp487 = $tmp485.value;
int64_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 == $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {19u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:126:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp493 = $tmp485.value;
int64_t $tmp494 = $tmp492.value;
bool $tmp495 = $tmp493 == $tmp494;
frost$core$Bit $tmp496 = (frost$core$Bit) {$tmp495};
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block28; else goto block31;
block31:;
frost$core$Int64 $tmp498 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:127:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp499 = $tmp485.value;
int64_t $tmp500 = $tmp498.value;
bool $tmp501 = $tmp499 == $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block28; else goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:128
org$frostlang$regex$RegexToken $tmp504 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:131
frost$core$Bit $tmp505 = (frost$core$Bit) {true};
return $tmp505;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:134
org$frostlang$regex$RegexToken $tmp506 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:134:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp507 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp508 = *$tmp507;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp508, $tmp506);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:135
frost$core$Bit $tmp509 = (frost$core$Bit) {false};
return $tmp509;
block1:;
goto block35;
block35:;

}
frost$core$Bit org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
frost$core$Bit local3;
org$frostlang$regex$RegexToken local4;
frost$core$Bit local5;
frost$core$Bit local6;
frost$core$Bit local7;
org$frostlang$regex$RegexToken$Kind local8;
org$frostlang$regex$RegexToken$Kind local9;
org$frostlang$regex$RegexToken$Kind local10;
org$frostlang$regex$RegexToken$Kind local11;
frost$core$Bit local12;
org$frostlang$regex$RegexToken$Kind local13;
org$frostlang$regex$RegexToken$Kind local14;
org$frostlang$regex$RegexToken$Kind local15;
org$frostlang$regex$RegexToken$Kind local16;
frost$core$Bit local17;
org$frostlang$regex$RegexToken local18;
org$frostlang$regex$RegexToken$Kind local19;
org$frostlang$regex$RegexToken$Kind local20;
frost$core$Bit local21;
org$frostlang$regex$RegexToken local22;
frost$core$Bit local23;
org$frostlang$regex$RegexToken$Kind local24;
org$frostlang$regex$RegexToken$Kind local25;
org$frostlang$regex$RegexToken$Kind local26;
org$frostlang$regex$RegexToken$Kind local27;
frost$core$Bit local28;
org$frostlang$regex$RegexToken local29;
org$frostlang$regex$RegexToken$Kind local30;
org$frostlang$regex$RegexToken$Kind local31;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:145
org$frostlang$regex$RegexToken $tmp510 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp510;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:146
org$frostlang$regex$RegexToken $tmp511 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp512 = $tmp511.kind;
frost$core$Int64 $tmp513 = $tmp512.$rawValue;
frost$core$Int64 $tmp514 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:147:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514.value;
bool $tmp517 = $tmp515 == $tmp516;
frost$core$Bit $tmp518 = (frost$core$Bit) {$tmp517};
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp520 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:147:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp521 = $tmp513.value;
int64_t $tmp522 = $tmp520.value;
bool $tmp523 = $tmp521 == $tmp522;
frost$core$Bit $tmp524 = (frost$core$Bit) {$tmp523};
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp526 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:147:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp527 = $tmp513.value;
int64_t $tmp528 = $tmp526.value;
bool $tmp529 = $tmp527 == $tmp528;
frost$core$Bit $tmp530 = (frost$core$Bit) {$tmp529};
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:148:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp533 = $tmp513.value;
int64_t $tmp534 = $tmp532.value;
bool $tmp535 = $tmp533 == $tmp534;
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:148:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp539 = $tmp513.value;
int64_t $tmp540 = $tmp538.value;
bool $tmp541 = $tmp539 == $tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp544 = (frost$core$Int64) {19u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:148:85
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp545 = $tmp513.value;
int64_t $tmp546 = $tmp544.value;
bool $tmp547 = $tmp545 == $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp550 = (frost$core$Int64) {20u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:149:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp551 = $tmp513.value;
int64_t $tmp552 = $tmp550.value;
bool $tmp553 = $tmp551 == $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block2; else goto block15;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:150
frost$core$Bit $tmp556 = (frost$core$Bit) {true};
return $tmp556;
block15:;
frost$core$Int64 $tmp557 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:152:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp558 = $tmp513.value;
int64_t $tmp559 = $tmp557.value;
bool $tmp560 = $tmp558 == $tmp559;
frost$core$Bit $tmp561 = (frost$core$Bit) {$tmp560};
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:153
frost$core$Int64 $tmp563 = (frost$core$Int64) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:153:42
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp564 = &(&local2)->$rawValue;
*$tmp564 = $tmp563;
org$frostlang$regex$RegexToken$Kind $tmp565 = *(&local2);
*(&local1) = $tmp565;
org$frostlang$regex$RegexToken$Kind $tmp566 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:153:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp567 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp567;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp568 = *(&local4);
org$frostlang$regex$RegexToken$Kind $tmp569 = $tmp568.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp570;
$tmp570 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp570->value = $tmp569;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp571;
$tmp571 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp571->value = $tmp566;
ITable* $tmp572 = ((frost$core$Equatable*) $tmp570)->$class->itable;
while ($tmp572->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp572 = $tmp572->next;
}
$fn574 $tmp573 = $tmp572->methods[0];
frost$core$Bit $tmp575 = $tmp573(((frost$core$Equatable*) $tmp570), ((frost$core$Equatable*) $tmp571));
bool $tmp576 = $tmp575.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp571)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp570)));
if ($tmp576) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp577 = (frost$core$Bit) {true};
*(&local3) = $tmp577;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp578 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp579 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp580 = *$tmp579;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp580, $tmp578);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp581 = (frost$core$Bit) {false};
*(&local3) = $tmp581;
goto block21;
block21:;
frost$core$Bit $tmp582 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:154
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:154:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp583 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp584 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp583);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp586 = (frost$core$Bit) {false};
*(&local6) = $tmp586;
goto block30;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp587 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp588 = (frost$core$Bit) {true};
*(&local6) = $tmp588;
goto block30;
block30:;
frost$core$Bit $tmp589 = *(&local6);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp590 = $tmp589.value;
bool $tmp591 = !$tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp594 = (frost$core$Bit) {false};
*(&local5) = $tmp594;
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp595 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp596 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp595);
bool $tmp597 = $tmp596.value;
if ($tmp597) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp598 = (frost$core$Bit) {false};
*(&local7) = $tmp598;
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp599 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp600 = (frost$core$Bit) {true};
*(&local7) = $tmp600;
goto block34;
block34:;
frost$core$Bit $tmp601 = *(&local7);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp602 = (frost$core$Bit) {true};
*(&local5) = $tmp602;
goto block27;
block27:;
frost$core$Bit $tmp603 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:154:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp604 = $tmp603.value;
bool $tmp605 = !$tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:155
frost$core$Bit $tmp608 = (frost$core$Bit) {false};
return $tmp608;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:157
frost$core$Int64 $tmp609 = (frost$core$Int64) {9u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:157:46
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp610 = &(&local9)->$rawValue;
*$tmp610 = $tmp609;
org$frostlang$regex$RegexToken$Kind $tmp611 = *(&local9);
*(&local8) = $tmp611;
org$frostlang$regex$RegexToken$Kind $tmp612 = *(&local8);
frost$core$Bit $tmp613 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp612, &$s614);
return $tmp613;
block18:;
frost$core$Int64 $tmp615 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:159:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp616 = $tmp513.value;
int64_t $tmp617 = $tmp615.value;
bool $tmp618 = $tmp616 == $tmp617;
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:160
frost$core$Bit $tmp621 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:160:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp622 = $tmp621.value;
bool $tmp623 = !$tmp622;
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:161
frost$core$Bit $tmp626 = (frost$core$Bit) {false};
return $tmp626;
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:163
frost$core$Int64 $tmp627 = (frost$core$Int64) {13u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:163:46
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp628 = &(&local11)->$rawValue;
*$tmp628 = $tmp627;
org$frostlang$regex$RegexToken$Kind $tmp629 = *(&local11);
*(&local10) = $tmp629;
org$frostlang$regex$RegexToken$Kind $tmp630 = *(&local10);
frost$core$Bit $tmp631 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp630, &$s632);
return $tmp631;
block40:;
frost$core$Int64 $tmp633 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:165:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:245
int64_t $tmp634 = $tmp513.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 == $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:166
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:166:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int64 $tmp639 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp640 = &(&local14)->$rawValue;
*$tmp640 = $tmp639;
org$frostlang$regex$RegexToken$Kind $tmp641 = *(&local14);
*(&local13) = $tmp641;
org$frostlang$regex$RegexToken$Kind $tmp642 = *(&local13);
frost$core$Bit $tmp643 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp642, &$s644);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp645 = $tmp643.value;
bool $tmp646 = !$tmp645;
frost$core$Bit $tmp647 = (frost$core$Bit) {$tmp646};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp649 = (frost$core$Bit) {false};
*(&local12) = $tmp649;
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block56;
block56:;
frost$core$Int64 $tmp650 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp651 = &(&local16)->$rawValue;
*$tmp651 = $tmp650;
org$frostlang$regex$RegexToken$Kind $tmp652 = *(&local16);
*(&local15) = $tmp652;
org$frostlang$regex$RegexToken$Kind $tmp653 = *(&local15);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp654 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local18) = $tmp654;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp655 = *(&local18);
org$frostlang$regex$RegexToken$Kind $tmp656 = $tmp655.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp657;
$tmp657 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp657->value = $tmp656;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp658;
$tmp658 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp658->value = $tmp653;
ITable* $tmp659 = ((frost$core$Equatable*) $tmp657)->$class->itable;
while ($tmp659->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp659 = $tmp659->next;
}
$fn661 $tmp660 = $tmp659->methods[0];
frost$core$Bit $tmp662 = $tmp660(((frost$core$Equatable*) $tmp657), ((frost$core$Equatable*) $tmp658));
bool $tmp663 = $tmp662.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp658)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp657)));
if ($tmp663) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp664 = (frost$core$Bit) {true};
*(&local17) = $tmp664;
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp665 = *(&local18);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp665);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp666 = (frost$core$Bit) {false};
*(&local17) = $tmp666;
goto block60;
block60:;
frost$core$Bit $tmp667 = *(&local17);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block57; else goto block58;
block57:;
goto block56;
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp669 = (frost$core$Bit) {true};
*(&local12) = $tmp669;
goto block51;
block51:;
frost$core$Bit $tmp670 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:166:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp671 = $tmp670.value;
bool $tmp672 = !$tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:167
frost$core$Bit $tmp675 = (frost$core$Bit) {false};
return $tmp675;
block50:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:169
frost$core$Int64 $tmp676 = (frost$core$Int64) {14u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:169:45
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp677 = &(&local20)->$rawValue;
*$tmp677 = $tmp676;
org$frostlang$regex$RegexToken$Kind $tmp678 = *(&local20);
*(&local19) = $tmp678;
org$frostlang$regex$RegexToken$Kind $tmp679 = *(&local19);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:169:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp680 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local22) = $tmp680;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp681 = *(&local22);
org$frostlang$regex$RegexToken$Kind $tmp682 = $tmp681.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp683;
$tmp683 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp683->value = $tmp682;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp684;
$tmp684 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp684->value = $tmp679;
ITable* $tmp685 = ((frost$core$Equatable*) $tmp683)->$class->itable;
while ($tmp685->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp685 = $tmp685->next;
}
$fn687 $tmp686 = $tmp685->methods[0];
frost$core$Bit $tmp688 = $tmp686(((frost$core$Equatable*) $tmp683), ((frost$core$Equatable*) $tmp684));
bool $tmp689 = $tmp688.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp684)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp683)));
if ($tmp689) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp690 = (frost$core$Bit) {true};
*(&local21) = $tmp690;
goto block67;
block69:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp691 = *(&local22);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp692 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp693 = *$tmp692;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp693, $tmp691);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp694 = (frost$core$Bit) {false};
*(&local21) = $tmp694;
goto block67;
block67:;
frost$core$Bit $tmp695 = *(&local21);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:170
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:170:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int64 $tmp697 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp698 = &(&local25)->$rawValue;
*$tmp698 = $tmp697;
org$frostlang$regex$RegexToken$Kind $tmp699 = *(&local25);
*(&local24) = $tmp699;
org$frostlang$regex$RegexToken$Kind $tmp700 = *(&local24);
frost$core$Bit $tmp701 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp700, &$s702);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp703 = $tmp701.value;
bool $tmp704 = !$tmp703;
frost$core$Bit $tmp705 = (frost$core$Bit) {$tmp704};
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp707 = (frost$core$Bit) {false};
*(&local23) = $tmp707;
goto block71;
block73:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block76;
block76:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp709 = &(&local27)->$rawValue;
*$tmp709 = $tmp708;
org$frostlang$regex$RegexToken$Kind $tmp710 = *(&local27);
*(&local26) = $tmp710;
org$frostlang$regex$RegexToken$Kind $tmp711 = *(&local26);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp712 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local29) = $tmp712;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp713 = *(&local29);
org$frostlang$regex$RegexToken$Kind $tmp714 = $tmp713.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp715;
$tmp715 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp715->value = $tmp714;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp716;
$tmp716 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp716->value = $tmp711;
ITable* $tmp717 = ((frost$core$Equatable*) $tmp715)->$class->itable;
while ($tmp717->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp717 = $tmp717->next;
}
$fn719 $tmp718 = $tmp717->methods[0];
frost$core$Bit $tmp720 = $tmp718(((frost$core$Equatable*) $tmp715), ((frost$core$Equatable*) $tmp716));
bool $tmp721 = $tmp720.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp716)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp715)));
if ($tmp721) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp722 = (frost$core$Bit) {true};
*(&local28) = $tmp722;
goto block80;
block82:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp723 = *(&local29);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp723);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp724 = (frost$core$Bit) {false};
*(&local28) = $tmp724;
goto block80;
block80:;
frost$core$Bit $tmp725 = *(&local28);
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block77; else goto block78;
block77:;
goto block76;
block78:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp727 = (frost$core$Bit) {true};
*(&local23) = $tmp727;
goto block71;
block71:;
frost$core$Bit $tmp728 = *(&local23);
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:172
frost$core$Int64 $tmp729 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:172:46
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp730 = &(&local31)->$rawValue;
*$tmp730 = $tmp729;
org$frostlang$regex$RegexToken$Kind $tmp731 = *(&local31);
*(&local30) = $tmp731;
org$frostlang$regex$RegexToken$Kind $tmp732 = *(&local30);
frost$core$Bit $tmp733 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp732, &$s734);
return $tmp733;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:175
org$frostlang$regex$RegexToken $tmp735 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:175:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp736 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp737 = *$tmp736;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp737, $tmp735);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:176
frost$core$Bit $tmp738 = (frost$core$Bit) {false};
return $tmp738;
block1:;
goto block85;
block85:;

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp739 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp740 = $tmp739.value;
bool $tmp741 = !$tmp740;
frost$core$Bit $tmp742 = (frost$core$Bit) {$tmp741};
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp744 = (frost$core$Bit) {false};
return $tmp744;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp745 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp746 = (frost$core$Bit) {true};
return $tmp746;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp747 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp748 = $tmp747.value;
bool $tmp749 = !$tmp748;
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
if ($tmp751) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp752 = (frost$core$Bit) {false};
*(&local0) = $tmp752;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp753 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp754 = (frost$core$Bit) {true};
*(&local0) = $tmp754;
goto block3;
block3:;
frost$core$Bit $tmp755 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp756 = $tmp755.value;
bool $tmp757 = !$tmp756;
frost$core$Bit $tmp758 = (frost$core$Bit) {$tmp757};
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp760 = (frost$core$Bit) {false};
return $tmp760;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp761 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp762 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp761);
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp764 = (frost$core$Bit) {false};
*(&local2) = $tmp764;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp765 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp766 = (frost$core$Bit) {true};
*(&local2) = $tmp766;
goto block11;
block11:;
frost$core$Bit $tmp767 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp768 = $tmp767.value;
bool $tmp769 = !$tmp768;
frost$core$Bit $tmp770 = (frost$core$Bit) {$tmp769};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp772 = (frost$core$Bit) {false};
*(&local1) = $tmp772;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp773 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp774 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp773);
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp776 = (frost$core$Bit) {false};
*(&local3) = $tmp776;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp777 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp778 = (frost$core$Bit) {true};
*(&local3) = $tmp778;
goto block15;
block15:;
frost$core$Bit $tmp779 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp780 = (frost$core$Bit) {true};
*(&local1) = $tmp780;
goto block8;
block8:;
frost$core$Bit $tmp781 = *(&local1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp782 = (frost$core$Bit) {true};
return $tmp782;

}
frost$core$Bit org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp783 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp784 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp783);
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp786 = (frost$core$Bit) {false};
*(&local1) = $tmp786;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp787 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp788 = (frost$core$Bit) {true};
*(&local1) = $tmp788;
goto block6;
block6:;
frost$core$Bit $tmp789 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp790 = $tmp789.value;
bool $tmp791 = !$tmp790;
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp794 = (frost$core$Bit) {false};
*(&local0) = $tmp794;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp795 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp796 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp795);
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp798 = (frost$core$Bit) {false};
*(&local2) = $tmp798;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp799 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp800 = (frost$core$Bit) {true};
*(&local2) = $tmp800;
goto block10;
block10:;
frost$core$Bit $tmp801 = *(&local2);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp802 = (frost$core$Bit) {true};
*(&local0) = $tmp802;
goto block3;
block3:;
frost$core$Bit $tmp803 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp804 = $tmp803.value;
bool $tmp805 = !$tmp804;
frost$core$Bit $tmp806 = (frost$core$Bit) {$tmp805};
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp808 = (frost$core$Bit) {false};
return $tmp808;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp809 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp810 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp809);
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp812 = (frost$core$Bit) {false};
*(&local4) = $tmp812;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp813 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp814 = (frost$core$Bit) {true};
*(&local4) = $tmp814;
goto block17;
block17:;
frost$core$Bit $tmp815 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp816 = $tmp815.value;
bool $tmp817 = !$tmp816;
frost$core$Bit $tmp818 = (frost$core$Bit) {$tmp817};
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp820 = (frost$core$Bit) {false};
*(&local3) = $tmp820;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp821 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp822 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp821);
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp824 = (frost$core$Bit) {false};
*(&local5) = $tmp824;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp825 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp826 = (frost$core$Bit) {true};
*(&local5) = $tmp826;
goto block21;
block21:;
frost$core$Bit $tmp827 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp828 = (frost$core$Bit) {true};
*(&local3) = $tmp828;
goto block14;
block14:;
frost$core$Bit $tmp829 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp830 = (frost$core$Bit) {true};
return $tmp830;

}
org$frostlang$frostc$ASTNode* org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$regex$RegexParser* param0) {

frost$core$Int local0;
org$frostlang$frostc$Position local1;
frost$core$Int local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Int local6;
frost$core$Int local7;
frost$core$Char8* local8;
frost$core$Int local9;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:218
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp831 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp832 = *$tmp831;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:218:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:133
frost$core$Int $tmp833 = (frost$core$Int) {0u};
frost$core$Int* $tmp834 = &$tmp832->_count;
*$tmp834 = $tmp833;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:134
frost$core$Int $tmp835 = (frost$core$Int) {0u};
frost$core$Int* $tmp836 = &$tmp832->capacity;
frost$core$Int $tmp837 = *$tmp836;
frost$core$Bit $tmp838 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp839 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp835, $tmp837, $tmp838);
frost$core$Int $tmp840 = $tmp839.min;
*(&local0) = $tmp840;
frost$core$Int $tmp841 = $tmp839.max;
frost$core$Bit $tmp842 = $tmp839.inclusive;
bool $tmp843 = $tmp842.value;
frost$core$Int $tmp844 = (frost$core$Int) {1u};
if ($tmp843) goto block5; else goto block6;
block5:;
int64_t $tmp845 = $tmp840.value;
int64_t $tmp846 = $tmp841.value;
bool $tmp847 = $tmp845 <= $tmp846;
frost$core$Bit $tmp848 = (frost$core$Bit) {$tmp847};
bool $tmp849 = $tmp848.value;
if ($tmp849) goto block2; else goto block3;
block6:;
int64_t $tmp850 = $tmp840.value;
int64_t $tmp851 = $tmp841.value;
bool $tmp852 = $tmp850 < $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp855 = &$tmp832->data;
org$frostlang$regex$RegexToken* $tmp856 = *$tmp855;
frost$core$Int $tmp857 = *(&local0);
frost$core$Int64 $tmp858 = frost$core$Int64$init$frost$core$Int($tmp857);
frost$core$Int $tmp859 = *(&local0);
int64_t $tmp860 = $tmp841.value;
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860 - $tmp861;
frost$core$Int $tmp863 = (frost$core$Int) {$tmp862};
if ($tmp843) goto block8; else goto block9;
block8:;
int64_t $tmp864 = $tmp863.value;
int64_t $tmp865 = $tmp844.value;
bool $tmp866 = $tmp864 >= $tmp865;
frost$core$Bit $tmp867 = (frost$core$Bit) {$tmp866};
bool $tmp868 = $tmp867.value;
if ($tmp868) goto block7; else goto block3;
block9:;
int64_t $tmp869 = $tmp863.value;
int64_t $tmp870 = $tmp844.value;
bool $tmp871 = $tmp869 > $tmp870;
frost$core$Bit $tmp872 = (frost$core$Bit) {$tmp871};
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block7; else goto block3;
block7:;
int64_t $tmp874 = $tmp859.value;
int64_t $tmp875 = $tmp844.value;
int64_t $tmp876 = $tmp874 + $tmp875;
frost$core$Int $tmp877 = (frost$core$Int) {$tmp876};
*(&local0) = $tmp877;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:219
frost$core$Int* $tmp878 = &param0->pathIndex;
frost$core$Int $tmp879 = *$tmp878;
org$frostlang$regex$RegexLexer** $tmp880 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp881 = *$tmp880;
org$frostlang$plex$runtime$DFA** $tmp882 = &$tmp881->dfa;
org$frostlang$plex$runtime$DFA* $tmp883 = *$tmp882;
frost$core$Int* $tmp884 = &$tmp883->line;
frost$core$Int $tmp885 = *$tmp884;
org$frostlang$regex$RegexLexer** $tmp886 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp887 = *$tmp886;
org$frostlang$plex$runtime$DFA** $tmp888 = &$tmp887->dfa;
org$frostlang$plex$runtime$DFA* $tmp889 = *$tmp888;
frost$core$Int* $tmp890 = &$tmp889->column;
frost$core$Int $tmp891 = *$tmp890;
org$frostlang$frostc$Position $tmp892 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int($tmp879, $tmp885, $tmp891);
*(&local1) = $tmp892;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:220
org$frostlang$regex$RegexLexer** $tmp893 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp894 = *$tmp893;
org$frostlang$plex$runtime$DFA** $tmp895 = &$tmp894->dfa;
org$frostlang$plex$runtime$DFA* $tmp896 = *$tmp895;
frost$core$Int* $tmp897 = &$tmp896->offset;
frost$core$Int $tmp898 = *$tmp897;
*(&local2) = $tmp898;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:221
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:221:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp899 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp900 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp899);
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp902 = (frost$core$Bit) {false};
*(&local4) = $tmp902;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp903 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp904 = (frost$core$Bit) {true};
*(&local4) = $tmp904;
goto block15;
block15:;
frost$core$Bit $tmp905 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp906 = $tmp905.value;
bool $tmp907 = !$tmp906;
frost$core$Bit $tmp908 = (frost$core$Bit) {$tmp907};
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp910 = (frost$core$Bit) {false};
*(&local3) = $tmp910;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp911 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp912 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp911);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp914 = (frost$core$Bit) {false};
*(&local5) = $tmp914;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp915 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp916 = (frost$core$Bit) {true};
*(&local5) = $tmp916;
goto block19;
block19:;
frost$core$Bit $tmp917 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp918 = (frost$core$Bit) {true};
*(&local3) = $tmp918;
goto block12;
block12:;
frost$core$Bit $tmp919 = *(&local3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:221:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp920 = $tmp919.value;
bool $tmp921 = !$tmp920;
frost$core$Bit $tmp922 = (frost$core$Bit) {$tmp921};
bool $tmp923 = $tmp922.value;
if ($tmp923) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:224
org$frostlang$regex$RegexLexer** $tmp924 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp925 = *$tmp924;
org$frostlang$plex$runtime$DFA** $tmp926 = &$tmp925->dfa;
org$frostlang$plex$runtime$DFA* $tmp927 = *$tmp926;
frost$core$Int* $tmp928 = &$tmp927->offset;
frost$core$Int $tmp929 = *$tmp928;
frost$core$Int $tmp930 = (frost$core$Int) {1u};
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930.value;
int64_t $tmp933 = $tmp931 - $tmp932;
frost$core$Int $tmp934 = (frost$core$Int) {$tmp933};
frost$core$Int* $tmp935 = &$tmp927->offset;
*$tmp935 = $tmp934;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:225
org$frostlang$regex$RegexLexer** $tmp936 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp937 = *$tmp936;
org$frostlang$plex$runtime$DFA** $tmp938 = &$tmp937->dfa;
org$frostlang$plex$runtime$DFA* $tmp939 = *$tmp938;
frost$core$Int* $tmp940 = &$tmp939->offset;
frost$core$Int $tmp941 = *$tmp940;
*(&local6) = $tmp941;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:226
frost$core$Int $tmp942 = *(&local6);
frost$core$Int $tmp943 = *(&local2);
int64_t $tmp944 = $tmp942.value;
int64_t $tmp945 = $tmp943.value;
int64_t $tmp946 = $tmp944 - $tmp945;
frost$core$Int $tmp947 = (frost$core$Int) {$tmp946};
*(&local7) = $tmp947;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:227
frost$core$Int $tmp948 = *(&local7);
frost$core$Int64 $tmp949 = frost$core$Int64$init$frost$core$Int($tmp948);
int64_t $tmp950 = $tmp949.value;
frost$core$Char8* $tmp951 = ((frost$core$Char8*) frostAlloc($tmp950 * 1));
*(&local8) = $tmp951;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:228
frost$core$Int $tmp952 = *(&local2);
frost$core$Int $tmp953 = *(&local6);
frost$core$Bit $tmp954 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp955 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp952, $tmp953, $tmp954);
frost$core$Int $tmp956 = $tmp955.min;
*(&local9) = $tmp956;
frost$core$Int $tmp957 = $tmp955.max;
frost$core$Bit $tmp958 = $tmp955.inclusive;
bool $tmp959 = $tmp958.value;
frost$core$Int $tmp960 = (frost$core$Int) {1u};
if ($tmp959) goto block26; else goto block27;
block26:;
int64_t $tmp961 = $tmp956.value;
int64_t $tmp962 = $tmp957.value;
bool $tmp963 = $tmp961 <= $tmp962;
frost$core$Bit $tmp964 = (frost$core$Bit) {$tmp963};
bool $tmp965 = $tmp964.value;
if ($tmp965) goto block23; else goto block24;
block27:;
int64_t $tmp966 = $tmp956.value;
int64_t $tmp967 = $tmp957.value;
bool $tmp968 = $tmp966 < $tmp967;
frost$core$Bit $tmp969 = (frost$core$Bit) {$tmp968};
bool $tmp970 = $tmp969.value;
if ($tmp970) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:229
frost$core$Char8* $tmp971 = *(&local8);
frost$core$Int $tmp972 = *(&local9);
frost$core$Int $tmp973 = *(&local2);
int64_t $tmp974 = $tmp972.value;
int64_t $tmp975 = $tmp973.value;
int64_t $tmp976 = $tmp974 - $tmp975;
frost$core$Int $tmp977 = (frost$core$Int) {$tmp976};
frost$core$Int64 $tmp978 = frost$core$Int64$init$frost$core$Int($tmp977);
org$frostlang$regex$RegexLexer** $tmp979 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp980 = *$tmp979;
org$frostlang$plex$runtime$DFA** $tmp981 = &$tmp980->dfa;
org$frostlang$plex$runtime$DFA* $tmp982 = *$tmp981;
frost$core$Char8** $tmp983 = &$tmp982->source;
frost$core$Char8* $tmp984 = *$tmp983;
frost$core$Int $tmp985 = *(&local9);
frost$core$Int64 $tmp986 = frost$core$Int64$init$frost$core$Int($tmp985);
int64_t $tmp987 = $tmp986.value;
frost$core$Char8 $tmp988 = $tmp984[$tmp987];
int64_t $tmp989 = $tmp978.value;
$tmp971[$tmp989] = $tmp988;
frost$core$Int $tmp990 = *(&local9);
int64_t $tmp991 = $tmp957.value;
int64_t $tmp992 = $tmp990.value;
int64_t $tmp993 = $tmp991 - $tmp992;
frost$core$Int $tmp994 = (frost$core$Int) {$tmp993};
if ($tmp959) goto block29; else goto block30;
block29:;
int64_t $tmp995 = $tmp994.value;
int64_t $tmp996 = $tmp960.value;
bool $tmp997 = $tmp995 >= $tmp996;
frost$core$Bit $tmp998 = (frost$core$Bit) {$tmp997};
bool $tmp999 = $tmp998.value;
if ($tmp999) goto block28; else goto block24;
block30:;
int64_t $tmp1000 = $tmp994.value;
int64_t $tmp1001 = $tmp960.value;
bool $tmp1002 = $tmp1000 > $tmp1001;
frost$core$Bit $tmp1003 = (frost$core$Bit) {$tmp1002};
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block28; else goto block24;
block28:;
int64_t $tmp1005 = $tmp990.value;
int64_t $tmp1006 = $tmp960.value;
int64_t $tmp1007 = $tmp1005 + $tmp1006;
frost$core$Int $tmp1008 = (frost$core$Int) {$tmp1007};
*(&local9) = $tmp1008;
goto block23;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:231
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1009 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1010 = (frost$core$Int64) {37u};
org$frostlang$frostc$Position $tmp1011 = *(&local1);
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1012 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp1013 = *(&local8);
frost$core$Int $tmp1014 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp1012, $tmp1013, $tmp1014);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1009, $tmp1010, $tmp1011, $tmp1012);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
return $tmp1009;

}
void org$frostlang$regex$RegexParser$cleanup(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$regex$RegexLexer** $tmp1015 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp1016 = *$tmp1015;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
frost$threads$MessageQueue** $tmp1017 = &param0->errors;
frost$threads$MessageQueue* $tmp1018 = *$tmp1017;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$io$File** $tmp1019 = &param0->path;
frost$io$File* $tmp1020 = *$tmp1019;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
frost$core$String** $tmp1021 = &param0->source;
frost$core$String* $tmp1022 = *$tmp1021;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1022));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp1023 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp1024 = *$tmp1023;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
return;

}

