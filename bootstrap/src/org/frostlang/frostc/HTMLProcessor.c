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
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/parser/SyntaxHighlighter.h"
#include "frost/collections/Array.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
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
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int32.h"
#include "frost/core/Char32.h"
#include "frost/core/System.h"


static frost$core$String $s1;
org$frostlang$frostc$HTMLProcessor$class_type org$frostlang$frostc$HTMLProcessor$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$cleanup, org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String, org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String} };

typedef frost$collections$Iterator* (*$fn18)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn22)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn27)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn38)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn50)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn63)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn203)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn215)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn225)(frost$core$Object*);
typedef frost$core$String* (*$fn234)(frost$core$Object*);
typedef frost$core$Bit (*$fn245)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn257)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn273)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn300)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn338)(frost$core$Object*);
typedef frost$core$Int64 (*$fn349)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn353)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn357)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn361)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn369)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn398)(frost$core$Object*);
typedef frost$core$Int64 (*$fn421)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn476)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn486)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn500)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn513)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn526)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn535)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn545)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn555)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn565)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn575)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn585)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn597)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn606)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn616)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn626)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn636)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn646)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn661)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72", 34, -162222424923477505, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 24, 8088723627449183031, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6d\x6d\x65\x6e\x74\x22\x3e", 22, 5195701876173909349, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x22\x3e", 25, -1277266025356162443, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6d\x65\x74\x68\x6f\x64\x4e\x61\x6d\x65\x22\x3e", 25, 614141651668444638, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x4e\x61\x6d\x65\x22\x3e", 28, 7976964863345252008, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x74\x79\x70\x65\x22\x3e", 19, -6237120118826539316, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6b\x65\x79\x77\x6f\x72\x64\x22\x3e", 22, 3489752146076448555, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x63\x6f\x6e\x74\x72\x6f\x6c\x22\x3e", 22, -6843474029214577891, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x74\x65\x72\x61\x6c\x22\x3e", 22, -3542195609056500961, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x73\x74\x72\x69\x6e\x67\x22\x3e", 21, -4855012157584048303, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6f\x70\x65\x72\x61\x74\x6f\x72\x22\x3e", 23, 33141744113103844, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x61\x62\x65\x6c\x22\x3e", 20, -149918338464228758, NULL };
static frost$core$String $s172 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x54\x4d\x4c\x50\x72\x6f\x63\x65\x73\x73\x6f\x72\x2e\x66\x72\x6f\x73\x74", 19, -5100149063075526860, NULL };
static frost$core$String $s186 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26", 1, -5808628341409743335, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x61\x6d\x70\x3b", 5, 4071416011722950258, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c", 1, -5808604152153922693, NULL };
static frost$core$String $s190 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x6c\x74\x3b", 4, 3062186500626132942, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x26\x67\x74\x3b", 4, 8779067523193954595, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22", 13, 4264447674952797972, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x22\x3e", 2, 561975819213520929, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e", 7, 8018166017091831374, NULL };
static frost$core$String $s344 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x73\x70\x61\x6e\x20\x63\x6c\x61\x73\x73\x3d\x22\x6c\x69\x6e\x65\x4e\x75\x6d\x62\x65\x72\x22\x3e", 25, -8814482118997729913, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x73\x70\x61\x6e\x3e\x20\x20", 9, 2697689956412709694, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s478 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x68\x74\x6d\x6c\x3e", 6, 683364003274147512, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x68\x65\x61\x64\x3e", 8, -6588624628402863451, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s498 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x6d\x61\x69\x6e\x2e\x63\x73\x73\x22\x20\x2f\x3e", 19, -7636228459579019980, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x2d\x73\x6f\x75\x72\x63\x65\x2e\x63\x73\x73\x22\x20\x2f\x3e", 21, -7838137996368162576, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x6c\x69\x6e\x6b\x20\x72\x65\x6c\x3d\x22\x73\x74\x79\x6c\x65\x73\x68\x65\x65\x74\x22\x20\x74\x79\x70\x65\x3d\x22\x74\x65\x78\x74\x2f\x63\x73\x73\x22\x20\x68\x72\x65\x66\x3d\x22", 49, -1745883989657982051, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x2d\x6d\x6f\x6e\x6f\x6b\x61\x69\x2e\x63\x73\x73\x22\x20\x2f\x3e", 26, 2476654268654116656, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x2f\x68\x65\x61\x64\x3e", 9, 348240475473272024, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x62\x6f\x64\x79\x3e", 8, 4133860649010664239, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x6d\x61\x69\x6e\x22\x3e", 19, 5716761674580204597, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x21\x2d\x2d\x54\x4f\x43\x42\x45\x47\x49\x4e\x2d\x2d\x3e\x3c\x21\x2d\x2d\x54\x4f\x43\x45\x4e\x44\x2d\x2d\x3e", 34, -145632375787406955, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x64\x69\x76\x20\x69\x64\x3d\x22\x63\x6f\x6e\x74\x65\x6e\x74\x22\x3e", 24, -8920756938342762323, NULL };
static frost$core$String $s587 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x70\x72\x65\x3e\x3c\x63\x6f\x64\x65\x20\x63\x6c\x61\x73\x73\x3d\x22\x66\x72\x6f\x73\x74\x63\x6f\x64\x65\x22\x3e", 37, 2682849467595832643, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20\x3c\x2f\x63\x6f\x64\x65\x3e\x3c\x2f\x70\x72\x65\x3e", 21, -6454915742278049375, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 12, -7193073556246214837, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x20\x20\x3c\x2f\x64\x69\x76\x3e", 10, -8315368983397429245, NULL };
static frost$core$String $s638 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x3c\x2f\x62\x6f\x64\x79\x3e", 9, -8738063546824915686, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x2f\x68\x74\x6d\x6c\x3e", 7, 2223332588984305893, NULL };

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
frost$core$Int64 $tmp8 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:17:46
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp9 = &(&local2)->$rawValue;
*$tmp9 = $tmp8;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp10 = *(&local2);
*(&local1) = $tmp10;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp11 = *(&local1);
*(&local3) = $tmp11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:18
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp12 = &param1->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp13 = *$tmp12;
frost$collections$Array** $tmp14 = &$tmp13->tokens;
frost$collections$Array* $tmp15 = *$tmp14;
ITable* $tmp16 = ((frost$collections$Iterable*) $tmp15)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$collections$Iterator* $tmp19 = $tmp17(((frost$collections$Iterable*) $tmp15));
goto block2;
block2:;
ITable* $tmp20 = $tmp19->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Bit $tmp23 = $tmp21($tmp19);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block4; else goto block3;
block3:;
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
ITable* $tmp25 = $tmp19->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
$fn27 $tmp26 = $tmp25->methods[1];
frost$core$Object* $tmp28 = $tmp26($tmp19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Pair*) $tmp28)));
org$frostlang$frostc$Pair* $tmp29 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local4) = ((org$frostlang$frostc$Pair*) $tmp28);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:19
org$frostlang$frostc$Pair* $tmp30 = *(&local4);
frost$core$Object** $tmp31 = &$tmp30->second;
frost$core$Object* $tmp32 = *$tmp31;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp33;
$tmp33 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp33->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp32)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp34 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp35;
$tmp35 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp35->value = $tmp34;
ITable* $tmp36 = ((frost$core$Equatable*) $tmp33)->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
frost$core$Bit $tmp39 = $tmp37(((frost$core$Equatable*) $tmp33), ((frost$core$Equatable*) $tmp35));
bool $tmp40 = $tmp39.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp35)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp33)));
if ($tmp40) goto block7; else goto block6;
block7:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp41 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp42;
$tmp42 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp42->value = $tmp41;
frost$core$Int64 $tmp43 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:19:71
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp44 = &(&local6)->$rawValue;
*$tmp44 = $tmp43;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp45 = *(&local6);
*(&local5) = $tmp45;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp46 = *(&local5);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp47;
$tmp47 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp47->value = $tmp46;
ITable* $tmp48 = ((frost$core$Equatable*) $tmp42)->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[1];
frost$core$Bit $tmp51 = $tmp49(((frost$core$Equatable*) $tmp42), ((frost$core$Equatable*) $tmp47));
bool $tmp52 = $tmp51.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp47)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp42)));
if ($tmp52) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:20
frost$core$MutableString* $tmp53 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp53, &$s54);
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:22
org$frostlang$frostc$Pair* $tmp55 = *(&local4);
frost$core$Object** $tmp56 = &$tmp55->second;
frost$core$Object* $tmp57 = *$tmp56;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp58;
$tmp58 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp58->value = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp57)->value;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp59 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp60;
$tmp60 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp60->value = $tmp59;
ITable* $tmp61 = ((frost$core$Equatable*) $tmp58)->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[1];
frost$core$Bit $tmp64 = $tmp62(((frost$core$Equatable*) $tmp58), ((frost$core$Equatable*) $tmp60));
bool $tmp65 = $tmp64.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp60)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp58)));
if ($tmp65) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:23
org$frostlang$frostc$Pair* $tmp66 = *(&local4);
frost$core$Object** $tmp67 = &$tmp66->second;
frost$core$Object* $tmp68 = *$tmp67;
*(&local3) = ((org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) $tmp68)->value;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:24
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp69 = *(&local3);
frost$core$Int64 $tmp70 = $tmp69.$rawValue;
frost$core$Int64 $tmp71 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:25:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp72 = $tmp70.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 == $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block12; else goto block13;
block12:;
goto block11;
block13:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:28:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp78 = $tmp70.value;
int64_t $tmp79 = $tmp77.value;
bool $tmp80 = $tmp78 == $tmp79;
frost$core$Bit $tmp81 = (frost$core$Bit) {$tmp80};
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp83 = (frost$core$Int64) {2u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:28:80
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp84 = $tmp70.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 == $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block15; else goto block18;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:29
frost$core$MutableString* $tmp89 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp89, &$s90);
goto block11;
block18:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {3u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:31:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp92 = $tmp70.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 == $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:32
frost$core$MutableString* $tmp97 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp97, &$s98);
goto block11;
block21:;
frost$core$Int64 $tmp99 = (frost$core$Int64) {4u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:34:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp100 = $tmp70.value;
int64_t $tmp101 = $tmp99.value;
bool $tmp102 = $tmp100 == $tmp101;
frost$core$Bit $tmp103 = (frost$core$Bit) {$tmp102};
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:35
frost$core$MutableString* $tmp105 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp105, &$s106);
goto block11;
block24:;
frost$core$Int64 $tmp107 = (frost$core$Int64) {5u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:37:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp108 = $tmp70.value;
int64_t $tmp109 = $tmp107.value;
bool $tmp110 = $tmp108 == $tmp109;
frost$core$Bit $tmp111 = (frost$core$Bit) {$tmp110};
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block26; else goto block27;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:38
frost$core$MutableString* $tmp113 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp113, &$s114);
goto block11;
block27:;
frost$core$Int64 $tmp115 = (frost$core$Int64) {6u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:40:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp116 = $tmp70.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 == $tmp117;
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block29; else goto block30;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:41
frost$core$MutableString* $tmp121 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp121, &$s122);
goto block11;
block30:;
frost$core$Int64 $tmp123 = (frost$core$Int64) {7u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:43:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp124 = $tmp70.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 == $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block32; else goto block33;
block32:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:44
frost$core$MutableString* $tmp129 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp129, &$s130);
goto block11;
block33:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {8u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:46:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp132 = $tmp70.value;
int64_t $tmp133 = $tmp131.value;
bool $tmp134 = $tmp132 == $tmp133;
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block35; else goto block36;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:47
frost$core$MutableString* $tmp137 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp137, &$s138);
goto block11;
block36:;
frost$core$Int64 $tmp139 = (frost$core$Int64) {9u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:49:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp140 = $tmp70.value;
int64_t $tmp141 = $tmp139.value;
bool $tmp142 = $tmp140 == $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block38; else goto block39;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:50
frost$core$MutableString* $tmp145 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp145, &$s146);
goto block11;
block39:;
frost$core$Int64 $tmp147 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:52:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp148 = $tmp70.value;
int64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 == $tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block41; else goto block42;
block41:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:53
frost$core$MutableString* $tmp153 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp153, &$s154);
goto block11;
block42:;
frost$core$Int64 $tmp155 = (frost$core$Int64) {11u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:55:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp156 = $tmp70.value;
int64_t $tmp157 = $tmp155.value;
bool $tmp158 = $tmp156 == $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block44; else goto block45;
block44:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:56
frost$core$MutableString* $tmp161 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp161, &$s162);
goto block11;
block45:;
frost$core$Int64 $tmp163 = (frost$core$Int64) {12u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from HTMLProcessor.frost:58:48
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:240
int64_t $tmp164 = $tmp70.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 == $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:59
frost$core$MutableString* $tmp169 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp169, &$s170);
goto block11;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:62
frost$core$Int64 $tmp171 = (frost$core$Int64) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s172, $tmp171);
abort(); // unreachable
block11:;
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:66
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp173 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
org$frostlang$frostc$Pair* $tmp174 = *(&local4);
frost$core$Object** $tmp175 = &$tmp174->first;
frost$core$Object* $tmp176 = *$tmp175;
// begin inline call to function org.frostlang.frostc.parser.Parser.text(token:org.frostlang.frostc.parser.Token):frost.core.String from HTMLProcessor.frost:66:47
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/Parser.frost:227
frost$core$String** $tmp177 = &param1->source;
frost$core$String* $tmp178 = *$tmp177;
frost$core$String$Index $tmp179 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp176)->value.start;
frost$core$String$Index $tmp180 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp176)->value.end;
frost$core$Bit $tmp181 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$GT $tmp182 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp179, $tmp180, $tmp181);
frost$core$String* $tmp183 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String($tmp178, $tmp182);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$MutableString$init$frost$core$String($tmp173, $tmp183);
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$MutableString* $tmp184 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local7) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:67
frost$core$MutableString* $tmp185 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp185, &$s186, &$s187);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:68
frost$core$MutableString* $tmp188 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp188, &$s189, &$s190);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:69
frost$core$MutableString* $tmp191 = *(&local7);
frost$core$MutableString$replace$frost$core$String$frost$core$String($tmp191, &$s192, &$s193);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:70
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp194 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp195;
$tmp195 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp195->value = $tmp194;
frost$core$Int64 $tmp196 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:70:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp197 = &(&local9)->$rawValue;
*$tmp197 = $tmp196;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp198 = *(&local9);
*(&local8) = $tmp198;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp199 = *(&local8);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp200;
$tmp200 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp200->value = $tmp199;
ITable* $tmp201 = ((frost$core$Equatable*) $tmp195)->$class->itable;
while ($tmp201->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp201 = $tmp201->next;
}
$fn203 $tmp202 = $tmp201->methods[1];
frost$core$Bit $tmp204 = $tmp202(((frost$core$Equatable*) $tmp195), ((frost$core$Equatable*) $tmp200));
bool $tmp205 = $tmp204.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp200)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp195)));
if ($tmp205) goto block53; else goto block52;
block53:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp206 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp207;
$tmp207 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp207->value = $tmp206;
frost$core$Int64 $tmp208 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:71:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp209 = &(&local11)->$rawValue;
*$tmp209 = $tmp208;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp210 = *(&local11);
*(&local10) = $tmp210;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp211 = *(&local10);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp212;
$tmp212 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp212->value = $tmp211;
ITable* $tmp213 = ((frost$core$Equatable*) $tmp207)->$class->itable;
while ($tmp213->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp213 = $tmp213->next;
}
$fn215 $tmp214 = $tmp213->methods[1];
frost$core$Bit $tmp216 = $tmp214(((frost$core$Equatable*) $tmp207), ((frost$core$Equatable*) $tmp212));
bool $tmp217 = $tmp216.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp212)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp207)));
if ($tmp217) goto block51; else goto block52;
block51:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:72
frost$core$MutableString* $tmp218 = *(&local0);
org$frostlang$frostc$Pair* $tmp219 = *(&local4);
frost$core$Object** $tmp220 = &$tmp219->first;
frost$core$Object* $tmp221 = *$tmp220;
org$frostlang$frostc$parser$Token$Kind $tmp222 = ((org$frostlang$frostc$parser$Token$wrapper*) $tmp221)->value.kind;
org$frostlang$frostc$parser$Token$Kind$wrapper* $tmp223;
$tmp223 = (org$frostlang$frostc$parser$Token$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$Token$Kind$wrapperclass);
$tmp223->value = $tmp222;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from HTMLProcessor.frost:72:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:154
$fn225 $tmp224 = ($fn225) ((frost$core$Object*) $tmp223)->$class->vtable[0];
frost$core$String* $tmp226 = $tmp224(((frost$core$Object*) $tmp223));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s228, $tmp226);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String* $tmp229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp227, &$s230);
frost$core$MutableString$append$frost$core$String($tmp218, $tmp229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
goto block52;
block52:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:74
frost$core$MutableString* $tmp231 = *(&local0);
frost$core$MutableString* $tmp232 = *(&local7);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HTMLProcessor.frost:74:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn234 $tmp233 = ($fn234) ((frost$core$Object*) $tmp232)->$class->vtable[0];
frost$core$String* $tmp235 = $tmp233(((frost$core$Object*) $tmp232));
frost$core$MutableString$append$frost$core$String($tmp231, $tmp235);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:75
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp236 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp237;
$tmp237 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp237->value = $tmp236;
frost$core$Int64 $tmp238 = (frost$core$Int64) {1u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:75:49
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp239 = &(&local13)->$rawValue;
*$tmp239 = $tmp238;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp240 = *(&local13);
*(&local12) = $tmp240;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp241 = *(&local12);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp242;
$tmp242 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp242->value = $tmp241;
ITable* $tmp243 = ((frost$core$Equatable*) $tmp237)->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[1];
frost$core$Bit $tmp246 = $tmp244(((frost$core$Equatable*) $tmp237), ((frost$core$Equatable*) $tmp242));
bool $tmp247 = $tmp246.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp242)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp237)));
if ($tmp247) goto block60; else goto block59;
block60:;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp248 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp249;
$tmp249 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp249->value = $tmp248;
frost$core$Int64 $tmp250 = (frost$core$Int64) {2u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:76:54
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp251 = &(&local15)->$rawValue;
*$tmp251 = $tmp250;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp252 = *(&local15);
*(&local14) = $tmp252;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp253 = *(&local14);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp254;
$tmp254 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp254->value = $tmp253;
ITable* $tmp255 = ((frost$core$Equatable*) $tmp249)->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[1];
frost$core$Bit $tmp258 = $tmp256(((frost$core$Equatable*) $tmp249), ((frost$core$Equatable*) $tmp254));
bool $tmp259 = $tmp258.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp254)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp249)));
if ($tmp259) goto block58; else goto block59;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:77
frost$core$MutableString* $tmp260 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp260, &$s261);
goto block59;
block59:;
frost$core$MutableString* $tmp262 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
*(&local7) = ((frost$core$MutableString*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
org$frostlang$frostc$Pair* $tmp263 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local4) = ((org$frostlang$frostc$Pair*) NULL);
goto block2;
block4:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:80
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp264 = *(&local3);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp265;
$tmp265 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp265->value = $tmp264;
frost$core$Int64 $tmp266 = (frost$core$Int64) {0u};
// begin inline call to org.frostlang.frostc.parser.SyntaxHighlighter.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.parser.SyntaxHighlighter.Kind from HTMLProcessor.frost:80:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/parser/SyntaxHighlighter.frost:6
frost$core$Int64* $tmp267 = &(&local17)->$rawValue;
*$tmp267 = $tmp266;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp268 = *(&local17);
*(&local16) = $tmp268;
org$frostlang$frostc$parser$SyntaxHighlighter$Kind $tmp269 = *(&local16);
org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper* $tmp270;
$tmp270 = (org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$Kind$wrapperclass);
$tmp270->value = $tmp269;
ITable* $tmp271 = ((frost$core$Equatable*) $tmp265)->$class->itable;
while ($tmp271->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp271 = $tmp271->next;
}
$fn273 $tmp272 = $tmp271->methods[1];
frost$core$Bit $tmp274 = $tmp272(((frost$core$Equatable*) $tmp265), ((frost$core$Equatable*) $tmp270));
bool $tmp275 = $tmp274.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp270)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp265)));
if ($tmp275) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:81
frost$core$MutableString* $tmp276 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp276, &$s277);
goto block64;
block64:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:83
frost$core$MutableString* $tmp278 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp278, &$s279);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:84
frost$core$MutableString* $tmp280 = *(&local0);
frost$core$String* $tmp281 = frost$core$MutableString$finish$R$frost$core$String($tmp280);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
frost$core$MutableString* $tmp282 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp281;

}
void org$frostlang$frostc$HTMLProcessor$process$frost$io$File$frost$io$File$frost$core$String(org$frostlang$frostc$HTMLProcessor* param0, frost$io$File* param1, frost$io$File* param2, frost$core$String* param3) {

frost$core$Error* local0 = NULL;
frost$threads$MessageQueue* local1 = NULL;
org$frostlang$frostc$parser$Parser* local2 = NULL;
frost$threads$ScopedLock* local3 = NULL;
frost$collections$Array* local4 = NULL;
frost$core$Int64 local5;
frost$core$MutableString* local6 = NULL;
frost$core$Int64 local7;
frost$core$String* local8 = NULL;
frost$io$OutputStream* local9 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:88
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:89
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp283 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp283);
*(&local1) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
frost$threads$MessageQueue* $tmp284 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local1) = $tmp283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:90
FROST_ASSERT(96 == sizeof(org$frostlang$frostc$parser$Parser));
org$frostlang$frostc$parser$Parser* $tmp285 = (org$frostlang$frostc$parser$Parser*) frostObjectAlloc(96, (frost$core$Class*) &org$frostlang$frostc$parser$Parser$class);
frost$threads$MessageQueue* $tmp286 = *(&local1);
org$frostlang$frostc$parser$Parser$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT($tmp285, $tmp286);
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
org$frostlang$frostc$parser$Parser* $tmp287 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local2) = $tmp285;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:91
org$frostlang$frostc$parser$Parser* $tmp288 = *(&local2);
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$parser$SyntaxHighlighter));
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp289 = (org$frostlang$frostc$parser$SyntaxHighlighter*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$parser$SyntaxHighlighter$class);
org$frostlang$frostc$parser$SyntaxHighlighter$init($tmp289);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp290 = &$tmp288->syntaxHighlighter;
org$frostlang$frostc$parser$SyntaxHighlighter* $tmp291 = *$tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
org$frostlang$frostc$parser$SyntaxHighlighter** $tmp292 = &$tmp288->syntaxHighlighter;
*$tmp292 = $tmp289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:92
org$frostlang$frostc$parser$Parser* $tmp293 = *(&local2);
org$frostlang$frostc$Compiler** $tmp294 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp295 = *$tmp294;
frost$collections$Array** $tmp296 = &$tmp295->files;
frost$collections$Array* $tmp297 = *$tmp296;
ITable* $tmp298 = ((frost$collections$CollectionView*) $tmp297)->$class->itable;
while ($tmp298->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp298 = $tmp298->next;
}
$fn300 $tmp299 = $tmp298->methods[0];
frost$core$Int64 $tmp301 = $tmp299(((frost$collections$CollectionView*) $tmp297));
frost$core$Maybe* $tmp302 = frost$io$File$readFully$R$frost$core$Maybe$LTfrost$core$String$GT(param1);
frost$core$Int64* $tmp303 = &$tmp302->$rawValue;
frost$core$Int64 $tmp304 = *$tmp303;
int64_t $tmp305 = $tmp304.value;
bool $tmp306 = $tmp305 == 0u;
if ($tmp306) goto block3; else goto block4;
block4:;
frost$core$Error** $tmp307 = (frost$core$Error**) ($tmp302->$data + 0);
frost$core$Error* $tmp308 = *$tmp307;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local0) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$frostc$parser$Parser* $tmp309 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp310 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp310));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block3:;
frost$core$Object** $tmp311 = (frost$core$Object**) ($tmp302->$data + 0);
frost$core$Object* $tmp312 = *$tmp311;
org$frostlang$frostc$parser$Parser$start$frost$io$File$frost$core$Int64$frost$core$String($tmp293, param1, $tmp301, ((frost$core$String*) $tmp312));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:93
org$frostlang$frostc$Compiler** $tmp313 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp314 = *$tmp313;
frost$collections$Array** $tmp315 = &$tmp314->files;
frost$collections$Array* $tmp316 = *$tmp315;
frost$collections$Array$add$frost$collections$Array$T($tmp316, ((frost$core$Object*) param1));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:94
org$frostlang$frostc$parser$Parser* $tmp317 = *(&local2);
org$frostlang$frostc$ASTNode* $tmp318 = org$frostlang$frostc$parser$Parser$file$R$org$frostlang$frostc$ASTNode$Q($tmp317);
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318 == NULL};
bool $tmp320 = $tmp319.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
if ($tmp320) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:95
goto block7;
block7:;
frost$threads$MessageQueue* $tmp321 = *(&local1);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from HTMLProcessor.frost:95:40
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:25
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.stub:25:25
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:20
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp322 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp323 = &$tmp321->lock;
frost$threads$Lock* $tmp324 = *$tmp323;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp322, $tmp324);
*(&local3) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
frost$threads$ScopedLock* $tmp325 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local3) = $tmp322;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/threads/MessageQueue.stub:21
frost$core$Int64* $tmp326 = &$tmp321->count;
frost$core$Int64 $tmp327 = *$tmp326;
frost$threads$ScopedLock* $tmp328 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local3) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp329 = (frost$core$Int64) {0u};
int64_t $tmp330 = $tmp327.value;
int64_t $tmp331 = $tmp329.value;
bool $tmp332 = $tmp330 > $tmp331;
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:96
frost$threads$MessageQueue* $tmp335 = *(&local1);
frost$core$Immutable* $tmp336 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp335);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HTMLProcessor.frost:96:38
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn338 $tmp337 = ($fn338) ((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp336))->$class->vtable[0];
frost$core$String* $tmp339 = $tmp337(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp336)));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp339);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
goto block7;
block9:;
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:99
org$frostlang$frostc$parser$Parser* $tmp340 = *(&local2);
frost$core$String* $tmp341 = org$frostlang$frostc$HTMLProcessor$prettyPrint$org$frostlang$frostc$parser$Parser$R$frost$core$String(param0, $tmp340);
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from HTMLProcessor.frost:99:51
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:315
frost$core$Int64 $tmp342 = (frost$core$Int64) {9223372036854775807u};
frost$collections$Array* $tmp343 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT($tmp341, &$s344, $tmp342);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$collections$Array* $tmp345 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp345));
*(&local4) = $tmp343;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:100
frost$collections$Array* $tmp346 = *(&local4);
ITable* $tmp347 = ((frost$collections$CollectionView*) $tmp346)->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$core$Int64 $tmp350 = $tmp348(((frost$collections$CollectionView*) $tmp346));
frost$core$Int64$wrapper* $tmp351;
$tmp351 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp351->value = $tmp350;
$fn353 $tmp352 = ($fn353) ((frost$core$Object*) $tmp351)->$class->vtable[0];
frost$core$String* $tmp354 = $tmp352(((frost$core$Object*) $tmp351));
// begin inline call to function frost.core.String.get_length():frost.core.Int64 from HTMLProcessor.frost:100:46
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:138
ITable* $tmp355 = ((frost$collections$Iterable*) $tmp354)->$class->itable;
while ($tmp355->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp355 = $tmp355->next;
}
$fn357 $tmp356 = $tmp355->methods[0];
frost$collections$Iterator* $tmp358 = $tmp356(((frost$collections$Iterable*) $tmp354));
ITable* $tmp359 = $tmp358->$class->itable;
while ($tmp359->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp359 = $tmp359->next;
}
$fn361 $tmp360 = $tmp359->methods[2];
frost$core$Int64 $tmp362 = $tmp360($tmp358);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local5) = $tmp362;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp351));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:101
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp363 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp363);
*(&local6) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
frost$core$MutableString* $tmp364 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp364));
*(&local6) = $tmp363;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:102
frost$core$Int64 $tmp365 = (frost$core$Int64) {0u};
frost$collections$Array* $tmp366 = *(&local4);
ITable* $tmp367 = ((frost$collections$CollectionView*) $tmp366)->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$core$Int64 $tmp370 = $tmp368(((frost$collections$CollectionView*) $tmp366));
frost$core$Bit $tmp371 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp372 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp365, $tmp370, $tmp371);
frost$core$Int64 $tmp373 = $tmp372.min;
*(&local7) = $tmp373;
frost$core$Int64 $tmp374 = $tmp372.max;
frost$core$Bit $tmp375 = $tmp372.inclusive;
bool $tmp376 = $tmp375.value;
frost$core$Int64 $tmp377 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp378 = $tmp377.value;
frost$core$UInt64 $tmp379 = (frost$core$UInt64) {((uint64_t) $tmp378)};
if ($tmp376) goto block20; else goto block21;
block20:;
int64_t $tmp380 = $tmp373.value;
int64_t $tmp381 = $tmp374.value;
bool $tmp382 = $tmp380 <= $tmp381;
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block17; else goto block18;
block21:;
int64_t $tmp385 = $tmp373.value;
int64_t $tmp386 = $tmp374.value;
bool $tmp387 = $tmp385 < $tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387};
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:103
frost$core$Int64 $tmp390 = *(&local7);
frost$core$Int64 $tmp391 = (frost$core$Int64) {1u};
int64_t $tmp392 = $tmp390.value;
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392 + $tmp393;
frost$core$Int64 $tmp395 = (frost$core$Int64) {$tmp394};
frost$core$Int64$wrapper* $tmp396;
$tmp396 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp396->value = $tmp395;
$fn398 $tmp397 = ($fn398) ((frost$core$Object*) $tmp396)->$class->vtable[0];
frost$core$String* $tmp399 = $tmp397(((frost$core$Object*) $tmp396));
frost$core$Int64 $tmp400 = *(&local5);
// begin inline call to function frost.core.String.rightAlign(width:frost.core.Int64):frost.core.String from HTMLProcessor.frost:103:62
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:303
frost$core$Int32 $tmp401 = (frost$core$Int32) {32u};
frost$core$Char32 $tmp402 = frost$core$Char32$init$frost$core$Int32($tmp401);
frost$core$String* $tmp403 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String($tmp399, $tmp400, $tmp402);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$String* $tmp404 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local8) = $tmp403;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:104
frost$core$MutableString* $tmp405 = *(&local6);
frost$core$String* $tmp406 = *(&local8);
frost$core$String* $tmp407 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s408, $tmp406);
frost$core$String* $tmp409 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp407, &$s410);
frost$collections$Array* $tmp411 = *(&local4);
frost$core$Int64 $tmp412 = *(&local7);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from HTMLProcessor.frost:104:93
frost$core$Int64 $tmp413 = (frost$core$Int64) {0u};
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
bool $tmp416 = $tmp414 >= $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block26; else goto block25;
block26:;
ITable* $tmp419 = ((frost$collections$CollectionView*) $tmp411)->$class->itable;
while ($tmp419->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp419 = $tmp419->next;
}
$fn421 $tmp420 = $tmp419->methods[0];
frost$core$Int64 $tmp422 = $tmp420(((frost$collections$CollectionView*) $tmp411));
int64_t $tmp423 = $tmp412.value;
int64_t $tmp424 = $tmp422.value;
bool $tmp425 = $tmp423 < $tmp424;
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
bool $tmp427 = $tmp426.value;
if ($tmp427) goto block24; else goto block25;
block25:;
frost$core$Int64 $tmp428 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s429, $tmp428, &$s430);
abort(); // unreachable
block24:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp431 = &$tmp411->data;
frost$core$Object** $tmp432 = *$tmp431;
int64_t $tmp433 = $tmp412.value;
frost$core$Object* $tmp434 = $tmp432[$tmp433];
frost$core$Frost$ref$frost$core$Object$Q($tmp434);
frost$core$String* $tmp435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp409, ((frost$core$String*) $tmp434));
frost$core$String* $tmp436 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp435, &$s437);
frost$core$MutableString$append$frost$core$String($tmp405, $tmp436);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
frost$core$Frost$unref$frost$core$Object$Q($tmp434);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$String* $tmp438 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
*(&local8) = ((frost$core$String*) NULL);
frost$core$Int64 $tmp439 = *(&local7);
int64_t $tmp440 = $tmp374.value;
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440 - $tmp441;
frost$core$Int64 $tmp443 = (frost$core$Int64) {$tmp442};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp444 = $tmp443.value;
frost$core$UInt64 $tmp445 = (frost$core$UInt64) {((uint64_t) $tmp444)};
if ($tmp376) goto block29; else goto block30;
block29:;
uint64_t $tmp446 = $tmp445.value;
uint64_t $tmp447 = $tmp379.value;
bool $tmp448 = $tmp446 >= $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block27; else goto block18;
block30:;
uint64_t $tmp451 = $tmp445.value;
uint64_t $tmp452 = $tmp379.value;
bool $tmp453 = $tmp451 > $tmp452;
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block27; else goto block18;
block27:;
int64_t $tmp456 = $tmp439.value;
int64_t $tmp457 = $tmp377.value;
int64_t $tmp458 = $tmp456 + $tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {$tmp458};
*(&local7) = $tmp459;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:106
frost$core$Maybe* $tmp460 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT(param2);
frost$core$Int64* $tmp461 = &$tmp460->$rawValue;
frost$core$Int64 $tmp462 = *$tmp461;
int64_t $tmp463 = $tmp462.value;
bool $tmp464 = $tmp463 == 0u;
if ($tmp464) goto block31; else goto block32;
block32:;
frost$core$Error** $tmp465 = (frost$core$Error**) ($tmp460->$data + 0);
frost$core$Error* $tmp466 = *$tmp465;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local0) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
frost$core$MutableString* $tmp467 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp468 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp469 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp470 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block31:;
frost$core$Object** $tmp471 = (frost$core$Object**) ($tmp460->$data + 0);
frost$core$Object* $tmp472 = *$tmp471;
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$OutputStream*) $tmp472)));
frost$io$OutputStream* $tmp473 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local9) = ((frost$io$OutputStream*) $tmp472);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:107
frost$io$OutputStream* $tmp474 = *(&local9);
$fn476 $tmp475 = ($fn476) $tmp474->$class->vtable[19];
frost$core$Error* $tmp477 = $tmp475($tmp474, &$s478);
if ($tmp477 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local0) = $tmp477;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
frost$io$OutputStream* $tmp479 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp480 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp481 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp482 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp483 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:108
frost$io$OutputStream* $tmp484 = *(&local9);
$fn486 $tmp485 = ($fn486) $tmp484->$class->vtable[19];
frost$core$Error* $tmp487 = $tmp485($tmp484, &$s488);
if ($tmp487 == NULL) goto block35; else goto block36;
block36:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
*(&local0) = $tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$io$OutputStream* $tmp489 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp490 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp491 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp492 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp493 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block35:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:109
frost$io$OutputStream* $tmp494 = *(&local9);
frost$core$String* $tmp495 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s496, param3);
frost$core$String* $tmp497 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp495, &$s498);
$fn500 $tmp499 = ($fn500) $tmp494->$class->vtable[19];
frost$core$Error* $tmp501 = $tmp499($tmp494, $tmp497);
if ($tmp501 == NULL) goto block37; else goto block38;
block38:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local0) = $tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
frost$io$OutputStream* $tmp502 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp503 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp504 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp505 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp506 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp506));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block37:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:110
frost$io$OutputStream* $tmp507 = *(&local9);
frost$core$String* $tmp508 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s509, param3);
frost$core$String* $tmp510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp508, &$s511);
$fn513 $tmp512 = ($fn513) $tmp507->$class->vtable[19];
frost$core$Error* $tmp514 = $tmp512($tmp507, $tmp510);
if ($tmp514 == NULL) goto block39; else goto block40;
block40:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local0) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$io$OutputStream* $tmp515 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp516 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp517 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp518 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp519 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block39:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:111
frost$io$OutputStream* $tmp520 = *(&local9);
frost$core$String* $tmp521 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s522, param3);
frost$core$String* $tmp523 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp521, &$s524);
$fn526 $tmp525 = ($fn526) $tmp520->$class->vtable[19];
frost$core$Error* $tmp527 = $tmp525($tmp520, $tmp523);
if ($tmp527 == NULL) goto block41; else goto block42;
block42:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
*(&local0) = $tmp527;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
frost$io$OutputStream* $tmp528 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp529 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp530 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp531 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp531));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp532 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp532));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block41:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp527));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp521));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:112
frost$io$OutputStream* $tmp533 = *(&local9);
$fn535 $tmp534 = ($fn535) $tmp533->$class->vtable[19];
frost$core$Error* $tmp536 = $tmp534($tmp533, &$s537);
if ($tmp536 == NULL) goto block43; else goto block44;
block44:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local0) = $tmp536;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
frost$io$OutputStream* $tmp538 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp539 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp540 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp541 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp542 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block43:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:113
frost$io$OutputStream* $tmp543 = *(&local9);
$fn545 $tmp544 = ($fn545) $tmp543->$class->vtable[19];
frost$core$Error* $tmp546 = $tmp544($tmp543, &$s547);
if ($tmp546 == NULL) goto block45; else goto block46;
block46:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local0) = $tmp546;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$io$OutputStream* $tmp548 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp549 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp550 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp551 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block45:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:114
frost$io$OutputStream* $tmp553 = *(&local9);
$fn555 $tmp554 = ($fn555) $tmp553->$class->vtable[19];
frost$core$Error* $tmp556 = $tmp554($tmp553, &$s557);
if ($tmp556 == NULL) goto block47; else goto block48;
block48:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local0) = $tmp556;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$io$OutputStream* $tmp558 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp559 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp560 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp561 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp562 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block47:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:115
frost$io$OutputStream* $tmp563 = *(&local9);
$fn565 $tmp564 = ($fn565) $tmp563->$class->vtable[19];
frost$core$Error* $tmp566 = $tmp564($tmp563, &$s567);
if ($tmp566 == NULL) goto block49; else goto block50;
block50:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
*(&local0) = $tmp566;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$io$OutputStream* $tmp568 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp569 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp570 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp571 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp572 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block49:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:116
frost$io$OutputStream* $tmp573 = *(&local9);
$fn575 $tmp574 = ($fn575) $tmp573->$class->vtable[19];
frost$core$Error* $tmp576 = $tmp574($tmp573, &$s577);
if ($tmp576 == NULL) goto block51; else goto block52;
block52:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local0) = $tmp576;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$io$OutputStream* $tmp578 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp579 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp580 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp581 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp582 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block51:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:117
frost$io$OutputStream* $tmp583 = *(&local9);
$fn585 $tmp584 = ($fn585) $tmp583->$class->vtable[19];
frost$core$Error* $tmp586 = $tmp584($tmp583, &$s587);
if ($tmp586 == NULL) goto block53; else goto block54;
block54:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
*(&local0) = $tmp586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$io$OutputStream* $tmp588 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp589 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp590 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp591 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp592 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block53:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:118
frost$io$OutputStream* $tmp593 = *(&local9);
frost$core$MutableString* $tmp594 = *(&local6);
frost$core$String* $tmp595 = frost$core$MutableString$finish$R$frost$core$String($tmp594);
$fn597 $tmp596 = ($fn597) $tmp593->$class->vtable[17];
frost$core$Error* $tmp598 = $tmp596($tmp593, $tmp595);
if ($tmp598 == NULL) goto block55; else goto block56;
block56:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local0) = $tmp598;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$io$OutputStream* $tmp599 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp600 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp601 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp601));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp602 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp603 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block55:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:119
frost$io$OutputStream* $tmp604 = *(&local9);
$fn606 $tmp605 = ($fn606) $tmp604->$class->vtable[19];
frost$core$Error* $tmp607 = $tmp605($tmp604, &$s608);
if ($tmp607 == NULL) goto block57; else goto block58;
block58:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local0) = $tmp607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$io$OutputStream* $tmp609 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp610 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp611 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp612 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp613 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block57:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:120
frost$io$OutputStream* $tmp614 = *(&local9);
$fn616 $tmp615 = ($fn616) $tmp614->$class->vtable[19];
frost$core$Error* $tmp617 = $tmp615($tmp614, &$s618);
if ($tmp617 == NULL) goto block59; else goto block60;
block60:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local0) = $tmp617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
frost$io$OutputStream* $tmp619 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp620 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp621 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp622 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp623 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp623));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block59:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:121
frost$io$OutputStream* $tmp624 = *(&local9);
$fn626 $tmp625 = ($fn626) $tmp624->$class->vtable[19];
frost$core$Error* $tmp627 = $tmp625($tmp624, &$s628);
if ($tmp627 == NULL) goto block61; else goto block62;
block62:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
*(&local0) = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$io$OutputStream* $tmp629 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp630 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp631 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp632 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp633 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block61:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:122
frost$io$OutputStream* $tmp634 = *(&local9);
$fn636 $tmp635 = ($fn636) $tmp634->$class->vtable[19];
frost$core$Error* $tmp637 = $tmp635($tmp634, &$s638);
if ($tmp637 == NULL) goto block63; else goto block64;
block64:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
*(&local0) = $tmp637;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
frost$io$OutputStream* $tmp639 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp639));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp640 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp641 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp642 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp642));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp643 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block63:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:123
frost$io$OutputStream* $tmp644 = *(&local9);
$fn646 $tmp645 = ($fn646) $tmp644->$class->vtable[19];
frost$core$Error* $tmp647 = $tmp645($tmp644, &$s648);
if ($tmp647 == NULL) goto block65; else goto block66;
block66:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local0) = $tmp647;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$io$OutputStream* $tmp649 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp650 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp651 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp652 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp653 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block1;
block65:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
frost$io$OutputStream* $tmp654 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$MutableString* $tmp655 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
*(&local6) = ((frost$core$MutableString*) NULL);
frost$collections$Array* $tmp656 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$parser$Parser* $tmp657 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local2) = ((org$frostlang$frostc$parser$Parser*) NULL);
frost$threads$MessageQueue* $tmp658 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
*(&local1) = ((frost$threads$MessageQueue*) NULL);
goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:126
frost$core$Error* $tmp659 = *(&local0);
// begin inline call to method frost.io.Console.printLine(o:frost.core.Object) from HTMLProcessor.frost:126:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:34
$fn661 $tmp660 = ($fn661) ((frost$core$Object*) $tmp659)->$class->vtable[0];
frost$core$String* $tmp662 = $tmp660(((frost$core$Object*) $tmp659));
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Console.stub:34:48
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:25
frost$io$Console$print$frost$core$String($tmp662);
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/Console.stub:26
frost$io$Console$printLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:127
frost$core$Int64 $tmp663 = (frost$core$Int64) {1u};
frost$core$System$exit$frost$core$Int64($tmp663);
goto block2;
block2:;
frost$core$Error* $tmp664 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$HTMLProcessor$cleanup(org$frostlang$frostc$HTMLProcessor* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/HTMLProcessor.frost:6
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp665 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp666 = *$tmp665;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
return;

}

