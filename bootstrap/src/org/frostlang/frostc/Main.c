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
typedef frost$core$String* (*$fn453)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn501)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn570)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn578)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn613)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn635)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn659)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn729)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn792)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn875)(frost$core$Object*);
typedef frost$core$String* (*$fn917)(frost$core$Object*);
typedef frost$core$Bit (*$fn952)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int (*$fn972)(frost$collections$CollectionView*);
typedef void (*$fn990)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn1010)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1014)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1019)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1027)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1031)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1036)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1047)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1051)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1056)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1066)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1070)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1075)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn1086)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn1090)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn1095)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn1106)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn1120)(frost$collections$CollectionView*);
typedef void (*$fn1135)(org$frostlang$frostc$CodeGenerator*);
typedef frost$core$String* (*$fn1184)(frost$core$Object*);
typedef frost$core$String* (*$fn1192)(frost$core$Object*);
typedef frost$core$String* (*$fn1232)(frost$core$Object*);
typedef frost$core$String* (*$fn1240)(frost$core$Object*);
typedef frost$core$Int (*$fn1402)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1413)(frost$collections$ListView*, frost$core$Int);
typedef frost$collections$ListView* (*$fn1424)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int$Q$GT);
typedef frost$core$Int (*$fn1428)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn1439)(frost$collections$ListView*, frost$core$Int);
typedef void (*$fn1446)(org$frostlang$frostc$Bench*);

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
static frost$core$String $s441 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, -8241422096120224677, NULL };
static frost$core$String $s442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x53", 2, 562999464539196145, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, -36708640889814861, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, -8229934398630946849, NULL };
static frost$core$String $s484 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x66", 2, 563055539632234906, NULL };
static frost$core$String $s496 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -8357866846417911189, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s503 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -8762049995398847258, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x65", 3, -4390446579619712681, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f", 1, -5808550276084140354, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6c", 2, 625221927078985221, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68", 1, -5808546977549255721, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63", 1, -5808554674130653198, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, -8607590772689110736, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62", 4, -5818263582595368203, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, -8940199916074753387, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x69", 2, 563041245981068163, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 8483394141060772687, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, -3260734117535617165, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 1755487887012249427, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, -6268259042323653607, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -540522989212751288, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, -7219040758408810062, NULL };
static frost$core$String $s628 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 2088835727452422272, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, 1894309652117697527, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s684 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6f", 2, 565862592818489914, NULL };
static frost$core$String $s693 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s704 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 5161680247121691796, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s713 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, -5255104731122465439, NULL };
static frost$core$String $s714 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, 6378635575011181341, NULL };
static frost$core$String $s715 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s737 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s738 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -5478415099818808347, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s799 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s800 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, -4651943656929293709, NULL };
static frost$core$String $s801 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s804 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s831 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s862 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s925 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s980 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s981 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s1004 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 3928554745973598786, NULL };
static frost$core$String $s1005 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1188 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1196 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, -5861202104196742523, NULL };
static frost$core$String $s1200 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1201 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1228 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1236 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s1244 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3a\x20\x77\x61\x72\x6e\x69\x6e\x67\x3a\x20", 11, 2890546785777135939, NULL };
static frost$core$String $s1248 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s1249 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1264 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x77\x61\x72\x6e\x69\x6e\x67", 9, -3177307723557508888, NULL };
static frost$core$String $s1265 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1276 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x77\x61\x72\x6e\x69\x6e\x67\x73", 9, 8539650515262073630, NULL };
static frost$core$String $s1277 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1326 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s1358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e", 1, -5808619545316717647, NULL };
static frost$core$String $s1372 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x6c\x6c", 3, -527906216060450991, NULL };
static frost$core$String $s1386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 3639570550927944898, NULL };
static frost$core$String $s1387 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, -1438914547765079724, NULL };
static frost$core$String $s1392 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s1416 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 3780951491120021928, NULL };
static frost$core$String $s1442 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d\x2d\x62\x65\x6e\x63\x68", 7, -7026121568011644677, NULL };

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
frost$core$Int$nullable local18;
frost$core$String* local19 = NULL;
frost$core$Int$nullable local20;
frost$core$Int64$nullable local21;
frost$core$Int$nullable local22;
frost$core$String* local23 = NULL;
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
org$frostlang$frostc$Main$Format local36;
org$frostlang$frostc$Main$Format local37;
frost$io$File* local38 = NULL;
org$frostlang$frostc$Main$Format local39;
org$frostlang$frostc$Main$Format local40;
frost$io$File* local41 = NULL;
org$frostlang$frostc$Main$Format local42;
org$frostlang$frostc$Main$Format local43;
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
frost$core$String* local58 = NULL;
frost$core$String* local59 = NULL;
frost$core$String$Index$nullable local60;
frost$core$Error* local61 = NULL;
org$frostlang$frostc$Compiler$Settings* local62 = NULL;
frost$threads$MessageQueue* local63 = NULL;
org$frostlang$frostc$Compiler* local64 = NULL;
org$frostlang$frostc$Main$Format local65;
org$frostlang$frostc$Main$Format local66;
frost$io$File* local67 = NULL;
org$frostlang$frostc$ClassDecl* local68 = NULL;
org$frostlang$frostc$ClassDecl* local69 = NULL;
org$frostlang$frostc$ClassDecl* local70 = NULL;
frost$io$File* local71 = NULL;
org$frostlang$frostc$ClassDecl* local72 = NULL;
frost$threads$ScopedLock* local73 = NULL;
org$frostlang$frostc$Compiler$Message* local74 = NULL;
frost$core$String* local75 = NULL;
frost$core$Int local76;
frost$core$Int local77;
frost$core$String* local78 = NULL;
frost$core$String* local79 = NULL;
frost$core$Int local80;
frost$core$Int local81;
frost$core$String* local82 = NULL;
frost$io$File* local83 = NULL;
frost$core$String* local84 = NULL;
frost$core$String* local85 = NULL;
frost$core$String* local86 = NULL;
frost$core$String$Index$nullable local87;
frost$io$File* local88 = NULL;
frost$core$String* local89 = NULL;
frost$core$String* local90 = NULL;
frost$core$String* local91 = NULL;
frost$core$String$Index$nullable local92;
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
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:200:40
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
*(&local18) = $tmp423;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:201
frost$core$Int$nullable $tmp424 = *(&local18);
frost$core$Bit $tmp425 = (frost$core$Bit) {!$tmp424.nonnull};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block37; else goto block40;
block40:;
frost$core$Int$nullable $tmp427 = *(&local18);
frost$core$Int $tmp428 = (frost$core$Int) {3u};
int64_t $tmp429 = ((frost$core$Int) $tmp427.value).value;
int64_t $tmp430 = $tmp428.value;
bool $tmp431 = $tmp429 > $tmp430;
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block37; else goto block39;
block39:;
frost$core$Int$nullable $tmp434 = *(&local18);
frost$core$Int $tmp435 = (frost$core$Int) {0u};
int64_t $tmp436 = ((frost$core$Int) $tmp434.value).value;
int64_t $tmp437 = $tmp435.value;
bool $tmp438 = $tmp436 < $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block37; else goto block38;
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:202
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:202:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s441);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s442);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:203
frost$core$Int $tmp443 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp443);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:204
frost$core$Int $tmp444 = (frost$core$Int) {204u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s445, $tmp444);
abort(); // unreachable
block38:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:206
frost$core$Int$nullable $tmp446 = *(&local18);
*(&local4) = ((frost$core$Int) $tmp446.value);
frost$core$String* $tmp447 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
*(&local15) = ((frost$core$String*) NULL);
goto block5;
block32:;
frost$core$Bit $tmp448 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s449);
bool $tmp450 = $tmp448.value;
if ($tmp450) goto block43; else goto block44;
block43:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:209
org$frostlang$frostc$Main$Arguments* $tmp451 = *(&local0);
$fn453 $tmp452 = ($fn453) $tmp451->$class->vtable[4];
frost$core$String* $tmp454 = $tmp452($tmp451, &$s455);
*(&local19) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$String* $tmp456 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
*(&local19) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:210
frost$core$String* $tmp457 = *(&local19);
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Main.frost:210:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
frost$core$Int64$nullable $tmp458 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp457);
*(&local21) = $tmp458;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
frost$core$Int64$nullable $tmp459 = *(&local21);
frost$core$Bit $tmp460 = (frost$core$Bit) {$tmp459.nonnull};
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block46; else goto block47;
block46:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
frost$core$Int64$nullable $tmp462 = *(&local21);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp463 = ((frost$core$Int64) $tmp462.value).value;
frost$core$Int $tmp464 = (frost$core$Int) {((int64_t) $tmp463)};
*(&local20) = ((frost$core$Int$nullable) { $tmp464, true });
goto block45;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local20) = ((frost$core$Int$nullable) { .nonnull = false });
goto block45;
block45:;
frost$core$Int$nullable $tmp465 = *(&local20);
*(&local22) = $tmp465;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:211
frost$core$Int$nullable $tmp466 = *(&local22);
frost$core$Bit $tmp467 = (frost$core$Bit) {!$tmp466.nonnull};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block49; else goto block52;
block52:;
frost$core$Int$nullable $tmp469 = *(&local22);
frost$core$Int $tmp470 = (frost$core$Int) {3u};
int64_t $tmp471 = ((frost$core$Int) $tmp469.value).value;
int64_t $tmp472 = $tmp470.value;
bool $tmp473 = $tmp471 > $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block49; else goto block51;
block51:;
frost$core$Int$nullable $tmp476 = *(&local22);
frost$core$Int $tmp477 = (frost$core$Int) {0u};
int64_t $tmp478 = ((frost$core$Int) $tmp476.value).value;
int64_t $tmp479 = $tmp477.value;
bool $tmp480 = $tmp478 < $tmp479;
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block49; else goto block50;
block49:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:212
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:212:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s483);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s484);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:213
frost$core$Int $tmp485 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp485);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:214
frost$core$Int $tmp486 = (frost$core$Int) {214u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s487, $tmp486);
abort(); // unreachable
block50:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:216
frost$core$Int$nullable $tmp488 = *(&local22);
*(&local5) = ((frost$core$Int) $tmp488.value);
frost$core$String* $tmp489 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local19) = ((frost$core$String*) NULL);
goto block5;
block44:;
frost$core$Bit $tmp490 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s491);
bool $tmp492 = $tmp490.value;
if ($tmp492) goto block55; else goto block56;
block55:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:219
org$frostlang$frostc$Main$Format$nullable $tmp493 = *(&local6);
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493.nonnull};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:220
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:220:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s496);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s497);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:221
frost$core$Int $tmp498 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp498);
goto block58;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:223
org$frostlang$frostc$Main$Arguments* $tmp499 = *(&local0);
$fn501 $tmp500 = ($fn501) $tmp499->$class->vtable[4];
frost$core$String* $tmp502 = $tmp500($tmp499, &$s503);
*(&local23) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
frost$core$String* $tmp504 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
*(&local23) = $tmp502;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp502));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:224
frost$core$String* $tmp505 = *(&local23);
frost$core$Bit $tmp506 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp505, &$s507);
bool $tmp508 = $tmp506.value;
if ($tmp508) goto block62; else goto block63;
block62:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:225
frost$core$Int $tmp509 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:225:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp510 = &(&local25)->$rawValue;
*$tmp510 = $tmp509;
org$frostlang$frostc$Main$Format $tmp511 = *(&local25);
*(&local24) = $tmp511;
org$frostlang$frostc$Main$Format $tmp512 = *(&local24);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp512, true });
goto block61;
block63:;
frost$core$Bit $tmp513 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp505, &$s514);
bool $tmp515 = $tmp513.value;
if ($tmp515) goto block65; else goto block66;
block65:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:226
frost$core$Int $tmp516 = (frost$core$Int) {2u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:226:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp517 = &(&local27)->$rawValue;
*$tmp517 = $tmp516;
org$frostlang$frostc$Main$Format $tmp518 = *(&local27);
*(&local26) = $tmp518;
org$frostlang$frostc$Main$Format $tmp519 = *(&local26);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp519, true });
goto block61;
block66:;
frost$core$Bit $tmp520 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp505, &$s521);
bool $tmp522 = $tmp520.value;
if ($tmp522) goto block68; else goto block69;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:227
frost$core$Int $tmp523 = (frost$core$Int) {0u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:227:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp524 = &(&local29)->$rawValue;
*$tmp524 = $tmp523;
org$frostlang$frostc$Main$Format $tmp525 = *(&local29);
*(&local28) = $tmp525;
org$frostlang$frostc$Main$Format $tmp526 = *(&local28);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp526, true });
goto block61;
block69:;
frost$core$Bit $tmp527 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp505, &$s528);
bool $tmp529 = $tmp527.value;
if ($tmp529) goto block71; else goto block72;
block71:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:228
frost$core$Int $tmp530 = (frost$core$Int) {3u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:228:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp531 = &(&local31)->$rawValue;
*$tmp531 = $tmp530;
org$frostlang$frostc$Main$Format $tmp532 = *(&local31);
*(&local30) = $tmp532;
org$frostlang$frostc$Main$Format $tmp533 = *(&local30);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp533, true });
goto block61;
block72:;
frost$core$Bit $tmp534 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp505, &$s535);
bool $tmp536 = $tmp534.value;
if ($tmp536) goto block74; else goto block75;
block74:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:229
frost$core$Int $tmp537 = (frost$core$Int) {4u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:229:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp538 = &(&local33)->$rawValue;
*$tmp538 = $tmp537;
org$frostlang$frostc$Main$Format $tmp539 = *(&local33);
*(&local32) = $tmp539;
org$frostlang$frostc$Main$Format $tmp540 = *(&local32);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp540, true });
goto block61;
block75:;
frost$core$Bit $tmp541 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp505, &$s542);
bool $tmp543 = $tmp541.value;
if ($tmp543) goto block77; else goto block78;
block77:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:230
frost$core$Int $tmp544 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:230:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp545 = &(&local35)->$rawValue;
*$tmp545 = $tmp544;
org$frostlang$frostc$Main$Format $tmp546 = *(&local35);
*(&local34) = $tmp546;
org$frostlang$frostc$Main$Format $tmp547 = *(&local34);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp547, true });
goto block61;
block78:;
frost$core$Bit $tmp548 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp505, &$s549);
bool $tmp550 = $tmp548.value;
if ($tmp550) goto block80; else goto block81;
block80:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:231
frost$core$Int $tmp551 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:231:55
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp552 = &(&local37)->$rawValue;
*$tmp552 = $tmp551;
org$frostlang$frostc$Main$Format $tmp553 = *(&local37);
*(&local36) = $tmp553;
org$frostlang$frostc$Main$Format $tmp554 = *(&local36);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp554, true });
goto block61;
block81:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:233
frost$core$String* $tmp555 = *(&local23);
frost$core$String* $tmp556 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s557, $tmp555);
frost$core$String* $tmp558 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp556, &$s559);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:233:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp558);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s560);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:234
frost$core$Int $tmp561 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp561);
goto block61;
block61:;
frost$core$String* $tmp562 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local23) = ((frost$core$String*) NULL);
goto block5;
block56:;
frost$core$Bit $tmp563 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s564);
bool $tmp565 = $tmp563.value;
if ($tmp565) goto block85; else goto block86;
block85:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:239
frost$collections$Array* $tmp566 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp567 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp568 = *(&local0);
$fn570 $tmp569 = ($fn570) $tmp568->$class->vtable[4];
frost$core$String* $tmp571 = $tmp569($tmp568, &$s572);
frost$io$File$init$frost$core$String($tmp567, $tmp571);
frost$collections$Array$add$frost$collections$Array$T($tmp566, ((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
goto block5;
block86:;
frost$core$Bit $tmp573 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp326, &$s574);
bool $tmp575 = $tmp573.value;
if ($tmp575) goto block87; else goto block88;
block87:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:242
org$frostlang$frostc$Main$Arguments* $tmp576 = *(&local0);
$fn578 $tmp577 = ($fn578) $tmp576->$class->vtable[4];
frost$core$String* $tmp579 = $tmp577($tmp576, &$s580);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
frost$core$String* $tmp581 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
*(&local7) = $tmp579;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
goto block5;
block88:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:245
frost$core$String* $tmp582 = *(&local9);
frost$core$Bit $tmp583 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp582, &$s584);
bool $tmp585 = $tmp583.value;
if ($tmp585) goto block89; else goto block91;
block89:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:246
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp586 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp587 = *(&local9);
frost$io$File$init$frost$core$String($tmp586, $tmp587);
*(&local38) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
frost$io$File* $tmp588 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local38) = $tmp586;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp586));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:247
frost$collections$Array* $tmp589 = *(&local1);
frost$io$File* $tmp590 = *(&local38);
frost$collections$Array$add$frost$collections$Array$T($tmp589, ((frost$core$Object*) $tmp590));
frost$io$File* $tmp591 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local38) = ((frost$io$File*) NULL);
goto block90;
block91:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:250
frost$core$String* $tmp592 = *(&local9);
frost$core$String* $tmp593 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s594, $tmp592);
frost$core$String* $tmp595 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp593, &$s596);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:250:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp595);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s597);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:251
frost$core$Int $tmp598 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp598);
goto block90;
block90:;
goto block5;
block5:;
frost$core$String* $tmp599 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:256
org$frostlang$frostc$Main$Format$nullable $tmp600 = *(&local6);
frost$core$Bit $tmp601 = (frost$core$Bit) {!$tmp600.nonnull};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block94; else goto block96;
block96:;
org$frostlang$frostc$Main$Format$nullable $tmp603 = *(&local6);
frost$core$Equatable* $tmp604;
if ($tmp603.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp605;
    $tmp605 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp605->value = ((org$frostlang$frostc$Main$Format) $tmp603.value);
    $tmp604 = ((frost$core$Equatable*) $tmp605);
}
else {
    $tmp604 = NULL;
}
frost$core$Int $tmp606 = (frost$core$Int) {6u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:256:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp607 = &(&local40)->$rawValue;
*$tmp607 = $tmp606;
org$frostlang$frostc$Main$Format $tmp608 = *(&local40);
*(&local39) = $tmp608;
org$frostlang$frostc$Main$Format $tmp609 = *(&local39);
org$frostlang$frostc$Main$Format$wrapper* $tmp610;
$tmp610 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp610->value = $tmp609;
ITable* $tmp611 = $tmp604->$class->itable;
while ($tmp611->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp611 = $tmp611->next;
}
$fn613 $tmp612 = $tmp611->methods[1];
frost$core$Bit $tmp614 = $tmp612($tmp604, ((frost$core$Equatable*) $tmp610));
bool $tmp615 = $tmp614.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp610)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
if ($tmp615) goto block94; else goto block95;
block94:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:257
frost$collections$Array* $tmp616 = *(&local2);
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp617 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp618 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp617, $tmp618);
frost$io$File* $tmp619 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp617, &$s620);
frost$collections$Array$add$frost$collections$Array$T($tmp616, ((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
goto block95;
block95:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:259
frost$collections$Array* $tmp621 = *(&local2);
frost$io$File** $tmp622 = &param0->frostHome;
frost$io$File* $tmp623 = *$tmp622;
frost$collections$Array$add$frost$collections$Array$T($tmp621, ((frost$core$Object*) $tmp623));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:260
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp624 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp625 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp624, $tmp625);
*(&local41) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
frost$io$File* $tmp626 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local41) = $tmp624;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:261
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp627 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp627, &$s628);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
frost$io$File** $tmp629 = &param0->clang;
frost$io$File* $tmp630 = *$tmp629;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
frost$io$File** $tmp631 = &param0->clang;
*$tmp631 = $tmp627;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:262
frost$collections$Array* $tmp632 = *(&local1);
ITable* $tmp633 = ((frost$collections$CollectionView*) $tmp632)->$class->itable;
while ($tmp633->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp633 = $tmp633->next;
}
$fn635 $tmp634 = $tmp633->methods[0];
frost$core$Int $tmp636 = $tmp634(((frost$collections$CollectionView*) $tmp632));
frost$core$Int $tmp637 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:262:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp638 = $tmp636.value;
int64_t $tmp639 = $tmp637.value;
bool $tmp640 = $tmp638 == $tmp639;
frost$core$Bit $tmp641 = (frost$core$Bit) {$tmp640};
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block98; else goto block99;
block98:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:263
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:263:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s643);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s644);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:264
frost$core$Int $tmp645 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp645);
goto block99;
block99:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:266
org$frostlang$frostc$Main$Format$nullable $tmp646 = *(&local6);
frost$core$Bit $tmp647 = (frost$core$Bit) {!$tmp646.nonnull};
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block103; else goto block104;
block103:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:267
frost$core$Int $tmp649 = (frost$core$Int) {1u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:267:29
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp650 = &(&local43)->$rawValue;
*$tmp650 = $tmp649;
org$frostlang$frostc$Main$Format $tmp651 = *(&local43);
*(&local42) = $tmp651;
org$frostlang$frostc$Main$Format $tmp652 = *(&local42);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp652, true });
goto block104;
block104:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:269
frost$io$File* $tmp653 = *(&local3);
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653 == NULL};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block106; else goto block107;
block106:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:270
frost$collections$Array* $tmp656 = *(&local1);
ITable* $tmp657 = ((frost$collections$CollectionView*) $tmp656)->$class->itable;
while ($tmp657->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp657 = $tmp657->next;
}
$fn659 $tmp658 = $tmp657->methods[0];
frost$core$Int $tmp660 = $tmp658(((frost$collections$CollectionView*) $tmp656));
frost$core$Int $tmp661 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:270:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp662 = $tmp660.value;
int64_t $tmp663 = $tmp661.value;
bool $tmp664 = $tmp662 == $tmp663;
frost$core$Bit $tmp665 = (frost$core$Bit) {$tmp664};
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block108; else goto block110;
block108:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:271
*(&local44) = ((frost$core$String*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:272
org$frostlang$frostc$Main$Format$nullable $tmp667 = *(&local6);
frost$core$Int $tmp668 = ((org$frostlang$frostc$Main$Format) $tmp667.value).$rawValue;
frost$core$Int $tmp669 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:273:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp670 = $tmp668.value;
int64_t $tmp671 = $tmp669.value;
bool $tmp672 = $tmp670 == $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block113; else goto block114;
block113:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s675));
frost$core$String* $tmp676 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local44) = &$s677;
goto block112;
block114:;
frost$core$Int $tmp678 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:274:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp679 = $tmp668.value;
int64_t $tmp680 = $tmp678.value;
bool $tmp681 = $tmp679 == $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block116; else goto block117;
block116:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:274
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s684));
frost$core$String* $tmp685 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
*(&local44) = &$s686;
goto block112;
block117:;
frost$core$Int $tmp687 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:275:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp688 = $tmp668.value;
int64_t $tmp689 = $tmp687.value;
bool $tmp690 = $tmp688 == $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block119; else goto block120;
block119:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:275
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s693));
frost$core$String* $tmp694 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
*(&local44) = &$s695;
goto block112;
block120:;
frost$core$Int $tmp696 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:276:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp697 = $tmp668.value;
int64_t $tmp698 = $tmp696.value;
bool $tmp699 = $tmp697 == $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block122; else goto block123;
block122:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:276
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s702));
frost$core$String* $tmp703 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local44) = &$s704;
goto block112;
block123:;
frost$core$Int $tmp705 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:277:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp706 = $tmp668.value;
int64_t $tmp707 = $tmp705.value;
bool $tmp708 = $tmp706 == $tmp707;
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block125; else goto block126;
block125:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:277
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s711));
frost$core$String* $tmp712 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local44) = &$s713;
goto block112;
block126:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:279
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:279:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s714);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s715);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:281
frost$core$Int $tmp716 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp716);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:282
frost$core$Int $tmp717 = (frost$core$Int) {282u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s718, $tmp717);
abort(); // unreachable
block112:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:285
frost$collections$Array* $tmp719 = *(&local1);
frost$core$Int $tmp720 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:285:35
frost$core$Int $tmp721 = (frost$core$Int) {0u};
int64_t $tmp722 = $tmp720.value;
int64_t $tmp723 = $tmp721.value;
bool $tmp724 = $tmp722 >= $tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block133; else goto block132;
block133:;
ITable* $tmp727 = ((frost$collections$CollectionView*) $tmp719)->$class->itable;
while ($tmp727->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp727 = $tmp727->next;
}
$fn729 $tmp728 = $tmp727->methods[0];
frost$core$Int $tmp730 = $tmp728(((frost$collections$CollectionView*) $tmp719));
int64_t $tmp731 = $tmp720.value;
int64_t $tmp732 = $tmp730.value;
bool $tmp733 = $tmp731 < $tmp732;
frost$core$Bit $tmp734 = (frost$core$Bit) {$tmp733};
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block131; else goto block132;
block132:;
frost$core$Int $tmp736 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s737, $tmp736, &$s738);
abort(); // unreachable
block131:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp739 = &$tmp719->data;
frost$core$Object** $tmp740 = *$tmp739;
frost$core$Int64 $tmp741 = frost$core$Int64$init$frost$core$Int($tmp720);
int64_t $tmp742 = $tmp741.value;
frost$core$Object* $tmp743 = $tmp740[$tmp742];
frost$core$Frost$ref$frost$core$Object$Q($tmp743);
frost$core$String* $tmp744 = *(&local44);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:285:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp745 = frost$io$File$resolve$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp743), &$s746);
frost$core$String** $tmp747 = &$tmp745->path;
frost$core$String* $tmp748 = *$tmp747;
frost$core$String* $tmp749 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp748);
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$String* $tmp750 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local46) = $tmp749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp751 = *(&local46);
frost$core$Bit $tmp752 = (frost$core$Bit) {$tmp751 == NULL};
bool $tmp753 = $tmp752.value;
if ($tmp753) goto block136; else goto block137;
block136:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp754 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block135;
block137:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp755 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp756 = *(&local46);
frost$io$File$init$frost$core$String($tmp755, $tmp756);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
frost$core$String* $tmp757 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
*(&local46) = ((frost$core$String*) NULL);
*(&local45) = $tmp755;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
goto block135;
block135:;
frost$io$File* $tmp758 = *(&local45);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp759 = frost$io$File$get_name$R$frost$core$String(((frost$io$File*) $tmp743));
*(&local48) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
frost$core$String* $tmp760 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local48) = $tmp759;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp761 = *(&local48);
frost$core$String$Index$nullable $tmp762 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp761, &$s763);
*(&local49) = $tmp762;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp764 = *(&local49);
frost$core$Bit $tmp765 = (frost$core$Bit) {!$tmp764.nonnull};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block139; else goto block140;
block139:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp767 = *(&local48);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
frost$core$String* $tmp768 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp767;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
goto block138;
block140:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp769 = *(&local48);
frost$core$String$Index$nullable $tmp770 = *(&local49);
frost$core$Bit $tmp771 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp772 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp770, $tmp771);
frost$core$String* $tmp773 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp769, $tmp772);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
frost$core$String* $tmp774 = *(&local48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
*(&local48) = ((frost$core$String*) NULL);
*(&local47) = $tmp773;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
goto block138;
block138:;
frost$core$String* $tmp775 = *(&local47);
frost$core$String* $tmp776 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp775, $tmp744);
frost$io$File* $tmp777 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp758, $tmp776);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
frost$core$String* $tmp778 = *(&local47);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
*(&local47) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
frost$io$File* $tmp779 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local45) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$io$File* $tmp780 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
*(&local3) = $tmp777;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
frost$core$Frost$unref$frost$core$Object$Q($tmp743);
frost$core$String* $tmp781 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
*(&local44) = ((frost$core$String*) NULL);
goto block107;
block110:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:287
org$frostlang$frostc$Main$Format$nullable $tmp782 = *(&local6);
frost$core$Equatable* $tmp783;
if ($tmp782.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp784;
    $tmp784 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp784->value = ((org$frostlang$frostc$Main$Format) $tmp782.value);
    $tmp783 = ((frost$core$Equatable*) $tmp784);
}
else {
    $tmp783 = NULL;
}
frost$core$Int $tmp785 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:287:36
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp786 = &(&local51)->$rawValue;
*$tmp786 = $tmp785;
org$frostlang$frostc$Main$Format $tmp787 = *(&local51);
*(&local50) = $tmp787;
org$frostlang$frostc$Main$Format $tmp788 = *(&local50);
org$frostlang$frostc$Main$Format$wrapper* $tmp789;
$tmp789 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp789->value = $tmp788;
ITable* $tmp790 = $tmp783->$class->itable;
while ($tmp790->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp790 = $tmp790->next;
}
$fn792 $tmp791 = $tmp790->methods[0];
frost$core$Bit $tmp793 = $tmp791($tmp783, ((frost$core$Equatable*) $tmp789));
bool $tmp794 = $tmp793.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp789)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
if ($tmp794) goto block141; else goto block143;
block141:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:288
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:288:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s795);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s796);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:289
frost$core$Int $tmp797 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp797);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:290
frost$core$Int $tmp798 = (frost$core$Int) {290u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s799, $tmp798);
abort(); // unreachable
block143:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:293
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:293:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s800);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s801);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:295
frost$core$Int $tmp802 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp802);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:296
frost$core$Int $tmp803 = (frost$core$Int) {296u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s804, $tmp803);
abort(); // unreachable
block107:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:299
frost$core$Int $tmp805 = (frost$core$Int) {0u};
*(&local52) = $tmp805;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:300
frost$core$Int $tmp806 = (frost$core$Int) {0u};
*(&local53) = $tmp806;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:302
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:303
org$frostlang$frostc$Main$Format$nullable $tmp807 = *(&local6);
frost$core$Int $tmp808 = ((org$frostlang$frostc$Main$Format) $tmp807.value).$rawValue;
frost$core$Int $tmp809 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:304:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809.value;
bool $tmp812 = $tmp810 == $tmp811;
frost$core$Bit $tmp813 = (frost$core$Bit) {$tmp812};
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block150; else goto block151;
block151:;
frost$core$Int $tmp815 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:304:41
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp816 = $tmp808.value;
int64_t $tmp817 = $tmp815.value;
bool $tmp818 = $tmp816 == $tmp817;
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block150; else goto block153;
block153:;
frost$core$Int $tmp821 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:304:60
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp822 = $tmp808.value;
int64_t $tmp823 = $tmp821.value;
bool $tmp824 = $tmp822 == $tmp823;
frost$core$Bit $tmp825 = (frost$core$Bit) {$tmp824};
bool $tmp826 = $tmp825.value;
if ($tmp826) goto block150; else goto block155;
block150:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:305
*(&local55) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:306
FROST_ASSERT(272 == sizeof(org$frostlang$frostc$LLVMCodeGenerator));
org$frostlang$frostc$LLVMCodeGenerator* $tmp827 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(272, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp828 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp829 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:307:70
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp830 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp829, &$s831);
frost$core$String** $tmp832 = &$tmp830->path;
frost$core$String* $tmp833 = *$tmp832;
frost$core$String* $tmp834 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp833);
*(&local57) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$String* $tmp835 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local57) = $tmp834;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp836 = *(&local57);
frost$core$Bit $tmp837 = (frost$core$Bit) {$tmp836 == NULL};
bool $tmp838 = $tmp837.value;
if ($tmp838) goto block161; else goto block162;
block161:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp839 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block160;
block162:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp840 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp841 = *(&local57);
frost$io$File$init$frost$core$String($tmp840, $tmp841);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
frost$core$String* $tmp842 = *(&local57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
*(&local57) = ((frost$core$String*) NULL);
*(&local56) = $tmp840;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
goto block160;
block160:;
frost$io$File* $tmp843 = *(&local56);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp844 = frost$io$File$get_name$R$frost$core$String($tmp829);
*(&local59) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
frost$core$String* $tmp845 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp845));
*(&local59) = $tmp844;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp844));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp846 = *(&local59);
frost$core$String$Index$nullable $tmp847 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp846, &$s848);
*(&local60) = $tmp847;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp849 = *(&local60);
frost$core$Bit $tmp850 = (frost$core$Bit) {!$tmp849.nonnull};
bool $tmp851 = $tmp850.value;
if ($tmp851) goto block164; else goto block165;
block164:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp852 = *(&local59);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
frost$core$String* $tmp853 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = $tmp852;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
goto block163;
block165:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp854 = *(&local59);
frost$core$String$Index$nullable $tmp855 = *(&local60);
frost$core$Bit $tmp856 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp857 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp855, $tmp856);
frost$core$String* $tmp858 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp854, $tmp857);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
frost$core$String* $tmp859 = *(&local59);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
*(&local59) = ((frost$core$String*) NULL);
*(&local58) = $tmp858;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
goto block163;
block163:;
frost$core$String* $tmp860 = *(&local58);
frost$core$String* $tmp861 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp860, &$s862);
frost$io$File* $tmp863 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp843, $tmp861);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
frost$core$String* $tmp864 = *(&local58);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
*(&local58) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp843));
frost$io$File* $tmp865 = *(&local56);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
*(&local56) = ((frost$io$File*) NULL);
frost$core$Maybe* $tmp866 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp863);
frost$core$Int* $tmp867 = &$tmp866->$rawValue;
frost$core$Int $tmp868 = *$tmp867;
int64_t $tmp869 = $tmp868.value;
bool $tmp870 = $tmp869 == 0u;
if ($tmp870) goto block166; else goto block167;
block167:;
frost$core$Error** $tmp871 = (frost$core$Error**) ($tmp866->$data + 0);
frost$core$Error* $tmp872 = *$tmp871;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local55) = $tmp872;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:310
frost$core$Error* $tmp873 = *(&local55);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:310:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn875 $tmp874 = ($fn875) ((frost$core$Object*) $tmp873)->$class->vtable[0];
frost$core$String* $tmp876 = $tmp874(((frost$core$Object*) $tmp873));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp876);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:311
frost$core$Int $tmp877 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp877);
goto block158;
block166:;
frost$core$Object** $tmp878 = (frost$core$Object**) ($tmp866->$data + 0);
frost$core$Object* $tmp879 = *$tmp878;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp827, $tmp828, ((frost$io$OutputStream*) $tmp879));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp827)));
org$frostlang$frostc$CodeGenerator* $tmp880 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp827);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
goto block158;
block158:;
frost$core$Error* $tmp881 = *(&local55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp881));
*(&local55) = ((frost$core$Error*) NULL);
goto block149;
block155:;
frost$core$Int $tmp882 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:314:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp883 = $tmp808.value;
int64_t $tmp884 = $tmp882.value;
bool $tmp885 = $tmp883 == $tmp884;
frost$core$Bit $tmp886 = (frost$core$Bit) {$tmp885};
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block170; else goto block171;
block170:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:315
FROST_ASSERT(152 == sizeof(org$frostlang$frostc$HCodeGenerator));
org$frostlang$frostc$HCodeGenerator* $tmp888 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp889 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp888, $tmp889);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp888)));
org$frostlang$frostc$CodeGenerator* $tmp890 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp888);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp888));
goto block149;
block171:;
frost$core$Int $tmp891 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:317:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp892 = $tmp808.value;
int64_t $tmp893 = $tmp891.value;
bool $tmp894 = $tmp892 == $tmp893;
frost$core$Bit $tmp895 = (frost$core$Bit) {$tmp894};
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block173; else goto block174;
block173:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:318
FROST_ASSERT(256 == sizeof(org$frostlang$frostc$CCodeGenerator));
org$frostlang$frostc$CCodeGenerator* $tmp897 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp898 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp897, $tmp898);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp897)));
org$frostlang$frostc$CodeGenerator* $tmp899 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp897);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
goto block149;
block174:;
frost$core$Int $tmp900 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:320:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp901 = $tmp808.value;
int64_t $tmp902 = $tmp900.value;
bool $tmp903 = $tmp901 == $tmp902;
frost$core$Bit $tmp904 = (frost$core$Bit) {$tmp903};
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block176; else goto block177;
block176:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:321
*(&local61) = ((frost$core$Error*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:322
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$StubCodeGenerator));
org$frostlang$frostc$StubCodeGenerator* $tmp906 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp907 = *(&local3);
frost$core$Maybe* $tmp908 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp907);
frost$core$Int* $tmp909 = &$tmp908->$rawValue;
frost$core$Int $tmp910 = *$tmp909;
int64_t $tmp911 = $tmp910.value;
bool $tmp912 = $tmp911 == 0u;
if ($tmp912) goto block181; else goto block182;
block182:;
frost$core$Error** $tmp913 = (frost$core$Error**) ($tmp908->$data + 0);
frost$core$Error* $tmp914 = *$tmp913;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
*(&local61) = $tmp914;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:325
frost$core$Error* $tmp915 = *(&local61);
// begin inline call to method frost.io.Console.printErrorLine(o:frost.core.Object) from Main.frost:325:47
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:102
$fn917 $tmp916 = ($fn917) ((frost$core$Object*) $tmp915)->$class->vtable[0];
frost$core$String* $tmp918 = $tmp916(((frost$core$Object*) $tmp915));
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Console.frost:102:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String($tmp918);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
frost$io$Console$printErrorLine();
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp918));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:326
frost$core$Int $tmp919 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp919);
goto block180;
block181:;
frost$core$Object** $tmp920 = (frost$core$Object**) ($tmp908->$data + 0);
frost$core$Object* $tmp921 = *$tmp920;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp906, ((frost$io$OutputStream*) $tmp921));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp906)));
org$frostlang$frostc$CodeGenerator* $tmp922 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) $tmp906);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp906));
goto block180;
block180:;
frost$core$Error* $tmp923 = *(&local61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
*(&local61) = ((frost$core$Error*) NULL);
goto block149;
block177:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:330
frost$core$Int $tmp924 = (frost$core$Int) {330u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s925, $tmp924);
abort(); // unreachable
block149:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:333
FROST_ASSERT(64 == sizeof(org$frostlang$frostc$Compiler$Settings));
org$frostlang$frostc$Compiler$Settings* $tmp926 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp927 = &param0->frostHome;
frost$io$File* $tmp928 = *$tmp927;
frost$collections$Array* $tmp929 = *(&local2);
frost$core$Int $tmp930 = *(&local4);
frost$core$Int $tmp931 = *(&local5);
frost$core$Bit* $tmp932 = &param0->debug;
frost$core$Bit $tmp933 = *$tmp932;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int$frost$core$Int$frost$core$Bit($tmp926, $tmp928, ((frost$collections$ListView*) $tmp929), $tmp930, $tmp931, $tmp933);
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
org$frostlang$frostc$Compiler$Settings* $tmp934 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
*(&local62) = $tmp926;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:335
FROST_ASSERT(56 == sizeof(frost$threads$MessageQueue));
frost$threads$MessageQueue* $tmp935 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp935);
*(&local63) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
frost$threads$MessageQueue* $tmp936 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
*(&local63) = $tmp935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:336
FROST_ASSERT(728 == sizeof(org$frostlang$frostc$Compiler));
org$frostlang$frostc$Compiler* $tmp937 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(728, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp938 = *(&local63);
org$frostlang$frostc$CodeGenerator* $tmp939 = *(&local54);
org$frostlang$frostc$Compiler$Settings* $tmp940 = *(&local62);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Message$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp937, $tmp938, $tmp939, $tmp940);
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
org$frostlang$frostc$Compiler* $tmp941 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
*(&local64) = $tmp937;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:337
org$frostlang$frostc$Main$Format$nullable $tmp942 = *(&local6);
frost$core$Equatable* $tmp943;
if ($tmp942.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp944;
    $tmp944 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp944->value = ((org$frostlang$frostc$Main$Format) $tmp942.value);
    $tmp943 = ((frost$core$Equatable*) $tmp944);
}
else {
    $tmp943 = NULL;
}
frost$core$Int $tmp945 = (frost$core$Int) {5u};
// begin inline call to org.frostlang.frostc.Main.Format.init(rv:frost.core.Int):org.frostlang.frostc.Main.Format from Main.frost:337:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:10
frost$core$Int* $tmp946 = &(&local66)->$rawValue;
*$tmp946 = $tmp945;
org$frostlang$frostc$Main$Format $tmp947 = *(&local66);
*(&local65) = $tmp947;
org$frostlang$frostc$Main$Format $tmp948 = *(&local65);
org$frostlang$frostc$Main$Format$wrapper* $tmp949;
$tmp949 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp949->value = $tmp948;
ITable* $tmp950 = $tmp943->$class->itable;
while ($tmp950->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp950 = $tmp950->next;
}
$fn952 $tmp951 = $tmp950->methods[0];
frost$core$Bit $tmp953 = $tmp951($tmp943, ((frost$core$Equatable*) $tmp949));
bool $tmp954 = $tmp953.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp949)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
if ($tmp954) goto block185; else goto block186;
block185:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:338
frost$core$String* $tmp955 = *(&local7);
frost$core$Bit $tmp956 = (frost$core$Bit) {$tmp955 == NULL};
bool $tmp957 = $tmp956.value;
if ($tmp957) goto block188; else goto block189;
block188:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:339
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s958));
frost$core$String* $tmp959 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp959));
*(&local7) = &$s958;
goto block189;
block189:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:341
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$HTMLProcessor));
org$frostlang$frostc$HTMLProcessor* $tmp960 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$Compiler* $tmp961 = *(&local64);
org$frostlang$frostc$HTMLProcessor$init$org$frostlang$frostc$Compiler($tmp960, $tmp961);
frost$collections$Array* $tmp962 = *(&local1);
frost$core$Int $tmp963 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Main.frost:341:56
frost$core$Int $tmp964 = (frost$core$Int) {0u};
int64_t $tmp965 = $tmp963.value;
int64_t $tmp966 = $tmp964.value;
bool $tmp967 = $tmp965 >= $tmp966;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block193; else goto block192;
block193:;
ITable* $tmp970 = ((frost$collections$CollectionView*) $tmp962)->$class->itable;
while ($tmp970->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp970 = $tmp970->next;
}
$fn972 $tmp971 = $tmp970->methods[0];
frost$core$Int $tmp973 = $tmp971(((frost$collections$CollectionView*) $tmp962));
int64_t $tmp974 = $tmp963.value;
int64_t $tmp975 = $tmp973.value;
bool $tmp976 = $tmp974 < $tmp975;
frost$core$Bit $tmp977 = (frost$core$Bit) {$tmp976};
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block191; else goto block192;
block192:;
frost$core$Int $tmp979 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s980, $tmp979, &$s981);
abort(); // unreachable
block191:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
frost$core$Object*** $tmp982 = &$tmp962->data;
frost$core$Object** $tmp983 = *$tmp982;
frost$core$Int64 $tmp984 = frost$core$Int64$init$frost$core$Int($tmp963);
int64_t $tmp985 = $tmp984.value;
frost$core$Object* $tmp986 = $tmp983[$tmp985];
frost$core$Frost$ref$frost$core$Object$Q($tmp986);
frost$io$File* $tmp987 = *(&local3);
frost$core$String* $tmp988 = *(&local7);
$fn990 $tmp989 = ($fn990) $tmp960->$class->vtable[3];
$tmp989($tmp960, ((frost$io$File*) $tmp986), $tmp987, $tmp988);
frost$core$Frost$unref$frost$core$Object$Q($tmp986);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp960));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:342
org$frostlang$frostc$Compiler* $tmp991 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp992 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp992));
*(&local63) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp993 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp993));
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp994 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp994));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
frost$io$File* $tmp995 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp995));
*(&local41) = ((frost$io$File*) NULL);
frost$core$String* $tmp996 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp996));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp997 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp997));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp998 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp998));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp999 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp999));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1000 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1000));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block186:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:344
frost$core$String* $tmp1001 = *(&local7);
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001 != NULL};
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block194; else goto block195;
block194:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:345
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:345:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(&$s1004);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s1005);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:346
frost$core$Int $tmp1006 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1006);
goto block195;
block195:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:348
frost$collections$Array* $tmp1007 = *(&local1);
ITable* $tmp1008 = ((frost$collections$Iterable*) $tmp1007)->$class->itable;
while ($tmp1008->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1008 = $tmp1008->next;
}
$fn1010 $tmp1009 = $tmp1008->methods[0];
frost$collections$Iterator* $tmp1011 = $tmp1009(((frost$collections$Iterable*) $tmp1007));
goto block198;
block198:;
ITable* $tmp1012 = $tmp1011->$class->itable;
while ($tmp1012->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1012 = $tmp1012->next;
}
$fn1014 $tmp1013 = $tmp1012->methods[0];
frost$core$Bit $tmp1015 = $tmp1013($tmp1011);
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block200; else goto block199;
block199:;
*(&local67) = ((frost$io$File*) NULL);
ITable* $tmp1017 = $tmp1011->$class->itable;
while ($tmp1017->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1017 = $tmp1017->next;
}
$fn1019 $tmp1018 = $tmp1017->methods[1];
frost$core$Object* $tmp1020 = $tmp1018($tmp1011);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1020)));
frost$io$File* $tmp1021 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1021));
*(&local67) = ((frost$io$File*) $tmp1020);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:349
org$frostlang$frostc$Compiler* $tmp1022 = *(&local64);
frost$io$File* $tmp1023 = *(&local67);
frost$collections$ListView* $tmp1024 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp1022, $tmp1023);
ITable* $tmp1025 = ((frost$collections$Iterable*) $tmp1024)->$class->itable;
while ($tmp1025->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1025 = $tmp1025->next;
}
$fn1027 $tmp1026 = $tmp1025->methods[0];
frost$collections$Iterator* $tmp1028 = $tmp1026(((frost$collections$Iterable*) $tmp1024));
goto block201;
block201:;
ITable* $tmp1029 = $tmp1028->$class->itable;
while ($tmp1029->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1029 = $tmp1029->next;
}
$fn1031 $tmp1030 = $tmp1029->methods[0];
frost$core$Bit $tmp1032 = $tmp1030($tmp1028);
bool $tmp1033 = $tmp1032.value;
if ($tmp1033) goto block203; else goto block202;
block202:;
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1034 = $tmp1028->$class->itable;
while ($tmp1034->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1034 = $tmp1034->next;
}
$fn1036 $tmp1035 = $tmp1034->methods[1];
frost$core$Object* $tmp1037 = $tmp1035($tmp1028);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1037)));
org$frostlang$frostc$ClassDecl* $tmp1038 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1038));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) $tmp1037);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:350
org$frostlang$frostc$Compiler* $tmp1039 = *(&local64);
org$frostlang$frostc$ClassDecl* $tmp1040 = *(&local68);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Main.frost:350:45
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5975
frost$core$Bit $tmp1041 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1042 = &$tmp1040->external;
*$tmp1042 = $tmp1041;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5976
frost$collections$Array** $tmp1043 = &$tmp1040->classes;
frost$collections$Array* $tmp1044 = *$tmp1043;
ITable* $tmp1045 = ((frost$collections$Iterable*) $tmp1044)->$class->itable;
while ($tmp1045->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1045 = $tmp1045->next;
}
$fn1047 $tmp1046 = $tmp1045->methods[0];
frost$collections$Iterator* $tmp1048 = $tmp1046(((frost$collections$Iterable*) $tmp1044));
goto block205;
block205:;
ITable* $tmp1049 = $tmp1048->$class->itable;
while ($tmp1049->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1049 = $tmp1049->next;
}
$fn1051 $tmp1050 = $tmp1049->methods[0];
frost$core$Bit $tmp1052 = $tmp1050($tmp1048);
bool $tmp1053 = $tmp1052.value;
if ($tmp1053) goto block207; else goto block206;
block206:;
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1054 = $tmp1048->$class->itable;
while ($tmp1054->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1054 = $tmp1054->next;
}
$fn1056 $tmp1055 = $tmp1054->methods[1];
frost$core$Object* $tmp1057 = $tmp1055($tmp1048);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1057)));
org$frostlang$frostc$ClassDecl* $tmp1058 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
*(&local69) = ((org$frostlang$frostc$ClassDecl*) $tmp1057);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5977
org$frostlang$frostc$ClassDecl* $tmp1059 = *(&local69);
// begin inline call to method org.frostlang.frostc.Compiler.markNonExternal(cl:org.frostlang.frostc.ClassDecl) from Compiler.frost:5977:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5975
frost$core$Bit $tmp1060 = (frost$core$Bit) {false};
frost$core$Bit* $tmp1061 = &$tmp1059->external;
*$tmp1061 = $tmp1060;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5976
frost$collections$Array** $tmp1062 = &$tmp1059->classes;
frost$collections$Array* $tmp1063 = *$tmp1062;
ITable* $tmp1064 = ((frost$collections$Iterable*) $tmp1063)->$class->itable;
while ($tmp1064->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1064 = $tmp1064->next;
}
$fn1066 $tmp1065 = $tmp1064->methods[0];
frost$collections$Iterator* $tmp1067 = $tmp1065(((frost$collections$Iterable*) $tmp1063));
goto block209;
block209:;
ITable* $tmp1068 = $tmp1067->$class->itable;
while ($tmp1068->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1068 = $tmp1068->next;
}
$fn1070 $tmp1069 = $tmp1068->methods[0];
frost$core$Bit $tmp1071 = $tmp1069($tmp1067);
bool $tmp1072 = $tmp1071.value;
if ($tmp1072) goto block211; else goto block210;
block210:;
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp1073 = $tmp1067->$class->itable;
while ($tmp1073->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1073 = $tmp1073->next;
}
$fn1075 $tmp1074 = $tmp1073->methods[1];
frost$core$Object* $tmp1076 = $tmp1074($tmp1067);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1076)));
org$frostlang$frostc$ClassDecl* $tmp1077 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1077));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) $tmp1076);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5977
org$frostlang$frostc$ClassDecl* $tmp1078 = *(&local70);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp1039, $tmp1078);
frost$core$Frost$unref$frost$core$Object$Q($tmp1076);
org$frostlang$frostc$ClassDecl* $tmp1079 = *(&local70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1079));
*(&local70) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block209;
block211:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1067));
frost$core$Frost$unref$frost$core$Object$Q($tmp1057);
org$frostlang$frostc$ClassDecl* $tmp1080 = *(&local69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1080));
*(&local69) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block205;
block207:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$Frost$unref$frost$core$Object$Q($tmp1037);
org$frostlang$frostc$ClassDecl* $tmp1081 = *(&local68);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1081));
*(&local68) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block201;
block203:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q($tmp1020);
frost$io$File* $tmp1082 = *(&local67);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1082));
*(&local67) = ((frost$io$File*) NULL);
goto block198;
block200:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1011));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:353
frost$collections$Array* $tmp1083 = *(&local1);
ITable* $tmp1084 = ((frost$collections$Iterable*) $tmp1083)->$class->itable;
while ($tmp1084->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp1084 = $tmp1084->next;
}
$fn1086 $tmp1085 = $tmp1084->methods[0];
frost$collections$Iterator* $tmp1087 = $tmp1085(((frost$collections$Iterable*) $tmp1083));
goto block212;
block212:;
ITable* $tmp1088 = $tmp1087->$class->itable;
while ($tmp1088->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1088 = $tmp1088->next;
}
$fn1090 $tmp1089 = $tmp1088->methods[0];
frost$core$Bit $tmp1091 = $tmp1089($tmp1087);
bool $tmp1092 = $tmp1091.value;
if ($tmp1092) goto block214; else goto block213;
block213:;
*(&local71) = ((frost$io$File*) NULL);
ITable* $tmp1093 = $tmp1087->$class->itable;
while ($tmp1093->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp1093 = $tmp1093->next;
}
$fn1095 $tmp1094 = $tmp1093->methods[1];
frost$core$Object* $tmp1096 = $tmp1094($tmp1087);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp1096)));
frost$io$File* $tmp1097 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1097));
*(&local71) = ((frost$io$File*) $tmp1096);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:354
org$frostlang$frostc$Compiler* $tmp1098 = *(&local64);
frost$io$File* $tmp1099 = *(&local71);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp1098, $tmp1099);
frost$core$Frost$unref$frost$core$Object$Q($tmp1096);
frost$io$File* $tmp1100 = *(&local71);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1100));
*(&local71) = ((frost$io$File*) NULL);
goto block212;
block214:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1087));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:356
org$frostlang$frostc$Compiler* $tmp1101 = *(&local64);
// begin inline call to method org.frostlang.frostc.Compiler.finish() from Main.frost:356:28
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6212
goto block216;
block216:;
frost$collections$Array** $tmp1102 = &$tmp1101->pendingClasses;
frost$collections$Array* $tmp1103 = *$tmp1102;
ITable* $tmp1104 = ((frost$collections$CollectionView*) $tmp1103)->$class->itable;
while ($tmp1104->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1104 = $tmp1104->next;
}
$fn1106 $tmp1105 = $tmp1104->methods[0];
frost$core$Int $tmp1107 = $tmp1105(((frost$collections$CollectionView*) $tmp1103));
frost$core$Int $tmp1108 = (frost$core$Int) {0u};
int64_t $tmp1109 = $tmp1107.value;
int64_t $tmp1110 = $tmp1108.value;
bool $tmp1111 = $tmp1109 > $tmp1110;
frost$core$Bit $tmp1112 = (frost$core$Bit) {$tmp1111};
bool $tmp1113 = $tmp1112.value;
if ($tmp1113) goto block217; else goto block218;
block217:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6213
frost$collections$Array** $tmp1114 = &$tmp1101->pendingClasses;
frost$collections$Array* $tmp1115 = *$tmp1114;
frost$collections$Array** $tmp1116 = &$tmp1101->pendingClasses;
frost$collections$Array* $tmp1117 = *$tmp1116;
ITable* $tmp1118 = ((frost$collections$CollectionView*) $tmp1117)->$class->itable;
while ($tmp1118->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1118 = $tmp1118->next;
}
$fn1120 $tmp1119 = $tmp1118->methods[0];
frost$core$Int $tmp1121 = $tmp1119(((frost$collections$CollectionView*) $tmp1117));
frost$core$Int $tmp1122 = (frost$core$Int) {1u};
int64_t $tmp1123 = $tmp1121.value;
int64_t $tmp1124 = $tmp1122.value;
int64_t $tmp1125 = $tmp1123 - $tmp1124;
frost$core$Int $tmp1126 = (frost$core$Int) {$tmp1125};
frost$core$Object* $tmp1127 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T($tmp1115, $tmp1126);
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp1127)));
org$frostlang$frostc$ClassDecl* $tmp1128 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1128));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) $tmp1127);
frost$core$Frost$unref$frost$core$Object$Q($tmp1127);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6214
org$frostlang$frostc$ClassDecl* $tmp1129 = *(&local72);
org$frostlang$frostc$Compiler$compile$org$frostlang$frostc$ClassDecl($tmp1101, $tmp1129);
org$frostlang$frostc$ClassDecl* $tmp1130 = *(&local72);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1130));
*(&local72) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block216;
block218:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:6216
org$frostlang$frostc$CodeGenerator** $tmp1131 = &$tmp1101->codeGenerator;
org$frostlang$frostc$CodeGenerator* $tmp1132 = *$tmp1131;
ITable* $tmp1133 = $tmp1132->$class->itable;
while ($tmp1133->$class != (frost$core$Class*) &org$frostlang$frostc$CodeGenerator$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[5];
$tmp1134($tmp1132);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:357
goto block219;
block219:;
frost$threads$MessageQueue* $tmp1136 = *(&local63);
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from Main.frost:357:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp1137 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp1138 = &$tmp1136->lock;
frost$threads$Lock* $tmp1139 = *$tmp1138;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp1137, $tmp1139);
*(&local73) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
frost$threads$ScopedLock* $tmp1140 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1140));
*(&local73) = $tmp1137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1137));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int* $tmp1141 = &$tmp1136->count;
frost$core$Int $tmp1142 = *$tmp1141;
frost$threads$ScopedLock* $tmp1143 = *(&local73);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1143));
*(&local73) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp1144 = (frost$core$Int) {0u};
int64_t $tmp1145 = $tmp1142.value;
int64_t $tmp1146 = $tmp1144.value;
bool $tmp1147 = $tmp1145 > $tmp1146;
frost$core$Bit $tmp1148 = (frost$core$Bit) {$tmp1147};
bool $tmp1149 = $tmp1148.value;
if ($tmp1149) goto block220; else goto block221;
block220:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:358
frost$threads$MessageQueue* $tmp1150 = *(&local63);
frost$core$Immutable* $tmp1151 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp1150);
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Message*) $tmp1151)));
org$frostlang$frostc$Compiler$Message* $tmp1152 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1152));
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) $tmp1151);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1151));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:360
org$frostlang$frostc$Compiler$Message* $tmp1153 = *(&local74);
frost$core$Int* $tmp1154 = &$tmp1153->$rawValue;
frost$core$Int $tmp1155 = *$tmp1154;
frost$core$Int $tmp1156 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:361:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1157 = $tmp1155.value;
int64_t $tmp1158 = $tmp1156.value;
bool $tmp1159 = $tmp1157 == $tmp1158;
frost$core$Bit $tmp1160 = (frost$core$Bit) {$tmp1159};
bool $tmp1161 = $tmp1160.value;
if ($tmp1161) goto block225; else goto block226;
block225:;
frost$core$String** $tmp1162 = (frost$core$String**) ($tmp1153->$data + 0);
frost$core$String* $tmp1163 = *$tmp1162;
*(&local75) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1163));
frost$core$String* $tmp1164 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1164));
*(&local75) = $tmp1163;
frost$core$Int* $tmp1165 = (frost$core$Int*) ($tmp1153->$data + 8);
frost$core$Int $tmp1166 = *$tmp1165;
*(&local76) = $tmp1166;
frost$core$Int* $tmp1167 = (frost$core$Int*) ($tmp1153->$data + 16);
frost$core$Int $tmp1168 = *$tmp1167;
*(&local77) = $tmp1168;
frost$core$String** $tmp1169 = (frost$core$String**) ($tmp1153->$data + 24);
frost$core$String* $tmp1170 = *$tmp1169;
*(&local78) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1170));
frost$core$String* $tmp1171 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1171));
*(&local78) = $tmp1170;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:362
frost$core$Int $tmp1172 = *(&local52);
frost$core$Int $tmp1173 = (frost$core$Int) {1u};
int64_t $tmp1174 = $tmp1172.value;
int64_t $tmp1175 = $tmp1173.value;
int64_t $tmp1176 = $tmp1174 + $tmp1175;
frost$core$Int $tmp1177 = (frost$core$Int) {$tmp1176};
*(&local52) = $tmp1177;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:363
frost$core$String* $tmp1178 = *(&local75);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:363:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$String* $tmp1179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1178, &$s1180);
frost$core$Int $tmp1181 = *(&local76);
frost$core$Int$wrapper* $tmp1182;
$tmp1182 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1182->value = $tmp1181;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:363:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1184 $tmp1183 = ($fn1184) ((frost$core$Object*) $tmp1182)->$class->vtable[0];
frost$core$String* $tmp1185 = $tmp1183(((frost$core$Object*) $tmp1182));
frost$core$String* $tmp1186 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1179, $tmp1185);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$String* $tmp1187 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1186, &$s1188);
frost$core$Int $tmp1189 = *(&local77);
frost$core$Int$wrapper* $tmp1190;
$tmp1190 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1190->value = $tmp1189;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:363:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1192 $tmp1191 = ($fn1192) ((frost$core$Object*) $tmp1190)->$class->vtable[0];
frost$core$String* $tmp1193 = $tmp1191(((frost$core$Object*) $tmp1190));
frost$core$String* $tmp1194 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1187, $tmp1193);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1193));
frost$core$String* $tmp1195 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1194, &$s1196);
frost$core$String* $tmp1197 = *(&local78);
frost$core$String* $tmp1198 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1195, $tmp1197);
frost$core$String* $tmp1199 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1198, &$s1200);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:363:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1199);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1201);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1199));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1198));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1194));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1187));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1186));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1182));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1178));
frost$core$String* $tmp1202 = *(&local78);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1202));
*(&local78) = ((frost$core$String*) NULL);
frost$core$String* $tmp1203 = *(&local75);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1203));
*(&local75) = ((frost$core$String*) NULL);
goto block224;
block226:;
frost$core$Int $tmp1204 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:365:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1205 = $tmp1155.value;
int64_t $tmp1206 = $tmp1204.value;
bool $tmp1207 = $tmp1205 == $tmp1206;
frost$core$Bit $tmp1208 = (frost$core$Bit) {$tmp1207};
bool $tmp1209 = $tmp1208.value;
if ($tmp1209) goto block233; else goto block224;
block233:;
frost$core$String** $tmp1210 = (frost$core$String**) ($tmp1153->$data + 0);
frost$core$String* $tmp1211 = *$tmp1210;
*(&local79) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1211));
frost$core$String* $tmp1212 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1212));
*(&local79) = $tmp1211;
frost$core$Int* $tmp1213 = (frost$core$Int*) ($tmp1153->$data + 8);
frost$core$Int $tmp1214 = *$tmp1213;
*(&local80) = $tmp1214;
frost$core$Int* $tmp1215 = (frost$core$Int*) ($tmp1153->$data + 16);
frost$core$Int $tmp1216 = *$tmp1215;
*(&local81) = $tmp1216;
frost$core$String** $tmp1217 = (frost$core$String**) ($tmp1153->$data + 24);
frost$core$String* $tmp1218 = *$tmp1217;
*(&local82) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1218));
frost$core$String* $tmp1219 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1219));
*(&local82) = $tmp1218;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:366
frost$core$Int $tmp1220 = *(&local53);
frost$core$Int $tmp1221 = (frost$core$Int) {1u};
int64_t $tmp1222 = $tmp1220.value;
int64_t $tmp1223 = $tmp1221.value;
int64_t $tmp1224 = $tmp1222 + $tmp1223;
frost$core$Int $tmp1225 = (frost$core$Int) {$tmp1224};
*(&local53) = $tmp1225;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:367
frost$core$String* $tmp1226 = *(&local79);
// begin inline call to function frost.core.String.get_asString():frost.core.String from Main.frost:367:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$String* $tmp1227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1226, &$s1228);
frost$core$Int $tmp1229 = *(&local80);
frost$core$Int$wrapper* $tmp1230;
$tmp1230 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1230->value = $tmp1229;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:367:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1232 $tmp1231 = ($fn1232) ((frost$core$Object*) $tmp1230)->$class->vtable[0];
frost$core$String* $tmp1233 = $tmp1231(((frost$core$Object*) $tmp1230));
frost$core$String* $tmp1234 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1227, $tmp1233);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1233));
frost$core$String* $tmp1235 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1234, &$s1236);
frost$core$Int $tmp1237 = *(&local81);
frost$core$Int$wrapper* $tmp1238;
$tmp1238 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp1238->value = $tmp1237;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Main.frost:367:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn1240 $tmp1239 = ($fn1240) ((frost$core$Object*) $tmp1238)->$class->vtable[0];
frost$core$String* $tmp1241 = $tmp1239(((frost$core$Object*) $tmp1238));
frost$core$String* $tmp1242 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1235, $tmp1241);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1241));
frost$core$String* $tmp1243 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1242, &$s1244);
frost$core$String* $tmp1245 = *(&local82);
frost$core$String* $tmp1246 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1243, $tmp1245);
frost$core$String* $tmp1247 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1246, &$s1248);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:367:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1247);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1249);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1247));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1246));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1243));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1242));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1238));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1235));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1234));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1230));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1226));
frost$core$String* $tmp1250 = *(&local82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1250));
*(&local82) = ((frost$core$String*) NULL);
frost$core$String* $tmp1251 = *(&local79);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1251));
*(&local79) = ((frost$core$String*) NULL);
goto block224;
block224:;
org$frostlang$frostc$Compiler$Message* $tmp1252 = *(&local74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1252));
*(&local74) = ((org$frostlang$frostc$Compiler$Message*) NULL);
goto block219;
block221:;
org$frostlang$frostc$Compiler* $tmp1253 = *(&local64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1253));
*(&local64) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp1254 = *(&local63);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1254));
*(&local63) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp1255 = *(&local62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1255));
*(&local62) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp1256 = *(&local54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1256));
*(&local54) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:372
frost$core$Int $tmp1257 = *(&local53);
frost$core$Int $tmp1258 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:372:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1259 = $tmp1257.value;
int64_t $tmp1260 = $tmp1258.value;
bool $tmp1261 = $tmp1259 == $tmp1260;
frost$core$Bit $tmp1262 = (frost$core$Bit) {$tmp1261};
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block240; else goto block242;
block240:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:374
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:374:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1264);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1265);
goto block241;
block242:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:376
frost$core$Int $tmp1266 = *(&local53);
frost$core$Int $tmp1267 = (frost$core$Int) {0u};
int64_t $tmp1268 = $tmp1266.value;
int64_t $tmp1269 = $tmp1267.value;
bool $tmp1270 = $tmp1268 > $tmp1269;
frost$core$Bit $tmp1271 = (frost$core$Bit) {$tmp1270};
bool $tmp1272 = $tmp1271.value;
if ($tmp1272) goto block246; else goto block247;
block246:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:378
frost$core$Int $tmp1273 = *(&local53);
frost$core$String* $tmp1274 = frost$core$Int$get_asString$R$frost$core$String($tmp1273);
frost$core$String* $tmp1275 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1274, &$s1276);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:378:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1275);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1277);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1275));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1274));
goto block247;
block247:;
goto block241;
block241:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:380
frost$core$Int $tmp1278 = *(&local52);
frost$core$Int $tmp1279 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:380:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1280 = $tmp1278.value;
int64_t $tmp1281 = $tmp1279.value;
bool $tmp1282 = $tmp1280 == $tmp1281;
frost$core$Bit $tmp1283 = (frost$core$Bit) {$tmp1282};
bool $tmp1284 = $tmp1283.value;
if ($tmp1284) goto block250; else goto block252;
block250:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:381
org$frostlang$frostc$Main$Format$nullable $tmp1285 = *(&local6);
frost$core$Int $tmp1286 = ((org$frostlang$frostc$Main$Format) $tmp1285.value).$rawValue;
frost$core$Int $tmp1287 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:382:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287.value;
bool $tmp1290 = $tmp1288 == $tmp1289;
frost$core$Bit $tmp1291 = (frost$core$Bit) {$tmp1290};
bool $tmp1292 = $tmp1291.value;
if ($tmp1292) goto block255; else goto block256;
block255:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:383
frost$io$File* $tmp1293 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:383:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1294 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1293, &$s1295);
frost$core$String** $tmp1296 = &$tmp1294->path;
frost$core$String* $tmp1297 = *$tmp1296;
frost$core$String* $tmp1298 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1297);
*(&local84) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$String* $tmp1299 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1299));
*(&local84) = $tmp1298;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1298));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1294));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1300 = *(&local84);
frost$core$Bit $tmp1301 = (frost$core$Bit) {$tmp1300 == NULL};
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block260; else goto block261;
block260:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1303 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1303));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block259;
block261:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1304 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1305 = *(&local84);
frost$io$File$init$frost$core$String($tmp1304, $tmp1305);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
frost$core$String* $tmp1306 = *(&local84);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1306));
*(&local84) = ((frost$core$String*) NULL);
*(&local83) = $tmp1304;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1304));
goto block259;
block259:;
frost$io$File* $tmp1307 = *(&local83);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1308 = frost$io$File$get_name$R$frost$core$String($tmp1293);
*(&local86) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
frost$core$String* $tmp1309 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1309));
*(&local86) = $tmp1308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1308));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1310 = *(&local86);
frost$core$String$Index$nullable $tmp1311 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1310, &$s1312);
*(&local87) = $tmp1311;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1313 = *(&local87);
frost$core$Bit $tmp1314 = (frost$core$Bit) {!$tmp1313.nonnull};
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block263; else goto block264;
block263:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1316 = *(&local86);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
frost$core$String* $tmp1317 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1317));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1316;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1316));
goto block262;
block264:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1318 = *(&local86);
frost$core$String$Index$nullable $tmp1319 = *(&local87);
frost$core$Bit $tmp1320 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1321 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1319, $tmp1320);
frost$core$String* $tmp1322 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1318, $tmp1321);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
frost$core$String* $tmp1323 = *(&local86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1323));
*(&local86) = ((frost$core$String*) NULL);
*(&local85) = $tmp1322;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1322));
goto block262;
block262:;
frost$core$String* $tmp1324 = *(&local85);
frost$core$String* $tmp1325 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1324, &$s1326);
frost$io$File* $tmp1327 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1307, $tmp1325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1325));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1324));
frost$core$String* $tmp1328 = *(&local85);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1328));
*(&local85) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1307));
frost$io$File* $tmp1329 = *(&local83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1329));
*(&local83) = ((frost$io$File*) NULL);
frost$io$File* $tmp1330 = *(&local3);
frost$core$Bit $tmp1331 = *(&local8);
frost$io$File* $tmp1332 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1327, $tmp1330, $tmp1331);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1327));
goto block254;
block256:;
frost$core$Int $tmp1333 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:385:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1334 = $tmp1286.value;
int64_t $tmp1335 = $tmp1333.value;
bool $tmp1336 = $tmp1334 == $tmp1335;
frost$core$Bit $tmp1337 = (frost$core$Bit) {$tmp1336};
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block265; else goto block254;
block265:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:386
frost$io$File* $tmp1339 = *(&local3);
// begin inline call to function frost.io.File.withExtension(ext:frost.core.String):frost.io.File from Main.frost:386:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:185
// begin inline call to function frost.io.File.get_parent():frost.io.File? from File.frost:185:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:140
frost$io$File* $tmp1340 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1339, &$s1341);
frost$core$String** $tmp1342 = &$tmp1340->path;
frost$core$String* $tmp1343 = *$tmp1342;
frost$core$String* $tmp1344 = frost$io$File$normalize$frost$core$String$R$frost$core$String$Q($tmp1343);
*(&local89) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$String* $tmp1345 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1345));
*(&local89) = $tmp1344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1344));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:141
frost$core$String* $tmp1346 = *(&local89);
frost$core$Bit $tmp1347 = (frost$core$Bit) {$tmp1346 == NULL};
bool $tmp1348 = $tmp1347.value;
if ($tmp1348) goto block269; else goto block270;
block269:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$core$String* $tmp1349 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1349));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
goto block268;
block270:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:144
FROST_ASSERT(24 == sizeof(frost$io$File));
frost$io$File* $tmp1350 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp1351 = *(&local89);
frost$io$File$init$frost$core$String($tmp1350, $tmp1351);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
frost$core$String* $tmp1352 = *(&local89);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1352));
*(&local89) = ((frost$core$String*) NULL);
*(&local88) = $tmp1350;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1350));
goto block268;
block268:;
frost$io$File* $tmp1353 = *(&local88);
// begin inline call to function frost.io.File.get_simpleName():frost.core.String from File.frost:185:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:158
frost$core$String* $tmp1354 = frost$io$File$get_name$R$frost$core$String($tmp1339);
*(&local91) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
frost$core$String* $tmp1355 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1355));
*(&local91) = $tmp1354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1354));
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:159
frost$core$String* $tmp1356 = *(&local91);
frost$core$String$Index$nullable $tmp1357 = frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q($tmp1356, &$s1358);
*(&local92) = $tmp1357;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:160
frost$core$String$Index$nullable $tmp1359 = *(&local92);
frost$core$Bit $tmp1360 = (frost$core$Bit) {!$tmp1359.nonnull};
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block272; else goto block273;
block272:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:161
frost$core$String* $tmp1362 = *(&local91);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
frost$core$String* $tmp1363 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1363));
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = $tmp1362;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1362));
goto block271;
block273:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/File.frost:163
frost$core$String* $tmp1364 = *(&local91);
frost$core$String$Index$nullable $tmp1365 = *(&local92);
frost$core$Bit $tmp1366 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1367 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { .nonnull = false }), $tmp1365, $tmp1366);
frost$core$String* $tmp1368 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp1364, $tmp1367);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
frost$core$String* $tmp1369 = *(&local91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1369));
*(&local91) = ((frost$core$String*) NULL);
*(&local90) = $tmp1368;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1368));
goto block271;
block271:;
frost$core$String* $tmp1370 = *(&local90);
frost$core$String* $tmp1371 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1370, &$s1372);
frost$io$File* $tmp1373 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp1353, $tmp1371);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1371));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1370));
frost$core$String* $tmp1374 = *(&local90);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1374));
*(&local90) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1353));
frost$io$File* $tmp1375 = *(&local88);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1375));
*(&local88) = ((frost$io$File*) NULL);
frost$io$File* $tmp1376 = *(&local3);
frost$core$Bit $tmp1377 = *(&local8);
frost$io$File* $tmp1378 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1373, $tmp1376, $tmp1377);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1378));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1373));
goto block254;
block254:;
goto block251;
block252:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:391
frost$core$Int $tmp1379 = *(&local52);
frost$core$Int $tmp1380 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:391:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1381 = $tmp1379.value;
int64_t $tmp1382 = $tmp1380.value;
bool $tmp1383 = $tmp1381 == $tmp1382;
frost$core$Bit $tmp1384 = (frost$core$Bit) {$tmp1383};
bool $tmp1385 = $tmp1384.value;
if ($tmp1385) goto block274; else goto block276;
block274:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:393
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:393:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String(&$s1386);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1387);
goto block275;
block276:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:397
frost$core$Int $tmp1388 = *(&local52);
frost$core$String* $tmp1389 = frost$core$Int$get_asString$R$frost$core$String($tmp1388);
frost$core$String* $tmp1390 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1389, &$s1391);
// begin inline call to method frost.io.Console.printLine(s:frost.core.String) from Main.frost:397:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:45
frost$io$Console$print$frost$core$String($tmp1390);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:46
// begin inline call to method frost.io.Console.printLine() from Console.frost:46:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:70
frost$io$Console$print$frost$core$String(&$s1392);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1389));
goto block275;
block275:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:399
frost$core$Int $tmp1393 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int($tmp1393);
goto block251;
block251:;
frost$io$File* $tmp1394 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1394));
*(&local41) = ((frost$io$File*) NULL);
frost$core$String* $tmp1395 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1395));
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1396 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1396));
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1397 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1397));
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1398 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1398));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1399 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1399));
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
void frostMain(frost$collections$ListView* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:405
ITable* $tmp1400 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1400->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1400 = $tmp1400->next;
}
$fn1402 $tmp1401 = $tmp1400->methods[0];
frost$core$Int $tmp1403 = $tmp1401(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1404 = (frost$core$Int) {1u};
int64_t $tmp1405 = $tmp1403.value;
int64_t $tmp1406 = $tmp1404.value;
bool $tmp1407 = $tmp1405 > $tmp1406;
frost$core$Bit $tmp1408 = (frost$core$Bit) {$tmp1407};
bool $tmp1409 = $tmp1408.value;
if ($tmp1409) goto block3; else goto block2;
block3:;
frost$core$Int $tmp1410 = (frost$core$Int) {1u};
ITable* $tmp1411 = param0->$class->itable;
while ($tmp1411->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1411 = $tmp1411->next;
}
$fn1413 $tmp1412 = $tmp1411->methods[0];
frost$core$Object* $tmp1414 = $tmp1412(param0, $tmp1410);
frost$core$Bit $tmp1415 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1414), &$s1416);
bool $tmp1417 = $tmp1415.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1414);
if ($tmp1417) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:406
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:407
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1418 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1418);
frost$core$Int $tmp1419 = (frost$core$Int) {1u};
frost$core$Bit $tmp1420 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp1421 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp1419, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp1420);
ITable* $tmp1422 = param0->$class->itable;
while ($tmp1422->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1422 = $tmp1422->next;
}
$fn1424 $tmp1423 = $tmp1422->methods[2];
frost$collections$ListView* $tmp1425 = $tmp1423(param0, $tmp1421);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1418, $tmp1425);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1425));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1418));
goto block4;
block5:;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:410
ITable* $tmp1426 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp1426->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp1426 = $tmp1426->next;
}
$fn1428 $tmp1427 = $tmp1426->methods[0];
frost$core$Int $tmp1429 = $tmp1427(((frost$collections$CollectionView*) param0));
frost$core$Int $tmp1430 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:410:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp1431 = $tmp1429.value;
int64_t $tmp1432 = $tmp1430.value;
bool $tmp1433 = $tmp1431 == $tmp1432;
frost$core$Bit $tmp1434 = (frost$core$Bit) {$tmp1433};
bool $tmp1435 = $tmp1434.value;
if ($tmp1435) goto block8; else goto block7;
block8:;
frost$core$Int $tmp1436 = (frost$core$Int) {1u};
ITable* $tmp1437 = param0->$class->itable;
while ($tmp1437->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp1437 = $tmp1437->next;
}
$fn1439 $tmp1438 = $tmp1437->methods[0];
frost$core$Object* $tmp1440 = $tmp1438(param0, $tmp1436);
frost$core$Bit $tmp1441 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp1440), &$s1442);
bool $tmp1443 = $tmp1441.value;
frost$core$Frost$unref$frost$core$Object$Q($tmp1440);
if ($tmp1443) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:411
FROST_ASSERT(16 == sizeof(org$frostlang$frostc$Bench));
org$frostlang$frostc$Bench* $tmp1444 = (org$frostlang$frostc$Bench*) frostObjectAlloc(16, (frost$core$Class*) &org$frostlang$frostc$Bench$class);
org$frostlang$frostc$Bench$init($tmp1444);
$fn1446 $tmp1445 = ($fn1446) $tmp1444->$class->vtable[4];
$tmp1445($tmp1444);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1444));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:412
return;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:414
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Main));
org$frostlang$frostc$Main* $tmp1447 = (org$frostlang$frostc$Main*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1447);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1447, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1447));
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1448 = &param0->clang;
frost$io$File* $tmp1449 = *$tmp1448;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1449));
frost$io$File** $tmp1450 = &param0->frostHome;
frost$io$File* $tmp1451 = *$tmp1450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1451));
return;

}

