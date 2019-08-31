#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/parser/Parser.h"
#include "frost/core/MutableString.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter/Kind.h"
#include "org/frostlang/frostc/Pair.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/parser/Token.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "org/frostlang/frostc/parser/Token/Kind.h"
#include "frost/io/File.h"
#include "frost/core/Error.h"
#include "frost/threads/MessageQueue.h"
#include "frost/threads/ScopedLock.h"
#include "frost/io/OutputStream.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Maybe.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/io/Console.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int32.h"
#include "frost/core/Char32.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$HTMLProcessor$class_type org$frostlang$frostc$HTMLProcessor$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$cleanup, org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String} };

typedef frost$collections$Iterator* (*$fn23)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn27)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn32)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn43)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn55)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn68)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn208)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn220)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn230)(frost$core$Object*);
typedef frost$core$String* (*$fn239)(frost$core$Object*);
typedef frost$core$Bit (*$fn250)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn262)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn278)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn305)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn343)(frost$core$Object*);
typedef frost$core$Int (*$fn356)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn360)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn364)(frost$collections$Iterable*);
typedef frost$core$Int (*$fn368)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn376)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn403)(frost$core$Object*);
typedef frost$core$Int (*$fn426)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn480)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn495)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn514)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn532)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn550)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn564)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn579)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn594)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn609)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn624)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn639)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn656)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn670)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn685)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn700)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn715)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn730)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn751)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 34, -162222424923477505, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x53\x79\x6e\x74\x61\x78\x48\x69\x67\x68\x6c\x69\x67\x68\x74\x65\x72", 129, 4586254628416497089, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s175 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s177 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s198 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, -8814482118997729913, NULL };
static frost$core$String $s415 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 2697689956412709694, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 683364003274147512, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, -6588624628402863451, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, -7636228459579019980, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, -7838137996368162576, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 2476654268654116656, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s556 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 348240475473272024, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 4133860649010664239, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 5716761674580204597, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s601 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -145632375787406955, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -8920756938342762323, NULL };
static frost$core$String $s630 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 2682849467595832643, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s661 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, -6454915742278049375, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7193073556246214837, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -8315368983397429245, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, -8738063546824915686, NULL };
static frost$core$String $s721 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 2223332588984305893, NULL };
static frost$core$String $s736 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 71, 9037405806934484915, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s756 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

