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
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/core/Maybe.h"
#include "frost/io/InputStream.h"
#include "frost/io/Console.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/io/OutputStream.h"
#include "org/frostlang/frostc/Main/Arguments.h"
#include "org/frostlang/frostc/Main/Format.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "org/frostlang/frostc/Compiler/Settings.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/Compiler/ErrorMsg.h"
#include "frost/core/Equatable.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Immutable.h"
#include "org/frostlang/frostc/Position.h"


static frost$core$String $s1;
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn48)(frost$io$InputStream*);
typedef frost$core$String* (*$fn53)(frost$io$InputStream*);
typedef frost$collections$Iterator* (*$fn100)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn104)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn109)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn179)(frost$io$InputStream*);
typedef frost$core$String* (*$fn184)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn209)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn213)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn216)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn220)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn223)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn227)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn248)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn254)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn277)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn305)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn330)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn364)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn403)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn457)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn465)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Bit (*$fn502)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Int64 (*$fn525)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn543)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn607)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn627)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn652)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn771)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn775)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn780)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn788)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn792)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn797)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn807)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn811)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn816)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn962)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn973)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$ListView* (*$fn985)(frost$collections$ListView*, frost$core$Range$LTfrost$core$Int64$Q$GT);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s88 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s122 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s148 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s218 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s225 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s259 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s300 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s356 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x75\x62", 4, 223740247, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s447 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s461 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s510 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x73\x74\x75\x62\x73", 5, 22597765062, NULL };
static frost$core$String $s518 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s564 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s584 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x73\x74\x75\x62", 5, 15416558793, NULL };
static frost$core$String $s585 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s598 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s599 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s610 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s619 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s643 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s668 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s669 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s712 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s751 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s854 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s867 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s914 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s920 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s930 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s933 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s939 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s946 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s950 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s959 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };
static frost$core$String $s976 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x72\x65\x70\x65\x61\x74", 7, 156190719979287, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

