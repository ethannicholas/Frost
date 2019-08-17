#include "org/frostlang/frostc/Main.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/Config.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/core/System/Process.h"
#include "frost/core/Error.h"
#include "frost/core/Int.h"
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/core/Maybe.h"
#include "frost/io/Console.h"
#include "frost/io/InputStream.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/Main/Arguments.h"
#include "org/frostlang/frostc/Main/Format.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/threads/ScopedLock.h"
#include "org/frostlang/frostc/Compiler/Message.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "frost/threads/Lock.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Bench.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn44)(frost$core$Object*);
typedef frost$core$String* (*$fn53)(frost$io$InputStream*);
typedef frost$core$String* (*$fn58)(frost$io$InputStream*);
typedef frost$core$String* (*$fn70)(frost$core$Object*);
typedef frost$collections$Iterator* (*$fn111)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn115)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn120)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn143)(frost$core$Object*);
typedef frost$core$String* (*$fn236)(frost$core$Object*);
typedef frost$core$String* (*$fn245)(frost$io$InputStream*);
typedef frost$core$String* (*$fn250)(frost$io$InputStream*);
typedef frost$core$String* (*$fn262)(frost$core$Object*);
typedef frost$core$Error* (*$fn278)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn282)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn285)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn289)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn292)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn296)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn315)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn323)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn346)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn362)(frost$core$Object*);
typedef frost$core$String* (*$fn378)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn401)(frost$core$Object*);
typedef frost$core$String* (*$fn411)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn447)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn489)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn558)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn566)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn601)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn623)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn647)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn715)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn778)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn857)(frost$core$Object*);
typedef frost$core$String* (*$fn899)(frost$core$Object*);
typedef frost$core$Bit (*$fn934)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn954)(frost$collections$CollectionView*);
typedef void (*$fn972)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn992)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn996)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1001)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1009)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1013)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1018)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1029)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1033)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1038)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1048)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1052)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1057)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1068)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1072)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1077)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1088)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1102)(frost$collections$CollectionView*);
typedef void (*$fn1117)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn1166)(frost$core$Object*);
typedef frost$core$String* (*$fn1174)(frost$core$Object*);
typedef frost$core$String* (*$fn1214)(frost$core$Object*);
typedef frost$core$String* (*$fn1222)(frost$core$Object*);
typedef frost$core$Int (*$fn1384)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1395)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn1406)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn1410)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1421)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn1428)(org$frostlang$frostc$Bench*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -3316641479594746667, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x63", 2, 563052241097350273, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, -4044657180966489978, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x6d", 3, -2354502893290026621, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, -4341477490894522756, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3b", 1, -5808598654595781638, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4c", 2, 563009360143850044, NULL };
static frost$core$String $s151 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x69\x62", 3, 1317978099017241196, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6c", 2, 563044544515952796, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 6043963258232676957, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, -3218342706179030910, NULL };
static frost$core$String $s216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x67", 2, 563056639143863117, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -5336904199903828035, NULL };
static frost$core$String $s287 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 2414752363581770017, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, -3725874908572553427, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, -8537804258594104524, NULL };
static frost$core$String $s301 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, -1426593306435499698, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, 2993450520568953317, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x6f", 2, 563047843050837429, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -2854313959629863208, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -293442963066226919, NULL };
static frost$core$String $s384 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x4f", 2, 563012658678734677, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s509 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x69", 2, 563041245981068163, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s631 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s672 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s699 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s701 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s732 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s781 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s782 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s784 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s785 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s813 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s830 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s844 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s940 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s962 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s963 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s986 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s987 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1170 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1178 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s1182 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1183 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1210 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1218 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s1230 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1231 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1246 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s1247 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1258 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s1259 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1294 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1308 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1323 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1340 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1368 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s1369 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1373 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s1374 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1398 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s1424 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:22
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
frost$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:25
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp4 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp5 = org$frostlang$frostc$Config$frostSourceDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp4, $tmp5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$io$File** $tmp6 = &param0->frostHome;
frost$io$File* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$io$File** $tmp8 = &param0->frostHome;
*$tmp8 = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
return;

}
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$core$System$Process* local1 = NULL;
frost$core$Error* local2 = NULL;
frost$core$Int local3;
frost$core$Error* local4 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:61
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:62
frost$collections$Array* $tmp11 = *(&local0);
frost$core$String** $tmp12 = &param1->path;
frost$core$String* $tmp13 = *$tmp12;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) $tmp13));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:63
frost$collections$Array* $tmp14 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp14, ((frost$core$Object*) &$s15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:64
frost$collections$Array* $tmp16 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) &$s17));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:65
frost$collections$Array* $tmp18 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) &$s19));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:66
frost$core$Bit* $tmp20 = &param0->debug;
frost$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:67
frost$collections$Array* $tmp23 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp23, ((frost$core$Object*) &$s24));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:69
frost$collections$Array* $tmp25 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp25, ((frost$core$Object*) &$s26));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:70
frost$collections$Array* $tmp27 = *(&local0);
frost$core$String** $tmp28 = &param2->path;
frost$core$String* $tmp29 = *$tmp28;
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) $tmp29));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:71
*(&local1) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:72
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:73
frost$io$File** $tmp30 = &param0->clang;
frost$io$File* $tmp31 = *$tmp30;
frost$core$String** $tmp32 = &$tmp31->path;
frost$core$String* $tmp33 = *$tmp32;
frost$collections$Array* $tmp34 = *(&local0);
frost$core$Maybe* $tmp35 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp33, ((frost$collections$ListView*) $tmp34));
frost$core$Int* $tmp36 = &$tmp35->$rawValue;
frost$core$Int $tmp37 = *$tmp36;
int64_t $tmp38 = $tmp37.value;
bool $tmp39 = $tmp38 == 0u;
if ($tmp39) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp40 = (frost$core$Error**) ($tmp35->$data + 0);
frost$core$Error* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local2) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:78
frost$core$Error* $tmp42 = *(&local2);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:78:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn44 $tmp43 = ($fn44) ((frost$core$Object*) $tmp42)->$class->vtable[0];
frost$core$String* $tmp45 = $tmp43(((frost$core$Object*) $tmp42));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp45);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:79
frost$core$Int $tmp46 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp46);
goto block4;
block5:;
frost$core$Object** $tmp47 = (frost$core$Object**) ($tmp35->$data + 0);
frost$core$Object* $tmp48 = *$tmp47;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp48)));
frost$core$System$Process* $tmp49 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local1) = ((frost$core$System$Process*) $tmp48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:74
frost$core$System$Process* $tmp50 = *(&local1);
frost$io$InputStream* $tmp51 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp50);
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[14];
frost$core$String* $tmp54 = $tmp52($tmp51);
frost$io$Console$printError$frost$core$String($tmp54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:75
frost$core$System$Process* $tmp55 = *(&local1);
frost$io$InputStream* $tmp56 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp55);
$fn58 $tmp57 = ($fn58) $tmp56->$class->vtable[14];
frost$core$String* $tmp59 = $tmp57($tmp56);
frost$io$Console$printError$frost$core$String($tmp59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
goto block4;
block4:;
frost$core$Error* $tmp60 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
*(&local2) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:81
frost$core$System$Process* $tmp61 = *(&local1);
frost$core$Int $tmp62;
frost$core$System$Process$waitFor$R$frost$core$Int(&$tmp62, $tmp61);
*(&local3) = $tmp62;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:82
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:82:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp63 = param3.value;
bool $tmp64 = !$tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:83
*(&local4) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:84
frost$core$Error* $tmp67 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp67 == NULL) goto block14; else goto block15;
block15:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
*(&local4) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:87
frost$core$Error* $tmp68 = *(&local4);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:87:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn70 $tmp69 = ($fn70) ((frost$core$Object*) $tmp68)->$class->vtable[0];
frost$core$String* $tmp71 = $tmp69(((frost$core$Object*) $tmp68));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp71);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:88
frost$core$Int $tmp72 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp72);
goto block13;
block14:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
goto block13;
block13:;
frost$core$Error* $tmp73 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local4) = ((frost$core$Error*) NULL);
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:91
frost$core$Int $tmp74 = *(&local3);
frost$core$Int $tmp75 = (frost$core$Int) {0u};
int64_t $tmp76 = $tmp74.value;
int64_t $tmp77 = $tmp75.value;
bool $tmp78 = $tmp76 != $tmp77;
frost$core$Bit $tmp79 = (frost$core$Bit) {$tmp78};
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:92
frost$core$Int $tmp81 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp81);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:94
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp82 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp83 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
frost$io$File* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$String* local6 = NULL;
frost$core$String* local7 = NULL;
frost$core$String$Index$nullable local8;
frost$core$String* local9 = NULL;
frost$core$String$Index$nullable local10;
frost$core$String* local11 = NULL;
frost$core$System$Process* local12 = NULL;
frost$core$Error* local13 = NULL;
frost$core$Int local14;
frost$core$Error* local15 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:98
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp84 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp84);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$collections$Array* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local0) = $tmp84;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:99
frost$collections$Array* $tmp86 = *(&local0);
frost$core$String** $tmp87 = &param1->path;
frost$core$String* $tmp88 = *$tmp87;
frost$collections$Array$add$frost$collections$Array$T($tmp86, ((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:100
frost$collections$Array* $tmp89 = *(&local0);
frost$core$String* $tmp90 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp91 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s92, $tmp90);
frost$core$String* $tmp93 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp91, &$s94);
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:101
frost$collections$Array* $tmp95 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp95, ((frost$core$Object*) &$s96));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:102
frost$collections$Array* $tmp97 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp97, ((frost$core$Object*) &$s98));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:103
frost$collections$Array* $tmp99 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp99, ((frost$core$Object*) &$s100));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:104
frost$core$String* $tmp101 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
// begin inline call to function frost.core.String.split(delimiter:frost.core.String):frost.collections.Array<frost.core.String> from Main.frost:104:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1378
frost$core$Int64 $tmp102 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp103 = $tmp102.value;
frost$core$Int $tmp104 = (frost$core$Int) {((int64_t) $tmp103)};
frost$collections$Array* $tmp105 = frost$core$String$split$frost$core$String$frost$core$Int$R$frost$collections$Array$LTfrost$core$String$GT($tmp101, &$s106, $tmp104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$collections$Array* $tmp107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local1) = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:105
frost$collections$Array* $tmp108 = *(&local1);
ITable* $tmp109 = ((frost$collections$Iterable*) $tmp108)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$collections$Iterator* $tmp112 = $tmp110(((frost$collections$Iterable*) $tmp108));
goto block3;
block3:;
ITable* $tmp113 = $tmp112->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114($tmp112);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block5; else goto block4;
block4:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp118 = $tmp112->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
frost$core$Object* $tmp121 = $tmp119($tmp112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp121)));
frost$core$String* $tmp122 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local2) = ((frost$core$String*) $tmp121);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:106
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp123 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp124 = *(&local2);
frost$io$File$init$frost$core$String($tmp123, $tmp124);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$io$File* $tmp125 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local3) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:107
frost$collections$Array* $tmp126 = *(&local0);
frost$io$File* $tmp127 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:107:36
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp128 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp127, &$s129);
frost$core$String** $tmp130 = &$tmp128->path;
frost$core$String* $tmp131 = *$tmp130;
frost$core$String* $tmp132 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp131);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$String* $tmp133 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local5) = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp134 = *(&local5);
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134 == NULL};
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp137 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block6;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp138 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp139 = *(&local5);
frost$io$File$init$frost$core$String($tmp138, $tmp139);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$String* $tmp140 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local5) = ((frost$core$String*) NULL);
*(&local4) = $tmp138;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
goto block6;
block6:;
frost$io$File* $tmp141 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:107:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn143 $tmp142 = ($fn143) ((frost$core$Object*) $tmp141)->$class->vtable[0];
frost$core$String* $tmp144 = $tmp142(((frost$core$Object*) $tmp141));
frost$core$String* $tmp145 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s146, $tmp144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$collections$Array$add$frost$collections$Array$T($tmp126, ((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:108
frost$io$File* $tmp147 = *(&local3);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from Main.frost:108:38
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
// begin inline call to function frost.io.File.get_name():frost.core.String from File.frost:158:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:148
frost$core$String** $tmp148 = &$tmp147->path;
frost$core$String* $tmp149 = *$tmp148;
frost$core$String$Index$nullable $tmp150 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp149, &$s151);
*(&local8) = $tmp150;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:149
frost$core$String$Index$nullable $tmp152 = *(&local8);
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152.nonnull};
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block12; else goto block14;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:150
frost$core$String** $tmp155 = &$tmp147->path;
frost$core$String* $tmp156 = *$tmp155;
frost$core$String** $tmp157 = &$tmp147->path;
frost$core$String* $tmp158 = *$tmp157;
frost$core$String$Index$nullable $tmp159 = *(&local8);
frost$core$String$Index $tmp160 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp158, ((frost$core$String$Index) $tmp159.value));
frost$core$Bit $tmp161 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp162 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp160, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp161);
frost$core$String* $tmp163 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp156, $tmp162);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local7) = $tmp163;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
goto block11;
block14:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:153
frost$core$String** $tmp164 = &$tmp147->path;
frost$core$String* $tmp165 = *$tmp164;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local7) = $tmp165;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
goto block11;
block13:;
goto block11;
block11:;
frost$core$String* $tmp166 = *(&local7);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
frost$core$String* $tmp167 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local9) = $tmp166;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp168 = *(&local9);
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.frost:159:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1012
frost$core$String$Index $tmp169 = frost$core$String$get_end$R$frost$core$String$Index($tmp168);
frost$core$String$Index$nullable $tmp170 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp168, &$s171, $tmp169);
*(&local10) = $tmp170;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp172 = *(&local10);
frost$core$Bit $tmp173 = (frost$core$Bit) {!$tmp172.nonnull};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp175 = *(&local9);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$String* $tmp176 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp177 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp175;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
goto block10;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp178 = *(&local9);
frost$core$String$Index$nullable $tmp179 = *(&local10);
frost$core$Bit $tmp180 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp181 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp179, $tmp180);
frost$core$String* $tmp182 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp178, $tmp181);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
frost$core$String* $tmp183 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
*(&local9) = ((frost$core$String*) NULL);
frost$core$String* $tmp184 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
*(&local7) = ((frost$core$String*) NULL);
*(&local6) = $tmp182;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
goto block10;
block10:;
frost$core$String* $tmp185 = *(&local6);
*(&local11) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
frost$core$String* $tmp186 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
*(&local11) = $tmp185;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:109
frost$core$String* $tmp187 = *(&local11);
frost$core$Bit $tmp188 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp187, &$s189);
bool $tmp190 = $tmp188.value;
if ($tmp190) goto block18; else goto block19;
block19:;
frost$core$Int $tmp191 = (frost$core$Int) {109u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s192, $tmp191);
abort(); // unreachable
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:110
frost$core$String* $tmp193 = *(&local11);
frost$core$Int $tmp194 = (frost$core$Int) {3u};
frost$core$Bit $tmp195 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp196 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp194, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp195);
frost$core$String* $tmp197 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String($tmp193, $tmp196);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$String* $tmp198 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local11) = $tmp197;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:111
frost$collections$Array* $tmp199 = *(&local0);
frost$core$String* $tmp200 = *(&local11);
frost$core$String* $tmp201 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s202, $tmp200);
frost$collections$Array$add$frost$collections$Array$T($tmp199, ((frost$core$Object*) $tmp201));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$String* $tmp203 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
*(&local11) = ((frost$core$String*) NULL);
frost$core$String* $tmp204 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local6) = ((frost$core$String*) NULL);
frost$io$File* $tmp205 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
*(&local4) = ((frost$io$File*) NULL);
frost$io$File* $tmp206 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
frost$core$String* $tmp207 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local2) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:113
frost$collections$Array* $tmp208 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp208, ((frost$core$Object*) &$s209));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:114
frost$collections$Array* $tmp210 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp210, ((frost$core$Object*) &$s211));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:115
frost$core$Bit* $tmp212 = &param0->debug;
frost$core$Bit $tmp213 = *$tmp212;
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:116
frost$collections$Array* $tmp215 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp215, ((frost$core$Object*) &$s216));
goto block21;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:118
frost$collections$Array* $tmp217 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp217, ((frost$core$Object*) &$s218));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:119
frost$collections$Array* $tmp219 = *(&local0);
frost$core$String** $tmp220 = &param2->path;
frost$core$String* $tmp221 = *$tmp220;
frost$collections$Array$add$frost$collections$Array$T($tmp219, ((frost$core$Object*) $tmp221));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:120
*(&local12) = ((frost$core$System$Process*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:121
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:122
frost$io$File** $tmp222 = &param0->clang;
frost$io$File* $tmp223 = *$tmp222;
frost$core$String** $tmp224 = &$tmp223->path;
frost$core$String* $tmp225 = *$tmp224;
frost$collections$Array* $tmp226 = *(&local0);
frost$core$Maybe* $tmp227 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp225, ((frost$collections$ListView*) $tmp226));
frost$core$Int* $tmp228 = &$tmp227->$rawValue;
frost$core$Int $tmp229 = *$tmp228;
int64_t $tmp230 = $tmp229.value;
bool $tmp231 = $tmp230 == 0u;
if ($tmp231) goto block24; else goto block25;
block25:;
frost$core$Error** $tmp232 = (frost$core$Error**) ($tmp227->$data + 0);
frost$core$Error* $tmp233 = *$tmp232;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
*(&local13) = $tmp233;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:127
frost$core$Error* $tmp234 = *(&local13);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:127:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn236 $tmp235 = ($fn236) ((frost$core$Object*) $tmp234)->$class->vtable[0];
frost$core$String* $tmp237 = $tmp235(((frost$core$Object*) $tmp234));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp237);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:128
frost$core$Int $tmp238 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp238);
goto block23;
block24:;
frost$core$Object** $tmp239 = (frost$core$Object**) ($tmp227->$data + 0);
frost$core$Object* $tmp240 = *$tmp239;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp240)));
frost$core$System$Process* $tmp241 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local12) = ((frost$core$System$Process*) $tmp240);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:123
frost$core$System$Process* $tmp242 = *(&local12);
frost$io$InputStream* $tmp243 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp242);
$fn245 $tmp244 = ($fn245) $tmp243->$class->vtable[14];
frost$core$String* $tmp246 = $tmp244($tmp243);
frost$io$Console$printError$frost$core$String($tmp246);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:124
frost$core$System$Process* $tmp247 = *(&local12);
frost$io$InputStream* $tmp248 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp247);
$fn250 $tmp249 = ($fn250) $tmp248->$class->vtable[14];
frost$core$String* $tmp251 = $tmp249($tmp248);
frost$io$Console$printError$frost$core$String($tmp251);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
goto block23;
block23:;
frost$core$Error* $tmp252 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local13) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:130
frost$core$System$Process* $tmp253 = *(&local12);
frost$core$Int $tmp254;
frost$core$System$Process$waitFor$R$frost$core$Int(&$tmp254, $tmp253);
*(&local14) = $tmp254;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:131
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:131:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp255 = param3.value;
bool $tmp256 = !$tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block28; else goto block29;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:132
*(&local15) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:133
frost$core$Error* $tmp259 = frost$io$File$delete$R$frost$core$Error$Q(param1);
if ($tmp259 == NULL) goto block33; else goto block34;
block34:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local15) = $tmp259;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:136
frost$core$Error* $tmp260 = *(&local15);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:136:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn262 $tmp261 = ($fn262) ((frost$core$Object*) $tmp260)->$class->vtable[0];
frost$core$String* $tmp263 = $tmp261(((frost$core$Object*) $tmp260));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp263);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:137
frost$core$Int $tmp264 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp264);
goto block32;
block33:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
goto block32;
block32:;
frost$core$Error* $tmp265 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
*(&local15) = ((frost$core$Error*) NULL);
goto block29;
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:140
frost$core$Int $tmp266 = *(&local14);
frost$core$Int $tmp267 = (frost$core$Int) {0u};
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267.value;
bool $tmp270 = $tmp268 != $tmp269;
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:141
frost$core$Int $tmp273 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp273);
goto block38;
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp274 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local12) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp275 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp276 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:147
*(&local0) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:148
$fn278 $tmp277 = ($fn278) param1->$class->vtable[19];
frost$core$Error* $tmp279 = $tmp277(param1, &$s280);
if ($tmp279 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local0) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:149
$fn282 $tmp281 = ($fn282) param1->$class->vtable[21];
frost$core$Error* $tmp283 = $tmp281(param1);
if ($tmp283 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
*(&local0) = $tmp283;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp283));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:150
$fn285 $tmp284 = ($fn285) param1->$class->vtable[19];
frost$core$Error* $tmp286 = $tmp284(param1, &$s287);
if ($tmp286 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
*(&local0) = $tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp286));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:151
$fn289 $tmp288 = ($fn289) param1->$class->vtable[21];
frost$core$Error* $tmp290 = $tmp288(param1);
if ($tmp290 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local0) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:152
$fn292 $tmp291 = ($fn292) param1->$class->vtable[19];
frost$core$Error* $tmp293 = $tmp291(param1, &$s294);
if ($tmp293 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
*(&local0) = $tmp293;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:153
$fn296 $tmp295 = ($fn296) param1->$class->vtable[19];
frost$core$Error* $tmp297 = $tmp295(param1, &$s298);
if ($tmp297 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
*(&local0) = $tmp297;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
frost$core$Error* $tmp299 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = ((frost$core$Error*) NULL);
return;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:156
frost$core$Int $tmp300 = (frost$core$Int) {156u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s301, $tmp300);
abort(); // unreachable

}
void org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Main$Arguments* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$Int local4;
frost$core$Int local5;
org$frostlang$frostc$Main$Format$nullable local6;
frost$core$String* local7 = NULL;
frost$core$Bit local8;
frost$core$String* local9 = NULL;
frost$core$Error* local10 = NULL;
frost$io$File* local11 = NULL;
frost$core$Error* local12 = NULL;
frost$io$File* local13 = NULL;
frost$core$String* local14 = NULL;
frost$core$String* local15 = NULL;
frost$core$Int$nullable local16;
frost$core$Int64$nullable local17;
frost$core$String* local18 = NULL;
frost$core$Int$nullable local19;
frost$core$Int64$nullable local20;
frost$core$String* local21 = NULL;
org$frostlang$frostc$Main$Format local22;
org$frostlang$frostc$Main$Format local23;
org$frostlang$frostc$Main$Format local24;
org$frostlang$frostc$Main$Format local25;
org$frostlang$frostc$Main$Format local26;
org$frostlang$frostc$Main$Format local27;
org$frostlang$frostc$Main$Format local28;
org$frostlang$frostc$Main$Format local29;
org$frostlang$frostc$Main$Format local30;
org$frostlang$frostc$Main$Format local31;
org$frostlang$frostc$Main$Format local32;
org$frostlang$frostc$Main$Format local33;
org$frostlang$frostc$Main$Format local34;
org$frostlang$frostc$Main$Format local35;
frost$io$File* local36 = NULL;
org$frostlang$frostc$Main$Format local37;
org$frostlang$frostc$Main$Format local38;
frost$io$File* local39 = NULL;
org$frostlang$frostc$Main$Format local40;
org$frostlang$frostc$Main$Format local41;
frost$core$String* local42 = NULL;
frost$io$File* local43 = NULL;
frost$core$String* local44 = NULL;
frost$core$String* local45 = NULL;
frost$core$String* local46 = NULL;
frost$core$String$Index$nullable local47;
org$frostlang$frostc$Main$Format local48;
org$frostlang$frostc$Main$Format local49;
frost$core$Int local50;
frost$core$Int local51;
org$frostlang$frostc$CodeGenerator* local52 = NULL;
frost$core$Error* local53 = NULL;
frost$io$File* local54 = NULL;
frost$core$String* local55 = NULL;
frost$core$String* local56 = NULL;
frost$core$String* local57 = NULL;
frost$core$String$Index$nullable local58;
frost$core$Error* local59 = NULL;
org$frostlang$frostc$Compiler$Settings* local60 = NULL;
frost$threads$MessageQueue* local61 = NULL;
org$frostlang$frostc$Compiler* local62 = NULL;
org$frostlang$frostc$Main$Format local63;
org$frostlang$frostc$Main$Format local64;
frost$io$File* local65 = NULL;
org$frostlang$frostc$ClassDecl* local66 = NULL;
org$frostlang$frostc$ClassDecl* local67 = NULL;
org$frostlang$frostc$ClassDecl* local68 = NULL;
frost$io$File* local69 = NULL;
org$frostlang$frostc$ClassDecl* local70 = NULL;
frost$threads$ScopedLock* local71 = NULL;
org$frostlang$frostc$Compiler$Message* local72 = NULL;
frost$core$String* local73 = NULL;
frost$core$Int local74;
frost$core$Int local75;
frost$core$String* local76 = NULL;
frost$core$String* local77 = NULL;
frost$core$Int local78;
frost$core$Int local79;
frost$core$String* local80 = NULL;
frost$io$File* local81 = NULL;
frost$core$String* local82 = NULL;
frost$core$String* local83 = NULL;
frost$core$String* local84 = NULL;
frost$core$String$Index$nullable local85;
frost$io$File* local86 = NULL;
frost$core$String* local87 = NULL;
frost$core$String* local88 = NULL;
frost$core$String* local89 = NULL;
frost$core$String$Index$nullable local90;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:161
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Main$Arguments));
org$frostlang$frostc$Main$Arguments* $tmp302 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp302, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
org$frostlang$frostc$Main$Arguments* $tmp303 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp303));
*(&local0) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:162
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp304 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp304);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$collections$Array* $tmp305 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
*(&local1) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:163
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp306 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp306);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
frost$collections$Array* $tmp307 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local2) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp308 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local3) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:165
frost$core$Int $tmp309 = (frost$core$Int) {3u};
*(&local4) = $tmp309;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:166
frost$core$Int $tmp310 = (frost$core$Int) {3u};
*(&local5) = $tmp310;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp311 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local7) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:169
frost$core$Bit $tmp312 = (frost$core$Bit) {true};
*(&local8) = $tmp312;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp313 = *(&local0);
$fn315 $tmp314 = ($fn315) $tmp313->$class->vtable[2];
frost$core$Bit $tmp316 = $tmp314($tmp313);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:170:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp317 = $tmp316.value;
bool $tmp318 = !$tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:171
org$frostlang$frostc$Main$Arguments* $tmp321 = *(&local0);
$fn323 $tmp322 = ($fn323) $tmp321->$class->vtable[3];
frost$core$String* $tmp324 = $tmp322($tmp321);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
frost$core$String* $tmp325 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local9) = $tmp324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:172
frost$core$String* $tmp326 = *(&local9);
frost$core$Bit $tmp327 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s328);
bool $tmp329 = $tmp327.value;
if ($tmp329) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:174
*(&local10) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:175
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp330 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp330, &$s331);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
frost$io$File* $tmp332 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
*(&local11) = $tmp330;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp330));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:176
frost$io$InputStream* $tmp333 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp334 = *(&local11);
frost$core$Maybe* $tmp335 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp334);
frost$core$Int* $tmp336 = &$tmp335->$rawValue;
frost$core$Int $tmp337 = *$tmp336;
int64_t $tmp338 = $tmp337.value;
bool $tmp339 = $tmp338 == 0u;
if ($tmp339) goto block10; else goto block11;
block11:;
frost$core$Error** $tmp340 = (frost$core$Error**) ($tmp335->$data + 0);
frost$core$Error* $tmp341 = *$tmp340;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
*(&local10) = $tmp341;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$io$File* $tmp342 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block10:;
frost$core$Object** $tmp343 = (frost$core$Object**) ($tmp335->$data + 0);
frost$core$Object* $tmp344 = *$tmp343;
$fn346 $tmp345 = ($fn346) $tmp333->$class->vtable[17];
frost$core$Maybe* $tmp347 = $tmp345($tmp333, ((frost$io$OutputStream*) $tmp344));
frost$core$Int* $tmp348 = &$tmp347->$rawValue;
frost$core$Int $tmp349 = *$tmp348;
int64_t $tmp350 = $tmp349.value;
bool $tmp351 = $tmp350 == 0u;
if ($tmp351) goto block12; else goto block13;
block13:;
frost$core$Error** $tmp352 = (frost$core$Error**) ($tmp347->$data + 0);
frost$core$Error* $tmp353 = *$tmp352;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp353));
*(&local10) = $tmp353;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$io$File* $tmp354 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block12:;
frost$core$Object** $tmp355 = (frost$core$Object**) ($tmp347->$data + 0);
frost$core$Object* $tmp356 = *$tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:177
frost$collections$Array* $tmp357 = *(&local1);
frost$io$File* $tmp358 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp357, ((frost$core$Object*) $tmp358));
frost$io$File* $tmp359 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
*(&local11) = ((frost$io$File*) NULL);
goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:180
frost$core$Error* $tmp360 = *(&local10);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:180:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn362 $tmp361 = ($fn362) ((frost$core$Object*) $tmp360)->$class->vtable[0];
frost$core$String* $tmp363 = $tmp361(((frost$core$Object*) $tmp360));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp363);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:181
frost$core$Int $tmp364 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp364);
goto block9;
block9:;
frost$core$Error* $tmp365 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
*(&local10) = ((frost$core$Error*) NULL);
goto block5;
block7:;
frost$core$Bit $tmp366 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s367);
bool $tmp368 = $tmp366.value;
if ($tmp368) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:185
frost$io$File* $tmp369 = *(&local3);
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369 != NULL};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:186
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:186:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s372);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s373);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:187
frost$core$Int $tmp374 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp374);
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:189
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp375 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp376 = *(&local0);
$fn378 $tmp377 = ($fn378) $tmp376->$class->vtable[4];
frost$core$String* $tmp379 = $tmp377($tmp376, &$s380);
frost$io$File$init$frost$core$String($tmp375, $tmp379);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
frost$io$File* $tmp381 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
*(&local3) = $tmp375;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp375));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:190
*(&local12) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:191
frost$io$File* $tmp382 = *(&local3);
// begin inline call to function frost.io.File.get_parent():frost.io.File? from Main.frost:191:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp383 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp382, &$s384);
frost$core$String** $tmp385 = &$tmp383->path;
frost$core$String* $tmp386 = *$tmp385;
frost$core$String* $tmp387 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp386);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$String* $tmp388 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local14) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp383));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp389 = *(&local14);
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389 == NULL};
bool $tmp391 = $tmp390.value;
if ($tmp391) goto block25; else goto block26;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp392 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block24;
block26:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp393 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp394 = *(&local14);
frost$io$File$init$frost$core$String($tmp393, $tmp394);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
frost$core$String* $tmp395 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local14) = ((frost$core$String*) NULL);
*(&local13) = $tmp393;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
goto block24;
block24:;
frost$io$File* $tmp396 = *(&local13);
frost$core$Error* $tmp397 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp396);
if ($tmp397 == NULL) goto block27; else goto block28;
block28:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local12) = $tmp397;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$io$File* $tmp398 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
*(&local13) = ((frost$io$File*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:194
frost$core$Error* $tmp399 = *(&local12);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:194:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn401 $tmp400 = ($fn401) ((frost$core$Object*) $tmp399)->$class->vtable[0];
frost$core$String* $tmp402 = $tmp400(((frost$core$Object*) $tmp399));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp402);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:195
frost$core$Int $tmp403 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp403);
goto block23;
block27:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
frost$io$File* $tmp404 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local13) = ((frost$io$File*) NULL);
goto block23;
block23:;
frost$core$Error* $tmp405 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp405));
*(&local12) = ((frost$core$Error*) NULL);
goto block5;
block17:;
frost$core$Bit $tmp406 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s407);
bool $tmp408 = $tmp406.value;
if ($tmp408) goto block31; else goto block32;
block31:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:199
org$frostlang$frostc$Main$Arguments* $tmp409 = *(&local0);
$fn411 $tmp410 = ($fn411) $tmp409->$class->vtable[4];
frost$core$String* $tmp412 = $tmp410($tmp409, &$s413);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
frost$core$String* $tmp414 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
*(&local15) = $tmp412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:200
frost$core$String* $tmp415 = *(&local15);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:200:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp416 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp415);
*(&local17) = $tmp416;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp417 = *(&local17);
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417.nonnull};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block34; else goto block35;
block34:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp420 = *(&local17);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp421 = ((frost$core$Int64) $tmp420.value).value;
frost$core$Int $tmp422 = (frost$core$Int) {((int64_t) $tmp421)};
*(&local16) = ((frost$core$Int$nullable) { $tmp422, true });
goto block33;
block35:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local16) = ((frost$core$Int$nullable) { .nonnull = false });
goto block33;
block33:;
frost$core$Int$nullable $tmp423 = *(&local16);
*(&local4) = ((frost$core$Int) $tmp423.value);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
frost$core$Int $tmp424 = *(&local4);
frost$core$Int $tmp425 = (frost$core$Int) {3u};
int64_t $tmp426 = $tmp424.value;
int64_t $tmp427 = $tmp425.value;
bool $tmp428 = $tmp426 > $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block37; else goto block39;
block39:;
frost$core$Int $tmp431 = *(&local4);
frost$core$Int $tmp432 = (frost$core$Int) {0u};
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432.value;
bool $tmp435 = $tmp433 < $tmp434;
frost$core$Bit $tmp436 = (frost$core$Bit) {$tmp435};
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:202
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:202:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s438);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s439);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:203
frost$core$Int $tmp440 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp440);
goto block38;
block38:;
frost$core$String* $tmp441 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local15) = ((frost$core$String*) NULL);
goto block5;
block32:;
frost$core$Bit $tmp442 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s443);
bool $tmp444 = $tmp442.value;
if ($tmp444) goto block42; else goto block43;
block42:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:207
org$frostlang$frostc$Main$Arguments* $tmp445 = *(&local0);
$fn447 $tmp446 = ($fn447) $tmp445->$class->vtable[4];
frost$core$String* $tmp448 = $tmp446($tmp445, &$s449);
*(&local18) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
frost$core$String* $tmp450 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local18) = $tmp448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:208
frost$core$String* $tmp451 = *(&local18);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:208:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp452 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp451);
*(&local20) = $tmp452;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp453 = *(&local20);
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453.nonnull};
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block45; else goto block46;
block45:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp456 = *(&local20);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp457 = ((frost$core$Int64) $tmp456.value).value;
frost$core$Int $tmp458 = (frost$core$Int) {((int64_t) $tmp457)};
*(&local19) = ((frost$core$Int$nullable) { $tmp458, true });
goto block44;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local19) = ((frost$core$Int$nullable) { .nonnull = false });
goto block44;
block44:;
frost$core$Int$nullable $tmp459 = *(&local19);
*(&local5) = ((frost$core$Int) $tmp459.value);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
frost$core$Int $tmp460 = *(&local5);
frost$core$Int $tmp461 = (frost$core$Int) {3u};
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461.value;
bool $tmp464 = $tmp462 > $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block48; else goto block50;
block50:;
frost$core$Int $tmp467 = *(&local5);
frost$core$Int $tmp468 = (frost$core$Int) {0u};
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468.value;
bool $tmp471 = $tmp469 < $tmp470;
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block48; else goto block49;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:210:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s474);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s475);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:211
frost$core$Int $tmp476 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp476);
goto block49;
block49:;
frost$core$String* $tmp477 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local18) = ((frost$core$String*) NULL);
goto block5;
block43:;
frost$core$Bit $tmp478 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s479);
bool $tmp480 = $tmp478.value;
if ($tmp480) goto block53; else goto block54;
block53:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:215
org$frostlang$frostc$Main$Format$nullable $tmp481 = *(&local6);
frost$core$Bit $tmp482 = (frost$core$Bit) {$tmp481.nonnull};
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:216
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:216:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s484);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s485);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:217
frost$core$Int $tmp486 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp486);
goto block56;
block56:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
org$frostlang$frostc$Main$Arguments* $tmp487 = *(&local0);
$fn489 $tmp488 = ($fn489) $tmp487->$class->vtable[4];
frost$core$String* $tmp490 = $tmp488($tmp487, &$s491);
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$core$String* $tmp492 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local21) = $tmp490;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:220
frost$core$String* $tmp493 = *(&local21);
frost$core$Bit $tmp494 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp493, &$s495);
bool $tmp496 = $tmp494.value;
if ($tmp496) goto block60; else goto block61;
block60:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:221
frost$core$Int $tmp497 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:221:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp498 = &(&local23)->$rawValue;
*$tmp498 = $tmp497;
org$frostlang$frostc$Main$Format $tmp499 = *(&local23);
*(&local22) = $tmp499;
org$frostlang$frostc$Main$Format $tmp500 = *(&local22);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp500, true });
goto block59;
block61:;
frost$core$Bit $tmp501 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp493, &$s502);
bool $tmp503 = $tmp501.value;
if ($tmp503) goto block63; else goto block64;
block63:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:222
frost$core$Int $tmp504 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:222:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp505 = &(&local25)->$rawValue;
*$tmp505 = $tmp504;
org$frostlang$frostc$Main$Format $tmp506 = *(&local25);
*(&local24) = $tmp506;
org$frostlang$frostc$Main$Format $tmp507 = *(&local24);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp507, true });
goto block59;
block64:;
frost$core$Bit $tmp508 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp493, &$s509);
bool $tmp510 = $tmp508.value;
if ($tmp510) goto block66; else goto block67;
block66:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
frost$core$Int $tmp511 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:223:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp512 = &(&local27)->$rawValue;
*$tmp512 = $tmp511;
org$frostlang$frostc$Main$Format $tmp513 = *(&local27);
*(&local26) = $tmp513;
org$frostlang$frostc$Main$Format $tmp514 = *(&local26);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp514, true });
goto block59;
block67:;
frost$core$Bit $tmp515 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp493, &$s516);
bool $tmp517 = $tmp515.value;
if ($tmp517) goto block69; else goto block70;
block69:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
frost$core$Int $tmp518 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:224:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp519 = &(&local29)->$rawValue;
*$tmp519 = $tmp518;
org$frostlang$frostc$Main$Format $tmp520 = *(&local29);
*(&local28) = $tmp520;
org$frostlang$frostc$Main$Format $tmp521 = *(&local28);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp521, true });
goto block59;
block70:;
frost$core$Bit $tmp522 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp493, &$s523);
bool $tmp524 = $tmp522.value;
if ($tmp524) goto block72; else goto block73;
block72:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:225
frost$core$Int $tmp525 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:225:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp526 = &(&local31)->$rawValue;
*$tmp526 = $tmp525;
org$frostlang$frostc$Main$Format $tmp527 = *(&local31);
*(&local30) = $tmp527;
org$frostlang$frostc$Main$Format $tmp528 = *(&local30);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp528, true });
goto block59;
block73:;
frost$core$Bit $tmp529 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp493, &$s530);
bool $tmp531 = $tmp529.value;
if ($tmp531) goto block75; else goto block76;
block75:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:226
frost$core$Int $tmp532 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:226:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp533 = &(&local33)->$rawValue;
*$tmp533 = $tmp532;
org$frostlang$frostc$Main$Format $tmp534 = *(&local33);
*(&local32) = $tmp534;
org$frostlang$frostc$Main$Format $tmp535 = *(&local32);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp535, true });
goto block59;
block76:;
frost$core$Bit $tmp536 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp493, &$s537);
bool $tmp538 = $tmp536.value;
if ($tmp538) goto block78; else goto block79;
block78:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
frost$core$Int $tmp539 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:227:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp540 = &(&local35)->$rawValue;
*$tmp540 = $tmp539;
org$frostlang$frostc$Main$Format $tmp541 = *(&local35);
*(&local34) = $tmp541;
org$frostlang$frostc$Main$Format $tmp542 = *(&local34);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp542, true });
goto block59;
block79:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
frost$core$String* $tmp543 = *(&local21);
frost$core$String* $tmp544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s545, $tmp543);
frost$core$String* $tmp546 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp544, &$s547);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:229:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp546);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s548);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:230
frost$core$Int $tmp549 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp549);
goto block59;
block59:;
frost$core$String* $tmp550 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local21) = ((frost$core$String*) NULL);
goto block5;
block54:;
frost$core$Bit $tmp551 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s552);
bool $tmp553 = $tmp551.value;
if ($tmp553) goto block83; else goto block84;
block83:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:235
frost$collections$Array* $tmp554 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp555 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp556 = *(&local0);
$fn558 $tmp557 = ($fn558) $tmp556->$class->vtable[4];
frost$core$String* $tmp559 = $tmp557($tmp556, &$s560);
frost$io$File$init$frost$core$String($tmp555, $tmp559);
frost$collections$Array$add$frost$collections$Array$T($tmp554, ((frost$core$Object*) $tmp555));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
goto block5;
block84:;
frost$core$Bit $tmp561 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s562);
bool $tmp563 = $tmp561.value;
if ($tmp563) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:238
org$frostlang$frostc$Main$Arguments* $tmp564 = *(&local0);
$fn566 $tmp565 = ($fn566) $tmp564->$class->vtable[4];
frost$core$String* $tmp567 = $tmp565($tmp564, &$s568);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$String* $tmp569 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
*(&local7) = $tmp567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
goto block5;
block86:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:241
frost$core$String* $tmp570 = *(&local9);
frost$core$Bit $tmp571 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp570, &$s572);
bool $tmp573 = $tmp571.value;
if ($tmp573) goto block87; else goto block89;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:242
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp574 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp575 = *(&local9);
frost$io$File$init$frost$core$String($tmp574, $tmp575);
*(&local36) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$io$File* $tmp576 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local36) = $tmp574;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:243
frost$collections$Array* $tmp577 = *(&local1);
frost$io$File* $tmp578 = *(&local36);
frost$collections$Array$add$frost$collections$Array$T($tmp577, ((frost$core$Object*) $tmp578));
frost$io$File* $tmp579 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local36) = ((frost$io$File*) NULL);
goto block88;
block89:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:246
frost$core$String* $tmp580 = *(&local9);
frost$core$String* $tmp581 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s582, $tmp580);
frost$core$String* $tmp583 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp581, &$s584);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:246:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp583);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s585);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:247
frost$core$Int $tmp586 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp586);
goto block88;
block88:;
goto block5;
block5:;
frost$core$String* $tmp587 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:252
org$frostlang$frostc$Main$Format$nullable $tmp588 = *(&local6);
frost$core$Bit $tmp589 = (frost$core$Bit) {!$tmp588.nonnull};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block92; else goto block94;
block94:;
org$frostlang$frostc$Main$Format$nullable $tmp591 = *(&local6);
frost$core$Equatable* $tmp592;
if ($tmp591.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp593;
    $tmp593 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp593->value = ((org$frostlang$frostc$Main$Format) $tmp591.value);
    $tmp592 = ((frost$core$Equatable*) $tmp593);
}
else {
    $tmp592 = NULL;
}
frost$core$Int $tmp594 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:252:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp595 = &(&local38)->$rawValue;
*$tmp595 = $tmp594;
org$frostlang$frostc$Main$Format $tmp596 = *(&local38);
*(&local37) = $tmp596;
org$frostlang$frostc$Main$Format $tmp597 = *(&local37);
org$frostlang$frostc$Main$Format$wrapper* $tmp598;
$tmp598 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp598->value = $tmp597;
ITable* $tmp599 = $tmp592->$class->itable;
while ($tmp599->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp599 = $tmp599->next;
}
$fn601 $tmp600 = $tmp599->methods[1];
frost$core$Bit $tmp602 = $tmp600($tmp592, ((frost$core$Equatable*) $tmp598));
bool $tmp603 = $tmp602.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp598)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
if ($tmp603) goto block92; else goto block93;
block92:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:253
frost$collections$Array* $tmp604 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp605 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp606 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp605, $tmp606);
frost$io$File* $tmp607 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp605, &$s608);
frost$collections$Array$add$frost$collections$Array$T($tmp604, ((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
goto block93;
block93:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:255
frost$collections$Array* $tmp609 = *(&local2);
frost$io$File** $tmp610 = &param0->frostHome;
frost$io$File* $tmp611 = *$tmp610;
frost$collections$Array$add$frost$collections$Array$T($tmp609, ((frost$core$Object*) $tmp611));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:256
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp612 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp613 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp612, $tmp613);
*(&local39) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
frost$io$File* $tmp614 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local39) = $tmp612;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp612));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp615 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp615, &$s616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$io$File** $tmp617 = &param0->clang;
frost$io$File* $tmp618 = *$tmp617;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$io$File** $tmp619 = &param0->clang;
*$tmp619 = $tmp615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:258
frost$collections$Array* $tmp620 = *(&local1);
ITable* $tmp621 = ((frost$collections$CollectionView*) $tmp620)->$class->itable;
while ($tmp621->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp621 = $tmp621->next;
}
$fn623 $tmp622 = $tmp621->methods[0];
frost$core$Int $tmp624 = $tmp622(((frost$collections$CollectionView*) $tmp620));
frost$core$Int $tmp625 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:258:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp626 = $tmp624.value;
int64_t $tmp627 = $tmp625.value;
bool $tmp628 = $tmp626 == $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block96; else goto block97;
block96:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:259:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s631);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s632);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:260
frost$core$Int $tmp633 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp633);
goto block97;
block97:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
org$frostlang$frostc$Main$Format$nullable $tmp634 = *(&local6);
frost$core$Bit $tmp635 = (frost$core$Bit) {!$tmp634.nonnull};
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block101; else goto block102;
block101:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:263
frost$core$Int $tmp637 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:263:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp638 = &(&local41)->$rawValue;
*$tmp638 = $tmp637;
org$frostlang$frostc$Main$Format $tmp639 = *(&local41);
*(&local40) = $tmp639;
org$frostlang$frostc$Main$Format $tmp640 = *(&local40);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp640, true });
goto block102;
block102:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:265
frost$io$File* $tmp641 = *(&local3);
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641 == NULL};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block104; else goto block105;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:266
frost$collections$Array* $tmp644 = *(&local1);
ITable* $tmp645 = ((frost$collections$CollectionView*) $tmp644)->$class->itable;
while ($tmp645->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
frost$core$Int $tmp648 = $tmp646(((frost$collections$CollectionView*) $tmp644));
frost$core$Int $tmp649 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:266:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649.value;
bool $tmp652 = $tmp650 == $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block106; else goto block108;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
*(&local42) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:268
org$frostlang$frostc$Main$Format$nullable $tmp655 = *(&local6);
frost$core$Int $tmp656 = ((org$frostlang$frostc$Main$Format) $tmp655.value).$rawValue;
frost$core$Int $tmp657 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:269:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp658 = $tmp656.value;
int64_t $tmp659 = $tmp657.value;
bool $tmp660 = $tmp658 == $tmp659;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block111; else goto block112;
block111:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s663));
frost$core$String* $tmp664 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
*(&local42) = &$s665;
goto block110;
block112:;
frost$core$Int $tmp666 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:270:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp667 = $tmp656.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 == $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
bool $tmp671 = $tmp670.value;
if ($tmp671) goto block114; else goto block115;
block114:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s672));
frost$core$String* $tmp673 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local42) = &$s674;
goto block110;
block115:;
frost$core$Int $tmp675 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:271:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp676 = $tmp656.value;
int64_t $tmp677 = $tmp675.value;
bool $tmp678 = $tmp676 == $tmp677;
frost$core$Bit $tmp679 = (frost$core$Bit) {$tmp678};
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block117; else goto block118;
block117:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s681));
frost$core$String* $tmp682 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
*(&local42) = &$s683;
goto block110;
block118:;
frost$core$Int $tmp684 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:272:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp685 = $tmp656.value;
int64_t $tmp686 = $tmp684.value;
bool $tmp687 = $tmp685 == $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block120; else goto block121;
block120:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s690));
frost$core$String* $tmp691 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local42) = &$s692;
goto block110;
block121:;
frost$core$Int $tmp693 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp694 = $tmp656.value;
int64_t $tmp695 = $tmp693.value;
bool $tmp696 = $tmp694 == $tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block123; else goto block124;
block123:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s699));
frost$core$String* $tmp700 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
*(&local42) = &$s701;
goto block110;
block124:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:275:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s702);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s703);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:277
frost$core$Int $tmp704 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp704);
goto block110;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:280
frost$collections$Array* $tmp705 = *(&local1);
frost$core$Int $tmp706 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:280:35
frost$core$Int $tmp707 = (frost$core$Int) {0u};
int64_t $tmp708 = $tmp706.value;
int64_t $tmp709 = $tmp707.value;
bool $tmp710 = $tmp708 >= $tmp709;
frost$core$Bit $tmp711 = (frost$core$Bit) {$tmp710};
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block131; else goto block130;
block131:;
ITable* $tmp713 = ((frost$collections$CollectionView*) $tmp705)->$class->itable;
while ($tmp713->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp713 = $tmp713->next;
}
$fn715 $tmp714 = $tmp713->methods[0];
frost$core$Int $tmp716 = $tmp714(((frost$collections$CollectionView*) $tmp705));
int64_t $tmp717 = $tmp706.value;
int64_t $tmp718 = $tmp716.value;
bool $tmp719 = $tmp717 < $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block129; else goto block130;
block130:;
frost$core$Int $tmp722 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s723, $tmp722, &$s724);
abort(); // unreachable
block129:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp725 = &$tmp705->data;
frost$core$Object** $tmp726 = *$tmp725;
frost$core$Int64 $tmp727 = frost$core$Int64$init$frost$core$Int($tmp706);
int64_t $tmp728 = $tmp727.value;
frost$core$Object* $tmp729 = $tmp726[$tmp728];
frost$core$Frost$ref$frost$core$Object$Q($tmp729);
frost$core$String* $tmp730 = *(&local42);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:280:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp731 = frost$io$File$resolve$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp729), &$s732);
frost$core$String** $tmp733 = &$tmp731->path;
frost$core$String* $tmp734 = *$tmp733;
frost$core$String* $tmp735 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp734);
*(&local44) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$String* $tmp736 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local44) = $tmp735;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp737 = *(&local44);
frost$core$Bit $tmp738 = (frost$core$Bit) {$tmp737 == NULL};
bool $tmp739 = $tmp738.value;
if ($tmp739) goto block134; else goto block135;
block134:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp740 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local44) = ((frost$core$String*) NULL);
*(&local43) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block133;
block135:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp741 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp742 = *(&local44);
frost$io$File$init$frost$core$String($tmp741, $tmp742);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
frost$core$String* $tmp743 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local44) = ((frost$core$String*) NULL);
*(&local43) = $tmp741;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
goto block133;
block133:;
frost$io$File* $tmp744 = *(&local43);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp745 = frost$io$File$get_name$R$frost$core$String(((frost$io$File*) $tmp729));
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
frost$core$String* $tmp746 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
*(&local46) = $tmp745;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp747 = *(&local46);
frost$core$String$Index$nullable $tmp748 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp747, &$s749);
*(&local47) = $tmp748;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp750 = *(&local47);
frost$core$Bit $tmp751 = (frost$core$Bit) {!$tmp750.nonnull};
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block137; else goto block138;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp753 = *(&local46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
frost$core$String* $tmp754 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = $tmp753;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
goto block136;
block138:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp755 = *(&local46);
frost$core$String$Index$nullable $tmp756 = *(&local47);
frost$core$Bit $tmp757 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp758 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp756, $tmp757);
frost$core$String* $tmp759 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp755, $tmp758);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$String* $tmp760 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = $tmp759;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
goto block136;
block136:;
frost$core$String* $tmp761 = *(&local45);
frost$core$String* $tmp762 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp761, $tmp730);
frost$io$File* $tmp763 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp744, $tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$core$String* $tmp764 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local45) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
frost$io$File* $tmp765 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local43) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$io$File* $tmp766 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
*(&local3) = $tmp763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$core$Frost$unref$frost$core$Object$Q($tmp729);
frost$core$String* $tmp767 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local42) = ((frost$core$String*) NULL);
goto block107;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
org$frostlang$frostc$Main$Format$nullable $tmp768 = *(&local6);
frost$core$Equatable* $tmp769;
if ($tmp768.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp770;
    $tmp770 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp770->value = ((org$frostlang$frostc$Main$Format) $tmp768.value);
    $tmp769 = ((frost$core$Equatable*) $tmp770);
}
else {
    $tmp769 = NULL;
}
frost$core$Int $tmp771 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:282:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp772 = &(&local49)->$rawValue;
*$tmp772 = $tmp771;
org$frostlang$frostc$Main$Format $tmp773 = *(&local49);
*(&local48) = $tmp773;
org$frostlang$frostc$Main$Format $tmp774 = *(&local48);
org$frostlang$frostc$Main$Format$wrapper* $tmp775;
$tmp775 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp775->value = $tmp774;
ITable* $tmp776 = $tmp769->$class->itable;
while ($tmp776->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp776 = $tmp776->next;
}
$fn778 $tmp777 = $tmp776->methods[0];
frost$core$Bit $tmp779 = $tmp777($tmp769, ((frost$core$Equatable*) $tmp775));
bool $tmp780 = $tmp779.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp775)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
if ($tmp780) goto block139; else goto block141;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:283
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:283:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s781);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s782);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
frost$core$Int $tmp783 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp783);
goto block140;
block141:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:287
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:287:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s784);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s785);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:289
frost$core$Int $tmp786 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp786);
goto block140;
block140:;
goto block107;
block107:;
goto block105;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:292
frost$core$Int $tmp787 = (frost$core$Int) {0u};
*(&local50) = $tmp787;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:293
frost$core$Int $tmp788 = (frost$core$Int) {0u};
*(&local51) = $tmp788;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
*(&local52) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:296
org$frostlang$frostc$Main$Format$nullable $tmp789 = *(&local6);
frost$core$Int $tmp790 = ((org$frostlang$frostc$Main$Format) $tmp789.value).$rawValue;
frost$core$Int $tmp791 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:297:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp792 = $tmp790.value;
int64_t $tmp793 = $tmp791.value;
bool $tmp794 = $tmp792 == $tmp793;
frost$core$Bit $tmp795 = (frost$core$Bit) {$tmp794};
bool $tmp796 = $tmp795.value;
if ($tmp796) goto block148; else goto block149;
block149:;
frost$core$Int $tmp797 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:297:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp798 = $tmp790.value;
int64_t $tmp799 = $tmp797.value;
bool $tmp800 = $tmp798 == $tmp799;
frost$core$Bit $tmp801 = (frost$core$Bit) {$tmp800};
bool $tmp802 = $tmp801.value;
if ($tmp802) goto block148; else goto block151;
block151:;
frost$core$Int $tmp803 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:297:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp804 = $tmp790.value;
int64_t $tmp805 = $tmp803.value;
bool $tmp806 = $tmp804 == $tmp805;
frost$core$Bit $tmp807 = (frost$core$Bit) {$tmp806};
bool $tmp808 = $tmp807.value;
if ($tmp808) goto block148; else goto block153;
block148:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
*(&local53) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:299
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp809 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp810 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp811 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:300:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp812 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp811, &$s813);
frost$core$String** $tmp814 = &$tmp812->path;
frost$core$String* $tmp815 = *$tmp814;
frost$core$String* $tmp816 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp815);
*(&local55) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$String* $tmp817 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
*(&local55) = $tmp816;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp816));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp818 = *(&local55);
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818 == NULL};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block159; else goto block160;
block159:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp821 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local55) = ((frost$core$String*) NULL);
*(&local54) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block158;
block160:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp822 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp823 = *(&local55);
frost$io$File$init$frost$core$String($tmp822, $tmp823);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
frost$core$String* $tmp824 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
*(&local55) = ((frost$core$String*) NULL);
*(&local54) = $tmp822;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
goto block158;
block158:;
frost$io$File* $tmp825 = *(&local54);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp826 = frost$io$File$get_name$R$frost$core$String($tmp811);
*(&local57) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$String* $tmp827 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local57) = $tmp826;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp828 = *(&local57);
frost$core$String$Index$nullable $tmp829 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp828, &$s830);
*(&local58) = $tmp829;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp831 = *(&local58);
frost$core$Bit $tmp832 = (frost$core$Bit) {!$tmp831.nonnull};
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block162; else goto block163;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp834 = *(&local57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$String* $tmp835 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = $tmp834;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
goto block161;
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp836 = *(&local57);
frost$core$String$Index$nullable $tmp837 = *(&local58);
frost$core$Bit $tmp838 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp839 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp837, $tmp838);
frost$core$String* $tmp840 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp836, $tmp839);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$String* $tmp841 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = $tmp840;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
goto block161;
block161:;
frost$core$String* $tmp842 = *(&local56);
frost$core$String* $tmp843 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp842, &$s844);
frost$io$File* $tmp845 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp825, $tmp843);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
frost$core$String* $tmp846 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
*(&local56) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
frost$io$File* $tmp847 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local54) = ((frost$io$File*) NULL);
frost$core$Maybe* $tmp848 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp845);
frost$core$Int* $tmp849 = &$tmp848->$rawValue;
frost$core$Int $tmp850 = *$tmp849;
int64_t $tmp851 = $tmp850.value;
bool $tmp852 = $tmp851 == 0u;
if ($tmp852) goto block164; else goto block165;
block165:;
frost$core$Error** $tmp853 = (frost$core$Error**) ($tmp848->$data + 0);
frost$core$Error* $tmp854 = *$tmp853;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local53) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:303
frost$core$Error* $tmp855 = *(&local53);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:303:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn857 $tmp856 = ($fn857) ((frost$core$Object*) $tmp855)->$class->vtable[0];
frost$core$String* $tmp858 = $tmp856(((frost$core$Object*) $tmp855));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp858);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:304
frost$core$Int $tmp859 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp859);
goto block156;
block164:;
frost$core$Object** $tmp860 = (frost$core$Object**) ($tmp848->$data + 0);
frost$core$Object* $tmp861 = *$tmp860;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp809, $tmp810, ((frost$io$OutputStream*) $tmp861));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp809)));
org$frostlang$frostc$CodeGenerator* $tmp862 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local52) = ((org$frostlang$frostc$CodeGenerator*) $tmp809);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
goto block156;
block156:;
frost$core$Error* $tmp863 = *(&local53);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
*(&local53) = ((frost$core$Error*) NULL);
goto block147;
block153:;
frost$core$Int $tmp864 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:307:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp865 = $tmp790.value;
int64_t $tmp866 = $tmp864.value;
bool $tmp867 = $tmp865 == $tmp866;
frost$core$Bit $tmp868 = (frost$core$Bit) {$tmp867};
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block168; else goto block169;
block168:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:308
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp870 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp871 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp870, $tmp871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp870)));
org$frostlang$frostc$CodeGenerator* $tmp872 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local52) = ((org$frostlang$frostc$CodeGenerator*) $tmp870);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
goto block147;
block169:;
frost$core$Int $tmp873 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:310:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp874 = $tmp790.value;
int64_t $tmp875 = $tmp873.value;
bool $tmp876 = $tmp874 == $tmp875;
frost$core$Bit $tmp877 = (frost$core$Bit) {$tmp876};
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block171; else goto block172;
block171:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:311
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp879 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp880 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp879, $tmp880);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp879)));
org$frostlang$frostc$CodeGenerator* $tmp881 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local52) = ((org$frostlang$frostc$CodeGenerator*) $tmp879);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
goto block147;
block172:;
frost$core$Int $tmp882 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:313:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp883 = $tmp790.value;
int64_t $tmp884 = $tmp882.value;
bool $tmp885 = $tmp883 == $tmp884;
frost$core$Bit $tmp886 = (frost$core$Bit) {$tmp885};
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block174; else goto block175;
block174:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:314
*(&local59) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:315
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
org$frostlang$frostc$StubCodeGenerator* $tmp888 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp889 = *(&local3);
frost$core$Maybe* $tmp890 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp889);
frost$core$Int* $tmp891 = &$tmp890->$rawValue;
frost$core$Int $tmp892 = *$tmp891;
int64_t $tmp893 = $tmp892.value;
bool $tmp894 = $tmp893 == 0u;
if ($tmp894) goto block179; else goto block180;
block180:;
frost$core$Error** $tmp895 = (frost$core$Error**) ($tmp890->$data + 0);
frost$core$Error* $tmp896 = *$tmp895;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
*(&local59) = $tmp896;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:318
frost$core$Error* $tmp897 = *(&local59);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:318:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn899 $tmp898 = ($fn899) ((frost$core$Object*) $tmp897)->$class->vtable[0];
frost$core$String* $tmp900 = $tmp898(((frost$core$Object*) $tmp897));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp900);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:319
frost$core$Int $tmp901 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp901);
goto block178;
block179:;
frost$core$Object** $tmp902 = (frost$core$Object**) ($tmp890->$data + 0);
frost$core$Object* $tmp903 = *$tmp902;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp888, ((frost$io$OutputStream*) $tmp903));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp888)));
org$frostlang$frostc$CodeGenerator* $tmp904 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp904));
*(&local52) = ((org$frostlang$frostc$CodeGenerator*) $tmp888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
goto block178;
block178:;
frost$core$Error* $tmp905 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
*(&local59) = ((frost$core$Error*) NULL);
goto block147;
block175:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:323
frost$core$Int $tmp906 = (frost$core$Int) {323u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s907, $tmp906);
abort(); // unreachable
block147:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:326
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp908 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp909 = &param0->frostHome;
frost$io$File* $tmp910 = *$tmp909;
frost$collections$Array* $tmp911 = *(&local2);
frost$core$Int $tmp912 = *(&local4);
frost$core$Int $tmp913 = *(&local5);
frost$core$Bit* $tmp914 = &param0->debug;
frost$core$Bit $tmp915 = *$tmp914;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit($tmp908, $tmp910, ((frost$collections$ListView*) $tmp911), $tmp912, $tmp913, $tmp915);
*(&local60) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
org$frostlang$frostc$Compiler$Settings* $tmp916 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp916));
*(&local60) = $tmp908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:328
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp917 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp917);
*(&local61) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
frost$threads$MessageQueue* $tmp918 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
*(&local61) = $tmp917;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:329
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp919 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp920 = *(&local61);
org$frostlang$frostc$CodeGenerator* $tmp921 = *(&local52);
org$frostlang$frostc$Compiler$Settings* $tmp922 = *(&local60);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp919, $tmp920, $tmp921, $tmp922);
*(&local62) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
org$frostlang$frostc$Compiler* $tmp923 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local62) = $tmp919;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
org$frostlang$frostc$Main$Format$nullable $tmp924 = *(&local6);
frost$core$Equatable* $tmp925;
if ($tmp924.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp926;
    $tmp926 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp926->value = ((org$frostlang$frostc$Main$Format) $tmp924.value);
    $tmp925 = ((frost$core$Equatable*) $tmp926);
}
else {
    $tmp925 = NULL;
}
frost$core$Int $tmp927 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:330:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp928 = &(&local64)->$rawValue;
*$tmp928 = $tmp927;
org$frostlang$frostc$Main$Format $tmp929 = *(&local64);
*(&local63) = $tmp929;
org$frostlang$frostc$Main$Format $tmp930 = *(&local63);
org$frostlang$frostc$Main$Format$wrapper* $tmp931;
$tmp931 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp931->value = $tmp930;
ITable* $tmp932 = $tmp925->$class->itable;
while ($tmp932->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp932 = $tmp932->next;
}
$fn934 $tmp933 = $tmp932->methods[0];
frost$core$Bit $tmp935 = $tmp933($tmp925, ((frost$core$Equatable*) $tmp931));
bool $tmp936 = $tmp935.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp931)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
if ($tmp936) goto block183; else goto block184;
block183:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
frost$core$String* $tmp937 = *(&local7);
frost$core$Bit $tmp938 = (frost$core$Bit) {$tmp937 == NULL};
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block186; else goto block187;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:332
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s940));
frost$core$String* $tmp941 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local7) = &$s940;
goto block187;
block187:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:334
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$HTMLProcessor));
org$frostlang$frostc$HTMLProcessor* $tmp942 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$Compiler* $tmp943 = *(&local62);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler($tmp942, $tmp943);
frost$collections$Array* $tmp944 = *(&local1);
frost$core$Int $tmp945 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:334:56
frost$core$Int $tmp946 = (frost$core$Int) {0u};
int64_t $tmp947 = $tmp945.value;
int64_t $tmp948 = $tmp946.value;
bool $tmp949 = $tmp947 >= $tmp948;
frost$core$Bit $tmp950 = (frost$core$Bit) {$tmp949};
bool $tmp951 = $tmp950.value;
if ($tmp951) goto block191; else goto block190;
block191:;
ITable* $tmp952 = ((frost$collections$CollectionView*) $tmp944)->$class->itable;
while ($tmp952->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp952 = $tmp952->next;
}
$fn954 $tmp953 = $tmp952->methods[0];
frost$core$Int $tmp955 = $tmp953(((frost$collections$CollectionView*) $tmp944));
int64_t $tmp956 = $tmp945.value;
int64_t $tmp957 = $tmp955.value;
bool $tmp958 = $tmp956 < $tmp957;
frost$core$Bit $tmp959 = (frost$core$Bit) {$tmp958};
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block189; else goto block190;
block190:;
frost$core$Int $tmp961 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s962, $tmp961, &$s963);
abort(); // unreachable
block189:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp964 = &$tmp944->data;
frost$core$Object** $tmp965 = *$tmp964;
frost$core$Int64 $tmp966 = frost$core$Int64$init$frost$core$Int($tmp945);
int64_t $tmp967 = $tmp966.value;
frost$core$Object* $tmp968 = $tmp965[$tmp967];
frost$core$Frost$ref$frost$core$Object$Q($tmp968);
frost$io$File* $tmp969 = *(&local3);
frost$core$String* $tmp970 = *(&local7);
$fn972 $tmp971 = ($fn972) $tmp942->$class->vtable[3];
$tmp971($tmp942, ((frost$io$File*) $tmp968), $tmp969, $tmp970);
frost$core$Frost$unref$frost$core$Object$Q($tmp968);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:335
org$frostlang$frostc$Compiler* $tmp973 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp973));
*(&local62) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp974 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp974));
*(&local61) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp975 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp975));
*(&local60) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp976 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
*(&local52) = ((org$frostlang$frostc$CodeGenerator*) NULL);
frost$io$File* $tmp977 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp977));
*(&local39) = ((frost$io$File*) NULL);
frost$core$String* $tmp978 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp978));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp979 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp980 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp981 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp981));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp982 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp982));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:337
frost$core$String* $tmp983 = *(&local7);
frost$core$Bit $tmp984 = (frost$core$Bit) {$tmp983 != NULL};
bool $tmp985 = $tmp984.value;
if ($tmp985) goto block192; else goto block193;
block192:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:338:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s986);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s987);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
frost$core$Int $tmp988 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp988);
goto block193;
block193:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
frost$collections$Array* $tmp989 = *(&local1);
ITable* $tmp990 = ((frost$collections$Iterable*) $tmp989)->$class->itable;
while ($tmp990->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp990 = $tmp990->next;
}
$fn992 $tmp991 = $tmp990->methods[0];
frost$collections$Iterator* $tmp993 = $tmp991(((frost$collections$Iterable*) $tmp989));
goto block196;
block196:;
ITable* $tmp994 = $tmp993->$class->itable;
while ($tmp994->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp994 = $tmp994->next;
}
$fn996 $tmp995 = $tmp994->methods[0];
frost$core$Bit $tmp997 = $tmp995($tmp993);
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block198; else goto block197;
block197:;
*(&local65) = ((frost$io$File*) NULL);
ITable* $tmp999 = $tmp993->$class->itable;
while ($tmp999->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp999 = $tmp999->next;
}
$fn1001 $tmp1000 = $tmp999->methods[1];
frost$core$Object* $tmp1002 = $tmp1000($tmp993);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1002)));
frost$io$File* $tmp1003 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1003));
*(&local65) = ((frost$io$File*) $tmp1002);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:342
org$frostlang$frostc$Compiler* $tmp1004 = *(&local62);
frost$io$File* $tmp1005 = *(&local65);
frost$collections$ListView* $tmp1006 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp1004, $tmp1005);
ITable* $tmp1007 = ((frost$collections$Iterable*) $tmp1006)->$class->itable;
while ($tmp1007->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1007 = $tmp1007->next;
}
$fn1009 $tmp1008 = $tmp1007->methods[0];
frost$collections$Iterator* $tmp1010 = $tmp1008(((frost$collections$Iterable*) $tmp1006));
goto block199;
block199:;
ITable* $tmp1011 = $tmp1010->$class->itable;
while ($tmp1011->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1011 = $tmp1011->next;
}
$fn1013 $tmp1012 = $tmp1011->methods[0];
frost$core$Bit $tmp1014 = $tmp1012($tmp1010);
bool $tmp1015 = $tmp1014.value;
if ($tmp1015) goto block201; else goto block200;
block200:;
*(&local66) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1016 = $tmp1010->$class->itable;
while ($tmp1016->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1016 = $tmp1016->next;
}
$fn1018 $tmp1017 = $tmp1016->methods[1];
frost$core$Object* $tmp1019 = $tmp1017($tmp1010);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1019)));
org$frostlang$frostc$ClassDecl* $tmp1020 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local66) = ((org$frostlang$frostc$ClassDecl*) $tmp1019);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:343
org$frostlang$frostc$Compiler* $tmp1021 = *(&local62);
org$frostlang$frostc$ClassDecl* $tmp1022 = *(&local66);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:343:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5961
frost$core$Bit $tmp1023 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1024 = &$tmp1022->external;
*$tmp1024 = $tmp1023;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5962
frost$collections$Array** $tmp1025 = &$tmp1022->classes;
frost$collections$Array* $tmp1026 = *$tmp1025;
ITable* $tmp1027 = ((frost$collections$Iterable*) $tmp1026)->$class->itable;
while ($tmp1027->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1027 = $tmp1027->next;
}
$fn1029 $tmp1028 = $tmp1027->methods[0];
frost$collections$Iterator* $tmp1030 = $tmp1028(((frost$collections$Iterable*) $tmp1026));
goto block203;
block203:;
ITable* $tmp1031 = $tmp1030->$class->itable;
while ($tmp1031->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1031 = $tmp1031->next;
}
$fn1033 $tmp1032 = $tmp1031->methods[0];
frost$core$Bit $tmp1034 = $tmp1032($tmp1030);
bool $tmp1035 = $tmp1034.value;
if ($tmp1035) goto block205; else goto block204;
block204:;
*(&local67) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1036 = $tmp1030->$class->itable;
while ($tmp1036->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1036 = $tmp1036->next;
}
$fn1038 $tmp1037 = $tmp1036->methods[1];
frost$core$Object* $tmp1039 = $tmp1037($tmp1030);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1039)));
org$frostlang$frostc$ClassDecl* $tmp1040 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1040));
*(&local67) = ((org$frostlang$frostc$ClassDecl*) $tmp1039);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5963
org$frostlang$frostc$ClassDecl* $tmp1041 = *(&local67);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5963:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5961
frost$core$Bit $tmp1042 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1043 = &$tmp1041->external;
*$tmp1043 = $tmp1042;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5962
frost$collections$Array** $tmp1044 = &$tmp1041->classes;
frost$collections$Array* $tmp1045 = *$tmp1044;
ITable* $tmp1046 = ((frost$collections$Iterable*) $tmp1045)->$class->itable;
while ($tmp1046->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1046 = $tmp1046->next;
}
$fn1048 $tmp1047 = $tmp1046->methods[0];
frost$collections$Iterator* $tmp1049 = $tmp1047(((frost$collections$Iterable*) $tmp1045));
goto block207;
block207:;
ITable* $tmp1050 = $tmp1049->$class->itable;
while ($tmp1050->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1050 = $tmp1050->next;
}
$fn1052 $tmp1051 = $tmp1050->methods[0];
frost$core$Bit $tmp1053 = $tmp1051($tmp1049);
bool $tmp1054 = $tmp1053.value;
if ($tmp1054) goto block209; else goto block208;
block208:;
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1055 = $tmp1049->$class->itable;
while ($tmp1055->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1055 = $tmp1055->next;
}
$fn1057 $tmp1056 = $tmp1055->methods[1];
frost$core$Object* $tmp1058 = $tmp1056($tmp1049);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1058)));
org$frostlang$frostc$ClassDecl* $tmp1059 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) $tmp1058);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5963
org$frostlang$frostc$ClassDecl* $tmp1060 = *(&local68);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp1021, $tmp1060);
frost$core$Frost$unref$frost$core$Object$Q($tmp1058);
org$frostlang$frostc$ClassDecl* $tmp1061 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1061));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block207;
block209:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1049));
frost$core$Frost$unref$frost$core$Object$Q($tmp1039);
org$frostlang$frostc$ClassDecl* $tmp1062 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
*(&local67) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block203;
block205:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1030));
frost$core$Frost$unref$frost$core$Object$Q($tmp1019);
org$frostlang$frostc$ClassDecl* $tmp1063 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1063));
*(&local66) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block199;
block201:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1010));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1006));
frost$core$Frost$unref$frost$core$Object$Q($tmp1002);
frost$io$File* $tmp1064 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
*(&local65) = ((frost$io$File*) NULL);
goto block196;
block198:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:346
frost$collections$Array* $tmp1065 = *(&local1);
ITable* $tmp1066 = ((frost$collections$Iterable*) $tmp1065)->$class->itable;
while ($tmp1066->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1066 = $tmp1066->next;
}
$fn1068 $tmp1067 = $tmp1066->methods[0];
frost$collections$Iterator* $tmp1069 = $tmp1067(((frost$collections$Iterable*) $tmp1065));
goto block210;
block210:;
ITable* $tmp1070 = $tmp1069->$class->itable;
while ($tmp1070->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1070 = $tmp1070->next;
}
$fn1072 $tmp1071 = $tmp1070->methods[0];
frost$core$Bit $tmp1073 = $tmp1071($tmp1069);
bool $tmp1074 = $tmp1073.value;
if ($tmp1074) goto block212; else goto block211;
block211:;
*(&local69) = ((frost$io$File*) NULL);
ITable* $tmp1075 = $tmp1069->$class->itable;
while ($tmp1075->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1075 = $tmp1075->next;
}
$fn1077 $tmp1076 = $tmp1075->methods[1];
frost$core$Object* $tmp1078 = $tmp1076($tmp1069);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1078)));
frost$io$File* $tmp1079 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local69) = ((frost$io$File*) $tmp1078);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:347
org$frostlang$frostc$Compiler* $tmp1080 = *(&local62);
frost$io$File* $tmp1081 = *(&local69);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp1080, $tmp1081);
frost$core$Frost$unref$frost$core$Object$Q($tmp1078);
frost$io$File* $tmp1082 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local69) = ((frost$io$File*) NULL);
goto block210;
block212:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1069));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
org$frostlang$frostc$Compiler* $tmp1083 = *(&local62);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:349:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6196
goto block214;
block214:;
frost$collections$Array** $tmp1084 = &$tmp1083->pendingClasses;
frost$collections$Array* $tmp1085 = *$tmp1084;
ITable* $tmp1086 = ((frost$collections$CollectionView*) $tmp1085)->$class->itable;
while ($tmp1086->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1086 = $tmp1086->next;
}
$fn1088 $tmp1087 = $tmp1086->methods[0];
frost$core$Int $tmp1089 = $tmp1087(((frost$collections$CollectionView*) $tmp1085));
frost$core$Int $tmp1090 = (frost$core$Int) {0u};
int64_t $tmp1091 = $tmp1089.value;
int64_t $tmp1092 = $tmp1090.value;
bool $tmp1093 = $tmp1091 > $tmp1092;
frost$core$Bit $tmp1094 = (frost$core$Bit) {$tmp1093};
bool $tmp1095 = $tmp1094.value;
if ($tmp1095) goto block215; else goto block216;
block215:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6197
frost$collections$Array** $tmp1096 = &$tmp1083->pendingClasses;
frost$collections$Array* $tmp1097 = *$tmp1096;
frost$collections$Array** $tmp1098 = &$tmp1083->pendingClasses;
frost$collections$Array* $tmp1099 = *$tmp1098;
ITable* $tmp1100 = ((frost$collections$CollectionView*) $tmp1099)->$class->itable;
while ($tmp1100->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1100 = $tmp1100->next;
}
$fn1102 $tmp1101 = $tmp1100->methods[0];
frost$core$Int $tmp1103 = $tmp1101(((frost$collections$CollectionView*) $tmp1099));
frost$core$Int $tmp1104 = (frost$core$Int) {1u};
int64_t $tmp1105 = $tmp1103.value;
int64_t $tmp1106 = $tmp1104.value;
int64_t $tmp1107 = $tmp1105 - $tmp1106;
frost$core$Int $tmp1108 = (frost$core$Int) {$tmp1107};
frost$core$Object* $tmp1109 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp1097, $tmp1108);
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1109)));
org$frostlang$frostc$ClassDecl* $tmp1110 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1110));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) $tmp1109);
frost$core$Frost$unref$frost$core$Object$Q($tmp1109);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6198
org$frostlang$frostc$ClassDecl* $tmp1111 = *(&local70);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp1083, $tmp1111);
org$frostlang$frostc$ClassDecl* $tmp1112 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1112));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block214;
block216:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6200
org$frostlang$frostc$CodeGenerator** $tmp1113 = &$tmp1083->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp1114 = *$tmp1113;
ITable* $tmp1115 = $tmp1114->$class->itable;
while ($tmp1115->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp1115 = $tmp1115->next;
}
$fn1117 $tmp1116 = $tmp1115->methods[5];
$tmp1116($tmp1114);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:350
goto block217;
block217:;
frost$threads$MessageQueue* $tmp1118 = *(&local61);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:350:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1119 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1120 = &$tmp1118->lock;
frost$threads$Lock* $tmp1121 = *$tmp1120;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1119, $tmp1121);
*(&local71) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
frost$threads$ScopedLock* $tmp1122 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1122));
*(&local71) = $tmp1119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1119));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1123 = &$tmp1118->count;
frost$core$Int $tmp1124 = *$tmp1123;
frost$threads$ScopedLock* $tmp1125 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1125));
*(&local71) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1126 = (frost$core$Int) {0u};
int64_t $tmp1127 = $tmp1124.value;
int64_t $tmp1128 = $tmp1126.value;
bool $tmp1129 = $tmp1127 > $tmp1128;
frost$core$Bit $tmp1130 = (frost$core$Bit) {$tmp1129};
bool $tmp1131 = $tmp1130.value;
if ($tmp1131) goto block218; else goto block219;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:351
frost$threads$MessageQueue* $tmp1132 = *(&local61);
frost$core$Immutable* $tmp1133 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1132);
*(&local72) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp1133)));
org$frostlang$frostc$Compiler$Message* $tmp1134 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1134));
*(&local72) = ((org$frostlang$frostc$Compiler$Message*) $tmp1133);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1133));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:353
org$frostlang$frostc$Compiler$Message* $tmp1135 = *(&local72);
frost$core$Int* $tmp1136 = &$tmp1135->$rawValue;
frost$core$Int $tmp1137 = *$tmp1136;
frost$core$Int $tmp1138 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:354:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1139 = $tmp1137.value;
int64_t $tmp1140 = $tmp1138.value;
bool $tmp1141 = $tmp1139 == $tmp1140;
frost$core$Bit $tmp1142 = (frost$core$Bit) {$tmp1141};
bool $tmp1143 = $tmp1142.value;
if ($tmp1143) goto block223; else goto block224;
block223:;
frost$core$String** $tmp1144 = (frost$core$String**) ($tmp1135->$data + 0);
frost$core$String* $tmp1145 = *$tmp1144;
*(&local73) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1145));
frost$core$String* $tmp1146 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1146));
*(&local73) = $tmp1145;
frost$core$Int* $tmp1147 = (frost$core$Int*) ($tmp1135->$data + 8);
frost$core$Int $tmp1148 = *$tmp1147;
*(&local74) = $tmp1148;
frost$core$Int* $tmp1149 = (frost$core$Int*) ($tmp1135->$data + 16);
frost$core$Int $tmp1150 = *$tmp1149;
*(&local75) = $tmp1150;
frost$core$String** $tmp1151 = (frost$core$String**) ($tmp1135->$data + 24);
frost$core$String* $tmp1152 = *$tmp1151;
*(&local76) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
frost$core$String* $tmp1153 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1153));
*(&local76) = $tmp1152;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
frost$core$Int $tmp1154 = *(&local50);
frost$core$Int $tmp1155 = (frost$core$Int) {1u};
int64_t $tmp1156 = $tmp1154.value;
int64_t $tmp1157 = $tmp1155.value;
int64_t $tmp1158 = $tmp1156 + $tmp1157;
frost$core$Int $tmp1159 = (frost$core$Int) {$tmp1158};
*(&local50) = $tmp1159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:356
frost$core$String* $tmp1160 = *(&local73);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$String* $tmp1161 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1160, &$s1162);
frost$core$Int $tmp1163 = *(&local74);
frost$core$Int$wrapper* $tmp1164;
$tmp1164 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1164->value = $tmp1163;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1166 $tmp1165 = ($fn1166) ((frost$core$Object*) $tmp1164)->$class->vtable[0];
frost$core$String* $tmp1167 = $tmp1165(((frost$core$Object*) $tmp1164));
frost$core$String* $tmp1168 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1161, $tmp1167);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1167));
frost$core$String* $tmp1169 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1168, &$s1170);
frost$core$Int $tmp1171 = *(&local75);
frost$core$Int$wrapper* $tmp1172;
$tmp1172 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1172->value = $tmp1171;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1174 $tmp1173 = ($fn1174) ((frost$core$Object*) $tmp1172)->$class->vtable[0];
frost$core$String* $tmp1175 = $tmp1173(((frost$core$Object*) $tmp1172));
frost$core$String* $tmp1176 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1169, $tmp1175);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1175));
frost$core$String* $tmp1177 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1176, &$s1178);
frost$core$String* $tmp1179 = *(&local76);
frost$core$String* $tmp1180 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1177, $tmp1179);
frost$core$String* $tmp1181 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1180, &$s1182);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:356:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1181);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1183);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1181));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1180));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1177));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1169));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1168));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$String* $tmp1184 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local76) = ((frost$core$String*) NULL);
frost$core$String* $tmp1185 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
*(&local73) = ((frost$core$String*) NULL);
goto block222;
block224:;
frost$core$Int $tmp1186 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:358:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1187 = $tmp1137.value;
int64_t $tmp1188 = $tmp1186.value;
bool $tmp1189 = $tmp1187 == $tmp1188;
frost$core$Bit $tmp1190 = (frost$core$Bit) {$tmp1189};
bool $tmp1191 = $tmp1190.value;
if ($tmp1191) goto block231; else goto block222;
block231:;
frost$core$String** $tmp1192 = (frost$core$String**) ($tmp1135->$data + 0);
frost$core$String* $tmp1193 = *$tmp1192;
*(&local77) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$String* $tmp1194 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
*(&local77) = $tmp1193;
frost$core$Int* $tmp1195 = (frost$core$Int*) ($tmp1135->$data + 8);
frost$core$Int $tmp1196 = *$tmp1195;
*(&local78) = $tmp1196;
frost$core$Int* $tmp1197 = (frost$core$Int*) ($tmp1135->$data + 16);
frost$core$Int $tmp1198 = *$tmp1197;
*(&local79) = $tmp1198;
frost$core$String** $tmp1199 = (frost$core$String**) ($tmp1135->$data + 24);
frost$core$String* $tmp1200 = *$tmp1199;
*(&local80) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1200));
frost$core$String* $tmp1201 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1201));
*(&local80) = $tmp1200;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
frost$core$Int $tmp1202 = *(&local51);
frost$core$Int $tmp1203 = (frost$core$Int) {1u};
int64_t $tmp1204 = $tmp1202.value;
int64_t $tmp1205 = $tmp1203.value;
int64_t $tmp1206 = $tmp1204 + $tmp1205;
frost$core$Int $tmp1207 = (frost$core$Int) {$tmp1206};
*(&local51) = $tmp1207;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:360
frost$core$String* $tmp1208 = *(&local77);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$String* $tmp1209 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1208, &$s1210);
frost$core$Int $tmp1211 = *(&local78);
frost$core$Int$wrapper* $tmp1212;
$tmp1212 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1212->value = $tmp1211;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1214 $tmp1213 = ($fn1214) ((frost$core$Object*) $tmp1212)->$class->vtable[0];
frost$core$String* $tmp1215 = $tmp1213(((frost$core$Object*) $tmp1212));
frost$core$String* $tmp1216 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1209, $tmp1215);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$String* $tmp1217 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1216, &$s1218);
frost$core$Int $tmp1219 = *(&local79);
frost$core$Int$wrapper* $tmp1220;
$tmp1220 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1220->value = $tmp1219;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1222 $tmp1221 = ($fn1222) ((frost$core$Object*) $tmp1220)->$class->vtable[0];
frost$core$String* $tmp1223 = $tmp1221(((frost$core$Object*) $tmp1220));
frost$core$String* $tmp1224 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1217, $tmp1223);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
frost$core$String* $tmp1225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1224, &$s1226);
frost$core$String* $tmp1227 = *(&local80);
frost$core$String* $tmp1228 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1225, $tmp1227);
frost$core$String* $tmp1229 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1228, &$s1230);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:360:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1229);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1231);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1229));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1224));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1220));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1217));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1216));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1209));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1208));
frost$core$String* $tmp1232 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local80) = ((frost$core$String*) NULL);
frost$core$String* $tmp1233 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
*(&local77) = ((frost$core$String*) NULL);
goto block222;
block222:;
org$frostlang$frostc$Compiler$Message* $tmp1234 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
*(&local72) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block217;
block219:;
org$frostlang$frostc$Compiler* $tmp1235 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
*(&local62) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1236 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1236));
*(&local61) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1237 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1237));
*(&local60) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1238 = *(&local52);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
*(&local52) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:365
frost$core$Int $tmp1239 = *(&local51);
frost$core$Int $tmp1240 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1241 = $tmp1239.value;
int64_t $tmp1242 = $tmp1240.value;
bool $tmp1243 = $tmp1241 == $tmp1242;
frost$core$Bit $tmp1244 = (frost$core$Bit) {$tmp1243};
bool $tmp1245 = $tmp1244.value;
if ($tmp1245) goto block238; else goto block240;
block238:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:367
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:367:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1246);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1247);
goto block239;
block240:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
frost$core$Int $tmp1248 = *(&local51);
frost$core$Int $tmp1249 = (frost$core$Int) {0u};
int64_t $tmp1250 = $tmp1248.value;
int64_t $tmp1251 = $tmp1249.value;
bool $tmp1252 = $tmp1250 > $tmp1251;
frost$core$Bit $tmp1253 = (frost$core$Bit) {$tmp1252};
bool $tmp1254 = $tmp1253.value;
if ($tmp1254) goto block244; else goto block245;
block244:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:371
frost$core$Int $tmp1255 = *(&local51);
frost$core$String* $tmp1256 = frost$core$Int$get_asString$R$frost$core$String($tmp1255);
frost$core$String* $tmp1257 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1256, &$s1258);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:371:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1257);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1259);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1257));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
goto block245;
block245:;
goto block239;
block239:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
frost$core$Int $tmp1260 = *(&local50);
frost$core$Int $tmp1261 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:373:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1262 = $tmp1260.value;
int64_t $tmp1263 = $tmp1261.value;
bool $tmp1264 = $tmp1262 == $tmp1263;
frost$core$Bit $tmp1265 = (frost$core$Bit) {$tmp1264};
bool $tmp1266 = $tmp1265.value;
if ($tmp1266) goto block248; else goto block250;
block248:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:374
org$frostlang$frostc$Main$Format$nullable $tmp1267 = *(&local6);
frost$core$Int $tmp1268 = ((org$frostlang$frostc$Main$Format) $tmp1267.value).$rawValue;
frost$core$Int $tmp1269 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:375:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269.value;
bool $tmp1272 = $tmp1270 == $tmp1271;
frost$core$Bit $tmp1273 = (frost$core$Bit) {$tmp1272};
bool $tmp1274 = $tmp1273.value;
if ($tmp1274) goto block253; else goto block254;
block253:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:376
frost$io$File* $tmp1275 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:376:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1276 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1275, &$s1277);
frost$core$String** $tmp1278 = &$tmp1276->path;
frost$core$String* $tmp1279 = *$tmp1278;
frost$core$String* $tmp1280 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1279);
*(&local82) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$String* $tmp1281 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1281));
*(&local82) = $tmp1280;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1280));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1282 = *(&local82);
frost$core$Bit $tmp1283 = (frost$core$Bit) {$tmp1282 == NULL};
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block258; else goto block259;
block258:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1285 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1285));
*(&local82) = ((frost$core$String*) NULL);
*(&local81) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block257;
block259:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1286 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1287 = *(&local82);
frost$io$File$init$frost$core$String($tmp1286, $tmp1287);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
frost$core$String* $tmp1288 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1288));
*(&local82) = ((frost$core$String*) NULL);
*(&local81) = $tmp1286;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1286));
goto block257;
block257:;
frost$io$File* $tmp1289 = *(&local81);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1290 = frost$io$File$get_name$R$frost$core$String($tmp1275);
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
frost$core$String* $tmp1291 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1291));
*(&local84) = $tmp1290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1290));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1292 = *(&local84);
frost$core$String$Index$nullable $tmp1293 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1292, &$s1294);
*(&local85) = $tmp1293;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1295 = *(&local85);
frost$core$Bit $tmp1296 = (frost$core$Bit) {!$tmp1295.nonnull};
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block261; else goto block262;
block261:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1298 = *(&local84);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$String* $tmp1299 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = $tmp1298;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
goto block260;
block262:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1300 = *(&local84);
frost$core$String$Index$nullable $tmp1301 = *(&local85);
frost$core$Bit $tmp1302 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1303 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1301, $tmp1302);
frost$core$String* $tmp1304 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1300, $tmp1303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$String* $tmp1305 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1305));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = $tmp1304;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
goto block260;
block260:;
frost$core$String* $tmp1306 = *(&local83);
frost$core$String* $tmp1307 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1306, &$s1308);
frost$io$File* $tmp1309 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1289, $tmp1307);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
frost$core$String* $tmp1310 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1310));
*(&local83) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1289));
frost$io$File* $tmp1311 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1311));
*(&local81) = ((frost$io$File*) NULL);
frost$io$File* $tmp1312 = *(&local3);
frost$core$Bit $tmp1313 = *(&local8);
frost$io$File* $tmp1314 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1309, $tmp1312, $tmp1313);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
goto block252;
block254:;
frost$core$Int $tmp1315 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:378:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1316 = $tmp1268.value;
int64_t $tmp1317 = $tmp1315.value;
bool $tmp1318 = $tmp1316 == $tmp1317;
frost$core$Bit $tmp1319 = (frost$core$Bit) {$tmp1318};
bool $tmp1320 = $tmp1319.value;
if ($tmp1320) goto block263; else goto block252;
block263:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:379
frost$io$File* $tmp1321 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:379:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1322 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1321, &$s1323);
frost$core$String** $tmp1324 = &$tmp1322->path;
frost$core$String* $tmp1325 = *$tmp1324;
frost$core$String* $tmp1326 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1325);
*(&local87) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$String* $tmp1327 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
*(&local87) = $tmp1326;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1328 = *(&local87);
frost$core$Bit $tmp1329 = (frost$core$Bit) {$tmp1328 == NULL};
bool $tmp1330 = $tmp1329.value;
if ($tmp1330) goto block267; else goto block268;
block267:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1331 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1331));
*(&local87) = ((frost$core$String*) NULL);
*(&local86) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block266;
block268:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1332 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1333 = *(&local87);
frost$io$File$init$frost$core$String($tmp1332, $tmp1333);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$String* $tmp1334 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1334));
*(&local87) = ((frost$core$String*) NULL);
*(&local86) = $tmp1332;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
goto block266;
block266:;
frost$io$File* $tmp1335 = *(&local86);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1336 = frost$io$File$get_name$R$frost$core$String($tmp1321);
*(&local89) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
frost$core$String* $tmp1337 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
*(&local89) = $tmp1336;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1336));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1338 = *(&local89);
frost$core$String$Index$nullable $tmp1339 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1338, &$s1340);
*(&local90) = $tmp1339;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1341 = *(&local90);
frost$core$Bit $tmp1342 = (frost$core$Bit) {!$tmp1341.nonnull};
bool $tmp1343 = $tmp1342.value;
if ($tmp1343) goto block270; else goto block271;
block270:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1344 = *(&local89);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$String* $tmp1345 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = $tmp1344;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
goto block269;
block271:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1346 = *(&local89);
frost$core$String$Index$nullable $tmp1347 = *(&local90);
frost$core$Bit $tmp1348 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1349 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1347, $tmp1348);
frost$core$String* $tmp1350 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1346, $tmp1349);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$String* $tmp1351 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1351));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = $tmp1350;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
goto block269;
block269:;
frost$core$String* $tmp1352 = *(&local88);
frost$core$String* $tmp1353 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1352, &$s1354);
frost$io$File* $tmp1355 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1335, $tmp1353);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
frost$core$String* $tmp1356 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local88) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1335));
frost$io$File* $tmp1357 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1357));
*(&local86) = ((frost$io$File*) NULL);
frost$io$File* $tmp1358 = *(&local3);
frost$core$Bit $tmp1359 = *(&local8);
frost$io$File* $tmp1360 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1355, $tmp1358, $tmp1359);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1360));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
goto block252;
block252:;
goto block249;
block250:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:384
frost$core$Int $tmp1361 = *(&local50);
frost$core$Int $tmp1362 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:384:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1363 = $tmp1361.value;
int64_t $tmp1364 = $tmp1362.value;
bool $tmp1365 = $tmp1363 == $tmp1364;
frost$core$Bit $tmp1366 = (frost$core$Bit) {$tmp1365};
bool $tmp1367 = $tmp1366.value;
if ($tmp1367) goto block272; else goto block274;
block272:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:386
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:386:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1368);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1369);
goto block273;
block274:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:390
frost$core$Int $tmp1370 = *(&local50);
frost$core$String* $tmp1371 = frost$core$Int$get_asString$R$frost$core$String($tmp1370);
frost$core$String* $tmp1372 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1371, &$s1373);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:390:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1372);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1374);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1372));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
goto block273;
block273:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:392
frost$core$Int $tmp1375 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1375);
goto block249;
block249:;
frost$io$File* $tmp1376 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1376));
*(&local39) = ((frost$io$File*) NULL);
frost$core$String* $tmp1377 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1377));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1378 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1379 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1380 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1380));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1381 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1381));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
void frostMain(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:398
ITable* $tmp1382 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1382->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1382 = $tmp1382->next;
}
$fn1384 $tmp1383 = $tmp1382->methods[0];
frost$core$Int $tmp1385 = $tmp1383(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1386 = (frost$core$Int) {1u};
int64_t $tmp1387 = $tmp1385.value;
int64_t $tmp1388 = $tmp1386.value;
bool $tmp1389 = $tmp1387 > $tmp1388;
frost$core$Bit $tmp1390 = (frost$core$Bit) {$tmp1389};
bool $tmp1391 = $tmp1390.value;
if ($tmp1391) goto block3; else goto block2;
block3:;
frost$core$Int $tmp1392 = (frost$core$Int) {1u};
ITable* $tmp1393 = param0->$class->itable;
while ($tmp1393->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1393 = $tmp1393->next;
}
$fn1395 $tmp1394 = $tmp1393->methods[0];
frost$core$Object* $tmp1396 = $tmp1394(param0, $tmp1392);
frost$core$Bit $tmp1397 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1396), &$s1398);
bool $tmp1399 = $tmp1397.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1396);
if ($tmp1399) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:399
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:400
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1400 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1400);
frost$core$Int $tmp1401 = (frost$core$Int) {1u};
frost$core$Bit $tmp1402 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1403 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1401, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1402);
ITable* $tmp1404 = param0->$class->itable;
while ($tmp1404->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1404 = $tmp1404->next;
}
$fn1406 $tmp1405 = $tmp1404->methods[2];
frost$collections$ListView* $tmp1407 = $tmp1405(param0, $tmp1403);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1400, $tmp1407);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1400));
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:403
ITable* $tmp1408 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1408->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
frost$core$Int $tmp1411 = $tmp1409(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1412 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:403:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1413 = $tmp1411.value;
int64_t $tmp1414 = $tmp1412.value;
bool $tmp1415 = $tmp1413 == $tmp1414;
frost$core$Bit $tmp1416 = (frost$core$Bit) {$tmp1415};
bool $tmp1417 = $tmp1416.value;
if ($tmp1417) goto block8; else goto block7;
block8:;
frost$core$Int $tmp1418 = (frost$core$Int) {1u};
ITable* $tmp1419 = param0->$class->itable;
while ($tmp1419->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1419 = $tmp1419->next;
}
$fn1421 $tmp1420 = $tmp1419->methods[0];
frost$core$Object* $tmp1422 = $tmp1420(param0, $tmp1418);
frost$core$Bit $tmp1423 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1422), &$s1424);
bool $tmp1425 = $tmp1423.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1422);
if ($tmp1425) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:404
FROST_ASSERT(16 == sizeof(org$frostlang$frostc$Bench));
org$frostlang$frostc$Bench* $tmp1426 = (org$frostlang$frostc$Bench*) frostObjectAlloc(16, (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init($tmp1426);
$fn1428 $tmp1427 = ($fn1428) $tmp1426->$class->vtable[4];
$tmp1427($tmp1426);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:405
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:407
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1429 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1429);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1429, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1430 = &param0->clang;
frost$io$File* $tmp1431 = *$tmp1430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$io$File** $tmp1432 = &param0->frostHome;
frost$io$File* $tmp1433 = *$tmp1432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
return;

}