void org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$HTMLProcessor* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:11
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
return;

}
frost$core$String* org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, org$frostlang$frostc$parser$Parser* param1) {

frost$core$MutableString* local0 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local1;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local2;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local3;
org$frostlang$frostc$Pair* local4 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local5;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local6;
frost$core$MutableString* local7 = NULL;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local9;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local11;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local12;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local13;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local14;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local15;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local16;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind local17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:16
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp5 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp5, &$s6);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$MutableString* $tmp7 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
*(&local0) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:17
frost$core$Int $tmp8 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:17:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp9 = &(&local2)->$rawValue;
*$tmp9 = $tmp8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp10 = *(&local2);
*(&local1) = $tmp10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp11 = *(&local1);
*(&local3) = $tmp11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:18
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp12 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp13 = *$tmp12;
frost$core$Bit $tmp14 = (frost$core$Bit) {$tmp13 != NULL};
bool $tmp15 = $tmp14.value;
if ($tmp15) goto block2; else goto block3;
block3:;
frost$core$Int $tmp16 = (frost$core$Int) {18u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, $tmp16, &$s18);
abort(); // unreachable
block2:;
frost$collections$Array** $tmp19 = &$tmp13->tokens;
frost$collections$Array* $tmp20 = *$tmp19;
ITable* $tmp21 = ((frost$collections$Iterable*) $tmp20)->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp21 = $tmp21->next;
}
$fn23 $tmp22 = $tmp21->methods[0];
frost$collections$Iterator* $tmp24 = $tmp22(((frost$collections$Iterable*) $tmp20));
goto block4;
block4:;
ITable* $tmp25 = $tmp24->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[0];
frost$core$Bit $tmp28 = $tmp26($tmp24);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block6; else goto block5;
block5:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp30 = $tmp24->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp30 = $tmp30->next;
}
$fn32 $tmp31 = $tmp30->methods[1];
frost$core$Object* $tmp33 = $tmp31($tmp24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp33)));
org$frostlang$frostc$Pair* $tmp34 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local4) = ((org$frostlang$frostc$Pair*) $tmp33);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:19
org$frostlang$frostc$Pair* $tmp35 = *(&local4);
frost$core$Object** $tmp36 = &$tmp35->second;
frost$core$Object* $tmp37 = *$tmp36;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp38;
$tmp38 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp38->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp37)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp39 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp40;
$tmp40 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp40->value = $tmp39;
ITable* $tmp41 = ((frost$core$Equatable*) $tmp38)->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[1];
frost$core$Bit $tmp44 = $tmp42(((frost$core$Equatable*) $tmp38), ((frost$core$Equatable*) $tmp40));
bool $tmp45 = $tmp44.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp40)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp38)));
if ($tmp45) goto block9; else goto block8;
block9:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp46 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp47->value = $tmp46;
frost$core$Int $tmp48 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:19:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp49 = &(&local6)->$rawValue;
*$tmp49 = $tmp48;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp50 = *(&local6);
*(&local5) = $tmp50;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp51 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp52;
$tmp52 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp52->value = $tmp51;
ITable* $tmp53 = ((frost$core$Equatable*) $tmp47)->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[1];
frost$core$Bit $tmp56 = $tmp54(((frost$core$Equatable*) $tmp47), ((frost$core$Equatable*) $tmp52));
bool $tmp57 = $tmp56.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp52)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp47)));
if ($tmp57) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:20
frost$core$MutableString* $tmp58 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp58, &$s59);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:22
org$frostlang$frostc$Pair* $tmp60 = *(&local4);
frost$core$Object** $tmp61 = &$tmp60->second;
frost$core$Object* $tmp62 = *$tmp61;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp63;
$tmp63 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp63->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp62)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp64 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp65;
$tmp65 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp65->value = $tmp64;
ITable* $tmp66 = ((frost$core$Equatable*) $tmp63)->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[1];
frost$core$Bit $tmp69 = $tmp67(((frost$core$Equatable*) $tmp63), ((frost$core$Equatable*) $tmp65));
bool $tmp70 = $tmp69.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp65)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp63)));
if ($tmp70) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:23
org$frostlang$frostc$Pair* $tmp71 = *(&local4);
frost$core$Object** $tmp72 = &$tmp71->second;
frost$core$Object* $tmp73 = *$tmp72;
*(&local3) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp73)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:24
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp74 = *(&local3);
frost$core$Int $tmp75 = $tmp74.$rawValue;
frost$core$Int $tmp76 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:25:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 == $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block14; else goto block15;
block14:;
goto block13;
block15:;
frost$core$Int $tmp82 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:28:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp83 = $tmp75.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 == $tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block17; else goto block18;
block18:;
frost$core$Int $tmp88 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:28:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp89 = $tmp75.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 == $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block17; else goto block20;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:29
frost$core$MutableString* $tmp94 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp94, &$s95);
goto block13;
block20:;
frost$core$Int $tmp96 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:31:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp97 = $tmp75.value;
int64_t $tmp98 = $tmp96.value;
bool $tmp99 = $tmp97 == $tmp98;
frost$core$Bit $tmp100 = (frost$core$Bit) {$tmp99};
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:32
frost$core$MutableString* $tmp102 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp102, &$s103);
goto block13;
block23:;
frost$core$Int $tmp104 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:34:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp105 = $tmp75.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 == $tmp106;
frost$core$Bit $tmp108 = (frost$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:35
frost$core$MutableString* $tmp110 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp110, &$s111);
goto block13;
block26:;
frost$core$Int $tmp112 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:37:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp113 = $tmp75.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 == $tmp114;
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:38
frost$core$MutableString* $tmp118 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp118, &$s119);
goto block13;
block29:;
frost$core$Int $tmp120 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:40:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp121 = $tmp75.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 == $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:41
frost$core$MutableString* $tmp126 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp126, &$s127);
goto block13;
block32:;
frost$core$Int $tmp128 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:43:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp129 = $tmp75.value;
int64_t $tmp130 = $tmp128.value;
bool $tmp131 = $tmp129 == $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:44
frost$core$MutableString* $tmp134 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp134, &$s135);
goto block13;
block35:;
frost$core$Int $tmp136 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:46:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp137 = $tmp75.value;
int64_t $tmp138 = $tmp136.value;
bool $tmp139 = $tmp137 == $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:47
frost$core$MutableString* $tmp142 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp142, &$s143);
goto block13;
block38:;
frost$core$Int $tmp144 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:49:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp145 = $tmp75.value;
int64_t $tmp146 = $tmp144.value;
bool $tmp147 = $tmp145 == $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block40; else goto block41;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:50
frost$core$MutableString* $tmp150 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp150, &$s151);
goto block13;
block41:;
frost$core$Int $tmp152 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:52:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp153 = $tmp75.value;
int64_t $tmp154 = $tmp152.value;
bool $tmp155 = $tmp153 == $tmp154;
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:53
frost$core$MutableString* $tmp158 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp158, &$s159);
goto block13;
block44:;
frost$core$Int $tmp160 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:55:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp161 = $tmp75.value;
int64_t $tmp162 = $tmp160.value;
bool $tmp163 = $tmp161 == $tmp162;
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
bool $tmp165 = $tmp164.value;
if ($tmp165) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:56
frost$core$MutableString* $tmp166 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp166, &$s167);
goto block13;
block47:;
frost$core$Int $tmp168 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from HTMLProcessor.frost:58:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp169 = $tmp75.value;
int64_t $tmp170 = $tmp168.value;
bool $tmp171 = $tmp169 == $tmp170;
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:59
frost$core$MutableString* $tmp174 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp174, &$s175);
goto block13;
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:62
frost$core$Int $tmp176 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s177, $tmp176);
abort(); // unreachable
block13:;
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:66
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp178 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp179 = *(&local4);
frost$core$Object** $tmp180 = &$tmp179->first;
frost$core$Object* $tmp181 = *$tmp180;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from HTMLProcessor.frost:66:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
frost$core$String** $tmp182 = &param1->source;
frost$core$String* $tmp183 = *$tmp182;
frost$core$String$Index $tmp184 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp181)->value.start;
frost$core$String$Index $tmp185 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp181)->value.end;
frost$core$Bit $tmp186 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp187 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp184, $tmp185, $tmp186);
frost$core$String* $tmp188 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp183, $tmp187);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$MutableString$init$frost$core$String($tmp178, $tmp188);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
frost$core$MutableString* $tmp189 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local7) = $tmp178;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp178));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:67
frost$core$MutableString* $tmp190 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp190, &$s191, &$s192);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:68
frost$core$MutableString* $tmp193 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp193, &$s194, &$s195);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:69
frost$core$MutableString* $tmp196 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp196, &$s197, &$s198);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:70
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp199 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp200;
$tmp200 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp200->value = $tmp199;
frost$core$Int $tmp201 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp202 = &(&local9)->$rawValue;
*$tmp202 = $tmp201;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp203 = *(&local9);
*(&local8) = $tmp203;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp204 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp205;
$tmp205 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp205->value = $tmp204;
ITable* $tmp206 = ((frost$core$Equatable*) $tmp200)->$class->itable;
while ($tmp206->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp206 = $tmp206->next;
}
$fn208 $tmp207 = $tmp206->methods[1];
frost$core$Bit $tmp209 = $tmp207(((frost$core$Equatable*) $tmp200), ((frost$core$Equatable*) $tmp205));
bool $tmp210 = $tmp209.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp205)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp200)));
if ($tmp210) goto block55; else goto block54;
block55:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp211 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp212->value = $tmp211;
frost$core$Int $tmp213 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:71:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp214 = &(&local11)->$rawValue;
*$tmp214 = $tmp213;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp215 = *(&local11);
*(&local10) = $tmp215;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp216 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp217;
$tmp217 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp217->value = $tmp216;
ITable* $tmp218 = ((frost$core$Equatable*) $tmp212)->$class->itable;
while ($tmp218->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp218 = $tmp218->next;
}
$fn220 $tmp219 = $tmp218->methods[1];
frost$core$Bit $tmp221 = $tmp219(((frost$core$Equatable*) $tmp212), ((frost$core$Equatable*) $tmp217));
bool $tmp222 = $tmp221.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp217)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp212)));
if ($tmp222) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:72
frost$core$MutableString* $tmp223 = *(&local0);
org$frostlang$frostc$Pair* $tmp224 = *(&local4);
frost$core$Object** $tmp225 = &$tmp224->first;
frost$core$Object* $tmp226 = *$tmp225;
org$frostlang$frostc$parser$Token$Kind $tmp227 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp226)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp228;
$tmp228 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp228->value = $tmp227;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HTMLProcessor.frost:72:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn230 $tmp229 = ($fn230) ((frost$core$Object*) $tmp228)->$class->vtable[0];
frost$core$String* $tmp231 = $tmp229(((frost$core$Object*) $tmp228));
frost$core$String* $tmp232 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s233, $tmp231);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
frost$core$String* $tmp234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp232, &$s235);
frost$core$MutableString$append$frost$core$String($tmp223, $tmp234);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
goto block54;
block54:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:74
frost$core$MutableString* $tmp236 = *(&local0);
frost$core$MutableString* $tmp237 = *(&local7);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HTMLProcessor.frost:74:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn239 $tmp238 = ($fn239) ((frost$core$Object*) $tmp237)->$class->vtable[0];
frost$core$String* $tmp240 = $tmp238(((frost$core$Object*) $tmp237));
frost$core$MutableString$append$frost$core$String($tmp236, $tmp240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:75
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp241 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp242->value = $tmp241;
frost$core$Int $tmp243 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:75:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp244 = &(&local13)->$rawValue;
*$tmp244 = $tmp243;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp245 = *(&local13);
*(&local12) = $tmp245;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp246 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp247;
$tmp247 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp247->value = $tmp246;
ITable* $tmp248 = ((frost$core$Equatable*) $tmp242)->$class->itable;
while ($tmp248->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp248 = $tmp248->next;
}
$fn250 $tmp249 = $tmp248->methods[1];
frost$core$Bit $tmp251 = $tmp249(((frost$core$Equatable*) $tmp242), ((frost$core$Equatable*) $tmp247));
bool $tmp252 = $tmp251.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp247)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp242)));
if ($tmp252) goto block62; else goto block61;
block62:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp253 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp254->value = $tmp253;
frost$core$Int $tmp255 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:76:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp256 = &(&local15)->$rawValue;
*$tmp256 = $tmp255;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp257 = *(&local15);
*(&local14) = $tmp257;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp258 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp259;
$tmp259 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp259->value = $tmp258;
ITable* $tmp260 = ((frost$core$Equatable*) $tmp254)->$class->itable;
while ($tmp260->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp260 = $tmp260->next;
}
$fn262 $tmp261 = $tmp260->methods[1];
frost$core$Bit $tmp263 = $tmp261(((frost$core$Equatable*) $tmp254), ((frost$core$Equatable*) $tmp259));
bool $tmp264 = $tmp263.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp259)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
if ($tmp264) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:77
frost$core$MutableString* $tmp265 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp265, &$s266);
goto block61;
block61:;
frost$core$MutableString* $tmp267 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp33);
org$frostlang$frostc$Pair* $tmp268 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:80
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp269 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp270->value = $tmp269;
frost$core$Int $tmp271 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:80:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int* $tmp272 = &(&local17)->$rawValue;
*$tmp272 = $tmp271;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp273 = *(&local17);
*(&local16) = $tmp273;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp274 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp275;
$tmp275 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp275->value = $tmp274;
ITable* $tmp276 = ((frost$core$Equatable*) $tmp270)->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[1];
frost$core$Bit $tmp279 = $tmp277(((frost$core$Equatable*) $tmp270), ((frost$core$Equatable*) $tmp275));
bool $tmp280 = $tmp279.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp275)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
if ($tmp280) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:81
frost$core$MutableString* $tmp281 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp281, &$s282);
goto block66;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:83
frost$core$MutableString* $tmp283 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp283, &$s284);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:84
frost$core$MutableString* $tmp285 = *(&local0);
frost$core$String* $tmp286 = frost$core$MutableString$finish$R$frost$core$String($tmp285);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
frost$core$MutableString* $tmp287 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp286;

}
void org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, frost$io$File* param1, frost$io$File* param2, frost$core$String* param3) {

frost$core$Error* local0 = NULL;
frost$threads$MessageQueue* local1 = NULL;
org$frostlang$frostc$parser$Parser* local2 = NULL;
frost$threads$ScopedLock* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Int local5;
frost$core$MutableString* local6 = NULL;
frost$core$Int local7;
frost$core$String* local8 = NULL;
frost$io$OutputStream* local9 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:88
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:89
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp288 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp288);
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$threads$MessageQueue* $tmp289 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
*(&local1) = $tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:90
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$parser$Parser));
org$frostlang$frostc$parser$Parser* $tmp290 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp291 = *(&local1);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT($tmp290, $tmp291);
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
org$frostlang$frostc$parser$Parser* $tmp292 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local2) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:91
org$frostlang$frostc$parser$Parser* $tmp293 = *(&local2);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$SyntaxHighlighter));
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp294 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp294);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp295 = &$tmp293->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp296 = *$tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp297 = &$tmp293->syntaxHighlighter;
*$tmp297 = $tmp294;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp294));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:92
org$frostlang$frostc$parser$Parser* $tmp298 = *(&local2);
org$frostlang$frostc$Compiler** $tmp299 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp300 = *$tmp299;
frost$collections$Array** $tmp301 = &$tmp300->files;
frost$collections$Array* $tmp302 = *$tmp301;
ITable* $tmp303 = ((frost$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp303->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
frost$core$Int $tmp306 = $tmp304(((frost$collections$CollectionView*) $tmp302));
frost$core$Maybe* $tmp307 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(param1);
frost$core$Int* $tmp308 = &$tmp307->$rawValue;
frost$core$Int $tmp309 = *$tmp308;
int64_t $tmp310 = $tmp309.value;
bool $tmp311 = $tmp310 == 0u;
if ($tmp311) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp312 = (frost$core$Error**) ($tmp307->$data + 0);
frost$core$Error* $tmp313 = *$tmp312;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
*(&local0) = $tmp313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
org$frostlang$frostc$parser$Parser* $tmp314 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp315 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block3:;
frost$core$Object** $tmp316 = (frost$core$Object**) ($tmp307->$data + 0);
frost$core$Object* $tmp317 = *$tmp316;
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int$frost$core$String($tmp298, param1, $tmp306, ((frost$core$String*) $tmp317));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:93
org$frostlang$frostc$Compiler** $tmp318 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp319 = *$tmp318;
frost$collections$Array** $tmp320 = &$tmp319->files;
frost$collections$Array* $tmp321 = *$tmp320;
frost$collections$Array$add$frost$collections$Array$T($tmp321, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:94
org$frostlang$frostc$parser$Parser* $tmp322 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp323 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp322);
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323 == NULL};
bool $tmp325 = $tmp324.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
if ($tmp325) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:95
goto block7;
block7:;
frost$threads$MessageQueue* $tmp326 = *(&local1);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from HTMLProcessor.frost:95:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp327 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp328 = &$tmp326->lock;
frost$threads$Lock* $tmp329 = *$tmp328;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp327, $tmp329);
*(&local3) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$threads$ScopedLock* $tmp330 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
*(&local3) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp331 = &$tmp326->count;
frost$core$Int $tmp332 = *$tmp331;
frost$threads$ScopedLock* $tmp333 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local3) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp334 = (frost$core$Int) {0u};
int64_t $tmp335 = $tmp332.value;
int64_t $tmp336 = $tmp334.value;
bool $tmp337 = $tmp335 > $tmp336;
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:96
frost$threads$MessageQueue* $tmp340 = *(&local1);
frost$core$Immutable* $tmp341 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp340);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HTMLProcessor.frost:96:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn343 $tmp342 = ($fn343) ((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp341))->$class->vtable[0];
frost$core$String* $tmp344 = $tmp342(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp341)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp344);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
goto block7;
block9:;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:99
org$frostlang$frostc$parser$Parser* $tmp345 = *(&local2);
frost$core$String* $tmp346 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp345);
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from HTMLProcessor.frost:99:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp347 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp348 = $tmp347.value;
frost$core$Int $tmp349 = (frost$core$Int) {((int64_t) $tmp348)};
frost$collections$Array* $tmp350 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp346, &$s351, $tmp349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$collections$Array* $tmp352 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp352));
*(&local4) = $tmp350;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:100
frost$collections$Array* $tmp353 = *(&local4);
ITable* $tmp354 = ((frost$collections$CollectionView*) $tmp353)->$class->itable;
while ($tmp354->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp354 = $tmp354->next;
}
$fn356 $tmp355 = $tmp354->methods[0];
frost$core$Int $tmp357 = $tmp355(((frost$collections$CollectionView*) $tmp353));
frost$core$Int$wrapper* $tmp358;
$tmp358 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp358->value = $tmp357;
$fn360 $tmp359 = ($fn360) ((frost$core$Object*) $tmp358)->$class->vtable[0];
frost$core$String* $tmp361 = $tmp359(((frost$core$Object*) $tmp358));
// begin inline call to function frost.core.String.get_length():frost.core.Int from HTMLProcessor.frost:100:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:485
ITable* $tmp362 = ((frost$collections$Iterable*) $tmp361)->$class->itable;
while ($tmp362->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp362 = $tmp362->next;
}
$fn364 $tmp363 = $tmp362->methods[0];
frost$collections$Iterator* $tmp365 = $tmp363(((frost$collections$Iterable*) $tmp361));
ITable* $tmp366 = $tmp365->$class->itable;
while ($tmp366->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp366 = $tmp366->next;
}
$fn368 $tmp367 = $tmp366->methods[2];
frost$core$Int $tmp369 = $tmp367($tmp365);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local5) = $tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:101
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp370 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp370);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$MutableString* $tmp371 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
*(&local6) = $tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:102
frost$core$Int $tmp372 = (frost$core$Int) {0u};
frost$collections$Array* $tmp373 = *(&local4);
ITable* $tmp374 = ((frost$collections$CollectionView*) $tmp373)->$class->itable;
while ($tmp374->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
frost$core$Int $tmp377 = $tmp375(((frost$collections$CollectionView*) $tmp373));
frost$core$Bit $tmp378 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp379 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp372, $tmp377, $tmp378);
frost$core$Int $tmp380 = $tmp379.min;
*(&local7) = $tmp380;
frost$core$Int $tmp381 = $tmp379.max;
frost$core$Bit $tmp382 = $tmp379.inclusive;
bool $tmp383 = $tmp382.value;
frost$core$Int $tmp384 = (frost$core$Int) {1u};
if ($tmp383) goto block20; else goto block21;
block20:;
int64_t $tmp385 = $tmp380.value;
int64_t $tmp386 = $tmp381.value;
bool $tmp387 = $tmp385 <= $tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387};
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block17; else goto block18;
block21:;
int64_t $tmp390 = $tmp380.value;
int64_t $tmp391 = $tmp381.value;
bool $tmp392 = $tmp390 < $tmp391;
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:103
frost$core$Int $tmp395 = *(&local7);
frost$core$Int $tmp396 = (frost$core$Int) {1u};
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397 + $tmp398;
frost$core$Int $tmp400 = (frost$core$Int) {$tmp399};
frost$core$Int$wrapper* $tmp401;
$tmp401 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp401->value = $tmp400;
$fn403 $tmp402 = ($fn403) ((frost$core$Object*) $tmp401)->$class->vtable[0];
frost$core$String* $tmp404 = $tmp402(((frost$core$Object*) $tmp401));
frost$core$Int $tmp405 = *(&local5);
// begin inline call to function frost.core.String.rightAlign(width:frost.core.Int):frost.core.String from HTMLProcessor.frost:103:62
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1313
frost$core$Int32 $tmp406 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp407 = frost$core$Char32$init$frost$core$Int32($tmp406);
frost$core$String* $tmp408 = frost$core$String$rightAlign$frost$core$Int$frost$core$Char32$R$frost$core$String($tmp404, $tmp405, $tmp407);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$String* $tmp409 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local8) = $tmp408;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:104
frost$core$MutableString* $tmp410 = *(&local6);
frost$core$String* $tmp411 = *(&local8);
frost$core$String* $tmp412 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s413, $tmp411);
frost$core$String* $tmp414 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp412, &$s415);
frost$collections$Array* $tmp416 = *(&local4);
frost$core$Int $tmp417 = *(&local7);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from HTMLProcessor.frost:104:93
frost$core$Int $tmp418 = (frost$core$Int) {0u};
int64_t $tmp419 = $tmp417.value;
int64_t $tmp420 = $tmp418.value;
bool $tmp421 = $tmp419 >= $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block26; else goto block25;
block26:;
ITable* $tmp424 = ((frost$collections$CollectionView*) $tmp416)->$class->itable;
while ($tmp424->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp424 = $tmp424->next;
}
$fn426 $tmp425 = $tmp424->methods[0];
frost$core$Int $tmp427 = $tmp425(((frost$collections$CollectionView*) $tmp416));
int64_t $tmp428 = $tmp417.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 < $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block24; else goto block25;
block25:;
frost$core$Int $tmp433 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s434, $tmp433, &$s435);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp436 = &$tmp416->data;
frost$core$Object** $tmp437 = *$tmp436;
frost$core$Int64 $tmp438 = frost$core$Int64$init$frost$core$Int($tmp417);
int64_t $tmp439 = $tmp438.value;
frost$core$Object* $tmp440 = $tmp437[$tmp439];
frost$core$Frost$ref$frost$core$Object$Q($tmp440);
frost$core$String* $tmp441 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp414, ((frost$core$String*) $tmp440));
frost$core$String* $tmp442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp441, &$s443);
frost$core$MutableString$append$frost$core$String($tmp410, $tmp442);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
frost$core$Frost$unref$frost$core$Object$Q($tmp440);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$String* $tmp444 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Int $tmp445 = *(&local7);
int64_t $tmp446 = $tmp381.value;
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446 - $tmp447;
frost$core$Int $tmp449 = (frost$core$Int) {$tmp448};
if ($tmp383) goto block28; else goto block29;
block28:;
int64_t $tmp450 = $tmp449.value;
int64_t $tmp451 = $tmp384.value;
bool $tmp452 = $tmp450 >= $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block27; else goto block18;
block29:;
int64_t $tmp455 = $tmp449.value;
int64_t $tmp456 = $tmp384.value;
bool $tmp457 = $tmp455 > $tmp456;
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block27; else goto block18;
block27:;
int64_t $tmp460 = $tmp445.value;
int64_t $tmp461 = $tmp384.value;
int64_t $tmp462 = $tmp460 + $tmp461;
frost$core$Int $tmp463 = (frost$core$Int) {$tmp462};
*(&local7) = $tmp463;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:106
frost$core$Maybe* $tmp464 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param2);
frost$core$Int* $tmp465 = &$tmp464->$rawValue;
frost$core$Int $tmp466 = *$tmp465;
int64_t $tmp467 = $tmp466.value;
bool $tmp468 = $tmp467 == 0u;
if ($tmp468) goto block30; else goto block31;
block31:;
frost$core$Error** $tmp469 = (frost$core$Error**) ($tmp464->$data + 0);
frost$core$Error* $tmp470 = *$tmp469;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local0) = $tmp470;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$MutableString* $tmp471 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp472 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp472));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp473 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp474 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block30:;
frost$core$Object** $tmp475 = (frost$core$Object**) ($tmp464->$data + 0);
frost$core$Object* $tmp476 = *$tmp475;
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$OutputStream*) $tmp476)));
frost$io$OutputStream* $tmp477 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local9) = ((frost$io$OutputStream*) $tmp476);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:107
frost$io$OutputStream* $tmp478 = *(&local9);
$fn480 $tmp479 = ($fn480) $tmp478->$class->vtable[19];
frost$core$Error* $tmp481 = $tmp479($tmp478, &$s482);
if ($tmp481 == NULL) goto block32; else goto block33;
block33:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp481 != NULL};
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block34; else goto block35;
block35:;
frost$core$Int $tmp485 = (frost$core$Int) {107u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s486, $tmp485, &$s487);
abort(); // unreachable
block34:;
*(&local0) = $tmp481;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
frost$io$OutputStream* $tmp488 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp489 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp490 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp491 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp492 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block32:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:108
frost$io$OutputStream* $tmp493 = *(&local9);
$fn495 $tmp494 = ($fn495) $tmp493->$class->vtable[19];
frost$core$Error* $tmp496 = $tmp494($tmp493, &$s497);
if ($tmp496 == NULL) goto block36; else goto block37;
block37:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$Bit $tmp498 = (frost$core$Bit) {$tmp496 != NULL};
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block38; else goto block39;
block39:;
frost$core$Int $tmp500 = (frost$core$Int) {108u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s501, $tmp500, &$s502);
abort(); // unreachable
block38:;
*(&local0) = $tmp496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$io$OutputStream* $tmp503 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp504 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp505 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp506 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp507 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block36:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:109
frost$io$OutputStream* $tmp508 = *(&local9);
frost$core$String* $tmp509 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s510, param3);
frost$core$String* $tmp511 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp509, &$s512);
$fn514 $tmp513 = ($fn514) $tmp508->$class->vtable[19];
frost$core$Error* $tmp515 = $tmp513($tmp508, $tmp511);
if ($tmp515 == NULL) goto block40; else goto block41;
block41:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515 != NULL};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block42; else goto block43;
block43:;
frost$core$Int $tmp518 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s519, $tmp518, &$s520);
abort(); // unreachable
block42:;
*(&local0) = $tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$io$OutputStream* $tmp521 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp522 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp523 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp525 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block40:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:110
frost$io$OutputStream* $tmp526 = *(&local9);
frost$core$String* $tmp527 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s528, param3);
frost$core$String* $tmp529 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp527, &$s530);
$fn532 $tmp531 = ($fn532) $tmp526->$class->vtable[19];
frost$core$Error* $tmp533 = $tmp531($tmp526, $tmp529);
if ($tmp533 == NULL) goto block44; else goto block45;
block45:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533 != NULL};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block46; else goto block47;
block47:;
frost$core$Int $tmp536 = (frost$core$Int) {110u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s537, $tmp536, &$s538);
abort(); // unreachable
block46:;
*(&local0) = $tmp533;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$io$OutputStream* $tmp539 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp540 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp541 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp542 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp543 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block44:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:111
frost$io$OutputStream* $tmp544 = *(&local9);
frost$core$String* $tmp545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s546, param3);
frost$core$String* $tmp547 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp545, &$s548);
$fn550 $tmp549 = ($fn550) $tmp544->$class->vtable[19];
frost$core$Error* $tmp551 = $tmp549($tmp544, $tmp547);
if ($tmp551 == NULL) goto block48; else goto block49;
block49:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Bit $tmp552 = (frost$core$Bit) {$tmp551 != NULL};
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block50; else goto block51;
block51:;
frost$core$Int $tmp554 = (frost$core$Int) {111u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s555, $tmp554, &$s556);
abort(); // unreachable
block50:;
*(&local0) = $tmp551;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
frost$io$OutputStream* $tmp557 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp558 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp559 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp560 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp561 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block48:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:112
frost$io$OutputStream* $tmp562 = *(&local9);
$fn564 $tmp563 = ($fn564) $tmp562->$class->vtable[19];
frost$core$Error* $tmp565 = $tmp563($tmp562, &$s566);
if ($tmp565 == NULL) goto block52; else goto block53;
block53:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$core$Bit $tmp567 = (frost$core$Bit) {$tmp565 != NULL};
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block54; else goto block55;
block55:;
frost$core$Int $tmp569 = (frost$core$Int) {112u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s570, $tmp569, &$s571);
abort(); // unreachable
block54:;
*(&local0) = $tmp565;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
frost$io$OutputStream* $tmp572 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp573 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp574 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp575 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp576 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block52:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:113
frost$io$OutputStream* $tmp577 = *(&local9);
$fn579 $tmp578 = ($fn579) $tmp577->$class->vtable[19];
frost$core$Error* $tmp580 = $tmp578($tmp577, &$s581);
if ($tmp580 == NULL) goto block56; else goto block57;
block57:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$core$Bit $tmp582 = (frost$core$Bit) {$tmp580 != NULL};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block58; else goto block59;
block59:;
frost$core$Int $tmp584 = (frost$core$Int) {113u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s585, $tmp584, &$s586);
abort(); // unreachable
block58:;
*(&local0) = $tmp580;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
frost$io$OutputStream* $tmp587 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp588 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp589 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp590 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp591 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block56:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:114
frost$io$OutputStream* $tmp592 = *(&local9);
$fn594 $tmp593 = ($fn594) $tmp592->$class->vtable[19];
frost$core$Error* $tmp595 = $tmp593($tmp592, &$s596);
if ($tmp595 == NULL) goto block60; else goto block61;
block61:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp595 != NULL};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block62; else goto block63;
block63:;
frost$core$Int $tmp599 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s600, $tmp599, &$s601);
abort(); // unreachable
block62:;
*(&local0) = $tmp595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$io$OutputStream* $tmp602 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp603 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp604 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp605 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp606 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block60:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:115
frost$io$OutputStream* $tmp607 = *(&local9);
$fn609 $tmp608 = ($fn609) $tmp607->$class->vtable[19];
frost$core$Error* $tmp610 = $tmp608($tmp607, &$s611);
if ($tmp610 == NULL) goto block64; else goto block65;
block65:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp610 != NULL};
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block66; else goto block67;
block67:;
frost$core$Int $tmp614 = (frost$core$Int) {115u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s615, $tmp614, &$s616);
abort(); // unreachable
block66:;
*(&local0) = $tmp610;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
frost$io$OutputStream* $tmp617 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp618 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp619 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp621 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block64:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:116
frost$io$OutputStream* $tmp622 = *(&local9);
$fn624 $tmp623 = ($fn624) $tmp622->$class->vtable[19];
frost$core$Error* $tmp625 = $tmp623($tmp622, &$s626);
if ($tmp625 == NULL) goto block68; else goto block69;
block69:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp625 != NULL};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block70; else goto block71;
block71:;
frost$core$Int $tmp629 = (frost$core$Int) {116u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s630, $tmp629, &$s631);
abort(); // unreachable
block70:;
*(&local0) = $tmp625;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$io$OutputStream* $tmp632 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp633 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp634 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp635 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp636 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp636));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block68:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:117
frost$io$OutputStream* $tmp637 = *(&local9);
$fn639 $tmp638 = ($fn639) $tmp637->$class->vtable[19];
frost$core$Error* $tmp640 = $tmp638($tmp637, &$s641);
if ($tmp640 == NULL) goto block72; else goto block73;
block73:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp640 != NULL};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block74; else goto block75;
block75:;
frost$core$Int $tmp644 = (frost$core$Int) {117u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s645, $tmp644, &$s646);
abort(); // unreachable
block74:;
*(&local0) = $tmp640;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
frost$io$OutputStream* $tmp647 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp648 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp649 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp650 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp651 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block72:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:118
frost$io$OutputStream* $tmp652 = *(&local9);
frost$core$MutableString* $tmp653 = *(&local6);
frost$core$String* $tmp654 = frost$core$MutableString$finish$R$frost$core$String($tmp653);
$fn656 $tmp655 = ($fn656) $tmp652->$class->vtable[17];
frost$core$Error* $tmp657 = $tmp655($tmp652, $tmp654);
if ($tmp657 == NULL) goto block76; else goto block77;
block77:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Bit $tmp658 = (frost$core$Bit) {$tmp657 != NULL};
bool $tmp659 = $tmp658.value;
if ($tmp659) goto block78; else goto block79;
block79:;
frost$core$Int $tmp660 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s661, $tmp660, &$s662);
abort(); // unreachable
block78:;
*(&local0) = $tmp657;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
frost$io$OutputStream* $tmp663 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp664 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp665 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp666 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp667 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block76:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:119
frost$io$OutputStream* $tmp668 = *(&local9);
$fn670 $tmp669 = ($fn670) $tmp668->$class->vtable[19];
frost$core$Error* $tmp671 = $tmp669($tmp668, &$s672);
if ($tmp671 == NULL) goto block80; else goto block81;
block81:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp671 != NULL};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block82; else goto block83;
block83:;
frost$core$Int $tmp675 = (frost$core$Int) {119u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s676, $tmp675, &$s677);
abort(); // unreachable
block82:;
*(&local0) = $tmp671;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
frost$io$OutputStream* $tmp678 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp678));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp679 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp680 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp681 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp682 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block80:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp671));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:120
frost$io$OutputStream* $tmp683 = *(&local9);
$fn685 $tmp684 = ($fn685) $tmp683->$class->vtable[19];
frost$core$Error* $tmp686 = $tmp684($tmp683, &$s687);
if ($tmp686 == NULL) goto block84; else goto block85;
block85:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp686 != NULL};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block86; else goto block87;
block87:;
frost$core$Int $tmp690 = (frost$core$Int) {120u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s691, $tmp690, &$s692);
abort(); // unreachable
block86:;
*(&local0) = $tmp686;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
frost$io$OutputStream* $tmp693 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp694 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp695 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp696 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp697 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block84:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:121
frost$io$OutputStream* $tmp698 = *(&local9);
$fn700 $tmp699 = ($fn700) $tmp698->$class->vtable[19];
frost$core$Error* $tmp701 = $tmp699($tmp698, &$s702);
if ($tmp701 == NULL) goto block88; else goto block89;
block89:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp701 != NULL};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block90; else goto block91;
block91:;
frost$core$Int $tmp705 = (frost$core$Int) {121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s706, $tmp705, &$s707);
abort(); // unreachable
block90:;
*(&local0) = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$io$OutputStream* $tmp708 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp709 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp710 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp711 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp712 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block88:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:122
frost$io$OutputStream* $tmp713 = *(&local9);
$fn715 $tmp714 = ($fn715) $tmp713->$class->vtable[19];
frost$core$Error* $tmp716 = $tmp714($tmp713, &$s717);
if ($tmp716 == NULL) goto block92; else goto block93;
block93:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp716 != NULL};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block94; else goto block95;
block95:;
frost$core$Int $tmp720 = (frost$core$Int) {122u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s721, $tmp720, &$s722);
abort(); // unreachable
block94:;
*(&local0) = $tmp716;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
frost$io$OutputStream* $tmp723 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp724 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp725 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp726 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp727 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block92:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:123
frost$io$OutputStream* $tmp728 = *(&local9);
$fn730 $tmp729 = ($fn730) $tmp728->$class->vtable[19];
frost$core$Error* $tmp731 = $tmp729($tmp728, &$s732);
if ($tmp731 == NULL) goto block96; else goto block97;
block97:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$core$Bit $tmp733 = (frost$core$Bit) {$tmp731 != NULL};
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block98; else goto block99;
block99:;
frost$core$Int $tmp735 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s736, $tmp735, &$s737);
abort(); // unreachable
block98:;
*(&local0) = $tmp731;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$io$OutputStream* $tmp738 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp739 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp740 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp741 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp742 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block96:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
frost$io$OutputStream* $tmp743 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp744 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp745 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp746 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp747 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Error* $tmp748 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:126
frost$core$Error* $tmp749 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HTMLProcessor.frost:126:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:62
$fn751 $tmp750 = ($fn751) ((frost$core$Object*) $tmp749)->$class->vtable[0];
frost$core$String* $tmp752 = $tmp750(((frost$core$Object*) $tmp749));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.frost:62:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp752);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:127
frost$core$Int $tmp753 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp753);
frost$core$Int $tmp754 = (frost$core$Int) {127u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s755, $tmp754, &$s756);
abort(); // unreachable

}
void org$frostlang$frostc$HTMLProcessor$cleanup(org$frostlang$frostc$HTMLProcessor* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp757 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp758 = *$tmp757;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
return;

}

