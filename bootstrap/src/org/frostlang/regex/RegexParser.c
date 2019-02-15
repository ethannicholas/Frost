#include "org/frostlang/regex/RegexParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/regex/RegexLexer.h"
#include "frost/core/Frost.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.h"
#include "frost/io/File.h"
#include "frost/core/Int64.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
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
org$frostlang$regex$RegexParser$class_type org$frostlang$regex$RegexParser$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$regex$RegexParser$cleanup, org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$Int64$frost$core$String, org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken, org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit, org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit, org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String, org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String, org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit, org$frostlang$regex$RegexParser$integer$R$frost$core$Bit, org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit, org$frostlang$regex$RegexParser$atom$R$frost$core$Bit, org$frostlang$regex$RegexParser$factor$R$frost$core$Bit, org$frostlang$regex$RegexParser$term$R$frost$core$Bit, org$frostlang$regex$RegexParser$expression$R$frost$core$Bit, org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q} };

typedef frost$core$Int64 (*$fn85)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn97)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn115)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn163)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn180)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn195)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn216)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn231)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn346)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn372)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn410)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn437)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn454)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn469)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn573)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn660)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn686)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn718)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -6942695123981101410, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 158, -157734115732289928, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s204 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 158, -157734115732289928, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s239 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, -2601544468634851439, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s292 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 158, -157734115732289928, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, -6209632553346483666, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, -6228684890836339374, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, -6259365663303883918, NULL };

