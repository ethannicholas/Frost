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
typedef frost$core$Bit (*$fn355)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn381)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn419)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn446)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn463)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn478)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn583)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn670)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn696)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn728)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -6942695123981101410, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, -2601544468634851439, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s272 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, -6209632553346483666, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, -6228684890836339374, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, -6259365663303883918, NULL };

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
void org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$Int$frost$core$String(org$frostlang$regex$RegexParser* param0, frost$io$File* param1, frost$core$Int param2, frost$core$String* param3) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:27
org$frostlang$regex$RegexLexer** $tmp13 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp14 = *$tmp13;
// begin inline call to method org.frostlang.regex.RegexLexer.start(source:frost.core.String) from RegexParser.frost:27:20
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:21
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:28
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$io$File** $tmp24 = &param0->path;
frost$io$File* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$io$File** $tmp26 = &param0->path;
*$tmp26 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:29
frost$core$Int* $tmp27 = &param0->pathIndex;
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
frost$core$Int $tmp33 = (frost$core$Int) {0u};
frost$core$Int* $tmp34 = &$tmp32->_count;
*$tmp34 = $tmp33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:35
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:36
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:37
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp122 = &$tmp102->data;
org$frostlang$regex$RegexToken* $tmp123 = *$tmp122;
frost$core$Int64 $tmp124 = frost$core$Int64$init$frost$core$Int($tmp103);
int64_t $tmp125 = $tmp124.value;
org$frostlang$regex$RegexToken $tmp126 = $tmp123[$tmp125];
*(&local1) = $tmp126;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:38
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp127 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp128 = *$tmp127;
frost$core$Int $tmp129 = *(&local0);
org$frostlang$regex$RegexToken $tmp130 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken($tmp128, $tmp129);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:39
org$frostlang$regex$RegexToken $tmp131 = *(&local1);
return $tmp131;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:41
org$frostlang$regex$RegexLexer** $tmp132 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp133 = *$tmp132;
// begin inline call to method org.frostlang.regex.RegexLexer.next():org.frostlang.regex.RegexToken from RegexParser.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:384
org$frostlang$plex$runtime$DFA** $tmp134 = &$tmp133->dfa;
org$frostlang$plex$runtime$DFA* $tmp135 = *$tmp134;
org$frostlang$plex$runtime$RawToken $tmp136 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken($tmp135);
*(&local2) = $tmp136;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:385
org$frostlang$plex$runtime$RawToken $tmp137 = *(&local2);
frost$core$Int $tmp138 = $tmp137.kind;
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:385:82
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:42
org$frostlang$regex$RegexToken $tmp154 = *(&local5);
return $tmp154;

}
void org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp155 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp156 = *$tmp155;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp156, param1);
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:50
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp164 = $tmp162.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp169 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp170 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp171 = *$tmp170;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp171, $tmp169);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:53
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp203 = &$tmp173->data;
org$frostlang$regex$RegexToken* $tmp204 = *$tmp203;
frost$core$Int64 $tmp205 = frost$core$Int64$init$frost$core$Int($tmp184);
int64_t $tmp206 = $tmp205.value;
org$frostlang$regex$RegexToken $tmp207 = $tmp204[$tmp206];
return $tmp207;

}
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1) {

org$frostlang$regex$RegexToken local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp208 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp208;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp218 = (frost$core$Bit) {true};
return $tmp218;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp219 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp220 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp221 = *$tmp220;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp221, $tmp219);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp222 = (frost$core$Bit) {false};
return $tmp222;

}
frost$core$Bit org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken$Kind param1, frost$core$String* param2) {

org$frostlang$regex$RegexToken local0;
frost$core$String* local1 = NULL;
frost$core$String$Index$nullable local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:66
org$frostlang$regex$RegexToken $tmp223 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp223;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:67
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:68
frost$core$Bit $tmp233 = (frost$core$Bit) {true};
return $tmp233;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:70
org$frostlang$regex$RegexToken $tmp234 = *(&local0);
frost$core$String* $tmp235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s236, param2);
frost$core$String* $tmp237 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp235, &$s238);
org$frostlang$regex$RegexToken $tmp239 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:70:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp250 = &param0->errors;
frost$threads$MessageQueue* $tmp251 = *$tmp250;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp252 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int $tmp253 = (frost$core$Int) {0u};
frost$io$File** $tmp254 = &param0->path;
frost$io$File* $tmp255 = *$tmp254;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp256 = &$tmp255->path;
frost$core$String* $tmp257 = *$tmp256;
frost$core$String$Index$nullable $tmp258 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp257, &$s259);
*(&local2) = $tmp258;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp260 = *(&local2);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260.nonnull};
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp263 = &$tmp255->path;
frost$core$String* $tmp264 = *$tmp263;
frost$core$String** $tmp265 = &$tmp255->path;
frost$core$String* $tmp266 = *$tmp265;
frost$core$String$Index$nullable $tmp267 = *(&local2);
frost$core$Bit $tmp268 = (frost$core$Bit) {$tmp267.nonnull};
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block9; else goto block10;
block10:;
frost$core$Int $tmp270 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s271, $tmp270, &$s272);
abort(); // unreachable
block9:;
frost$core$String$Index $tmp273 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp266, ((frost$core$String$Index) $tmp267.value));
frost$core$Bit $tmp274 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp275 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp273, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp274);
frost$core$String* $tmp276 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp264, $tmp275);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local1) = $tmp276;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
goto block5;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp277 = &$tmp255->path;
frost$core$String* $tmp278 = *$tmp277;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
*(&local1) = $tmp278;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
goto block5;
block7:;
goto block5;
block5:;
frost$core$String* $tmp279 = *(&local1);
org$frostlang$frostc$Position $tmp280 = $tmp234.position;
frost$core$Int $tmp281 = $tmp280.line;
org$frostlang$frostc$Position $tmp282 = $tmp234.position;
frost$core$Int $tmp283 = $tmp282.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String($tmp252, $tmp253, $tmp279, $tmp281, $tmp283, $tmp248);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp251, ((frost$core$Immutable*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$core$String* $tmp284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:71
frost$core$Bit $tmp285 = (frost$core$Bit) {false};
return $tmp285;

}
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1, frost$core$String* param2) {

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
frost$threads$MessageQueue** $tmp286 = &param0->errors;
frost$threads$MessageQueue* $tmp287 = *$tmp286;
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$Message));
org$frostlang$frostc$Compiler$Message* $tmp288 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
frost$core$Int $tmp289 = (frost$core$Int) {0u};
frost$io$File** $tmp290 = &param0->path;
frost$io$File* $tmp291 = *$tmp290;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp292 = &$tmp291->path;
frost$core$String* $tmp293 = *$tmp292;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:148:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp294 = frost$core$String$get_end$R$frost$core$String$Index($tmp293);
frost$core$String$Index$nullable $tmp295 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp293, &$s296, $tmp294);
*(&local1) = $tmp295;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp297 = *(&local1);
frost$core$Bit $tmp298 = (frost$core$Bit) {$tmp297.nonnull};
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp300 = &$tmp291->path;
frost$core$String* $tmp301 = *$tmp300;
frost$core$String** $tmp302 = &$tmp291->path;
frost$core$String* $tmp303 = *$tmp302;
frost$core$String$Index$nullable $tmp304 = *(&local1);
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304.nonnull};
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block6; else goto block7;
block7:;
frost$core$Int $tmp307 = (frost$core$Int) {150u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s308, $tmp307, &$s309);
abort(); // unreachable
block6:;
frost$core$String$Index $tmp310 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp303, ((frost$core$String$Index) $tmp304.value));
frost$core$Bit $tmp311 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp312 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp310, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp311);
frost$core$String* $tmp313 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp301, $tmp312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local0) = $tmp313;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp314 = &$tmp291->path;
frost$core$String* $tmp315 = *$tmp314;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local0) = $tmp315;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
goto block1;
block4:;
goto block1;
block1:;
frost$core$String* $tmp316 = *(&local0);
org$frostlang$frostc$Position $tmp317 = param1.position;
frost$core$Int $tmp318 = $tmp317.line;
org$frostlang$frostc$Position $tmp319 = param1.position;
frost$core$Int $tmp320 = $tmp319.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String($tmp288, $tmp289, $tmp316, $tmp318, $tmp320, param2);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T($tmp287, ((frost$core$Immutable*) $tmp288));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
frost$core$String* $tmp321 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local0) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
return;

}
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(org$frostlang$regex$RegexParser* param0, org$frostlang$regex$RegexToken param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp322 = &param0->source;
frost$core$String* $tmp323 = *$tmp322;
frost$core$String$Index $tmp324 = param1.start;
frost$core$String$Index $tmp325 = param1.end;
frost$core$Bit $tmp326 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp327 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp324, $tmp325, $tmp326);
frost$core$String* $tmp328 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp323, $tmp327);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
return $tmp328;

}
frost$core$Bit org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:87
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:88
org$frostlang$regex$RegexToken $tmp329 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp329;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:89
org$frostlang$regex$RegexToken $tmp330 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:89:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
frost$core$String** $tmp331 = &param0->source;
frost$core$String* $tmp332 = *$tmp331;
frost$core$String$Index $tmp333 = $tmp330.start;
frost$core$String$Index $tmp334 = $tmp330.end;
frost$core$Bit $tmp335 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp336 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp333, $tmp334, $tmp335);
frost$core$String* $tmp337 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp332, $tmp336);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$core$Bit $tmp338 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp337, &$s339);
bool $tmp340 = $tmp338.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
if ($tmp340) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:90
org$frostlang$regex$RegexToken $tmp341 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:90:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp342 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp343 = *$tmp342;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp343, $tmp341);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:91
frost$core$Bit $tmp344 = (frost$core$Bit) {true};
return $tmp344;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:93
org$frostlang$regex$RegexToken $tmp345 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp346 = $tmp345.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp347;
$tmp347 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp347->value = $tmp346;
frost$core$Int $tmp348 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:93:43
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp349 = &(&local2)->$rawValue;
*$tmp349 = $tmp348;
org$frostlang$regex$RegexToken$Kind $tmp350 = *(&local2);
*(&local1) = $tmp350;
org$frostlang$regex$RegexToken$Kind $tmp351 = *(&local1);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp352;
$tmp352 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp352->value = $tmp351;
ITable* $tmp353 = ((frost$core$Equatable*) $tmp347)->$class->itable;
while ($tmp353->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp353 = $tmp353->next;
}
$fn355 $tmp354 = $tmp353->methods[0];
frost$core$Bit $tmp356 = $tmp354(((frost$core$Equatable*) $tmp347), ((frost$core$Equatable*) $tmp352));
bool $tmp357 = $tmp356.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp352)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp347)));
if ($tmp357) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:94
frost$core$Bit $tmp358 = (frost$core$Bit) {false};
return $tmp358;
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
frost$core$Int $tmp359 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp360 = &(&local1)->$rawValue;
*$tmp360 = $tmp359;
org$frostlang$regex$RegexToken$Kind $tmp361 = *(&local1);
*(&local0) = $tmp361;
org$frostlang$regex$RegexToken$Kind $tmp362 = *(&local0);
frost$core$Bit $tmp363 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp362, &$s364);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp365 = $tmp363.value;
bool $tmp366 = !$tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp369 = (frost$core$Bit) {false};
return $tmp369;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block5;
block5:;
frost$core$Int $tmp370 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp371 = &(&local3)->$rawValue;
*$tmp371 = $tmp370;
org$frostlang$regex$RegexToken$Kind $tmp372 = *(&local3);
*(&local2) = $tmp372;
org$frostlang$regex$RegexToken$Kind $tmp373 = *(&local2);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp374 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local5) = $tmp374;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp375 = *(&local5);
org$frostlang$regex$RegexToken$Kind $tmp376 = $tmp375.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp377;
$tmp377 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp377->value = $tmp376;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp378;
$tmp378 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp378->value = $tmp373;
ITable* $tmp379 = ((frost$core$Equatable*) $tmp377)->$class->itable;
while ($tmp379->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp379 = $tmp379->next;
}
$fn381 $tmp380 = $tmp379->methods[0];
frost$core$Bit $tmp382 = $tmp380(((frost$core$Equatable*) $tmp377), ((frost$core$Equatable*) $tmp378));
bool $tmp383 = $tmp382.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp378)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp377)));
if ($tmp383) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp384 = (frost$core$Bit) {true};
*(&local4) = $tmp384;
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp385 = *(&local5);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp386 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp387 = *$tmp386;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp387, $tmp385);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp388 = (frost$core$Bit) {false};
*(&local4) = $tmp388;
goto block9;
block9:;
frost$core$Bit $tmp389 = *(&local4);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block6; else goto block7;
block6:;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp391 = (frost$core$Bit) {true};
return $tmp391;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
frost$core$Bit local3;
org$frostlang$regex$RegexToken local4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:115
org$frostlang$regex$RegexToken $tmp392 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp392;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:116
org$frostlang$regex$RegexToken $tmp393 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp394 = $tmp393.kind;
frost$core$Int $tmp395 = $tmp394.$rawValue;
frost$core$Int $tmp396 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:117:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 == $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block2; else goto block3;
block3:;
frost$core$Int $tmp402 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:117:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp403 = $tmp395.value;
int64_t $tmp404 = $tmp402.value;
bool $tmp405 = $tmp403 == $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:118
frost$core$Int $tmp408 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:118:42
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp409 = &(&local2)->$rawValue;
*$tmp409 = $tmp408;
org$frostlang$regex$RegexToken$Kind $tmp410 = *(&local2);
*(&local1) = $tmp410;
org$frostlang$regex$RegexToken$Kind $tmp411 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:118:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp412 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp412;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp413 = *(&local4);
org$frostlang$regex$RegexToken$Kind $tmp414 = $tmp413.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp415;
$tmp415 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp415->value = $tmp414;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp416;
$tmp416 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp416->value = $tmp411;
ITable* $tmp417 = ((frost$core$Equatable*) $tmp415)->$class->itable;
while ($tmp417->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp417 = $tmp417->next;
}
$fn419 $tmp418 = $tmp417->methods[0];
frost$core$Bit $tmp420 = $tmp418(((frost$core$Equatable*) $tmp415), ((frost$core$Equatable*) $tmp416));
bool $tmp421 = $tmp420.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp416)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp415)));
if ($tmp421) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp422 = (frost$core$Bit) {true};
*(&local3) = $tmp422;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp423 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp424 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp425 = *$tmp424;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp425, $tmp423);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp426 = (frost$core$Bit) {false};
*(&local3) = $tmp426;
goto block8;
block8:;
frost$core$Bit $tmp427 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:119
frost$core$Bit $tmp428 = (frost$core$Bit) {true};
return $tmp428;
block5:;
frost$core$Int $tmp429 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:121:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp430 = $tmp395.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 == $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:122
frost$core$Bit $tmp435 = (frost$core$Bit) {true};
return $tmp435;
block13:;
frost$core$Int $tmp436 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:124:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp437 = $tmp395.value;
int64_t $tmp438 = $tmp436.value;
bool $tmp439 = $tmp437 == $tmp438;
frost$core$Bit $tmp440 = (frost$core$Bit) {$tmp439};
bool $tmp441 = $tmp440.value;
if ($tmp441) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:125
// begin inline call to method org.frostlang.regex.RegexParser.peek():org.frostlang.regex.RegexToken from RegexParser.frost:125:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:50
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp442 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp443 = *$tmp442;
ITable* $tmp444 = ((frost$collections$CollectionView*) $tmp443)->$class->itable;
while ($tmp444->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp444 = $tmp444->next;
}
$fn446 $tmp445 = $tmp444->methods[0];
frost$core$Int $tmp447 = $tmp445(((frost$collections$CollectionView*) $tmp443));
frost$core$Int $tmp448 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448.value;
bool $tmp451 = $tmp449 == $tmp450;
frost$core$Bit $tmp452 = (frost$core$Bit) {$tmp451};
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:51
org$frostlang$regex$RegexToken $tmp454 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp455 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp456 = *$tmp455;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp456, $tmp454);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:53
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp457 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp458 = *$tmp457;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp459 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp460 = *$tmp459;
ITable* $tmp461 = ((frost$collections$CollectionView*) $tmp460)->$class->itable;
while ($tmp461->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[0];
frost$core$Int $tmp464 = $tmp462(((frost$collections$CollectionView*) $tmp460));
frost$core$Int $tmp465 = (frost$core$Int) {1u};
int64_t $tmp466 = $tmp464.value;
int64_t $tmp467 = $tmp465.value;
int64_t $tmp468 = $tmp466 - $tmp467;
frost$core$Int $tmp469 = (frost$core$Int) {$tmp468};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
frost$core$Int $tmp470 = (frost$core$Int) {0u};
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 >= $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block26; else goto block25;
block26:;
ITable* $tmp476 = ((frost$collections$CollectionView*) $tmp458)->$class->itable;
while ($tmp476->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp476 = $tmp476->next;
}
$fn478 $tmp477 = $tmp476->methods[0];
frost$core$Int $tmp479 = $tmp477(((frost$collections$CollectionView*) $tmp458));
int64_t $tmp480 = $tmp469.value;
int64_t $tmp481 = $tmp479.value;
bool $tmp482 = $tmp480 < $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block24; else goto block25;
block25:;
frost$core$Int $tmp485 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s486, $tmp485, &$s487);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
org$frostlang$regex$RegexToken** $tmp488 = &$tmp458->data;
org$frostlang$regex$RegexToken* $tmp489 = *$tmp488;
frost$core$Int64 $tmp490 = frost$core$Int64$init$frost$core$Int($tmp469);
int64_t $tmp491 = $tmp490.value;
org$frostlang$regex$RegexToken $tmp492 = $tmp489[$tmp491];
org$frostlang$regex$RegexToken$Kind $tmp493 = $tmp492.kind;
frost$core$Int $tmp494 = $tmp493.$rawValue;
frost$core$Int $tmp495 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:126:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495.value;
bool $tmp498 = $tmp496 == $tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block28; else goto block29;
block29:;
frost$core$Int $tmp501 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:126:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp502 = $tmp494.value;
int64_t $tmp503 = $tmp501.value;
bool $tmp504 = $tmp502 == $tmp503;
frost$core$Bit $tmp505 = (frost$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block28; else goto block31;
block31:;
frost$core$Int $tmp507 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:127:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp508 = $tmp494.value;
int64_t $tmp509 = $tmp507.value;
bool $tmp510 = $tmp508 == $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block28; else goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:128
org$frostlang$regex$RegexToken $tmp513 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:131
frost$core$Bit $tmp514 = (frost$core$Bit) {true};
return $tmp514;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:134
org$frostlang$regex$RegexToken $tmp515 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:134:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp516 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp517 = *$tmp516;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp517, $tmp515);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:135
frost$core$Bit $tmp518 = (frost$core$Bit) {false};
return $tmp518;
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
org$frostlang$regex$RegexToken $tmp519 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = $tmp519;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:146
org$frostlang$regex$RegexToken $tmp520 = *(&local0);
org$frostlang$regex$RegexToken$Kind $tmp521 = $tmp520.kind;
frost$core$Int $tmp522 = $tmp521.$rawValue;
frost$core$Int $tmp523 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523.value;
bool $tmp526 = $tmp524 == $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block2; else goto block3;
block3:;
frost$core$Int $tmp529 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp530 = $tmp522.value;
int64_t $tmp531 = $tmp529.value;
bool $tmp532 = $tmp530 == $tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {$tmp532};
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block2; else goto block5;
block5:;
frost$core$Int $tmp535 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp536 = $tmp522.value;
int64_t $tmp537 = $tmp535.value;
bool $tmp538 = $tmp536 == $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block2; else goto block7;
block7:;
frost$core$Int $tmp541 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp542 = $tmp522.value;
int64_t $tmp543 = $tmp541.value;
bool $tmp544 = $tmp542 == $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block2; else goto block9;
block9:;
frost$core$Int $tmp547 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp548 = $tmp522.value;
int64_t $tmp549 = $tmp547.value;
bool $tmp550 = $tmp548 == $tmp549;
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block2; else goto block11;
block11:;
frost$core$Int $tmp553 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp554 = $tmp522.value;
int64_t $tmp555 = $tmp553.value;
bool $tmp556 = $tmp554 == $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block2; else goto block13;
block13:;
frost$core$Int $tmp559 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:149:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp560 = $tmp522.value;
int64_t $tmp561 = $tmp559.value;
bool $tmp562 = $tmp560 == $tmp561;
frost$core$Bit $tmp563 = (frost$core$Bit) {$tmp562};
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block2; else goto block15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:150
frost$core$Bit $tmp565 = (frost$core$Bit) {true};
return $tmp565;
block15:;
frost$core$Int $tmp566 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:152:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp567 = $tmp522.value;
int64_t $tmp568 = $tmp566.value;
bool $tmp569 = $tmp567 == $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:153
frost$core$Int $tmp572 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:153:42
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp573 = &(&local2)->$rawValue;
*$tmp573 = $tmp572;
org$frostlang$regex$RegexToken$Kind $tmp574 = *(&local2);
*(&local1) = $tmp574;
org$frostlang$regex$RegexToken$Kind $tmp575 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:153:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp576 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = $tmp576;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp577 = *(&local4);
org$frostlang$regex$RegexToken$Kind $tmp578 = $tmp577.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp579;
$tmp579 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp579->value = $tmp578;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp580;
$tmp580 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp580->value = $tmp575;
ITable* $tmp581 = ((frost$core$Equatable*) $tmp579)->$class->itable;
while ($tmp581->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp581 = $tmp581->next;
}
$fn583 $tmp582 = $tmp581->methods[0];
frost$core$Bit $tmp584 = $tmp582(((frost$core$Equatable*) $tmp579), ((frost$core$Equatable*) $tmp580));
bool $tmp585 = $tmp584.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp580)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp579)));
if ($tmp585) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp586 = (frost$core$Bit) {true};
*(&local3) = $tmp586;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp587 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp588 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp589 = *$tmp588;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp589, $tmp587);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp590 = (frost$core$Bit) {false};
*(&local3) = $tmp590;
goto block21;
block21:;
frost$core$Bit $tmp591 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:154
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp592 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp593 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp592);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp595 = (frost$core$Bit) {false};
*(&local6) = $tmp595;
goto block30;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp596 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp597 = (frost$core$Bit) {true};
*(&local6) = $tmp597;
goto block30;
block30:;
frost$core$Bit $tmp598 = *(&local6);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp599 = $tmp598.value;
bool $tmp600 = !$tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp603 = (frost$core$Bit) {false};
*(&local5) = $tmp603;
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp604 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp605 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp604);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp607 = (frost$core$Bit) {false};
*(&local7) = $tmp607;
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp608 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp609 = (frost$core$Bit) {true};
*(&local7) = $tmp609;
goto block34;
block34:;
frost$core$Bit $tmp610 = *(&local7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp611 = (frost$core$Bit) {true};
*(&local5) = $tmp611;
goto block27;
block27:;
frost$core$Bit $tmp612 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:154:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp613 = $tmp612.value;
bool $tmp614 = !$tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:155
frost$core$Bit $tmp617 = (frost$core$Bit) {false};
return $tmp617;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:157
frost$core$Int $tmp618 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:157:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp619 = &(&local9)->$rawValue;
*$tmp619 = $tmp618;
org$frostlang$regex$RegexToken$Kind $tmp620 = *(&local9);
*(&local8) = $tmp620;
org$frostlang$regex$RegexToken$Kind $tmp621 = *(&local8);
frost$core$Bit $tmp622 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp621, &$s623);
return $tmp622;
block18:;
frost$core$Int $tmp624 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:159:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp625 = $tmp522.value;
int64_t $tmp626 = $tmp624.value;
bool $tmp627 = $tmp625 == $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:160
frost$core$Bit $tmp630 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:160:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp631 = $tmp630.value;
bool $tmp632 = !$tmp631;
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:161
frost$core$Bit $tmp635 = (frost$core$Bit) {false};
return $tmp635;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:163
frost$core$Int $tmp636 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:163:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp637 = &(&local11)->$rawValue;
*$tmp637 = $tmp636;
org$frostlang$regex$RegexToken$Kind $tmp638 = *(&local11);
*(&local10) = $tmp638;
org$frostlang$regex$RegexToken$Kind $tmp639 = *(&local10);
frost$core$Bit $tmp640 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp639, &$s641);
return $tmp640;
block40:;
frost$core$Int $tmp642 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:165:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp643 = $tmp522.value;
int64_t $tmp644 = $tmp642.value;
bool $tmp645 = $tmp643 == $tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:166
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:166:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int $tmp648 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp649 = &(&local14)->$rawValue;
*$tmp649 = $tmp648;
org$frostlang$regex$RegexToken$Kind $tmp650 = *(&local14);
*(&local13) = $tmp650;
org$frostlang$regex$RegexToken$Kind $tmp651 = *(&local13);
frost$core$Bit $tmp652 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp651, &$s653);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp654 = $tmp652.value;
bool $tmp655 = !$tmp654;
frost$core$Bit $tmp656 = (frost$core$Bit) {$tmp655};
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp658 = (frost$core$Bit) {false};
*(&local12) = $tmp658;
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block56;
block56:;
frost$core$Int $tmp659 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp660 = &(&local16)->$rawValue;
*$tmp660 = $tmp659;
org$frostlang$regex$RegexToken$Kind $tmp661 = *(&local16);
*(&local15) = $tmp661;
org$frostlang$regex$RegexToken$Kind $tmp662 = *(&local15);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp663 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local18) = $tmp663;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp664 = *(&local18);
org$frostlang$regex$RegexToken$Kind $tmp665 = $tmp664.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp666;
$tmp666 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp666->value = $tmp665;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp667;
$tmp667 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp667->value = $tmp662;
ITable* $tmp668 = ((frost$core$Equatable*) $tmp666)->$class->itable;
while ($tmp668->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp668 = $tmp668->next;
}
$fn670 $tmp669 = $tmp668->methods[0];
frost$core$Bit $tmp671 = $tmp669(((frost$core$Equatable*) $tmp666), ((frost$core$Equatable*) $tmp667));
bool $tmp672 = $tmp671.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp667)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp666)));
if ($tmp672) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp673 = (frost$core$Bit) {true};
*(&local17) = $tmp673;
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp674 = *(&local18);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp674);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp675 = (frost$core$Bit) {false};
*(&local17) = $tmp675;
goto block60;
block60:;
frost$core$Bit $tmp676 = *(&local17);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block57; else goto block58;
block57:;
goto block56;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp678 = (frost$core$Bit) {true};
*(&local12) = $tmp678;
goto block51;
block51:;
frost$core$Bit $tmp679 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:166:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp680 = $tmp679.value;
bool $tmp681 = !$tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:167
frost$core$Bit $tmp684 = (frost$core$Bit) {false};
return $tmp684;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:169
frost$core$Int $tmp685 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:169:45
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp686 = &(&local20)->$rawValue;
*$tmp686 = $tmp685;
org$frostlang$regex$RegexToken$Kind $tmp687 = *(&local20);
*(&local19) = $tmp687;
org$frostlang$regex$RegexToken$Kind $tmp688 = *(&local19);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:169:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp689 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local22) = $tmp689;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp690 = *(&local22);
org$frostlang$regex$RegexToken$Kind $tmp691 = $tmp690.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp692;
$tmp692 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp692->value = $tmp691;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp693;
$tmp693 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp693->value = $tmp688;
ITable* $tmp694 = ((frost$core$Equatable*) $tmp692)->$class->itable;
while ($tmp694->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp694 = $tmp694->next;
}
$fn696 $tmp695 = $tmp694->methods[0];
frost$core$Bit $tmp697 = $tmp695(((frost$core$Equatable*) $tmp692), ((frost$core$Equatable*) $tmp693));
bool $tmp698 = $tmp697.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp693)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp692)));
if ($tmp698) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp699 = (frost$core$Bit) {true};
*(&local21) = $tmp699;
goto block67;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp700 = *(&local22);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp701 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp702 = *$tmp701;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp702, $tmp700);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp703 = (frost$core$Bit) {false};
*(&local21) = $tmp703;
goto block67;
block67:;
frost$core$Bit $tmp704 = *(&local21);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:170
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:170:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
frost$core$Int $tmp706 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp707 = &(&local25)->$rawValue;
*$tmp707 = $tmp706;
org$frostlang$regex$RegexToken$Kind $tmp708 = *(&local25);
*(&local24) = $tmp708;
org$frostlang$regex$RegexToken$Kind $tmp709 = *(&local24);
frost$core$Bit $tmp710 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp709, &$s711);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp712 = $tmp710.value;
bool $tmp713 = !$tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
frost$core$Bit $tmp716 = (frost$core$Bit) {false};
*(&local23) = $tmp716;
goto block71;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block76;
block76:;
frost$core$Int $tmp717 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp718 = &(&local27)->$rawValue;
*$tmp718 = $tmp717;
org$frostlang$regex$RegexToken$Kind $tmp719 = *(&local27);
*(&local26) = $tmp719;
org$frostlang$regex$RegexToken$Kind $tmp720 = *(&local26);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
org$frostlang$regex$RegexToken $tmp721 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local29) = $tmp721;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
org$frostlang$regex$RegexToken $tmp722 = *(&local29);
org$frostlang$regex$RegexToken$Kind $tmp723 = $tmp722.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp724;
$tmp724 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp724->value = $tmp723;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp725;
$tmp725 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp725->value = $tmp720;
ITable* $tmp726 = ((frost$core$Equatable*) $tmp724)->$class->itable;
while ($tmp726->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp726 = $tmp726->next;
}
$fn728 $tmp727 = $tmp726->methods[0];
frost$core$Bit $tmp729 = $tmp727(((frost$core$Equatable*) $tmp724), ((frost$core$Equatable*) $tmp725));
bool $tmp730 = $tmp729.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp725)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp724)));
if ($tmp730) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
frost$core$Bit $tmp731 = (frost$core$Bit) {true};
*(&local28) = $tmp731;
goto block80;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
org$frostlang$regex$RegexToken $tmp732 = *(&local29);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, $tmp732);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
frost$core$Bit $tmp733 = (frost$core$Bit) {false};
*(&local28) = $tmp733;
goto block80;
block80:;
frost$core$Bit $tmp734 = *(&local28);
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block77; else goto block78;
block77:;
goto block76;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
frost$core$Bit $tmp736 = (frost$core$Bit) {true};
*(&local23) = $tmp736;
goto block71;
block71:;
frost$core$Bit $tmp737 = *(&local23);
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:172
frost$core$Int $tmp738 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:172:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
frost$core$Int* $tmp739 = &(&local31)->$rawValue;
*$tmp739 = $tmp738;
org$frostlang$regex$RegexToken$Kind $tmp740 = *(&local31);
*(&local30) = $tmp740;
org$frostlang$regex$RegexToken$Kind $tmp741 = *(&local30);
frost$core$Bit $tmp742 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, $tmp741, &$s743);
return $tmp742;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:175
org$frostlang$regex$RegexToken $tmp744 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:175:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp745 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp746 = *$tmp745;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken($tmp746, $tmp744);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:176
frost$core$Bit $tmp747 = (frost$core$Bit) {false};
return $tmp747;
block1:;
goto block85;
block85:;

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp748 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp749 = $tmp748.value;
bool $tmp750 = !$tmp749;
frost$core$Bit $tmp751 = (frost$core$Bit) {$tmp750};
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp753 = (frost$core$Bit) {false};
return $tmp753;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp754 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp755 = (frost$core$Bit) {true};
return $tmp755;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(org$frostlang$regex$RegexParser* param0) {

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp756 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp757 = $tmp756.value;
bool $tmp758 = !$tmp757;
frost$core$Bit $tmp759 = (frost$core$Bit) {$tmp758};
bool $tmp760 = $tmp759.value;
if ($tmp760) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp761 = (frost$core$Bit) {false};
*(&local0) = $tmp761;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp762 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp763 = (frost$core$Bit) {true};
*(&local0) = $tmp763;
goto block3;
block3:;
frost$core$Bit $tmp764 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp765 = $tmp764.value;
bool $tmp766 = !$tmp765;
frost$core$Bit $tmp767 = (frost$core$Bit) {$tmp766};
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp769 = (frost$core$Bit) {false};
return $tmp769;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
frost$core$Bit $tmp770 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp771 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp770);
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp773 = (frost$core$Bit) {false};
*(&local2) = $tmp773;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp774 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp775 = (frost$core$Bit) {true};
*(&local2) = $tmp775;
goto block11;
block11:;
frost$core$Bit $tmp776 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp777 = $tmp776.value;
bool $tmp778 = !$tmp777;
frost$core$Bit $tmp779 = (frost$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp781 = (frost$core$Bit) {false};
*(&local1) = $tmp781;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp782 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp783 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp782);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp785 = (frost$core$Bit) {false};
*(&local3) = $tmp785;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp786 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp787 = (frost$core$Bit) {true};
*(&local3) = $tmp787;
goto block15;
block15:;
frost$core$Bit $tmp788 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp789 = (frost$core$Bit) {true};
*(&local1) = $tmp789;
goto block8;
block8:;
frost$core$Bit $tmp790 = *(&local1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp791 = (frost$core$Bit) {true};
return $tmp791;

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
frost$core$Bit $tmp792 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
frost$core$Bit $tmp793 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp792);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
frost$core$Bit $tmp795 = (frost$core$Bit) {false};
*(&local1) = $tmp795;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
frost$core$Bit $tmp796 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
frost$core$Bit $tmp797 = (frost$core$Bit) {true};
*(&local1) = $tmp797;
goto block6;
block6:;
frost$core$Bit $tmp798 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp799 = $tmp798.value;
bool $tmp800 = !$tmp799;
frost$core$Bit $tmp801 = (frost$core$Bit) {$tmp800};
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp803 = (frost$core$Bit) {false};
*(&local0) = $tmp803;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp804 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp805 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp804);
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp807 = (frost$core$Bit) {false};
*(&local2) = $tmp807;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp808 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp809 = (frost$core$Bit) {true};
*(&local2) = $tmp809;
goto block10;
block10:;
frost$core$Bit $tmp810 = *(&local2);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp811 = (frost$core$Bit) {true};
*(&local0) = $tmp811;
goto block3;
block3:;
frost$core$Bit $tmp812 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp813 = $tmp812.value;
bool $tmp814 = !$tmp813;
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp817 = (frost$core$Bit) {false};
return $tmp817;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp818 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp819 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp818);
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp821 = (frost$core$Bit) {false};
*(&local4) = $tmp821;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp822 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp823 = (frost$core$Bit) {true};
*(&local4) = $tmp823;
goto block17;
block17:;
frost$core$Bit $tmp824 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp825 = $tmp824.value;
bool $tmp826 = !$tmp825;
frost$core$Bit $tmp827 = (frost$core$Bit) {$tmp826};
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp829 = (frost$core$Bit) {false};
*(&local3) = $tmp829;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp830 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp831 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp830);
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp833 = (frost$core$Bit) {false};
*(&local5) = $tmp833;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp834 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp835 = (frost$core$Bit) {true};
*(&local5) = $tmp835;
goto block21;
block21:;
frost$core$Bit $tmp836 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp837 = (frost$core$Bit) {true};
*(&local3) = $tmp837;
goto block14;
block14:;
frost$core$Bit $tmp838 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp839 = (frost$core$Bit) {true};
return $tmp839;

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:218
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp840 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp841 = *$tmp840;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:218:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:133
frost$core$Int $tmp842 = (frost$core$Int) {0u};
frost$core$Int* $tmp843 = &$tmp841->_count;
*$tmp843 = $tmp842;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
frost$core$Int $tmp844 = (frost$core$Int) {0u};
frost$core$Int* $tmp845 = &$tmp841->capacity;
frost$core$Int $tmp846 = *$tmp845;
frost$core$Bit $tmp847 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp848 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp844, $tmp846, $tmp847);
frost$core$Int $tmp849 = $tmp848.min;
*(&local0) = $tmp849;
frost$core$Int $tmp850 = $tmp848.max;
frost$core$Bit $tmp851 = $tmp848.inclusive;
bool $tmp852 = $tmp851.value;
frost$core$Int $tmp853 = (frost$core$Int) {1u};
if ($tmp852) goto block5; else goto block6;
block5:;
int64_t $tmp854 = $tmp849.value;
int64_t $tmp855 = $tmp850.value;
bool $tmp856 = $tmp854 <= $tmp855;
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block2; else goto block3;
block6:;
int64_t $tmp859 = $tmp849.value;
int64_t $tmp860 = $tmp850.value;
bool $tmp861 = $tmp859 < $tmp860;
frost$core$Bit $tmp862 = (frost$core$Bit) {$tmp861};
bool $tmp863 = $tmp862.value;
if ($tmp863) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
org$frostlang$regex$RegexToken** $tmp864 = &$tmp841->data;
org$frostlang$regex$RegexToken* $tmp865 = *$tmp864;
frost$core$Int $tmp866 = *(&local0);
frost$core$Int64 $tmp867 = frost$core$Int64$init$frost$core$Int($tmp866);
frost$core$Int $tmp868 = *(&local0);
int64_t $tmp869 = $tmp850.value;
int64_t $tmp870 = $tmp868.value;
int64_t $tmp871 = $tmp869 - $tmp870;
frost$core$Int $tmp872 = (frost$core$Int) {$tmp871};
if ($tmp852) goto block8; else goto block9;
block8:;
int64_t $tmp873 = $tmp872.value;
int64_t $tmp874 = $tmp853.value;
bool $tmp875 = $tmp873 >= $tmp874;
frost$core$Bit $tmp876 = (frost$core$Bit) {$tmp875};
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block7; else goto block3;
block9:;
int64_t $tmp878 = $tmp872.value;
int64_t $tmp879 = $tmp853.value;
bool $tmp880 = $tmp878 > $tmp879;
frost$core$Bit $tmp881 = (frost$core$Bit) {$tmp880};
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block7; else goto block3;
block7:;
int64_t $tmp883 = $tmp868.value;
int64_t $tmp884 = $tmp853.value;
int64_t $tmp885 = $tmp883 + $tmp884;
frost$core$Int $tmp886 = (frost$core$Int) {$tmp885};
*(&local0) = $tmp886;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:219
frost$core$Int* $tmp887 = &param0->pathIndex;
frost$core$Int $tmp888 = *$tmp887;
org$frostlang$regex$RegexLexer** $tmp889 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp890 = *$tmp889;
org$frostlang$plex$runtime$DFA** $tmp891 = &$tmp890->dfa;
org$frostlang$plex$runtime$DFA* $tmp892 = *$tmp891;
frost$core$Int* $tmp893 = &$tmp892->line;
frost$core$Int $tmp894 = *$tmp893;
org$frostlang$regex$RegexLexer** $tmp895 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp896 = *$tmp895;
org$frostlang$plex$runtime$DFA** $tmp897 = &$tmp896->dfa;
org$frostlang$plex$runtime$DFA* $tmp898 = *$tmp897;
frost$core$Int* $tmp899 = &$tmp898->column;
frost$core$Int $tmp900 = *$tmp899;
org$frostlang$frostc$Position $tmp901 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int($tmp888, $tmp894, $tmp900);
*(&local1) = $tmp901;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:220
org$frostlang$regex$RegexLexer** $tmp902 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp903 = *$tmp902;
org$frostlang$plex$runtime$DFA** $tmp904 = &$tmp903->dfa;
org$frostlang$plex$runtime$DFA* $tmp905 = *$tmp904;
frost$core$Int* $tmp906 = &$tmp905->offset;
frost$core$Int $tmp907 = *$tmp906;
*(&local2) = $tmp907;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:221
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:221:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
frost$core$Bit $tmp908 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
frost$core$Bit $tmp909 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp908);
bool $tmp910 = $tmp909.value;
if ($tmp910) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
frost$core$Bit $tmp911 = (frost$core$Bit) {false};
*(&local4) = $tmp911;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
frost$core$Bit $tmp912 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
frost$core$Bit $tmp913 = (frost$core$Bit) {true};
*(&local4) = $tmp913;
goto block15;
block15:;
frost$core$Bit $tmp914 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp915 = $tmp914.value;
bool $tmp916 = !$tmp915;
frost$core$Bit $tmp917 = (frost$core$Bit) {$tmp916};
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp919 = (frost$core$Bit) {false};
*(&local3) = $tmp919;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
frost$core$Bit $tmp920 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
frost$core$Bit $tmp921 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp920);
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
frost$core$Bit $tmp923 = (frost$core$Bit) {false};
*(&local5) = $tmp923;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
frost$core$Bit $tmp924 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp925 = (frost$core$Bit) {true};
*(&local5) = $tmp925;
goto block19;
block19:;
frost$core$Bit $tmp926 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
frost$core$Bit $tmp927 = (frost$core$Bit) {true};
*(&local3) = $tmp927;
goto block12;
block12:;
frost$core$Bit $tmp928 = *(&local3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:221:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp929 = $tmp928.value;
bool $tmp930 = !$tmp929;
frost$core$Bit $tmp931 = (frost$core$Bit) {$tmp930};
bool $tmp932 = $tmp931.value;
if ($tmp932) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:222
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL)));
return ((org$frostlang$frostc$ASTNode*) NULL);
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:224
org$frostlang$regex$RegexLexer** $tmp933 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp934 = *$tmp933;
org$frostlang$plex$runtime$DFA** $tmp935 = &$tmp934->dfa;
org$frostlang$plex$runtime$DFA* $tmp936 = *$tmp935;
frost$core$Int* $tmp937 = &$tmp936->offset;
frost$core$Int $tmp938 = *$tmp937;
frost$core$Int $tmp939 = (frost$core$Int) {1u};
int64_t $tmp940 = $tmp938.value;
int64_t $tmp941 = $tmp939.value;
int64_t $tmp942 = $tmp940 - $tmp941;
frost$core$Int $tmp943 = (frost$core$Int) {$tmp942};
frost$core$Int* $tmp944 = &$tmp936->offset;
*$tmp944 = $tmp943;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:225
org$frostlang$regex$RegexLexer** $tmp945 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp946 = *$tmp945;
org$frostlang$plex$runtime$DFA** $tmp947 = &$tmp946->dfa;
org$frostlang$plex$runtime$DFA* $tmp948 = *$tmp947;
frost$core$Int* $tmp949 = &$tmp948->offset;
frost$core$Int $tmp950 = *$tmp949;
*(&local6) = $tmp950;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:226
frost$core$Int $tmp951 = *(&local6);
frost$core$Int $tmp952 = *(&local2);
int64_t $tmp953 = $tmp951.value;
int64_t $tmp954 = $tmp952.value;
int64_t $tmp955 = $tmp953 - $tmp954;
frost$core$Int $tmp956 = (frost$core$Int) {$tmp955};
*(&local7) = $tmp956;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:227
frost$core$Int $tmp957 = *(&local7);
frost$core$Int64 $tmp958 = frost$core$Int64$init$frost$core$Int($tmp957);
int64_t $tmp959 = $tmp958.value;
frost$core$Char8* $tmp960 = ((frost$core$Char8*) frostAlloc($tmp959 * 1));
*(&local8) = $tmp960;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:228
frost$core$Int $tmp961 = *(&local2);
frost$core$Int $tmp962 = *(&local6);
frost$core$Bit $tmp963 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp964 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp961, $tmp962, $tmp963);
frost$core$Int $tmp965 = $tmp964.min;
*(&local9) = $tmp965;
frost$core$Int $tmp966 = $tmp964.max;
frost$core$Bit $tmp967 = $tmp964.inclusive;
bool $tmp968 = $tmp967.value;
frost$core$Int $tmp969 = (frost$core$Int) {1u};
if ($tmp968) goto block26; else goto block27;
block26:;
int64_t $tmp970 = $tmp965.value;
int64_t $tmp971 = $tmp966.value;
bool $tmp972 = $tmp970 <= $tmp971;
frost$core$Bit $tmp973 = (frost$core$Bit) {$tmp972};
bool $tmp974 = $tmp973.value;
if ($tmp974) goto block23; else goto block24;
block27:;
int64_t $tmp975 = $tmp965.value;
int64_t $tmp976 = $tmp966.value;
bool $tmp977 = $tmp975 < $tmp976;
frost$core$Bit $tmp978 = (frost$core$Bit) {$tmp977};
bool $tmp979 = $tmp978.value;
if ($tmp979) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:229
frost$core$Char8* $tmp980 = *(&local8);
frost$core$Int $tmp981 = *(&local9);
frost$core$Int $tmp982 = *(&local2);
int64_t $tmp983 = $tmp981.value;
int64_t $tmp984 = $tmp982.value;
int64_t $tmp985 = $tmp983 - $tmp984;
frost$core$Int $tmp986 = (frost$core$Int) {$tmp985};
frost$core$Int64 $tmp987 = frost$core$Int64$init$frost$core$Int($tmp986);
org$frostlang$regex$RegexLexer** $tmp988 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp989 = *$tmp988;
org$frostlang$plex$runtime$DFA** $tmp990 = &$tmp989->dfa;
org$frostlang$plex$runtime$DFA* $tmp991 = *$tmp990;
frost$core$Char8** $tmp992 = &$tmp991->source;
frost$core$Char8* $tmp993 = *$tmp992;
frost$core$Int $tmp994 = *(&local9);
frost$core$Int64 $tmp995 = frost$core$Int64$init$frost$core$Int($tmp994);
int64_t $tmp996 = $tmp995.value;
frost$core$Char8 $tmp997 = $tmp993[$tmp996];
int64_t $tmp998 = $tmp987.value;
$tmp980[$tmp998] = $tmp997;
frost$core$Int $tmp999 = *(&local9);
int64_t $tmp1000 = $tmp966.value;
int64_t $tmp1001 = $tmp999.value;
int64_t $tmp1002 = $tmp1000 - $tmp1001;
frost$core$Int $tmp1003 = (frost$core$Int) {$tmp1002};
if ($tmp968) goto block29; else goto block30;
block29:;
int64_t $tmp1004 = $tmp1003.value;
int64_t $tmp1005 = $tmp969.value;
bool $tmp1006 = $tmp1004 >= $tmp1005;
frost$core$Bit $tmp1007 = (frost$core$Bit) {$tmp1006};
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block28; else goto block24;
block30:;
int64_t $tmp1009 = $tmp1003.value;
int64_t $tmp1010 = $tmp969.value;
bool $tmp1011 = $tmp1009 > $tmp1010;
frost$core$Bit $tmp1012 = (frost$core$Bit) {$tmp1011};
bool $tmp1013 = $tmp1012.value;
if ($tmp1013) goto block28; else goto block24;
block28:;
int64_t $tmp1014 = $tmp999.value;
int64_t $tmp1015 = $tmp969.value;
int64_t $tmp1016 = $tmp1014 + $tmp1015;
frost$core$Int $tmp1017 = (frost$core$Int) {$tmp1016};
*(&local9) = $tmp1017;
goto block23;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:231
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp1018 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int $tmp1019 = (frost$core$Int) {37u};
org$frostlang$frostc$Position $tmp1020 = *(&local1);
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1021 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp1022 = *(&local8);
frost$core$Int $tmp1023 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp1021, $tmp1022, $tmp1023);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String($tmp1018, $tmp1019, $tmp1020, $tmp1021);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
return $tmp1018;

}
void org$frostlang$regex$RegexParser$cleanup(org$frostlang$regex$RegexParser* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$regex$RegexLexer** $tmp1024 = &param0->lexer;
org$frostlang$regex$RegexLexer* $tmp1025 = *$tmp1024;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1025));
frost$threads$MessageQueue** $tmp1026 = &param0->errors;
frost$threads$MessageQueue* $tmp1027 = *$tmp1026;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1027));
frost$io$File** $tmp1028 = &param0->path;
frost$io$File* $tmp1029 = *$tmp1028;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1029));
frost$core$String** $tmp1030 = &param0->source;
frost$core$String* $tmp1031 = *$tmp1030;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** $tmp1032 = &param0->pushbackBuffer;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* $tmp1033 = *$tmp1032;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1033));
return;

}