// line 22
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 25
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
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// unreffing REF($5:frost.io.File)
return;

}
frost$io$File* org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$core$System$Process* local1 = NULL;
frost$core$Error* local2 = NULL;
frost$core$Int64 local3;
frost$core$Error* local4 = NULL;
// line 61
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 62
frost$collections$Array* $tmp11 = *(&local0);
frost$core$String** $tmp12 = &param1->path;
frost$core$String* $tmp13 = *$tmp12;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) $tmp13));
// line 63
frost$collections$Array* $tmp14 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp14, ((frost$core$Object*) &$s15));
// line 64
frost$collections$Array* $tmp16 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) &$s17));
// line 65
frost$collections$Array* $tmp18 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) &$s19));
// line 66
frost$core$Bit* $tmp20 = &param0->debug;
frost$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 67
frost$collections$Array* $tmp23 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp23, ((frost$core$Object*) &$s24));
goto block2;
block2:;
// line 69
frost$collections$Array* $tmp25 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp25, ((frost$core$Object*) &$s26));
// line 70
frost$collections$Array* $tmp27 = *(&local0);
frost$core$String** $tmp28 = &param2->path;
frost$core$String* $tmp29 = *$tmp28;
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) $tmp29));
// line 71
*(&local1) = ((frost$core$System$Process*) NULL);
// line 72
*(&local2) = ((frost$core$Error*) NULL);
// line 73
frost$io$File** $tmp30 = &param0->clang;
frost$io$File* $tmp31 = *$tmp30;
frost$core$String** $tmp32 = &$tmp31->path;
frost$core$String* $tmp33 = *$tmp32;
frost$collections$Array* $tmp34 = *(&local0);
frost$core$Maybe* $tmp35 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp33, ((frost$collections$ListView*) $tmp34));
// try maybe check
frost$core$Int64* $tmp36 = &$tmp35->$rawValue;
frost$core$Int64 $tmp37 = *$tmp36;
int64_t $tmp38 = $tmp37.value;
bool $tmp39 = $tmp38 == 0;
if ($tmp39) goto block5; else goto block6;
block6:;
frost$core$Error** $tmp40 = (frost$core$Error**) ($tmp35->$data + 0);
frost$core$Error* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local2) = $tmp41;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($70:frost.core.Maybe<frost.core.System.Process>)
goto block3;
block5:;
frost$core$Object** $tmp42 = (frost$core$Object**) ($tmp35->$data + 0);
frost$core$Object* $tmp43 = *$tmp42;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp43)));
frost$core$System$Process* $tmp44 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local1) = ((frost$core$System$Process*) $tmp43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($70:frost.core.Maybe<frost.core.System.Process>)
// line 74
frost$core$System$Process* $tmp45 = *(&local1);
frost$io$InputStream* $tmp46 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp45);
$fn48 $tmp47 = ($fn48) $tmp46->$class->vtable[14];
frost$core$String* $tmp49 = $tmp47($tmp46);
frost$io$Console$printError$frost$core$String($tmp49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($103:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($101:frost.io.InputStream)
// line 75
frost$core$System$Process* $tmp50 = *(&local1);
frost$io$InputStream* $tmp51 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp50);
$fn53 $tmp52 = ($fn53) $tmp51->$class->vtable[14];
frost$core$String* $tmp54 = $tmp52($tmp51);
frost$io$Console$printError$frost$core$String($tmp54);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing REF($115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing REF($113:frost.io.InputStream)
goto block4;
block3:;
// line 78
frost$core$Error* $tmp55 = *(&local2);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp55));
// line 79
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp56);
goto block4;
block4:;
frost$core$Error* $tmp57 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing error
*(&local2) = ((frost$core$Error*) NULL);
// line 81
frost$core$System$Process* $tmp58 = *(&local1);
frost$core$Int64 $tmp59;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp59, $tmp58);
*(&local3) = $tmp59;
// line 82
frost$core$Bit $tmp60 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block8;
block7:;
// line 83
*(&local4) = ((frost$core$Error*) NULL);
// line 84
frost$core$Error* $tmp62 = frost$io$File$delete$R$frost$core$Error$Q(param1);
// try error check
if ($tmp62 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local4) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($148:frost.core.Error?)
goto block9;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($148:frost.core.Error?)
goto block10;
block9:;
// line 87
frost$core$Error* $tmp63 = *(&local4);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp63));
// line 88
frost$core$Int64 $tmp64 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp64);
goto block10;
block10:;
frost$core$Error* $tmp65 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing error
*(&local4) = ((frost$core$Error*) NULL);
goto block8;
block8:;
// line 91
frost$core$Int64 $tmp66 = *(&local3);
frost$core$Int64 $tmp67 = (frost$core$Int64) {0};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block13; else goto block14;
block13:;
// line 92
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp73);
goto block14;
block14:;
// line 94
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp74 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing p
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$System$Process* local5 = NULL;
frost$core$Error* local6 = NULL;
frost$core$Int64 local7;
frost$core$Error* local8 = NULL;
// line 98
frost$collections$Array* $tmp76 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp76);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$collections$Array* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 99
frost$collections$Array* $tmp78 = *(&local0);
frost$core$String** $tmp79 = &param1->path;
frost$core$String* $tmp80 = *$tmp79;
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) $tmp80));
// line 100
frost$collections$Array* $tmp81 = *(&local0);
frost$core$String* $tmp82 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp83 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s84, $tmp82);
frost$core$String* $tmp85 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp83, &$s86);
frost$collections$Array$add$frost$collections$Array$T($tmp81, ((frost$core$Object*) $tmp85));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($24:frost.core.String)
// line 101
frost$collections$Array* $tmp87 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp87, ((frost$core$Object*) &$s88));
// line 102
frost$collections$Array* $tmp89 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) &$s90));
// line 103
frost$collections$Array* $tmp91 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp91, ((frost$core$Object*) &$s92));
// line 104
frost$core$String* $tmp93 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp94 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp93, &$s95);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
frost$collections$Array* $tmp96 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local1) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($55:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($54:frost.core.String)
// line 105
frost$collections$Array* $tmp97 = *(&local1);
ITable* $tmp98 = ((frost$collections$Iterable*) $tmp97)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
frost$collections$Iterator* $tmp101 = $tmp99(((frost$collections$Iterable*) $tmp97));
goto block1;
block1:;
ITable* $tmp102 = $tmp101->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
frost$core$Bit $tmp105 = $tmp103($tmp101);
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp107 = $tmp101->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[1];
frost$core$Object* $tmp110 = $tmp108($tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp110)));
frost$core$String* $tmp111 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local2) = ((frost$core$String*) $tmp110);
// line 106
frost$io$File* $tmp112 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp113 = *(&local2);
frost$io$File$init$frost$core$String($tmp112, $tmp113);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$io$File* $tmp114 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local3) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($94:frost.io.File)
// line 107
frost$collections$Array* $tmp115 = *(&local0);
frost$io$File* $tmp116 = *(&local3);
frost$io$File* $tmp117 = frost$io$File$get_parent$R$frost$io$File$Q($tmp116);
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit($tmp117 != NULL);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {107};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s121, $tmp120, &$s122);
abort(); // unreachable
block4:;
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s124, ((frost$core$Object*) $tmp117));
frost$collections$Array$add$frost$collections$Array$T($tmp115, ((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($111:frost.io.File?)
// line 108
frost$io$File* $tmp125 = *(&local3);
frost$core$String* $tmp126 = frost$io$File$get_simpleName$R$frost$core$String($tmp125);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$String* $tmp127 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local4) = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($132:frost.core.String)
// line 109
frost$core$String* $tmp128 = *(&local4);
frost$core$Bit $tmp129 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp128, &$s130);
bool $tmp131 = $tmp129.value;
if ($tmp131) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s133, $tmp132);
abort(); // unreachable
block6:;
// line 110
frost$core$String* $tmp134 = *(&local4);
frost$core$Int64 $tmp135 = (frost$core$Int64) {3};
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp137 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp135, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp136);
frost$core$String* $tmp138 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp134, $tmp137);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$String* $tmp139 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
*(&local4) = $tmp138;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// unreffing REF($157:frost.core.String)
// line 111
frost$collections$Array* $tmp140 = *(&local0);
frost$core$String* $tmp141 = *(&local4);
frost$core$String* $tmp142 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s143, $tmp141);
frost$collections$Array$add$frost$collections$Array$T($tmp140, ((frost$core$Object*) $tmp142));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($171:frost.core.String)
frost$core$String* $tmp144 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
// unreffing simpleName
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp145 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing libFile
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp110);
// unreffing REF($85:frost.collections.Iterator.T)
frost$core$String* $tmp146 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// unreffing lib
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($74:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 113
frost$collections$Array* $tmp147 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp147, ((frost$core$Object*) &$s148));
// line 114
frost$collections$Array* $tmp149 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp149, ((frost$core$Object*) &$s150));
// line 115
frost$core$Bit* $tmp151 = &param0->debug;
frost$core$Bit $tmp152 = *$tmp151;
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block8; else goto block9;
block8:;
// line 116
frost$collections$Array* $tmp154 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp154, ((frost$core$Object*) &$s155));
goto block9;
block9:;
// line 118
frost$collections$Array* $tmp156 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp156, ((frost$core$Object*) &$s157));
// line 119
frost$collections$Array* $tmp158 = *(&local0);
frost$core$String** $tmp159 = &param2->path;
frost$core$String* $tmp160 = *$tmp159;
frost$collections$Array$add$frost$collections$Array$T($tmp158, ((frost$core$Object*) $tmp160));
// line 120
*(&local5) = ((frost$core$System$Process*) NULL);
// line 121
*(&local6) = ((frost$core$Error*) NULL);
// line 122
frost$io$File** $tmp161 = &param0->clang;
frost$io$File* $tmp162 = *$tmp161;
frost$core$String** $tmp163 = &$tmp162->path;
frost$core$String* $tmp164 = *$tmp163;
frost$collections$Array* $tmp165 = *(&local0);
frost$core$Maybe* $tmp166 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp164, ((frost$collections$ListView*) $tmp165));
// try maybe check
frost$core$Int64* $tmp167 = &$tmp166->$rawValue;
frost$core$Int64 $tmp168 = *$tmp167;
int64_t $tmp169 = $tmp168.value;
bool $tmp170 = $tmp169 == 0;
if ($tmp170) goto block12; else goto block13;
block13:;
frost$core$Error** $tmp171 = (frost$core$Error**) ($tmp166->$data + 0);
frost$core$Error* $tmp172 = *$tmp171;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local6) = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($243:frost.core.Maybe<frost.core.System.Process>)
goto block10;
block12:;
frost$core$Object** $tmp173 = (frost$core$Object**) ($tmp166->$data + 0);
frost$core$Object* $tmp174 = *$tmp173;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp174)));
frost$core$System$Process* $tmp175 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
*(&local5) = ((frost$core$System$Process*) $tmp174);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp166));
// unreffing REF($243:frost.core.Maybe<frost.core.System.Process>)
// line 123
frost$core$System$Process* $tmp176 = *(&local5);
frost$io$InputStream* $tmp177 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp176);
$fn179 $tmp178 = ($fn179) $tmp177->$class->vtable[14];
frost$core$String* $tmp180 = $tmp178($tmp177);
frost$io$Console$printError$frost$core$String($tmp180);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing REF($276:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($274:frost.io.InputStream)
// line 124
frost$core$System$Process* $tmp181 = *(&local5);
frost$io$InputStream* $tmp182 = frost$core$System$Process$standardError$R$frost$io$InputStream($tmp181);
$fn184 $tmp183 = ($fn184) $tmp182->$class->vtable[14];
frost$core$String* $tmp185 = $tmp183($tmp182);
frost$io$Console$printError$frost$core$String($tmp185);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing REF($288:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($286:frost.io.InputStream)
goto block11;
block10:;
// line 127
frost$core$Error* $tmp186 = *(&local6);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp186));
// line 128
frost$core$Int64 $tmp187 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp187);
goto block11;
block11:;
frost$core$Error* $tmp188 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing error
*(&local6) = ((frost$core$Error*) NULL);
// line 130
frost$core$System$Process* $tmp189 = *(&local5);
frost$core$Int64 $tmp190;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp190, $tmp189);
*(&local7) = $tmp190;
// line 131
frost$core$Bit $tmp191 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block14; else goto block15;
block14:;
// line 132
*(&local8) = ((frost$core$Error*) NULL);
// line 133
frost$core$Error* $tmp193 = frost$io$File$delete$R$frost$core$Error$Q(param1);
// try error check
if ($tmp193 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local8) = $tmp193;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($321:frost.core.Error?)
goto block16;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($321:frost.core.Error?)
goto block17;
block16:;
// line 136
frost$core$Error* $tmp194 = *(&local8);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp194));
// line 137
frost$core$Int64 $tmp195 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp195);
goto block17;
block17:;
frost$core$Error* $tmp196 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
// unreffing error
*(&local8) = ((frost$core$Error*) NULL);
goto block15;
block15:;
// line 140
frost$core$Int64 $tmp197 = *(&local7);
frost$core$Int64 $tmp198 = (frost$core$Int64) {0};
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198.value;
bool $tmp201 = $tmp199 != $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block20; else goto block21;
block20:;
// line 141
frost$core$Int64 $tmp204 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp204);
goto block21;
block21:;
// line 143
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp205 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing p
*(&local5) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing icuLibs
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// line 147
*(&local0) = ((frost$core$Error*) NULL);
// line 148
$fn209 $tmp208 = ($fn209) param1->$class->vtable[19];
frost$core$Error* $tmp210 = $tmp208(param1, &$s211);
// try error check
if ($tmp210 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local0) = $tmp210;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($4:frost.core.Error?)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($4:frost.core.Error?)
// line 149
$fn213 $tmp212 = ($fn213) param1->$class->vtable[21];
frost$core$Error* $tmp214 = $tmp212(param1);
// try error check
if ($tmp214 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
*(&local0) = $tmp214;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($20:frost.core.Error?)
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($20:frost.core.Error?)
// line 150
$fn216 $tmp215 = ($fn216) param1->$class->vtable[19];
frost$core$Error* $tmp217 = $tmp215(param1, &$s218);
// try error check
if ($tmp217 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
*(&local0) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($36:frost.core.Error?)
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($36:frost.core.Error?)
// line 151
$fn220 $tmp219 = ($fn220) param1->$class->vtable[21];
frost$core$Error* $tmp221 = $tmp219(param1);
// try error check
if ($tmp221 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
*(&local0) = $tmp221;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($52:frost.core.Error?)
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing REF($52:frost.core.Error?)
// line 152
$fn223 $tmp222 = ($fn223) param1->$class->vtable[19];
frost$core$Error* $tmp224 = $tmp222(param1, &$s225);
// try error check
if ($tmp224 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local0) = $tmp224;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($68:frost.core.Error?)
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing REF($68:frost.core.Error?)
// line 153
$fn227 $tmp226 = ($fn227) param1->$class->vtable[19];
frost$core$Error* $tmp228 = $tmp226(param1, &$s229);
// try error check
if ($tmp228 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
*(&local0) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($84:frost.core.Error?)
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($84:frost.core.Error?)
goto block2;
block1:;
// line 156
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit(false);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {156};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s233, $tmp232);
abort(); // unreachable
block15:;
goto block2;
block2:;
frost$core$Error* $tmp234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return;

}
void org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(org$frostlang$frostc$Main* param0, frost$collections$ListView* param1) {

org$frostlang$frostc$Main$Arguments* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
org$frostlang$frostc$Main$Format$nullable local6;
frost$core$String* local7 = NULL;
frost$core$Bit local8;
frost$core$String* local9 = NULL;
frost$core$Error* local10 = NULL;
frost$io$File* local11 = NULL;
frost$core$Error* local12 = NULL;
frost$core$String* local13 = NULL;
frost$core$Bit local14;
frost$core$String* local15 = NULL;
frost$core$Bit local16;
frost$core$String* local17 = NULL;
frost$io$File* local18 = NULL;
frost$core$Bit local19;
frost$io$File* local20 = NULL;
frost$core$String* local21 = NULL;
frost$core$Int64 local22;
org$frostlang$frostc$CodeGenerator* local23 = NULL;
frost$core$Error* local24 = NULL;
frost$core$Error* local25 = NULL;
org$frostlang$frostc$Compiler$Settings* local26 = NULL;
frost$threads$MessageQueue* local27 = NULL;
org$frostlang$frostc$Compiler* local28 = NULL;
frost$io$File* local29 = NULL;
org$frostlang$frostc$ClassDecl* local30 = NULL;
frost$io$File* local31 = NULL;
frost$core$Int64 local32;
org$frostlang$frostc$Compiler$ErrorMsg* local33 = NULL;
// line 161
org$frostlang$frostc$Main$Arguments* $tmp235 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp235, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
org$frostlang$frostc$Main$Arguments* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local0) = $tmp235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 162
frost$collections$Array* $tmp237 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp237);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$collections$Array* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local1) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 163
frost$collections$Array* $tmp239 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp239);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$collections$Array* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local2) = $tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp241 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local3) = ((frost$io$File*) NULL);
// line 165
frost$core$Int64 $tmp242 = (frost$core$Int64) {3};
*(&local4) = $tmp242;
// line 166
frost$core$Int64 $tmp243 = (frost$core$Int64) {3};
*(&local5) = $tmp243;
// line 167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp244 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local7) = ((frost$core$String*) NULL);
// line 169
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp245;
// line 170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp246 = *(&local0);
$fn248 $tmp247 = ($fn248) $tmp246->$class->vtable[2];
frost$core$Bit $tmp249 = $tmp247($tmp246);
frost$core$Bit $tmp250 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block2; else goto block3;
block2:;
// line 171
org$frostlang$frostc$Main$Arguments* $tmp252 = *(&local0);
$fn254 $tmp253 = ($fn254) $tmp252->$class->vtable[3];
frost$core$String* $tmp255 = $tmp253($tmp252);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$core$String* $tmp256 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local9) = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($79:frost.core.String)
// line 172
frost$core$String* $tmp257 = *(&local9);
frost$core$Bit $tmp258 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp257, &$s259);
bool $tmp260 = $tmp258.value;
if ($tmp260) goto block5; else goto block6;
block5:;
// line 174
*(&local10) = ((frost$core$Error*) NULL);
// line 175
frost$io$File* $tmp261 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp261, &$s262);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
frost$io$File* $tmp263 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local11) = $tmp261;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($98:frost.io.File)
// line 176
frost$io$InputStream* $tmp264 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp265 = *(&local11);
frost$core$Maybe* $tmp266 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp265);
// try maybe check
frost$core$Int64* $tmp267 = &$tmp266->$rawValue;
frost$core$Int64 $tmp268 = *$tmp267;
int64_t $tmp269 = $tmp268.value;
bool $tmp270 = $tmp269 == 0;
if ($tmp270) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp271 = (frost$core$Error**) ($tmp266->$data + 0);
frost$core$Error* $tmp272 = *$tmp271;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local10) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($113:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($111:frost.io.InputStream)
frost$io$File* $tmp273 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp274 = (frost$core$Object**) ($tmp266->$data + 0);
frost$core$Object* $tmp275 = *$tmp274;
$fn277 $tmp276 = ($fn277) $tmp264->$class->vtable[17];
frost$core$Maybe* $tmp278 = $tmp276($tmp264, ((frost$io$OutputStream*) $tmp275));
// try maybe check
frost$core$Int64* $tmp279 = &$tmp278->$rawValue;
frost$core$Int64 $tmp280 = *$tmp279;
int64_t $tmp281 = $tmp280.value;
bool $tmp282 = $tmp281 == 0;
if ($tmp282) goto block11; else goto block12;
block12:;
frost$core$Error** $tmp283 = (frost$core$Error**) ($tmp278->$data + 0);
frost$core$Error* $tmp284 = *$tmp283;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local10) = $tmp284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing REF($142:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($113:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($111:frost.io.InputStream)
frost$io$File* $tmp285 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block11:;
frost$core$Object** $tmp286 = (frost$core$Object**) ($tmp278->$data + 0);
frost$core$Object* $tmp287 = *$tmp286;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing REF($142:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
// unreffing REF($113:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($111:frost.io.InputStream)
// line 177
frost$collections$Array* $tmp288 = *(&local1);
frost$io$File* $tmp289 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp288, ((frost$core$Object*) $tmp289));
frost$io$File* $tmp290 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 180
frost$core$Error* $tmp291 = *(&local10);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp291));
// line 181
frost$core$Int64 $tmp292 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp292);
goto block8;
block8:;
frost$core$Error* $tmp293 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing error
*(&local10) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp294 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp257, &$s295);
bool $tmp296 = $tmp294.value;
if ($tmp296) goto block13; else goto block14;
block13:;
// line 185
frost$io$File* $tmp297 = *(&local3);
frost$core$Bit $tmp298 = frost$core$Bit$init$builtin_bit($tmp297 != NULL);
bool $tmp299 = $tmp298.value;
if ($tmp299) goto block15; else goto block16;
block15:;
// line 186
frost$io$Console$printErrorLine$frost$core$String(&$s300);
// line 187
frost$core$Int64 $tmp301 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp301);
goto block16;
block16:;
// line 189
frost$io$File* $tmp302 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp303 = *(&local0);
$fn305 $tmp304 = ($fn305) $tmp303->$class->vtable[4];
frost$core$String* $tmp306 = $tmp304($tmp303, &$s307);
frost$io$File$init$frost$core$String($tmp302, $tmp306);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$io$File* $tmp308 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
*(&local3) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($227:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($224:frost.io.File)
// line 190
*(&local12) = ((frost$core$Error*) NULL);
// line 191
frost$io$File* $tmp309 = *(&local3);
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit($tmp309 != NULL);
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp312 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s313, $tmp312, &$s314);
abort(); // unreachable
block19:;
frost$io$File* $tmp315 = frost$io$File$get_parent$R$frost$io$File$Q($tmp309);
frost$core$Bit $tmp316 = frost$core$Bit$init$builtin_bit($tmp315 != NULL);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp318 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block21:;
frost$core$Error* $tmp321 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp315);
// try error check
if ($tmp321 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local12) = $tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($263:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($254:frost.io.File?)
goto block17;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($263:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($254:frost.io.File?)
goto block18;
block17:;
// line 194
frost$core$Error* $tmp322 = *(&local12);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp322));
// line 195
frost$core$Int64 $tmp323 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp323);
goto block18;
block18:;
frost$core$Error* $tmp324 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing error
*(&local12) = ((frost$core$Error*) NULL);
goto block4;
block14:;
frost$core$Bit $tmp325 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp257, &$s326);
bool $tmp327 = $tmp325.value;
if ($tmp327) goto block25; else goto block26;
block25:;
// line 199
org$frostlang$frostc$Main$Arguments* $tmp328 = *(&local0);
$fn330 $tmp329 = ($fn330) $tmp328->$class->vtable[4];
frost$core$String* $tmp331 = $tmp329($tmp328, &$s332);
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$String* $tmp333 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
*(&local13) = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
// unreffing REF($304:frost.core.String)
// line 200
frost$core$String* $tmp334 = *(&local13);
frost$core$Int64$nullable $tmp335 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp334);
frost$core$Bit $tmp336 = frost$core$Bit$init$builtin_bit($tmp335.nonnull);
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp338 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s339, $tmp338, &$s340);
abort(); // unreachable
block27:;
*(&local4) = ((frost$core$Int64) $tmp335.value);
// line 201
frost$core$Int64 $tmp341 = *(&local4);
frost$core$Int64 $tmp342 = (frost$core$Int64) {3};
int64_t $tmp343 = $tmp341.value;
int64_t $tmp344 = $tmp342.value;
bool $tmp345 = $tmp343 > $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block31; else goto block32;
block31:;
*(&local14) = $tmp346;
goto block33;
block32:;
frost$core$Int64 $tmp348 = *(&local4);
frost$core$Int64 $tmp349 = (frost$core$Int64) {0};
int64_t $tmp350 = $tmp348.value;
int64_t $tmp351 = $tmp349.value;
bool $tmp352 = $tmp350 < $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
*(&local14) = $tmp353;
goto block33;
block33:;
frost$core$Bit $tmp354 = *(&local14);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block29; else goto block30;
block29:;
// line 202
frost$io$Console$printErrorLine$frost$core$String(&$s356);
// line 203
frost$core$Int64 $tmp357 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp357);
goto block30;
block30:;
frost$core$String* $tmp358 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing level
*(&local13) = ((frost$core$String*) NULL);
goto block4;
block26:;
frost$core$Bit $tmp359 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp257, &$s360);
bool $tmp361 = $tmp359.value;
if ($tmp361) goto block34; else goto block35;
block34:;
// line 207
org$frostlang$frostc$Main$Arguments* $tmp362 = *(&local0);
$fn364 $tmp363 = ($fn364) $tmp362->$class->vtable[4];
frost$core$String* $tmp365 = $tmp363($tmp362, &$s366);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
frost$core$String* $tmp367 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local15) = $tmp365;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing REF($367:frost.core.String)
// line 208
frost$core$String* $tmp368 = *(&local15);
frost$core$Int64$nullable $tmp369 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp368);
frost$core$Bit $tmp370 = frost$core$Bit$init$builtin_bit($tmp369.nonnull);
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp372 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s373, $tmp372, &$s374);
abort(); // unreachable
block36:;
*(&local5) = ((frost$core$Int64) $tmp369.value);
// line 209
frost$core$Int64 $tmp375 = *(&local5);
frost$core$Int64 $tmp376 = (frost$core$Int64) {3};
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376.value;
bool $tmp379 = $tmp377 > $tmp378;
frost$core$Bit $tmp380 = (frost$core$Bit) {$tmp379};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block40; else goto block41;
block40:;
*(&local16) = $tmp380;
goto block42;
block41:;
frost$core$Int64 $tmp382 = *(&local5);
frost$core$Int64 $tmp383 = (frost$core$Int64) {0};
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 < $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
*(&local16) = $tmp387;
goto block42;
block42:;
frost$core$Bit $tmp388 = *(&local16);
bool $tmp389 = $tmp388.value;
if ($tmp389) goto block38; else goto block39;
block38:;
// line 210
frost$io$Console$printErrorLine$frost$core$String(&$s390);
// line 211
frost$core$Int64 $tmp391 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp391);
goto block39;
block39:;
frost$core$String* $tmp392 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
// unreffing level
*(&local15) = ((frost$core$String*) NULL);
goto block4;
block35:;
frost$core$Bit $tmp393 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp257, &$s394);
bool $tmp395 = $tmp393.value;
if ($tmp395) goto block43; else goto block44;
block43:;
// line 215
org$frostlang$frostc$Main$Format$nullable $tmp396 = *(&local6);
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit($tmp396.nonnull);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block45; else goto block46;
block45:;
// line 216
frost$io$Console$printErrorLine$frost$core$String(&$s399);
// line 217
frost$core$Int64 $tmp400 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp400);
goto block46;
block46:;
// line 219
org$frostlang$frostc$Main$Arguments* $tmp401 = *(&local0);
$fn403 $tmp402 = ($fn403) $tmp401->$class->vtable[4];
frost$core$String* $tmp404 = $tmp402($tmp401, &$s405);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$String* $tmp406 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local17) = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing REF($442:frost.core.String)
// line 220
frost$core$String* $tmp407 = *(&local17);
frost$core$Bit $tmp408 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp407, &$s409);
bool $tmp410 = $tmp408.value;
if ($tmp410) goto block48; else goto block49;
block48:;
// line 221
frost$core$Int64 $tmp411 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp412 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp411);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp412, true });
goto block47;
block49:;
frost$core$Bit $tmp413 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp407, &$s414);
bool $tmp415 = $tmp413.value;
if ($tmp415) goto block50; else goto block51;
block50:;
// line 222
frost$core$Int64 $tmp416 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp417 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp416);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp417, true });
goto block47;
block51:;
frost$core$Bit $tmp418 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp407, &$s419);
bool $tmp420 = $tmp418.value;
if ($tmp420) goto block52; else goto block53;
block52:;
// line 223
frost$core$Int64 $tmp421 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp422 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp421);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp422, true });
goto block47;
block53:;
frost$core$Bit $tmp423 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp407, &$s424);
bool $tmp425 = $tmp423.value;
if ($tmp425) goto block54; else goto block55;
block54:;
// line 224
frost$core$Int64 $tmp426 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp427 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp426);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp427, true });
goto block47;
block55:;
frost$core$Bit $tmp428 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp407, &$s429);
bool $tmp430 = $tmp428.value;
if ($tmp430) goto block56; else goto block57;
block56:;
// line 225
frost$core$Int64 $tmp431 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp432 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp431);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp432, true });
goto block47;
block57:;
frost$core$Bit $tmp433 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp407, &$s434);
bool $tmp435 = $tmp433.value;
if ($tmp435) goto block58; else goto block59;
block58:;
// line 226
frost$core$Int64 $tmp436 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp437 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp436);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp437, true });
goto block47;
block59:;
frost$core$Bit $tmp438 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp407, &$s439);
bool $tmp440 = $tmp438.value;
if ($tmp440) goto block60; else goto block61;
block60:;
// line 227
frost$core$Int64 $tmp441 = (frost$core$Int64) {6};
org$frostlang$frostc$Main$Format $tmp442 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp441);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp442, true });
goto block47;
block61:;
// line 229
frost$core$String* $tmp443 = *(&local17);
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s445, $tmp443);
frost$core$String* $tmp446 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp444, &$s447);
frost$io$Console$printErrorLine$frost$core$String($tmp446);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
// unreffing REF($521:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing REF($520:frost.core.String)
// line 230
frost$core$Int64 $tmp448 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp448);
goto block47;
block47:;
frost$core$String* $tmp449 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing f
*(&local17) = ((frost$core$String*) NULL);
goto block4;
block44:;
frost$core$Bit $tmp450 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp257, &$s451);
bool $tmp452 = $tmp450.value;
if ($tmp452) goto block62; else goto block63;
block62:;
// line 235
frost$collections$Array* $tmp453 = *(&local2);
frost$io$File* $tmp454 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp455 = *(&local0);
$fn457 $tmp456 = ($fn457) $tmp455->$class->vtable[4];
frost$core$String* $tmp458 = $tmp456($tmp455, &$s459);
frost$io$File$init$frost$core$String($tmp454, $tmp458);
frost$collections$Array$add$frost$collections$Array$T($tmp453, ((frost$core$Object*) $tmp454));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing REF($548:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// unreffing REF($545:frost.io.File)
goto block4;
block63:;
frost$core$Bit $tmp460 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp257, &$s461);
bool $tmp462 = $tmp460.value;
if ($tmp462) goto block64; else goto block65;
block64:;
// line 238
org$frostlang$frostc$Main$Arguments* $tmp463 = *(&local0);
$fn465 $tmp464 = ($fn465) $tmp463->$class->vtable[4];
frost$core$String* $tmp466 = $tmp464($tmp463, &$s467);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$core$String* $tmp468 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local7) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($565:frost.core.String)
goto block4;
block65:;
// line 241
frost$core$String* $tmp469 = *(&local9);
frost$core$Bit $tmp470 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp469, &$s471);
bool $tmp472 = $tmp470.value;
if ($tmp472) goto block66; else goto block68;
block66:;
// line 242
frost$io$File* $tmp473 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp474 = *(&local9);
frost$io$File$init$frost$core$String($tmp473, $tmp474);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
frost$io$File* $tmp475 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
*(&local18) = $tmp473;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
// unreffing REF($583:frost.io.File)
// line 243
frost$collections$Array* $tmp476 = *(&local1);
frost$io$File* $tmp477 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp476, ((frost$core$Object*) $tmp477));
frost$io$File* $tmp478 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing f
*(&local18) = ((frost$io$File*) NULL);
goto block67;
block68:;
// line 1
// line 246
frost$core$String* $tmp479 = *(&local9);
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s481, $tmp479);
frost$core$String* $tmp482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp480, &$s483);
frost$io$Console$printErrorLine$frost$core$String($tmp482);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($612:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($611:frost.core.String)
// line 247
frost$core$Int64 $tmp484 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp484);
goto block67;
block67:;
goto block4;
block4:;
frost$core$String* $tmp485 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing a
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 252
org$frostlang$frostc$Main$Format$nullable $tmp486 = *(&local6);
frost$core$Bit $tmp487 = frost$core$Bit$init$builtin_bit(!$tmp486.nonnull);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block71; else goto block72;
block71:;
*(&local19) = $tmp487;
goto block73;
block72:;
org$frostlang$frostc$Main$Format$nullable $tmp489 = *(&local6);
frost$core$Bit $tmp490 = frost$core$Bit$init$builtin_bit($tmp489.nonnull);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block74; else goto block75;
block75:;
frost$core$Int64 $tmp492 = (frost$core$Int64) {252};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s493, $tmp492, &$s494);
abort(); // unreachable
block74:;
frost$core$Equatable* $tmp495;
if ($tmp489.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp496;
    $tmp496 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp496->value = ((org$frostlang$frostc$Main$Format) $tmp489.value);
    $tmp495 = ((frost$core$Equatable*) $tmp496);
}
else {
    $tmp495 = NULL;
}
frost$core$Int64 $tmp497 = (frost$core$Int64) {6};
org$frostlang$frostc$Main$Format $tmp498 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp497);
org$frostlang$frostc$Main$Format$wrapper* $tmp499;
$tmp499 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp499->value = $tmp498;
ITable* $tmp500 = $tmp495->$class->itable;
while ($tmp500->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp500 = $tmp500->next;
}
$fn502 $tmp501 = $tmp500->methods[1];
frost$core$Bit $tmp503 = $tmp501($tmp495, ((frost$core$Equatable*) $tmp499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp499)));
// unreffing REF($651:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
// unreffing REF($647:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
*(&local19) = $tmp503;
goto block73;
block73:;
frost$core$Bit $tmp504 = *(&local19);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block69; else goto block70;
block69:;
// line 253
frost$collections$Array* $tmp506 = *(&local2);
frost$io$File* $tmp507 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp508 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp507, $tmp508);
frost$io$File* $tmp509 = frost$io$File$resolve$frost$core$String$R$frost$io$File($tmp507, &$s510);
frost$collections$Array$add$frost$collections$Array$T($tmp506, ((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// unreffing REF($671:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing REF($669:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($668:frost.io.File)
goto block70;
block70:;
// line 255
frost$collections$Array* $tmp511 = *(&local2);
frost$io$File** $tmp512 = &param0->frostHome;
frost$io$File* $tmp513 = *$tmp512;
frost$collections$Array$add$frost$collections$Array$T($tmp511, ((frost$core$Object*) $tmp513));
// line 256
frost$io$File* $tmp514 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp515 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp514, $tmp515);
*(&local20) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
frost$io$File* $tmp516 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
*(&local20) = $tmp514;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing REF($693:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
// unreffing REF($692:frost.io.File)
// line 257
frost$io$File* $tmp517 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp517, &$s518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
frost$io$File** $tmp519 = &param0->clang;
frost$io$File* $tmp520 = *$tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp520));
frost$io$File** $tmp521 = &param0->clang;
*$tmp521 = $tmp517;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing REF($709:frost.io.File)
// line 258
frost$collections$Array* $tmp522 = *(&local1);
ITable* $tmp523 = ((frost$collections$CollectionView*) $tmp522)->$class->itable;
while ($tmp523->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp523 = $tmp523->next;
}
$fn525 $tmp524 = $tmp523->methods[0];
frost$core$Int64 $tmp526 = $tmp524(((frost$collections$CollectionView*) $tmp522));
frost$core$Int64 $tmp527 = (frost$core$Int64) {0};
frost$core$Bit $tmp528 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp526, $tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block76; else goto block77;
block76:;
// line 259
frost$io$Console$printErrorLine$frost$core$String(&$s530);
// line 260
frost$core$Int64 $tmp531 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp531);
goto block77;
block77:;
// line 262
org$frostlang$frostc$Main$Format$nullable $tmp532 = *(&local6);
frost$core$Bit $tmp533 = frost$core$Bit$init$builtin_bit(!$tmp532.nonnull);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block78; else goto block79;
block78:;
// line 263
frost$core$Int64 $tmp535 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp536 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp535);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp536, true });
goto block79;
block79:;
// line 265
frost$io$File* $tmp537 = *(&local3);
frost$core$Bit $tmp538 = frost$core$Bit$init$builtin_bit($tmp537 == NULL);
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block80; else goto block81;
block80:;
// line 266
frost$collections$Array* $tmp540 = *(&local1);
ITable* $tmp541 = ((frost$collections$CollectionView*) $tmp540)->$class->itable;
while ($tmp541->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp541 = $tmp541->next;
}
$fn543 $tmp542 = $tmp541->methods[0];
frost$core$Int64 $tmp544 = $tmp542(((frost$collections$CollectionView*) $tmp540));
frost$core$Int64 $tmp545 = (frost$core$Int64) {1};
frost$core$Bit $tmp546 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp544, $tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block82; else goto block84;
block82:;
// line 267
*(&local21) = ((frost$core$String*) NULL);
// line 268
org$frostlang$frostc$Main$Format$nullable $tmp548 = *(&local6);
frost$core$Bit $tmp549 = frost$core$Bit$init$builtin_bit($tmp548.nonnull);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp551 = (frost$core$Int64) {268};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s552, $tmp551, &$s553);
abort(); // unreachable
block85:;
frost$core$Int64 $tmp554 = ((org$frostlang$frostc$Main$Format) $tmp548.value).$rawValue;
frost$core$Int64 $tmp555 = (frost$core$Int64) {1};
frost$core$Bit $tmp556 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp555);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block88; else goto block89;
block88:;
// line 269
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s558));
frost$core$String* $tmp559 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local21) = &$s560;
goto block87;
block89:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {2};
frost$core$Bit $tmp562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block90; else goto block91;
block90:;
// line 270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s564));
frost$core$String* $tmp565 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local21) = &$s566;
goto block87;
block91:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {0};
frost$core$Bit $tmp568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block92; else goto block93;
block92:;
// line 271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s570));
frost$core$String* $tmp571 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local21) = &$s572;
goto block87;
block93:;
frost$core$Int64 $tmp573 = (frost$core$Int64) {5};
frost$core$Bit $tmp574 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp573);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block94; else goto block95;
block94:;
// line 272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s576));
frost$core$String* $tmp577 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local21) = &$s578;
goto block87;
block95:;
frost$core$Int64 $tmp579 = (frost$core$Int64) {6};
frost$core$Bit $tmp580 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp579);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block96; else goto block97;
block96:;
// line 273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s582));
frost$core$String* $tmp583 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local21) = &$s584;
goto block87;
block97:;
// line 275
frost$io$Console$printErrorLine$frost$core$String(&$s585);
// line 277
frost$core$Int64 $tmp586 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp586);
goto block87;
block87:;
// line 280
frost$collections$Array* $tmp587 = *(&local1);
frost$core$Int64 $tmp588 = (frost$core$Int64) {0};
frost$core$Object* $tmp589 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp587, $tmp588);
frost$core$String* $tmp590 = *(&local21);
frost$io$File* $tmp591 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp589), $tmp590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$io$File* $tmp592 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local3) = $tmp591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// unreffing REF($850:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp589);
// unreffing REF($847:frost.collections.Array.T)
frost$core$String* $tmp593 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
// unreffing extension
*(&local21) = ((frost$core$String*) NULL);
goto block83;
block84:;
// line 282
org$frostlang$frostc$Main$Format$nullable $tmp594 = *(&local6);
frost$core$Bit $tmp595 = frost$core$Bit$init$builtin_bit($tmp594.nonnull);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp597 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s598, $tmp597, &$s599);
abort(); // unreachable
block100:;
frost$core$Equatable* $tmp600;
if ($tmp594.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp601;
    $tmp601 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp601->value = ((org$frostlang$frostc$Main$Format) $tmp594.value);
    $tmp600 = ((frost$core$Equatable*) $tmp601);
}
else {
    $tmp600 = NULL;
}
frost$core$Int64 $tmp602 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp603 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp602);
org$frostlang$frostc$Main$Format$wrapper* $tmp604;
$tmp604 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp604->value = $tmp603;
ITable* $tmp605 = $tmp600->$class->itable;
while ($tmp605->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp605 = $tmp605->next;
}
$fn607 $tmp606 = $tmp605->methods[0];
frost$core$Bit $tmp608 = $tmp606($tmp600, ((frost$core$Equatable*) $tmp604));
bool $tmp609 = $tmp608.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp604)));
// unreffing REF($883:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp600));
// unreffing REF($879:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp609) goto block98; else goto block102;
block98:;
// line 283
frost$io$Console$printErrorLine$frost$core$String(&$s610);
// line 284
frost$core$Int64 $tmp611 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp611);
goto block99;
block102:;
// line 1
// line 287
frost$io$Console$printErrorLine$frost$core$String(&$s612);
// line 289
frost$core$Int64 $tmp613 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp613);
goto block99;
block99:;
goto block83;
block83:;
goto block81;
block81:;
// line 292
org$frostlang$frostc$Main$Format$nullable $tmp614 = *(&local6);
frost$core$Bit $tmp615 = frost$core$Bit$init$builtin_bit($tmp614.nonnull);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block105; else goto block106;
block106:;
frost$core$Int64 $tmp617 = (frost$core$Int64) {292};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s618, $tmp617, &$s619);
abort(); // unreachable
block105:;
frost$core$Equatable* $tmp620;
if ($tmp614.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp621;
    $tmp621 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp621->value = ((org$frostlang$frostc$Main$Format) $tmp614.value);
    $tmp620 = ((frost$core$Equatable*) $tmp621);
}
else {
    $tmp620 = NULL;
}
frost$core$Int64 $tmp622 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp623 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp622);
org$frostlang$frostc$Main$Format$wrapper* $tmp624;
$tmp624 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp624->value = $tmp623;
ITable* $tmp625 = $tmp620->$class->itable;
while ($tmp625->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp625 = $tmp625->next;
}
$fn627 $tmp626 = $tmp625->methods[0];
frost$core$Bit $tmp628 = $tmp626($tmp620, ((frost$core$Equatable*) $tmp624));
bool $tmp629 = $tmp628.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp624)));
// unreffing REF($922:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing REF($918:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp629) goto block103; else goto block104;
block103:;
// line 293
frost$core$String* $tmp630 = *(&local7);
frost$core$Bit $tmp631 = frost$core$Bit$init$builtin_bit($tmp630 == NULL);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block107; else goto block108;
block107:;
// line 294
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s633));
frost$core$String* $tmp634 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
*(&local7) = &$s633;
goto block108;
block108:;
// line 296
org$frostlang$frostc$HTMLProcessor* $tmp635 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp635);
frost$collections$Array* $tmp636 = *(&local1);
frost$core$Int64 $tmp637 = (frost$core$Int64) {0};
frost$core$Object* $tmp638 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp636, $tmp637);
frost$io$File* $tmp639 = *(&local3);
frost$core$Bit $tmp640 = frost$core$Bit$init$builtin_bit($tmp639 != NULL);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp642 = (frost$core$Int64) {296};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s643, $tmp642, &$s644);
abort(); // unreachable
block109:;
frost$core$String* $tmp645 = *(&local7);
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit($tmp645 != NULL);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block111; else goto block112;
block112:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {296};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s649, $tmp648, &$s650);
abort(); // unreachable
block111:;
$fn652 $tmp651 = ($fn652) $tmp635->$class->vtable[3];
$tmp651($tmp635, ((frost$io$File*) $tmp638), $tmp639, $tmp645);
frost$core$Frost$unref$frost$core$Object$Q($tmp638);
// unreffing REF($954:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
// unreffing REF($949:org.frostlang.frostc.HTMLProcessor)
// line 297
frost$io$File* $tmp653 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing llvmDir
*(&local20) = ((frost$io$File*) NULL);
frost$core$String* $tmp654 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp655 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp655));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp656 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp657 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp658 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block104:;
// line 299
frost$core$String* $tmp659 = *(&local7);
frost$core$Bit $tmp660 = frost$core$Bit$init$builtin_bit($tmp659 != NULL);
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block113; else goto block114;
block113:;
// line 300
frost$io$Console$printErrorLine$frost$core$String(&$s662);
// line 301
frost$core$Int64 $tmp663 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp663);
goto block114;
block114:;
// line 303
// line 1
// line 305
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 306
org$frostlang$frostc$Main$Format$nullable $tmp664 = *(&local6);
frost$core$Bit $tmp665 = frost$core$Bit$init$builtin_bit($tmp664.nonnull);
bool $tmp666 = $tmp665.value;
if ($tmp666) goto block115; else goto block116;
block116:;
frost$core$Int64 $tmp667 = (frost$core$Int64) {306};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s668, $tmp667, &$s669);
abort(); // unreachable
block115:;
frost$core$Int64 $tmp670 = ((org$frostlang$frostc$Main$Format) $tmp664.value).$rawValue;
frost$core$Int64 $tmp671 = (frost$core$Int64) {0};
frost$core$Bit $tmp672 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp670, $tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block118; else goto block119;
block119:;
frost$core$Int64 $tmp674 = (frost$core$Int64) {1};
frost$core$Bit $tmp675 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp670, $tmp674);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block118; else goto block120;
block120:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {2};
frost$core$Bit $tmp678 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp670, $tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block118; else goto block121;
block118:;
// line 308
*(&local24) = ((frost$core$Error*) NULL);
// line 309
org$frostlang$frostc$LLVMCodeGenerator* $tmp680 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp681 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp682 = *(&local3);
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit($tmp682 != NULL);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block124; else goto block125;
block125:;
frost$core$Int64 $tmp685 = (frost$core$Int64) {310};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s686, $tmp685, &$s687);
abort(); // unreachable
block124:;
frost$io$File* $tmp688 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp682, &$s689);
frost$core$Maybe* $tmp690 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp688);
// try maybe check
frost$core$Int64* $tmp691 = &$tmp690->$rawValue;
frost$core$Int64 $tmp692 = *$tmp691;
int64_t $tmp693 = $tmp692.value;
bool $tmp694 = $tmp693 == 0;
if ($tmp694) goto block126; else goto block127;
block127:;
frost$core$Error** $tmp695 = (frost$core$Error**) ($tmp690->$data + 0);
frost$core$Error* $tmp696 = *$tmp695;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
*(&local24) = $tmp696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($1068:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($1067:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($1057:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($1056:org.frostlang.frostc.LLVMCodeGenerator)
goto block122;
block126:;
frost$core$Object** $tmp697 = (frost$core$Object**) ($tmp690->$data + 0);
frost$core$Object* $tmp698 = *$tmp697;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp680, $tmp681, ((frost$io$OutputStream*) $tmp698));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp680)));
org$frostlang$frostc$CodeGenerator* $tmp699 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp680);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($1068:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($1067:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($1057:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
// unreffing REF($1056:org.frostlang.frostc.LLVMCodeGenerator)
goto block123;
block122:;
// line 313
frost$core$Error* $tmp700 = *(&local24);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp700));
// line 314
frost$core$Int64 $tmp701 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp701);
goto block123;
block123:;
frost$core$Error* $tmp702 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing error
*(&local24) = ((frost$core$Error*) NULL);
goto block117;
block121:;
frost$core$Int64 $tmp703 = (frost$core$Int64) {3};
frost$core$Bit $tmp704 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp670, $tmp703);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block128; else goto block129;
block128:;
// line 318
org$frostlang$frostc$HCodeGenerator* $tmp706 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp707 = *(&local3);
frost$core$Bit $tmp708 = frost$core$Bit$init$builtin_bit($tmp707 != NULL);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block130; else goto block131;
block131:;
frost$core$Int64 $tmp710 = (frost$core$Int64) {318};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s711, $tmp710, &$s712);
abort(); // unreachable
block130:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp706, $tmp707);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp706)));
org$frostlang$frostc$CodeGenerator* $tmp713 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp706);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
// unreffing REF($1137:org.frostlang.frostc.HCodeGenerator)
goto block117;
block129:;
frost$core$Int64 $tmp714 = (frost$core$Int64) {4};
frost$core$Bit $tmp715 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp670, $tmp714);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block132; else goto block133;
block132:;
// line 321
org$frostlang$frostc$CCodeGenerator* $tmp717 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp718 = *(&local3);
frost$core$Bit $tmp719 = frost$core$Bit$init$builtin_bit($tmp718 != NULL);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block134; else goto block135;
block135:;
frost$core$Int64 $tmp721 = (frost$core$Int64) {321};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s722, $tmp721, &$s723);
abort(); // unreachable
block134:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp717, $tmp718);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp717)));
org$frostlang$frostc$CodeGenerator* $tmp724 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp717);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing REF($1164:org.frostlang.frostc.CCodeGenerator)
goto block117;
block133:;
frost$core$Int64 $tmp725 = (frost$core$Int64) {6};
frost$core$Bit $tmp726 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp670, $tmp725);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block136; else goto block137;
block136:;
// line 324
*(&local25) = ((frost$core$Error*) NULL);
// line 325
org$frostlang$frostc$StubCodeGenerator* $tmp728 = (org$frostlang$frostc$StubCodeGenerator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$StubCodeGenerator$class);
frost$io$File* $tmp729 = *(&local3);
frost$core$Bit $tmp730 = frost$core$Bit$init$builtin_bit($tmp729 != NULL);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block140; else goto block141;
block141:;
frost$core$Int64 $tmp732 = (frost$core$Int64) {325};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s733, $tmp732, &$s734);
abort(); // unreachable
block140:;
frost$core$Maybe* $tmp735 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp729);
// try maybe check
frost$core$Int64* $tmp736 = &$tmp735->$rawValue;
frost$core$Int64 $tmp737 = *$tmp736;
int64_t $tmp738 = $tmp737.value;
bool $tmp739 = $tmp738 == 0;
if ($tmp739) goto block142; else goto block143;
block143:;
frost$core$Error** $tmp740 = (frost$core$Error**) ($tmp735->$data + 0);
frost$core$Error* $tmp741 = *$tmp740;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
*(&local25) = $tmp741;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($1203:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing REF($1193:org.frostlang.frostc.StubCodeGenerator)
goto block138;
block142:;
frost$core$Object** $tmp742 = (frost$core$Object**) ($tmp735->$data + 0);
frost$core$Object* $tmp743 = *$tmp742;
org$frostlang$frostc$StubCodeGenerator$init$frost$io$OutputStream($tmp728, ((frost$io$OutputStream*) $tmp743));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp728)));
org$frostlang$frostc$CodeGenerator* $tmp744 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) $tmp728);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($1203:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing REF($1193:org.frostlang.frostc.StubCodeGenerator)
goto block139;
block138:;
// line 328
frost$core$Error* $tmp745 = *(&local25);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp745));
// line 329
frost$core$Int64 $tmp746 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp746);
goto block139;
block139:;
frost$core$Error* $tmp747 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing error
*(&local25) = ((frost$core$Error*) NULL);
goto block117;
block137:;
// line 333
frost$core$Bit $tmp748 = frost$core$Bit$init$builtin_bit(false);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block144; else goto block145;
block145:;
frost$core$Int64 $tmp750 = (frost$core$Int64) {333};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s751, $tmp750);
abort(); // unreachable
block144:;
goto block117;
block117:;
// line 336
org$frostlang$frostc$Compiler$Settings* $tmp752 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp753 = &param0->frostHome;
frost$io$File* $tmp754 = *$tmp753;
frost$collections$Array* $tmp755 = *(&local2);
frost$core$Int64 $tmp756 = *(&local4);
frost$core$Int64 $tmp757 = *(&local5);
frost$core$Bit* $tmp758 = &param0->debug;
frost$core$Bit $tmp759 = *$tmp758;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp752, $tmp754, ((frost$collections$ListView*) $tmp755), $tmp756, $tmp757, $tmp759);
*(&local26) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
org$frostlang$frostc$Compiler$Settings* $tmp760 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
*(&local26) = $tmp752;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($1264:org.frostlang.frostc.Compiler.Settings)
// line 338
frost$threads$MessageQueue* $tmp761 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp761);
*(&local27) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
frost$threads$MessageQueue* $tmp762 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local27) = $tmp761;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
// unreffing REF($1285:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 339
org$frostlang$frostc$Compiler* $tmp763 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(280, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp764 = *(&local27);
org$frostlang$frostc$CodeGenerator* $tmp765 = *(&local23);
org$frostlang$frostc$Compiler$Settings* $tmp766 = *(&local26);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp763, $tmp764, $tmp765, $tmp766);
*(&local28) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
org$frostlang$frostc$Compiler* $tmp767 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
*(&local28) = $tmp763;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
// unreffing REF($1299:org.frostlang.frostc.Compiler)
// line 340
frost$collections$Array* $tmp768 = *(&local1);
ITable* $tmp769 = ((frost$collections$Iterable*) $tmp768)->$class->itable;
while ($tmp769->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp769 = $tmp769->next;
}
$fn771 $tmp770 = $tmp769->methods[0];
frost$collections$Iterator* $tmp772 = $tmp770(((frost$collections$Iterable*) $tmp768));
goto block146;
block146:;
ITable* $tmp773 = $tmp772->$class->itable;
while ($tmp773->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp773 = $tmp773->next;
}
$fn775 $tmp774 = $tmp773->methods[0];
frost$core$Bit $tmp776 = $tmp774($tmp772);
bool $tmp777 = $tmp776.value;
if ($tmp777) goto block148; else goto block147;
block147:;
*(&local29) = ((frost$io$File*) NULL);
ITable* $tmp778 = $tmp772->$class->itable;
while ($tmp778->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp778 = $tmp778->next;
}
$fn780 $tmp779 = $tmp778->methods[1];
frost$core$Object* $tmp781 = $tmp779($tmp772);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp781)));
frost$io$File* $tmp782 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
*(&local29) = ((frost$io$File*) $tmp781);
// line 341
org$frostlang$frostc$Compiler* $tmp783 = *(&local28);
frost$io$File* $tmp784 = *(&local29);
frost$collections$ListView* $tmp785 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp783, $tmp784);
ITable* $tmp786 = ((frost$collections$Iterable*) $tmp785)->$class->itable;
while ($tmp786->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp786 = $tmp786->next;
}
$fn788 $tmp787 = $tmp786->methods[0];
frost$collections$Iterator* $tmp789 = $tmp787(((frost$collections$Iterable*) $tmp785));
goto block149;
block149:;
ITable* $tmp790 = $tmp789->$class->itable;
while ($tmp790->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp790 = $tmp790->next;
}
$fn792 $tmp791 = $tmp790->methods[0];
frost$core$Bit $tmp793 = $tmp791($tmp789);
bool $tmp794 = $tmp793.value;
if ($tmp794) goto block151; else goto block150;
block150:;
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp795 = $tmp789->$class->itable;
while ($tmp795->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp795 = $tmp795->next;
}
$fn797 $tmp796 = $tmp795->methods[1];
frost$core$Object* $tmp798 = $tmp796($tmp789);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp798)));
org$frostlang$frostc$ClassDecl* $tmp799 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
*(&local30) = ((org$frostlang$frostc$ClassDecl*) $tmp798);
// line 342
org$frostlang$frostc$Compiler* $tmp800 = *(&local28);
org$frostlang$frostc$ClassDecl* $tmp801 = *(&local30);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp800, $tmp801);
frost$core$Frost$unref$frost$core$Object$Q($tmp798);
// unreffing REF($1356:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp802 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing cl
*(&local30) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block149;
block151:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
// unreffing REF($1345:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
// unreffing REF($1341:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp781);
// unreffing REF($1330:frost.collections.Iterator.T)
frost$io$File* $tmp803 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing s
*(&local29) = ((frost$io$File*) NULL);
goto block146;
block148:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// unreffing REF($1319:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 345
frost$collections$Array* $tmp804 = *(&local1);
ITable* $tmp805 = ((frost$collections$Iterable*) $tmp804)->$class->itable;
while ($tmp805->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp805 = $tmp805->next;
}
$fn807 $tmp806 = $tmp805->methods[0];
frost$collections$Iterator* $tmp808 = $tmp806(((frost$collections$Iterable*) $tmp804));
goto block152;
block152:;
ITable* $tmp809 = $tmp808->$class->itable;
while ($tmp809->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp809 = $tmp809->next;
}
$fn811 $tmp810 = $tmp809->methods[0];
frost$core$Bit $tmp812 = $tmp810($tmp808);
bool $tmp813 = $tmp812.value;
if ($tmp813) goto block154; else goto block153;
block153:;
*(&local31) = ((frost$io$File*) NULL);
ITable* $tmp814 = $tmp808->$class->itable;
while ($tmp814->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp814 = $tmp814->next;
}
$fn816 $tmp815 = $tmp814->methods[1];
frost$core$Object* $tmp817 = $tmp815($tmp808);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp817)));
frost$io$File* $tmp818 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local31) = ((frost$io$File*) $tmp817);
// line 346
org$frostlang$frostc$Compiler* $tmp819 = *(&local28);
frost$io$File* $tmp820 = *(&local31);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp819, $tmp820);
frost$core$Frost$unref$frost$core$Object$Q($tmp817);
// unreffing REF($1411:frost.collections.Iterator.T)
frost$io$File* $tmp821 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
// unreffing s
*(&local31) = ((frost$io$File*) NULL);
goto block152;
block154:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
// unreffing REF($1400:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 348
org$frostlang$frostc$Compiler* $tmp822 = *(&local28);
org$frostlang$frostc$Compiler$finish($tmp822);
// line 349
frost$threads$MessageQueue* $tmp823 = *(&local27);
frost$core$Int64 $tmp824 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp823);
*(&local22) = $tmp824;
// line 350
frost$core$Int64 $tmp825 = (frost$core$Int64) {0};
frost$core$Int64 $tmp826 = *(&local22);
frost$core$Bit $tmp827 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp828 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp825, $tmp826, $tmp827);
frost$core$Int64 $tmp829 = $tmp828.min;
*(&local32) = $tmp829;
frost$core$Int64 $tmp830 = $tmp828.max;
frost$core$Bit $tmp831 = $tmp828.inclusive;
bool $tmp832 = $tmp831.value;
frost$core$Int64 $tmp833 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp834 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp833);
if ($tmp832) goto block158; else goto block159;
block158:;
int64_t $tmp835 = $tmp829.value;
int64_t $tmp836 = $tmp830.value;
bool $tmp837 = $tmp835 <= $tmp836;
frost$core$Bit $tmp838 = (frost$core$Bit) {$tmp837};
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block155; else goto block156;
block159:;
int64_t $tmp840 = $tmp829.value;
int64_t $tmp841 = $tmp830.value;
bool $tmp842 = $tmp840 < $tmp841;
frost$core$Bit $tmp843 = (frost$core$Bit) {$tmp842};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block155; else goto block156;
block155:;
// line 351
frost$threads$MessageQueue* $tmp845 = *(&local27);
frost$core$Immutable* $tmp846 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp845);
*(&local33) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp846)));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp847 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local33) = ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp846);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing REF($1471:frost.threads.MessageQueue.T)
// line 353
org$frostlang$frostc$Compiler$ErrorMsg* $tmp848 = *(&local33);
frost$io$File** $tmp849 = &$tmp848->file;
frost$io$File* $tmp850 = *$tmp849;
frost$core$String* $tmp851 = frost$io$File$get_name$R$frost$core$String($tmp850);
frost$core$String* $tmp852 = frost$core$String$get_asString$R$frost$core$String($tmp851);
frost$core$String* $tmp853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp852, &$s854);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp855 = *(&local33);
org$frostlang$frostc$Position* $tmp856 = &$tmp855->position;
org$frostlang$frostc$Position $tmp857 = *$tmp856;
org$frostlang$frostc$Position$wrapper* $tmp858;
$tmp858 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp858->value = $tmp857;
frost$core$String* $tmp859 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp853, ((frost$core$Object*) $tmp858));
frost$core$String* $tmp860 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp859, &$s861);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp862 = *(&local33);
frost$core$String** $tmp863 = &$tmp862->message;
frost$core$String* $tmp864 = *$tmp863;
frost$core$String* $tmp865 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp860, $tmp864);
frost$core$String* $tmp866 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp865, &$s867);
frost$io$Console$printLine$frost$core$String($tmp866);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing REF($1500:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing REF($1499:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing REF($1495:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp859));
// unreffing REF($1494:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp858));
// unreffing REF($1493:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($1489:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
// unreffing REF($1488:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing REF($1487:frost.core.String)
org$frostlang$frostc$Compiler$ErrorMsg* $tmp868 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp868));
// unreffing error
*(&local33) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
goto block157;
block157:;
frost$core$Int64 $tmp869 = *(&local32);
int64_t $tmp870 = $tmp830.value;
int64_t $tmp871 = $tmp869.value;
int64_t $tmp872 = $tmp870 - $tmp871;
frost$core$Int64 $tmp873 = (frost$core$Int64) {$tmp872};
frost$core$UInt64 $tmp874 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp873);
if ($tmp832) goto block161; else goto block162;
block161:;
uint64_t $tmp875 = $tmp874.value;
uint64_t $tmp876 = $tmp834.value;
bool $tmp877 = $tmp875 >= $tmp876;
frost$core$Bit $tmp878 = (frost$core$Bit) {$tmp877};
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block160; else goto block156;
block162:;
uint64_t $tmp880 = $tmp874.value;
uint64_t $tmp881 = $tmp834.value;
bool $tmp882 = $tmp880 > $tmp881;
frost$core$Bit $tmp883 = (frost$core$Bit) {$tmp882};
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block160; else goto block156;
block160:;
int64_t $tmp885 = $tmp869.value;
int64_t $tmp886 = $tmp833.value;
int64_t $tmp887 = $tmp885 + $tmp886;
frost$core$Int64 $tmp888 = (frost$core$Int64) {$tmp887};
*(&local32) = $tmp888;
goto block155;
block156:;
org$frostlang$frostc$Compiler* $tmp889 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing compiler
*(&local28) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp890 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing errorQueue
*(&local27) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp891 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp891));
// unreffing settings
*(&local26) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp892 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing cg
*(&local23) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 356
frost$core$Int64 $tmp893 = *(&local22);
frost$core$Int64 $tmp894 = (frost$core$Int64) {0};
frost$core$Bit $tmp895 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp893, $tmp894);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block163; else goto block165;
block163:;
// line 357
org$frostlang$frostc$Main$Format$nullable $tmp897 = *(&local6);
frost$core$Bit $tmp898 = frost$core$Bit$init$builtin_bit($tmp897.nonnull);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block166; else goto block167;
block167:;
frost$core$Int64 $tmp900 = (frost$core$Int64) {357};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s901, $tmp900, &$s902);
abort(); // unreachable
block166:;
frost$core$Int64 $tmp903 = ((org$frostlang$frostc$Main$Format) $tmp897.value).$rawValue;
frost$core$Int64 $tmp904 = (frost$core$Int64) {1};
frost$core$Bit $tmp905 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp903, $tmp904);
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block169; else goto block170;
block169:;
// line 359
frost$io$File* $tmp907 = *(&local3);
frost$core$Bit $tmp908 = frost$core$Bit$init$builtin_bit($tmp907 != NULL);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block171; else goto block172;
block172:;
frost$core$Int64 $tmp910 = (frost$core$Int64) {359};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s911, $tmp910, &$s912);
abort(); // unreachable
block171:;
frost$io$File* $tmp913 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp907, &$s914);
frost$io$File* $tmp915 = *(&local3);
frost$core$Bit $tmp916 = frost$core$Bit$init$builtin_bit($tmp915 != NULL);
bool $tmp917 = $tmp916.value;
if ($tmp917) goto block173; else goto block174;
block174:;
frost$core$Int64 $tmp918 = (frost$core$Int64) {359};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s919, $tmp918, &$s920);
abort(); // unreachable
block173:;
frost$core$Bit $tmp921 = *(&local8);
frost$io$File* $tmp922 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp913, $tmp915, $tmp921);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing REF($1619:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp913));
// unreffing REF($1608:frost.io.File)
goto block168;
block170:;
frost$core$Int64 $tmp923 = (frost$core$Int64) {2};
frost$core$Bit $tmp924 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp903, $tmp923);
bool $tmp925 = $tmp924.value;
if ($tmp925) goto block175; else goto block168;
block175:;
// line 362
frost$io$File* $tmp926 = *(&local3);
frost$core$Bit $tmp927 = frost$core$Bit$init$builtin_bit($tmp926 != NULL);
bool $tmp928 = $tmp927.value;
if ($tmp928) goto block176; else goto block177;
block177:;
frost$core$Int64 $tmp929 = (frost$core$Int64) {362};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s930, $tmp929, &$s931);
abort(); // unreachable
block176:;
frost$io$File* $tmp932 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp926, &$s933);
frost$io$File* $tmp934 = *(&local3);
frost$core$Bit $tmp935 = frost$core$Bit$init$builtin_bit($tmp934 != NULL);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block178; else goto block179;
block179:;
frost$core$Int64 $tmp937 = (frost$core$Int64) {362};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s938, $tmp937, &$s939);
abort(); // unreachable
block178:;
frost$core$Bit $tmp940 = *(&local8);
frost$io$File* $tmp941 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp932, $tmp934, $tmp940);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// unreffing REF($1652:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($1641:frost.io.File)
goto block168;
block168:;
goto block164;
block165:;
// line 1
// line 367
frost$core$Int64 $tmp942 = *(&local22);
frost$core$Int64 $tmp943 = (frost$core$Int64) {1};
frost$core$Bit $tmp944 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp942, $tmp943);
bool $tmp945 = $tmp944.value;
if ($tmp945) goto block180; else goto block182;
block180:;
// line 369
frost$io$Console$printLine$frost$core$String(&$s946);
goto block181;
block182:;
// line 1
// line 373
frost$core$Int64 $tmp947 = *(&local22);
frost$core$String* $tmp948 = frost$core$Int64$get_asString$R$frost$core$String($tmp947);
frost$core$String* $tmp949 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp948, &$s950);
frost$io$Console$printLine$frost$core$String($tmp949);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing REF($1675:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp948));
// unreffing REF($1674:frost.core.String)
goto block181;
block181:;
// line 375
frost$core$Int64 $tmp951 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp951);
goto block164;
block164:;
frost$io$File* $tmp952 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp952));
// unreffing llvmDir
*(&local20) = ((frost$io$File*) NULL);
frost$core$String* $tmp953 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp954 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp954));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp955 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp955));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp956 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp957 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 381
frost$core$Bit $tmp958 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s959);
return $tmp958;

}
void frostMain(frost$collections$ListView* param0) {

frost$core$Bit local0;
// line 386
ITable* $tmp960 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp960->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp960 = $tmp960->next;
}
$fn962 $tmp961 = $tmp960->methods[0];
frost$core$Int64 $tmp963 = $tmp961(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp964 = (frost$core$Int64) {1};
int64_t $tmp965 = $tmp963.value;
int64_t $tmp966 = $tmp964.value;
bool $tmp967 = $tmp965 > $tmp966;
frost$core$Bit $tmp968 = (frost$core$Bit) {$tmp967};
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block3; else goto block4;
block3:;
frost$core$Int64 $tmp970 = (frost$core$Int64) {1};
ITable* $tmp971 = param0->$class->itable;
while ($tmp971->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp971 = $tmp971->next;
}
$fn973 $tmp972 = $tmp971->methods[0];
frost$core$Object* $tmp974 = $tmp972(param0, $tmp970);
frost$core$Bit $tmp975 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(((frost$core$String*) $tmp974), &$s976);
frost$core$Frost$unref$frost$core$Object$Q($tmp974);
// unreffing REF($14:frost.collections.ListView.T)
*(&local0) = $tmp975;
goto block5;
block4:;
*(&local0) = $tmp968;
goto block5;
block5:;
frost$core$Bit $tmp977 = *(&local0);
bool $tmp978 = $tmp977.value;
if ($tmp978) goto block1; else goto block2;
block1:;
// line 387
goto block6;
block6:;
// line 388
org$frostlang$frostc$Main* $tmp979 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp979);
frost$core$Int64 $tmp980 = (frost$core$Int64) {1};
frost$core$Bit $tmp981 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp982 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp980, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp981);
ITable* $tmp983 = param0->$class->itable;
while ($tmp983->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp983 = $tmp983->next;
}
$fn985 $tmp984 = $tmp983->methods[2];
frost$collections$ListView* $tmp986 = $tmp984(param0, $tmp982);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp979, $tmp986);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing REF($38:frost.collections.ListView<frost.collections.ListView.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp979));
// unreffing REF($30:org.frostlang.frostc.Main)
goto block6;
block7:;
goto block2;
block2:;
// line 391
org$frostlang$frostc$Main* $tmp987 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp987);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp987, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing REF($50:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp988 = &param0->clang;
frost$io$File* $tmp989 = *$tmp988;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp989));
frost$io$File** $tmp990 = &param0->frostHome;
frost$io$File* $tmp991 = *$tmp990;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp991));
return;

}

