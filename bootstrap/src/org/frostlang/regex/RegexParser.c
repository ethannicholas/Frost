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
typedef frost$core$Int (*$fn161)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn178)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn193)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn215)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn230)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn345)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn371)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn409)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn436)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn453)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn468)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn573)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn660)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn686)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn718)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -6942695123981101410, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, -2601544468634851439, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s291 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, -6209632553346483666, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, -6228684890836339374, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, -6259365663303883918, NULL };

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
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:385:82
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp139 = &(&local4)->$rawValue;
*$tmp139 = $tmp138;
org$frostlang$regex$RegexToken$Kind $tmp140 = *(&local4);
*(&local3) = $tmp140;
org$frostlang$regex$RegexToken$Kind $tmp141 = *(&local3);
org$frostlang$plex$runtime$RawToken $tmp142 = *(&local2);
frost$core$String$Index $tmp143 = $tmp142.start;
org$frostlang$plex$runtime$RawToken $tmp144 = *(&local2);
frost$core$String$Index $tmp145 = $tmp144.end;
frost$core$Int* $tmp146 = &$tmp133->file;
frost$core$Int $tmp147 = *$tmp146;
org$frostlang$plex$runtime$RawToken $tmp148 = *(&local2);
frost$core$Int $tmp149 = $tmp148.line;
org$frostlang$plex$runtime$RawToken $tmp150 = *(&local2);
frost$core$Int $tmp151 = $tmp150.column;
org$frostlang$frostc$Position $tmp152 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int($tmp147, $tmp149, $tmp151);
org$frostlang$regex$RegexToken $tmp153 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp141, $tmp143, $tmp145, $tmp152);
*(&local5) = $tmp153;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:42
org$frostlang$regex$RegexToken $tmp154 = *(&local5);
return $tmp154;

}
void org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp155 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp156 = *$tmp155;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp156, param1);
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp157 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp158 = *$tmp157;
ITable* $tmp159 = ((frost$collections$CollectionView*) $tmp158)->$class->itable;
while ($tmp159->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp159 = $tmp159->next;
}
$fn161 $tmp160 = $tmp159->methods[0];
frost$core$Int $tmp162 = $tmp160(((frost$collections$CollectionView*) $tmp158));
frost$core$Int $tmp163 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp169 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp170 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp171 = *$tmp170;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp171, $tmp169);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:53
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp172 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp173 = *$tmp172;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp174 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp175 = *$tmp174;
ITable* $tmp176 = ((frost$collections$CollectionView*) $tmp175)->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
frost$core$Int $tmp179 = $tmp177(((frost$collections$CollectionView*) $tmp175));
frost$core$Int $tmp180 = (frost$core$Int) {1u};
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180.value;
int64_t $tmp183 = $tmp181 - $tmp182;
frost$core$Int $tmp184 = (frost$core$Int) {$tmp183};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
frost$core$Int $tmp185 = (frost$core$Int) {0u};
int64_t $tmp186 = $tmp184.value;
int64_t $tmp187 = $tmp185.value;
bool $tmp188 = $tmp186 >= $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block8; else goto block7;
block8:;
ITable* $tmp191 = ((frost$collections$CollectionView*) $tmp173)->$class->itable;
while ($tmp191->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp191 = $tmp191->next;
}
$fn193 $tmp192 = $tmp191->methods[0];
frost$core$Int $tmp194 = $tmp192(((frost$collections$CollectionView*) $tmp173));
int64_t $tmp195 = $tmp184.value;
int64_t $tmp196 = $tmp194.value;
bool $tmp197 = $tmp195 < $tmp196;
frost$core$Bit $tmp198 = (frost$core$Bit) {$tmp197};
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block6; else goto block7;
block7:;
frost$core$Int $tmp200 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s201, $tmp200, &$s202);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp203 = &$tmp173->data;
org$frostlang$regex$RegexToken* $tmp204 = *$tmp203;
frost$core$Int64 $tmp205 = frost$core$Int64$init$frost$core$Int($tmp184);
int64_t $tmp206 = $tmp205.value;
org$frostlang$regex$RegexToken $tmp207 = $tmp204[$tmp206];
return $tmp207;

}
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1) {

org$frostlang$regex$RegexToken local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp208 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp208;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp209 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp210 = $tmp209.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp211;
$tmp211 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp211->value = $tmp210;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp212->value = param1;
ITable* $tmp213 = ((frost$core$Equatable*) $tmp211)->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[0];
frost$core$Bit $tmp216 = $tmp214(((frost$core$Equatable*) $tmp211), ((frost$core$Equatable*) $tmp212));
bool $tmp217 = $tmp216.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp212)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp211)));
if ($tmp217) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp218 = (frost$core$Bit) {true};
return $tmp218;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp219 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp220 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp221 = *$tmp220;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp221, $tmp219);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp222 = (frost$core$Bit) {false};
return $tmp222;

}
frost$core$Bit org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1, frost$core$String* param2) {

org$frostlang$regex$RegexToken local0;
frost$core$String* local1 = NULL;
frost$core$String$Index$nullable local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:66
org$frostlang$regex$RegexToken $tmp223 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp223;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:67
org$frostlang$regex$RegexToken $tmp224 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp225 = $tmp224.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp226;
$tmp226 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp226->value = $tmp225;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp227;
$tmp227 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp227->value = param1;
ITable* $tmp228 = ((frost$core$Equatable*) $tmp226)->$class->itable;
while ($tmp228->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp228 = $tmp228->next;
}
$fn230 $tmp229 = $tmp228->methods[0];
frost$core$Bit $tmp231 = $tmp229(((frost$core$Equatable*) $tmp226), ((frost$core$Equatable*) $tmp227));
bool $tmp232 = $tmp231.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp227)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp226)));
if ($tmp232) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:68
frost$core$Bit $tmp233 = (frost$core$Bit) {true};
return $tmp233;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:70
org$frostlang$regex$RegexToken $tmp234 = *(&local0);
frost$core$String* $tmp235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s236, param2);
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp235, &$s238);
org$frostlang$regex$RegexToken $tmp239 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:70:63
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp240 = &param0->source;
frost$core$String* $tmp241 = *$tmp240;
frost$core$String$Index $tmp242 = $tmp239.start;
frost$core$String$Index $tmp243 = $tmp239.end;
frost$core$Bit $tmp244 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp245 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp242, $tmp243, $tmp244);
frost$core$String* $tmp246 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp241, $tmp245);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$String* $tmp247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp237, $tmp246);
frost$core$String* $tmp248 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp247, &$s249);
// begin inline call to method org.frostlang.regex.RegexParser.error(token:org.frostlang.regex.RegexToken, msg:frost.core.String) from RegexParser.frost:70:14
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp250 = &param0->errors;
frost$threads$MessageQueue* $tmp251 = *$tmp250;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp252 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int $tmp253 = (frost$core$Int) {0u};
frost$io$File** $tmp254 = &param0->path;
frost$io$File* $tmp255 = *$tmp254;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp256 = &$tmp255->path;
frost$core$String* $tmp257 = *$tmp256;
frost$core$String$Index$nullable $tmp258 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp257, &$s259);
*(&local2) = $tmp258;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp260 = *(&local2);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260.nonnull};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp263 = &$tmp255->path;
frost$core$String* $tmp264 = *$tmp263;
frost$core$String** $tmp265 = &$tmp255->path;
frost$core$String* $tmp266 = *$tmp265;
frost$core$String$Index$nullable $tmp267 = *(&local2);
frost$core$String$Index $tmp268 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp266, ((frost$core$String$Index) $tmp267.value));
frost$core$Bit $tmp269 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp270 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp268, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp269);
frost$core$String* $tmp271 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp264, $tmp270);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local1) = $tmp271;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
goto block5;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp272 = &$tmp255->path;
frost$core$String* $tmp273 = *$tmp272;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
*(&local1) = $tmp273;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
goto block5;
block7:;
goto block5;
block5:;
frost$core$String* $tmp274 = *(&local1);
org$frostlang$frostc$Position $tmp275 = $tmp234.position;
frost$core$Int $tmp276 = $tmp275.line;
org$frostlang$frostc$Position $tmp277 = $tmp234.position;
frost$core$Int $tmp278 = $tmp277.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String($tmp252, $tmp253, $tmp274, $tmp276, $tmp278, $tmp248);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp251, ((frost$core$Immutable*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
frost$core$String* $tmp279 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:71
frost$core$Bit $tmp280 = (frost$core$Bit) {false};
return $tmp280;

}
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp281 = &param0->errors;
frost$threads$MessageQueue* $tmp282 = *$tmp281;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp283 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int $tmp284 = (frost$core$Int) {0u};
frost$io$File** $tmp285 = &param0->path;
frost$io$File* $tmp286 = *$tmp285;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:148
frost$core$String** $tmp287 = &$tmp286->path;
frost$core$String* $tmp288 = *$tmp287;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:1012
frost$core$String$Index $tmp289 = frost$core$String$get_end$R$frost$core$String$Index($tmp288);
frost$core$String$Index$nullable $tmp290 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp288, &$s291, $tmp289);
*(&local1) = $tmp290;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp292 = *(&local1);
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292.nonnull};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:150
frost$core$String** $tmp295 = &$tmp286->path;
frost$core$String* $tmp296 = *$tmp295;
frost$core$String** $tmp297 = &$tmp286->path;
frost$core$String* $tmp298 = *$tmp297;
frost$core$String$Index$nullable $tmp299 = *(&local1);
frost$core$String$Index $tmp300 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp298, ((frost$core$String$Index) $tmp299.value));
frost$core$Bit $tmp301 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp302 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp300, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp301);
frost$core$String* $tmp303 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp296, $tmp302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = $tmp303;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/io/File.frost:153
frost$core$String** $tmp304 = &$tmp286->path;
frost$core$String* $tmp305 = *$tmp304;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local0) = $tmp305;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
goto block1;
block4:;
goto block1;
block1:;
frost$core$String* $tmp306 = *(&local0);
org$frostlang$frostc$Position $tmp307 = param1.position;
frost$core$Int $tmp308 = $tmp307.line;
org$frostlang$frostc$Position $tmp309 = param1.position;
frost$core$Int $tmp310 = $tmp309.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String($tmp283, $tmp284, $tmp306, $tmp308, $tmp310, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp282, ((frost$core$Immutable*) $tmp283));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$core$String* $tmp311 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
return;

}
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp312 = &param0->source;
frost$core$String* $tmp313 = *$tmp312;
frost$core$String$Index $tmp314 = param1.start;
frost$core$String$Index $tmp315 = param1.end;
frost$core$Bit $tmp316 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp317 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp314, $tmp315, $tmp316);
frost$core$String* $tmp318 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp313, $tmp317);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
return $tmp318;

}
frost$core$Bit org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:87
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:88
org$frostlang$regex$RegexToken $tmp319 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp319;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:89
org$frostlang$regex$RegexToken $tmp320 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:89:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp321 = &param0->source;
frost$core$String* $tmp322 = *$tmp321;
frost$core$String$Index $tmp323 = $tmp320.start;
frost$core$String$Index $tmp324 = $tmp320.end;
frost$core$Bit $tmp325 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp326 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp323, $tmp324, $tmp325);
frost$core$String* $tmp327 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp322, $tmp326);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$core$Bit $tmp328 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp327, &$s329);
bool $tmp330 = $tmp328.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
if ($tmp330) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:90
org$frostlang$regex$RegexToken $tmp331 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:90:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp332 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp333 = *$tmp332;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp333, $tmp331);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:91
frost$core$Bit $tmp334 = (frost$core$Bit) {true};
return $tmp334;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:93
org$frostlang$regex$RegexToken $tmp335 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp336 = $tmp335.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp337;
$tmp337 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp337->value = $tmp336;
frost$core$Int $tmp338 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:93:43
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp339 = &(&local2)->$rawValue;
*$tmp339 = $tmp338;
org$frostlang$regex$RegexToken$Kind $tmp340 = *(&local2);
*(&local1) = $tmp340;
org$frostlang$regex$RegexToken$Kind $tmp341 = *(&local1);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp342;
$tmp342 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp342->value = $tmp341;
ITable* $tmp343 = ((frost$core$Equatable*) $tmp337)->$class->itable;
while ($tmp343->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[0];
frost$core$Bit $tmp346 = $tmp344(((frost$core$Equatable*) $tmp337), ((frost$core$Equatable*) $tmp342));
bool $tmp347 = $tmp346.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp342)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp337)));
if ($tmp347) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:94
frost$core$Bit $tmp348 = (frost$core$Bit) {false};
return $tmp348;
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
frost$core$Int $tmp349 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp350 = &(&local1)->$rawValue;
*$tmp350 = $tmp349;
org$frostlang$regex$RegexToken$Kind $tmp351 = *(&local1);
*(&local0) = $tmp351;
org$frostlang$regex$RegexToken$Kind $tmp352 = *(&local0);
frost$core$Bit $tmp353 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp352, &$s354);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp355 = $tmp353.value;
bool $tmp356 = !$tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp359 = (frost$core$Bit) {false};
return $tmp359;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block5;
block5:;
frost$core$Int $tmp360 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp361 = &(&local3)->$rawValue;
*$tmp361 = $tmp360;
org$frostlang$regex$RegexToken$Kind $tmp362 = *(&local3);
*(&local2) = $tmp362;
org$frostlang$regex$RegexToken$Kind $tmp363 = *(&local2);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp364 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local5) = $tmp364;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp365 = *(&local5);
org$frostlang$regex$RegexToken$Kind $tmp366 = $tmp365.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp367;
$tmp367 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp367->value = $tmp366;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp368;
$tmp368 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp368->value = $tmp363;
ITable* $tmp369 = ((frost$core$Equatable*) $tmp367)->$class->itable;
while ($tmp369->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp369 = $tmp369->next;
}
$fn371 $tmp370 = $tmp369->methods[0];
frost$core$Bit $tmp372 = $tmp370(((frost$core$Equatable*) $tmp367), ((frost$core$Equatable*) $tmp368));
bool $tmp373 = $tmp372.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp368)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp367)));
if ($tmp373) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp374 = (frost$core$Bit) {true};
*(&local4) = $tmp374;
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp375 = *(&local5);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp376 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp377 = *$tmp376;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp377, $tmp375);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp378 = (frost$core$Bit) {false};
*(&local4) = $tmp378;
goto block9;
block9:;
frost$core$Bit $tmp379 = *(&local4);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block6; else goto block7;
block6:;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp381 = (frost$core$Bit) {true};
return $tmp381;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
frost$core$Bit local3;
org$frostlang$regex$RegexToken local4;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:115
org$frostlang$regex$RegexToken $tmp382 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp382;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:116
org$frostlang$regex$RegexToken $tmp383 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp384 = $tmp383.kind;
frost$core$Int $tmp385 = $tmp384.$rawValue;
frost$core$Int $tmp386 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:117:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386.value;
bool $tmp389 = $tmp387 == $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block2; else goto block3;
block3:;
frost$core$Int $tmp392 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:117:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp393 = $tmp385.value;
int64_t $tmp394 = $tmp392.value;
bool $tmp395 = $tmp393 == $tmp394;
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:118
frost$core$Int $tmp398 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:118:42
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp399 = &(&local2)->$rawValue;
*$tmp399 = $tmp398;
org$frostlang$regex$RegexToken$Kind $tmp400 = *(&local2);
*(&local1) = $tmp400;
org$frostlang$regex$RegexToken$Kind $tmp401 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:118:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp402 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp402;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp403 = *(&local4);
org$frostlang$regex$RegexToken$Kind $tmp404 = $tmp403.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp405;
$tmp405 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp405->value = $tmp404;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp406;
$tmp406 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp406->value = $tmp401;
ITable* $tmp407 = ((frost$core$Equatable*) $tmp405)->$class->itable;
while ($tmp407->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp407 = $tmp407->next;
}
$fn409 $tmp408 = $tmp407->methods[0];
frost$core$Bit $tmp410 = $tmp408(((frost$core$Equatable*) $tmp405), ((frost$core$Equatable*) $tmp406));
bool $tmp411 = $tmp410.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp406)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp405)));
if ($tmp411) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp412 = (frost$core$Bit) {true};
*(&local3) = $tmp412;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp413 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp414 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp415 = *$tmp414;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp415, $tmp413);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp416 = (frost$core$Bit) {false};
*(&local3) = $tmp416;
goto block8;
block8:;
frost$core$Bit $tmp417 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:119
frost$core$Bit $tmp418 = (frost$core$Bit) {true};
return $tmp418;
block5:;
frost$core$Int $tmp419 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:121:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp420 = $tmp385.value;
int64_t $tmp421 = $tmp419.value;
bool $tmp422 = $tmp420 == $tmp421;
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:122
frost$core$Bit $tmp425 = (frost$core$Bit) {true};
return $tmp425;
block13:;
frost$core$Int $tmp426 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:124:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp427 = $tmp385.value;
int64_t $tmp428 = $tmp426.value;
bool $tmp429 = $tmp427 == $tmp428;
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:125
// begin inline call to method org.frostlang.regex.RegexParser.peek():org.frostlang.regex.RegexToken from RegexParser.frost:125:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp432 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp433 = *$tmp432;
ITable* $tmp434 = ((frost$collections$CollectionView*) $tmp433)->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$core$Int $tmp437 = $tmp435(((frost$collections$CollectionView*) $tmp433));
frost$core$Int $tmp438 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp439 = $tmp437.value;
int64_t $tmp440 = $tmp438.value;
bool $tmp441 = $tmp439 == $tmp440;
frost$core$Bit $tmp442 = (frost$core$Bit) {$tmp441};
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp444 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp445 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp446 = *$tmp445;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp446, $tmp444);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:53
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp447 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp448 = *$tmp447;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp449 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp450 = *$tmp449;
ITable* $tmp451 = ((frost$collections$CollectionView*) $tmp450)->$class->itable;
while ($tmp451->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp451 = $tmp451->next;
}
$fn453 $tmp452 = $tmp451->methods[0];
frost$core$Int $tmp454 = $tmp452(((frost$collections$CollectionView*) $tmp450));
frost$core$Int $tmp455 = (frost$core$Int) {1u};
int64_t $tmp456 = $tmp454.value;
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456 - $tmp457;
frost$core$Int $tmp459 = (frost$core$Int) {$tmp458};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
frost$core$Int $tmp460 = (frost$core$Int) {0u};
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460.value;
bool $tmp463 = $tmp461 >= $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block26; else goto block25;
block26:;
ITable* $tmp466 = ((frost$collections$CollectionView*) $tmp448)->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[0];
frost$core$Int $tmp469 = $tmp467(((frost$collections$CollectionView*) $tmp448));
int64_t $tmp470 = $tmp459.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 < $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block24; else goto block25;
block25:;
frost$core$Int $tmp475 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s476, $tmp475, &$s477);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp478 = &$tmp448->data;
org$frostlang$regex$RegexToken* $tmp479 = *$tmp478;
frost$core$Int64 $tmp480 = frost$core$Int64$init$frost$core$Int($tmp459);
int64_t $tmp481 = $tmp480.value;
org$frostlang$regex$RegexToken $tmp482 = $tmp479[$tmp481];
org$frostlang$regex$RegexToken$Kind $tmp483 = $tmp482.kind;
frost$core$Int $tmp484 = $tmp483.$rawValue;
frost$core$Int $tmp485 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:126:41
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 == $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block28; else goto block29;
block29:;
frost$core$Int $tmp491 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:126:67
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp492 = $tmp484.value;
int64_t $tmp493 = $tmp491.value;
bool $tmp494 = $tmp492 == $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block28; else goto block31;
block31:;
frost$core$Int $tmp497 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:127:44
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp498 = $tmp484.value;
int64_t $tmp499 = $tmp497.value;
bool $tmp500 = $tmp498 == $tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block28; else goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:128
org$frostlang$regex$RegexToken $tmp503 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:131
frost$core$Bit $tmp504 = (frost$core$Bit) {true};
return $tmp504;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:134
org$frostlang$regex$RegexToken $tmp505 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:134:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp506 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp507 = *$tmp506;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp507, $tmp505);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:135
frost$core$Bit $tmp508 = (frost$core$Bit) {false};
return $tmp508;
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
org$frostlang$regex$RegexToken $tmp509 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp509;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:146
org$frostlang$regex$RegexToken $tmp510 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp511 = $tmp510.kind;
frost$core$Int $tmp512 = $tmp511.$rawValue;
frost$core$Int $tmp513 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513.value;
bool $tmp516 = $tmp514 == $tmp515;
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516};
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block2; else goto block3;
block3:;
frost$core$Int $tmp519 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:57
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp520 = $tmp512.value;
int64_t $tmp521 = $tmp519.value;
bool $tmp522 = $tmp520 == $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block2; else goto block5;
block5:;
frost$core$Int $tmp525 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:80
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp526 = $tmp512.value;
int64_t $tmp527 = $tmp525.value;
bool $tmp528 = $tmp526 == $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block2; else goto block7;
block7:;
frost$core$Int $tmp531 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp532 = $tmp512.value;
int64_t $tmp533 = $tmp531.value;
bool $tmp534 = $tmp532 == $tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block2; else goto block9;
block9:;
frost$core$Int $tmp537 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:59
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp538 = $tmp512.value;
int64_t $tmp539 = $tmp537.value;
bool $tmp540 = $tmp538 == $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block2; else goto block11;
block11:;
frost$core$Int $tmp543 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:85
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp544 = $tmp512.value;
int64_t $tmp545 = $tmp543.value;
bool $tmp546 = $tmp544 == $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block2; else goto block13;
block13:;
frost$core$Int $tmp549 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:149:36
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp550 = $tmp512.value;
int64_t $tmp551 = $tmp549.value;
bool $tmp552 = $tmp550 == $tmp551;
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block2; else goto block15;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:150
frost$core$Bit $tmp555 = (frost$core$Bit) {true};
return $tmp555;
block15:;
frost$core$Int $tmp556 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:152:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp557 = $tmp512.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 == $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:153
frost$core$Int $tmp562 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:153:42
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp563 = &(&local2)->$rawValue;
*$tmp563 = $tmp562;
org$frostlang$regex$RegexToken$Kind $tmp564 = *(&local2);
*(&local1) = $tmp564;
org$frostlang$regex$RegexToken$Kind $tmp565 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:153:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp566 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp566;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp567 = *(&local4);
org$frostlang$regex$RegexToken$Kind $tmp568 = $tmp567.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp569;
$tmp569 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp569->value = $tmp568;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp570;
$tmp570 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp570->value = $tmp565;
ITable* $tmp571 = ((frost$core$Equatable*) $tmp569)->$class->itable;
while ($tmp571->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp571 = $tmp571->next;
}
$fn573 $tmp572 = $tmp571->methods[0];
frost$core$Bit $tmp574 = $tmp572(((frost$core$Equatable*) $tmp569), ((frost$core$Equatable*) $tmp570));
bool $tmp575 = $tmp574.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp570)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp569)));
if ($tmp575) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp576 = (frost$core$Bit) {true};
*(&local3) = $tmp576;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp577 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp578 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp579 = *$tmp578;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp579, $tmp577);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp580 = (frost$core$Bit) {false};
*(&local3) = $tmp580;
goto block21;
block21:;
frost$core$Bit $tmp581 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:154
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:154:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp582 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp583 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp582);
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp585 = (frost$core$Bit) {false};
*(&local6) = $tmp585;
goto block30;
block32:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp586 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp587 = (frost$core$Bit) {true};
*(&local6) = $tmp587;
goto block30;
block30:;
frost$core$Bit $tmp588 = *(&local6);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp589 = $tmp588.value;
bool $tmp590 = !$tmp589;
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp593 = (frost$core$Bit) {false};
*(&local5) = $tmp593;
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp594 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp595 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp597 = (frost$core$Bit) {false};
*(&local7) = $tmp597;
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp598 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp599 = (frost$core$Bit) {true};
*(&local7) = $tmp599;
goto block34;
block34:;
frost$core$Bit $tmp600 = *(&local7);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp601 = (frost$core$Bit) {true};
*(&local5) = $tmp601;
goto block27;
block27:;
frost$core$Bit $tmp602 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:154:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp603 = $tmp602.value;
bool $tmp604 = !$tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:155
frost$core$Bit $tmp607 = (frost$core$Bit) {false};
return $tmp607;
block26:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:157
frost$core$Int $tmp608 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:157:46
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp609 = &(&local9)->$rawValue;
*$tmp609 = $tmp608;
org$frostlang$regex$RegexToken$Kind $tmp610 = *(&local9);
*(&local8) = $tmp610;
org$frostlang$regex$RegexToken$Kind $tmp611 = *(&local8);
frost$core$Bit $tmp612 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp611, &$s613);
return $tmp612;
block18:;
frost$core$Int $tmp614 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:159:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp615 = $tmp512.value;
int64_t $tmp616 = $tmp614.value;
bool $tmp617 = $tmp615 == $tmp616;
frost$core$Bit $tmp618 = (frost$core$Bit) {$tmp617};
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:160
frost$core$Bit $tmp620 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:160:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp621 = $tmp620.value;
bool $tmp622 = !$tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:161
frost$core$Bit $tmp625 = (frost$core$Bit) {false};
return $tmp625;
block43:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:163
frost$core$Int $tmp626 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:163:46
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp627 = &(&local11)->$rawValue;
*$tmp627 = $tmp626;
org$frostlang$regex$RegexToken$Kind $tmp628 = *(&local11);
*(&local10) = $tmp628;
org$frostlang$regex$RegexToken$Kind $tmp629 = *(&local10);
frost$core$Bit $tmp630 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp629, &$s631);
return $tmp630;
block40:;
frost$core$Int $tmp632 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:165:33
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp633 = $tmp512.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 == $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:166
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:166:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int $tmp638 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp639 = &(&local14)->$rawValue;
*$tmp639 = $tmp638;
org$frostlang$regex$RegexToken$Kind $tmp640 = *(&local14);
*(&local13) = $tmp640;
org$frostlang$regex$RegexToken$Kind $tmp641 = *(&local13);
frost$core$Bit $tmp642 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp641, &$s643);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp644 = $tmp642.value;
bool $tmp645 = !$tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp648 = (frost$core$Bit) {false};
*(&local12) = $tmp648;
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block56;
block56:;
frost$core$Int $tmp649 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp650 = &(&local16)->$rawValue;
*$tmp650 = $tmp649;
org$frostlang$regex$RegexToken$Kind $tmp651 = *(&local16);
*(&local15) = $tmp651;
org$frostlang$regex$RegexToken$Kind $tmp652 = *(&local15);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp653 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local18) = $tmp653;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp654 = *(&local18);
org$frostlang$regex$RegexToken$Kind $tmp655 = $tmp654.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp656;
$tmp656 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp656->value = $tmp655;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp657;
$tmp657 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp657->value = $tmp652;
ITable* $tmp658 = ((frost$core$Equatable*) $tmp656)->$class->itable;
while ($tmp658->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp658 = $tmp658->next;
}
$fn660 $tmp659 = $tmp658->methods[0];
frost$core$Bit $tmp661 = $tmp659(((frost$core$Equatable*) $tmp656), ((frost$core$Equatable*) $tmp657));
bool $tmp662 = $tmp661.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp657)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp656)));
if ($tmp662) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp663 = (frost$core$Bit) {true};
*(&local17) = $tmp663;
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp664 = *(&local18);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp664);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp665 = (frost$core$Bit) {false};
*(&local17) = $tmp665;
goto block60;
block60:;
frost$core$Bit $tmp666 = *(&local17);
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block57; else goto block58;
block57:;
goto block56;
block58:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp668 = (frost$core$Bit) {true};
*(&local12) = $tmp668;
goto block51;
block51:;
frost$core$Bit $tmp669 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:166:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp670 = $tmp669.value;
bool $tmp671 = !$tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:167
frost$core$Bit $tmp674 = (frost$core$Bit) {false};
return $tmp674;
block50:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:169
frost$core$Int $tmp675 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:169:45
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp676 = &(&local20)->$rawValue;
*$tmp676 = $tmp675;
org$frostlang$regex$RegexToken$Kind $tmp677 = *(&local20);
*(&local19) = $tmp677;
org$frostlang$regex$RegexToken$Kind $tmp678 = *(&local19);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:169:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp679 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local22) = $tmp679;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp680 = *(&local22);
org$frostlang$regex$RegexToken$Kind $tmp681 = $tmp680.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp682;
$tmp682 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp682->value = $tmp681;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp683;
$tmp683 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp683->value = $tmp678;
ITable* $tmp684 = ((frost$core$Equatable*) $tmp682)->$class->itable;
while ($tmp684->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp684 = $tmp684->next;
}
$fn686 $tmp685 = $tmp684->methods[0];
frost$core$Bit $tmp687 = $tmp685(((frost$core$Equatable*) $tmp682), ((frost$core$Equatable*) $tmp683));
bool $tmp688 = $tmp687.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp683)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp682)));
if ($tmp688) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp689 = (frost$core$Bit) {true};
*(&local21) = $tmp689;
goto block67;
block69:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp690 = *(&local22);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp691 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp692 = *$tmp691;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp692, $tmp690);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp693 = (frost$core$Bit) {false};
*(&local21) = $tmp693;
goto block67;
block67:;
frost$core$Bit $tmp694 = *(&local21);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:170
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:170:28
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int $tmp696 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp697 = &(&local25)->$rawValue;
*$tmp697 = $tmp696;
org$frostlang$regex$RegexToken$Kind $tmp698 = *(&local25);
*(&local24) = $tmp698;
org$frostlang$regex$RegexToken$Kind $tmp699 = *(&local24);
frost$core$Bit $tmp700 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp699, &$s701);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp702 = $tmp700.value;
bool $tmp703 = !$tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp706 = (frost$core$Bit) {false};
*(&local23) = $tmp706;
goto block71;
block73:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block76;
block76:;
frost$core$Int $tmp707 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp708 = &(&local27)->$rawValue;
*$tmp708 = $tmp707;
org$frostlang$regex$RegexToken$Kind $tmp709 = *(&local27);
*(&local26) = $tmp709;
org$frostlang$regex$RegexToken$Kind $tmp710 = *(&local26);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp711 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local29) = $tmp711;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp712 = *(&local29);
org$frostlang$regex$RegexToken$Kind $tmp713 = $tmp712.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp714;
$tmp714 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp714->value = $tmp713;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp715;
$tmp715 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp715->value = $tmp710;
ITable* $tmp716 = ((frost$core$Equatable*) $tmp714)->$class->itable;
while ($tmp716->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp716 = $tmp716->next;
}
$fn718 $tmp717 = $tmp716->methods[0];
frost$core$Bit $tmp719 = $tmp717(((frost$core$Equatable*) $tmp714), ((frost$core$Equatable*) $tmp715));
bool $tmp720 = $tmp719.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp715)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp714)));
if ($tmp720) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp721 = (frost$core$Bit) {true};
*(&local28) = $tmp721;
goto block80;
block82:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp722 = *(&local29);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp722);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp723 = (frost$core$Bit) {false};
*(&local28) = $tmp723;
goto block80;
block80:;
frost$core$Bit $tmp724 = *(&local28);
bool $tmp725 = $tmp724.value;
if ($tmp725) goto block77; else goto block78;
block77:;
goto block76;
block78:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp726 = (frost$core$Bit) {true};
*(&local23) = $tmp726;
goto block71;
block71:;
frost$core$Bit $tmp727 = *(&local23);
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:172
frost$core$Int $tmp728 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:172:46
// /Users/ethannicholas/Dropbox/Frost-Int/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp729 = &(&local31)->$rawValue;
*$tmp729 = $tmp728;
org$frostlang$regex$RegexToken$Kind $tmp730 = *(&local31);
*(&local30) = $tmp730;
org$frostlang$regex$RegexToken$Kind $tmp731 = *(&local30);
frost$core$Bit $tmp732 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp731, &$s733);
return $tmp732;
block47:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:175
org$frostlang$regex$RegexToken $tmp734 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:175:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp735 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp736 = *$tmp735;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp736, $tmp734);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:176
frost$core$Bit $tmp737 = (frost$core$Bit) {false};
return $tmp737;
block1:;
goto block85;
block85:;

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp738 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp739 = $tmp738.value;
bool $tmp740 = !$tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp743 = (frost$core$Bit) {false};
return $tmp743;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp744 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp745 = (frost$core$Bit) {true};
return $tmp745;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp746 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp747 = $tmp746.value;
bool $tmp748 = !$tmp747;
frost$core$Bit $tmp749 = (frost$core$Bit) {$tmp748};
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp751 = (frost$core$Bit) {false};
*(&local0) = $tmp751;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp752 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp753 = (frost$core$Bit) {true};
*(&local0) = $tmp753;
goto block3;
block3:;
frost$core$Bit $tmp754 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp755 = $tmp754.value;
bool $tmp756 = !$tmp755;
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp759 = (frost$core$Bit) {false};
return $tmp759;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp760 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp761 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp763 = (frost$core$Bit) {false};
*(&local2) = $tmp763;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp764 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp765 = (frost$core$Bit) {true};
*(&local2) = $tmp765;
goto block11;
block11:;
frost$core$Bit $tmp766 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp767 = $tmp766.value;
bool $tmp768 = !$tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp771 = (frost$core$Bit) {false};
*(&local1) = $tmp771;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp772 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp773 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp775 = (frost$core$Bit) {false};
*(&local3) = $tmp775;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp776 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp777 = (frost$core$Bit) {true};
*(&local3) = $tmp777;
goto block15;
block15:;
frost$core$Bit $tmp778 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp779 = (frost$core$Bit) {true};
*(&local1) = $tmp779;
goto block8;
block8:;
frost$core$Bit $tmp780 = *(&local1);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp781 = (frost$core$Bit) {true};
return $tmp781;

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
frost$core$Bit $tmp782 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp783 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp785 = (frost$core$Bit) {false};
*(&local1) = $tmp785;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp786 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp787 = (frost$core$Bit) {true};
*(&local1) = $tmp787;
goto block6;
block6:;
frost$core$Bit $tmp788 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp789 = $tmp788.value;
bool $tmp790 = !$tmp789;
frost$core$Bit $tmp791 = (frost$core$Bit) {$tmp790};
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp793 = (frost$core$Bit) {false};
*(&local0) = $tmp793;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp794 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp795 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp797 = (frost$core$Bit) {false};
*(&local2) = $tmp797;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp798 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp799 = (frost$core$Bit) {true};
*(&local2) = $tmp799;
goto block10;
block10:;
frost$core$Bit $tmp800 = *(&local2);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp801 = (frost$core$Bit) {true};
*(&local0) = $tmp801;
goto block3;
block3:;
frost$core$Bit $tmp802 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp803 = $tmp802.value;
bool $tmp804 = !$tmp803;
frost$core$Bit $tmp805 = (frost$core$Bit) {$tmp804};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp807 = (frost$core$Bit) {false};
return $tmp807;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp808 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp809 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp811 = (frost$core$Bit) {false};
*(&local4) = $tmp811;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp812 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp813 = (frost$core$Bit) {true};
*(&local4) = $tmp813;
goto block17;
block17:;
frost$core$Bit $tmp814 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp815 = $tmp814.value;
bool $tmp816 = !$tmp815;
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816};
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp819 = (frost$core$Bit) {false};
*(&local3) = $tmp819;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp820 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp821 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp820);
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp823 = (frost$core$Bit) {false};
*(&local5) = $tmp823;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp824 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp825 = (frost$core$Bit) {true};
*(&local5) = $tmp825;
goto block21;
block21:;
frost$core$Bit $tmp826 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp827 = (frost$core$Bit) {true};
*(&local3) = $tmp827;
goto block14;
block14:;
frost$core$Bit $tmp828 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp829 = (frost$core$Bit) {true};
return $tmp829;

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
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp830 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp831 = *$tmp830;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:218:29
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:133
frost$core$Int $tmp832 = (frost$core$Int) {0u};
frost$core$Int* $tmp833 = &$tmp831->_count;
*$tmp833 = $tmp832;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:134
frost$core$Int $tmp834 = (frost$core$Int) {0u};
frost$core$Int* $tmp835 = &$tmp831->capacity;
frost$core$Int $tmp836 = *$tmp835;
frost$core$Bit $tmp837 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp838 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp834, $tmp836, $tmp837);
frost$core$Int $tmp839 = $tmp838.min;
*(&local0) = $tmp839;
frost$core$Int $tmp840 = $tmp838.max;
frost$core$Bit $tmp841 = $tmp838.inclusive;
bool $tmp842 = $tmp841.value;
frost$core$Int $tmp843 = (frost$core$Int) {1u};
if ($tmp842) goto block5; else goto block6;
block5:;
int64_t $tmp844 = $tmp839.value;
int64_t $tmp845 = $tmp840.value;
bool $tmp846 = $tmp844 <= $tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {$tmp846};
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block2; else goto block3;
block6:;
int64_t $tmp849 = $tmp839.value;
int64_t $tmp850 = $tmp840.value;
bool $tmp851 = $tmp849 < $tmp850;
frost$core$Bit $tmp852 = (frost$core$Bit) {$tmp851};
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp854 = &$tmp831->data;
org$frostlang$regex$RegexToken* $tmp855 = *$tmp854;
frost$core$Int $tmp856 = *(&local0);
frost$core$Int64 $tmp857 = frost$core$Int64$init$frost$core$Int($tmp856);
frost$core$Int $tmp858 = *(&local0);
int64_t $tmp859 = $tmp840.value;
int64_t $tmp860 = $tmp858.value;
int64_t $tmp861 = $tmp859 - $tmp860;
frost$core$Int $tmp862 = (frost$core$Int) {$tmp861};
if ($tmp842) goto block8; else goto block9;
block8:;
int64_t $tmp863 = $tmp862.value;
int64_t $tmp864 = $tmp843.value;
bool $tmp865 = $tmp863 >= $tmp864;
frost$core$Bit $tmp866 = (frost$core$Bit) {$tmp865};
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block7; else goto block3;
block9:;
int64_t $tmp868 = $tmp862.value;
int64_t $tmp869 = $tmp843.value;
bool $tmp870 = $tmp868 > $tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block7; else goto block3;
block7:;
int64_t $tmp873 = $tmp858.value;
int64_t $tmp874 = $tmp843.value;
int64_t $tmp875 = $tmp873 + $tmp874;
frost$core$Int $tmp876 = (frost$core$Int) {$tmp875};
*(&local0) = $tmp876;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:219
frost$core$Int* $tmp877 = &param0->pathIndex;
frost$core$Int $tmp878 = *$tmp877;
org$frostlang$regex$RegexLexer** $tmp879 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp880 = *$tmp879;
org$frostlang$plex$runtime$DFA** $tmp881 = &$tmp880->dfa;
org$frostlang$plex$runtime$DFA* $tmp882 = *$tmp881;
frost$core$Int* $tmp883 = &$tmp882->line;
frost$core$Int $tmp884 = *$tmp883;
org$frostlang$regex$RegexLexer** $tmp885 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp886 = *$tmp885;
org$frostlang$plex$runtime$DFA** $tmp887 = &$tmp886->dfa;
org$frostlang$plex$runtime$DFA* $tmp888 = *$tmp887;
frost$core$Int* $tmp889 = &$tmp888->column;
frost$core$Int $tmp890 = *$tmp889;
org$frostlang$frostc$Position $tmp891 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int($tmp878, $tmp884, $tmp890);
*(&local1) = $tmp891;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:220
org$frostlang$regex$RegexLexer** $tmp892 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp893 = *$tmp892;
org$frostlang$plex$runtime$DFA** $tmp894 = &$tmp893->dfa;
org$frostlang$plex$runtime$DFA* $tmp895 = *$tmp894;
frost$core$Int* $tmp896 = &$tmp895->offset;
frost$core$Int $tmp897 = *$tmp896;
*(&local2) = $tmp897;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:221
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:221:23
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp898 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp899 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp898);
bool $tmp900 = $tmp899.value;
if ($tmp900) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp901 = (frost$core$Bit) {false};
*(&local4) = $tmp901;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp902 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp903 = (frost$core$Bit) {true};
*(&local4) = $tmp903;
goto block15;
block15:;
frost$core$Bit $tmp904 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp905 = $tmp904.value;
bool $tmp906 = !$tmp905;
frost$core$Bit $tmp907 = (frost$core$Bit) {$tmp906};
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp909 = (frost$core$Bit) {false};
*(&local3) = $tmp909;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp910 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp911 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp910);
bool $tmp912 = $tmp911.value;
if ($tmp912) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp913 = (frost$core$Bit) {false};
*(&local5) = $tmp913;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp914 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp915 = (frost$core$Bit) {true};
*(&local5) = $tmp915;
goto block19;
block19:;
frost$core$Bit $tmp916 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp917 = (frost$core$Bit) {true};
*(&local3) = $tmp917;
goto block12;
block12:;
frost$core$Bit $tmp918 = *(&local3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:221:12
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp919 = $tmp918.value;
bool $tmp920 = !$tmp919;
frost$core$Bit $tmp921 = (frost$core$Bit) {$tmp920};
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:224
org$frostlang$regex$RegexLexer** $tmp923 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp924 = *$tmp923;
org$frostlang$plex$runtime$DFA** $tmp925 = &$tmp924->dfa;
org$frostlang$plex$runtime$DFA* $tmp926 = *$tmp925;
frost$core$Int* $tmp927 = &$tmp926->offset;
frost$core$Int $tmp928 = *$tmp927;
frost$core$Int $tmp929 = (frost$core$Int) {1u};
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930 - $tmp931;
frost$core$Int $tmp933 = (frost$core$Int) {$tmp932};
frost$core$Int* $tmp934 = &$tmp926->offset;
*$tmp934 = $tmp933;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:225
org$frostlang$regex$RegexLexer** $tmp935 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp936 = *$tmp935;
org$frostlang$plex$runtime$DFA** $tmp937 = &$tmp936->dfa;
org$frostlang$plex$runtime$DFA* $tmp938 = *$tmp937;
frost$core$Int* $tmp939 = &$tmp938->offset;
frost$core$Int $tmp940 = *$tmp939;
*(&local6) = $tmp940;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:226
frost$core$Int $tmp941 = *(&local6);
frost$core$Int $tmp942 = *(&local2);
int64_t $tmp943 = $tmp941.value;
int64_t $tmp944 = $tmp942.value;
int64_t $tmp945 = $tmp943 - $tmp944;
frost$core$Int $tmp946 = (frost$core$Int) {$tmp945};
*(&local7) = $tmp946;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:227
frost$core$Int $tmp947 = *(&local7);
frost$core$Int64 $tmp948 = frost$core$Int64$init$frost$core$Int($tmp947);
int64_t $tmp949 = $tmp948.value;
frost$core$Char8* $tmp950 = ((frost$core$Char8*) frostAlloc($tmp949 * 1));
*(&local8) = $tmp950;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:228
frost$core$Int $tmp951 = *(&local2);
frost$core$Int $tmp952 = *(&local6);
frost$core$Bit $tmp953 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp954 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp951, $tmp952, $tmp953);
frost$core$Int $tmp955 = $tmp954.min;
*(&local9) = $tmp955;
frost$core$Int $tmp956 = $tmp954.max;
frost$core$Bit $tmp957 = $tmp954.inclusive;
bool $tmp958 = $tmp957.value;
frost$core$Int $tmp959 = (frost$core$Int) {1u};
if ($tmp958) goto block26; else goto block27;
block26:;
int64_t $tmp960 = $tmp955.value;
int64_t $tmp961 = $tmp956.value;
bool $tmp962 = $tmp960 <= $tmp961;
frost$core$Bit $tmp963 = (frost$core$Bit) {$tmp962};
bool $tmp964 = $tmp963.value;
if ($tmp964) goto block23; else goto block24;
block27:;
int64_t $tmp965 = $tmp955.value;
int64_t $tmp966 = $tmp956.value;
bool $tmp967 = $tmp965 < $tmp966;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:229
frost$core$Char8* $tmp970 = *(&local8);
frost$core$Int $tmp971 = *(&local9);
frost$core$Int $tmp972 = *(&local2);
int64_t $tmp973 = $tmp971.value;
int64_t $tmp974 = $tmp972.value;
int64_t $tmp975 = $tmp973 - $tmp974;
frost$core$Int $tmp976 = (frost$core$Int) {$tmp975};
frost$core$Int64 $tmp977 = frost$core$Int64$init$frost$core$Int($tmp976);
org$frostlang$regex$RegexLexer** $tmp978 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp979 = *$tmp978;
org$frostlang$plex$runtime$DFA** $tmp980 = &$tmp979->dfa;
org$frostlang$plex$runtime$DFA* $tmp981 = *$tmp980;
frost$core$Char8** $tmp982 = &$tmp981->source;
frost$core$Char8* $tmp983 = *$tmp982;
frost$core$Int $tmp984 = *(&local9);
frost$core$Int64 $tmp985 = frost$core$Int64$init$frost$core$Int($tmp984);
int64_t $tmp986 = $tmp985.value;
frost$core$Char8 $tmp987 = $tmp983[$tmp986];
int64_t $tmp988 = $tmp977.value;
$tmp970[$tmp988] = $tmp987;
frost$core$Int $tmp989 = *(&local9);
int64_t $tmp990 = $tmp956.value;
int64_t $tmp991 = $tmp989.value;
int64_t $tmp992 = $tmp990 - $tmp991;
frost$core$Int $tmp993 = (frost$core$Int) {$tmp992};
if ($tmp958) goto block29; else goto block30;
block29:;
int64_t $tmp994 = $tmp993.value;
int64_t $tmp995 = $tmp959.value;
bool $tmp996 = $tmp994 >= $tmp995;
frost$core$Bit $tmp997 = (frost$core$Bit) {$tmp996};
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block28; else goto block24;
block30:;
int64_t $tmp999 = $tmp993.value;
int64_t $tmp1000 = $tmp959.value;
bool $tmp1001 = $tmp999 > $tmp1000;
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001};
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block28; else goto block24;
block28:;
int64_t $tmp1004 = $tmp989.value;
int64_t $tmp1005 = $tmp959.value;
int64_t $tmp1006 = $tmp1004 + $tmp1005;
frost$core$Int $tmp1007 = (frost$core$Int) {$tmp1006};
*(&local9) = $tmp1007;
goto block23;
block24:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:231
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1008 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1009 = (frost$core$Int) {37u};
org$frostlang$frostc$Position $tmp1010 = *(&local1);
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1011 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp1012 = *(&local8);
frost$core$Int $tmp1013 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp1011, $tmp1012, $tmp1013);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp1008, $tmp1009, $tmp1010, $tmp1011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1008));
return $tmp1008;

}
void org$frostlang$regex$RegexParser$cleanup(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/regex/RegexParser.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$regex$RegexLexer** $tmp1014 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp1015 = *$tmp1014;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$threads$MessageQueue** $tmp1016 = &param0->errors;
frost$threads$MessageQueue* $tmp1017 = *$tmp1016;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
frost$io$File** $tmp1018 = &param0->path;
frost$io$File* $tmp1019 = *$tmp1018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$core$String** $tmp1020 = &param0->source;
frost$core$String* $tmp1021 = *$tmp1020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp1022 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp1023 = *$tmp1022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
return;

}

