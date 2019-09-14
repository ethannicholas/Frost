#include "org/frostlang/regex/RegexParser.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/regex/RegexLexer.h"
#include "frost/collections/SpecializedArray.LTorg/frostlang/regex/RegexToken.GT.h"
#include "frost/core/Frost.h"
#include "frost/io/File.h"
#include "frost/core/Int.h"
#include "org/frostlang/plex/runtime/DFA.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/regex/RegexToken.h"
#include "org/frostlang/plex/runtime/RawToken.h"
#include "org/frostlang/regex/RegexToken/Kind.h"
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

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn22)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn26)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn39)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn44)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn50)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn51)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn52)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn61)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn62)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn64)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn82)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -6942695123981101410, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x63\x6c\x65\x61\x72\x28\x29", 107, -5019524807047093654, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, -2601544468634851439, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x29\x27", 3, -6209632553346483666, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x5d\x27", 3, -6228684890836339374, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x7d\x27", 3, -6259365663303883918, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x63\x6c\x65\x61\x72\x28\x29", 107, -5019524807047093654, NULL };

void org$frostlang$regex$RegexParser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT(void* rawSelf, frost$threads$MessageQueue* param1) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

org$frostlang$regex$RegexLexer* _1;
frost$core$Object* _3;
org$frostlang$regex$RegexLexer** _5;
org$frostlang$regex$RegexLexer* _6;
frost$core$Object* _7;
org$frostlang$regex$RegexLexer** _9;
frost$core$Object* _11;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _14;
frost$core$Object* _16;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _18;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _19;
frost$core$Object* _20;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _22;
frost$core$Object* _24;
frost$core$Object* _27;
frost$threads$MessageQueue** _29;
frost$threads$MessageQueue* _30;
frost$core$Object* _31;
frost$threads$MessageQueue** _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:10
_1 = (org$frostlang$regex$RegexLexer*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexLexer), (frost$core$Class*) &org$frostlang$regex$RegexLexer$class);
org$frostlang$regex$RegexLexer$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->lexer;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->lexer;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:20
_14 = (frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT*) frostObjectAlloc(sizeof(frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT), (frost$core$Class*) &frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$class);
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$init(_14);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = &param0->pushbackBuffer;
_19 = *_18;
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_22 = &param0->pushbackBuffer;
*_22 = _14;
_24 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:23
_27 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = &param0->errors;
_30 = *_29;
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = &param0->errors;
*_33 = param1;
return;

}
void org$frostlang$regex$RegexParser$start$frost$io$File$frost$core$Int$frost$core$String(void* rawSelf, frost$io$File* param1, frost$core$Int param2, frost$core$String* param3) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$Int local0;
org$frostlang$regex$RegexLexer** _1;
org$frostlang$regex$RegexLexer* _2;
org$frostlang$plex$runtime$DFA* _5;
frost$core$Int _6;
frost$core$Int*** _7;
frost$core$Int** _8;
frost$core$Int** _9;
frost$core$Int* _10;
frost$core$Object* _12;
org$frostlang$plex$runtime$DFA** _14;
org$frostlang$plex$runtime$DFA* _15;
frost$core$Object* _16;
org$frostlang$plex$runtime$DFA** _18;
frost$core$Object* _20;
frost$core$Object* _24;
frost$io$File** _26;
frost$io$File* _27;
frost$core$Object* _28;
frost$io$File** _30;
frost$core$Int* _33;
frost$core$Object* _36;
frost$core$String** _38;
frost$core$String* _39;
frost$core$Object* _40;
frost$core$String** _42;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _45;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _46;
frost$core$Int _66;
frost$core$Int* _67;
frost$core$Int _70;
frost$core$Int* _71;
frost$core$Int _72;
frost$core$Bit _73;
frost$core$Range$LTfrost$core$Int$GT _74;
frost$core$Int _75;
frost$core$Int _77;
frost$core$Bit _78;
bool _79;
frost$core$Int _80;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
org$frostlang$regex$RegexToken** _95;
org$frostlang$regex$RegexToken* _96;
frost$core$Int _97;
frost$core$Int64 _98;
frost$core$Int _100;
int64_t _101;
int64_t _102;
int64_t _103;
frost$core$Int _104;
int64_t _106;
int64_t _107;
bool _108;
frost$core$Bit _109;
bool _110;
int64_t _112;
int64_t _113;
bool _114;
frost$core$Bit _115;
bool _116;
int64_t _118;
int64_t _119;
int64_t _120;
frost$core$Int _121;
frost$collections$CollectionView* _48;
$fn2 _49;
frost$core$Int _50;
frost$core$Int _51;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _62;
frost$core$Int _59;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:27
_1 = &param0->lexer;
_2 = *_1;
// begin inline call to method org.frostlang.regex.RegexLexer.start(source:frost.core.String) from RegexParser.frost:27:20
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:21
_5 = (org$frostlang$plex$runtime$DFA*) frostObjectAlloc(sizeof(org$frostlang$plex$runtime$DFA), (frost$core$Class*) &org$frostlang$plex$runtime$DFA$class);
_6 = (frost$core$Int) {20u};
_7 = &_2->transitions;
_8 = *_7;
_9 = &_2->accepts;
_10 = *_9;
org$frostlang$plex$runtime$DFA$init$frost$core$String$frost$core$Int$frost$unsafe$Pointer$LTfrost$unsafe$Pointer$LTfrost$core$Int$GT$GT$frost$unsafe$Pointer$LTfrost$core$Int$GT(_5, param3, _6, _8, _10);
_12 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_2->dfa;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_2->dfa;
*_18 = _5;
_20 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_20);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:28
_24 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = &param0->path;
_27 = *_26;
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = &param0->path;
*_30 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:29
_33 = &param0->pathIndex;
*_33 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:30
_36 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = &param0->source;
_39 = *_38;
_40 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = &param0->source;
*_42 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:31
_45 = &param0->pushbackBuffer;
_46 = *_45;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:31:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:133
_66 = (frost$core$Int) {0u};
_67 = &_46->_count;
*_67 = _66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
_70 = (frost$core$Int) {0u};
_71 = &_46->capacity;
_72 = *_71;
_73 = (frost$core$Bit) {false};
_74 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_70, _72, _73);
_75 = _74.min;
*(&local0) = _75;
_77 = _74.max;
_78 = _74.inclusive;
_79 = _78.value;
_80 = (frost$core$Int) {1u};
if (_79) goto block10; else goto block11;
block10:;
_82 = _75.value;
_83 = _77.value;
_84 = _82 <= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block7; else goto block8;
block11:;
_88 = _75.value;
_89 = _77.value;
_90 = _88 < _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
_95 = &_46->data;
_96 = *_95;
_97 = *(&local0);
_98 = frost$core$Int64$init$frost$core$Int(_97);
_100 = *(&local0);
_101 = _77.value;
_102 = _100.value;
_103 = _101 - _102;
_104 = (frost$core$Int) {_103};
if (_79) goto block13; else goto block14;
block13:;
_106 = _104.value;
_107 = _80.value;
_108 = _106 >= _107;
_109 = (frost$core$Bit) {_108};
_110 = _109.value;
if (_110) goto block12; else goto block8;
block14:;
_112 = _104.value;
_113 = _80.value;
_114 = _112 > _113;
_115 = (frost$core$Bit) {_114};
_116 = _115.value;
if (_116) goto block12; else goto block8;
block12:;
_118 = _100.value;
_119 = _80.value;
_120 = _118 + _119;
_121 = (frost$core$Int) {_120};
*(&local0) = _121;
goto block7;
block8:;
_48 = ((frost$collections$CollectionView*) _46);
ITable* $tmp3 = _48->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_49 = $tmp3->methods[0];
_50 = _49(_48);
_51 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_54 = _50.value;
_55 = _51.value;
_56 = _54 == _55;
_57 = (frost$core$Bit) {_56};
_62 = _57.value;
if (_62) goto block5; else goto block6;
block5:;
return;
block6:;
_59 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _59, &$s5);
abort(); // unreachable

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$Int local0;
org$frostlang$regex$RegexToken local1;
org$frostlang$plex$runtime$RawToken local2;
org$frostlang$regex$RegexToken$Kind local3;
org$frostlang$regex$RegexToken$Kind local4;
org$frostlang$regex$RegexToken local5;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _2;
frost$collections$CollectionView* _3;
$fn6 _4;
frost$core$Int _5;
frost$core$Int _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _14;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _15;
frost$collections$CollectionView* _16;
$fn7 _17;
frost$core$Int _18;
frost$core$Int _19;
int64_t _20;
int64_t _21;
int64_t _22;
frost$core$Int _23;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _26;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _27;
frost$core$Int _28;
frost$core$Int _30;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$collections$CollectionView* _37;
$fn8 _38;
frost$core$Int _39;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
org$frostlang$regex$RegexToken** _50;
org$frostlang$regex$RegexToken* _51;
frost$core$Int64 _52;
int64_t _53;
org$frostlang$regex$RegexToken _54;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _58;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _59;
frost$core$Int _60;
org$frostlang$regex$RegexToken _61;
org$frostlang$regex$RegexToken _63;
org$frostlang$regex$RegexLexer** _66;
org$frostlang$regex$RegexLexer* _67;
org$frostlang$plex$runtime$DFA** _70;
org$frostlang$plex$runtime$DFA* _71;
org$frostlang$plex$runtime$RawToken _72;
org$frostlang$plex$runtime$RawToken _75;
frost$core$Int _76;
frost$core$Int* _79;
org$frostlang$regex$RegexToken$Kind _81;
org$frostlang$regex$RegexToken$Kind _84;
org$frostlang$plex$runtime$RawToken _85;
frost$core$String$Index _86;
org$frostlang$plex$runtime$RawToken _87;
frost$core$String$Index _88;
frost$core$Int* _89;
frost$core$Int _90;
org$frostlang$plex$runtime$RawToken _91;
frost$core$Int _92;
org$frostlang$plex$runtime$RawToken _93;
frost$core$Int _94;
org$frostlang$frostc$Position _95;
org$frostlang$regex$RegexToken _96;
org$frostlang$regex$RegexToken _100;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:35
_1 = &param0->pushbackBuffer;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp9 = _3->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_4 = $tmp9->methods[0];
_5 = _4(_3);
_6 = (frost$core$Int) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 != _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:36
_14 = &param0->pushbackBuffer;
_15 = *_14;
_16 = ((frost$collections$CollectionView*) _15);
ITable* $tmp10 = _16->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_17 = $tmp10->methods[0];
_18 = _17(_16);
_19 = (frost$core$Int) {1u};
_20 = _18.value;
_21 = _19.value;
_22 = _20 - _21;
_23 = (frost$core$Int) {_22};
*(&local0) = _23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:37
_26 = &param0->pushbackBuffer;
_27 = *_26;
_28 = *(&local0);
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:37:41
_30 = (frost$core$Int) {0u};
_31 = _28.value;
_32 = _30.value;
_33 = _31 >= _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block6; else goto block5;
block6:;
_37 = ((frost$collections$CollectionView*) _27);
ITable* $tmp11 = _37->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_38 = $tmp11->methods[0];
_39 = _38(_37);
_40 = _28.value;
_41 = _39.value;
_42 = _40 < _41;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block4; else goto block5;
block5:;
_46 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _46, &$s13);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_50 = &_27->data;
_51 = *_50;
_52 = frost$core$Int64$init$frost$core$Int(_28);
_53 = _52.value;
_54 = _51[_53];
*(&local1) = _54;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:38
_58 = &param0->pushbackBuffer;
_59 = *_58;
_60 = *(&local0);
_61 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken(_59, _60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:39
_63 = *(&local1);
return _63;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:41
_66 = &param0->lexer;
_67 = *_66;
// begin inline call to method org.frostlang.regex.RegexLexer.next():org.frostlang.regex.RegexToken from RegexParser.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:384
_70 = &_67->dfa;
_71 = *_70;
_72 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(_71);
*(&local2) = _72;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:385
_75 = *(&local2);
_76 = _75.kind;
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:385:82
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_79 = &(&local4)->$rawValue;
*_79 = _76;
_81 = *(&local4);
*(&local3) = _81;
_84 = *(&local3);
_85 = *(&local2);
_86 = _85.start;
_87 = *(&local2);
_88 = _87.end;
_89 = &_67->file;
_90 = *_89;
_91 = *(&local2);
_92 = _91.line;
_93 = *(&local2);
_94 = _93.column;
_95 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_90, _92, _94);
_96 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position(_84, _86, _88, _95);
*(&local5) = _96;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:42
_100 = *(&local5);
return _100;

}
void org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(void* rawSelf, org$frostlang$regex$RegexToken param1) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_1 = &param0->pushbackBuffer;
_2 = *_1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_2, param1);
return;

}
org$frostlang$regex$RegexToken org$frostlang$regex$RegexParser$peek$R$org$frostlang$regex$RegexToken(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _2;
frost$collections$CollectionView* _3;
$fn14 _4;
frost$core$Int _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _14;
org$frostlang$regex$RegexToken _17;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _20;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _21;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _26;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _27;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _28;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _29;
frost$collections$CollectionView* _30;
$fn15 _31;
frost$core$Int _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int _37;
frost$core$Int _39;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$collections$CollectionView* _46;
$fn16 _47;
frost$core$Int _48;
int64_t _49;
int64_t _50;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
org$frostlang$regex$RegexToken** _59;
org$frostlang$regex$RegexToken* _60;
frost$core$Int64 _61;
int64_t _62;
org$frostlang$regex$RegexToken _63;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:50
_1 = &param0->pushbackBuffer;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp17 = _3->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
_4 = $tmp17->methods[0];
_5 = _4(_3);
_6 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_9 = _5.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
_14 = _12.value;
if (_14) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:51
_17 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_20 = &param0->pushbackBuffer;
_21 = *_20;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_21, _17);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:53
_26 = &param0->pushbackBuffer;
_27 = *_26;
_28 = &param0->pushbackBuffer;
_29 = *_28;
_30 = ((frost$collections$CollectionView*) _29);
ITable* $tmp18 = _30->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_31 = $tmp18->methods[0];
_32 = _31(_30);
_33 = (frost$core$Int) {1u};
_34 = _32.value;
_35 = _33.value;
_36 = _34 - _35;
_37 = (frost$core$Int) {_36};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
_39 = (frost$core$Int) {0u};
_40 = _37.value;
_41 = _39.value;
_42 = _40 >= _41;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block8; else goto block7;
block8:;
_46 = ((frost$collections$CollectionView*) _27);
ITable* $tmp19 = _46->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp19 = $tmp19->next;
}
_47 = $tmp19->methods[0];
_48 = _47(_46);
_49 = _37.value;
_50 = _48.value;
_51 = _49 < _50;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block6; else goto block7;
block7:;
_55 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _55, &$s21);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_59 = &_27->data;
_60 = *_59;
_61 = frost$core$Int64$init$frost$core$Int(_37);
_62 = _61.value;
_63 = _60[_62];
return _63;

}
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(void* rawSelf, org$frostlang$regex$RegexToken$Kind param1) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken _1;
org$frostlang$regex$RegexToken _4;
org$frostlang$regex$RegexToken$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
frost$core$Equatable* _8;
$fn22 _9;
frost$core$Bit _10;
bool _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Bit _18;
org$frostlang$regex$RegexToken _21;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _24;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _25;
frost$core$Bit _29;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_1 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_4 = *(&local0);
_5 = _4.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp23;
$tmp23 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp23->value = _5;
_6 = ((frost$core$Equatable*) $tmp23);
_7 = _6;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp24->value = param1;
_8 = ((frost$core$Equatable*) $tmp24);
ITable* $tmp25 = _7->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
_9 = $tmp25->methods[0];
_10 = _9(_7, _8);
_11 = _10.value;
_12 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_14);
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_18 = (frost$core$Bit) {true};
return _18;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_21 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_24 = &param0->pushbackBuffer;
_25 = *_24;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_25, _21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_29 = (frost$core$Bit) {false};
return _29;

}
frost$core$Bit org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(void* rawSelf, org$frostlang$regex$RegexToken$Kind param1, frost$core$String* param2) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

