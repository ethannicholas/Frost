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
#include "frost/collections/CollectionView.h"
#include "frost/core/Equatable.h"
#include "org/frostlang/frostc/HTMLProcessor.h"
#include "org/frostlang/frostc/LLVMCodeGenerator.h"
#include "org/frostlang/frostc/HCodeGenerator.h"
#include "org/frostlang/frostc/CCodeGenerator.h"
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
typedef frost$core$Bit (*$fn251)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn257)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn280)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn308)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn333)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn367)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn406)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn455)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn463)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Int64 (*$fn495)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn513)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn571)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn591)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn616)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn712)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn716)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn721)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn729)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn733)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn738)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn748)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn752)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn757)(frost$collections$Iterator*);

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
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s316 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s317 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s323 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s376 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s427 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s432 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s443 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s528 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s536 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s542 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s548 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s576 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s613 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s626 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s651 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s653 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s795 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s808 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s843 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s852 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s853 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s860 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s871 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

void org$frostlang$frostc$Main$init(org$frostlang$frostc$Main* param0) {

// line 21
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 24
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
// line 60
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 61
frost$collections$Array* $tmp11 = *(&local0);
frost$core$String** $tmp12 = &param1->path;
frost$core$String* $tmp13 = *$tmp12;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) $tmp13));
// line 62
frost$collections$Array* $tmp14 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp14, ((frost$core$Object*) &$s15));
// line 63
frost$collections$Array* $tmp16 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) &$s17));
// line 64
frost$collections$Array* $tmp18 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) &$s19));
// line 65
frost$core$Bit* $tmp20 = &param0->debug;
frost$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 66
frost$collections$Array* $tmp23 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp23, ((frost$core$Object*) &$s24));
goto block2;
block2:;
// line 68
frost$collections$Array* $tmp25 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp25, ((frost$core$Object*) &$s26));
// line 69
frost$collections$Array* $tmp27 = *(&local0);
frost$core$String** $tmp28 = &param2->path;
frost$core$String* $tmp29 = *$tmp28;
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) $tmp29));
// line 70
*(&local1) = ((frost$core$System$Process*) NULL);
// line 71
*(&local2) = ((frost$core$Error*) NULL);
// line 72
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
// line 73
frost$core$System$Process* $tmp45 = *(&local1);
frost$io$InputStream* $tmp46 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp45);
$fn48 $tmp47 = ($fn48) $tmp46->$class->vtable[14];
frost$core$String* $tmp49 = $tmp47($tmp46);
frost$io$Console$printError$frost$core$String($tmp49);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($103:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($101:frost.io.InputStream)
// line 74
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
// line 77
frost$core$Error* $tmp55 = *(&local2);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp55));
// line 78
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp56);
goto block4;
block4:;
frost$core$Error* $tmp57 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing error
*(&local2) = ((frost$core$Error*) NULL);
// line 80
frost$core$System$Process* $tmp58 = *(&local1);
frost$core$Int64 $tmp59;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp59, $tmp58);
*(&local3) = $tmp59;
// line 81
frost$core$Bit $tmp60 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block7; else goto block8;
block7:;
// line 82
*(&local4) = ((frost$core$Error*) NULL);
// line 83
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
// line 86
frost$core$Error* $tmp63 = *(&local4);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp63));
// line 87
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
// line 90
frost$core$Int64 $tmp66 = *(&local3);
frost$core$Int64 $tmp67 = (frost$core$Int64) {0};
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67.value;
bool $tmp70 = $tmp68 != $tmp69;
frost$core$Bit $tmp71 = (frost$core$Bit) {$tmp70};
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block13; else goto block14;
block13:;
// line 91
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp73);
goto block14;
block14:;
// line 93
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
// line 97
frost$collections$Array* $tmp76 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp76);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$collections$Array* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 98
frost$collections$Array* $tmp78 = *(&local0);
frost$core$String** $tmp79 = &param1->path;
frost$core$String* $tmp80 = *$tmp79;
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) $tmp80));
// line 99
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
// line 100
frost$collections$Array* $tmp87 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp87, ((frost$core$Object*) &$s88));
// line 101
frost$collections$Array* $tmp89 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) &$s90));
// line 102
frost$collections$Array* $tmp91 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp91, ((frost$core$Object*) &$s92));
// line 103
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
// line 104
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
// line 105
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
// line 106
frost$collections$Array* $tmp115 = *(&local0);
frost$io$File* $tmp116 = *(&local3);
frost$io$File* $tmp117 = frost$io$File$get_parent$R$frost$io$File$Q($tmp116);
frost$core$Bit $tmp118 = frost$core$Bit$init$builtin_bit($tmp117 != NULL);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp120 = (frost$core$Int64) {106};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s121, $tmp120, &$s122);
abort(); // unreachable
block4:;
frost$core$String* $tmp123 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s124, ((frost$core$Object*) $tmp117));
frost$collections$Array$add$frost$collections$Array$T($tmp115, ((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($111:frost.io.File?)
// line 107
frost$io$File* $tmp125 = *(&local3);
frost$core$String* $tmp126 = frost$io$File$get_simpleName$R$frost$core$String($tmp125);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$String* $tmp127 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local4) = $tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($132:frost.core.String)
// line 108
frost$core$String* $tmp128 = *(&local4);
frost$core$Bit $tmp129 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp128, &$s130);
bool $tmp131 = $tmp129.value;
if ($tmp131) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp132 = (frost$core$Int64) {108};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s133, $tmp132);
abort(); // unreachable
block6:;
// line 109
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
// line 110
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
// line 112
frost$collections$Array* $tmp147 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp147, ((frost$core$Object*) &$s148));
// line 113
frost$collections$Array* $tmp149 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp149, ((frost$core$Object*) &$s150));
// line 114
frost$core$Bit* $tmp151 = &param0->debug;
frost$core$Bit $tmp152 = *$tmp151;
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block8; else goto block9;
block8:;
// line 115
frost$collections$Array* $tmp154 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp154, ((frost$core$Object*) &$s155));
goto block9;
block9:;
// line 117
frost$collections$Array* $tmp156 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp156, ((frost$core$Object*) &$s157));
// line 118
frost$collections$Array* $tmp158 = *(&local0);
frost$core$String** $tmp159 = &param2->path;
frost$core$String* $tmp160 = *$tmp159;
frost$collections$Array$add$frost$collections$Array$T($tmp158, ((frost$core$Object*) $tmp160));
// line 119
*(&local5) = ((frost$core$System$Process*) NULL);
// line 120
*(&local6) = ((frost$core$Error*) NULL);
// line 121
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
// line 122
frost$core$System$Process* $tmp176 = *(&local5);
frost$io$InputStream* $tmp177 = frost$core$System$Process$standardOutput$R$frost$io$InputStream($tmp176);
$fn179 $tmp178 = ($fn179) $tmp177->$class->vtable[14];
frost$core$String* $tmp180 = $tmp178($tmp177);
frost$io$Console$printError$frost$core$String($tmp180);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp180));
// unreffing REF($276:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($274:frost.io.InputStream)
// line 123
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
// line 126
frost$core$Error* $tmp186 = *(&local6);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp186));
// line 127
frost$core$Int64 $tmp187 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp187);
goto block11;
block11:;
frost$core$Error* $tmp188 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing error
*(&local6) = ((frost$core$Error*) NULL);
// line 129
frost$core$System$Process* $tmp189 = *(&local5);
frost$core$Int64 $tmp190;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp190, $tmp189);
*(&local7) = $tmp190;
// line 130
frost$core$Bit $tmp191 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block14; else goto block15;
block14:;
// line 131
*(&local8) = ((frost$core$Error*) NULL);
// line 132
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
// line 135
frost$core$Error* $tmp194 = *(&local8);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp194));
// line 136
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
// line 139
frost$core$Int64 $tmp197 = *(&local7);
frost$core$Int64 $tmp198 = (frost$core$Int64) {0};
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198.value;
bool $tmp201 = $tmp199 != $tmp200;
frost$core$Bit $tmp202 = (frost$core$Bit) {$tmp201};
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block20; else goto block21;
block20:;
// line 140
frost$core$Int64 $tmp204 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp204);
goto block21;
block21:;
// line 142
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
// line 146
*(&local0) = ((frost$core$Error*) NULL);
// line 147
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
// line 148
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
// line 149
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
// line 150
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
// line 151
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
// line 152
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
// line 155
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit(false);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp232 = (frost$core$Int64) {155};
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
frost$io$File* local19 = NULL;
frost$core$String* local20 = NULL;
frost$core$Int64 local21;
org$frostlang$frostc$CodeGenerator* local22 = NULL;
frost$core$Error* local23 = NULL;
org$frostlang$frostc$Compiler$Settings* local24 = NULL;
frost$threads$MessageQueue* local25 = NULL;
org$frostlang$frostc$Compiler* local26 = NULL;
frost$io$File* local27 = NULL;
org$frostlang$frostc$ClassDecl* local28 = NULL;
frost$io$File* local29 = NULL;
frost$core$Int64 local30;
org$frostlang$frostc$Compiler$ErrorMsg* local31 = NULL;
// line 160
org$frostlang$frostc$Main$Arguments* $tmp235 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp235, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
org$frostlang$frostc$Main$Arguments* $tmp236 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local0) = $tmp235;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 161
frost$collections$Array* $tmp237 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp237);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
frost$collections$Array* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
*(&local1) = $tmp237;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 162
frost$collections$Array* $tmp239 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp239);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
frost$collections$Array* $tmp240 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
*(&local2) = $tmp239;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 163
frost$collections$Array* $tmp241 = *(&local2);
frost$io$File** $tmp242 = &param0->frostHome;
frost$io$File* $tmp243 = *$tmp242;
frost$collections$Array$add$frost$collections$Array$T($tmp241, ((frost$core$Object*) $tmp243));
// line 164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp244 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local3) = ((frost$io$File*) NULL);
// line 165
frost$core$Int64 $tmp245 = (frost$core$Int64) {3};
*(&local4) = $tmp245;
// line 166
frost$core$Int64 $tmp246 = (frost$core$Int64) {3};
*(&local5) = $tmp246;
// line 167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp247 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local7) = ((frost$core$String*) NULL);
// line 169
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp248;
// line 170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp249 = *(&local0);
$fn251 $tmp250 = ($fn251) $tmp249->$class->vtable[2];
frost$core$Bit $tmp252 = $tmp250($tmp249);
frost$core$Bit $tmp253 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp252);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block2; else goto block3;
block2:;
// line 171
org$frostlang$frostc$Main$Arguments* $tmp255 = *(&local0);
$fn257 $tmp256 = ($fn257) $tmp255->$class->vtable[3];
frost$core$String* $tmp258 = $tmp256($tmp255);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
frost$core$String* $tmp259 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
*(&local9) = $tmp258;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing REF($86:frost.core.String)
// line 172
frost$core$String* $tmp260 = *(&local9);
frost$core$Bit $tmp261 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp260, &$s262);
bool $tmp263 = $tmp261.value;
if ($tmp263) goto block5; else goto block6;
block5:;
// line 174
*(&local10) = ((frost$core$Error*) NULL);
// line 175
frost$io$File* $tmp264 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp264, &$s265);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
frost$io$File* $tmp266 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
*(&local11) = $tmp264;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
// unreffing REF($105:frost.io.File)
// line 176
frost$io$InputStream* $tmp267 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp268 = *(&local11);
frost$core$Maybe* $tmp269 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp268);
// try maybe check
frost$core$Int64* $tmp270 = &$tmp269->$rawValue;
frost$core$Int64 $tmp271 = *$tmp270;
int64_t $tmp272 = $tmp271.value;
bool $tmp273 = $tmp272 == 0;
if ($tmp273) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp274 = (frost$core$Error**) ($tmp269->$data + 0);
frost$core$Error* $tmp275 = *$tmp274;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local10) = $tmp275;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($120:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($118:frost.io.InputStream)
frost$io$File* $tmp276 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp277 = (frost$core$Object**) ($tmp269->$data + 0);
frost$core$Object* $tmp278 = *$tmp277;
$fn280 $tmp279 = ($fn280) $tmp267->$class->vtable[17];
frost$core$Maybe* $tmp281 = $tmp279($tmp267, ((frost$io$OutputStream*) $tmp278));
// try maybe check
frost$core$Int64* $tmp282 = &$tmp281->$rawValue;
frost$core$Int64 $tmp283 = *$tmp282;
int64_t $tmp284 = $tmp283.value;
bool $tmp285 = $tmp284 == 0;
if ($tmp285) goto block11; else goto block12;
block12:;
frost$core$Error** $tmp286 = (frost$core$Error**) ($tmp281->$data + 0);
frost$core$Error* $tmp287 = *$tmp286;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
*(&local10) = $tmp287;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing REF($149:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($120:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($118:frost.io.InputStream)
frost$io$File* $tmp288 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block11:;
frost$core$Object** $tmp289 = (frost$core$Object**) ($tmp281->$data + 0);
frost$core$Object* $tmp290 = *$tmp289;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
// unreffing REF($149:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($120:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($118:frost.io.InputStream)
// line 177
frost$collections$Array* $tmp291 = *(&local1);
frost$io$File* $tmp292 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp291, ((frost$core$Object*) $tmp292));
frost$io$File* $tmp293 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 180
frost$core$Error* $tmp294 = *(&local10);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp294));
// line 181
frost$core$Int64 $tmp295 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp295);
goto block8;
block8:;
frost$core$Error* $tmp296 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing error
*(&local10) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp297 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp260, &$s298);
bool $tmp299 = $tmp297.value;
if ($tmp299) goto block13; else goto block14;
block13:;
// line 185
frost$io$File* $tmp300 = *(&local3);
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300 != NULL);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block15; else goto block16;
block15:;
// line 186
frost$io$Console$printErrorLine$frost$core$String(&$s303);
// line 187
frost$core$Int64 $tmp304 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp304);
goto block16;
block16:;
// line 189
frost$io$File* $tmp305 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp306 = *(&local0);
$fn308 $tmp307 = ($fn308) $tmp306->$class->vtable[4];
frost$core$String* $tmp309 = $tmp307($tmp306, &$s310);
frost$io$File$init$frost$core$String($tmp305, $tmp309);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
frost$io$File* $tmp311 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp311));
*(&local3) = $tmp305;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp309));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing REF($231:frost.io.File)
// line 190
*(&local12) = ((frost$core$Error*) NULL);
// line 191
frost$io$File* $tmp312 = *(&local3);
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312 != NULL);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp315 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s316, $tmp315, &$s317);
abort(); // unreachable
block19:;
frost$io$File* $tmp318 = frost$io$File$get_parent$R$frost$io$File$Q($tmp312);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318 != NULL);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp321 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s322, $tmp321, &$s323);
abort(); // unreachable
block21:;
frost$core$Error* $tmp324 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp318);
// try error check
if ($tmp324 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
*(&local12) = $tmp324;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing REF($270:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($261:frost.io.File?)
goto block17;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing REF($270:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
// unreffing REF($261:frost.io.File?)
goto block18;
block17:;
// line 194
frost$core$Error* $tmp325 = *(&local12);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp325));
// line 195
frost$core$Int64 $tmp326 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp326);
goto block18;
block18:;
frost$core$Error* $tmp327 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing error
*(&local12) = ((frost$core$Error*) NULL);
goto block4;
block14:;
frost$core$Bit $tmp328 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp260, &$s329);
bool $tmp330 = $tmp328.value;
if ($tmp330) goto block25; else goto block26;
block25:;
// line 199
org$frostlang$frostc$Main$Arguments* $tmp331 = *(&local0);
$fn333 $tmp332 = ($fn333) $tmp331->$class->vtable[4];
frost$core$String* $tmp334 = $tmp332($tmp331, &$s335);
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
frost$core$String* $tmp336 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
*(&local13) = $tmp334;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp334));
// unreffing REF($311:frost.core.String)
// line 200
frost$core$String* $tmp337 = *(&local13);
frost$core$Int64$nullable $tmp338 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp337);
frost$core$Bit $tmp339 = frost$core$Bit$init$builtin_bit($tmp338.nonnull);
bool $tmp340 = $tmp339.value;
if ($tmp340) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp341 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s342, $tmp341, &$s343);
abort(); // unreachable
block27:;
*(&local4) = ((frost$core$Int64) $tmp338.value);
// line 201
frost$core$Int64 $tmp344 = *(&local4);
frost$core$Int64 $tmp345 = (frost$core$Int64) {3};
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 > $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block31; else goto block32;
block31:;
*(&local14) = $tmp349;
goto block33;
block32:;
frost$core$Int64 $tmp351 = *(&local4);
frost$core$Int64 $tmp352 = (frost$core$Int64) {0};
int64_t $tmp353 = $tmp351.value;
int64_t $tmp354 = $tmp352.value;
bool $tmp355 = $tmp353 < $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
*(&local14) = $tmp356;
goto block33;
block33:;
frost$core$Bit $tmp357 = *(&local14);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block29; else goto block30;
block29:;
// line 202
frost$io$Console$printErrorLine$frost$core$String(&$s359);
// line 203
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp360);
goto block30;
block30:;
frost$core$String* $tmp361 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing level
*(&local13) = ((frost$core$String*) NULL);
goto block4;
block26:;
frost$core$Bit $tmp362 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp260, &$s363);
bool $tmp364 = $tmp362.value;
if ($tmp364) goto block34; else goto block35;
block34:;
// line 207
org$frostlang$frostc$Main$Arguments* $tmp365 = *(&local0);
$fn367 $tmp366 = ($fn367) $tmp365->$class->vtable[4];
frost$core$String* $tmp368 = $tmp366($tmp365, &$s369);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
frost$core$String* $tmp370 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
*(&local15) = $tmp368;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing REF($374:frost.core.String)
// line 208
frost$core$String* $tmp371 = *(&local15);
frost$core$Int64$nullable $tmp372 = frost$core$String$get_asInt64$R$frost$core$Int64$Q($tmp371);
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372.nonnull);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp375 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s376, $tmp375, &$s377);
abort(); // unreachable
block36:;
*(&local5) = ((frost$core$Int64) $tmp372.value);
// line 209
frost$core$Int64 $tmp378 = *(&local5);
frost$core$Int64 $tmp379 = (frost$core$Int64) {3};
int64_t $tmp380 = $tmp378.value;
int64_t $tmp381 = $tmp379.value;
bool $tmp382 = $tmp380 > $tmp381;
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block40; else goto block41;
block40:;
*(&local16) = $tmp383;
goto block42;
block41:;
frost$core$Int64 $tmp385 = *(&local5);
frost$core$Int64 $tmp386 = (frost$core$Int64) {0};
int64_t $tmp387 = $tmp385.value;
int64_t $tmp388 = $tmp386.value;
bool $tmp389 = $tmp387 < $tmp388;
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
*(&local16) = $tmp390;
goto block42;
block42:;
frost$core$Bit $tmp391 = *(&local16);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block38; else goto block39;
block38:;
// line 210
frost$io$Console$printErrorLine$frost$core$String(&$s393);
// line 211
frost$core$Int64 $tmp394 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp394);
goto block39;
block39:;
frost$core$String* $tmp395 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing level
*(&local15) = ((frost$core$String*) NULL);
goto block4;
block35:;
frost$core$Bit $tmp396 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp260, &$s397);
bool $tmp398 = $tmp396.value;
if ($tmp398) goto block43; else goto block44;
block43:;
// line 215
org$frostlang$frostc$Main$Format$nullable $tmp399 = *(&local6);
frost$core$Bit $tmp400 = frost$core$Bit$init$builtin_bit($tmp399.nonnull);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block45; else goto block46;
block45:;
// line 216
frost$io$Console$printErrorLine$frost$core$String(&$s402);
// line 217
frost$core$Int64 $tmp403 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp403);
goto block46;
block46:;
// line 219
org$frostlang$frostc$Main$Arguments* $tmp404 = *(&local0);
$fn406 $tmp405 = ($fn406) $tmp404->$class->vtable[4];
frost$core$String* $tmp407 = $tmp405($tmp404, &$s408);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
frost$core$String* $tmp409 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
*(&local17) = $tmp407;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp407));
// unreffing REF($449:frost.core.String)
// line 220
frost$core$String* $tmp410 = *(&local17);
frost$core$Bit $tmp411 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp410, &$s412);
bool $tmp413 = $tmp411.value;
if ($tmp413) goto block48; else goto block49;
block48:;
// line 221
frost$core$Int64 $tmp414 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp415 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp414);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp415, true });
goto block47;
block49:;
frost$core$Bit $tmp416 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp410, &$s417);
bool $tmp418 = $tmp416.value;
if ($tmp418) goto block50; else goto block51;
block50:;
// line 222
frost$core$Int64 $tmp419 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp420 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp419);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp420, true });
goto block47;
block51:;
frost$core$Bit $tmp421 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp410, &$s422);
bool $tmp423 = $tmp421.value;
if ($tmp423) goto block52; else goto block53;
block52:;
// line 223
frost$core$Int64 $tmp424 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp425 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp424);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp425, true });
goto block47;
block53:;
frost$core$Bit $tmp426 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp410, &$s427);
bool $tmp428 = $tmp426.value;
if ($tmp428) goto block54; else goto block55;
block54:;
// line 224
frost$core$Int64 $tmp429 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp430 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp429);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp430, true });
goto block47;
block55:;
frost$core$Bit $tmp431 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp410, &$s432);
bool $tmp433 = $tmp431.value;
if ($tmp433) goto block56; else goto block57;
block56:;
// line 225
frost$core$Int64 $tmp434 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp435 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp434);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp435, true });
goto block47;
block57:;
frost$core$Bit $tmp436 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp410, &$s437);
bool $tmp438 = $tmp436.value;
if ($tmp438) goto block58; else goto block59;
block58:;
// line 226
frost$core$Int64 $tmp439 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp440 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp439);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp440, true });
goto block47;
block59:;
// line 228
frost$core$String* $tmp441 = *(&local17);
frost$core$String* $tmp442 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s443, $tmp441);
frost$core$String* $tmp444 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp442, &$s445);
frost$io$Console$printErrorLine$frost$core$String($tmp444);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing REF($519:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
// unreffing REF($518:frost.core.String)
// line 229
frost$core$Int64 $tmp446 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp446);
goto block47;
block47:;
frost$core$String* $tmp447 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing f
*(&local17) = ((frost$core$String*) NULL);
goto block4;
block44:;
frost$core$Bit $tmp448 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp260, &$s449);
bool $tmp450 = $tmp448.value;
if ($tmp450) goto block60; else goto block61;
block60:;
// line 234
frost$collections$Array* $tmp451 = *(&local2);
frost$io$File* $tmp452 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp453 = *(&local0);
$fn455 $tmp454 = ($fn455) $tmp453->$class->vtable[4];
frost$core$String* $tmp456 = $tmp454($tmp453, &$s457);
frost$io$File$init$frost$core$String($tmp452, $tmp456);
frost$collections$Array$add$frost$collections$Array$T($tmp451, ((frost$core$Object*) $tmp452));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing REF($546:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
// unreffing REF($543:frost.io.File)
goto block4;
block61:;
frost$core$Bit $tmp458 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp260, &$s459);
bool $tmp460 = $tmp458.value;
if ($tmp460) goto block62; else goto block63;
block62:;
// line 237
org$frostlang$frostc$Main$Arguments* $tmp461 = *(&local0);
$fn463 $tmp462 = ($fn463) $tmp461->$class->vtable[4];
frost$core$String* $tmp464 = $tmp462($tmp461, &$s465);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
frost$core$String* $tmp466 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
*(&local7) = $tmp464;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// unreffing REF($563:frost.core.String)
goto block4;
block63:;
// line 240
frost$core$String* $tmp467 = *(&local9);
frost$core$Bit $tmp468 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp467, &$s469);
bool $tmp470 = $tmp468.value;
if ($tmp470) goto block64; else goto block66;
block64:;
// line 241
frost$io$File* $tmp471 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp472 = *(&local9);
frost$io$File$init$frost$core$String($tmp471, $tmp472);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
frost$io$File* $tmp473 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp473));
*(&local18) = $tmp471;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing REF($581:frost.io.File)
// line 242
frost$collections$Array* $tmp474 = *(&local1);
frost$io$File* $tmp475 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp474, ((frost$core$Object*) $tmp475));
frost$io$File* $tmp476 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing f
*(&local18) = ((frost$io$File*) NULL);
goto block65;
block66:;
// line 1
// line 245
frost$core$String* $tmp477 = *(&local9);
frost$core$String* $tmp478 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s479, $tmp477);
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp478, &$s481);
frost$io$Console$printErrorLine$frost$core$String($tmp480);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
// unreffing REF($610:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing REF($609:frost.core.String)
// line 246
frost$core$Int64 $tmp482 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp482);
goto block65;
block65:;
goto block4;
block4:;
frost$core$String* $tmp483 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// unreffing a
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 251
frost$io$File* $tmp484 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp485 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp484, $tmp485);
*(&local19) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$io$File* $tmp486 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local19) = $tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing REF($631:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing REF($630:frost.io.File)
// line 252
frost$io$File* $tmp487 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp487, &$s488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$io$File** $tmp489 = &param0->clang;
frost$io$File* $tmp490 = *$tmp489;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
frost$io$File** $tmp491 = &param0->clang;
*$tmp491 = $tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing REF($647:frost.io.File)
// line 253
frost$collections$Array* $tmp492 = *(&local1);
ITable* $tmp493 = ((frost$collections$CollectionView*) $tmp492)->$class->itable;
while ($tmp493->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp493 = $tmp493->next;
}
$fn495 $tmp494 = $tmp493->methods[0];
frost$core$Int64 $tmp496 = $tmp494(((frost$collections$CollectionView*) $tmp492));
frost$core$Int64 $tmp497 = (frost$core$Int64) {0};
frost$core$Bit $tmp498 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp496, $tmp497);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block67; else goto block68;
block67:;
// line 254
frost$io$Console$printErrorLine$frost$core$String(&$s500);
// line 255
frost$core$Int64 $tmp501 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp501);
goto block68;
block68:;
// line 257
org$frostlang$frostc$Main$Format$nullable $tmp502 = *(&local6);
frost$core$Bit $tmp503 = frost$core$Bit$init$builtin_bit(!$tmp502.nonnull);
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block69; else goto block70;
block69:;
// line 258
frost$core$Int64 $tmp505 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp506 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp505);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp506, true });
goto block70;
block70:;
// line 260
frost$io$File* $tmp507 = *(&local3);
frost$core$Bit $tmp508 = frost$core$Bit$init$builtin_bit($tmp507 == NULL);
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block71; else goto block72;
block71:;
// line 261
frost$collections$Array* $tmp510 = *(&local1);
ITable* $tmp511 = ((frost$collections$CollectionView*) $tmp510)->$class->itable;
while ($tmp511->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp511 = $tmp511->next;
}
$fn513 $tmp512 = $tmp511->methods[0];
frost$core$Int64 $tmp514 = $tmp512(((frost$collections$CollectionView*) $tmp510));
frost$core$Int64 $tmp515 = (frost$core$Int64) {1};
frost$core$Bit $tmp516 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp514, $tmp515);
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block73; else goto block75;
block73:;
// line 262
*(&local20) = ((frost$core$String*) NULL);
// line 263
org$frostlang$frostc$Main$Format$nullable $tmp518 = *(&local6);
frost$core$Bit $tmp519 = frost$core$Bit$init$builtin_bit($tmp518.nonnull);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block76; else goto block77;
block77:;
frost$core$Int64 $tmp521 = (frost$core$Int64) {263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s522, $tmp521, &$s523);
abort(); // unreachable
block76:;
frost$core$Int64 $tmp524 = ((org$frostlang$frostc$Main$Format) $tmp518.value).$rawValue;
frost$core$Int64 $tmp525 = (frost$core$Int64) {1};
frost$core$Bit $tmp526 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp524, $tmp525);
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block79; else goto block80;
block79:;
// line 264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s528));
frost$core$String* $tmp529 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local20) = &$s530;
goto block78;
block80:;
frost$core$Int64 $tmp531 = (frost$core$Int64) {2};
frost$core$Bit $tmp532 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp524, $tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block81; else goto block82;
block81:;
// line 265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s534));
frost$core$String* $tmp535 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp535));
*(&local20) = &$s536;
goto block78;
block82:;
frost$core$Int64 $tmp537 = (frost$core$Int64) {0};
frost$core$Bit $tmp538 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp524, $tmp537);
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block83; else goto block84;
block83:;
// line 266
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s540));
frost$core$String* $tmp541 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
*(&local20) = &$s542;
goto block78;
block84:;
frost$core$Int64 $tmp543 = (frost$core$Int64) {5};
frost$core$Bit $tmp544 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp524, $tmp543);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block85; else goto block86;
block85:;
// line 267
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s546));
frost$core$String* $tmp547 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
*(&local20) = &$s548;
goto block78;
block86:;
// line 269
frost$io$Console$printErrorLine$frost$core$String(&$s549);
// line 271
frost$core$Int64 $tmp550 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp550);
goto block78;
block78:;
// line 274
frost$collections$Array* $tmp551 = *(&local1);
frost$core$Int64 $tmp552 = (frost$core$Int64) {0};
frost$core$Object* $tmp553 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp551, $tmp552);
frost$core$String* $tmp554 = *(&local20);
frost$io$File* $tmp555 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp553), $tmp554);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
frost$io$File* $tmp556 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
*(&local3) = $tmp555;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp555));
// unreffing REF($776:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp553);
// unreffing REF($773:frost.collections.Array.T)
frost$core$String* $tmp557 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
// unreffing extension
*(&local20) = ((frost$core$String*) NULL);
goto block74;
block75:;
// line 276
org$frostlang$frostc$Main$Format$nullable $tmp558 = *(&local6);
frost$core$Bit $tmp559 = frost$core$Bit$init$builtin_bit($tmp558.nonnull);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {276};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s562, $tmp561, &$s563);
abort(); // unreachable
block89:;
frost$core$Equatable* $tmp564;
if ($tmp558.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp565;
    $tmp565 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp565->value = ((org$frostlang$frostc$Main$Format) $tmp558.value);
    $tmp564 = ((frost$core$Equatable*) $tmp565);
}
else {
    $tmp564 = NULL;
}
frost$core$Int64 $tmp566 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp567 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp566);
org$frostlang$frostc$Main$Format$wrapper* $tmp568;
$tmp568 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp568->value = $tmp567;
ITable* $tmp569 = $tmp564->$class->itable;
while ($tmp569->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp569 = $tmp569->next;
}
$fn571 $tmp570 = $tmp569->methods[0];
frost$core$Bit $tmp572 = $tmp570($tmp564, ((frost$core$Equatable*) $tmp568));
bool $tmp573 = $tmp572.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp568)));
// unreffing REF($809:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
// unreffing REF($805:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp573) goto block87; else goto block91;
block87:;
// line 277
frost$io$Console$printErrorLine$frost$core$String(&$s574);
// line 278
frost$core$Int64 $tmp575 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp575);
goto block88;
block91:;
// line 1
// line 281
frost$io$Console$printErrorLine$frost$core$String(&$s576);
// line 283
frost$core$Int64 $tmp577 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp577);
goto block88;
block88:;
goto block74;
block74:;
goto block72;
block72:;
// line 286
org$frostlang$frostc$Main$Format$nullable $tmp578 = *(&local6);
frost$core$Bit $tmp579 = frost$core$Bit$init$builtin_bit($tmp578.nonnull);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block94:;
frost$core$Equatable* $tmp584;
if ($tmp578.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp585;
    $tmp585 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp585->value = ((org$frostlang$frostc$Main$Format) $tmp578.value);
    $tmp584 = ((frost$core$Equatable*) $tmp585);
}
else {
    $tmp584 = NULL;
}
frost$core$Int64 $tmp586 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp587 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp586);
org$frostlang$frostc$Main$Format$wrapper* $tmp588;
$tmp588 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp588->value = $tmp587;
ITable* $tmp589 = $tmp584->$class->itable;
while ($tmp589->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp589 = $tmp589->next;
}
$fn591 $tmp590 = $tmp589->methods[0];
frost$core$Bit $tmp592 = $tmp590($tmp584, ((frost$core$Equatable*) $tmp588));
bool $tmp593 = $tmp592.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp588)));
// unreffing REF($848:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($844:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp593) goto block92; else goto block93;
block92:;
// line 287
frost$core$String* $tmp594 = *(&local7);
frost$core$Bit $tmp595 = frost$core$Bit$init$builtin_bit($tmp594 == NULL);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block96; else goto block97;
block96:;
// line 288
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s597));
frost$core$String* $tmp598 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local7) = &$s597;
goto block97;
block97:;
// line 290
org$frostlang$frostc$HTMLProcessor* $tmp599 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp599);
frost$collections$Array* $tmp600 = *(&local1);
frost$core$Int64 $tmp601 = (frost$core$Int64) {0};
frost$core$Object* $tmp602 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp600, $tmp601);
frost$io$File* $tmp603 = *(&local3);
frost$core$Bit $tmp604 = frost$core$Bit$init$builtin_bit($tmp603 != NULL);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp606 = (frost$core$Int64) {290};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s607, $tmp606, &$s608);
abort(); // unreachable
block98:;
frost$core$String* $tmp609 = *(&local7);
frost$core$Bit $tmp610 = frost$core$Bit$init$builtin_bit($tmp609 != NULL);
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp612 = (frost$core$Int64) {290};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s613, $tmp612, &$s614);
abort(); // unreachable
block100:;
$fn616 $tmp615 = ($fn616) $tmp599->$class->vtable[3];
$tmp615($tmp599, ((frost$io$File*) $tmp602), $tmp603, $tmp609);
frost$core$Frost$unref$frost$core$Object$Q($tmp602);
// unreffing REF($880:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// unreffing REF($875:org.frostlang.frostc.HTMLProcessor)
// line 291
frost$io$File* $tmp617 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$core$String* $tmp618 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp619 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp620 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp620));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp621 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp621));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp622 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block93:;
// line 293
frost$core$String* $tmp623 = *(&local7);
frost$core$Bit $tmp624 = frost$core$Bit$init$builtin_bit($tmp623 != NULL);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block102; else goto block103;
block102:;
// line 294
frost$io$Console$printErrorLine$frost$core$String(&$s626);
// line 295
frost$core$Int64 $tmp627 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp627);
goto block103;
block103:;
// line 297
// line 1
// line 299
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 300
org$frostlang$frostc$Main$Format$nullable $tmp628 = *(&local6);
frost$core$Bit $tmp629 = frost$core$Bit$init$builtin_bit($tmp628.nonnull);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block104; else goto block105;
block105:;
frost$core$Int64 $tmp631 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s632, $tmp631, &$s633);
abort(); // unreachable
block104:;
frost$core$Int64 $tmp634 = ((org$frostlang$frostc$Main$Format) $tmp628.value).$rawValue;
frost$core$Int64 $tmp635 = (frost$core$Int64) {0};
frost$core$Bit $tmp636 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp634, $tmp635);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {1};
frost$core$Bit $tmp639 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp634, $tmp638);
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block107; else goto block109;
block109:;
frost$core$Int64 $tmp641 = (frost$core$Int64) {2};
frost$core$Bit $tmp642 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp634, $tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block107; else goto block110;
block107:;
// line 302
*(&local23) = ((frost$core$Error*) NULL);
// line 303
org$frostlang$frostc$LLVMCodeGenerator* $tmp644 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp645 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp646 = *(&local3);
frost$core$Bit $tmp647 = frost$core$Bit$init$builtin_bit($tmp646 != NULL);
bool $tmp648 = $tmp647.value;
if ($tmp648) goto block113; else goto block114;
block114:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {304};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s650, $tmp649, &$s651);
abort(); // unreachable
block113:;
frost$io$File* $tmp652 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp646, &$s653);
frost$core$Maybe* $tmp654 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp652);
// try maybe check
frost$core$Int64* $tmp655 = &$tmp654->$rawValue;
frost$core$Int64 $tmp656 = *$tmp655;
int64_t $tmp657 = $tmp656.value;
bool $tmp658 = $tmp657 == 0;
if ($tmp658) goto block115; else goto block116;
block116:;
frost$core$Error** $tmp659 = (frost$core$Error**) ($tmp654->$data + 0);
frost$core$Error* $tmp660 = *$tmp659;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local23) = $tmp660;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing REF($994:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing REF($993:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($983:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($982:org.frostlang.frostc.LLVMCodeGenerator)
goto block111;
block115:;
frost$core$Object** $tmp661 = (frost$core$Object**) ($tmp654->$data + 0);
frost$core$Object* $tmp662 = *$tmp661;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp644, $tmp645, ((frost$io$OutputStream*) $tmp662));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp644)));
org$frostlang$frostc$CodeGenerator* $tmp663 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp644);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing REF($994:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing REF($993:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($983:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing REF($982:org.frostlang.frostc.LLVMCodeGenerator)
goto block112;
block111:;
// line 307
frost$core$Error* $tmp664 = *(&local23);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp664));
// line 308
frost$core$Int64 $tmp665 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp665);
goto block112;
block112:;
frost$core$Error* $tmp666 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing error
*(&local23) = ((frost$core$Error*) NULL);
goto block106;
block110:;
frost$core$Int64 $tmp667 = (frost$core$Int64) {3};
frost$core$Bit $tmp668 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp634, $tmp667);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block117; else goto block118;
block117:;
// line 312
org$frostlang$frostc$HCodeGenerator* $tmp670 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp671 = *(&local3);
frost$core$Bit $tmp672 = frost$core$Bit$init$builtin_bit($tmp671 != NULL);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block119; else goto block120;
block120:;
frost$core$Int64 $tmp674 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s675, $tmp674, &$s676);
abort(); // unreachable
block119:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp670, $tmp671);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp670)));
org$frostlang$frostc$CodeGenerator* $tmp677 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp670);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($1063:org.frostlang.frostc.HCodeGenerator)
goto block106;
block118:;
frost$core$Int64 $tmp678 = (frost$core$Int64) {4};
frost$core$Bit $tmp679 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp634, $tmp678);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block121; else goto block122;
block121:;
// line 315
org$frostlang$frostc$CCodeGenerator* $tmp681 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp682 = *(&local3);
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit($tmp682 != NULL);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block123; else goto block124;
block124:;
frost$core$Int64 $tmp685 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s686, $tmp685, &$s687);
abort(); // unreachable
block123:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp681, $tmp682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp681)));
org$frostlang$frostc$CodeGenerator* $tmp688 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp681);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing REF($1090:org.frostlang.frostc.CCodeGenerator)
goto block106;
block122:;
// line 318
frost$core$Bit $tmp689 = frost$core$Bit$init$builtin_bit(false);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block125; else goto block126;
block126:;
frost$core$Int64 $tmp691 = (frost$core$Int64) {318};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s692, $tmp691);
abort(); // unreachable
block125:;
goto block106;
block106:;
// line 321
org$frostlang$frostc$Compiler$Settings* $tmp693 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp694 = &param0->frostHome;
frost$io$File* $tmp695 = *$tmp694;
frost$collections$Array* $tmp696 = *(&local2);
frost$core$Int64 $tmp697 = *(&local4);
frost$core$Int64 $tmp698 = *(&local5);
frost$core$Bit* $tmp699 = &param0->debug;
frost$core$Bit $tmp700 = *$tmp699;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp693, $tmp695, ((frost$collections$ListView*) $tmp696), $tmp697, $tmp698, $tmp700);
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
org$frostlang$frostc$Compiler$Settings* $tmp701 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local24) = $tmp693;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
// unreffing REF($1121:org.frostlang.frostc.Compiler.Settings)
// line 323
frost$threads$MessageQueue* $tmp702 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp702);
*(&local25) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
frost$threads$MessageQueue* $tmp703 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local25) = $tmp702;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($1142:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 324
org$frostlang$frostc$Compiler* $tmp704 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp705 = *(&local25);
org$frostlang$frostc$CodeGenerator* $tmp706 = *(&local22);
org$frostlang$frostc$Compiler$Settings* $tmp707 = *(&local24);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp704, $tmp705, $tmp706, $tmp707);
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
org$frostlang$frostc$Compiler* $tmp708 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
*(&local26) = $tmp704;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing REF($1156:org.frostlang.frostc.Compiler)
// line 325
frost$collections$Array* $tmp709 = *(&local1);
ITable* $tmp710 = ((frost$collections$Iterable*) $tmp709)->$class->itable;
while ($tmp710->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp710 = $tmp710->next;
}
$fn712 $tmp711 = $tmp710->methods[0];
frost$collections$Iterator* $tmp713 = $tmp711(((frost$collections$Iterable*) $tmp709));
goto block127;
block127:;
ITable* $tmp714 = $tmp713->$class->itable;
while ($tmp714->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp714 = $tmp714->next;
}
$fn716 $tmp715 = $tmp714->methods[0];
frost$core$Bit $tmp717 = $tmp715($tmp713);
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block129; else goto block128;
block128:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp719 = $tmp713->$class->itable;
while ($tmp719->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp719 = $tmp719->next;
}
$fn721 $tmp720 = $tmp719->methods[1];
frost$core$Object* $tmp722 = $tmp720($tmp713);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp722)));
frost$io$File* $tmp723 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
*(&local27) = ((frost$io$File*) $tmp722);
// line 326
org$frostlang$frostc$Compiler* $tmp724 = *(&local26);
frost$io$File* $tmp725 = *(&local27);
frost$collections$ListView* $tmp726 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp724, $tmp725);
ITable* $tmp727 = ((frost$collections$Iterable*) $tmp726)->$class->itable;
while ($tmp727->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp727 = $tmp727->next;
}
$fn729 $tmp728 = $tmp727->methods[0];
frost$collections$Iterator* $tmp730 = $tmp728(((frost$collections$Iterable*) $tmp726));
goto block130;
block130:;
ITable* $tmp731 = $tmp730->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[0];
frost$core$Bit $tmp734 = $tmp732($tmp730);
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block132; else goto block131;
block131:;
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp736 = $tmp730->$class->itable;
while ($tmp736->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp736 = $tmp736->next;
}
$fn738 $tmp737 = $tmp736->methods[1];
frost$core$Object* $tmp739 = $tmp737($tmp730);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp739)));
org$frostlang$frostc$ClassDecl* $tmp740 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) $tmp739);
// line 327
org$frostlang$frostc$Compiler* $tmp741 = *(&local26);
org$frostlang$frostc$ClassDecl* $tmp742 = *(&local28);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp741, $tmp742);
frost$core$Frost$unref$frost$core$Object$Q($tmp739);
// unreffing REF($1213:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp743 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// unreffing cl
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block130;
block132:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp730));
// unreffing REF($1202:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
// unreffing REF($1198:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp722);
// unreffing REF($1187:frost.collections.Iterator.T)
frost$io$File* $tmp744 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp744));
// unreffing s
*(&local27) = ((frost$io$File*) NULL);
goto block127;
block129:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($1176:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 330
frost$collections$Array* $tmp745 = *(&local1);
ITable* $tmp746 = ((frost$collections$Iterable*) $tmp745)->$class->itable;
while ($tmp746->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[0];
frost$collections$Iterator* $tmp749 = $tmp747(((frost$collections$Iterable*) $tmp745));
goto block133;
block133:;
ITable* $tmp750 = $tmp749->$class->itable;
while ($tmp750->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp750 = $tmp750->next;
}
$fn752 $tmp751 = $tmp750->methods[0];
frost$core$Bit $tmp753 = $tmp751($tmp749);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block135; else goto block134;
block134:;
*(&local29) = ((frost$io$File*) NULL);
ITable* $tmp755 = $tmp749->$class->itable;
while ($tmp755->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp755 = $tmp755->next;
}
$fn757 $tmp756 = $tmp755->methods[1];
frost$core$Object* $tmp758 = $tmp756($tmp749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp758)));
frost$io$File* $tmp759 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
*(&local29) = ((frost$io$File*) $tmp758);
// line 331
org$frostlang$frostc$Compiler* $tmp760 = *(&local26);
frost$io$File* $tmp761 = *(&local29);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp760, $tmp761);
frost$core$Frost$unref$frost$core$Object$Q($tmp758);
// unreffing REF($1268:frost.collections.Iterator.T)
frost$io$File* $tmp762 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
// unreffing s
*(&local29) = ((frost$io$File*) NULL);
goto block133;
block135:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing REF($1257:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 333
org$frostlang$frostc$Compiler* $tmp763 = *(&local26);
org$frostlang$frostc$Compiler$finish($tmp763);
// line 334
frost$threads$MessageQueue* $tmp764 = *(&local25);
frost$core$Int64 $tmp765 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp764);
*(&local21) = $tmp765;
// line 335
frost$core$Int64 $tmp766 = (frost$core$Int64) {0};
frost$core$Int64 $tmp767 = *(&local21);
frost$core$Bit $tmp768 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp769 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp766, $tmp767, $tmp768);
frost$core$Int64 $tmp770 = $tmp769.min;
*(&local30) = $tmp770;
frost$core$Int64 $tmp771 = $tmp769.max;
frost$core$Bit $tmp772 = $tmp769.inclusive;
bool $tmp773 = $tmp772.value;
frost$core$Int64 $tmp774 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp775 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp774);
if ($tmp773) goto block139; else goto block140;
block139:;
int64_t $tmp776 = $tmp770.value;
int64_t $tmp777 = $tmp771.value;
bool $tmp778 = $tmp776 <= $tmp777;
frost$core$Bit $tmp779 = (frost$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block136; else goto block137;
block140:;
int64_t $tmp781 = $tmp770.value;
int64_t $tmp782 = $tmp771.value;
bool $tmp783 = $tmp781 < $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block136; else goto block137;
block136:;
// line 336
frost$threads$MessageQueue* $tmp786 = *(&local25);
frost$core$Immutable* $tmp787 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp786);
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp787)));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp788 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp787);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// unreffing REF($1328:frost.threads.MessageQueue.T)
// line 338
org$frostlang$frostc$Compiler$ErrorMsg* $tmp789 = *(&local31);
frost$io$File** $tmp790 = &$tmp789->file;
frost$io$File* $tmp791 = *$tmp790;
frost$core$String* $tmp792 = frost$io$File$get_name$R$frost$core$String($tmp791);
frost$core$String* $tmp793 = frost$core$String$get_asString$R$frost$core$String($tmp792);
frost$core$String* $tmp794 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp793, &$s795);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp796 = *(&local31);
org$frostlang$frostc$Position* $tmp797 = &$tmp796->position;
org$frostlang$frostc$Position $tmp798 = *$tmp797;
org$frostlang$frostc$Position$wrapper* $tmp799;
$tmp799 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp799->value = $tmp798;
frost$core$String* $tmp800 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp794, ((frost$core$Object*) $tmp799));
frost$core$String* $tmp801 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp800, &$s802);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp803 = *(&local31);
frost$core$String** $tmp804 = &$tmp803->message;
frost$core$String* $tmp805 = *$tmp804;
frost$core$String* $tmp806 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp801, $tmp805);
frost$core$String* $tmp807 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp806, &$s808);
frost$io$Console$printLine$frost$core$String($tmp807);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp807));
// unreffing REF($1357:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
// unreffing REF($1356:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// unreffing REF($1352:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
// unreffing REF($1351:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
// unreffing REF($1350:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
// unreffing REF($1346:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
// unreffing REF($1345:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// unreffing REF($1344:frost.core.String)
org$frostlang$frostc$Compiler$ErrorMsg* $tmp809 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing error
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
goto block138;
block138:;
frost$core$Int64 $tmp810 = *(&local30);
int64_t $tmp811 = $tmp771.value;
int64_t $tmp812 = $tmp810.value;
int64_t $tmp813 = $tmp811 - $tmp812;
frost$core$Int64 $tmp814 = (frost$core$Int64) {$tmp813};
frost$core$UInt64 $tmp815 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp814);
if ($tmp773) goto block142; else goto block143;
block142:;
uint64_t $tmp816 = $tmp815.value;
uint64_t $tmp817 = $tmp775.value;
bool $tmp818 = $tmp816 >= $tmp817;
frost$core$Bit $tmp819 = (frost$core$Bit) {$tmp818};
bool $tmp820 = $tmp819.value;
if ($tmp820) goto block141; else goto block137;
block143:;
uint64_t $tmp821 = $tmp815.value;
uint64_t $tmp822 = $tmp775.value;
bool $tmp823 = $tmp821 > $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block141; else goto block137;
block141:;
int64_t $tmp826 = $tmp810.value;
int64_t $tmp827 = $tmp774.value;
int64_t $tmp828 = $tmp826 + $tmp827;
frost$core$Int64 $tmp829 = (frost$core$Int64) {$tmp828};
*(&local30) = $tmp829;
goto block136;
block137:;
org$frostlang$frostc$Compiler* $tmp830 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing compiler
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp831 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing errorQueue
*(&local25) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp832 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing settings
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp833 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing cg
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 341
frost$core$Int64 $tmp834 = *(&local21);
frost$core$Int64 $tmp835 = (frost$core$Int64) {0};
frost$core$Bit $tmp836 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp834, $tmp835);
bool $tmp837 = $tmp836.value;
if ($tmp837) goto block144; else goto block146;
block144:;
// line 342
org$frostlang$frostc$Main$Format$nullable $tmp838 = *(&local6);
frost$core$Bit $tmp839 = frost$core$Bit$init$builtin_bit($tmp838.nonnull);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block147; else goto block148;
block148:;
frost$core$Int64 $tmp841 = (frost$core$Int64) {342};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s842, $tmp841, &$s843);
abort(); // unreachable
block147:;
frost$core$Int64 $tmp844 = ((org$frostlang$frostc$Main$Format) $tmp838.value).$rawValue;
frost$core$Int64 $tmp845 = (frost$core$Int64) {1};
frost$core$Bit $tmp846 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp844, $tmp845);
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block150; else goto block151;
block150:;
// line 344
frost$io$File* $tmp848 = *(&local3);
frost$core$Bit $tmp849 = frost$core$Bit$init$builtin_bit($tmp848 != NULL);
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block152; else goto block153;
block153:;
frost$core$Int64 $tmp851 = (frost$core$Int64) {344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s852, $tmp851, &$s853);
abort(); // unreachable
block152:;
frost$io$File* $tmp854 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp848, &$s855);
frost$io$File* $tmp856 = *(&local3);
frost$core$Bit $tmp857 = frost$core$Bit$init$builtin_bit($tmp856 != NULL);
bool $tmp858 = $tmp857.value;
if ($tmp858) goto block154; else goto block155;
block155:;
frost$core$Int64 $tmp859 = (frost$core$Int64) {344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s860, $tmp859, &$s861);
abort(); // unreachable
block154:;
frost$core$Bit $tmp862 = *(&local8);
frost$io$File* $tmp863 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp854, $tmp856, $tmp862);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing REF($1476:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($1465:frost.io.File)
goto block149;
block151:;
frost$core$Int64 $tmp864 = (frost$core$Int64) {2};
frost$core$Bit $tmp865 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp844, $tmp864);
bool $tmp866 = $tmp865.value;
if ($tmp866) goto block156; else goto block149;
block156:;
// line 347
frost$io$File* $tmp867 = *(&local3);
frost$core$Bit $tmp868 = frost$core$Bit$init$builtin_bit($tmp867 != NULL);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block157; else goto block158;
block158:;
frost$core$Int64 $tmp870 = (frost$core$Int64) {347};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s871, $tmp870, &$s872);
abort(); // unreachable
block157:;
frost$io$File* $tmp873 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp867, &$s874);
frost$io$File* $tmp875 = *(&local3);
frost$core$Bit $tmp876 = frost$core$Bit$init$builtin_bit($tmp875 != NULL);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block159; else goto block160;
block160:;
frost$core$Int64 $tmp878 = (frost$core$Int64) {347};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s879, $tmp878, &$s880);
abort(); // unreachable
block159:;
frost$core$Bit $tmp881 = *(&local8);
frost$io$File* $tmp882 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp873, $tmp875, $tmp881);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp882));
// unreffing REF($1509:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
// unreffing REF($1498:frost.io.File)
goto block149;
block149:;
goto block145;
block146:;
// line 1
// line 352
frost$core$Int64 $tmp883 = *(&local21);
frost$core$Int64 $tmp884 = (frost$core$Int64) {1};
frost$core$Bit $tmp885 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp883, $tmp884);
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block161; else goto block163;
block161:;
// line 354
frost$io$Console$printLine$frost$core$String(&$s887);
goto block162;
block163:;
// line 1
// line 358
frost$core$Int64 $tmp888 = *(&local21);
frost$core$String* $tmp889 = frost$core$Int64$get_asString$R$frost$core$String($tmp888);
frost$core$String* $tmp890 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp889, &$s891);
frost$io$Console$printLine$frost$core$String($tmp890);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp890));
// unreffing REF($1532:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
// unreffing REF($1531:frost.core.String)
goto block162;
block162:;
// line 360
frost$core$Int64 $tmp892 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp892);
goto block145;
block145:;
frost$io$File* $tmp893 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$core$String* $tmp894 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp894));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp895 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp896 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp897 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp898 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 366
frost$core$Bit $tmp899 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s900);
return $tmp899;

}
void frostMain(frost$collections$ListView* param0) {

// line 371
org$frostlang$frostc$Main* $tmp901 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp901);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp901, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing REF($1:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp902 = &param0->clang;
frost$io$File* $tmp903 = *$tmp902;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
frost$io$File** $tmp904 = &param0->frostHome;
frost$io$File* $tmp905 = *$tmp904;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
return;

}