void org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(org$frostlang$regex$RegexParser* param0, frost$threads$MessageQueue* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:10
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:20
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:23
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$threads$MessageQueue** $tmp10 = &param0->errors;
frost$threads$MessageQueue* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
frost$threads$MessageQueue** $tmp12 = &param0->errors;
*$tmp12 = param1;
return;

}
void org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$Int64$frost$core$String(org$frostlang$regex$RegexParser* param0, frost$io$File* param1, frost$core$Int64 param2, frost$core$String* param3) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:27
org$frostlang$regex$RegexLexer** $tmp13 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp14 = *$tmp13;
// begin inline call to method org.frostlang.regex.RegexLexer.start(source:frost.core.String) from RegexParser.frost:27:20
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:21
FROST_ASSERT(80 == sizeof(org$frostlang$plex$runtime$DFA));
org$frostlang$plex$runtime$DFA* $tmp15 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
frost$core$Int64 $tmp16 = (frost$core$Int64) {20u};
frost$core$Int64*** $tmp17 = &$tmp14->transitions;
frost$core$Int64** $tmp18 = *$tmp17;
frost$core$Int64** $tmp19 = &$tmp14->accepts;
frost$core$Int64* $tmp20 = *$tmp19;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int64$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int64$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int64$GT($tmp15, param3, $tmp16, $tmp18, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$plex$runtime$DFA** $tmp21 = &$tmp14->dfa;
org$frostlang$plex$runtime$DFA* $tmp22 = *$tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
org$frostlang$plex$runtime$DFA** $tmp23 = &$tmp14->dfa;
*$tmp23 = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp24 = &param0->path;
frost$io$File* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$io$File** $tmp26 = &param0->path;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:29
frost$core$Int64* $tmp27 = &param0->pathIndex;
*$tmp27 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:30
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp28 = &param0->source;
frost$core$String* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$String** $tmp30 = &param0->source;
*$tmp30 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:31
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp31 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp32 = *$tmp31;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:31:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:133
frost$core$Int64 $tmp33 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp34 = &$tmp32->_count;
*$tmp34 = $tmp33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
frost$core$Int64 $tmp35 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp36 = &$tmp32->capacity;
frost$core$Int64 $tmp37 = *$tmp36;
frost$core$Bit $tmp38 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp39 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp35, $tmp37, $tmp38);
frost$core$Int64 $tmp40 = $tmp39.min;
*(&local0) = $tmp40;
frost$core$Int64 $tmp41 = $tmp39.max;
frost$core$Bit $tmp42 = $tmp39.inclusive;
bool $tmp43 = $tmp42.value;
frost$core$Int64 $tmp44 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp45 = $tmp44.value;
frost$core$UInt64 $tmp46 = (frost$core$UInt64) {((uint64_t) $tmp45)};
if ($tmp43) goto block7; else goto block8;
block7:;
int64_t $tmp47 = $tmp40.value;
int64_t $tmp48 = $tmp41.value;
bool $tmp49 = $tmp47 <= $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block4; else goto block5;
block8:;
int64_t $tmp52 = $tmp40.value;
int64_t $tmp53 = $tmp41.value;
bool $tmp54 = $tmp52 < $tmp53;
frost$core$Bit $tmp55 = (frost$core$Bit) {$tmp54};
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp57 = &$tmp32->data;
org$frostlang$regex$RegexToken* $tmp58 = *$tmp57;
frost$core$Int64 $tmp59 = *(&local0);
frost$core$Int64 $tmp60 = *(&local0);
int64_t $tmp61 = $tmp41.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 - $tmp62;
frost$core$Int64 $tmp64 = (frost$core$Int64) {$tmp63};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp65 = $tmp64.value;
frost$core$UInt64 $tmp66 = (frost$core$UInt64) {((uint64_t) $tmp65)};
if ($tmp43) goto block11; else goto block12;
block11:;
uint64_t $tmp67 = $tmp66.value;
uint64_t $tmp68 = $tmp46.value;
bool $tmp69 = $tmp67 >= $tmp68;
frost$core$Bit $tmp70 = (frost$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block9; else goto block5;
block12:;
uint64_t $tmp72 = $tmp66.value;
uint64_t $tmp73 = $tmp46.value;
bool $tmp74 = $tmp72 > $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block9; else goto block5;
block9:;
int64_t $tmp77 = $tmp60.value;
int64_t $tmp78 = $tmp44.value;
int64_t $tmp79 = $tmp77 + $tmp78;
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
*(&local0) = $tmp80;
goto block4;
block5:;
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

frost$core$Int64 local0;
org$frostlang$regex$RegexToken local1;
org$frostlang$plex$runtime$RawToken local2;
org$frostlang$regex$RegexToken$Kind local3;
org$frostlang$regex$RegexToken$Kind local4;
org$frostlang$regex$RegexToken local5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:35
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp81 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp82 = *$tmp81;
ITable* $tmp83 = ((frost$collections$CollectionView*) $tmp82)->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[0];
frost$core$Int64 $tmp86 = $tmp84(((frost$collections$CollectionView*) $tmp82));
frost$core$Int64 $tmp87 = (frost$core$Int64) {0u};
int64_t $tmp88 = $tmp86.value;
int64_t $tmp89 = $tmp87.value;
bool $tmp90 = $tmp88 != $tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:36
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp93 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp94 = *$tmp93;
ITable* $tmp95 = ((frost$collections$CollectionView*) $tmp94)->$class->itable;
while ($tmp95->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
frost$core$Int64 $tmp98 = $tmp96(((frost$collections$CollectionView*) $tmp94));
frost$core$Int64 $tmp99 = (frost$core$Int64) {1u};
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100 - $tmp101;
frost$core$Int64 $tmp103 = (frost$core$Int64) {$tmp102};
*(&local0) = $tmp103;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:37
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp104 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp105 = *$tmp104;
frost$core$Int64 $tmp106 = *(&local0);
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int64):org.frostlang.regex.RegexToken from RegexParser.frost:37:41
frost$core$Int64 $tmp107 = (frost$core$Int64) {0u};
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 >= $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block6; else goto block5;
block6:;
ITable* $tmp113 = ((frost$collections$CollectionView*) $tmp105)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Int64 $tmp116 = $tmp114(((frost$collections$CollectionView*) $tmp105));
int64_t $tmp117 = $tmp106.value;
int64_t $tmp118 = $tmp116.value;
bool $tmp119 = $tmp117 < $tmp118;
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp122 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s123, $tmp122, &$s124);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp125 = &$tmp105->data;
org$frostlang$regex$RegexToken* $tmp126 = *$tmp125;
int64_t $tmp127 = $tmp106.value;
org$frostlang$regex$RegexToken $tmp128 = $tmp126[$tmp127];
*(&local1) = $tmp128;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:38
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp129 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp130 = *$tmp129;
frost$core$Int64 $tmp131 = *(&local0);
org$frostlang$regex$RegexToken $tmp132 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int64$R$org$frostlang$regex$RegexToken($tmp130, $tmp131);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:39
org$frostlang$regex$RegexToken $tmp133 = *(&local1);
return $tmp133;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:41
org$frostlang$regex$RegexLexer** $tmp134 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp135 = *$tmp134;
// begin inline call to method org.frostlang.regex.RegexLexer.next():org.frostlang.regex.RegexToken from RegexParser.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:384
org$frostlang$plex$runtime$DFA** $tmp136 = &$tmp135->dfa;
org$frostlang$plex$runtime$DFA* $tmp137 = *$tmp136;
org$frostlang$plex$runtime$RawToken $tmp138 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp137);
*(&local2) = $tmp138;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:385
org$frostlang$plex$runtime$RawToken $tmp139 = *(&local2);
frost$core$Int64 $tmp140 = $tmp139.kind;
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:385:82
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp141 = &(&local4)->$rawValue;
*$tmp141 = $tmp140;
org$frostlang$regex$RegexToken$Kind $tmp142 = *(&local4);
*(&local3) = $tmp142;
org$frostlang$regex$RegexToken$Kind $tmp143 = *(&local3);
org$frostlang$plex$runtime$RawToken $tmp144 = *(&local2);
frost$core$String$Index $tmp145 = $tmp144.start;
org$frostlang$plex$runtime$RawToken $tmp146 = *(&local2);
frost$core$String$Index $tmp147 = $tmp146.end;
frost$core$Int64* $tmp148 = &$tmp135->file;
frost$core$Int64 $tmp149 = *$tmp148;
org$frostlang$plex$runtime$RawToken $tmp150 = *(&local2);
frost$core$Int64 $tmp151 = $tmp150.line;
org$frostlang$plex$runtime$RawToken $tmp152 = *(&local2);
frost$core$Int64 $tmp153 = $tmp152.column;
org$frostlang$frostc$Position $tmp154 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64$frost$core$Int64($tmp149, $tmp151, $tmp153);
org$frostlang$regex$RegexToken $tmp155 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position($tmp143, $tmp145, $tmp147, $tmp154);
*(&local5) = $tmp155;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:42
org$frostlang$regex$RegexToken $tmp156 = *(&local5);
return $tmp156;

}
void org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp157 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp158 = *$tmp157;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp158, param1);
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp159 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp160 = *$tmp159;
ITable* $tmp161 = ((frost$collections$CollectionView*) $tmp160)->$class->itable;
while ($tmp161->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
frost$core$Int64 $tmp164 = $tmp162(((frost$collections$CollectionView*) $tmp160));
frost$core$Int64 $tmp165 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp166 = $tmp164.value;
int64_t $tmp167 = $tmp165.value;
bool $tmp168 = $tmp166 == $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp171 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp172 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp173 = *$tmp172;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp173, $tmp171);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:53
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp174 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp175 = *$tmp174;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp176 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp177 = *$tmp176;
ITable* $tmp178 = ((frost$collections$CollectionView*) $tmp177)->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$core$Int64 $tmp181 = $tmp179(((frost$collections$CollectionView*) $tmp177));
frost$core$Int64 $tmp182 = (frost$core$Int64) {1u};
int64_t $tmp183 = $tmp181.value;
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183 - $tmp184;
frost$core$Int64 $tmp186 = (frost$core$Int64) {$tmp185};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int64):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
frost$core$Int64 $tmp187 = (frost$core$Int64) {0u};
int64_t $tmp188 = $tmp186.value;
int64_t $tmp189 = $tmp187.value;
bool $tmp190 = $tmp188 >= $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block8; else goto block7;
block8:;
ITable* $tmp193 = ((frost$collections$CollectionView*) $tmp175)->$class->itable;
while ($tmp193->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp193 = $tmp193->next;
}
$fn195 $tmp194 = $tmp193->methods[0];
frost$core$Int64 $tmp196 = $tmp194(((frost$collections$CollectionView*) $tmp175));
int64_t $tmp197 = $tmp186.value;
int64_t $tmp198 = $tmp196.value;
bool $tmp199 = $tmp197 < $tmp198;
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s203, $tmp202, &$s204);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp205 = &$tmp175->data;
org$frostlang$regex$RegexToken* $tmp206 = *$tmp205;
int64_t $tmp207 = $tmp186.value;
org$frostlang$regex$RegexToken $tmp208 = $tmp206[$tmp207];
return $tmp208;

}
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1) {

org$frostlang$regex$RegexToken local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp209 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp209;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp219 = (frost$core$Bit) {true};
return $tmp219;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp220 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp221 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp222 = *$tmp221;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp222, $tmp220);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp223 = (frost$core$Bit) {false};
return $tmp223;

}
frost$core$Bit org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1, frost$core$String* param2) {

org$frostlang$regex$RegexToken local0;
frost$core$String* local1 = NULL;
frost$core$String$Index$nullable local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:66
org$frostlang$regex$RegexToken $tmp224 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp224;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:67
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:68
frost$core$Bit $tmp234 = (frost$core$Bit) {true};
return $tmp234;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:70
org$frostlang$regex$RegexToken $tmp235 = *(&local0);
frost$core$String* $tmp236 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s237, param2);
frost$core$String* $tmp238 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp236, &$s239);
org$frostlang$regex$RegexToken $tmp240 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:70:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp251 = &param0->errors;
frost$threads$MessageQueue* $tmp252 = *$tmp251;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp253 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int64 $tmp254 = (frost$core$Int64) {0u};
frost$io$File** $tmp255 = &param0->path;
frost$io$File* $tmp256 = *$tmp255;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:35
frost$core$String** $tmp257 = &$tmp256->path;
frost$core$String* $tmp258 = *$tmp257;
frost$core$String$Index$nullable $tmp259 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp258, &$s260);
*(&local2) = $tmp259;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:36
frost$core$String$Index$nullable $tmp261 = *(&local2);
frost$core$Bit $tmp262 = (frost$core$Bit) {$tmp261.nonnull};
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:37
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:40
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
frost$core$Int64 $tmp277 = $tmp276.line;
org$frostlang$frostc$Position $tmp278 = $tmp235.position;
frost$core$Int64 $tmp279 = $tmp278.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$core$String$frost$core$Int64$frost$core$Int64$frost$core$String($tmp253, $tmp254, $tmp275, $tmp277, $tmp279, $tmp249);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:71
frost$core$Bit $tmp281 = (frost$core$Bit) {false};
return $tmp281;

}
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp282 = &param0->errors;
frost$threads$MessageQueue* $tmp283 = *$tmp282;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp284 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int64 $tmp285 = (frost$core$Int64) {0u};
frost$io$File** $tmp286 = &param0->path;
frost$io$File* $tmp287 = *$tmp286;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:35
frost$core$String** $tmp288 = &$tmp287->path;
frost$core$String* $tmp289 = *$tmp288;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.stub:35:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp290 = frost$core$String$get_end$R$frost$core$String$Index($tmp289);
frost$core$String$Index$nullable $tmp291 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp289, &$s292, $tmp290);
*(&local1) = $tmp291;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:36
frost$core$String$Index$nullable $tmp293 = *(&local1);
frost$core$Bit $tmp294 = (frost$core$Bit) {$tmp293.nonnull};
bool $tmp295 = $tmp294.value;
if ($tmp295) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:37
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
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:40
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
frost$core$Int64 $tmp309 = $tmp308.line;
org$frostlang$frostc$Position $tmp310 = param1.position;
frost$core$Int64 $tmp311 = $tmp310.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int64$frost$core$String$frost$core$Int64$frost$core$Int64$frost$core$String($tmp284, $tmp285, $tmp307, $tmp309, $tmp311, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp283, ((frost$core$Immutable*) $tmp284));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
frost$core$String* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
return;

}
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:87
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:88
org$frostlang$regex$RegexToken $tmp320 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp320;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:89
org$frostlang$regex$RegexToken $tmp321 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:89:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:90
org$frostlang$regex$RegexToken $tmp332 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:90:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp333 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp334 = *$tmp333;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp334, $tmp332);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:91
frost$core$Bit $tmp335 = (frost$core$Bit) {true};
return $tmp335;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:93
org$frostlang$regex$RegexToken $tmp336 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp337 = $tmp336.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp338;
$tmp338 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp338->value = $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:93:43
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:94
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int64 $tmp350 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp351 = &(&local1)->$rawValue;
*$tmp351 = $tmp350;
org$frostlang$regex$RegexToken$Kind $tmp352 = *(&local1);
*(&local0) = $tmp352;
org$frostlang$regex$RegexToken$Kind $tmp353 = *(&local0);
frost$core$Bit $tmp354 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp353, &$s355);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp356 = $tmp354.value;
bool $tmp357 = !$tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp360 = (frost$core$Bit) {false};
return $tmp360;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block5;
block5:;
frost$core$Int64 $tmp361 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp362 = &(&local3)->$rawValue;
*$tmp362 = $tmp361;
org$frostlang$regex$RegexToken$Kind $tmp363 = *(&local3);
*(&local2) = $tmp363;
org$frostlang$regex$RegexToken$Kind $tmp364 = *(&local2);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp365 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local5) = $tmp365;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp375 = (frost$core$Bit) {true};
*(&local4) = $tmp375;
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp376 = *(&local5);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp377 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp378 = *$tmp377;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp378, $tmp376);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp382 = (frost$core$Bit) {true};
return $tmp382;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
frost$core$Bit local3;
org$frostlang$regex$RegexToken local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:115
org$frostlang$regex$RegexToken $tmp383 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp383;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:116
org$frostlang$regex$RegexToken $tmp384 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp385 = $tmp384.kind;
frost$core$Int64 $tmp386 = $tmp385.$rawValue;
frost$core$Int64 $tmp387 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:117:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 == $tmp389;
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp393 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:117:55
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp394 = $tmp386.value;
int64_t $tmp395 = $tmp393.value;
bool $tmp396 = $tmp394 == $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:118
frost$core$Int64 $tmp399 = (frost$core$Int64) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:118:42
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp400 = &(&local2)->$rawValue;
*$tmp400 = $tmp399;
org$frostlang$regex$RegexToken$Kind $tmp401 = *(&local2);
*(&local1) = $tmp401;
org$frostlang$regex$RegexToken$Kind $tmp402 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:118:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp403 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp403;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp413 = (frost$core$Bit) {true};
*(&local3) = $tmp413;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp414 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp415 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp416 = *$tmp415;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp416, $tmp414);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp417 = (frost$core$Bit) {false};
*(&local3) = $tmp417;
goto block8;
block8:;
frost$core$Bit $tmp418 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:119
frost$core$Bit $tmp419 = (frost$core$Bit) {true};
return $tmp419;
block5:;
frost$core$Int64 $tmp420 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:121:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp421 = $tmp386.value;
int64_t $tmp422 = $tmp420.value;
bool $tmp423 = $tmp421 == $tmp422;
frost$core$Bit $tmp424 = (frost$core$Bit) {$tmp423};
bool $tmp425 = $tmp424.value;
if ($tmp425) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:122
frost$core$Bit $tmp426 = (frost$core$Bit) {true};
return $tmp426;
block13:;
frost$core$Int64 $tmp427 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:124:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp428 = $tmp386.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 == $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:125
// begin inline call to method org.frostlang.regex.RegexParser.peek():org.frostlang.regex.RegexToken from RegexParser.frost:125:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp433 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp434 = *$tmp433;
ITable* $tmp435 = ((frost$collections$CollectionView*) $tmp434)->$class->itable;
while ($tmp435->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp435 = $tmp435->next;
}
$fn437 $tmp436 = $tmp435->methods[0];
frost$core$Int64 $tmp438 = $tmp436(((frost$collections$CollectionView*) $tmp434));
frost$core$Int64 $tmp439 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439.value;
bool $tmp442 = $tmp440 == $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp445 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp446 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp447 = *$tmp446;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp447, $tmp445);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:53
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp448 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp449 = *$tmp448;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp450 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp451 = *$tmp450;
ITable* $tmp452 = ((frost$collections$CollectionView*) $tmp451)->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
frost$core$Int64 $tmp455 = $tmp453(((frost$collections$CollectionView*) $tmp451));
frost$core$Int64 $tmp456 = (frost$core$Int64) {1u};
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457 - $tmp458;
frost$core$Int64 $tmp460 = (frost$core$Int64) {$tmp459};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int64):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
frost$core$Int64 $tmp461 = (frost$core$Int64) {0u};
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
frost$core$Int64 $tmp470 = $tmp468(((frost$collections$CollectionView*) $tmp449));
int64_t $tmp471 = $tmp460.value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 < $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s477, $tmp476, &$s478);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp479 = &$tmp449->data;
org$frostlang$regex$RegexToken* $tmp480 = *$tmp479;
int64_t $tmp481 = $tmp460.value;
org$frostlang$regex$RegexToken $tmp482 = $tmp480[$tmp481];
org$frostlang$regex$RegexToken$Kind $tmp483 = $tmp482.kind;
frost$core$Int64 $tmp484 = $tmp483.$rawValue;
frost$core$Int64 $tmp485 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:126:41
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485.value;
bool $tmp488 = $tmp486 == $tmp487;
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block28; else goto block29;
block29:;
frost$core$Int64 $tmp491 = (frost$core$Int64) {19u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:126:67
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp492 = $tmp484.value;
int64_t $tmp493 = $tmp491.value;
bool $tmp494 = $tmp492 == $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block28; else goto block31;
block31:;
frost$core$Int64 $tmp497 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:127:44
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp498 = $tmp484.value;
int64_t $tmp499 = $tmp497.value;
bool $tmp500 = $tmp498 == $tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500};
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block28; else goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:128
org$frostlang$regex$RegexToken $tmp503 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:131
frost$core$Bit $tmp504 = (frost$core$Bit) {true};
return $tmp504;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:134
org$frostlang$regex$RegexToken $tmp505 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:134:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp506 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp507 = *$tmp506;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp507, $tmp505);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:135
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:145
org$frostlang$regex$RegexToken $tmp509 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp509;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:146
org$frostlang$regex$RegexToken $tmp510 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp511 = $tmp510.kind;
frost$core$Int64 $tmp512 = $tmp511.$rawValue;
frost$core$Int64 $tmp513 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:147:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513.value;
bool $tmp516 = $tmp514 == $tmp515;
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516};
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp519 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:147:57
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp520 = $tmp512.value;
int64_t $tmp521 = $tmp519.value;
bool $tmp522 = $tmp520 == $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block2; else goto block5;
block5:;
frost$core$Int64 $tmp525 = (frost$core$Int64) {17u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:147:80
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp526 = $tmp512.value;
int64_t $tmp527 = $tmp525.value;
bool $tmp528 = $tmp526 == $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block2; else goto block7;
block7:;
frost$core$Int64 $tmp531 = (frost$core$Int64) {16u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:148:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp532 = $tmp512.value;
int64_t $tmp533 = $tmp531.value;
bool $tmp534 = $tmp532 == $tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block2; else goto block9;
block9:;
frost$core$Int64 $tmp537 = (frost$core$Int64) {18u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:148:59
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp538 = $tmp512.value;
int64_t $tmp539 = $tmp537.value;
bool $tmp540 = $tmp538 == $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block2; else goto block11;
block11:;
frost$core$Int64 $tmp543 = (frost$core$Int64) {19u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:148:85
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp544 = $tmp512.value;
int64_t $tmp545 = $tmp543.value;
bool $tmp546 = $tmp544 == $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block2; else goto block13;
block13:;
frost$core$Int64 $tmp549 = (frost$core$Int64) {20u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:149:36
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp550 = $tmp512.value;
int64_t $tmp551 = $tmp549.value;
bool $tmp552 = $tmp550 == $tmp551;
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block2; else goto block15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:150
frost$core$Bit $tmp555 = (frost$core$Bit) {true};
return $tmp555;
block15:;
frost$core$Int64 $tmp556 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:152:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp557 = $tmp512.value;
int64_t $tmp558 = $tmp556.value;
bool $tmp559 = $tmp557 == $tmp558;
frost$core$Bit $tmp560 = (frost$core$Bit) {$tmp559};
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:153
frost$core$Int64 $tmp562 = (frost$core$Int64) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:153:42
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp563 = &(&local2)->$rawValue;
*$tmp563 = $tmp562;
org$frostlang$regex$RegexToken$Kind $tmp564 = *(&local2);
*(&local1) = $tmp564;
org$frostlang$regex$RegexToken$Kind $tmp565 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:153:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp566 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp566;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp576 = (frost$core$Bit) {true};
*(&local3) = $tmp576;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp577 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp578 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp579 = *$tmp578;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp579, $tmp577);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp580 = (frost$core$Bit) {false};
*(&local3) = $tmp580;
goto block21;
block21:;
frost$core$Bit $tmp581 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:154
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp582 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp583 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp582);
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp585 = (frost$core$Bit) {false};
*(&local6) = $tmp585;
goto block30;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp586 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp587 = (frost$core$Bit) {true};
*(&local6) = $tmp587;
goto block30;
block30:;
frost$core$Bit $tmp588 = *(&local6);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp589 = $tmp588.value;
bool $tmp590 = !$tmp589;
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp593 = (frost$core$Bit) {false};
*(&local5) = $tmp593;
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp594 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp595 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp597 = (frost$core$Bit) {false};
*(&local7) = $tmp597;
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp598 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp599 = (frost$core$Bit) {true};
*(&local7) = $tmp599;
goto block34;
block34:;
frost$core$Bit $tmp600 = *(&local7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp601 = (frost$core$Bit) {true};
*(&local5) = $tmp601;
goto block27;
block27:;
frost$core$Bit $tmp602 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:154:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp603 = $tmp602.value;
bool $tmp604 = !$tmp603;
frost$core$Bit $tmp605 = (frost$core$Bit) {$tmp604};
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:155
frost$core$Bit $tmp607 = (frost$core$Bit) {false};
return $tmp607;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:157
frost$core$Int64 $tmp608 = (frost$core$Int64) {9u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:157:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp609 = &(&local9)->$rawValue;
*$tmp609 = $tmp608;
org$frostlang$regex$RegexToken$Kind $tmp610 = *(&local9);
*(&local8) = $tmp610;
org$frostlang$regex$RegexToken$Kind $tmp611 = *(&local8);
frost$core$Bit $tmp612 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp611, &$s613);
return $tmp612;
block18:;
frost$core$Int64 $tmp614 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:159:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp615 = $tmp512.value;
int64_t $tmp616 = $tmp614.value;
bool $tmp617 = $tmp615 == $tmp616;
frost$core$Bit $tmp618 = (frost$core$Bit) {$tmp617};
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:160
frost$core$Bit $tmp620 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:160:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp621 = $tmp620.value;
bool $tmp622 = !$tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:161
frost$core$Bit $tmp625 = (frost$core$Bit) {false};
return $tmp625;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:163
frost$core$Int64 $tmp626 = (frost$core$Int64) {13u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:163:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp627 = &(&local11)->$rawValue;
*$tmp627 = $tmp626;
org$frostlang$regex$RegexToken$Kind $tmp628 = *(&local11);
*(&local10) = $tmp628;
org$frostlang$regex$RegexToken$Kind $tmp629 = *(&local10);
frost$core$Bit $tmp630 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp629, &$s631);
return $tmp630;
block40:;
frost$core$Int64 $tmp632 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from RegexParser.frost:165:33
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp633 = $tmp512.value;
int64_t $tmp634 = $tmp632.value;
bool $tmp635 = $tmp633 == $tmp634;
frost$core$Bit $tmp636 = (frost$core$Bit) {$tmp635};
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:166
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:166:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int64 $tmp638 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp639 = &(&local14)->$rawValue;
*$tmp639 = $tmp638;
org$frostlang$regex$RegexToken$Kind $tmp640 = *(&local14);
*(&local13) = $tmp640;
org$frostlang$regex$RegexToken$Kind $tmp641 = *(&local13);
frost$core$Bit $tmp642 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp641, &$s643);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp644 = $tmp642.value;
bool $tmp645 = !$tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp648 = (frost$core$Bit) {false};
*(&local12) = $tmp648;
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block56;
block56:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp650 = &(&local16)->$rawValue;
*$tmp650 = $tmp649;
org$frostlang$regex$RegexToken$Kind $tmp651 = *(&local16);
*(&local15) = $tmp651;
org$frostlang$regex$RegexToken$Kind $tmp652 = *(&local15);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp653 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local18) = $tmp653;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp663 = (frost$core$Bit) {true};
*(&local17) = $tmp663;
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp664 = *(&local18);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp664);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp668 = (frost$core$Bit) {true};
*(&local12) = $tmp668;
goto block51;
block51:;
frost$core$Bit $tmp669 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:166:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp670 = $tmp669.value;
bool $tmp671 = !$tmp670;
frost$core$Bit $tmp672 = (frost$core$Bit) {$tmp671};
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:167
frost$core$Bit $tmp674 = (frost$core$Bit) {false};
return $tmp674;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:169
frost$core$Int64 $tmp675 = (frost$core$Int64) {14u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:169:45
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp676 = &(&local20)->$rawValue;
*$tmp676 = $tmp675;
org$frostlang$regex$RegexToken$Kind $tmp677 = *(&local20);
*(&local19) = $tmp677;
org$frostlang$regex$RegexToken$Kind $tmp678 = *(&local19);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:169:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp679 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local22) = $tmp679;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp689 = (frost$core$Bit) {true};
*(&local21) = $tmp689;
goto block67;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp690 = *(&local22);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp691 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp692 = *$tmp691;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp692, $tmp690);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp693 = (frost$core$Bit) {false};
*(&local21) = $tmp693;
goto block67;
block67:;
frost$core$Bit $tmp694 = *(&local21);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:170
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:170:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int64 $tmp696 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp697 = &(&local25)->$rawValue;
*$tmp697 = $tmp696;
org$frostlang$regex$RegexToken$Kind $tmp698 = *(&local25);
*(&local24) = $tmp698;
org$frostlang$regex$RegexToken$Kind $tmp699 = *(&local24);
frost$core$Bit $tmp700 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp699, &$s701);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp702 = $tmp700.value;
bool $tmp703 = !$tmp702;
frost$core$Bit $tmp704 = (frost$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp706 = (frost$core$Bit) {false};
*(&local23) = $tmp706;
goto block71;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block76;
block76:;
frost$core$Int64 $tmp707 = (frost$core$Int64) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp708 = &(&local27)->$rawValue;
*$tmp708 = $tmp707;
org$frostlang$regex$RegexToken$Kind $tmp709 = *(&local27);
*(&local26) = $tmp709;
org$frostlang$regex$RegexToken$Kind $tmp710 = *(&local26);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp711 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local29) = $tmp711;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp721 = (frost$core$Bit) {true};
*(&local28) = $tmp721;
goto block80;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp722 = *(&local29);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp722);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp726 = (frost$core$Bit) {true};
*(&local23) = $tmp726;
goto block71;
block71:;
frost$core$Bit $tmp727 = *(&local23);
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:172
frost$core$Int64 $tmp728 = (frost$core$Int64) {11u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int64):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:172:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int64* $tmp729 = &(&local31)->$rawValue;
*$tmp729 = $tmp728;
org$frostlang$regex$RegexToken$Kind $tmp730 = *(&local31);
*(&local30) = $tmp730;
org$frostlang$regex$RegexToken$Kind $tmp731 = *(&local30);
frost$core$Bit $tmp732 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp731, &$s733);
return $tmp732;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:175
org$frostlang$regex$RegexToken $tmp734 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:175:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp735 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp736 = *$tmp735;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp736, $tmp734);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:176
frost$core$Bit $tmp737 = (frost$core$Bit) {false};
return $tmp737;
block1:;
goto block85;
block85:;

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp738 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp739 = $tmp738.value;
bool $tmp740 = !$tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp743 = (frost$core$Bit) {false};
return $tmp743;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp744 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp745 = (frost$core$Bit) {true};
return $tmp745;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp746 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp747 = $tmp746.value;
bool $tmp748 = !$tmp747;
frost$core$Bit $tmp749 = (frost$core$Bit) {$tmp748};
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp751 = (frost$core$Bit) {false};
*(&local0) = $tmp751;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp752 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp753 = (frost$core$Bit) {true};
*(&local0) = $tmp753;
goto block3;
block3:;
frost$core$Bit $tmp754 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp755 = $tmp754.value;
bool $tmp756 = !$tmp755;
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp759 = (frost$core$Bit) {false};
return $tmp759;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp760 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp761 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp763 = (frost$core$Bit) {false};
*(&local2) = $tmp763;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp764 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp765 = (frost$core$Bit) {true};
*(&local2) = $tmp765;
goto block11;
block11:;
frost$core$Bit $tmp766 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp767 = $tmp766.value;
bool $tmp768 = !$tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp771 = (frost$core$Bit) {false};
*(&local1) = $tmp771;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp772 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp773 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp772);
bool $tmp774 = $tmp773.value;
if ($tmp774) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp775 = (frost$core$Bit) {false};
*(&local3) = $tmp775;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp776 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp777 = (frost$core$Bit) {true};
*(&local3) = $tmp777;
goto block15;
block15:;
frost$core$Bit $tmp778 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp779 = (frost$core$Bit) {true};
*(&local1) = $tmp779;
goto block8;
block8:;
frost$core$Bit $tmp780 = *(&local1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp782 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp783 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp785 = (frost$core$Bit) {false};
*(&local1) = $tmp785;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp786 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp787 = (frost$core$Bit) {true};
*(&local1) = $tmp787;
goto block6;
block6:;
frost$core$Bit $tmp788 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp789 = $tmp788.value;
bool $tmp790 = !$tmp789;
frost$core$Bit $tmp791 = (frost$core$Bit) {$tmp790};
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp793 = (frost$core$Bit) {false};
*(&local0) = $tmp793;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp794 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp795 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp794);
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp797 = (frost$core$Bit) {false};
*(&local2) = $tmp797;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp798 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp799 = (frost$core$Bit) {true};
*(&local2) = $tmp799;
goto block10;
block10:;
frost$core$Bit $tmp800 = *(&local2);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp801 = (frost$core$Bit) {true};
*(&local0) = $tmp801;
goto block3;
block3:;
frost$core$Bit $tmp802 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp803 = $tmp802.value;
bool $tmp804 = !$tmp803;
frost$core$Bit $tmp805 = (frost$core$Bit) {$tmp804};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp807 = (frost$core$Bit) {false};
return $tmp807;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp808 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp809 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp808);
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp811 = (frost$core$Bit) {false};
*(&local4) = $tmp811;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp812 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp813 = (frost$core$Bit) {true};
*(&local4) = $tmp813;
goto block17;
block17:;
frost$core$Bit $tmp814 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp815 = $tmp814.value;
bool $tmp816 = !$tmp815;
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816};
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp819 = (frost$core$Bit) {false};
*(&local3) = $tmp819;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp820 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp821 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp820);
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp823 = (frost$core$Bit) {false};
*(&local5) = $tmp823;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp824 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp825 = (frost$core$Bit) {true};
*(&local5) = $tmp825;
goto block21;
block21:;
frost$core$Bit $tmp826 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp827 = (frost$core$Bit) {true};
*(&local3) = $tmp827;
goto block14;
block14:;
frost$core$Bit $tmp828 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp829 = (frost$core$Bit) {true};
return $tmp829;

}
org$frostlang$frostc$ASTNode* org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q(org$frostlang$regex$RegexParser* param0) {

frost$core$Int64 local0;
org$frostlang$frostc$Position local1;
frost$core$Int64 local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Int64 local6;
frost$core$Int64 local7;
frost$core$Char8* local8;
frost$core$Int64 local9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:218
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp830 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp831 = *$tmp830;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:218:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:133
frost$core$Int64 $tmp832 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp833 = &$tmp831->_count;
*$tmp833 = $tmp832;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
frost$core$Int64 $tmp834 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp835 = &$tmp831->capacity;
frost$core$Int64 $tmp836 = *$tmp835;
frost$core$Bit $tmp837 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp838 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp834, $tmp836, $tmp837);
frost$core$Int64 $tmp839 = $tmp838.min;
*(&local0) = $tmp839;
frost$core$Int64 $tmp840 = $tmp838.max;
frost$core$Bit $tmp841 = $tmp838.inclusive;
bool $tmp842 = $tmp841.value;
frost$core$Int64 $tmp843 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp844 = $tmp843.value;
frost$core$UInt64 $tmp845 = (frost$core$UInt64) {((uint64_t) $tmp844)};
if ($tmp842) goto block6; else goto block7;
block6:;
int64_t $tmp846 = $tmp839.value;
int64_t $tmp847 = $tmp840.value;
bool $tmp848 = $tmp846 <= $tmp847;
frost$core$Bit $tmp849 = (frost$core$Bit) {$tmp848};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block3; else goto block4;
block7:;
int64_t $tmp851 = $tmp839.value;
int64_t $tmp852 = $tmp840.value;
bool $tmp853 = $tmp851 < $tmp852;
frost$core$Bit $tmp854 = (frost$core$Bit) {$tmp853};
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp856 = &$tmp831->data;
org$frostlang$regex$RegexToken* $tmp857 = *$tmp856;
frost$core$Int64 $tmp858 = *(&local0);
frost$core$Int64 $tmp859 = *(&local0);
int64_t $tmp860 = $tmp840.value;
int64_t $tmp861 = $tmp859.value;
int64_t $tmp862 = $tmp860 - $tmp861;
frost$core$Int64 $tmp863 = (frost$core$Int64) {$tmp862};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp864 = $tmp863.value;
frost$core$UInt64 $tmp865 = (frost$core$UInt64) {((uint64_t) $tmp864)};
if ($tmp842) goto block10; else goto block11;
block10:;
uint64_t $tmp866 = $tmp865.value;
uint64_t $tmp867 = $tmp845.value;
bool $tmp868 = $tmp866 >= $tmp867;
frost$core$Bit $tmp869 = (frost$core$Bit) {$tmp868};
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block8; else goto block4;
block11:;
uint64_t $tmp871 = $tmp865.value;
uint64_t $tmp872 = $tmp845.value;
bool $tmp873 = $tmp871 > $tmp872;
frost$core$Bit $tmp874 = (frost$core$Bit) {$tmp873};
bool $tmp875 = $tmp874.value;
if ($tmp875) goto block8; else goto block4;
block8:;
int64_t $tmp876 = $tmp859.value;
int64_t $tmp877 = $tmp843.value;
int64_t $tmp878 = $tmp876 + $tmp877;
frost$core$Int64 $tmp879 = (frost$core$Int64) {$tmp878};
*(&local0) = $tmp879;
goto block3;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:219
frost$core$Int64* $tmp880 = &param0->pathIndex;
frost$core$Int64 $tmp881 = *$tmp880;
org$frostlang$regex$RegexLexer** $tmp882 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp883 = *$tmp882;
org$frostlang$plex$runtime$DFA** $tmp884 = &$tmp883->dfa;
org$frostlang$plex$runtime$DFA* $tmp885 = *$tmp884;
frost$core$Int64* $tmp886 = &$tmp885->line;
frost$core$Int64 $tmp887 = *$tmp886;
org$frostlang$regex$RegexLexer** $tmp888 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp889 = *$tmp888;
org$frostlang$plex$runtime$DFA** $tmp890 = &$tmp889->dfa;
org$frostlang$plex$runtime$DFA* $tmp891 = *$tmp890;
frost$core$Int64* $tmp892 = &$tmp891->column;
frost$core$Int64 $tmp893 = *$tmp892;
org$frostlang$frostc$Position $tmp894 = org$frostlang$frostc$Position$init$frost$core$Int64$frost$core$Int64$frost$core$Int64($tmp881, $tmp887, $tmp893);
*(&local1) = $tmp894;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:220
org$frostlang$regex$RegexLexer** $tmp895 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp896 = *$tmp895;
org$frostlang$plex$runtime$DFA** $tmp897 = &$tmp896->dfa;
org$frostlang$plex$runtime$DFA* $tmp898 = *$tmp897;
frost$core$Int64* $tmp899 = &$tmp898->offset;
frost$core$Int64 $tmp900 = *$tmp899;
*(&local2) = $tmp900;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:221
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:221:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp901 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp902 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp901);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp904 = (frost$core$Bit) {false};
*(&local4) = $tmp904;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp905 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp906 = (frost$core$Bit) {true};
*(&local4) = $tmp906;
goto block17;
block17:;
frost$core$Bit $tmp907 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp908 = $tmp907.value;
bool $tmp909 = !$tmp908;
frost$core$Bit $tmp910 = (frost$core$Bit) {$tmp909};
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp912 = (frost$core$Bit) {false};
*(&local3) = $tmp912;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp913 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp914 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp913);
bool $tmp915 = $tmp914.value;
if ($tmp915) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp916 = (frost$core$Bit) {false};
*(&local5) = $tmp916;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp917 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp918 = (frost$core$Bit) {true};
*(&local5) = $tmp918;
goto block21;
block21:;
frost$core$Bit $tmp919 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp920 = (frost$core$Bit) {true};
*(&local3) = $tmp920;
goto block14;
block14:;
frost$core$Bit $tmp921 = *(&local3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:221:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp922 = $tmp921.value;
bool $tmp923 = !$tmp922;
frost$core$Bit $tmp924 = (frost$core$Bit) {$tmp923};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:224
org$frostlang$regex$RegexLexer** $tmp926 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp927 = *$tmp926;
org$frostlang$plex$runtime$DFA** $tmp928 = &$tmp927->dfa;
org$frostlang$plex$runtime$DFA* $tmp929 = *$tmp928;
frost$core$Int64* $tmp930 = &$tmp929->offset;
frost$core$Int64 $tmp931 = *$tmp930;
frost$core$Int64 $tmp932 = (frost$core$Int64) {1u};
int64_t $tmp933 = $tmp931.value;
int64_t $tmp934 = $tmp932.value;
int64_t $tmp935 = $tmp933 - $tmp934;
frost$core$Int64 $tmp936 = (frost$core$Int64) {$tmp935};
frost$core$Int64* $tmp937 = &$tmp929->offset;
*$tmp937 = $tmp936;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:225
org$frostlang$regex$RegexLexer** $tmp938 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp939 = *$tmp938;
org$frostlang$plex$runtime$DFA** $tmp940 = &$tmp939->dfa;
org$frostlang$plex$runtime$DFA* $tmp941 = *$tmp940;
frost$core$Int64* $tmp942 = &$tmp941->offset;
frost$core$Int64 $tmp943 = *$tmp942;
*(&local6) = $tmp943;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:226
frost$core$Int64 $tmp944 = *(&local6);
frost$core$Int64 $tmp945 = *(&local2);
int64_t $tmp946 = $tmp944.value;
int64_t $tmp947 = $tmp945.value;
int64_t $tmp948 = $tmp946 - $tmp947;
frost$core$Int64 $tmp949 = (frost$core$Int64) {$tmp948};
*(&local7) = $tmp949;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:227
frost$core$Int64 $tmp950 = *(&local7);
int64_t $tmp951 = $tmp950.value;
frost$core$Char8* $tmp952 = ((frost$core$Char8*) frostAlloc($tmp951 * 1));
*(&local8) = $tmp952;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:228
frost$core$Int64 $tmp953 = *(&local2);
frost$core$Int64 $tmp954 = *(&local6);
frost$core$Bit $tmp955 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp956 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp953, $tmp954, $tmp955);
frost$core$Int64 $tmp957 = $tmp956.min;
*(&local9) = $tmp957;
frost$core$Int64 $tmp958 = $tmp956.max;
frost$core$Bit $tmp959 = $tmp956.inclusive;
bool $tmp960 = $tmp959.value;
frost$core$Int64 $tmp961 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp962 = $tmp961.value;
frost$core$UInt64 $tmp963 = (frost$core$UInt64) {((uint64_t) $tmp962)};
if ($tmp960) goto block29; else goto block30;
block29:;
int64_t $tmp964 = $tmp957.value;
int64_t $tmp965 = $tmp958.value;
bool $tmp966 = $tmp964 <= $tmp965;
frost$core$Bit $tmp967 = (frost$core$Bit) {$tmp966};
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block26; else goto block27;
block30:;
int64_t $tmp969 = $tmp957.value;
int64_t $tmp970 = $tmp958.value;
bool $tmp971 = $tmp969 < $tmp970;
frost$core$Bit $tmp972 = (frost$core$Bit) {$tmp971};
bool $tmp973 = $tmp972.value;
if ($tmp973) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:229
frost$core$Char8* $tmp974 = *(&local8);
frost$core$Int64 $tmp975 = *(&local9);
frost$core$Int64 $tmp976 = *(&local2);
int64_t $tmp977 = $tmp975.value;
int64_t $tmp978 = $tmp976.value;
int64_t $tmp979 = $tmp977 - $tmp978;
frost$core$Int64 $tmp980 = (frost$core$Int64) {$tmp979};
org$frostlang$regex$RegexLexer** $tmp981 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp982 = *$tmp981;
org$frostlang$plex$runtime$DFA** $tmp983 = &$tmp982->dfa;
org$frostlang$plex$runtime$DFA* $tmp984 = *$tmp983;
frost$core$Char8** $tmp985 = &$tmp984->source;
frost$core$Char8* $tmp986 = *$tmp985;
frost$core$Int64 $tmp987 = *(&local9);
int64_t $tmp988 = $tmp987.value;
frost$core$Char8 $tmp989 = $tmp986[$tmp988];
int64_t $tmp990 = $tmp980.value;
$tmp974[$tmp990] = $tmp989;
frost$core$Int64 $tmp991 = *(&local9);
int64_t $tmp992 = $tmp958.value;
int64_t $tmp993 = $tmp991.value;
int64_t $tmp994 = $tmp992 - $tmp993;
frost$core$Int64 $tmp995 = (frost$core$Int64) {$tmp994};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp996 = $tmp995.value;
frost$core$UInt64 $tmp997 = (frost$core$UInt64) {((uint64_t) $tmp996)};
if ($tmp960) goto block33; else goto block34;
block33:;
uint64_t $tmp998 = $tmp997.value;
uint64_t $tmp999 = $tmp963.value;
bool $tmp1000 = $tmp998 >= $tmp999;
frost$core$Bit $tmp1001 = (frost$core$Bit) {$tmp1000};
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block31; else goto block27;
block34:;
uint64_t $tmp1003 = $tmp997.value;
uint64_t $tmp1004 = $tmp963.value;
bool $tmp1005 = $tmp1003 > $tmp1004;
frost$core$Bit $tmp1006 = (frost$core$Bit) {$tmp1005};
bool $tmp1007 = $tmp1006.value;
if ($tmp1007) goto block31; else goto block27;
block31:;
int64_t $tmp1008 = $tmp991.value;
int64_t $tmp1009 = $tmp961.value;
int64_t $tmp1010 = $tmp1008 + $tmp1009;
frost$core$Int64 $tmp1011 = (frost$core$Int64) {$tmp1010};
*(&local9) = $tmp1011;
goto block26;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:231
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1012 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp1013 = (frost$core$Int64) {37u};
org$frostlang$frostc$Position $tmp1014 = *(&local1);
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1015 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp1016 = *(&local8);
frost$core$Int64 $tmp1017 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp1015, $tmp1016, $tmp1017);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp1012, $tmp1013, $tmp1014, $tmp1015);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
return $tmp1012;

}
void org$frostlang$regex$RegexParser$cleanup(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$regex$RegexLexer** $tmp1018 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp1019 = *$tmp1018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
frost$threads$MessageQueue** $tmp1020 = &param0->errors;
frost$threads$MessageQueue* $tmp1021 = *$tmp1020;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$io$File** $tmp1022 = &param0->path;
frost$io$File* $tmp1023 = *$tmp1022;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1023));
frost$core$String** $tmp1024 = &param0->source;
frost$core$String* $tmp1025 = *$tmp1024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp1026 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp1027 = *$tmp1026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
return;

}