org$frostlang$regex$RegexToken local0;
frost$core$String* local1 = NULL;
frost$core$String$Index$nullable local2;
org$frostlang$regex$RegexToken _1;
org$frostlang$regex$RegexToken _4;
org$frostlang$regex$RegexToken$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
frost$core$Equatable* _8;
$fn26 _9;
frost$core$Bit _10;
bool _11;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Bit _18;
org$frostlang$regex$RegexToken _21;
frost$core$String* _22;
frost$core$String* _23;
org$frostlang$regex$RegexToken _24;
frost$core$String** _27;
frost$core$String* _28;
frost$core$String$Index _29;
frost$core$String$Index _30;
frost$core$Bit _31;
frost$core$Range$LTfrost$core$String$Index$GT _32;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$String* _39;
frost$core$String* _40;
frost$threads$MessageQueue** _43;
frost$threads$MessageQueue* _44;
frost$threads$MessageQueue* _45;
org$frostlang$frostc$Compiler$Message* _46;
frost$core$Int _47;
frost$io$File** _48;
frost$io$File* _49;
frost$core$String** _52;
frost$core$String* _53;
frost$core$String$Index$nullable _54;
frost$core$String$Index$nullable _57;
bool _58;
frost$core$Bit _59;
bool _60;
frost$core$String** _63;
frost$core$String* _64;
frost$core$String** _65;
frost$core$String* _66;
frost$core$String$Index$nullable _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _72;
frost$core$String$Index _75;
frost$core$String$Index _76;
frost$core$String$Index$nullable _77;
frost$core$Bit _78;
frost$core$Range$LTfrost$core$String$Index$Q$GT _79;
frost$core$String* _80;
frost$core$Object* _81;
frost$core$Object* _83;
frost$core$Object* _86;
frost$core$String** _91;
frost$core$String* _92;
frost$core$Object* _93;
frost$core$Object* _96;
frost$core$String* _100;
org$frostlang$frostc$Position _101;
frost$core$Int _102;
org$frostlang$frostc$Position _103;
frost$core$Int _104;
frost$core$Immutable* _106;
frost$core$Object* _108;
frost$core$String* _110;
frost$core$Object* _111;
frost$core$Object* _114;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _121;
frost$core$Object* _123;
frost$core$Object* _125;
frost$core$Bit _128;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:66
_1 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:67
_4 = *(&local0);
_5 = _4.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp27;
$tmp27 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp27->value = _5;
_6 = ((frost$core$Equatable*) $tmp27);
_7 = _6;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp28;
$tmp28 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp28->value = param1;
_8 = ((frost$core$Equatable*) $tmp28);
ITable* $tmp29 = _7->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
_9 = $tmp29->methods[0];
_10 = _9(_7, _8);
_11 = _10.value;
_12 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_14);
if (_11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:68
_18 = (frost$core$Bit) {true};
return _18;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:70
_21 = *(&local0);
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s30, param2);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_22, &$s31);
_24 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:70:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
_27 = &param0->source;
_28 = *_27;
_29 = _24.start;
_30 = _24.end;
_31 = (frost$core$Bit) {false};
_32 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_29, _30, _31);
_33 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_28, _32);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, _33);
_40 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_39, &$s32);
// begin inline call to method org.frostlang.regex.RegexParser.error(token:org.frostlang.regex.RegexToken, msg:frost.core.String) from RegexParser.frost:70:14
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
_43 = &param0->errors;
_44 = *_43;
_45 = _44;
_46 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Message), (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
_47 = (frost$core$Int) {0u};
_48 = &param0->path;
_49 = *_48;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_52 = &_49->path;
_53 = *_52;
_54 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_53, &$s33);
*(&local2) = _54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_57 = *(&local2);
_58 = _57.nonnull;
_59 = (frost$core$Bit) {_58};
_60 = _59.value;
if (_60) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_63 = &_49->path;
_64 = *_63;
_65 = &_49->path;
_66 = *_65;
_67 = *(&local2);
_68 = _67.nonnull;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block9; else goto block10;
block10:;
_72 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _72, &$s35);
abort(); // unreachable
block9:;
_75 = ((frost$core$String$Index) _67.value);
_76 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_66, _75);
_77 = ((frost$core$String$Index$nullable) { _76, true });
_78 = (frost$core$Bit) {false};
_79 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_77, ((frost$core$String$Index$nullable) { .nonnull = false }), _78);
_80 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_64, _79);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_81);
_83 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local1) = _80;
_86 = ((frost$core$Object*) _80);
frost$core$Frost$ref$frost$core$Object$Q(_86);
goto block5;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_91 = &_49->path;
_92 = *_91;
_93 = ((frost$core$Object*) _92);
frost$core$Frost$ref$frost$core$Object$Q(_93);
*(&local1) = _92;
_96 = ((frost$core$Object*) _92);
frost$core$Frost$ref$frost$core$Object$Q(_96);
goto block5;
block7:;
goto block5;
block5:;
_100 = *(&local1);
_101 = _21.position;
_102 = _101.line;
_103 = _21.position;
_104 = _103.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String(_46, _47, _100, _102, _104, _40);
_106 = ((frost$core$Immutable*) _46);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(_45, _106);
_108 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = *(&local1);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local1) = ((frost$core$String*) NULL);
_114 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_114);
_117 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_121);
_123 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_123);
_125 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_125);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:71
_128 = (frost$core$Bit) {false};
return _128;

}
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(void* rawSelf, org$frostlang$regex$RegexToken param1, frost$core$String* param2) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
frost$threads$MessageQueue** _1;
frost$threads$MessageQueue* _2;
frost$threads$MessageQueue* _3;
org$frostlang$frostc$Compiler$Message* _4;
frost$core$Int _5;
frost$io$File** _6;
frost$io$File* _7;
frost$core$String** _10;
frost$core$String* _11;
frost$core$String$Index _14;
frost$core$String$Index$nullable _15;
frost$core$String$Index$nullable _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$String** _25;
frost$core$String* _26;
frost$core$String** _27;
frost$core$String* _28;
frost$core$String$Index$nullable _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$core$String$Index _37;
frost$core$String$Index _38;
frost$core$String$Index$nullable _39;
frost$core$Bit _40;
frost$core$Range$LTfrost$core$String$Index$Q$GT _41;
frost$core$String* _42;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _48;
frost$core$String** _53;
frost$core$String* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$core$String* _62;
org$frostlang$frostc$Position _63;
frost$core$Int _64;
org$frostlang$frostc$Position _65;
frost$core$Int _66;
frost$core$Immutable* _68;
frost$core$Object* _70;
frost$core$String* _72;
frost$core$Object* _73;
frost$core$Object* _76;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
_1 = &param0->errors;
_2 = *_1;
_3 = _2;
_4 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Message), (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
_5 = (frost$core$Int) {0u};
_6 = &param0->path;
_7 = *_6;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_10 = &_7->path;
_11 = *_10;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_14 = frost$core$String$get_end$R$frost$core$String$Index(_11);
_15 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_11, &$s36, _14);
*(&local1) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_19 = *(&local1);
_20 = _19.nonnull;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_25 = &_7->path;
_26 = *_25;
_27 = &_7->path;
_28 = *_27;
_29 = *(&local1);
_30 = _29.nonnull;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block6; else goto block7;
block7:;
_34 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _34, &$s38);
abort(); // unreachable
block6:;
_37 = ((frost$core$String$Index) _29.value);
_38 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_28, _37);
_39 = ((frost$core$String$Index$nullable) { _38, true });
_40 = (frost$core$Bit) {false};
_41 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_39, ((frost$core$String$Index$nullable) { .nonnull = false }), _40);
_42 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_26, _41);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_45);
*(&local0) = _42;
_48 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_48);
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_53 = &_7->path;
_54 = *_53;
_55 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_55);
*(&local0) = _54;
_58 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_58);
goto block1;
block4:;
goto block1;
block1:;
_62 = *(&local0);
_63 = param1.position;
_64 = _63.line;
_65 = param1.position;
_66 = _65.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String(_4, _5, _62, _64, _66, param2);
_68 = ((frost$core$Immutable*) _4);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(_3, _68);
_70 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = *(&local0);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local0) = ((frost$core$String*) NULL);
_76 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_76);
return;

}
frost$core$String* org$frostlang$regex$RegexParser$text$org$frostlang$regex$RegexToken$R$frost$core$String(void* rawSelf, org$frostlang$regex$RegexToken param1) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$String$Index _3;
frost$core$String$Index _4;
frost$core$Bit _5;
frost$core$Range$LTfrost$core$String$Index$GT _6;
frost$core$String* _7;
frost$core$Object* _8;
frost$core$Object* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
_1 = &param0->source;
_2 = *_1;
_3 = param1.start;
_4 = param1.end;
_5 = (frost$core$Bit) {false};
_6 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_3, _4, _5);
_7 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_2, _6);
_8 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_10);
return _7;

}
frost$core$Bit org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
org$frostlang$regex$RegexToken _3;
org$frostlang$regex$RegexToken _6;
frost$core$String** _9;
frost$core$String* _10;
frost$core$String$Index _11;
frost$core$String$Index _12;
frost$core$Bit _13;
frost$core$Range$LTfrost$core$String$Index$GT _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Bit _21;
bool _22;
frost$core$Object* _23;
org$frostlang$regex$RegexToken _27;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _30;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _31;
frost$core$Bit _35;
org$frostlang$regex$RegexToken _38;
org$frostlang$regex$RegexToken$Kind _39;
frost$core$Equatable* _40;
frost$core$Equatable* _41;
frost$core$Int _42;
frost$core$Int* _45;
org$frostlang$regex$RegexToken$Kind _47;
org$frostlang$regex$RegexToken$Kind _50;
frost$core$Equatable* _51;
$fn39 _52;
frost$core$Bit _53;
bool _54;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Bit _61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:87
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:88
_3 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:89
_6 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:89:20
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
_9 = &param0->source;
_10 = *_9;
_11 = _6.start;
_12 = _6.end;
_13 = (frost$core$Bit) {false};
_14 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_11, _12, _13);
_15 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_10, _14);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_21 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_15, &$s40);
_22 = _21.value;
_23 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_23);
if (_22) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:90
_27 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:90:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_30 = &param0->pushbackBuffer;
_31 = *_30;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_31, _27);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:91
_35 = (frost$core$Bit) {true};
return _35;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:93
_38 = *(&local0);
_39 = _38.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp41;
$tmp41 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp41->value = _39;
_40 = ((frost$core$Equatable*) $tmp41);
_41 = _40;
_42 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:93:43
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_45 = &(&local2)->$rawValue;
*_45 = _42;
_47 = *(&local2);
*(&local1) = _47;
_50 = *(&local1);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp42->value = _50;
_51 = ((frost$core$Equatable*) $tmp42);
ITable* $tmp43 = _41->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp43 = $tmp43->next;
}
_52 = $tmp43->methods[0];
_53 = _52(_41, _51);
_54 = _53.value;
_55 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_57);
if (_54) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:94
_61 = (frost$core$Bit) {false};
return _61;
block8:;
goto block1;
block2:;
goto block10;
block10:;

}
frost$core$Bit org$frostlang$regex$RegexParser$integer$R$frost$core$Bit(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

org$frostlang$regex$RegexToken$Kind local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
org$frostlang$regex$RegexToken$Kind local3;
frost$core$Bit local4;
org$frostlang$regex$RegexToken local5;
frost$core$Int _1;
frost$core$Int* _4;
org$frostlang$regex$RegexToken$Kind _6;
org$frostlang$regex$RegexToken$Kind _9;
frost$core$Bit _10;
bool _13;
bool _14;
frost$core$Bit _15;
bool _17;
frost$core$Bit _20;
frost$core$Int _24;
frost$core$Int* _27;
org$frostlang$regex$RegexToken$Kind _29;
org$frostlang$regex$RegexToken$Kind _32;
org$frostlang$regex$RegexToken _35;
org$frostlang$regex$RegexToken _38;
org$frostlang$regex$RegexToken$Kind _39;
frost$core$Equatable* _40;
frost$core$Equatable* _41;
frost$core$Equatable* _42;
$fn44 _43;
frost$core$Bit _44;
bool _45;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Bit _52;
org$frostlang$regex$RegexToken _56;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _59;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _60;
frost$core$Bit _64;
frost$core$Bit _67;
bool _68;
frost$core$Bit _72;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
_1 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_4 = &(&local1)->$rawValue;
*_4 = _1;
_6 = *(&local1);
*(&local0) = _6;
_9 = *(&local0);
_10 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _9, &$s45);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_13 = _10.value;
_14 = !_13;
_15 = (frost$core$Bit) {_14};
_17 = _15.value;
if (_17) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
_20 = (frost$core$Bit) {false};
return _20;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block5;
block5:;
_24 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_27 = &(&local3)->$rawValue;
*_27 = _24;
_29 = *(&local3);
*(&local2) = _29;
_32 = *(&local2);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_35 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local5) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_38 = *(&local5);
_39 = _38.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp46;
$tmp46 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp46->value = _39;
_40 = ((frost$core$Equatable*) $tmp46);
_41 = _40;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp47->value = _32;
_42 = ((frost$core$Equatable*) $tmp47);
ITable* $tmp48 = _41->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp48 = $tmp48->next;
}
_43 = $tmp48->methods[0];
_44 = _43(_41, _42);
_45 = _44.value;
_46 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_48);
if (_45) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_52 = (frost$core$Bit) {true};
*(&local4) = _52;
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_56 = *(&local5);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_59 = &param0->pushbackBuffer;
_60 = *_59;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_60, _56);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_64 = (frost$core$Bit) {false};
*(&local4) = _64;
goto block9;
block9:;
_67 = *(&local4);
_68 = _67.value;
if (_68) goto block6; else goto block7;
block6:;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
_72 = (frost$core$Bit) {true};
return _72;

}
frost$core$Bit org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken$Kind local1;
org$frostlang$regex$RegexToken$Kind local2;
frost$core$Bit local3;
org$frostlang$regex$RegexToken local4;
org$frostlang$regex$RegexToken _1;
org$frostlang$regex$RegexToken _4;
org$frostlang$regex$RegexToken$Kind _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _15;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Int _28;
frost$core$Int* _31;
org$frostlang$regex$RegexToken$Kind _33;
org$frostlang$regex$RegexToken$Kind _36;
org$frostlang$regex$RegexToken _39;
org$frostlang$regex$RegexToken _42;
org$frostlang$regex$RegexToken$Kind _43;
frost$core$Equatable* _44;
frost$core$Equatable* _45;
frost$core$Equatable* _46;
$fn49 _47;
frost$core$Bit _48;
bool _49;
frost$core$Object* _50;
frost$core$Object* _52;
frost$core$Bit _56;
org$frostlang$regex$RegexToken _60;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _63;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _64;
frost$core$Bit _68;
frost$core$Bit _71;
frost$core$Bit _73;
frost$core$Int _75;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _83;
frost$core$Bit _86;
frost$core$Int _88;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _96;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _101;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _102;
frost$collections$CollectionView* _103;
$fn50 _104;
frost$core$Int _105;
frost$core$Int _106;
int64_t _109;
int64_t _110;
bool _111;
frost$core$Bit _112;
bool _114;
org$frostlang$regex$RegexToken _117;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _120;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _121;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _126;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _127;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _128;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _129;
frost$collections$CollectionView* _130;
$fn51 _131;
frost$core$Int _132;
frost$core$Int _133;
int64_t _134;
int64_t _135;
int64_t _136;
frost$core$Int _137;
frost$core$Int _139;
int64_t _140;
int64_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
frost$collections$CollectionView* _146;
$fn52 _147;
frost$core$Int _148;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
frost$core$Int _155;
org$frostlang$regex$RegexToken** _159;
org$frostlang$regex$RegexToken* _160;
frost$core$Int64 _161;
int64_t _162;
org$frostlang$regex$RegexToken _163;
org$frostlang$regex$RegexToken$Kind _166;
frost$core$Int _167;
frost$core$Int _168;
int64_t _171;
int64_t _172;
bool _173;
frost$core$Bit _174;
bool _176;
frost$core$Int _178;
int64_t _181;
int64_t _182;
bool _183;
frost$core$Bit _184;
bool _186;
frost$core$Int _188;
int64_t _191;
int64_t _192;
bool _193;
frost$core$Bit _194;
bool _196;
org$frostlang$regex$RegexToken _199;
frost$core$Bit _202;
org$frostlang$regex$RegexToken _205;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _208;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _209;
frost$core$Bit _213;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:115
_1 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:116
_4 = *(&local0);
_5 = _4.kind;
_6 = _5.$rawValue;
_7 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:117:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _6.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
_15 = _13.value;
if (_15) goto block2; else goto block3;
block3:;
_17 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:117:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _6.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block2; else goto block5;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:118
_28 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:118:42
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_31 = &(&local2)->$rawValue;
*_31 = _28;
_33 = *(&local2);
*(&local1) = _33;
_36 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:118:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_39 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_42 = *(&local4);
_43 = _42.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp53;
$tmp53 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp53->value = _43;
_44 = ((frost$core$Equatable*) $tmp53);
_45 = _44;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp54;
$tmp54 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp54->value = _36;
_46 = ((frost$core$Equatable*) $tmp54);
ITable* $tmp55 = _45->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp55 = $tmp55->next;
}
_47 = $tmp55->methods[0];
_48 = _47(_45, _46);
_49 = _48.value;
_50 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_52);
if (_49) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_56 = (frost$core$Bit) {true};
*(&local3) = _56;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_60 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_63 = &param0->pushbackBuffer;
_64 = *_63;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_64, _60);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_68 = (frost$core$Bit) {false};
*(&local3) = _68;
goto block8;
block8:;
_71 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:119
_73 = (frost$core$Bit) {true};
return _73;
block5:;
_75 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:121:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_78 = _6.value;
_79 = _75.value;
_80 = _78 == _79;
_81 = (frost$core$Bit) {_80};
_83 = _81.value;
if (_83) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:122
_86 = (frost$core$Bit) {true};
return _86;
block13:;
_88 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:124:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_91 = _6.value;
_92 = _88.value;
_93 = _91 == _92;
_94 = (frost$core$Bit) {_93};
_96 = _94.value;
if (_96) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:125
// begin inline call to method org.frostlang.regex.RegexParser.peek():org.frostlang.regex.RegexToken from RegexParser.frost:125:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:50
_101 = &param0->pushbackBuffer;
_102 = *_101;
_103 = ((frost$collections$CollectionView*) _102);
ITable* $tmp56 = _103->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp56 = $tmp56->next;
}
_104 = $tmp56->methods[0];
_105 = _104(_103);
_106 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_109 = _105.value;
_110 = _106.value;
_111 = _109 == _110;
_112 = (frost$core$Bit) {_111};
_114 = _112.value;
if (_114) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:51
_117 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_120 = &param0->pushbackBuffer;
_121 = *_120;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_121, _117);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:53
_126 = &param0->pushbackBuffer;
_127 = *_126;
_128 = &param0->pushbackBuffer;
_129 = *_128;
_130 = ((frost$collections$CollectionView*) _129);
ITable* $tmp57 = _130->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
_131 = $tmp57->methods[0];
_132 = _131(_130);
_133 = (frost$core$Int) {1u};
_134 = _132.value;
_135 = _133.value;
_136 = _134 - _135;
_137 = (frost$core$Int) {_136};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
_139 = (frost$core$Int) {0u};
_140 = _137.value;
_141 = _139.value;
_142 = _140 >= _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block26; else goto block25;
block26:;
_146 = ((frost$collections$CollectionView*) _127);
ITable* $tmp58 = _146->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
_147 = $tmp58->methods[0];
_148 = _147(_146);
_149 = _137.value;
_150 = _148.value;
_151 = _149 < _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block24; else goto block25;
block25:;
_155 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _155, &$s60);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_159 = &_127->data;
_160 = *_159;
_161 = frost$core$Int64$init$frost$core$Int(_137);
_162 = _161.value;
_163 = _160[_162];
_166 = _163.kind;
_167 = _166.$rawValue;
_168 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:126:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_171 = _167.value;
_172 = _168.value;
_173 = _171 == _172;
_174 = (frost$core$Bit) {_173};
_176 = _174.value;
if (_176) goto block28; else goto block29;
block29:;
_178 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:126:67
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_181 = _167.value;
_182 = _178.value;
_183 = _181 == _182;
_184 = (frost$core$Bit) {_183};
_186 = _184.value;
if (_186) goto block28; else goto block31;
block31:;
_188 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:127:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_191 = _167.value;
_192 = _188.value;
_193 = _191 == _192;
_194 = (frost$core$Bit) {_193};
_196 = _194.value;
if (_196) goto block28; else goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:128
_199 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
goto block27;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:131
_202 = (frost$core$Bit) {true};
return _202;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:134
_205 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:134:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_208 = &param0->pushbackBuffer;
_209 = *_208;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_209, _205);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:135
_213 = (frost$core$Bit) {false};
return _213;
block1:;
goto block35;
block35:;

}
frost$core$Bit org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

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
org$frostlang$regex$RegexToken _1;
org$frostlang$regex$RegexToken _4;
org$frostlang$regex$RegexToken$Kind _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _15;
frost$core$Int _17;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _25;
frost$core$Int _27;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
bool _35;
frost$core$Int _37;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _45;
frost$core$Int _47;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _55;
frost$core$Int _57;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _65;
frost$core$Int _67;
int64_t _70;
int64_t _71;
bool _72;
frost$core$Bit _73;
bool _75;
frost$core$Bit _78;
frost$core$Int _80;
int64_t _83;
int64_t _84;
bool _85;
frost$core$Bit _86;
bool _88;
frost$core$Int _91;
frost$core$Int* _94;
org$frostlang$regex$RegexToken$Kind _96;
org$frostlang$regex$RegexToken$Kind _99;
org$frostlang$regex$RegexToken _102;
org$frostlang$regex$RegexToken _105;
org$frostlang$regex$RegexToken$Kind _106;
frost$core$Equatable* _107;
frost$core$Equatable* _108;
frost$core$Equatable* _109;
$fn61 _110;
frost$core$Bit _111;
bool _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Bit _119;
org$frostlang$regex$RegexToken _123;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _126;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _127;
frost$core$Bit _131;
frost$core$Bit _134;
frost$core$Bit _140;
frost$core$Bit _141;
bool _142;
frost$core$Bit _145;
frost$core$Bit _149;
frost$core$Bit _151;
frost$core$Bit _154;
bool _157;
bool _158;
frost$core$Bit _159;
bool _161;
frost$core$Bit _164;
frost$core$Bit _170;
frost$core$Bit _171;
bool _172;
frost$core$Bit _175;
frost$core$Bit _179;
frost$core$Bit _181;
frost$core$Bit _184;
frost$core$Bit _186;
frost$core$Bit _189;
bool _192;
bool _193;
frost$core$Bit _194;
bool _196;
frost$core$Bit _199;
frost$core$Int _202;
frost$core$Int* _205;
org$frostlang$regex$RegexToken$Kind _207;
org$frostlang$regex$RegexToken$Kind _210;
frost$core$Bit _211;
frost$core$Int _213;
int64_t _216;
int64_t _217;
bool _218;
frost$core$Bit _219;
bool _221;
frost$core$Bit _224;
bool _227;
bool _228;
frost$core$Bit _229;
bool _231;
frost$core$Bit _234;
frost$core$Int _237;
frost$core$Int* _240;
org$frostlang$regex$RegexToken$Kind _242;
org$frostlang$regex$RegexToken$Kind _245;
frost$core$Bit _246;
frost$core$Int _248;
int64_t _251;
int64_t _252;
bool _253;
frost$core$Bit _254;
bool _256;
frost$core$Int _261;
frost$core$Int* _264;
org$frostlang$regex$RegexToken$Kind _266;
org$frostlang$regex$RegexToken$Kind _269;
frost$core$Bit _270;
bool _273;
bool _274;
frost$core$Bit _275;
bool _277;
frost$core$Bit _280;
frost$core$Int _285;
frost$core$Int* _288;
org$frostlang$regex$RegexToken$Kind _290;
org$frostlang$regex$RegexToken$Kind _293;
org$frostlang$regex$RegexToken _296;
org$frostlang$regex$RegexToken _299;
org$frostlang$regex$RegexToken$Kind _300;
frost$core$Equatable* _301;
frost$core$Equatable* _302;
frost$core$Equatable* _303;
$fn62 _304;
frost$core$Bit _305;
bool _306;
frost$core$Object* _307;
frost$core$Object* _309;
frost$core$Bit _313;
org$frostlang$regex$RegexToken _317;
frost$core$Bit _320;
frost$core$Bit _323;
bool _324;
frost$core$Bit _328;
frost$core$Bit _331;
bool _334;
bool _335;
frost$core$Bit _336;
bool _338;
frost$core$Bit _341;
frost$core$Int _344;
frost$core$Int* _347;
org$frostlang$regex$RegexToken$Kind _349;
org$frostlang$regex$RegexToken$Kind _352;
org$frostlang$regex$RegexToken _355;
org$frostlang$regex$RegexToken _358;
org$frostlang$regex$RegexToken$Kind _359;
frost$core$Equatable* _360;
frost$core$Equatable* _361;
frost$core$Equatable* _362;
$fn63 _363;
frost$core$Bit _364;
bool _365;
frost$core$Object* _366;
frost$core$Object* _368;
frost$core$Bit _372;
org$frostlang$regex$RegexToken _376;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _379;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _380;
frost$core$Bit _384;
frost$core$Bit _387;
bool _388;
frost$core$Int _393;
frost$core$Int* _396;
org$frostlang$regex$RegexToken$Kind _398;
org$frostlang$regex$RegexToken$Kind _401;
frost$core$Bit _402;
bool _405;
bool _406;
frost$core$Bit _407;
bool _409;
frost$core$Bit _412;
frost$core$Int _417;
frost$core$Int* _420;
org$frostlang$regex$RegexToken$Kind _422;
org$frostlang$regex$RegexToken$Kind _425;
org$frostlang$regex$RegexToken _428;
org$frostlang$regex$RegexToken _431;
org$frostlang$regex$RegexToken$Kind _432;
frost$core$Equatable* _433;
frost$core$Equatable* _434;
frost$core$Equatable* _435;
$fn64 _436;
frost$core$Bit _437;
bool _438;
frost$core$Object* _439;
frost$core$Object* _441;
frost$core$Bit _445;
org$frostlang$regex$RegexToken _449;
frost$core$Bit _452;
frost$core$Bit _455;
bool _456;
frost$core$Bit _460;
frost$core$Bit _463;
frost$core$Int _466;
frost$core$Int* _469;
org$frostlang$regex$RegexToken$Kind _471;
org$frostlang$regex$RegexToken$Kind _474;
frost$core$Bit _475;
org$frostlang$regex$RegexToken _478;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _481;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _482;
frost$core$Bit _486;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:145
_1 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:146
_4 = *(&local0);
_5 = _4.kind;
_6 = _5.$rawValue;
_7 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _6.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
_15 = _13.value;
if (_15) goto block2; else goto block3;
block3:;
_17 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:57
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_20 = _6.value;
_21 = _17.value;
_22 = _20 == _21;
_23 = (frost$core$Bit) {_22};
_25 = _23.value;
if (_25) goto block2; else goto block5;
block5:;
_27 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:147:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_30 = _6.value;
_31 = _27.value;
_32 = _30 == _31;
_33 = (frost$core$Bit) {_32};
_35 = _33.value;
if (_35) goto block2; else goto block7;
block7:;
_37 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_40 = _6.value;
_41 = _37.value;
_42 = _40 == _41;
_43 = (frost$core$Bit) {_42};
_45 = _43.value;
if (_45) goto block2; else goto block9;
block9:;
_47 = (frost$core$Int) {18u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:59
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_50 = _6.value;
_51 = _47.value;
_52 = _50 == _51;
_53 = (frost$core$Bit) {_52};
_55 = _53.value;
if (_55) goto block2; else goto block11;
block11:;
_57 = (frost$core$Int) {19u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:148:85
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_60 = _6.value;
_61 = _57.value;
_62 = _60 == _61;
_63 = (frost$core$Bit) {_62};
_65 = _63.value;
if (_65) goto block2; else goto block13;
block13:;
_67 = (frost$core$Int) {20u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:149:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_70 = _6.value;
_71 = _67.value;
_72 = _70 == _71;
_73 = (frost$core$Bit) {_72};
_75 = _73.value;
if (_75) goto block2; else goto block15;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:150
_78 = (frost$core$Bit) {true};
return _78;
block15:;
_80 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:152:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_83 = _6.value;
_84 = _80.value;
_85 = _83 == _84;
_86 = (frost$core$Bit) {_85};
_88 = _86.value;
if (_88) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:153
_91 = (frost$core$Int) {7u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:153:42
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_94 = &(&local2)->$rawValue;
*_94 = _91;
_96 = *(&local2);
*(&local1) = _96;
_99 = *(&local1);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:153:26
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_102 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local4) = _102;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_105 = *(&local4);
_106 = _105.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp65;
$tmp65 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp65->value = _106;
_107 = ((frost$core$Equatable*) $tmp65);
_108 = _107;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp66;
$tmp66 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp66->value = _99;
_109 = ((frost$core$Equatable*) $tmp66);
ITable* $tmp67 = _108->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp67 = $tmp67->next;
}
_110 = $tmp67->methods[0];
_111 = _110(_108, _109);
_112 = _111.value;
_113 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_115);
if (_112) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_119 = (frost$core$Bit) {true};
*(&local3) = _119;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_123 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_126 = &param0->pushbackBuffer;
_127 = *_126;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_127, _123);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_131 = (frost$core$Bit) {false};
*(&local3) = _131;
goto block21;
block21:;
_134 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:154
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
_140 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
_141 = frost$core$Bit$$NOT$R$frost$core$Bit(_140);
_142 = _141.value;
if (_142) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_145 = (frost$core$Bit) {false};
*(&local6) = _145;
goto block30;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
_149 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_151 = (frost$core$Bit) {true};
*(&local6) = _151;
goto block30;
block30:;
_154 = *(&local6);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_157 = _154.value;
_158 = !_157;
_159 = (frost$core$Bit) {_158};
_161 = _159.value;
if (_161) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_164 = (frost$core$Bit) {false};
*(&local5) = _164;
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
_170 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
_171 = frost$core$Bit$$NOT$R$frost$core$Bit(_170);
_172 = _171.value;
if (_172) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_175 = (frost$core$Bit) {false};
*(&local7) = _175;
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
_179 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_181 = (frost$core$Bit) {true};
*(&local7) = _181;
goto block34;
block34:;
_184 = *(&local7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_186 = (frost$core$Bit) {true};
*(&local5) = _186;
goto block27;
block27:;
_189 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:154:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_192 = _189.value;
_193 = !_192;
_194 = (frost$core$Bit) {_193};
_196 = _194.value;
if (_196) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:155
_199 = (frost$core$Bit) {false};
return _199;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:157
_202 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:157:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_205 = &(&local9)->$rawValue;
*_205 = _202;
_207 = *(&local9);
*(&local8) = _207;
_210 = *(&local8);
_211 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _210, &$s68);
return _211;
block18:;
_213 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:159:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_216 = _6.value;
_217 = _213.value;
_218 = _216 == _217;
_219 = (frost$core$Bit) {_218};
_221 = _219.value;
if (_221) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:160
_224 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:160:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_227 = _224.value;
_228 = !_227;
_229 = (frost$core$Bit) {_228};
_231 = _229.value;
if (_231) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:161
_234 = (frost$core$Bit) {false};
return _234;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:163
_237 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:163:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_240 = &(&local11)->$rawValue;
*_240 = _237;
_242 = *(&local11);
*(&local10) = _242;
_245 = *(&local10);
_246 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _245, &$s69);
return _246;
block40:;
_248 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:165:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_251 = _6.value;
_252 = _248.value;
_253 = _251 == _252;
_254 = (frost$core$Bit) {_253};
_256 = _254.value;
if (_256) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:166
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:166:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
_261 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_264 = &(&local14)->$rawValue;
*_264 = _261;
_266 = *(&local14);
*(&local13) = _266;
_269 = *(&local13);
_270 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _269, &$s70);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_273 = _270.value;
_274 = !_273;
_275 = (frost$core$Bit) {_274};
_277 = _275.value;
if (_277) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
_280 = (frost$core$Bit) {false};
*(&local12) = _280;
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block56;
block56:;
_285 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_288 = &(&local16)->$rawValue;
*_288 = _285;
_290 = *(&local16);
*(&local15) = _290;
_293 = *(&local15);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_296 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local18) = _296;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_299 = *(&local18);
_300 = _299.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp71;
$tmp71 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp71->value = _300;
_301 = ((frost$core$Equatable*) $tmp71);
_302 = _301;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp72->value = _293;
_303 = ((frost$core$Equatable*) $tmp72);
ITable* $tmp73 = _302->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp73 = $tmp73->next;
}
_304 = $tmp73->methods[0];
_305 = _304(_302, _303);
_306 = _305.value;
_307 = ((frost$core$Object*) _303);
frost$core$Frost$unref$frost$core$Object$Q(_307);
_309 = ((frost$core$Object*) _301);
frost$core$Frost$unref$frost$core$Object$Q(_309);
if (_306) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_313 = (frost$core$Bit) {true};
*(&local17) = _313;
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_317 = *(&local18);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, _317);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_320 = (frost$core$Bit) {false};
*(&local17) = _320;
goto block60;
block60:;
_323 = *(&local17);
_324 = _323.value;
if (_324) goto block57; else goto block58;
block57:;
goto block56;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
_328 = (frost$core$Bit) {true};
*(&local12) = _328;
goto block51;
block51:;
_331 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:166:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_334 = _331.value;
_335 = !_334;
_336 = (frost$core$Bit) {_335};
_338 = _336.value;
if (_338) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:167
_341 = (frost$core$Bit) {false};
return _341;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:169
_344 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:169:45
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_347 = &(&local20)->$rawValue;
*_347 = _344;
_349 = *(&local20);
*(&local19) = _349;
_352 = *(&local19);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:169:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_355 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local22) = _355;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_358 = *(&local22);
_359 = _358.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp74;
$tmp74 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp74->value = _359;
_360 = ((frost$core$Equatable*) $tmp74);
_361 = _360;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp75;
$tmp75 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp75->value = _352;
_362 = ((frost$core$Equatable*) $tmp75);
ITable* $tmp76 = _361->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp76 = $tmp76->next;
}
_363 = $tmp76->methods[0];
_364 = _363(_361, _362);
_365 = _364.value;
_366 = ((frost$core$Object*) _362);
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = ((frost$core$Object*) _360);
frost$core$Frost$unref$frost$core$Object$Q(_368);
if (_365) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_372 = (frost$core$Bit) {true};
*(&local21) = _372;
goto block67;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_376 = *(&local22);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_379 = &param0->pushbackBuffer;
_380 = *_379;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_380, _376);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_384 = (frost$core$Bit) {false};
*(&local21) = _384;
goto block67;
block67:;
_387 = *(&local21);
_388 = _387.value;
if (_388) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:170
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:170:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
_393 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_396 = &(&local25)->$rawValue;
*_396 = _393;
_398 = *(&local25);
*(&local24) = _398;
_401 = *(&local24);
_402 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _401, &$s77);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_405 = _402.value;
_406 = !_405;
_407 = (frost$core$Bit) {_406};
_409 = _407.value;
if (_409) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
_412 = (frost$core$Bit) {false};
*(&local23) = _412;
goto block71;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block76;
block76:;
_417 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_420 = &(&local27)->$rawValue;
*_420 = _417;
_422 = *(&local27);
*(&local26) = _422;
_425 = *(&local26);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_428 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local29) = _428;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_431 = *(&local29);
_432 = _431.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp78;
$tmp78 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp78->value = _432;
_433 = ((frost$core$Equatable*) $tmp78);
_434 = _433;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp79;
$tmp79 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp79->value = _425;
_435 = ((frost$core$Equatable*) $tmp79);
ITable* $tmp80 = _434->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
_436 = $tmp80->methods[0];
_437 = _436(_434, _435);
_438 = _437.value;
_439 = ((frost$core$Object*) _435);
frost$core$Frost$unref$frost$core$Object$Q(_439);
_441 = ((frost$core$Object*) _433);
frost$core$Frost$unref$frost$core$Object$Q(_441);
if (_438) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_445 = (frost$core$Bit) {true};
*(&local28) = _445;
goto block80;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_449 = *(&local29);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, _449);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_452 = (frost$core$Bit) {false};
*(&local28) = _452;
goto block80;
block80:;
_455 = *(&local28);
_456 = _455.value;
if (_456) goto block77; else goto block78;
block77:;
goto block76;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
_460 = (frost$core$Bit) {true};
*(&local23) = _460;
goto block71;
block71:;
_463 = *(&local23);
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:172
_466 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:172:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:11
_469 = &(&local31)->$rawValue;
*_469 = _466;
_471 = *(&local31);
*(&local30) = _471;
_474 = *(&local30);
_475 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _474, &$s81);
return _475;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:175
_478 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:175:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_481 = &param0->pushbackBuffer;
_482 = *_481;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_482, _478);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:176
_486 = (frost$core$Bit) {false};
return _486;
block1:;
goto block85;
block85:;

}
frost$core$Bit org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$Bit _1;
bool _4;
bool _5;
frost$core$Bit _6;
bool _8;
frost$core$Bit _11;
frost$core$Bit _14;
frost$core$Bit _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
_1 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_4 = _1.value;
_5 = !_4;
_6 = (frost$core$Bit) {_5};
_8 = _6.value;
if (_8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
_11 = (frost$core$Bit) {false};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
_14 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
_16 = (frost$core$Bit) {true};
return _16;

}
frost$core$Bit org$frostlang$regex$RegexParser$term$R$frost$core$Bit(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit _3;
bool _6;
bool _7;
frost$core$Bit _8;
bool _10;
frost$core$Bit _13;
frost$core$Bit _17;
frost$core$Bit _19;
frost$core$Bit _22;
bool _25;
bool _26;
frost$core$Bit _27;
bool _29;
frost$core$Bit _32;
frost$core$Bit _39;
frost$core$Bit _40;
bool _41;
frost$core$Bit _44;
frost$core$Bit _48;
frost$core$Bit _50;
frost$core$Bit _53;
bool _56;
bool _57;
frost$core$Bit _58;
bool _60;
frost$core$Bit _63;
frost$core$Bit _69;
frost$core$Bit _70;
bool _71;
frost$core$Bit _74;
frost$core$Bit _78;
frost$core$Bit _80;
frost$core$Bit _83;
frost$core$Bit _85;
frost$core$Bit _88;
frost$core$Bit _90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
_3 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:185:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_6 = _3.value;
_7 = !_6;
_8 = (frost$core$Bit) {_7};
_10 = _8.value;
if (_10) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
_13 = (frost$core$Bit) {false};
*(&local0) = _13;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
_17 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
_19 = (frost$core$Bit) {true};
*(&local0) = _19;
goto block3;
block3:;
_22 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_25 = _22.value;
_26 = !_25;
_27 = (frost$core$Bit) {_26};
_29 = _27.value;
if (_29) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_32 = (frost$core$Bit) {false};
return _32;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
_39 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
_40 = frost$core$Bit$$NOT$R$frost$core$Bit(_39);
_41 = _40.value;
if (_41) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
_44 = (frost$core$Bit) {false};
*(&local2) = _44;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
_48 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
_50 = (frost$core$Bit) {true};
*(&local2) = _50;
goto block11;
block11:;
_53 = *(&local2);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_56 = _53.value;
_57 = !_56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_63 = (frost$core$Bit) {false};
*(&local1) = _63;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
_69 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
_70 = frost$core$Bit$$NOT$R$frost$core$Bit(_69);
_71 = _70.value;
if (_71) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_74 = (frost$core$Bit) {false};
*(&local3) = _74;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
_78 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_80 = (frost$core$Bit) {true};
*(&local3) = _80;
goto block15;
block15:;
_83 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_85 = (frost$core$Bit) {true};
*(&local1) = _85;
goto block8;
block8:;
_88 = *(&local1);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_90 = (frost$core$Bit) {true};
return _90;

}
frost$core$Bit org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$Bit local0;
frost$core$Bit local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$Bit local5;
frost$core$Bit _5;
frost$core$Bit _6;
bool _7;
frost$core$Bit _10;
frost$core$Bit _14;
frost$core$Bit _16;
frost$core$Bit _19;
bool _22;
bool _23;
frost$core$Bit _24;
bool _26;
frost$core$Bit _29;
frost$core$Bit _35;
frost$core$Bit _36;
bool _37;
frost$core$Bit _40;
frost$core$Bit _44;
frost$core$Bit _46;
frost$core$Bit _49;
frost$core$Bit _51;
frost$core$Bit _54;
bool _57;
bool _58;
frost$core$Bit _59;
bool _61;
frost$core$Bit _64;
frost$core$Bit _71;
frost$core$Bit _72;
bool _73;
frost$core$Bit _76;
frost$core$Bit _80;
frost$core$Bit _82;
frost$core$Bit _85;
bool _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$core$Bit _95;
frost$core$Bit _101;
frost$core$Bit _102;
bool _103;
frost$core$Bit _106;
frost$core$Bit _110;
frost$core$Bit _112;
frost$core$Bit _115;
frost$core$Bit _117;
frost$core$Bit _120;
frost$core$Bit _122;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
// begin inline call to method org.frostlang.regex.RegexParser.factor():frost.core.Bit from RegexParser.frost:196:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:185
_5 = org$frostlang$regex$RegexParser$atom$R$frost$core$Bit(param0);
_6 = frost$core$Bit$$NOT$R$frost$core$Bit(_5);
_7 = _6.value;
if (_7) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:186
_10 = (frost$core$Bit) {false};
*(&local1) = _10;
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:188
_14 = org$frostlang$regex$RegexParser$metacharacter$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:189
_16 = (frost$core$Bit) {true};
*(&local1) = _16;
goto block6;
block6:;
_19 = *(&local1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:196:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_22 = _19.value;
_23 = !_22;
_24 = (frost$core$Bit) {_23};
_26 = _24.value;
if (_26) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_29 = (frost$core$Bit) {false};
*(&local0) = _29;
goto block3;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:199:13
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
_35 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
_36 = frost$core$Bit$$NOT$R$frost$core$Bit(_35);
_37 = _36.value;
if (_37) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_40 = (frost$core$Bit) {false};
*(&local2) = _40;
goto block10;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
_44 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_46 = (frost$core$Bit) {true};
*(&local2) = _46;
goto block10;
block10:;
_49 = *(&local2);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_51 = (frost$core$Bit) {true};
*(&local0) = _51;
goto block3;
block3:;
_54 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_57 = _54.value;
_58 = !_57;
_59 = (frost$core$Bit) {_58};
_61 = _59.value;
if (_61) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_64 = (frost$core$Bit) {false};
return _64;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
_71 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
_72 = frost$core$Bit$$NOT$R$frost$core$Bit(_71);
_73 = _72.value;
if (_73) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_76 = (frost$core$Bit) {false};
*(&local4) = _76;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
_80 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_82 = (frost$core$Bit) {true};
*(&local4) = _82;
goto block17;
block17:;
_85 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_88 = _85.value;
_89 = !_88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_95 = (frost$core$Bit) {false};
*(&local3) = _95;
goto block14;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
_101 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
_102 = frost$core$Bit$$NOT$R$frost$core$Bit(_101);
_103 = _102.value;
if (_103) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_106 = (frost$core$Bit) {false};
*(&local5) = _106;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
_110 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_112 = (frost$core$Bit) {true};
*(&local5) = _112;
goto block21;
block21:;
_115 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_117 = (frost$core$Bit) {true};
*(&local3) = _117;
goto block14;
block14:;
_120 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_122 = (frost$core$Bit) {true};
return _122;

}
org$frostlang$frostc$ASTNode* org$frostlang$regex$RegexParser$regex$R$org$frostlang$frostc$ASTNode$Q(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

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
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _1;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _2;
frost$core$Int _22;
frost$core$Int* _23;
frost$core$Int _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Bit _29;
frost$core$Range$LTfrost$core$Int$GT _30;
frost$core$Int _31;
frost$core$Int _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
org$frostlang$regex$RegexToken** _51;
org$frostlang$regex$RegexToken* _52;
frost$core$Int _53;
frost$core$Int64 _54;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
int64_t _62;
int64_t _63;
bool _64;
frost$core$Bit _65;
bool _66;
int64_t _68;
int64_t _69;
bool _70;
frost$core$Bit _71;
bool _72;
int64_t _74;
int64_t _75;
int64_t _76;
frost$core$Int _77;
frost$collections$CollectionView* _4;
$fn82 _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _18;
frost$core$Bit _116;
frost$core$Bit _120;
frost$core$Bit _122;
frost$core$Bit _125;
bool _128;
bool _129;
frost$core$Bit _130;
bool _132;
frost$core$Bit _135;
frost$core$Bit _141;
frost$core$Bit _142;
bool _143;
frost$core$Bit _146;
frost$core$Bit _150;
frost$core$Bit _152;
frost$core$Bit _155;
frost$core$Bit _157;
frost$core$Bit _160;
bool _163;
bool _164;
frost$core$Bit _165;
bool _167;
frost$core$Object* _170;
org$frostlang$regex$RegexLexer** _174;
org$frostlang$regex$RegexLexer* _175;
org$frostlang$plex$runtime$DFA** _176;
org$frostlang$plex$runtime$DFA* _177;
frost$core$Int* _178;
frost$core$Int _179;
frost$core$Int _180;
int64_t _181;
int64_t _182;
int64_t _183;
frost$core$Int _184;
frost$core$Int* _185;
org$frostlang$regex$RegexLexer** _188;
org$frostlang$regex$RegexLexer* _189;
org$frostlang$plex$runtime$DFA** _190;
org$frostlang$plex$runtime$DFA* _191;
frost$core$Int* _192;
frost$core$Int _193;
frost$core$Int _196;
frost$core$Int _197;
int64_t _198;
int64_t _199;
int64_t _200;
frost$core$Int _201;
frost$core$Int _204;
frost$core$Int64 _205;
int64_t _206;
frost$core$Char8* _207;
frost$core$Int _210;
frost$core$Int _211;
frost$core$Bit _212;
frost$core$Range$LTfrost$core$Int$GT _213;
frost$core$Int _214;
frost$core$Int _216;
frost$core$Bit _217;
bool _218;
frost$core$Int _219;
int64_t _221;
int64_t _222;
bool _223;
frost$core$Bit _224;
bool _225;
int64_t _227;
int64_t _228;
bool _229;
frost$core$Bit _230;
bool _231;
frost$core$Char8* _234;
frost$core$Int _235;
frost$core$Int _236;
int64_t _237;
int64_t _238;
int64_t _239;
frost$core$Int _240;
frost$core$Int64 _241;
org$frostlang$regex$RegexLexer** _242;
org$frostlang$regex$RegexLexer* _243;
org$frostlang$plex$runtime$DFA** _244;
org$frostlang$plex$runtime$DFA* _245;
frost$core$Char8** _246;
frost$core$Char8* _247;
frost$core$Int _248;
frost$core$Int64 _249;
int64_t _250;
frost$core$Char8 _251;
int64_t _252;
frost$core$Int _255;
int64_t _256;
int64_t _257;
int64_t _258;
frost$core$Int _259;
int64_t _261;
int64_t _262;
bool _263;
frost$core$Bit _264;
bool _265;
int64_t _267;
int64_t _268;
bool _269;
frost$core$Bit _270;
bool _271;
int64_t _273;
int64_t _274;
int64_t _275;
frost$core$Int _276;
org$frostlang$frostc$ASTNode* _280;
frost$core$Int _281;
org$frostlang$frostc$Position _282;
frost$core$String* _283;
frost$core$Char8* _284;
frost$core$Int _285;
org$frostlang$frostc$ASTNode* _288;
frost$core$Object* _289;
frost$core$Object* _291;
frost$core$Object* _293;
frost$core$Int* _82;
frost$core$Int _83;
org$frostlang$regex$RegexLexer** _84;
org$frostlang$regex$RegexLexer* _85;
org$frostlang$plex$runtime$DFA** _86;
org$frostlang$plex$runtime$DFA* _87;
frost$core$Int* _88;
frost$core$Int _89;
org$frostlang$regex$RegexLexer** _90;
org$frostlang$regex$RegexLexer* _91;
org$frostlang$plex$runtime$DFA** _92;
org$frostlang$plex$runtime$DFA* _93;
frost$core$Int* _94;
frost$core$Int _95;
org$frostlang$frostc$Position _96;
org$frostlang$regex$RegexLexer** _99;
org$frostlang$regex$RegexLexer* _100;
org$frostlang$plex$runtime$DFA** _101;
org$frostlang$plex$runtime$DFA* _102;
frost$core$Int* _103;
frost$core$Int _104;
frost$core$Bit _111;
frost$core$Bit _112;
bool _113;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:218
_1 = &param0->pushbackBuffer;
_2 = *_1;
// begin inline call to method frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.clear() from RegexParser.frost:218:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:133
_22 = (frost$core$Int) {0u};
_23 = &_2->_count;
*_23 = _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:134
_26 = (frost$core$Int) {0u};
_27 = &_2->capacity;
_28 = *_27;
_29 = (frost$core$Bit) {false};
_30 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_26, _28, _29);
_31 = _30.min;
*(&local0) = _31;
_33 = _30.max;
_34 = _30.inclusive;
_35 = _34.value;
_36 = (frost$core$Int) {1u};
if (_35) goto block9; else goto block10;
block9:;
_38 = _31.value;
_39 = _33.value;
_40 = _38 <= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block6; else goto block7;
block10:;
_44 = _31.value;
_45 = _33.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:135
_51 = &_2->data;
_52 = *_51;
_53 = *(&local0);
_54 = frost$core$Int64$init$frost$core$Int(_53);
_56 = *(&local0);
_57 = _33.value;
_58 = _56.value;
_59 = _57 - _58;
_60 = (frost$core$Int) {_59};
if (_35) goto block12; else goto block13;
block12:;
_62 = _60.value;
_63 = _36.value;
_64 = _62 >= _63;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block11; else goto block7;
block13:;
_68 = _60.value;
_69 = _36.value;
_70 = _68 > _69;
_71 = (frost$core$Bit) {_70};
_72 = _71.value;
if (_72) goto block11; else goto block7;
block11:;
_74 = _56.value;
_75 = _36.value;
_76 = _74 + _75;
_77 = (frost$core$Int) {_76};
*(&local0) = _77;
goto block6;
block7:;
_4 = ((frost$collections$CollectionView*) _2);
ITable* $tmp83 = _4->$class->itable;
while ($tmp83->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp83 = $tmp83->next;
}
_5 = $tmp83->methods[0];
_6 = _5(_4);
_7 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _6.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
_18 = _13.value;
if (_18) goto block4; else goto block5;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_116 = (frost$core$Bit) {false};
*(&local4) = _116;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
_120 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_122 = (frost$core$Bit) {true};
*(&local4) = _122;
goto block19;
block19:;
_125 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_128 = _125.value;
_129 = !_128;
_130 = (frost$core$Bit) {_129};
_132 = _130.value;
if (_132) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_135 = (frost$core$Bit) {false};
*(&local3) = _135;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
_141 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
_142 = frost$core$Bit$$NOT$R$frost$core$Bit(_141);
_143 = _142.value;
if (_143) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_146 = (frost$core$Bit) {false};
*(&local5) = _146;
goto block23;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
_150 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_152 = (frost$core$Bit) {true};
*(&local5) = _152;
goto block23;
block23:;
_155 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_157 = (frost$core$Bit) {true};
*(&local3) = _157;
goto block16;
block16:;
_160 = *(&local3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:221:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_163 = _160.value;
_164 = !_163;
_165 = (frost$core$Bit) {_164};
_167 = _165.value;
if (_167) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:222
_170 = ((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_170);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:224
_174 = &param0->lexer;
_175 = *_174;
_176 = &_175->dfa;
_177 = *_176;
_178 = &_177->offset;
_179 = *_178;
_180 = (frost$core$Int) {1u};
_181 = _179.value;
_182 = _180.value;
_183 = _181 - _182;
_184 = (frost$core$Int) {_183};
_185 = &_177->offset;
*_185 = _184;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:225
_188 = &param0->lexer;
_189 = *_188;
_190 = &_189->dfa;
_191 = *_190;
_192 = &_191->offset;
_193 = *_192;
*(&local6) = _193;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:226
_196 = *(&local6);
_197 = *(&local2);
_198 = _196.value;
_199 = _197.value;
_200 = _198 - _199;
_201 = (frost$core$Int) {_200};
*(&local7) = _201;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:227
_204 = *(&local7);
_205 = frost$core$Int64$init$frost$core$Int(_204);
_206 = _205.value;
_207 = ((frost$core$Char8*) frostAlloc(_206 * sizeof(frost$core$Char8)));
*(&local8) = _207;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:228
_210 = *(&local2);
_211 = *(&local6);
_212 = (frost$core$Bit) {false};
_213 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_210, _211, _212);
_214 = _213.min;
*(&local9) = _214;
_216 = _213.max;
_217 = _213.inclusive;
_218 = _217.value;
_219 = (frost$core$Int) {1u};
if (_218) goto block30; else goto block31;
block30:;
_221 = _214.value;
_222 = _216.value;
_223 = _221 <= _222;
_224 = (frost$core$Bit) {_223};
_225 = _224.value;
if (_225) goto block27; else goto block28;
block31:;
_227 = _214.value;
_228 = _216.value;
_229 = _227 < _228;
_230 = (frost$core$Bit) {_229};
_231 = _230.value;
if (_231) goto block27; else goto block28;
block27:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:229
_234 = *(&local8);
_235 = *(&local9);
_236 = *(&local2);
_237 = _235.value;
_238 = _236.value;
_239 = _237 - _238;
_240 = (frost$core$Int) {_239};
_241 = frost$core$Int64$init$frost$core$Int(_240);
_242 = &param0->lexer;
_243 = *_242;
_244 = &_243->dfa;
_245 = *_244;
_246 = &_245->source;
_247 = *_246;
_248 = *(&local9);
_249 = frost$core$Int64$init$frost$core$Int(_248);
_250 = _249.value;
_251 = _247[_250];
_252 = _241.value;
_234[_252] = _251;
_255 = *(&local9);
_256 = _216.value;
_257 = _255.value;
_258 = _256 - _257;
_259 = (frost$core$Int) {_258};
if (_218) goto block33; else goto block34;
block33:;
_261 = _259.value;
_262 = _219.value;
_263 = _261 >= _262;
_264 = (frost$core$Bit) {_263};
_265 = _264.value;
if (_265) goto block32; else goto block28;
block34:;
_267 = _259.value;
_268 = _219.value;
_269 = _267 > _268;
_270 = (frost$core$Bit) {_269};
_271 = _270.value;
if (_271) goto block32; else goto block28;
block32:;
_273 = _255.value;
_274 = _219.value;
_275 = _273 + _274;
_276 = (frost$core$Int) {_275};
*(&local9) = _276;
goto block27;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:231
_280 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_281 = (frost$core$Int) {37u};
_282 = *(&local1);
_283 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_284 = *(&local8);
_285 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_283, _284, _285);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_280, _281, _282, _283);
_288 = _280;
_289 = ((frost$core$Object*) _288);
frost$core$Frost$ref$frost$core$Object$Q(_289);
_291 = ((frost$core$Object*) _283);
frost$core$Frost$unref$frost$core$Object$Q(_291);
_293 = ((frost$core$Object*) _280);
frost$core$Frost$unref$frost$core$Object$Q(_293);
return _288;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:219
_82 = &param0->pathIndex;
_83 = *_82;
_84 = &param0->lexer;
_85 = *_84;
_86 = &_85->dfa;
_87 = *_86;
_88 = &_87->line;
_89 = *_88;
_90 = &param0->lexer;
_91 = *_90;
_92 = &_91->dfa;
_93 = *_92;
_94 = &_93->column;
_95 = *_94;
_96 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_83, _89, _95);
*(&local1) = _96;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:220
_99 = &param0->lexer;
_100 = *_99;
_101 = &_100->dfa;
_102 = *_101;
_103 = &_102->offset;
_104 = *_103;
*(&local2) = _104;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:221
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:221:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
_111 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
_112 = frost$core$Bit$$NOT$R$frost$core$Bit(_111);
_113 = _112.value;
if (_113) goto block20; else goto block21;
block5:;
_15 = (frost$core$Int) {132u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s84, _15, &$s85);
abort(); // unreachable

}
void org$frostlang$regex$RegexParser$cleanup(void* rawSelf) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$Object* _1;
org$frostlang$regex$RegexLexer** _3;
org$frostlang$regex$RegexLexer* _4;
frost$core$Object* _5;
frost$threads$MessageQueue** _7;
frost$threads$MessageQueue* _8;
frost$core$Object* _9;
frost$io$File** _11;
frost$io$File* _12;
frost$core$Object* _13;
frost$core$String** _15;
frost$core$String* _16;
frost$core$Object* _17;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _19;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->lexer;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->errors;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->path;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->source;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->pushbackBuffer;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return;

}

