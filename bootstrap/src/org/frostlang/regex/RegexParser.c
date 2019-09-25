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
#include "frost/unsafe/Pointer.h"
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

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x50\x61\x72\x73\x65\x72", 31, -6942695123981101410, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x63\x6c\x65\x61\x72\x28\x29", 107, -5019524807047093654, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20\x62\x75\x74\x20\x66\x6f\x75\x6e\x64\x20\x27", 13, -2601544468634851439, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78", 85, -1074977990553908571, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5d", 1, -5808499698549242648, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s60 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e", 156, 7846330876313425210, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x29\x27", 3, -6209632553346483666, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x5d\x27", 3, -6228684890836339374, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x6e\x20\x69\x6e\x74\x65\x67\x65\x72", 10, 3145872080886222316, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27\x7d\x27", 3, -6259365663303883918, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 22, 6468124764262308515, NULL };
static frost$core$String $s85 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x72\x65\x67\x65\x78\x2e\x52\x65\x67\x65\x78\x54\x6f\x6b\x65\x6e\x3e\x2e\x63\x6c\x65\x61\x72\x28\x29", 107, -5019524807047093654, NULL };

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
frost$unsafe$Pointer* _7;
frost$unsafe$Pointer _8;
frost$unsafe$Pointer* _9;
frost$unsafe$Pointer _10;
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
frost$unsafe$Pointer* _95;
frost$unsafe$Pointer _96;
int64_t _97;
frost$core$Int _98;
frost$core$Int64 _99;
frost$core$Int _101;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
int64_t _107;
int64_t _108;
bool _109;
frost$core$Bit _110;
bool _111;
int64_t _113;
int64_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
int64_t _119;
int64_t _120;
int64_t _121;
frost$core$Int _122;
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:20
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
_97 = _96.value;
_98 = *(&local0);
_99 = frost$core$Int64$init$frost$core$Int(_98);
_101 = *(&local0);
_102 = _77.value;
_103 = _101.value;
_104 = _102 - _103;
_105 = (frost$core$Int) {_104};
if (_79) goto block13; else goto block14;
block13:;
_107 = _105.value;
_108 = _80.value;
_109 = _107 >= _108;
_110 = (frost$core$Bit) {_109};
_111 = _110.value;
if (_111) goto block12; else goto block8;
block14:;
_113 = _105.value;
_114 = _80.value;
_115 = _113 > _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block12; else goto block8;
block12:;
_119 = _101.value;
_120 = _80.value;
_121 = _119 + _120;
_122 = (frost$core$Int) {_121};
*(&local0) = _122;
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
frost$unsafe$Pointer* _50;
frost$unsafe$Pointer _51;
int64_t _52;
frost$core$Int64 _53;
int64_t _54;
org$frostlang$regex$RegexToken _55;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _59;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _60;
frost$core$Int _61;
org$frostlang$regex$RegexToken _62;
org$frostlang$regex$RegexToken _64;
org$frostlang$regex$RegexLexer** _67;
org$frostlang$regex$RegexLexer* _68;
org$frostlang$plex$runtime$DFA** _71;
org$frostlang$plex$runtime$DFA* _72;
org$frostlang$plex$runtime$RawToken _73;
org$frostlang$plex$runtime$RawToken _76;
frost$core$Int _77;
frost$core$Int* _80;
org$frostlang$regex$RegexToken$Kind _82;
org$frostlang$regex$RegexToken$Kind _85;
org$frostlang$plex$runtime$RawToken _86;
frost$core$String$Index _87;
org$frostlang$plex$runtime$RawToken _88;
frost$core$String$Index _89;
frost$core$Int* _90;
frost$core$Int _91;
org$frostlang$plex$runtime$RawToken _92;
frost$core$Int _93;
org$frostlang$plex$runtime$RawToken _94;
frost$core$Int _95;
org$frostlang$frostc$Position _96;
org$frostlang$regex$RegexToken _97;
org$frostlang$regex$RegexToken _101;
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
_52 = _51.value;
_53 = frost$core$Int64$init$frost$core$Int(_28);
_54 = _53.value;
_55 = ((org$frostlang$regex$RegexToken*)_52)[_54];
*(&local1) = _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:38
_59 = &param0->pushbackBuffer;
_60 = *_59;
_61 = *(&local0);
_62 = frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$removeIndex$frost$core$Int$R$org$frostlang$regex$RegexToken(_60, _61);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:39
_64 = *(&local1);
return _64;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:41
_67 = &param0->lexer;
_68 = *_67;
// begin inline call to method org.frostlang.regex.RegexLexer.next():org.frostlang.regex.RegexToken from RegexParser.frost:41:33
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:383
_71 = &_68->dfa;
_72 = *_71;
_73 = org$frostlang$plex$runtime$DFA$next$R$org$frostlang$plex$runtime$RawToken(_72);
*(&local2) = _73;
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexLexer.frost:384
_76 = *(&local2);
_77 = _76.kind;
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexLexer.frost:384:82
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_80 = &(&local4)->$rawValue;
*_80 = _77;
_82 = *(&local4);
*(&local3) = _82;
_85 = *(&local3);
_86 = *(&local2);
_87 = _86.start;
_88 = *(&local2);
_89 = _88.end;
_90 = &_68->file;
_91 = *_90;
_92 = *(&local2);
_93 = _92.line;
_94 = *(&local2);
_95 = _94.column;
_96 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_91, _93, _95);
_97 = org$frostlang$regex$RegexToken$init$org$frostlang$regex$RegexToken$Kind$frost$core$String$Index$frost$core$String$Index$org$frostlang$frostc$Position(_85, _87, _89, _96);
*(&local5) = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:42
_101 = *(&local5);
return _101;

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
frost$unsafe$Pointer* _59;
frost$unsafe$Pointer _60;
int64_t _61;
frost$core$Int64 _62;
int64_t _63;
org$frostlang$regex$RegexToken _64;
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
_61 = _60.value;
_62 = frost$core$Int64$init$frost$core$Int(_37);
_63 = _62.value;
_64 = ((org$frostlang$regex$RegexToken*)_61)[_63];
return _64;

}
frost$core$Bit org$frostlang$regex$RegexParser$checkNext$org$frostlang$regex$RegexToken$Kind$R$frost$core$Bit(void* rawSelf, org$frostlang$regex$RegexToken$Kind param1) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

