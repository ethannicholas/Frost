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
typedef frost$core$Bit (*$fn797)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn895)(frost$core$Object*);
typedef frost$core$String* (*$fn937)(frost$core$Object*);
typedef frost$core$Bit (*$fn972)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn992)(frost$collections$CollectionView*);
typedef void (*$fn1010)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1030)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1034)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1039)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1047)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1051)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1056)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1067)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1071)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1076)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1086)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1090)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1095)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1106)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1110)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1115)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1126)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1140)(frost$collections$CollectionView*);
typedef void (*$fn1155)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn1204)(frost$core$Object*);
typedef frost$core$String* (*$fn1212)(frost$core$Object*);
typedef frost$core$String* (*$fn1252)(frost$core$Object*);
typedef frost$core$String* (*$fn1260)(frost$core$Object*);
typedef frost$core$Int (*$fn1460)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1471)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn1482)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn1486)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1497)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn1504)(org$frostlang$frostc$Bench*);

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
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x77\x69\x74\x68\x45\x78\x74\x65\x6e\x73\x69\x6f\x6e\x28\x65\x78\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 98, 2059098135272477139, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s768 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x77\x69\x74\x68\x45\x78\x74\x65\x6e\x73\x69\x6f\x6e\x28\x65\x78\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 98, 2059098135272477139, NULL };
static frost$core$String $s851 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s868 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s978 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1000 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s1001 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1024 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s1025 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1208 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1216 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s1220 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1221 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1256 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s1268 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1269 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1284 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s1285 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s1297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1315 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x77\x69\x74\x68\x45\x78\x74\x65\x6e\x73\x69\x6f\x6e\x28\x65\x78\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 98, 2059098135272477139, NULL };
static frost$core$String $s1334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1351 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1365 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1396 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x6c\x65\x2e\x66\x72\x6f\x73\x74", 10, 1666587044368153811, NULL };
static frost$core$String $s1397 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2e\x77\x69\x74\x68\x45\x78\x74\x65\x6e\x73\x69\x6f\x6e\x28\x65\x78\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 98, 2059098135272477139, NULL };
static frost$core$String $s1399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1430 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1444 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s1445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s1450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1474 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s1500 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

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
frost$io$File* local45 = NULL;
frost$core$String* local46 = NULL;
frost$core$String* local47 = NULL;
frost$core$String* local48 = NULL;
frost$core$String$Index$nullable local49;
org$frostlang$frostc$Main$Format local50;
org$frostlang$frostc$Main$Format local51;
frost$core$Int local52;
frost$core$Int local53;
org$frostlang$frostc$CodeGenerator* local54 = NULL;
frost$core$Error* local55 = NULL;
frost$io$File* local56 = NULL;
frost$core$String* local57 = NULL;
frost$io$File* local58 = NULL;
frost$core$String* local59 = NULL;
frost$core$String* local60 = NULL;
frost$core$String* local61 = NULL;
frost$core$String$Index$nullable local62;
frost$core$Error* local63 = NULL;
org$frostlang$frostc$Compiler$Settings* local64 = NULL;
frost$threads$MessageQueue* local65 = NULL;
org$frostlang$frostc$Compiler* local66 = NULL;
org$frostlang$frostc$Main$Format local67;
org$frostlang$frostc$Main$Format local68;
frost$io$File* local69 = NULL;
org$frostlang$frostc$ClassDecl* local70 = NULL;
org$frostlang$frostc$ClassDecl* local71 = NULL;
org$frostlang$frostc$ClassDecl* local72 = NULL;
frost$io$File* local73 = NULL;
org$frostlang$frostc$ClassDecl* local74 = NULL;
frost$threads$ScopedLock* local75 = NULL;
org$frostlang$frostc$Compiler$Message* local76 = NULL;
frost$core$String* local77 = NULL;
frost$core$Int local78;
frost$core$Int local79;
frost$core$String* local80 = NULL;
frost$core$String* local81 = NULL;
frost$core$Int local82;
frost$core$Int local83;
frost$core$String* local84 = NULL;
frost$io$File* local85 = NULL;
frost$core$String* local86 = NULL;
frost$io$File* local87 = NULL;
frost$core$String* local88 = NULL;
frost$core$String* local89 = NULL;
frost$core$String* local90 = NULL;
frost$core$String$Index$nullable local91;
frost$io$File* local92 = NULL;
frost$core$String* local93 = NULL;
frost$io$File* local94 = NULL;
frost$core$String* local95 = NULL;
frost$core$String* local96 = NULL;
frost$core$String* local97 = NULL;
frost$core$String$Index$nullable local98;
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
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:183:10
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
if ($tmp739) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp740 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local44) = ((frost$core$String*) NULL);
*(&local43) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block135;
block137:;
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
goto block135;
block135:;
frost$io$File* $tmp744 = *(&local43);
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744 != NULL};
bool $tmp746 = $tmp745.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
if ($tmp746) goto block133; else goto block134;
block134:;
frost$core$Int $tmp747 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s748, $tmp747, &$s749);
abort(); // unreachable
block133:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:186
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:186:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp750 = frost$io$File$resolve$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp729), &$s751);
frost$core$String** $tmp752 = &$tmp750->path;
frost$core$String* $tmp753 = *$tmp752;
frost$core$String* $tmp754 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp753);
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$String* $tmp755 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local46) = $tmp754;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp756 = *(&local46);
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756 == NULL};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp759 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block138;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp760 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp761 = *(&local46);
frost$io$File$init$frost$core$String($tmp760, $tmp761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
frost$core$String* $tmp762 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = $tmp760;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
goto block138;
block138:;
frost$io$File* $tmp763 = *(&local45);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:186:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp764 = frost$io$File$get_name$R$frost$core$String(((frost$io$File*) $tmp729));
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
frost$core$String* $tmp765 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
*(&local48) = $tmp764;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp766 = *(&local48);
frost$core$String$Index$nullable $tmp767 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp766, &$s768);
*(&local49) = $tmp767;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp769 = *(&local49);
frost$core$Bit $tmp770 = (frost$core$Bit) {!$tmp769.nonnull};
bool $tmp771 = $tmp770.value;
if ($tmp771) goto block142; else goto block143;
block142:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp772 = *(&local48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
frost$core$String* $tmp773 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp772;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
goto block141;
block143:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp774 = *(&local48);
frost$core$String$Index$nullable $tmp775 = *(&local49);
frost$core$Bit $tmp776 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp777 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp775, $tmp776);
frost$core$String* $tmp778 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp774, $tmp777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
frost$core$String* $tmp779 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp778;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
goto block141;
block141:;
frost$core$String* $tmp780 = *(&local47);
frost$core$String* $tmp781 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp780, $tmp730);
frost$io$File* $tmp782 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp763, $tmp781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$core$String* $tmp783 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
frost$io$File* $tmp784 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$io$File* $tmp785 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local3) = $tmp782;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$core$Frost$unref$frost$core$Object$Q($tmp729);
frost$core$String* $tmp786 = *(&local42);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp786));
*(&local42) = ((frost$core$String*) NULL);
goto block107;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
org$frostlang$frostc$Main$Format$nullable $tmp787 = *(&local6);
frost$core$Equatable* $tmp788;
if ($tmp787.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp789;
    $tmp789 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp789->value = ((org$frostlang$frostc$Main$Format) $tmp787.value);
    $tmp788 = ((frost$core$Equatable*) $tmp789);
}
else {
    $tmp788 = NULL;
}
frost$core$Int $tmp790 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:282:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp791 = &(&local51)->$rawValue;
*$tmp791 = $tmp790;
org$frostlang$frostc$Main$Format $tmp792 = *(&local51);
*(&local50) = $tmp792;
org$frostlang$frostc$Main$Format $tmp793 = *(&local50);
org$frostlang$frostc$Main$Format$wrapper* $tmp794;
$tmp794 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp794->value = $tmp793;
ITable* $tmp795 = $tmp788->$class->itable;
while ($tmp795->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp795 = $tmp795->next;
}
$fn797 $tmp796 = $tmp795->methods[0];
frost$core$Bit $tmp798 = $tmp796($tmp788, ((frost$core$Equatable*) $tmp794));
bool $tmp799 = $tmp798.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp794)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
if ($tmp799) goto block144; else goto block146;
block144:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:283
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:283:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s800);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s801);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:284
frost$core$Int $tmp802 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp802);
goto block145;
block146:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:287
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:287:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s803);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s804);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:289
frost$core$Int $tmp805 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp805);
goto block145;
block145:;
goto block107;
block107:;
goto block105;
block105:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:292
frost$core$Int $tmp806 = (frost$core$Int) {0u};
*(&local52) = $tmp806;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:293
frost$core$Int $tmp807 = (frost$core$Int) {0u};
*(&local53) = $tmp807;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:296
org$frostlang$frostc$Main$Format$nullable $tmp808 = *(&local6);
frost$core$Int $tmp809 = ((org$frostlang$frostc$Main$Format) $tmp808.value).$rawValue;
frost$core$Int $tmp810 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:297:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp811 = $tmp809.value;
int64_t $tmp812 = $tmp810.value;
bool $tmp813 = $tmp811 == $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block153; else goto block154;
block154:;
frost$core$Int $tmp816 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:297:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp817 = $tmp809.value;
int64_t $tmp818 = $tmp816.value;
bool $tmp819 = $tmp817 == $tmp818;
frost$core$Bit $tmp820 = (frost$core$Bit) {$tmp819};
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block153; else goto block156;
block156:;
frost$core$Int $tmp822 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:297:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp823 = $tmp809.value;
int64_t $tmp824 = $tmp822.value;
bool $tmp825 = $tmp823 == $tmp824;
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825};
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block153; else goto block158;
block153:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:298
*(&local55) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:299
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp828 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp829 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp830 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:300:70
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:183:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp831 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp830, &$s832);
frost$core$String** $tmp833 = &$tmp831->path;
frost$core$String* $tmp834 = *$tmp833;
frost$core$String* $tmp835 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp834);
*(&local57) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$String* $tmp836 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local57) = $tmp835;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp837 = *(&local57);
frost$core$Bit $tmp838 = (frost$core$Bit) {$tmp837 == NULL};
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block166; else goto block167;
block166:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp840 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block165;
block167:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp841 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp842 = *(&local57);
frost$io$File$init$frost$core$String($tmp841, $tmp842);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
frost$core$String* $tmp843 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = $tmp841;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
goto block165;
block165:;
frost$io$File* $tmp844 = *(&local56);
frost$core$Bit $tmp845 = (frost$core$Bit) {$tmp844 != NULL};
bool $tmp846 = $tmp845.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
if ($tmp846) goto block163; else goto block164;
block164:;
frost$core$Int $tmp847 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s848, $tmp847, &$s849);
abort(); // unreachable
block163:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:186
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:186:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp850 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp830, &$s851);
frost$core$String** $tmp852 = &$tmp850->path;
frost$core$String* $tmp853 = *$tmp852;
frost$core$String* $tmp854 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp853);
*(&local59) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$String* $tmp855 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
*(&local59) = $tmp854;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp856 = *(&local59);
frost$core$Bit $tmp857 = (frost$core$Bit) {$tmp856 == NULL};
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block169; else goto block170;
block169:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp859 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block168;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp860 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp861 = *(&local59);
frost$io$File$init$frost$core$String($tmp860, $tmp861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$String* $tmp862 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = $tmp860;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
goto block168;
block168:;
frost$io$File* $tmp863 = *(&local58);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:186:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp864 = frost$io$File$get_name$R$frost$core$String($tmp830);
*(&local61) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
frost$core$String* $tmp865 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local61) = $tmp864;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp866 = *(&local61);
frost$core$String$Index$nullable $tmp867 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp866, &$s868);
*(&local62) = $tmp867;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp869 = *(&local62);
frost$core$Bit $tmp870 = (frost$core$Bit) {!$tmp869.nonnull};
bool $tmp871 = $tmp870.value;
if ($tmp871) goto block172; else goto block173;
block172:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp872 = *(&local61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
frost$core$String* $tmp873 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
*(&local61) = ((frost$core$String*) NULL);
*(&local60) = $tmp872;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
goto block171;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp874 = *(&local61);
frost$core$String$Index$nullable $tmp875 = *(&local62);
frost$core$Bit $tmp876 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp877 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp875, $tmp876);
frost$core$String* $tmp878 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp874, $tmp877);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
frost$core$String* $tmp879 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
*(&local61) = ((frost$core$String*) NULL);
*(&local60) = $tmp878;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
goto block171;
block171:;
frost$core$String* $tmp880 = *(&local60);
frost$core$String* $tmp881 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp880, &$s882);
frost$io$File* $tmp883 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp863, $tmp881);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
frost$core$String* $tmp884 = *(&local60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
*(&local60) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$io$File* $tmp885 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
*(&local58) = ((frost$io$File*) NULL);
frost$core$Maybe* $tmp886 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp883);
frost$core$Int* $tmp887 = &$tmp886->$rawValue;
frost$core$Int $tmp888 = *$tmp887;
int64_t $tmp889 = $tmp888.value;
bool $tmp890 = $tmp889 == 0u;
if ($tmp890) goto block174; else goto block175;
block175:;
frost$core$Error** $tmp891 = (frost$core$Error**) ($tmp886->$data + 0);
frost$core$Error* $tmp892 = *$tmp891;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
*(&local55) = $tmp892;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:303
frost$core$Error* $tmp893 = *(&local55);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:303:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn895 $tmp894 = ($fn895) ((frost$core$Object*) $tmp893)->$class->vtable[0];
frost$core$String* $tmp896 = $tmp894(((frost$core$Object*) $tmp893));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp896);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:304
frost$core$Int $tmp897 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp897);
goto block161;
block174:;
frost$core$Object** $tmp898 = (frost$core$Object**) ($tmp886->$data + 0);
frost$core$Object* $tmp899 = *$tmp898;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp828, $tmp829, ((frost$io$OutputStream*) $tmp899));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp828)));
org$frostlang$frostc$CodeGenerator* $tmp900 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp828);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp883));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
goto block161;
block161:;
frost$core$Error* $tmp901 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
*(&local55) = ((frost$core$Error*) NULL);
goto block152;
block158:;
frost$core$Int $tmp902 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:307:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp903 = $tmp809.value;
int64_t $tmp904 = $tmp902.value;
bool $tmp905 = $tmp903 == $tmp904;
frost$core$Bit $tmp906 = (frost$core$Bit) {$tmp905};
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block178; else goto block179;
block178:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:308
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp908 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp909 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp908, $tmp909);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp908)));
org$frostlang$frostc$CodeGenerator* $tmp910 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp908);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
goto block152;
block179:;
frost$core$Int $tmp911 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:310:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp912 = $tmp809.value;
int64_t $tmp913 = $tmp911.value;
bool $tmp914 = $tmp912 == $tmp913;
frost$core$Bit $tmp915 = (frost$core$Bit) {$tmp914};
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block181; else goto block182;
block181:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:311
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp917 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp918 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp917, $tmp918);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp917)));
org$frostlang$frostc$CodeGenerator* $tmp919 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp917);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp917));
goto block152;
block182:;
frost$core$Int $tmp920 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:313:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp921 = $tmp809.value;
int64_t $tmp922 = $tmp920.value;
bool $tmp923 = $tmp921 == $tmp922;
frost$core$Bit $tmp924 = (frost$core$Bit) {$tmp923};
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block184; else goto block185;
block184:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:314
*(&local63) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:315
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
org$frostlang$frostc$StubCodeGenerator* $tmp926 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp927 = *(&local3);
frost$core$Maybe* $tmp928 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp927);
frost$core$Int* $tmp929 = &$tmp928->$rawValue;
frost$core$Int $tmp930 = *$tmp929;
int64_t $tmp931 = $tmp930.value;
bool $tmp932 = $tmp931 == 0u;
if ($tmp932) goto block189; else goto block190;
block190:;
frost$core$Error** $tmp933 = (frost$core$Error**) ($tmp928->$data + 0);
frost$core$Error* $tmp934 = *$tmp933;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local63) = $tmp934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:318
frost$core$Error* $tmp935 = *(&local63);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:318:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn937 $tmp936 = ($fn937) ((frost$core$Object*) $tmp935)->$class->vtable[0];
frost$core$String* $tmp938 = $tmp936(((frost$core$Object*) $tmp935));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp938);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp938));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:319
frost$core$Int $tmp939 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp939);
goto block188;
block189:;
frost$core$Object** $tmp940 = (frost$core$Object**) ($tmp928->$data + 0);
frost$core$Object* $tmp941 = *$tmp940;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp926, ((frost$io$OutputStream*) $tmp941));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp926)));
org$frostlang$frostc$CodeGenerator* $tmp942 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp926);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
goto block188;
block188:;
frost$core$Error* $tmp943 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
*(&local63) = ((frost$core$Error*) NULL);
goto block152;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:323
frost$core$Int $tmp944 = (frost$core$Int) {323u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s945, $tmp944);
abort(); // unreachable
block152:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:326
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp946 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp947 = &param0->frostHome;
frost$io$File* $tmp948 = *$tmp947;
frost$collections$Array* $tmp949 = *(&local2);
frost$core$Int $tmp950 = *(&local4);
frost$core$Int $tmp951 = *(&local5);
frost$core$Bit* $tmp952 = &param0->debug;
frost$core$Bit $tmp953 = *$tmp952;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit($tmp946, $tmp948, ((frost$collections$ListView*) $tmp949), $tmp950, $tmp951, $tmp953);
*(&local64) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
org$frostlang$frostc$Compiler$Settings* $tmp954 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
*(&local64) = $tmp946;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:328
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp955 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp955);
*(&local65) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
frost$threads$MessageQueue* $tmp956 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
*(&local65) = $tmp955;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:329
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp957 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp958 = *(&local65);
org$frostlang$frostc$CodeGenerator* $tmp959 = *(&local54);
org$frostlang$frostc$Compiler$Settings* $tmp960 = *(&local64);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp957, $tmp958, $tmp959, $tmp960);
*(&local66) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
org$frostlang$frostc$Compiler* $tmp961 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
*(&local66) = $tmp957;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
org$frostlang$frostc$Main$Format$nullable $tmp962 = *(&local6);
frost$core$Equatable* $tmp963;
if ($tmp962.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp964;
    $tmp964 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp964->value = ((org$frostlang$frostc$Main$Format) $tmp962.value);
    $tmp963 = ((frost$core$Equatable*) $tmp964);
}
else {
    $tmp963 = NULL;
}
frost$core$Int $tmp965 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:330:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp966 = &(&local68)->$rawValue;
*$tmp966 = $tmp965;
org$frostlang$frostc$Main$Format $tmp967 = *(&local68);
*(&local67) = $tmp967;
org$frostlang$frostc$Main$Format $tmp968 = *(&local67);
org$frostlang$frostc$Main$Format$wrapper* $tmp969;
$tmp969 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp969->value = $tmp968;
ITable* $tmp970 = $tmp963->$class->itable;
while ($tmp970->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp970 = $tmp970->next;
}
$fn972 $tmp971 = $tmp970->methods[0];
frost$core$Bit $tmp973 = $tmp971($tmp963, ((frost$core$Equatable*) $tmp969));
bool $tmp974 = $tmp973.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp969)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
if ($tmp974) goto block193; else goto block194;
block193:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:331
frost$core$String* $tmp975 = *(&local7);
frost$core$Bit $tmp976 = (frost$core$Bit) {$tmp975 == NULL};
bool $tmp977 = $tmp976.value;
if ($tmp977) goto block196; else goto block197;
block196:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:332
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s978));
frost$core$String* $tmp979 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
*(&local7) = &$s978;
goto block197;
block197:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:334
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$HTMLProcessor));
org$frostlang$frostc$HTMLProcessor* $tmp980 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$Compiler* $tmp981 = *(&local66);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler($tmp980, $tmp981);
frost$collections$Array* $tmp982 = *(&local1);
frost$core$Int $tmp983 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:334:56
frost$core$Int $tmp984 = (frost$core$Int) {0u};
int64_t $tmp985 = $tmp983.value;
int64_t $tmp986 = $tmp984.value;
bool $tmp987 = $tmp985 >= $tmp986;
frost$core$Bit $tmp988 = (frost$core$Bit) {$tmp987};
bool $tmp989 = $tmp988.value;
if ($tmp989) goto block201; else goto block200;
block201:;
ITable* $tmp990 = ((frost$collections$CollectionView*) $tmp982)->$class->itable;
while ($tmp990->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp990 = $tmp990->next;
}
$fn992 $tmp991 = $tmp990->methods[0];
frost$core$Int $tmp993 = $tmp991(((frost$collections$CollectionView*) $tmp982));
int64_t $tmp994 = $tmp983.value;
int64_t $tmp995 = $tmp993.value;
bool $tmp996 = $tmp994 < $tmp995;
frost$core$Bit $tmp997 = (frost$core$Bit) {$tmp996};
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block199; else goto block200;
block200:;
frost$core$Int $tmp999 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1000, $tmp999, &$s1001);
abort(); // unreachable
block199:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp1002 = &$tmp982->data;
frost$core$Object** $tmp1003 = *$tmp1002;
frost$core$Int64 $tmp1004 = frost$core$Int64$init$frost$core$Int($tmp983);
int64_t $tmp1005 = $tmp1004.value;
frost$core$Object* $tmp1006 = $tmp1003[$tmp1005];
frost$core$Frost$ref$frost$core$Object$Q($tmp1006);
frost$io$File* $tmp1007 = *(&local3);
frost$core$String* $tmp1008 = *(&local7);
$fn1010 $tmp1009 = ($fn1010) $tmp980->$class->vtable[3];
$tmp1009($tmp980, ((frost$io$File*) $tmp1006), $tmp1007, $tmp1008);
frost$core$Frost$unref$frost$core$Object$Q($tmp1006);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp980));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:335
org$frostlang$frostc$Compiler* $tmp1011 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
*(&local66) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1012 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1012));
*(&local65) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1013 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1013));
*(&local64) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1014 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1014));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
frost$io$File* $tmp1015 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1015));
*(&local39) = ((frost$io$File*) NULL);
frost$core$String* $tmp1016 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1016));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1017 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1017));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1018 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1019 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1019));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1020 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1020));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:337
frost$core$String* $tmp1021 = *(&local7);
frost$core$Bit $tmp1022 = (frost$core$Bit) {$tmp1021 != NULL};
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block202; else goto block203;
block202:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:338:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s1024);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s1025);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
frost$core$Int $tmp1026 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1026);
goto block203;
block203:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
frost$collections$Array* $tmp1027 = *(&local1);
ITable* $tmp1028 = ((frost$collections$Iterable*) $tmp1027)->$class->itable;
while ($tmp1028->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1028 = $tmp1028->next;
}
$fn1030 $tmp1029 = $tmp1028->methods[0];
frost$collections$Iterator* $tmp1031 = $tmp1029(((frost$collections$Iterable*) $tmp1027));
goto block206;
block206:;
ITable* $tmp1032 = $tmp1031->$class->itable;
while ($tmp1032->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1032 = $tmp1032->next;
}
$fn1034 $tmp1033 = $tmp1032->methods[0];
frost$core$Bit $tmp1035 = $tmp1033($tmp1031);
bool $tmp1036 = $tmp1035.value;
if ($tmp1036) goto block208; else goto block207;
block207:;
*(&local69) = ((frost$io$File*) NULL);
ITable* $tmp1037 = $tmp1031->$class->itable;
while ($tmp1037->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1037 = $tmp1037->next;
}
$fn1039 $tmp1038 = $tmp1037->methods[1];
frost$core$Object* $tmp1040 = $tmp1038($tmp1031);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1040)));
frost$io$File* $tmp1041 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1041));
*(&local69) = ((frost$io$File*) $tmp1040);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:342
org$frostlang$frostc$Compiler* $tmp1042 = *(&local66);
frost$io$File* $tmp1043 = *(&local69);
frost$collections$ListView* $tmp1044 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp1042, $tmp1043);
ITable* $tmp1045 = ((frost$collections$Iterable*) $tmp1044)->$class->itable;
while ($tmp1045->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1045 = $tmp1045->next;
}
$fn1047 $tmp1046 = $tmp1045->methods[0];
frost$collections$Iterator* $tmp1048 = $tmp1046(((frost$collections$Iterable*) $tmp1044));
goto block209;
block209:;
ITable* $tmp1049 = $tmp1048->$class->itable;
while ($tmp1049->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1049 = $tmp1049->next;
}
$fn1051 $tmp1050 = $tmp1049->methods[0];
frost$core$Bit $tmp1052 = $tmp1050($tmp1048);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block211; else goto block210;
block210:;
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1054 = $tmp1048->$class->itable;
while ($tmp1054->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1054 = $tmp1054->next;
}
$fn1056 $tmp1055 = $tmp1054->methods[1];
frost$core$Object* $tmp1057 = $tmp1055($tmp1048);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1057)));
org$frostlang$frostc$ClassDecl* $tmp1058 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) $tmp1057);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:343
org$frostlang$frostc$Compiler* $tmp1059 = *(&local66);
org$frostlang$frostc$ClassDecl* $tmp1060 = *(&local70);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:343:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5961
frost$core$Bit $tmp1061 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1062 = &$tmp1060->external;
*$tmp1062 = $tmp1061;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5962
frost$collections$Array** $tmp1063 = &$tmp1060->classes;
frost$collections$Array* $tmp1064 = *$tmp1063;
ITable* $tmp1065 = ((frost$collections$Iterable*) $tmp1064)->$class->itable;
while ($tmp1065->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1065 = $tmp1065->next;
}
$fn1067 $tmp1066 = $tmp1065->methods[0];
frost$collections$Iterator* $tmp1068 = $tmp1066(((frost$collections$Iterable*) $tmp1064));
goto block213;
block213:;
ITable* $tmp1069 = $tmp1068->$class->itable;
while ($tmp1069->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1069 = $tmp1069->next;
}
$fn1071 $tmp1070 = $tmp1069->methods[0];
frost$core$Bit $tmp1072 = $tmp1070($tmp1068);
bool $tmp1073 = $tmp1072.value;
if ($tmp1073) goto block215; else goto block214;
block214:;
*(&local71) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1074 = $tmp1068->$class->itable;
while ($tmp1074->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1074 = $tmp1074->next;
}
$fn1076 $tmp1075 = $tmp1074->methods[1];
frost$core$Object* $tmp1077 = $tmp1075($tmp1068);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1077)));
org$frostlang$frostc$ClassDecl* $tmp1078 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1078));
*(&local71) = ((org$frostlang$frostc$ClassDecl*) $tmp1077);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5963
org$frostlang$frostc$ClassDecl* $tmp1079 = *(&local71);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5963:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5961
frost$core$Bit $tmp1080 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1081 = &$tmp1079->external;
*$tmp1081 = $tmp1080;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5962
frost$collections$Array** $tmp1082 = &$tmp1079->classes;
frost$collections$Array* $tmp1083 = *$tmp1082;
ITable* $tmp1084 = ((frost$collections$Iterable*) $tmp1083)->$class->itable;
while ($tmp1084->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1084 = $tmp1084->next;
}
$fn1086 $tmp1085 = $tmp1084->methods[0];
frost$collections$Iterator* $tmp1087 = $tmp1085(((frost$collections$Iterable*) $tmp1083));
goto block217;
block217:;
ITable* $tmp1088 = $tmp1087->$class->itable;
while ($tmp1088->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[0];
frost$core$Bit $tmp1091 = $tmp1089($tmp1087);
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block219; else goto block218;
block218:;
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1093 = $tmp1087->$class->itable;
while ($tmp1093->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1093 = $tmp1093->next;
}
$fn1095 $tmp1094 = $tmp1093->methods[1];
frost$core$Object* $tmp1096 = $tmp1094($tmp1087);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1096)));
org$frostlang$frostc$ClassDecl* $tmp1097 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) $tmp1096);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5963
org$frostlang$frostc$ClassDecl* $tmp1098 = *(&local72);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp1059, $tmp1098);
frost$core$Frost$unref$frost$core$Object$Q($tmp1096);
org$frostlang$frostc$ClassDecl* $tmp1099 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1099));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block217;
block219:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
frost$core$Frost$unref$frost$core$Object$Q($tmp1077);
org$frostlang$frostc$ClassDecl* $tmp1100 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local71) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block213;
block215:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1068));
frost$core$Frost$unref$frost$core$Object$Q($tmp1057);
org$frostlang$frostc$ClassDecl* $tmp1101 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1101));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block209;
block211:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q($tmp1040);
frost$io$File* $tmp1102 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1102));
*(&local69) = ((frost$io$File*) NULL);
goto block206;
block208:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1031));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:346
frost$collections$Array* $tmp1103 = *(&local1);
ITable* $tmp1104 = ((frost$collections$Iterable*) $tmp1103)->$class->itable;
while ($tmp1104->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1104 = $tmp1104->next;
}
$fn1106 $tmp1105 = $tmp1104->methods[0];
frost$collections$Iterator* $tmp1107 = $tmp1105(((frost$collections$Iterable*) $tmp1103));
goto block220;
block220:;
ITable* $tmp1108 = $tmp1107->$class->itable;
while ($tmp1108->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1108 = $tmp1108->next;
}
$fn1110 $tmp1109 = $tmp1108->methods[0];
frost$core$Bit $tmp1111 = $tmp1109($tmp1107);
bool $tmp1112 = $tmp1111.value;
if ($tmp1112) goto block222; else goto block221;
block221:;
*(&local73) = ((frost$io$File*) NULL);
ITable* $tmp1113 = $tmp1107->$class->itable;
while ($tmp1113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1113 = $tmp1113->next;
}
$fn1115 $tmp1114 = $tmp1113->methods[1];
frost$core$Object* $tmp1116 = $tmp1114($tmp1107);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1116)));
frost$io$File* $tmp1117 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1117));
*(&local73) = ((frost$io$File*) $tmp1116);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:347
org$frostlang$frostc$Compiler* $tmp1118 = *(&local66);
frost$io$File* $tmp1119 = *(&local73);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp1118, $tmp1119);
frost$core$Frost$unref$frost$core$Object$Q($tmp1116);
frost$io$File* $tmp1120 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1120));
*(&local73) = ((frost$io$File*) NULL);
goto block220;
block222:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1107));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
org$frostlang$frostc$Compiler* $tmp1121 = *(&local66);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:349:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6196
goto block224;
block224:;
frost$collections$Array** $tmp1122 = &$tmp1121->pendingClasses;
frost$collections$Array* $tmp1123 = *$tmp1122;
ITable* $tmp1124 = ((frost$collections$CollectionView*) $tmp1123)->$class->itable;
while ($tmp1124->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1124 = $tmp1124->next;
}
$fn1126 $tmp1125 = $tmp1124->methods[0];
frost$core$Int $tmp1127 = $tmp1125(((frost$collections$CollectionView*) $tmp1123));
frost$core$Int $tmp1128 = (frost$core$Int) {0u};
int64_t $tmp1129 = $tmp1127.value;
int64_t $tmp1130 = $tmp1128.value;
bool $tmp1131 = $tmp1129 > $tmp1130;
frost$core$Bit $tmp1132 = (frost$core$Bit) {$tmp1131};
bool $tmp1133 = $tmp1132.value;
if ($tmp1133) goto block225; else goto block226;
block225:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6197
frost$collections$Array** $tmp1134 = &$tmp1121->pendingClasses;
frost$collections$Array* $tmp1135 = *$tmp1134;
frost$collections$Array** $tmp1136 = &$tmp1121->pendingClasses;
frost$collections$Array* $tmp1137 = *$tmp1136;
ITable* $tmp1138 = ((frost$collections$CollectionView*) $tmp1137)->$class->itable;
while ($tmp1138->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1138 = $tmp1138->next;
}
$fn1140 $tmp1139 = $tmp1138->methods[0];
frost$core$Int $tmp1141 = $tmp1139(((frost$collections$CollectionView*) $tmp1137));
frost$core$Int $tmp1142 = (frost$core$Int) {1u};
int64_t $tmp1143 = $tmp1141.value;
int64_t $tmp1144 = $tmp1142.value;
int64_t $tmp1145 = $tmp1143 - $tmp1144;
frost$core$Int $tmp1146 = (frost$core$Int) {$tmp1145};
frost$core$Object* $tmp1147 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp1135, $tmp1146);
*(&local74) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1147)));
org$frostlang$frostc$ClassDecl* $tmp1148 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1148));
*(&local74) = ((org$frostlang$frostc$ClassDecl*) $tmp1147);
frost$core$Frost$unref$frost$core$Object$Q($tmp1147);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6198
org$frostlang$frostc$ClassDecl* $tmp1149 = *(&local74);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp1121, $tmp1149);
org$frostlang$frostc$ClassDecl* $tmp1150 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1150));
*(&local74) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block224;
block226:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6200
org$frostlang$frostc$CodeGenerator** $tmp1151 = &$tmp1121->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp1152 = *$tmp1151;
ITable* $tmp1153 = $tmp1152->$class->itable;
while ($tmp1153->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp1153 = $tmp1153->next;
}
$fn1155 $tmp1154 = $tmp1153->methods[5];
$tmp1154($tmp1152);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:350
goto block227;
block227:;
frost$threads$MessageQueue* $tmp1156 = *(&local65);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:350:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1157 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1158 = &$tmp1156->lock;
frost$threads$Lock* $tmp1159 = *$tmp1158;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1157, $tmp1159);
*(&local75) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
frost$threads$ScopedLock* $tmp1160 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
*(&local75) = $tmp1157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1157));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1161 = &$tmp1156->count;
frost$core$Int $tmp1162 = *$tmp1161;
frost$threads$ScopedLock* $tmp1163 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
*(&local75) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1164 = (frost$core$Int) {0u};
int64_t $tmp1165 = $tmp1162.value;
int64_t $tmp1166 = $tmp1164.value;
bool $tmp1167 = $tmp1165 > $tmp1166;
frost$core$Bit $tmp1168 = (frost$core$Bit) {$tmp1167};
bool $tmp1169 = $tmp1168.value;
if ($tmp1169) goto block228; else goto block229;
block228:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:351
frost$threads$MessageQueue* $tmp1170 = *(&local65);
frost$core$Immutable* $tmp1171 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1170);
*(&local76) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp1171)));
org$frostlang$frostc$Compiler$Message* $tmp1172 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1172));
*(&local76) = ((org$frostlang$frostc$Compiler$Message*) $tmp1171);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:353
org$frostlang$frostc$Compiler$Message* $tmp1173 = *(&local76);
frost$core$Int* $tmp1174 = &$tmp1173->$rawValue;
frost$core$Int $tmp1175 = *$tmp1174;
frost$core$Int $tmp1176 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:354:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1177 = $tmp1175.value;
int64_t $tmp1178 = $tmp1176.value;
bool $tmp1179 = $tmp1177 == $tmp1178;
frost$core$Bit $tmp1180 = (frost$core$Bit) {$tmp1179};
bool $tmp1181 = $tmp1180.value;
if ($tmp1181) goto block233; else goto block234;
block233:;
frost$core$String** $tmp1182 = (frost$core$String**) ($tmp1173->$data + 0);
frost$core$String* $tmp1183 = *$tmp1182;
*(&local77) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1183));
frost$core$String* $tmp1184 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1184));
*(&local77) = $tmp1183;
frost$core$Int* $tmp1185 = (frost$core$Int*) ($tmp1173->$data + 8);
frost$core$Int $tmp1186 = *$tmp1185;
*(&local78) = $tmp1186;
frost$core$Int* $tmp1187 = (frost$core$Int*) ($tmp1173->$data + 16);
frost$core$Int $tmp1188 = *$tmp1187;
*(&local79) = $tmp1188;
frost$core$String** $tmp1189 = (frost$core$String**) ($tmp1173->$data + 24);
frost$core$String* $tmp1190 = *$tmp1189;
*(&local80) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$String* $tmp1191 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1191));
*(&local80) = $tmp1190;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:355
frost$core$Int $tmp1192 = *(&local52);
frost$core$Int $tmp1193 = (frost$core$Int) {1u};
int64_t $tmp1194 = $tmp1192.value;
int64_t $tmp1195 = $tmp1193.value;
int64_t $tmp1196 = $tmp1194 + $tmp1195;
frost$core$Int $tmp1197 = (frost$core$Int) {$tmp1196};
*(&local52) = $tmp1197;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:356
frost$core$String* $tmp1198 = *(&local77);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$String* $tmp1199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1198, &$s1200);
frost$core$Int $tmp1201 = *(&local78);
frost$core$Int$wrapper* $tmp1202;
$tmp1202 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1202->value = $tmp1201;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1204 $tmp1203 = ($fn1204) ((frost$core$Object*) $tmp1202)->$class->vtable[0];
frost$core$String* $tmp1205 = $tmp1203(((frost$core$Object*) $tmp1202));
frost$core$String* $tmp1206 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1199, $tmp1205);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1205));
frost$core$String* $tmp1207 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1206, &$s1208);
frost$core$Int $tmp1209 = *(&local79);
frost$core$Int$wrapper* $tmp1210;
$tmp1210 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1210->value = $tmp1209;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:356:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1212 $tmp1211 = ($fn1212) ((frost$core$Object*) $tmp1210)->$class->vtable[0];
frost$core$String* $tmp1213 = $tmp1211(((frost$core$Object*) $tmp1210));
frost$core$String* $tmp1214 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1207, $tmp1213);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1213));
frost$core$String* $tmp1215 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1214, &$s1216);
frost$core$String* $tmp1217 = *(&local80);
frost$core$String* $tmp1218 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1215, $tmp1217);
frost$core$String* $tmp1219 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1218, &$s1220);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:356:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1219);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1215));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1214));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1210));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1207));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1206));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$String* $tmp1222 = *(&local80);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1222));
*(&local80) = ((frost$core$String*) NULL);
frost$core$String* $tmp1223 = *(&local77);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1223));
*(&local77) = ((frost$core$String*) NULL);
goto block232;
block234:;
frost$core$Int $tmp1224 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:358:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1225 = $tmp1175.value;
int64_t $tmp1226 = $tmp1224.value;
bool $tmp1227 = $tmp1225 == $tmp1226;
frost$core$Bit $tmp1228 = (frost$core$Bit) {$tmp1227};
bool $tmp1229 = $tmp1228.value;
if ($tmp1229) goto block241; else goto block232;
block241:;
frost$core$String** $tmp1230 = (frost$core$String**) ($tmp1173->$data + 0);
frost$core$String* $tmp1231 = *$tmp1230;
*(&local81) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1231));
frost$core$String* $tmp1232 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1232));
*(&local81) = $tmp1231;
frost$core$Int* $tmp1233 = (frost$core$Int*) ($tmp1173->$data + 8);
frost$core$Int $tmp1234 = *$tmp1233;
*(&local82) = $tmp1234;
frost$core$Int* $tmp1235 = (frost$core$Int*) ($tmp1173->$data + 16);
frost$core$Int $tmp1236 = *$tmp1235;
*(&local83) = $tmp1236;
frost$core$String** $tmp1237 = (frost$core$String**) ($tmp1173->$data + 24);
frost$core$String* $tmp1238 = *$tmp1237;
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$String* $tmp1239 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1239));
*(&local84) = $tmp1238;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:359
frost$core$Int $tmp1240 = *(&local53);
frost$core$Int $tmp1241 = (frost$core$Int) {1u};
int64_t $tmp1242 = $tmp1240.value;
int64_t $tmp1243 = $tmp1241.value;
int64_t $tmp1244 = $tmp1242 + $tmp1243;
frost$core$Int $tmp1245 = (frost$core$Int) {$tmp1244};
*(&local53) = $tmp1245;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:360
frost$core$String* $tmp1246 = *(&local81);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$String* $tmp1247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1246, &$s1248);
frost$core$Int $tmp1249 = *(&local82);
frost$core$Int$wrapper* $tmp1250;
$tmp1250 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1250->value = $tmp1249;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1252 $tmp1251 = ($fn1252) ((frost$core$Object*) $tmp1250)->$class->vtable[0];
frost$core$String* $tmp1253 = $tmp1251(((frost$core$Object*) $tmp1250));
frost$core$String* $tmp1254 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1247, $tmp1253);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
frost$core$String* $tmp1255 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1254, &$s1256);
frost$core$Int $tmp1257 = *(&local83);
frost$core$Int$wrapper* $tmp1258;
$tmp1258 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1258->value = $tmp1257;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:360:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1260 $tmp1259 = ($fn1260) ((frost$core$Object*) $tmp1258)->$class->vtable[0];
frost$core$String* $tmp1261 = $tmp1259(((frost$core$Object*) $tmp1258));
frost$core$String* $tmp1262 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1255, $tmp1261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1261));
frost$core$String* $tmp1263 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1262, &$s1264);
frost$core$String* $tmp1265 = *(&local84);
frost$core$String* $tmp1266 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1263, $tmp1265);
frost$core$String* $tmp1267 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1266, &$s1268);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:360:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1267);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1269);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1267));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1266));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1263));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1262));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1258));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$String* $tmp1270 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1270));
*(&local84) = ((frost$core$String*) NULL);
frost$core$String* $tmp1271 = *(&local81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1271));
*(&local81) = ((frost$core$String*) NULL);
goto block232;
block232:;
org$frostlang$frostc$Compiler$Message* $tmp1272 = *(&local76);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1272));
*(&local76) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block227;
block229:;
org$frostlang$frostc$Compiler* $tmp1273 = *(&local66);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1273));
*(&local66) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1274 = *(&local65);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
*(&local65) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1275 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
*(&local64) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1276 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1276));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:365
frost$core$Int $tmp1277 = *(&local53);
frost$core$Int $tmp1278 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:365:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1279 = $tmp1277.value;
int64_t $tmp1280 = $tmp1278.value;
bool $tmp1281 = $tmp1279 == $tmp1280;
frost$core$Bit $tmp1282 = (frost$core$Bit) {$tmp1281};
bool $tmp1283 = $tmp1282.value;
if ($tmp1283) goto block248; else goto block250;
block248:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:367
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:367:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1284);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1285);
goto block249;
block250:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:369
frost$core$Int $tmp1286 = *(&local53);
frost$core$Int $tmp1287 = (frost$core$Int) {0u};
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287.value;
bool $tmp1290 = $tmp1288 > $tmp1289;
frost$core$Bit $tmp1291 = (frost$core$Bit) {$tmp1290};
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block254; else goto block255;
block254:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:371
frost$core$Int $tmp1293 = *(&local53);
frost$core$String* $tmp1294 = frost$core$Int$get_asString$R$frost$core$String($tmp1293);
frost$core$String* $tmp1295 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1294, &$s1296);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:371:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1295);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1297);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1295));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
goto block255;
block255:;
goto block249;
block249:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:373
frost$core$Int $tmp1298 = *(&local52);
frost$core$Int $tmp1299 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:373:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1300 = $tmp1298.value;
int64_t $tmp1301 = $tmp1299.value;
bool $tmp1302 = $tmp1300 == $tmp1301;
frost$core$Bit $tmp1303 = (frost$core$Bit) {$tmp1302};
bool $tmp1304 = $tmp1303.value;
if ($tmp1304) goto block258; else goto block260;
block258:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:374
org$frostlang$frostc$Main$Format$nullable $tmp1305 = *(&local6);
frost$core$Int $tmp1306 = ((org$frostlang$frostc$Main$Format) $tmp1305.value).$rawValue;
frost$core$Int $tmp1307 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:375:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1308 = $tmp1306.value;
int64_t $tmp1309 = $tmp1307.value;
bool $tmp1310 = $tmp1308 == $tmp1309;
frost$core$Bit $tmp1311 = (frost$core$Bit) {$tmp1310};
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:376
frost$io$File* $tmp1313 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:376:55
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:183:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1314 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1313, &$s1315);
frost$core$String** $tmp1316 = &$tmp1314->path;
frost$core$String* $tmp1317 = *$tmp1316;
frost$core$String* $tmp1318 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1317);
*(&local86) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$core$String* $tmp1319 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1319));
*(&local86) = $tmp1318;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1318));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1314));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1320 = *(&local86);
frost$core$Bit $tmp1321 = (frost$core$Bit) {$tmp1320 == NULL};
bool $tmp1322 = $tmp1321.value;
if ($tmp1322) goto block270; else goto block271;
block270:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1323 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block269;
block271:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1324 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1325 = *(&local86);
frost$io$File$init$frost$core$String($tmp1324, $tmp1325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
frost$core$String* $tmp1326 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1326));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1324;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
goto block269;
block269:;
frost$io$File* $tmp1327 = *(&local85);
frost$core$Bit $tmp1328 = (frost$core$Bit) {$tmp1327 != NULL};
bool $tmp1329 = $tmp1328.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
if ($tmp1329) goto block267; else goto block268;
block268:;
frost$core$Int $tmp1330 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1331, $tmp1330, &$s1332);
abort(); // unreachable
block267:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:186
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:186:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1333 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1313, &$s1334);
frost$core$String** $tmp1335 = &$tmp1333->path;
frost$core$String* $tmp1336 = *$tmp1335;
frost$core$String* $tmp1337 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1336);
*(&local88) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$String* $tmp1338 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1338));
*(&local88) = $tmp1337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1337));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1333));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1339 = *(&local88);
frost$core$Bit $tmp1340 = (frost$core$Bit) {$tmp1339 == NULL};
bool $tmp1341 = $tmp1340.value;
if ($tmp1341) goto block273; else goto block274;
block273:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1342 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1342));
*(&local88) = ((frost$core$String*) NULL);
*(&local87) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block272;
block274:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1343 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1344 = *(&local88);
frost$io$File$init$frost$core$String($tmp1343, $tmp1344);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
frost$core$String* $tmp1345 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local88) = ((frost$core$String*) NULL);
*(&local87) = $tmp1343;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1343));
goto block272;
block272:;
frost$io$File* $tmp1346 = *(&local87);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:186:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1347 = frost$io$File$get_name$R$frost$core$String($tmp1313);
*(&local90) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
frost$core$String* $tmp1348 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1348));
*(&local90) = $tmp1347;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1347));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1349 = *(&local90);
frost$core$String$Index$nullable $tmp1350 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1349, &$s1351);
*(&local91) = $tmp1350;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1352 = *(&local91);
frost$core$Bit $tmp1353 = (frost$core$Bit) {!$tmp1352.nonnull};
bool $tmp1354 = $tmp1353.value;
if ($tmp1354) goto block276; else goto block277;
block276:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1355 = *(&local90);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
frost$core$String* $tmp1356 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1356));
*(&local90) = ((frost$core$String*) NULL);
*(&local89) = $tmp1355;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
goto block275;
block277:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1357 = *(&local90);
frost$core$String$Index$nullable $tmp1358 = *(&local91);
frost$core$Bit $tmp1359 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1360 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1358, $tmp1359);
frost$core$String* $tmp1361 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1357, $tmp1360);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
frost$core$String* $tmp1362 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
*(&local90) = ((frost$core$String*) NULL);
*(&local89) = $tmp1361;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1361));
goto block275;
block275:;
frost$core$String* $tmp1363 = *(&local89);
frost$core$String* $tmp1364 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1363, &$s1365);
frost$io$File* $tmp1366 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1346, $tmp1364);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1364));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
frost$core$String* $tmp1367 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1367));
*(&local89) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1346));
frost$io$File* $tmp1368 = *(&local87);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
*(&local87) = ((frost$io$File*) NULL);
frost$io$File* $tmp1369 = *(&local3);
frost$core$Bit $tmp1370 = *(&local8);
frost$io$File* $tmp1371 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1366, $tmp1369, $tmp1370);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1366));
goto block262;
block264:;
frost$core$Int $tmp1372 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:378:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1373 = $tmp1306.value;
int64_t $tmp1374 = $tmp1372.value;
bool $tmp1375 = $tmp1373 == $tmp1374;
frost$core$Bit $tmp1376 = (frost$core$Bit) {$tmp1375};
bool $tmp1377 = $tmp1376.value;
if ($tmp1377) goto block278; else goto block262;
block278:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:379
frost$io$File* $tmp1378 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:379:51
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:183:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1379 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1378, &$s1380);
frost$core$String** $tmp1381 = &$tmp1379->path;
frost$core$String* $tmp1382 = *$tmp1381;
frost$core$String* $tmp1383 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1382);
*(&local93) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
frost$core$String* $tmp1384 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1384));
*(&local93) = $tmp1383;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1383));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1379));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1385 = *(&local93);
frost$core$Bit $tmp1386 = (frost$core$Bit) {$tmp1385 == NULL};
bool $tmp1387 = $tmp1386.value;
if ($tmp1387) goto block284; else goto block285;
block284:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1388 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1388));
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block283;
block285:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1389 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1390 = *(&local93);
frost$io$File$init$frost$core$String($tmp1389, $tmp1390);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
frost$core$String* $tmp1391 = *(&local93);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1391));
*(&local93) = ((frost$core$String*) NULL);
*(&local92) = $tmp1389;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
goto block283;
block283:;
frost$io$File* $tmp1392 = *(&local92);
frost$core$Bit $tmp1393 = (frost$core$Bit) {$tmp1392 != NULL};
bool $tmp1394 = $tmp1393.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1392));
if ($tmp1394) goto block281; else goto block282;
block282:;
frost$core$Int $tmp1395 = (frost$core$Int) {184u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s1396, $tmp1395, &$s1397);
abort(); // unreachable
block281:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:186
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:186:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1398 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1378, &$s1399);
frost$core$String** $tmp1400 = &$tmp1398->path;
frost$core$String* $tmp1401 = *$tmp1400;
frost$core$String* $tmp1402 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1401);
*(&local95) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$String* $tmp1403 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1403));
*(&local95) = $tmp1402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1402));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1404 = *(&local95);
frost$core$Bit $tmp1405 = (frost$core$Bit) {$tmp1404 == NULL};
bool $tmp1406 = $tmp1405.value;
if ($tmp1406) goto block287; else goto block288;
block287:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1407 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1407));
*(&local95) = ((frost$core$String*) NULL);
*(&local94) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block286;
block288:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1408 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1409 = *(&local95);
frost$io$File$init$frost$core$String($tmp1408, $tmp1409);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
frost$core$String* $tmp1410 = *(&local95);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1410));
*(&local95) = ((frost$core$String*) NULL);
*(&local94) = $tmp1408;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1408));
goto block286;
block286:;
frost$io$File* $tmp1411 = *(&local94);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:186:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1412 = frost$io$File$get_name$R$frost$core$String($tmp1378);
*(&local97) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
frost$core$String* $tmp1413 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1413));
*(&local97) = $tmp1412;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1412));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1414 = *(&local97);
frost$core$String$Index$nullable $tmp1415 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1414, &$s1416);
*(&local98) = $tmp1415;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1417 = *(&local98);
frost$core$Bit $tmp1418 = (frost$core$Bit) {!$tmp1417.nonnull};
bool $tmp1419 = $tmp1418.value;
if ($tmp1419) goto block290; else goto block291;
block290:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1420 = *(&local97);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
frost$core$String* $tmp1421 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1421));
*(&local97) = ((frost$core$String*) NULL);
*(&local96) = $tmp1420;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1420));
goto block289;
block291:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1422 = *(&local97);
frost$core$String$Index$nullable $tmp1423 = *(&local98);
frost$core$Bit $tmp1424 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1425 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1423, $tmp1424);
frost$core$String* $tmp1426 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1422, $tmp1425);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
frost$core$String* $tmp1427 = *(&local97);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1427));
*(&local97) = ((frost$core$String*) NULL);
*(&local96) = $tmp1426;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1426));
goto block289;
block289:;
frost$core$String* $tmp1428 = *(&local96);
frost$core$String* $tmp1429 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1428, &$s1430);
frost$io$File* $tmp1431 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1411, $tmp1429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1429));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1428));
frost$core$String* $tmp1432 = *(&local96);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1432));
*(&local96) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1411));
frost$io$File* $tmp1433 = *(&local94);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1433));
*(&local94) = ((frost$io$File*) NULL);
frost$io$File* $tmp1434 = *(&local3);
frost$core$Bit $tmp1435 = *(&local8);
frost$io$File* $tmp1436 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1431, $tmp1434, $tmp1435);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1436));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1431));
goto block262;
block262:;
goto block259;
block260:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:384
frost$core$Int $tmp1437 = *(&local52);
frost$core$Int $tmp1438 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:384:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1439 = $tmp1437.value;
int64_t $tmp1440 = $tmp1438.value;
bool $tmp1441 = $tmp1439 == $tmp1440;
frost$core$Bit $tmp1442 = (frost$core$Bit) {$tmp1441};
bool $tmp1443 = $tmp1442.value;
if ($tmp1443) goto block292; else goto block294;
block292:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:386
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:386:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1444);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1445);
goto block293;
block294:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:390
frost$core$Int $tmp1446 = *(&local52);
frost$core$String* $tmp1447 = frost$core$Int$get_asString$R$frost$core$String($tmp1446);
frost$core$String* $tmp1448 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1447, &$s1449);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:390:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1448);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1450);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1448));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
goto block293;
block293:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:392
frost$core$Int $tmp1451 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1451);
goto block259;
block259:;
frost$io$File* $tmp1452 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1452));
*(&local39) = ((frost$io$File*) NULL);
frost$core$String* $tmp1453 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1453));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1454 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1454));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1455 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1455));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1456 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1456));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1457 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1457));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
void frostMain(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:398
ITable* $tmp1458 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1458->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1458 = $tmp1458->next;
}
$fn1460 $tmp1459 = $tmp1458->methods[0];
frost$core$Int $tmp1461 = $tmp1459(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1462 = (frost$core$Int) {1u};
int64_t $tmp1463 = $tmp1461.value;
int64_t $tmp1464 = $tmp1462.value;
bool $tmp1465 = $tmp1463 > $tmp1464;
frost$core$Bit $tmp1466 = (frost$core$Bit) {$tmp1465};
bool $tmp1467 = $tmp1466.value;
if ($tmp1467) goto block3; else goto block2;
block3:;
frost$core$Int $tmp1468 = (frost$core$Int) {1u};
ITable* $tmp1469 = param0->$class->itable;
while ($tmp1469->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1469 = $tmp1469->next;
}
$fn1471 $tmp1470 = $tmp1469->methods[0];
frost$core$Object* $tmp1472 = $tmp1470(param0, $tmp1468);
frost$core$Bit $tmp1473 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1472), &$s1474);
bool $tmp1475 = $tmp1473.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1472);
if ($tmp1475) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:399
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:400
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1476 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1476);
frost$core$Int $tmp1477 = (frost$core$Int) {1u};
frost$core$Bit $tmp1478 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1479 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1477, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1478);
ITable* $tmp1480 = param0->$class->itable;
while ($tmp1480->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1480 = $tmp1480->next;
}
$fn1482 $tmp1481 = $tmp1480->methods[2];
frost$collections$ListView* $tmp1483 = $tmp1481(param0, $tmp1479);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1476, $tmp1483);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1476));
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:403
ITable* $tmp1484 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1484->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1484 = $tmp1484->next;
}
$fn1486 $tmp1485 = $tmp1484->methods[0];
frost$core$Int $tmp1487 = $tmp1485(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1488 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:403:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1489 = $tmp1487.value;
int64_t $tmp1490 = $tmp1488.value;
bool $tmp1491 = $tmp1489 == $tmp1490;
frost$core$Bit $tmp1492 = (frost$core$Bit) {$tmp1491};
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block8; else goto block7;
block8:;
frost$core$Int $tmp1494 = (frost$core$Int) {1u};
ITable* $tmp1495 = param0->$class->itable;
while ($tmp1495->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1495 = $tmp1495->next;
}
$fn1497 $tmp1496 = $tmp1495->methods[0];
frost$core$Object* $tmp1498 = $tmp1496(param0, $tmp1494);
frost$core$Bit $tmp1499 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1498), &$s1500);
bool $tmp1501 = $tmp1499.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1498);
if ($tmp1501) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:404
FROST_ASSERT(16 == sizeof(org$frostlang$frostc$Bench));
org$frostlang$frostc$Bench* $tmp1502 = (org$frostlang$frostc$Bench*) frostObjectAlloc(16, (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init($tmp1502);
$fn1504 $tmp1503 = ($fn1504) $tmp1502->$class->vtable[4];
$tmp1503($tmp1502);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1502));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:405
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:407
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1505 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1505);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1505, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1505));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1506 = &param0->clang;
frost$io$File* $tmp1507 = *$tmp1506;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1507));
frost$io$File** $tmp1508 = &param0->frostHome;
frost$io$File* $tmp1509 = *$tmp1508;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1509));
return;

}