org$frostlang$regex$RegexToken local0;
org$frostlang$regex$RegexToken _1;
org$frostlang$regex$RegexToken _4;
org$frostlang$regex$RegexToken$Kind _5;
frost$core$Equatable* _6;
frost$core$Equatable* _7;
$fn22 _8;
frost$core$Bit _9;
bool _10;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Bit _17;
org$frostlang$regex$RegexToken _20;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _23;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _24;
frost$core$Bit _28;
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
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp24;
$tmp24 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp24->value = param1;
_7 = ((frost$core$Equatable*) $tmp24);
ITable* $tmp25 = _6->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp25 = $tmp25->next;
}
_8 = $tmp25->methods[0];
_9 = _8(_6, _7);
_10 = _9.value;
_11 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_13);
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_17 = (frost$core$Bit) {true};
return _17;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_20 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_23 = &param0->pushbackBuffer;
_24 = *_23;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_24, _20);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_28 = (frost$core$Bit) {false};
return _28;

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
$fn26 _8;
frost$core$Bit _9;
bool _10;
frost$core$Object* _11;
frost$core$Object* _13;
frost$core$Bit _17;
org$frostlang$regex$RegexToken _20;
frost$core$String* _21;
frost$core$String* _22;
org$frostlang$regex$RegexToken _23;
frost$core$String** _26;
frost$core$String* _27;
frost$core$String$Index _28;
frost$core$String$Index _29;
frost$core$Bit _30;
frost$core$Range$LTfrost$core$String$Index$GT _31;
frost$core$String* _32;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$String* _38;
frost$core$String* _39;
frost$threads$MessageQueue** _42;
frost$threads$MessageQueue* _43;
org$frostlang$frostc$Compiler$Message* _44;
frost$core$Int _45;
frost$io$File** _46;
frost$io$File* _47;
frost$core$String** _50;
frost$core$String* _51;
frost$core$String$Index$nullable _52;
frost$core$String$Index$nullable _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$String** _61;
frost$core$String* _62;
frost$core$String** _63;
frost$core$String* _64;
frost$core$String$Index$nullable _65;
bool _66;
frost$core$Bit _67;
bool _68;
frost$core$Int _70;
frost$core$String$Index _73;
frost$core$String$Index _74;
frost$core$String$Index$nullable _75;
frost$core$Bit _76;
frost$core$Range$LTfrost$core$String$Index$Q$GT _77;
frost$core$String* _78;
frost$core$Object* _79;
frost$core$Object* _81;
frost$core$Object* _84;
frost$core$String** _89;
frost$core$String* _90;
frost$core$Object* _91;
frost$core$Object* _94;
frost$core$String* _98;
org$frostlang$frostc$Position _99;
frost$core$Int _100;
org$frostlang$frostc$Position _101;
frost$core$Int _102;
frost$core$Immutable* _104;
frost$core$Object* _106;
frost$core$String* _108;
frost$core$Object* _109;
frost$core$Object* _112;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _121;
frost$core$Object* _123;
frost$core$Bit _126;
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
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp28;
$tmp28 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp28->value = param1;
_7 = ((frost$core$Equatable*) $tmp28);
ITable* $tmp29 = _6->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp29 = $tmp29->next;
}
_8 = $tmp29->methods[0];
_9 = _8(_6, _7);
_10 = _9.value;
_11 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_13);
if (_10) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:68
_17 = (frost$core$Bit) {true};
return _17;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:70
_20 = *(&local0);
_21 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s30, param2);
_22 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_21, &$s31);
_23 = *(&local0);
// begin inline call to function org.frostlang.regex.RegexParser.text(token:org.frostlang.regex.RegexToken):frost.core.String from RegexParser.frost:70:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:80
_26 = &param0->source;
_27 = *_26;
_28 = _23.start;
_29 = _23.end;
_30 = (frost$core$Bit) {false};
_31 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_28, _29, _30);
_32 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_27, _31);
_33 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_22, _32);
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_38, &$s32);
// begin inline call to method org.frostlang.regex.RegexParser.error(token:org.frostlang.regex.RegexToken, msg:frost.core.String) from RegexParser.frost:70:14
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
_42 = &param0->errors;
_43 = *_42;
_44 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Message), (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
_45 = (frost$core$Int) {0u};
_46 = &param0->path;
_47 = *_46;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_50 = &_47->path;
_51 = *_50;
_52 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(_51, &$s33);
*(&local2) = _52;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_55 = *(&local2);
_56 = _55.nonnull;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_61 = &_47->path;
_62 = *_61;
_63 = &_47->path;
_64 = *_63;
_65 = *(&local2);
_66 = _65.nonnull;
_67 = (frost$core$Bit) {_66};
_68 = _67.value;
if (_68) goto block9; else goto block10;
block10:;
_70 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _70, &$s35);
abort(); // unreachable
block9:;
_73 = ((frost$core$String$Index) _65.value);
_74 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_64, _73);
_75 = ((frost$core$String$Index$nullable) { _74, true });
_76 = (frost$core$Bit) {false};
_77 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_75, ((frost$core$String$Index$nullable) { .nonnull = false }), _76);
_78 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_62, _77);
_79 = ((frost$core$Object*) _78);
frost$core$Frost$ref$frost$core$Object$Q(_79);
_81 = ((frost$core$Object*) _78);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local1) = _78;
_84 = ((frost$core$Object*) _78);
frost$core$Frost$ref$frost$core$Object$Q(_84);
goto block5;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_89 = &_47->path;
_90 = *_89;
_91 = ((frost$core$Object*) _90);
frost$core$Frost$ref$frost$core$Object$Q(_91);
*(&local1) = _90;
_94 = ((frost$core$Object*) _90);
frost$core$Frost$ref$frost$core$Object$Q(_94);
goto block5;
block7:;
goto block5;
block5:;
_98 = *(&local1);
_99 = _20.position;
_100 = _99.line;
_101 = _20.position;
_102 = _101.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String(_44, _45, _98, _100, _102, _39);
_104 = ((frost$core$Immutable*) _44);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(_43, _104);
_106 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = *(&local1);
_109 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_109);
*(&local1) = ((frost$core$String*) NULL);
_112 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_115 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_121);
_123 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_123);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:71
_126 = (frost$core$Bit) {false};
return _126;

}
void org$frostlang$regex$RegexParser$error$org$frostlang$regex$RegexToken$frost$core$String(void* rawSelf, org$frostlang$regex$RegexToken param1, frost$core$String* param2) {
org$frostlang$regex$RegexParser* param0 = (org$frostlang$regex$RegexParser*) rawSelf;

frost$core$String* local0 = NULL;
frost$core$String$Index$nullable local1;
frost$threads$MessageQueue** _1;
frost$threads$MessageQueue* _2;
org$frostlang$frostc$Compiler$Message* _3;
frost$core$Int _4;
frost$io$File** _5;
frost$io$File* _6;
frost$core$String** _9;
frost$core$String* _10;
frost$core$String$Index _13;
frost$core$String$Index$nullable _14;
frost$core$String$Index$nullable _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$core$String** _24;
frost$core$String* _25;
frost$core$String** _26;
frost$core$String* _27;
frost$core$String$Index$nullable _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _33;
frost$core$String$Index _36;
frost$core$String$Index _37;
frost$core$String$Index$nullable _38;
frost$core$Bit _39;
frost$core$Range$LTfrost$core$String$Index$Q$GT _40;
frost$core$String* _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _47;
frost$core$String** _52;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$String* _61;
org$frostlang$frostc$Position _62;
frost$core$Int _63;
org$frostlang$frostc$Position _64;
frost$core$Int _65;
frost$core$Immutable* _67;
frost$core$Object* _69;
frost$core$String* _71;
frost$core$Object* _72;
frost$core$Object* _75;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:75
_1 = &param0->errors;
_2 = *_1;
_3 = (org$frostlang$frostc$Compiler$Message*) frostObjectAlloc(sizeof(org$frostlang$frostc$Compiler$Message), (frost$core$Class*) &org$frostlang$frostc$Compiler$Message$class);
_4 = (frost$core$Int) {0u};
_5 = &param0->path;
_6 = *_5;
// begin inline call to function frost.io.File.get_name():frost.core.String from RegexParser.frost:75:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:147
_9 = &_6->path;
_10 = *_9;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:147:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
_13 = frost$core$String$get_end$R$frost$core$String$Index(_10);
_14 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(_10, &$s36, _13);
*(&local1) = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
_18 = *(&local1);
_19 = _18.nonnull;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
_24 = &_6->path;
_25 = *_24;
_26 = &_6->path;
_27 = *_26;
_28 = *(&local1);
_29 = _28.nonnull;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block6; else goto block7;
block7:;
_33 = (frost$core$Int) {149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s37, _33, &$s38);
abort(); // unreachable
block6:;
_36 = ((frost$core$String$Index) _28.value);
_37 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_27, _36);
_38 = ((frost$core$String$Index$nullable) { _37, true });
_39 = (frost$core$Bit) {false};
_40 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_38, ((frost$core$String$Index$nullable) { .nonnull = false }), _39);
_41 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_25, _40);
_42 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_44);
*(&local0) = _41;
_47 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_47);
goto block1;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:152
_52 = &_6->path;
_53 = *_52;
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
*(&local0) = _53;
_57 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_57);
goto block1;
block4:;
goto block1;
block1:;
_61 = *(&local0);
_62 = param1.position;
_63 = _62.line;
_64 = param1.position;
_65 = _64.column;
org$frostlang$frostc$Compiler$Message$init$frost$core$Int$frost$core$String$frost$core$Int$frost$core$Int$frost$core$String(_3, _4, _61, _63, _65, param2);
_67 = ((frost$core$Immutable*) _3);
frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(_2, _67);
_69 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = *(&local0);
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
*(&local0) = ((frost$core$String*) NULL);
_75 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_75);
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
frost$core$Int _41;
frost$core$Int* _44;
org$frostlang$regex$RegexToken$Kind _46;
org$frostlang$regex$RegexToken$Kind _49;
frost$core$Equatable* _50;
$fn39 _51;
frost$core$Bit _52;
bool _53;
frost$core$Object* _54;
frost$core$Object* _56;
frost$core$Bit _60;
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
_41 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:93:43
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_44 = &(&local2)->$rawValue;
*_44 = _41;
_46 = *(&local2);
*(&local1) = _46;
_49 = *(&local1);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp42->value = _49;
_50 = ((frost$core$Equatable*) $tmp42);
ITable* $tmp43 = _40->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp43 = $tmp43->next;
}
_51 = $tmp43->methods[0];
_52 = _51(_40, _50);
_53 = _52.value;
_54 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_56);
if (_53) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:94
_60 = (frost$core$Bit) {false};
return _60;
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
$fn44 _42;
frost$core$Bit _43;
bool _44;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Bit _51;
org$frostlang$regex$RegexToken _55;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _58;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _59;
frost$core$Bit _63;
frost$core$Bit _66;
bool _67;
frost$core$Bit _71;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
_1 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
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
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp47->value = _32;
_41 = ((frost$core$Equatable*) $tmp47);
ITable* $tmp48 = _40->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp48 = $tmp48->next;
}
_42 = $tmp48->methods[0];
_43 = _42(_40, _41);
_44 = _43.value;
_45 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_47);
if (_44) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_51 = (frost$core$Bit) {true};
*(&local4) = _51;
goto block9;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_55 = *(&local5);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_58 = &param0->pushbackBuffer;
_59 = *_58;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_59, _55);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_63 = (frost$core$Bit) {false};
*(&local4) = _63;
goto block9;
block9:;
_66 = *(&local4);
_67 = _66.value;
if (_67) goto block6; else goto block7;
block6:;
goto block5;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
_71 = (frost$core$Bit) {true};
return _71;

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
$fn49 _46;
frost$core$Bit _47;
bool _48;
frost$core$Object* _49;
frost$core$Object* _51;
frost$core$Bit _55;
org$frostlang$regex$RegexToken _59;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _62;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _63;
frost$core$Bit _67;
frost$core$Bit _70;
frost$core$Bit _72;
frost$core$Int _74;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _82;
frost$core$Bit _85;
frost$core$Int _87;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _95;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _100;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _101;
frost$collections$CollectionView* _102;
$fn50 _103;
frost$core$Int _104;
frost$core$Int _105;
int64_t _108;
int64_t _109;
bool _110;
frost$core$Bit _111;
bool _113;
org$frostlang$regex$RegexToken _116;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _119;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _120;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _125;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _126;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _127;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _128;
frost$collections$CollectionView* _129;
$fn51 _130;
frost$core$Int _131;
frost$core$Int _132;
int64_t _133;
int64_t _134;
int64_t _135;
frost$core$Int _136;
frost$core$Int _138;
int64_t _139;
int64_t _140;
bool _141;
frost$core$Bit _142;
bool _143;
frost$collections$CollectionView* _145;
$fn52 _146;
frost$core$Int _147;
int64_t _148;
int64_t _149;
bool _150;
frost$core$Bit _151;
bool _152;
frost$core$Int _154;
frost$unsafe$Pointer* _158;
frost$unsafe$Pointer _159;
int64_t _160;
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
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
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp54;
$tmp54 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp54->value = _36;
_45 = ((frost$core$Equatable*) $tmp54);
ITable* $tmp55 = _44->$class->itable;
while ($tmp55->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp55 = $tmp55->next;
}
_46 = $tmp55->methods[0];
_47 = _46(_44, _45);
_48 = _47.value;
_49 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _44);
frost$core$Frost$unref$frost$core$Object$Q(_51);
if (_48) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_55 = (frost$core$Bit) {true};
*(&local3) = _55;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_59 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_62 = &param0->pushbackBuffer;
_63 = *_62;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_63, _59);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_67 = (frost$core$Bit) {false};
*(&local3) = _67;
goto block8;
block8:;
_70 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:119
_72 = (frost$core$Bit) {true};
return _72;
block5:;
_74 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:121:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_77 = _6.value;
_78 = _74.value;
_79 = _77 == _78;
_80 = (frost$core$Bit) {_79};
_82 = _80.value;
if (_82) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:122
_85 = (frost$core$Bit) {true};
return _85;
block13:;
_87 = (frost$core$Int) {17u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:124:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_90 = _6.value;
_91 = _87.value;
_92 = _90 == _91;
_93 = (frost$core$Bit) {_92};
_95 = _93.value;
if (_95) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:125
// begin inline call to method org.frostlang.regex.RegexParser.peek():org.frostlang.regex.RegexToken from RegexParser.frost:125:27
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:50
_100 = &param0->pushbackBuffer;
_101 = *_100;
_102 = ((frost$collections$CollectionView*) _101);
ITable* $tmp56 = _102->$class->itable;
while ($tmp56->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp56 = $tmp56->next;
}
_103 = $tmp56->methods[0];
_104 = _103(_102);
_105 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:50:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_108 = _104.value;
_109 = _105.value;
_110 = _108 == _109;
_111 = (frost$core$Bit) {_110};
_113 = _111.value;
if (_113) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:51
_116 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:51:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_119 = &param0->pushbackBuffer;
_120 = *_119;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_120, _116);
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:53
_125 = &param0->pushbackBuffer;
_126 = *_125;
_127 = &param0->pushbackBuffer;
_128 = *_127;
_129 = ((frost$collections$CollectionView*) _128);
ITable* $tmp57 = _129->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp57 = $tmp57->next;
}
_130 = $tmp57->methods[0];
_131 = _130(_129);
_132 = (frost$core$Int) {1u};
_133 = _131.value;
_134 = _132.value;
_135 = _133 - _134;
_136 = (frost$core$Int) {_135};
// begin inline call to function frost.collections.SpecializedArray<org.frostlang.regex.RegexToken>.[](index:frost.core.Int):org.frostlang.regex.RegexToken from RegexParser.frost:53:30
_138 = (frost$core$Int) {0u};
_139 = _136.value;
_140 = _138.value;
_141 = _139 >= _140;
_142 = (frost$core$Bit) {_141};
_143 = _142.value;
if (_143) goto block26; else goto block25;
block26:;
_145 = ((frost$collections$CollectionView*) _126);
ITable* $tmp58 = _145->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp58 = $tmp58->next;
}
_146 = $tmp58->methods[0];
_147 = _146(_145);
_148 = _136.value;
_149 = _147.value;
_150 = _148 < _149;
_151 = (frost$core$Bit) {_150};
_152 = _151.value;
if (_152) goto block24; else goto block25;
block25:;
_154 = (frost$core$Int) {67u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s59, _154, &$s60);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/SpecializedArray.frost:68
_158 = &_126->data;
_159 = *_158;
_160 = _159.value;
_161 = frost$core$Int64$init$frost$core$Int(_136);
_162 = _161.value;
_163 = ((org$frostlang$regex$RegexToken*)_160)[_162];
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
$fn61 _109;
frost$core$Bit _110;
bool _111;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Bit _118;
org$frostlang$regex$RegexToken _122;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _125;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _126;
frost$core$Bit _130;
frost$core$Bit _133;
frost$core$Bit _139;
frost$core$Bit _140;
bool _141;
frost$core$Bit _144;
frost$core$Bit _148;
frost$core$Bit _150;
frost$core$Bit _153;
bool _156;
bool _157;
frost$core$Bit _158;
bool _160;
frost$core$Bit _163;
frost$core$Bit _169;
frost$core$Bit _170;
bool _171;
frost$core$Bit _174;
frost$core$Bit _178;
frost$core$Bit _180;
frost$core$Bit _183;
frost$core$Bit _185;
frost$core$Bit _188;
bool _191;
bool _192;
frost$core$Bit _193;
bool _195;
frost$core$Bit _198;
frost$core$Int _201;
frost$core$Int* _204;
org$frostlang$regex$RegexToken$Kind _206;
org$frostlang$regex$RegexToken$Kind _209;
frost$core$Bit _210;
frost$core$Int _212;
int64_t _215;
int64_t _216;
bool _217;
frost$core$Bit _218;
bool _220;
frost$core$Bit _223;
bool _226;
bool _227;
frost$core$Bit _228;
bool _230;
frost$core$Bit _233;
frost$core$Int _236;
frost$core$Int* _239;
org$frostlang$regex$RegexToken$Kind _241;
org$frostlang$regex$RegexToken$Kind _244;
frost$core$Bit _245;
frost$core$Int _247;
int64_t _250;
int64_t _251;
bool _252;
frost$core$Bit _253;
bool _255;
frost$core$Int _260;
frost$core$Int* _263;
org$frostlang$regex$RegexToken$Kind _265;
org$frostlang$regex$RegexToken$Kind _268;
frost$core$Bit _269;
bool _272;
bool _273;
frost$core$Bit _274;
bool _276;
frost$core$Bit _279;
frost$core$Int _284;
frost$core$Int* _287;
org$frostlang$regex$RegexToken$Kind _289;
org$frostlang$regex$RegexToken$Kind _292;
org$frostlang$regex$RegexToken _295;
org$frostlang$regex$RegexToken _298;
org$frostlang$regex$RegexToken$Kind _299;
frost$core$Equatable* _300;
frost$core$Equatable* _301;
$fn62 _302;
frost$core$Bit _303;
bool _304;
frost$core$Object* _305;
frost$core$Object* _307;
frost$core$Bit _311;
org$frostlang$regex$RegexToken _315;
frost$core$Bit _318;
frost$core$Bit _321;
bool _322;
frost$core$Bit _326;
frost$core$Bit _329;
bool _332;
bool _333;
frost$core$Bit _334;
bool _336;
frost$core$Bit _339;
frost$core$Int _342;
frost$core$Int* _345;
org$frostlang$regex$RegexToken$Kind _347;
org$frostlang$regex$RegexToken$Kind _350;
org$frostlang$regex$RegexToken _353;
org$frostlang$regex$RegexToken _356;
org$frostlang$regex$RegexToken$Kind _357;
frost$core$Equatable* _358;
frost$core$Equatable* _359;
$fn63 _360;
frost$core$Bit _361;
bool _362;
frost$core$Object* _363;
frost$core$Object* _365;
frost$core$Bit _369;
org$frostlang$regex$RegexToken _373;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _376;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _377;
frost$core$Bit _381;
frost$core$Bit _384;
bool _385;
frost$core$Int _390;
frost$core$Int* _393;
org$frostlang$regex$RegexToken$Kind _395;
org$frostlang$regex$RegexToken$Kind _398;
frost$core$Bit _399;
bool _402;
bool _403;
frost$core$Bit _404;
bool _406;
frost$core$Bit _409;
frost$core$Int _414;
frost$core$Int* _417;
org$frostlang$regex$RegexToken$Kind _419;
org$frostlang$regex$RegexToken$Kind _422;
org$frostlang$regex$RegexToken _425;
org$frostlang$regex$RegexToken _428;
org$frostlang$regex$RegexToken$Kind _429;
frost$core$Equatable* _430;
frost$core$Equatable* _431;
$fn64 _432;
frost$core$Bit _433;
bool _434;
frost$core$Object* _435;
frost$core$Object* _437;
frost$core$Bit _441;
org$frostlang$regex$RegexToken _445;
frost$core$Bit _448;
frost$core$Bit _451;
bool _452;
frost$core$Bit _456;
frost$core$Bit _459;
frost$core$Int _462;
frost$core$Int* _465;
org$frostlang$regex$RegexToken$Kind _467;
org$frostlang$regex$RegexToken$Kind _470;
frost$core$Bit _471;
org$frostlang$regex$RegexToken _474;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT** _477;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT* _478;
frost$core$Bit _482;
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
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
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
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp66;
$tmp66 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp66->value = _99;
_108 = ((frost$core$Equatable*) $tmp66);
ITable* $tmp67 = _107->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp67 = $tmp67->next;
}
_109 = $tmp67->methods[0];
_110 = _109(_107, _108);
_111 = _110.value;
_112 = ((frost$core$Object*) _108);
frost$core$Frost$unref$frost$core$Object$Q(_112);
_114 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_114);
if (_111) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_118 = (frost$core$Bit) {true};
*(&local3) = _118;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_122 = *(&local4);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_125 = &param0->pushbackBuffer;
_126 = *_125;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_126, _122);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_130 = (frost$core$Bit) {false};
*(&local3) = _130;
goto block21;
block21:;
_133 = *(&local3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:154
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:154:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
_139 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
_140 = frost$core$Bit$$NOT$R$frost$core$Bit(_139);
_141 = _140.value;
if (_141) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:197
_144 = (frost$core$Bit) {false};
*(&local6) = _144;
goto block30;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
_148 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_150 = (frost$core$Bit) {true};
*(&local6) = _150;
goto block30;
block30:;
_153 = *(&local6);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_156 = _153.value;
_157 = !_156;
_158 = (frost$core$Bit) {_157};
_160 = _158.value;
if (_160) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_163 = (frost$core$Bit) {false};
*(&local5) = _163;
goto block27;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
_169 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
_170 = frost$core$Bit$$NOT$R$frost$core$Bit(_169);
_171 = _170.value;
if (_171) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_174 = (frost$core$Bit) {false};
*(&local7) = _174;
goto block34;
block36:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
_178 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_180 = (frost$core$Bit) {true};
*(&local7) = _180;
goto block34;
block34:;
_183 = *(&local7);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_185 = (frost$core$Bit) {true};
*(&local5) = _185;
goto block27;
block27:;
_188 = *(&local5);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:154:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_191 = _188.value;
_192 = !_191;
_193 = (frost$core$Bit) {_192};
_195 = _193.value;
if (_195) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:155
_198 = (frost$core$Bit) {false};
return _198;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:157
_201 = (frost$core$Int) {9u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:157:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_204 = &(&local9)->$rawValue;
*_204 = _201;
_206 = *(&local9);
*(&local8) = _206;
_209 = *(&local8);
_210 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _209, &$s68);
return _210;
block18:;
_212 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:159:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_215 = _6.value;
_216 = _212.value;
_217 = _215 == _216;
_218 = (frost$core$Bit) {_217};
_220 = _218.value;
if (_220) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:160
_223 = org$frostlang$regex$RegexParser$characterClass$R$frost$core$Bit(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:160:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_226 = _223.value;
_227 = !_226;
_228 = (frost$core$Bit) {_227};
_230 = _228.value;
if (_230) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:161
_233 = (frost$core$Bit) {false};
return _233;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:163
_236 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:163:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_239 = &(&local11)->$rawValue;
*_239 = _236;
_241 = *(&local11);
*(&local10) = _241;
_244 = *(&local10);
_245 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _244, &$s69);
return _245;
block40:;
_247 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from RegexParser.frost:165:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_250 = _6.value;
_251 = _247.value;
_252 = _250 == _251;
_253 = (frost$core$Bit) {_252};
_255 = _253.value;
if (_255) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:166
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:166:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
_260 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_263 = &(&local14)->$rawValue;
*_263 = _260;
_265 = *(&local14);
*(&local13) = _265;
_268 = *(&local13);
_269 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _268, &$s70);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_272 = _269.value;
_273 = !_272;
_274 = (frost$core$Bit) {_273};
_276 = _274.value;
if (_276) goto block52; else goto block53;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
_279 = (frost$core$Bit) {false};
*(&local12) = _279;
goto block51;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block56;
block56:;
_284 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_287 = &(&local16)->$rawValue;
*_287 = _284;
_289 = *(&local16);
*(&local15) = _289;
_292 = *(&local15);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_295 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local18) = _295;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_298 = *(&local18);
_299 = _298.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp71;
$tmp71 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp71->value = _299;
_300 = ((frost$core$Equatable*) $tmp71);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp72;
$tmp72 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp72->value = _292;
_301 = ((frost$core$Equatable*) $tmp72);
ITable* $tmp73 = _300->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp73 = $tmp73->next;
}
_302 = $tmp73->methods[0];
_303 = _302(_300, _301);
_304 = _303.value;
_305 = ((frost$core$Object*) _301);
frost$core$Frost$unref$frost$core$Object$Q(_305);
_307 = ((frost$core$Object*) _300);
frost$core$Frost$unref$frost$core$Object$Q(_307);
if (_304) goto block61; else goto block62;
block61:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_311 = (frost$core$Bit) {true};
*(&local17) = _311;
goto block60;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_315 = *(&local18);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, _315);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_318 = (frost$core$Bit) {false};
*(&local17) = _318;
goto block60;
block60:;
_321 = *(&local17);
_322 = _321.value;
if (_322) goto block57; else goto block58;
block57:;
goto block56;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
_326 = (frost$core$Bit) {true};
*(&local12) = _326;
goto block51;
block51:;
_329 = *(&local12);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:166:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_332 = _329.value;
_333 = !_332;
_334 = (frost$core$Bit) {_333};
_336 = _334.value;
if (_336) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:167
_339 = (frost$core$Bit) {false};
return _339;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:169
_342 = (frost$core$Int) {14u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:169:45
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_345 = &(&local20)->$rawValue;
*_345 = _342;
_347 = *(&local20);
*(&local19) = _347;
_350 = *(&local19);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:169:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_353 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local22) = _353;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_356 = *(&local22);
_357 = _356.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp74;
$tmp74 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp74->value = _357;
_358 = ((frost$core$Equatable*) $tmp74);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp75;
$tmp75 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp75->value = _350;
_359 = ((frost$core$Equatable*) $tmp75);
ITable* $tmp76 = _358->$class->itable;
while ($tmp76->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp76 = $tmp76->next;
}
_360 = $tmp76->methods[0];
_361 = _360(_358, _359);
_362 = _361.value;
_363 = ((frost$core$Object*) _359);
frost$core$Frost$unref$frost$core$Object$Q(_363);
_365 = ((frost$core$Object*) _358);
frost$core$Frost$unref$frost$core$Object$Q(_365);
if (_362) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_369 = (frost$core$Bit) {true};
*(&local21) = _369;
goto block67;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_373 = *(&local22);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:61:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_376 = &param0->pushbackBuffer;
_377 = *_376;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_377, _373);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_381 = (frost$core$Bit) {false};
*(&local21) = _381;
goto block67;
block67:;
_384 = *(&local21);
_385 = _384.value;
if (_385) goto block64; else goto block65;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:170
// begin inline call to method org.frostlang.regex.RegexParser.integer():frost.core.Bit from RegexParser.frost:170:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:103
_390 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:103:35
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_393 = &(&local25)->$rawValue;
*_393 = _390;
_395 = *(&local25);
*(&local24) = _395;
_398 = *(&local24);
_399 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _398, &$s77);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:103:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_402 = _399.value;
_403 = !_402;
_404 = (frost$core$Bit) {_403};
_406 = _404.value;
if (_406) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:104
_409 = (frost$core$Bit) {false};
*(&local23) = _409;
goto block71;
block73:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:106
goto block76;
block76:;
_414 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:106:40
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_417 = &(&local27)->$rawValue;
*_417 = _414;
_419 = *(&local27);
*(&local26) = _419;
_422 = *(&local26);
// begin inline call to method org.frostlang.regex.RegexParser.checkNext(kind:org.frostlang.regex.RegexToken.Kind):frost.core.Bit from RegexParser.frost:106:24
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:57
_425 = org$frostlang$regex$RegexParser$next$R$org$frostlang$regex$RegexToken(param0);
*(&local29) = _425;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:58
_428 = *(&local29);
_429 = _428.kind;
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp78;
$tmp78 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp78->value = _429;
_430 = ((frost$core$Equatable*) $tmp78);
org$frostlang$regex$RegexToken$Kind$wrapper* $tmp79;
$tmp79 = (org$frostlang$regex$RegexToken$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$regex$RegexToken$Kind$wrapper), (frost$core$Class*) &org$frostlang$regex$RegexToken$Kind$wrapperclass);
$tmp79->value = _422;
_431 = ((frost$core$Equatable*) $tmp79);
ITable* $tmp80 = _430->$class->itable;
while ($tmp80->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp80 = $tmp80->next;
}
_432 = $tmp80->methods[0];
_433 = _432(_430, _431);
_434 = _433.value;
_435 = ((frost$core$Object*) _431);
frost$core$Frost$unref$frost$core$Object$Q(_435);
_437 = ((frost$core$Object*) _430);
frost$core$Frost$unref$frost$core$Object$Q(_437);
if (_434) goto block81; else goto block82;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:59
_441 = (frost$core$Bit) {true};
*(&local28) = _441;
goto block80;
block82:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:61
_445 = *(&local29);
org$frostlang$regex$RegexParser$pushback$org$frostlang$regex$RegexToken(param0, _445);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:62
_448 = (frost$core$Bit) {false};
*(&local28) = _448;
goto block80;
block80:;
_451 = *(&local28);
_452 = _451.value;
if (_452) goto block77; else goto block78;
block77:;
goto block76;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:108
_456 = (frost$core$Bit) {true};
*(&local23) = _456;
goto block71;
block71:;
_459 = *(&local23);
goto block65;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:172
_462 = (frost$core$Int) {11u};
// begin inline call to org.frostlang.regex.RegexToken.Kind.init(rv:frost.core.Int):org.frostlang.regex.RegexToken.Kind from RegexParser.frost:172:46
// /Users/ethannicholas/Dropbox/Frost/build/org/frostlang/regex/RegexToken.frost:10
_465 = &(&local31)->$rawValue;
*_465 = _462;
_467 = *(&local31);
*(&local30) = _467;
_470 = *(&local30);
_471 = org$frostlang$regex$RegexParser$expect$org$frostlang$regex$RegexToken$Kind$frost$core$String$R$frost$core$Bit(param0, _470, &$s81);
return _471;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:175
_474 = *(&local0);
// begin inline call to method org.frostlang.regex.RegexParser.pushback(token:org.frostlang.regex.RegexToken) from RegexParser.frost:175:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:46
_477 = &param0->pushbackBuffer;
_478 = *_477;
frost$collections$SpecializedArray$LTorg$frostlang$regex$RegexToken$GT$add$org$frostlang$regex$RegexToken(_478, _474);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:176
_482 = (frost$core$Bit) {false};
return _482;
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
frost$unsafe$Pointer local8;
frost$unsafe$Pointer local9;
frost$unsafe$Pointer local10;
frost$core$Int local11;
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
frost$unsafe$Pointer* _51;
frost$unsafe$Pointer _52;
int64_t _53;
frost$core$Int _54;
frost$core$Int64 _55;
frost$core$Int _57;
int64_t _58;
int64_t _59;
int64_t _60;
frost$core$Int _61;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
int64_t _75;
int64_t _76;
int64_t _77;
frost$core$Int _78;
frost$collections$CollectionView* _4;
$fn82 _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _18;
frost$core$Bit _117;
frost$core$Bit _121;
frost$core$Bit _123;
frost$core$Bit _126;
bool _129;
bool _130;
frost$core$Bit _131;
bool _133;
frost$core$Bit _136;
frost$core$Bit _142;
frost$core$Bit _143;
bool _144;
frost$core$Bit _147;
frost$core$Bit _151;
frost$core$Bit _153;
frost$core$Bit _156;
frost$core$Bit _158;
frost$core$Bit _161;
bool _164;
bool _165;
frost$core$Bit _166;
bool _168;
frost$core$Object* _171;
org$frostlang$regex$RegexLexer** _175;
org$frostlang$regex$RegexLexer* _176;
org$frostlang$plex$runtime$DFA** _177;
org$frostlang$plex$runtime$DFA* _178;
frost$core$Int* _179;
frost$core$Int _180;
frost$core$Int _181;
int64_t _182;
int64_t _183;
int64_t _184;
frost$core$Int _185;
frost$core$Int* _186;
org$frostlang$regex$RegexLexer** _189;
org$frostlang$regex$RegexLexer* _190;
org$frostlang$plex$runtime$DFA** _191;
org$frostlang$plex$runtime$DFA* _192;
frost$core$Int* _193;
frost$core$Int _194;
frost$core$Int _197;
frost$core$Int _198;
int64_t _199;
int64_t _200;
int64_t _201;
frost$core$Int _202;
frost$core$Int _205;
int64_t _208;
int64_t _209;
int64_t _210;
int64_t* _213;
frost$unsafe$Pointer _215;
frost$unsafe$Pointer _218;
frost$core$Int _222;
frost$core$Int _223;
frost$core$Bit _224;
frost$core$Range$LTfrost$core$Int$GT _225;
frost$core$Int _226;
frost$core$Int _228;
frost$core$Bit _229;
bool _230;
frost$core$Int _231;
int64_t _233;
int64_t _234;
bool _235;
frost$core$Bit _236;
bool _237;
int64_t _239;
int64_t _240;
bool _241;
frost$core$Bit _242;
bool _243;
frost$unsafe$Pointer _246;
int64_t _247;
frost$core$Int _248;
frost$core$Int _249;
int64_t _250;
int64_t _251;
int64_t _252;
frost$core$Int _253;
frost$core$Int64 _254;
org$frostlang$regex$RegexLexer** _255;
org$frostlang$regex$RegexLexer* _256;
org$frostlang$plex$runtime$DFA** _257;
org$frostlang$plex$runtime$DFA* _258;
frost$unsafe$Pointer* _259;
frost$unsafe$Pointer _260;
int64_t _261;
frost$core$Int _262;
frost$core$Int64 _263;
int64_t _264;
frost$core$Char8 _265;
int64_t _266;
frost$core$Int _269;
int64_t _270;
int64_t _271;
int64_t _272;
frost$core$Int _273;
int64_t _275;
int64_t _276;
bool _277;
frost$core$Bit _278;
bool _279;
int64_t _281;
int64_t _282;
bool _283;
frost$core$Bit _284;
bool _285;
int64_t _287;
int64_t _288;
int64_t _289;
frost$core$Int _290;
org$frostlang$frostc$ASTNode* _294;
frost$core$Int _295;
org$frostlang$frostc$Position _296;
frost$core$String* _297;
frost$unsafe$Pointer _298;
frost$core$Int _299;
org$frostlang$frostc$ASTNode* _302;
frost$core$Object* _303;
frost$core$Object* _305;
frost$core$Object* _307;
frost$core$Int* _83;
frost$core$Int _84;
org$frostlang$regex$RegexLexer** _85;
org$frostlang$regex$RegexLexer* _86;
org$frostlang$plex$runtime$DFA** _87;
org$frostlang$plex$runtime$DFA* _88;
frost$core$Int* _89;
frost$core$Int _90;
org$frostlang$regex$RegexLexer** _91;
org$frostlang$regex$RegexLexer* _92;
org$frostlang$plex$runtime$DFA** _93;
org$frostlang$plex$runtime$DFA* _94;
frost$core$Int* _95;
frost$core$Int _96;
org$frostlang$frostc$Position _97;
org$frostlang$regex$RegexLexer** _100;
org$frostlang$regex$RegexLexer* _101;
org$frostlang$plex$runtime$DFA** _102;
org$frostlang$plex$runtime$DFA* _103;
frost$core$Int* _104;
frost$core$Int _105;
frost$core$Bit _112;
frost$core$Bit _113;
bool _114;
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
_53 = _52.value;
_54 = *(&local0);
_55 = frost$core$Int64$init$frost$core$Int(_54);
_57 = *(&local0);
_58 = _33.value;
_59 = _57.value;
_60 = _58 - _59;
_61 = (frost$core$Int) {_60};
if (_35) goto block12; else goto block13;
block12:;
_63 = _61.value;
_64 = _36.value;
_65 = _63 >= _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block11; else goto block7;
block13:;
_69 = _61.value;
_70 = _36.value;
_71 = _69 > _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block11; else goto block7;
block11:;
_75 = _57.value;
_76 = _36.value;
_77 = _75 + _76;
_78 = (frost$core$Int) {_77};
*(&local0) = _78;
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
_117 = (frost$core$Bit) {false};
*(&local4) = _117;
goto block19;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:199
_121 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:200
_123 = (frost$core$Bit) {true};
*(&local4) = _123;
goto block19;
block19:;
_126 = *(&local4);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:207:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_129 = _126.value;
_130 = !_129;
_131 = (frost$core$Bit) {_130};
_133 = _131.value;
if (_133) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_136 = (frost$core$Bit) {false};
*(&local3) = _136;
goto block16;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:210:19
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
_142 = org$frostlang$regex$RegexParser$term$R$frost$core$Bit(param0);
_143 = frost$core$Bit$$NOT$R$frost$core$Bit(_142);
_144 = _143.value;
if (_144) goto block24; else goto block25;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:208
_147 = (frost$core$Bit) {false};
*(&local5) = _147;
goto block23;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:210
_151 = org$frostlang$regex$RegexParser$expression$R$frost$core$Bit(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_153 = (frost$core$Bit) {true};
*(&local5) = _153;
goto block23;
block23:;
_156 = *(&local5);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:211
_158 = (frost$core$Bit) {true};
*(&local3) = _158;
goto block16;
block16:;
_161 = *(&local3);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from RegexParser.frost:221:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_164 = _161.value;
_165 = !_164;
_166 = (frost$core$Bit) {_165};
_168 = _166.value;
if (_168) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:222
_171 = ((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_171);
return ((org$frostlang$frostc$ASTNode*) NULL);
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:224
_175 = &param0->lexer;
_176 = *_175;
_177 = &_176->dfa;
_178 = *_177;
_179 = &_178->offset;
_180 = *_179;
_181 = (frost$core$Int) {1u};
_182 = _180.value;
_183 = _181.value;
_184 = _182 - _183;
_185 = (frost$core$Int) {_184};
_186 = &_178->offset;
*_186 = _185;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:225
_189 = &param0->lexer;
_190 = *_189;
_191 = &_190->dfa;
_192 = *_191;
_193 = &_192->offset;
_194 = *_193;
*(&local6) = _194;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:226
_197 = *(&local6);
_198 = *(&local2);
_199 = _197.value;
_200 = _198.value;
_201 = _199 - _200;
_202 = (frost$core$Int) {_201};
*(&local7) = _202;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:227
_205 = *(&local7);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from RegexParser.frost:227:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_208 = _205.value;
_209 = _208 * 1u;
_210 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_209);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_213 = &(&local9)->value;
*_213 = _210;
_215 = *(&local9);
*(&local8) = _215;
_218 = *(&local8);
*(&local10) = _218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:228
_222 = *(&local2);
_223 = *(&local6);
_224 = (frost$core$Bit) {false};
_225 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_222, _223, _224);
_226 = _225.min;
*(&local11) = _226;
_228 = _225.max;
_229 = _225.inclusive;
_230 = _229.value;
_231 = (frost$core$Int) {1u};
if (_230) goto block32; else goto block33;
block32:;
_233 = _226.value;
_234 = _228.value;
_235 = _233 <= _234;
_236 = (frost$core$Bit) {_235};
_237 = _236.value;
if (_237) goto block29; else goto block30;
block33:;
_239 = _226.value;
_240 = _228.value;
_241 = _239 < _240;
_242 = (frost$core$Bit) {_241};
_243 = _242.value;
if (_243) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:229
_246 = *(&local10);
_247 = _246.value;
_248 = *(&local11);
_249 = *(&local2);
_250 = _248.value;
_251 = _249.value;
_252 = _250 - _251;
_253 = (frost$core$Int) {_252};
_254 = frost$core$Int64$init$frost$core$Int(_253);
_255 = &param0->lexer;
_256 = *_255;
_257 = &_256->dfa;
_258 = *_257;
_259 = &_258->source;
_260 = *_259;
_261 = _260.value;
_262 = *(&local11);
_263 = frost$core$Int64$init$frost$core$Int(_262);
_264 = _263.value;
_265 = ((frost$core$Char8*)_261)[_264];
_266 = _254.value;
((frost$core$Char8*)_247)[_266] = _265;
_269 = *(&local11);
_270 = _228.value;
_271 = _269.value;
_272 = _270 - _271;
_273 = (frost$core$Int) {_272};
if (_230) goto block35; else goto block36;
block35:;
_275 = _273.value;
_276 = _231.value;
_277 = _275 >= _276;
_278 = (frost$core$Bit) {_277};
_279 = _278.value;
if (_279) goto block34; else goto block30;
block36:;
_281 = _273.value;
_282 = _231.value;
_283 = _281 > _282;
_284 = (frost$core$Bit) {_283};
_285 = _284.value;
if (_285) goto block34; else goto block30;
block34:;
_287 = _269.value;
_288 = _231.value;
_289 = _287 + _288;
_290 = (frost$core$Int) {_289};
*(&local11) = _290;
goto block29;
block30:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:231
_294 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(sizeof(org$frostlang$frostc$ASTNode), (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
_295 = (frost$core$Int) {37u};
_296 = *(&local1);
_297 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_298 = *(&local10);
_299 = *(&local7);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_297, _298, _299);
org$frostlang$frostc$ASTNode$init$frost$core$Int$org$frostlang$frostc$Position$frost$core$String(_294, _295, _296, _297);
_302 = _294;
_303 = ((frost$core$Object*) _302);
frost$core$Frost$ref$frost$core$Object$Q(_303);
_305 = ((frost$core$Object*) _297);
frost$core$Frost$unref$frost$core$Object$Q(_305);
_307 = ((frost$core$Object*) _294);
frost$core$Frost$unref$frost$core$Object$Q(_307);
return _302;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:219
_83 = &param0->pathIndex;
_84 = *_83;
_85 = &param0->lexer;
_86 = *_85;
_87 = &_86->dfa;
_88 = *_87;
_89 = &_88->line;
_90 = *_89;
_91 = &param0->lexer;
_92 = *_91;
_93 = &_92->dfa;
_94 = *_93;
_95 = &_94->column;
_96 = *_95;
_97 = org$frostlang$frostc$Position$init$frost$core$Int$frost$core$Int$frost$core$Int(_84, _90, _96);
*(&local1) = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:220
_100 = &param0->lexer;
_101 = *_100;
_102 = &_101->dfa;
_103 = *_102;
_104 = &_103->offset;
_105 = *_104;
*(&local2) = _105;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:221
// begin inline call to method org.frostlang.regex.RegexParser.expression():frost.core.Bit from RegexParser.frost:221:23
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:207
// begin inline call to method org.frostlang.regex.RegexParser.term():frost.core.Bit from RegexParser.frost:207:17
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/regex/RegexParser.frost:196
_112 = org$frostlang$regex$RegexParser$factor$R$frost$core$Bit(param0);
_113 = frost$core$Bit$$NOT$R$frost$core$Bit(_112);
_114 = _113.value;
if (_114) goto block20; else goto block21;
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

