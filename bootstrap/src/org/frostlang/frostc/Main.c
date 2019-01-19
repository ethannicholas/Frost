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

typedef frost$core$String* (*$fn56)(frost$io$InputStream*);
typedef frost$core$String* (*$fn69)(frost$io$InputStream*);
typedef frost$collections$Iterator* (*$fn116)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn120)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn125)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn203)(frost$io$InputStream*);
typedef frost$core$String* (*$fn216)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn241)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn245)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn248)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn252)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn255)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn259)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn283)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn289)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn312)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$String* (*$fn340)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn365)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn399)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn438)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn487)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn495)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Int64 (*$fn527)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn545)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn603)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn623)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn648)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn744)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn748)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn753)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn761)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn765)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn770)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn780)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn784)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn789)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s100 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s108 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s138 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s146 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s149 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s250 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s257 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s261 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s294 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s375 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s434 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s459 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s513 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s520 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s554 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s562 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s572 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s574 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s578 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s580 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s614 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s629 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s645 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s682 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s685 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s707 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s827 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s834 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s840 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s884 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s887 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s892 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s893 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s903 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s911 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s912 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s923 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s932 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
frost$core$Maybe* $tmp46 = frost$core$System$Process$openStandardOutput$R$frost$core$Maybe$LTfrost$io$InputStream$GT($tmp45);
// try maybe check
frost$core$Int64* $tmp47 = &$tmp46->$rawValue;
frost$core$Int64 $tmp48 = *$tmp47;
int64_t $tmp49 = $tmp48.value;
bool $tmp50 = $tmp49 == 0;
if ($tmp50) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp51 = (frost$core$Error**) ($tmp46->$data + 0);
frost$core$Error* $tmp52 = *$tmp51;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local2) = $tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($101:frost.core.Maybe<frost.io.InputStream>)
goto block3;
block7:;
frost$core$Object** $tmp53 = (frost$core$Object**) ($tmp46->$data + 0);
frost$core$Object* $tmp54 = *$tmp53;
$fn56 $tmp55 = ($fn56) ((frost$io$InputStream*) $tmp54)->$class->vtable[14];
frost$core$String* $tmp57 = $tmp55(((frost$io$InputStream*) $tmp54));
frost$io$Console$printError$frost$core$String($tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($122:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($101:frost.core.Maybe<frost.io.InputStream>)
// line 74
frost$core$System$Process* $tmp58 = *(&local1);
frost$core$Maybe* $tmp59 = frost$core$System$Process$openStandardError$R$frost$core$Maybe$LTfrost$io$InputStream$GT($tmp58);
// try maybe check
frost$core$Int64* $tmp60 = &$tmp59->$rawValue;
frost$core$Int64 $tmp61 = *$tmp60;
int64_t $tmp62 = $tmp61.value;
bool $tmp63 = $tmp62 == 0;
if ($tmp63) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp64 = (frost$core$Error**) ($tmp59->$data + 0);
frost$core$Error* $tmp65 = *$tmp64;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local2) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($132:frost.core.Maybe<frost.io.InputStream>)
goto block3;
block9:;
frost$core$Object** $tmp66 = (frost$core$Object**) ($tmp59->$data + 0);
frost$core$Object* $tmp67 = *$tmp66;
$fn69 $tmp68 = ($fn69) ((frost$io$InputStream*) $tmp67)->$class->vtable[14];
frost$core$String* $tmp70 = $tmp68(((frost$io$InputStream*) $tmp67));
frost$io$Console$printError$frost$core$String($tmp70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// unreffing REF($153:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($132:frost.core.Maybe<frost.io.InputStream>)
goto block4;
block3:;
// line 77
frost$core$Error* $tmp71 = *(&local2);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp71));
// line 78
frost$core$Int64 $tmp72 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp72);
goto block4;
block4:;
frost$core$Error* $tmp73 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing error
*(&local2) = ((frost$core$Error*) NULL);
// line 80
frost$core$System$Process* $tmp74 = *(&local1);
frost$core$Int64 $tmp75;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp75, $tmp74);
*(&local3) = $tmp75;
// line 81
frost$core$Bit $tmp76 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp77 = $tmp76.value;
if ($tmp77) goto block11; else goto block12;
block11:;
// line 82
*(&local4) = ((frost$core$Error*) NULL);
// line 83
frost$core$Error* $tmp78 = frost$io$File$delete$R$frost$core$Error$Q(param1);
// try error check
if ($tmp78 == NULL) goto block15; else goto block16;
block16:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local4) = $tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($186:frost.core.Error?)
goto block13;
block15:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($186:frost.core.Error?)
goto block14;
block13:;
// line 86
frost$core$Error* $tmp79 = *(&local4);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp79));
// line 87
frost$core$Int64 $tmp80 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp80);
goto block14;
block14:;
frost$core$Error* $tmp81 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing error
*(&local4) = ((frost$core$Error*) NULL);
goto block12;
block12:;
// line 90
frost$core$Int64 $tmp82 = *(&local3);
frost$core$Int64 $tmp83 = (frost$core$Int64) {0};
int64_t $tmp84 = $tmp82.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 != $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block17; else goto block18;
block17:;
// line 91
frost$core$Int64 $tmp89 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp89);
goto block18;
block18:;
// line 93
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp90 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing p
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp91 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
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
frost$collections$Array* $tmp92 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp92);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
frost$collections$Array* $tmp93 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local0) = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 98
frost$collections$Array* $tmp94 = *(&local0);
frost$core$String** $tmp95 = &param1->path;
frost$core$String* $tmp96 = *$tmp95;
frost$collections$Array$add$frost$collections$Array$T($tmp94, ((frost$core$Object*) $tmp96));
// line 99
frost$collections$Array* $tmp97 = *(&local0);
frost$core$String* $tmp98 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp99 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s100, $tmp98);
frost$core$String* $tmp101 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp99, &$s102);
frost$collections$Array$add$frost$collections$Array$T($tmp97, ((frost$core$Object*) $tmp101));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// unreffing REF($24:frost.core.String)
// line 100
frost$collections$Array* $tmp103 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp103, ((frost$core$Object*) &$s104));
// line 101
frost$collections$Array* $tmp105 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp105, ((frost$core$Object*) &$s106));
// line 102
frost$collections$Array* $tmp107 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp107, ((frost$core$Object*) &$s108));
// line 103
frost$core$String* $tmp109 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp110 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp109, &$s111);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
frost$collections$Array* $tmp112 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local1) = $tmp110;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($55:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($54:frost.core.String)
// line 104
frost$collections$Array* $tmp113 = *(&local1);
ITable* $tmp114 = ((frost$collections$Iterable*) $tmp113)->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[0];
frost$collections$Iterator* $tmp117 = $tmp115(((frost$collections$Iterable*) $tmp113));
goto block1;
block1:;
ITable* $tmp118 = $tmp117->$class->itable;
while ($tmp118->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[0];
frost$core$Bit $tmp121 = $tmp119($tmp117);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp123 = $tmp117->$class->itable;
while ($tmp123->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp123 = $tmp123->next;
}
$fn125 $tmp124 = $tmp123->methods[1];
frost$core$Object* $tmp126 = $tmp124($tmp117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp126)));
frost$core$String* $tmp127 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local2) = ((frost$core$String*) $tmp126);
// line 105
frost$io$File* $tmp128 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp129 = *(&local2);
frost$io$File$init$frost$core$String($tmp128, $tmp129);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$io$File* $tmp130 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local3) = $tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($94:frost.io.File)
// line 106
frost$collections$Array* $tmp131 = *(&local0);
frost$io$File* $tmp132 = *(&local3);
frost$io$File* $tmp133 = frost$io$File$get_parent$R$frost$io$File$Q($tmp132);
frost$core$Bit $tmp134 = frost$core$Bit$init$builtin_bit($tmp133 != NULL);
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp136 = (frost$core$Int64) {106};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s137, $tmp136, &$s138);
abort(); // unreachable
block4:;
frost$core$String* $tmp139 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s140, ((frost$core$Object*) $tmp133));
frost$collections$Array$add$frost$collections$Array$T($tmp131, ((frost$core$Object*) $tmp139));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp139));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($111:frost.io.File?)
// line 107
frost$io$File* $tmp141 = *(&local3);
frost$core$String* $tmp142 = frost$io$File$get_simpleName$R$frost$core$String($tmp141);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$core$String* $tmp143 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local4) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// unreffing REF($132:frost.core.String)
// line 108
frost$core$String* $tmp144 = *(&local4);
frost$core$Bit $tmp145 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp144, &$s146);
bool $tmp147 = $tmp145.value;
if ($tmp147) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp148 = (frost$core$Int64) {108};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s149, $tmp148);
abort(); // unreachable
block6:;
// line 109
frost$core$String* $tmp150 = *(&local4);
frost$core$Int64 $tmp151 = (frost$core$Int64) {3};
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp153 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp151, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp152);
frost$core$String* $tmp154 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp150, $tmp153);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$String* $tmp155 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local4) = $tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing REF($157:frost.core.String)
// line 110
frost$collections$Array* $tmp156 = *(&local0);
frost$core$String* $tmp157 = *(&local4);
frost$core$String* $tmp158 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s159, $tmp157);
frost$collections$Array$add$frost$collections$Array$T($tmp156, ((frost$core$Object*) $tmp158));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing REF($171:frost.core.String)
frost$core$String* $tmp160 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing simpleName
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp161 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing libFile
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
// unreffing REF($85:frost.collections.Iterator.T)
frost$core$String* $tmp162 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing lib
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing REF($74:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 112
frost$collections$Array* $tmp163 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp163, ((frost$core$Object*) &$s164));
// line 113
frost$collections$Array* $tmp165 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp165, ((frost$core$Object*) &$s166));
// line 114
frost$core$Bit* $tmp167 = &param0->debug;
frost$core$Bit $tmp168 = *$tmp167;
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block8; else goto block9;
block8:;
// line 115
frost$collections$Array* $tmp170 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp170, ((frost$core$Object*) &$s171));
goto block9;
block9:;
// line 117
frost$collections$Array* $tmp172 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp172, ((frost$core$Object*) &$s173));
// line 118
frost$collections$Array* $tmp174 = *(&local0);
frost$core$String** $tmp175 = &param2->path;
frost$core$String* $tmp176 = *$tmp175;
frost$collections$Array$add$frost$collections$Array$T($tmp174, ((frost$core$Object*) $tmp176));
// line 119
*(&local5) = ((frost$core$System$Process*) NULL);
// line 120
*(&local6) = ((frost$core$Error*) NULL);
// line 121
frost$io$File** $tmp177 = &param0->clang;
frost$io$File* $tmp178 = *$tmp177;
frost$core$String** $tmp179 = &$tmp178->path;
frost$core$String* $tmp180 = *$tmp179;
frost$collections$Array* $tmp181 = *(&local0);
frost$core$Maybe* $tmp182 = frost$core$System$exec$frost$core$String$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp180, ((frost$collections$ListView*) $tmp181));
// try maybe check
frost$core$Int64* $tmp183 = &$tmp182->$rawValue;
frost$core$Int64 $tmp184 = *$tmp183;
int64_t $tmp185 = $tmp184.value;
bool $tmp186 = $tmp185 == 0;
if ($tmp186) goto block12; else goto block13;
block13:;
frost$core$Error** $tmp187 = (frost$core$Error**) ($tmp182->$data + 0);
frost$core$Error* $tmp188 = *$tmp187;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
*(&local6) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($243:frost.core.Maybe<frost.core.System.Process>)
goto block10;
block12:;
frost$core$Object** $tmp189 = (frost$core$Object**) ($tmp182->$data + 0);
frost$core$Object* $tmp190 = *$tmp189;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp190)));
frost$core$System$Process* $tmp191 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local5) = ((frost$core$System$Process*) $tmp190);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing REF($243:frost.core.Maybe<frost.core.System.Process>)
// line 122
frost$core$System$Process* $tmp192 = *(&local5);
frost$core$Maybe* $tmp193 = frost$core$System$Process$openStandardOutput$R$frost$core$Maybe$LTfrost$io$InputStream$GT($tmp192);
// try maybe check
frost$core$Int64* $tmp194 = &$tmp193->$rawValue;
frost$core$Int64 $tmp195 = *$tmp194;
int64_t $tmp196 = $tmp195.value;
bool $tmp197 = $tmp196 == 0;
if ($tmp197) goto block14; else goto block15;
block15:;
frost$core$Error** $tmp198 = (frost$core$Error**) ($tmp193->$data + 0);
frost$core$Error* $tmp199 = *$tmp198;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local6) = $tmp199;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($274:frost.core.Maybe<frost.io.InputStream>)
goto block10;
block14:;
frost$core$Object** $tmp200 = (frost$core$Object**) ($tmp193->$data + 0);
frost$core$Object* $tmp201 = *$tmp200;
$fn203 $tmp202 = ($fn203) ((frost$io$InputStream*) $tmp201)->$class->vtable[14];
frost$core$String* $tmp204 = $tmp202(((frost$io$InputStream*) $tmp201));
frost$io$Console$printError$frost$core$String($tmp204);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($295:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
// unreffing REF($274:frost.core.Maybe<frost.io.InputStream>)
// line 123
frost$core$System$Process* $tmp205 = *(&local5);
frost$core$Maybe* $tmp206 = frost$core$System$Process$openStandardError$R$frost$core$Maybe$LTfrost$io$InputStream$GT($tmp205);
// try maybe check
frost$core$Int64* $tmp207 = &$tmp206->$rawValue;
frost$core$Int64 $tmp208 = *$tmp207;
int64_t $tmp209 = $tmp208.value;
bool $tmp210 = $tmp209 == 0;
if ($tmp210) goto block16; else goto block17;
block17:;
frost$core$Error** $tmp211 = (frost$core$Error**) ($tmp206->$data + 0);
frost$core$Error* $tmp212 = *$tmp211;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local6) = $tmp212;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($305:frost.core.Maybe<frost.io.InputStream>)
goto block10;
block16:;
frost$core$Object** $tmp213 = (frost$core$Object**) ($tmp206->$data + 0);
frost$core$Object* $tmp214 = *$tmp213;
$fn216 $tmp215 = ($fn216) ((frost$io$InputStream*) $tmp214)->$class->vtable[14];
frost$core$String* $tmp217 = $tmp215(((frost$io$InputStream*) $tmp214));
frost$io$Console$printError$frost$core$String($tmp217);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($326:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
// unreffing REF($305:frost.core.Maybe<frost.io.InputStream>)
goto block11;
block10:;
// line 126
frost$core$Error* $tmp218 = *(&local6);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp218));
// line 127
frost$core$Int64 $tmp219 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp219);
goto block11;
block11:;
frost$core$Error* $tmp220 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing error
*(&local6) = ((frost$core$Error*) NULL);
// line 129
frost$core$System$Process* $tmp221 = *(&local5);
frost$core$Int64 $tmp222;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp222, $tmp221);
*(&local7) = $tmp222;
// line 130
frost$core$Bit $tmp223 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block18; else goto block19;
block18:;
// line 131
*(&local8) = ((frost$core$Error*) NULL);
// line 132
frost$core$Error* $tmp225 = frost$io$File$delete$R$frost$core$Error$Q(param1);
// try error check
if ($tmp225 == NULL) goto block22; else goto block23;
block23:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
*(&local8) = $tmp225;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($359:frost.core.Error?)
goto block20;
block22:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing REF($359:frost.core.Error?)
goto block21;
block20:;
// line 135
frost$core$Error* $tmp226 = *(&local8);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp226));
// line 136
frost$core$Int64 $tmp227 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp227);
goto block21;
block21:;
frost$core$Error* $tmp228 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing error
*(&local8) = ((frost$core$Error*) NULL);
goto block19;
block19:;
// line 139
frost$core$Int64 $tmp229 = *(&local7);
frost$core$Int64 $tmp230 = (frost$core$Int64) {0};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 != $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block24; else goto block25;
block24:;
// line 140
frost$core$Int64 $tmp236 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp236);
goto block25;
block25:;
// line 142
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp237 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing p
*(&local5) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp238 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing icuLibs
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// line 146
*(&local0) = ((frost$core$Error*) NULL);
// line 147
$fn241 $tmp240 = ($fn241) param1->$class->vtable[19];
frost$core$Error* $tmp242 = $tmp240(param1, &$s243);
// try error check
if ($tmp242 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
*(&local0) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($4:frost.core.Error?)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($4:frost.core.Error?)
// line 148
$fn245 $tmp244 = ($fn245) param1->$class->vtable[21];
frost$core$Error* $tmp246 = $tmp244(param1);
// try error check
if ($tmp246 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
*(&local0) = $tmp246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($20:frost.core.Error?)
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($20:frost.core.Error?)
// line 149
$fn248 $tmp247 = ($fn248) param1->$class->vtable[19];
frost$core$Error* $tmp249 = $tmp247(param1, &$s250);
// try error check
if ($tmp249 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local0) = $tmp249;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($36:frost.core.Error?)
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
// unreffing REF($36:frost.core.Error?)
// line 150
$fn252 $tmp251 = ($fn252) param1->$class->vtable[21];
frost$core$Error* $tmp253 = $tmp251(param1);
// try error check
if ($tmp253 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local0) = $tmp253;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($52:frost.core.Error?)
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($52:frost.core.Error?)
// line 151
$fn255 $tmp254 = ($fn255) param1->$class->vtable[19];
frost$core$Error* $tmp256 = $tmp254(param1, &$s257);
// try error check
if ($tmp256 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
*(&local0) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($68:frost.core.Error?)
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($68:frost.core.Error?)
// line 152
$fn259 $tmp258 = ($fn259) param1->$class->vtable[19];
frost$core$Error* $tmp260 = $tmp258(param1, &$s261);
// try error check
if ($tmp260 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local0) = $tmp260;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($84:frost.core.Error?)
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing REF($84:frost.core.Error?)
goto block2;
block1:;
// line 155
frost$core$Bit $tmp262 = frost$core$Bit$init$builtin_bit(false);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp264 = (frost$core$Int64) {155};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s265, $tmp264);
abort(); // unreachable
block15:;
goto block2;
block2:;
frost$core$Error* $tmp266 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp266));
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
org$frostlang$frostc$Main$Arguments* $tmp267 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp267, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
org$frostlang$frostc$Main$Arguments* $tmp268 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local0) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 161
frost$collections$Array* $tmp269 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp269);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$collections$Array* $tmp270 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
*(&local1) = $tmp269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 162
frost$collections$Array* $tmp271 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp271);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
frost$collections$Array* $tmp272 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local2) = $tmp271;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 163
frost$collections$Array* $tmp273 = *(&local2);
frost$io$File** $tmp274 = &param0->frostHome;
frost$io$File* $tmp275 = *$tmp274;
frost$collections$Array$add$frost$collections$Array$T($tmp273, ((frost$core$Object*) $tmp275));
// line 164
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp276 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
*(&local3) = ((frost$io$File*) NULL);
// line 165
frost$core$Int64 $tmp277 = (frost$core$Int64) {3};
*(&local4) = $tmp277;
// line 166
frost$core$Int64 $tmp278 = (frost$core$Int64) {3};
*(&local5) = $tmp278;
// line 167
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 168
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp279 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
*(&local7) = ((frost$core$String*) NULL);
// line 169
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp280;
// line 170
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp281 = *(&local0);
$fn283 $tmp282 = ($fn283) $tmp281->$class->vtable[2];
frost$core$Bit $tmp284 = $tmp282($tmp281);
frost$core$Bit $tmp285 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block2; else goto block3;
block2:;
// line 171
org$frostlang$frostc$Main$Arguments* $tmp287 = *(&local0);
$fn289 $tmp288 = ($fn289) $tmp287->$class->vtable[3];
frost$core$String* $tmp290 = $tmp288($tmp287);
*(&local9) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
frost$core$String* $tmp291 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
*(&local9) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing REF($86:frost.core.String)
// line 172
frost$core$String* $tmp292 = *(&local9);
frost$core$Bit $tmp293 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp292, &$s294);
bool $tmp295 = $tmp293.value;
if ($tmp295) goto block5; else goto block6;
block5:;
// line 174
*(&local10) = ((frost$core$Error*) NULL);
// line 175
frost$io$File* $tmp296 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp296, &$s297);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
frost$io$File* $tmp298 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local11) = $tmp296;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($105:frost.io.File)
// line 176
frost$io$InputStream* $tmp299 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp300 = *(&local11);
frost$core$Maybe* $tmp301 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp300);
// try maybe check
frost$core$Int64* $tmp302 = &$tmp301->$rawValue;
frost$core$Int64 $tmp303 = *$tmp302;
int64_t $tmp304 = $tmp303.value;
bool $tmp305 = $tmp304 == 0;
if ($tmp305) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp306 = (frost$core$Error**) ($tmp301->$data + 0);
frost$core$Error* $tmp307 = *$tmp306;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp307));
*(&local10) = $tmp307;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing REF($120:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($118:frost.io.InputStream)
frost$io$File* $tmp308 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp309 = (frost$core$Object**) ($tmp301->$data + 0);
frost$core$Object* $tmp310 = *$tmp309;
$fn312 $tmp311 = ($fn312) $tmp299->$class->vtable[17];
frost$core$Maybe* $tmp313 = $tmp311($tmp299, ((frost$io$OutputStream*) $tmp310));
// try maybe check
frost$core$Int64* $tmp314 = &$tmp313->$rawValue;
frost$core$Int64 $tmp315 = *$tmp314;
int64_t $tmp316 = $tmp315.value;
bool $tmp317 = $tmp316 == 0;
if ($tmp317) goto block11; else goto block12;
block12:;
frost$core$Error** $tmp318 = (frost$core$Error**) ($tmp313->$data + 0);
frost$core$Error* $tmp319 = *$tmp318;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local10) = $tmp319;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($149:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing REF($120:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($118:frost.io.InputStream)
frost$io$File* $tmp320 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block7;
block11:;
frost$core$Object** $tmp321 = (frost$core$Object**) ($tmp313->$data + 0);
frost$core$Object* $tmp322 = *$tmp321;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($149:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp301));
// unreffing REF($120:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($118:frost.io.InputStream)
// line 177
frost$collections$Array* $tmp323 = *(&local1);
frost$io$File* $tmp324 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp323, ((frost$core$Object*) $tmp324));
frost$io$File* $tmp325 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 180
frost$core$Error* $tmp326 = *(&local10);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp326));
// line 181
frost$core$Int64 $tmp327 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp327);
goto block8;
block8:;
frost$core$Error* $tmp328 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// unreffing error
*(&local10) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp329 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp292, &$s330);
bool $tmp331 = $tmp329.value;
if ($tmp331) goto block13; else goto block14;
block13:;
// line 185
frost$io$File* $tmp332 = *(&local3);
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit($tmp332 != NULL);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block15; else goto block16;
block15:;
// line 186
frost$io$Console$printErrorLine$frost$core$String(&$s335);
// line 187
frost$core$Int64 $tmp336 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp336);
goto block16;
block16:;
// line 189
frost$io$File* $tmp337 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp338 = *(&local0);
$fn340 $tmp339 = ($fn340) $tmp338->$class->vtable[4];
frost$core$String* $tmp341 = $tmp339($tmp338, &$s342);
frost$io$File$init$frost$core$String($tmp337, $tmp341);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
frost$io$File* $tmp343 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
*(&local3) = $tmp337;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp341));
// unreffing REF($234:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp337));
// unreffing REF($231:frost.io.File)
// line 190
*(&local12) = ((frost$core$Error*) NULL);
// line 191
frost$io$File* $tmp344 = *(&local3);
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit($tmp344 != NULL);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s348, $tmp347, &$s349);
abort(); // unreachable
block19:;
frost$io$File* $tmp350 = frost$io$File$get_parent$R$frost$io$File$Q($tmp344);
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit($tmp350 != NULL);
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {191};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block21:;
frost$core$Error* $tmp356 = frost$io$File$createDirectories$R$frost$core$Error$Q($tmp350);
// try error check
if ($tmp356 == NULL) goto block23; else goto block24;
block24:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local12) = $tmp356;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($270:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($261:frost.io.File?)
goto block17;
block23:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing REF($270:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
// unreffing REF($261:frost.io.File?)
goto block18;
block17:;
// line 194
frost$core$Error* $tmp357 = *(&local12);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp357));
// line 195
frost$core$Int64 $tmp358 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp358);
goto block18;
block18:;
frost$core$Error* $tmp359 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
// unreffing error
*(&local12) = ((frost$core$Error*) NULL);
goto block4;
block14:;
frost$core$Bit $tmp360 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp292, &$s361);
bool $tmp362 = $tmp360.value;
if ($tmp362) goto block25; else goto block26;
block25:;
// line 199
org$frostlang$frostc$Main$Arguments* $tmp363 = *(&local0);
$fn365 $tmp364 = ($fn365) $tmp363->$class->vtable[4];
frost$core$String* $tmp366 = $tmp364($tmp363, &$s367);
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
frost$core$String* $tmp368 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
*(&local13) = $tmp366;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp366));
// unreffing REF($311:frost.core.String)
// line 200
frost$core$String* $tmp369 = *(&local13);
frost$core$Int64$nullable $tmp370 = frost$core$String$convert$R$frost$core$Int64$Q($tmp369);
frost$core$Bit $tmp371 = frost$core$Bit$init$builtin_bit($tmp370.nonnull);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp373 = (frost$core$Int64) {200};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s374, $tmp373, &$s375);
abort(); // unreachable
block27:;
*(&local4) = ((frost$core$Int64) $tmp370.value);
// line 201
frost$core$Int64 $tmp376 = *(&local4);
frost$core$Int64 $tmp377 = (frost$core$Int64) {3};
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377.value;
bool $tmp380 = $tmp378 > $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block31; else goto block32;
block31:;
*(&local14) = $tmp381;
goto block33;
block32:;
frost$core$Int64 $tmp383 = *(&local4);
frost$core$Int64 $tmp384 = (frost$core$Int64) {0};
int64_t $tmp385 = $tmp383.value;
int64_t $tmp386 = $tmp384.value;
bool $tmp387 = $tmp385 < $tmp386;
frost$core$Bit $tmp388 = (frost$core$Bit) {$tmp387};
*(&local14) = $tmp388;
goto block33;
block33:;
frost$core$Bit $tmp389 = *(&local14);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block29; else goto block30;
block29:;
// line 202
frost$io$Console$printErrorLine$frost$core$String(&$s391);
// line 203
frost$core$Int64 $tmp392 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp392);
goto block30;
block30:;
frost$core$String* $tmp393 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp393));
// unreffing level
*(&local13) = ((frost$core$String*) NULL);
goto block4;
block26:;
frost$core$Bit $tmp394 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp292, &$s395);
bool $tmp396 = $tmp394.value;
if ($tmp396) goto block34; else goto block35;
block34:;
// line 207
org$frostlang$frostc$Main$Arguments* $tmp397 = *(&local0);
$fn399 $tmp398 = ($fn399) $tmp397->$class->vtable[4];
frost$core$String* $tmp400 = $tmp398($tmp397, &$s401);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$String* $tmp402 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local15) = $tmp400;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing REF($374:frost.core.String)
// line 208
frost$core$String* $tmp403 = *(&local15);
frost$core$Int64$nullable $tmp404 = frost$core$String$convert$R$frost$core$Int64$Q($tmp403);
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit($tmp404.nonnull);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block36; else goto block37;
block37:;
frost$core$Int64 $tmp407 = (frost$core$Int64) {208};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s408, $tmp407, &$s409);
abort(); // unreachable
block36:;
*(&local5) = ((frost$core$Int64) $tmp404.value);
// line 209
frost$core$Int64 $tmp410 = *(&local5);
frost$core$Int64 $tmp411 = (frost$core$Int64) {3};
int64_t $tmp412 = $tmp410.value;
int64_t $tmp413 = $tmp411.value;
bool $tmp414 = $tmp412 > $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block40; else goto block41;
block40:;
*(&local16) = $tmp415;
goto block42;
block41:;
frost$core$Int64 $tmp417 = *(&local5);
frost$core$Int64 $tmp418 = (frost$core$Int64) {0};
int64_t $tmp419 = $tmp417.value;
int64_t $tmp420 = $tmp418.value;
bool $tmp421 = $tmp419 < $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
*(&local16) = $tmp422;
goto block42;
block42:;
frost$core$Bit $tmp423 = *(&local16);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block38; else goto block39;
block38:;
// line 210
frost$io$Console$printErrorLine$frost$core$String(&$s425);
// line 211
frost$core$Int64 $tmp426 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp426);
goto block39;
block39:;
frost$core$String* $tmp427 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// unreffing level
*(&local15) = ((frost$core$String*) NULL);
goto block4;
block35:;
frost$core$Bit $tmp428 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp292, &$s429);
bool $tmp430 = $tmp428.value;
if ($tmp430) goto block43; else goto block44;
block43:;
// line 215
org$frostlang$frostc$Main$Format$nullable $tmp431 = *(&local6);
frost$core$Bit $tmp432 = frost$core$Bit$init$builtin_bit($tmp431.nonnull);
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block45; else goto block46;
block45:;
// line 216
frost$io$Console$printErrorLine$frost$core$String(&$s434);
// line 217
frost$core$Int64 $tmp435 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp435);
goto block46;
block46:;
// line 219
org$frostlang$frostc$Main$Arguments* $tmp436 = *(&local0);
$fn438 $tmp437 = ($fn438) $tmp436->$class->vtable[4];
frost$core$String* $tmp439 = $tmp437($tmp436, &$s440);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$String* $tmp441 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local17) = $tmp439;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
// unreffing REF($449:frost.core.String)
// line 220
frost$core$String* $tmp442 = *(&local17);
frost$core$Bit $tmp443 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp442, &$s444);
bool $tmp445 = $tmp443.value;
if ($tmp445) goto block48; else goto block49;
block48:;
// line 221
frost$core$Int64 $tmp446 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp447 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp446);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp447, true });
goto block47;
block49:;
frost$core$Bit $tmp448 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp442, &$s449);
bool $tmp450 = $tmp448.value;
if ($tmp450) goto block50; else goto block51;
block50:;
// line 222
frost$core$Int64 $tmp451 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp452 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp451);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp452, true });
goto block47;
block51:;
frost$core$Bit $tmp453 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp442, &$s454);
bool $tmp455 = $tmp453.value;
if ($tmp455) goto block52; else goto block53;
block52:;
// line 223
frost$core$Int64 $tmp456 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp457 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp456);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp457, true });
goto block47;
block53:;
frost$core$Bit $tmp458 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp442, &$s459);
bool $tmp460 = $tmp458.value;
if ($tmp460) goto block54; else goto block55;
block54:;
// line 224
frost$core$Int64 $tmp461 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp462 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp461);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp462, true });
goto block47;
block55:;
frost$core$Bit $tmp463 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp442, &$s464);
bool $tmp465 = $tmp463.value;
if ($tmp465) goto block56; else goto block57;
block56:;
// line 225
frost$core$Int64 $tmp466 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp467 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp466);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp467, true });
goto block47;
block57:;
frost$core$Bit $tmp468 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp442, &$s469);
bool $tmp470 = $tmp468.value;
if ($tmp470) goto block58; else goto block59;
block58:;
// line 226
frost$core$Int64 $tmp471 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp472 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp471);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp472, true });
goto block47;
block59:;
// line 228
frost$core$String* $tmp473 = *(&local17);
frost$core$String* $tmp474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s475, $tmp473);
frost$core$String* $tmp476 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp474, &$s477);
frost$io$Console$printErrorLine$frost$core$String($tmp476);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing REF($519:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($518:frost.core.String)
// line 229
frost$core$Int64 $tmp478 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp478);
goto block47;
block47:;
frost$core$String* $tmp479 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
// unreffing f
*(&local17) = ((frost$core$String*) NULL);
goto block4;
block44:;
frost$core$Bit $tmp480 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp292, &$s481);
bool $tmp482 = $tmp480.value;
if ($tmp482) goto block60; else goto block61;
block60:;
// line 234
frost$collections$Array* $tmp483 = *(&local2);
frost$io$File* $tmp484 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp485 = *(&local0);
$fn487 $tmp486 = ($fn487) $tmp485->$class->vtable[4];
frost$core$String* $tmp488 = $tmp486($tmp485, &$s489);
frost$io$File$init$frost$core$String($tmp484, $tmp488);
frost$collections$Array$add$frost$collections$Array$T($tmp483, ((frost$core$Object*) $tmp484));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing REF($546:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing REF($543:frost.io.File)
goto block4;
block61:;
frost$core$Bit $tmp490 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp292, &$s491);
bool $tmp492 = $tmp490.value;
if ($tmp492) goto block62; else goto block63;
block62:;
// line 237
org$frostlang$frostc$Main$Arguments* $tmp493 = *(&local0);
$fn495 $tmp494 = ($fn495) $tmp493->$class->vtable[4];
frost$core$String* $tmp496 = $tmp494($tmp493, &$s497);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
frost$core$String* $tmp498 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local7) = $tmp496;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
// unreffing REF($563:frost.core.String)
goto block4;
block63:;
// line 240
frost$core$String* $tmp499 = *(&local9);
frost$core$Bit $tmp500 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp499, &$s501);
bool $tmp502 = $tmp500.value;
if ($tmp502) goto block64; else goto block66;
block64:;
// line 241
frost$io$File* $tmp503 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp504 = *(&local9);
frost$io$File$init$frost$core$String($tmp503, $tmp504);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$io$File* $tmp505 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
*(&local18) = $tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing REF($581:frost.io.File)
// line 242
frost$collections$Array* $tmp506 = *(&local1);
frost$io$File* $tmp507 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp506, ((frost$core$Object*) $tmp507));
frost$io$File* $tmp508 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
// unreffing f
*(&local18) = ((frost$io$File*) NULL);
goto block65;
block66:;
// line 1
// line 245
frost$core$String* $tmp509 = *(&local9);
frost$core$String* $tmp510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s511, $tmp509);
frost$core$String* $tmp512 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp510, &$s513);
frost$io$Console$printErrorLine$frost$core$String($tmp512);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
// unreffing REF($610:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// unreffing REF($609:frost.core.String)
// line 246
frost$core$Int64 $tmp514 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp514);
goto block65;
block65:;
goto block4;
block4:;
frost$core$String* $tmp515 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
// unreffing a
*(&local9) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 251
frost$io$File* $tmp516 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp517 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp516, $tmp517);
*(&local19) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$io$File* $tmp518 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp518));
*(&local19) = $tmp516;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp517));
// unreffing REF($631:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
// unreffing REF($630:frost.io.File)
// line 252
frost$io$File* $tmp519 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp519, &$s520);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
frost$io$File** $tmp521 = &param0->clang;
frost$io$File* $tmp522 = *$tmp521;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
frost$io$File** $tmp523 = &param0->clang;
*$tmp523 = $tmp519;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp519));
// unreffing REF($647:frost.io.File)
// line 253
frost$collections$Array* $tmp524 = *(&local1);
ITable* $tmp525 = ((frost$collections$CollectionView*) $tmp524)->$class->itable;
while ($tmp525->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp525 = $tmp525->next;
}
$fn527 $tmp526 = $tmp525->methods[0];
frost$core$Int64 $tmp528 = $tmp526(((frost$collections$CollectionView*) $tmp524));
frost$core$Int64 $tmp529 = (frost$core$Int64) {0};
frost$core$Bit $tmp530 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp528, $tmp529);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block67; else goto block68;
block67:;
// line 254
frost$io$Console$printErrorLine$frost$core$String(&$s532);
// line 255
frost$core$Int64 $tmp533 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp533);
goto block68;
block68:;
// line 257
org$frostlang$frostc$Main$Format$nullable $tmp534 = *(&local6);
frost$core$Bit $tmp535 = frost$core$Bit$init$builtin_bit(!$tmp534.nonnull);
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block69; else goto block70;
block69:;
// line 258
frost$core$Int64 $tmp537 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp538 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp537);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp538, true });
goto block70;
block70:;
// line 260
frost$io$File* $tmp539 = *(&local3);
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit($tmp539 == NULL);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block71; else goto block72;
block71:;
// line 261
frost$collections$Array* $tmp542 = *(&local1);
ITable* $tmp543 = ((frost$collections$CollectionView*) $tmp542)->$class->itable;
while ($tmp543->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp543 = $tmp543->next;
}
$fn545 $tmp544 = $tmp543->methods[0];
frost$core$Int64 $tmp546 = $tmp544(((frost$collections$CollectionView*) $tmp542));
frost$core$Int64 $tmp547 = (frost$core$Int64) {1};
frost$core$Bit $tmp548 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp546, $tmp547);
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block73; else goto block75;
block73:;
// line 262
*(&local20) = ((frost$core$String*) NULL);
// line 263
org$frostlang$frostc$Main$Format$nullable $tmp550 = *(&local6);
frost$core$Bit $tmp551 = frost$core$Bit$init$builtin_bit($tmp550.nonnull);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block76; else goto block77;
block77:;
frost$core$Int64 $tmp553 = (frost$core$Int64) {263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s554, $tmp553, &$s555);
abort(); // unreachable
block76:;
frost$core$Int64 $tmp556 = ((org$frostlang$frostc$Main$Format) $tmp550.value).$rawValue;
frost$core$Int64 $tmp557 = (frost$core$Int64) {1};
frost$core$Bit $tmp558 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp556, $tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block79; else goto block80;
block79:;
// line 264
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s560));
frost$core$String* $tmp561 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local20) = &$s562;
goto block78;
block80:;
frost$core$Int64 $tmp563 = (frost$core$Int64) {2};
frost$core$Bit $tmp564 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp556, $tmp563);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block81; else goto block82;
block81:;
// line 265
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s566));
frost$core$String* $tmp567 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
*(&local20) = &$s568;
goto block78;
block82:;
frost$core$Int64 $tmp569 = (frost$core$Int64) {0};
frost$core$Bit $tmp570 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp556, $tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block83; else goto block84;
block83:;
// line 266
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s572));
frost$core$String* $tmp573 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
*(&local20) = &$s574;
goto block78;
block84:;
frost$core$Int64 $tmp575 = (frost$core$Int64) {5};
frost$core$Bit $tmp576 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp556, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block85; else goto block86;
block85:;
// line 267
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s578));
frost$core$String* $tmp579 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local20) = &$s580;
goto block78;
block86:;
// line 269
frost$io$Console$printErrorLine$frost$core$String(&$s581);
// line 271
frost$core$Int64 $tmp582 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp582);
goto block78;
block78:;
// line 274
frost$collections$Array* $tmp583 = *(&local1);
frost$core$Int64 $tmp584 = (frost$core$Int64) {0};
frost$core$Object* $tmp585 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp583, $tmp584);
frost$core$String* $tmp586 = *(&local20);
frost$io$File* $tmp587 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp585), $tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
frost$io$File* $tmp588 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
*(&local3) = $tmp587;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// unreffing REF($776:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp585);
// unreffing REF($773:frost.collections.Array.T)
frost$core$String* $tmp589 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing extension
*(&local20) = ((frost$core$String*) NULL);
goto block74;
block75:;
// line 276
org$frostlang$frostc$Main$Format$nullable $tmp590 = *(&local6);
frost$core$Bit $tmp591 = frost$core$Bit$init$builtin_bit($tmp590.nonnull);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block89; else goto block90;
block90:;
frost$core$Int64 $tmp593 = (frost$core$Int64) {276};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s594, $tmp593, &$s595);
abort(); // unreachable
block89:;
frost$core$Equatable* $tmp596;
if ($tmp590.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp597;
    $tmp597 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp597->value = ((org$frostlang$frostc$Main$Format) $tmp590.value);
    $tmp596 = ((frost$core$Equatable*) $tmp597);
}
else {
    $tmp596 = NULL;
}
frost$core$Int64 $tmp598 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp599 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp598);
org$frostlang$frostc$Main$Format$wrapper* $tmp600;
$tmp600 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp600->value = $tmp599;
ITable* $tmp601 = $tmp596->$class->itable;
while ($tmp601->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp601 = $tmp601->next;
}
$fn603 $tmp602 = $tmp601->methods[0];
frost$core$Bit $tmp604 = $tmp602($tmp596, ((frost$core$Equatable*) $tmp600));
bool $tmp605 = $tmp604.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp600)));
// unreffing REF($809:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing REF($805:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp605) goto block87; else goto block91;
block87:;
// line 277
frost$io$Console$printErrorLine$frost$core$String(&$s606);
// line 278
frost$core$Int64 $tmp607 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp607);
goto block88;
block91:;
// line 1
// line 281
frost$io$Console$printErrorLine$frost$core$String(&$s608);
// line 283
frost$core$Int64 $tmp609 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp609);
goto block88;
block88:;
goto block74;
block74:;
goto block72;
block72:;
// line 286
org$frostlang$frostc$Main$Format$nullable $tmp610 = *(&local6);
frost$core$Bit $tmp611 = frost$core$Bit$init$builtin_bit($tmp610.nonnull);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp613 = (frost$core$Int64) {286};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s614, $tmp613, &$s615);
abort(); // unreachable
block94:;
frost$core$Equatable* $tmp616;
if ($tmp610.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp617;
    $tmp617 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp617->value = ((org$frostlang$frostc$Main$Format) $tmp610.value);
    $tmp616 = ((frost$core$Equatable*) $tmp617);
}
else {
    $tmp616 = NULL;
}
frost$core$Int64 $tmp618 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp619 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp618);
org$frostlang$frostc$Main$Format$wrapper* $tmp620;
$tmp620 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp620->value = $tmp619;
ITable* $tmp621 = $tmp616->$class->itable;
while ($tmp621->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp621 = $tmp621->next;
}
$fn623 $tmp622 = $tmp621->methods[0];
frost$core$Bit $tmp624 = $tmp622($tmp616, ((frost$core$Equatable*) $tmp620));
bool $tmp625 = $tmp624.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp620)));
// unreffing REF($848:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing REF($844:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp625) goto block92; else goto block93;
block92:;
// line 287
frost$core$String* $tmp626 = *(&local7);
frost$core$Bit $tmp627 = frost$core$Bit$init$builtin_bit($tmp626 == NULL);
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block96; else goto block97;
block96:;
// line 288
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s629));
frost$core$String* $tmp630 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
*(&local7) = &$s629;
goto block97;
block97:;
// line 290
org$frostlang$frostc$HTMLProcessor* $tmp631 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp631);
frost$collections$Array* $tmp632 = *(&local1);
frost$core$Int64 $tmp633 = (frost$core$Int64) {0};
frost$core$Object* $tmp634 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp632, $tmp633);
frost$io$File* $tmp635 = *(&local3);
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit($tmp635 != NULL);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {290};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s639, $tmp638, &$s640);
abort(); // unreachable
block98:;
frost$core$String* $tmp641 = *(&local7);
frost$core$Bit $tmp642 = frost$core$Bit$init$builtin_bit($tmp641 != NULL);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp644 = (frost$core$Int64) {290};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s645, $tmp644, &$s646);
abort(); // unreachable
block100:;
$fn648 $tmp647 = ($fn648) $tmp631->$class->vtable[3];
$tmp647($tmp631, ((frost$io$File*) $tmp634), $tmp635, $tmp641);
frost$core$Frost$unref$frost$core$Object$Q($tmp634);
// unreffing REF($880:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($875:org.frostlang.frostc.HTMLProcessor)
// line 291
frost$io$File* $tmp649 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$core$String* $tmp650 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp651 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp651));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp652 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp653 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp654 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp654));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block93:;
// line 293
frost$core$String* $tmp655 = *(&local7);
frost$core$Bit $tmp656 = frost$core$Bit$init$builtin_bit($tmp655 != NULL);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block102; else goto block103;
block102:;
// line 294
frost$io$Console$printErrorLine$frost$core$String(&$s658);
// line 295
frost$core$Int64 $tmp659 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp659);
goto block103;
block103:;
// line 297
// line 1
// line 299
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 300
org$frostlang$frostc$Main$Format$nullable $tmp660 = *(&local6);
frost$core$Bit $tmp661 = frost$core$Bit$init$builtin_bit($tmp660.nonnull);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block104; else goto block105;
block105:;
frost$core$Int64 $tmp663 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s664, $tmp663, &$s665);
abort(); // unreachable
block104:;
frost$core$Int64 $tmp666 = ((org$frostlang$frostc$Main$Format) $tmp660.value).$rawValue;
frost$core$Int64 $tmp667 = (frost$core$Int64) {0};
frost$core$Bit $tmp668 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp666, $tmp667);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp670 = (frost$core$Int64) {1};
frost$core$Bit $tmp671 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp666, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block107; else goto block109;
block109:;
frost$core$Int64 $tmp673 = (frost$core$Int64) {2};
frost$core$Bit $tmp674 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp666, $tmp673);
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block107; else goto block110;
block107:;
// line 302
*(&local23) = ((frost$core$Error*) NULL);
// line 303
org$frostlang$frostc$LLVMCodeGenerator* $tmp676 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp677 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp678 = *(&local3);
frost$core$Bit $tmp679 = frost$core$Bit$init$builtin_bit($tmp678 != NULL);
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block113; else goto block114;
block114:;
frost$core$Int64 $tmp681 = (frost$core$Int64) {304};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s682, $tmp681, &$s683);
abort(); // unreachable
block113:;
frost$io$File* $tmp684 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp678, &$s685);
frost$core$Maybe* $tmp686 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp684);
// try maybe check
frost$core$Int64* $tmp687 = &$tmp686->$rawValue;
frost$core$Int64 $tmp688 = *$tmp687;
int64_t $tmp689 = $tmp688.value;
bool $tmp690 = $tmp689 == 0;
if ($tmp690) goto block115; else goto block116;
block116:;
frost$core$Error** $tmp691 = (frost$core$Error**) ($tmp686->$data + 0);
frost$core$Error* $tmp692 = *$tmp691;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
*(&local23) = $tmp692;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($994:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($993:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing REF($983:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing REF($982:org.frostlang.frostc.LLVMCodeGenerator)
goto block111;
block115:;
frost$core$Object** $tmp693 = (frost$core$Object**) ($tmp686->$data + 0);
frost$core$Object* $tmp694 = *$tmp693;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp676, $tmp677, ((frost$io$OutputStream*) $tmp694));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp676)));
org$frostlang$frostc$CodeGenerator* $tmp695 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp676);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
// unreffing REF($994:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($993:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
// unreffing REF($983:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
// unreffing REF($982:org.frostlang.frostc.LLVMCodeGenerator)
goto block112;
block111:;
// line 307
frost$core$Error* $tmp696 = *(&local23);
frost$io$Console$printErrorLine$frost$core$Object(((frost$core$Object*) $tmp696));
// line 308
frost$core$Int64 $tmp697 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp697);
goto block112;
block112:;
frost$core$Error* $tmp698 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
// unreffing error
*(&local23) = ((frost$core$Error*) NULL);
goto block106;
block110:;
frost$core$Int64 $tmp699 = (frost$core$Int64) {3};
frost$core$Bit $tmp700 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp666, $tmp699);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block117; else goto block118;
block117:;
// line 312
org$frostlang$frostc$HCodeGenerator* $tmp702 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp703 = *(&local3);
frost$core$Bit $tmp704 = frost$core$Bit$init$builtin_bit($tmp703 != NULL);
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block119; else goto block120;
block120:;
frost$core$Int64 $tmp706 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s707, $tmp706, &$s708);
abort(); // unreachable
block119:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp702, $tmp703);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp702)));
org$frostlang$frostc$CodeGenerator* $tmp709 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp702);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($1063:org.frostlang.frostc.HCodeGenerator)
goto block106;
block118:;
frost$core$Int64 $tmp710 = (frost$core$Int64) {4};
frost$core$Bit $tmp711 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp666, $tmp710);
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block121; else goto block122;
block121:;
// line 315
org$frostlang$frostc$CCodeGenerator* $tmp713 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp714 = *(&local3);
frost$core$Bit $tmp715 = frost$core$Bit$init$builtin_bit($tmp714 != NULL);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block123; else goto block124;
block124:;
frost$core$Int64 $tmp717 = (frost$core$Int64) {315};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s718, $tmp717, &$s719);
abort(); // unreachable
block123:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp713, $tmp714);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp713)));
org$frostlang$frostc$CodeGenerator* $tmp720 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp713);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing REF($1090:org.frostlang.frostc.CCodeGenerator)
goto block106;
block122:;
// line 318
frost$core$Bit $tmp721 = frost$core$Bit$init$builtin_bit(false);
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block125; else goto block126;
block126:;
frost$core$Int64 $tmp723 = (frost$core$Int64) {318};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s724, $tmp723);
abort(); // unreachable
block125:;
goto block106;
block106:;
// line 321
org$frostlang$frostc$Compiler$Settings* $tmp725 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp726 = &param0->frostHome;
frost$io$File* $tmp727 = *$tmp726;
frost$collections$Array* $tmp728 = *(&local2);
frost$core$Int64 $tmp729 = *(&local4);
frost$core$Int64 $tmp730 = *(&local5);
frost$core$Bit* $tmp731 = &param0->debug;
frost$core$Bit $tmp732 = *$tmp731;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp725, $tmp727, ((frost$collections$ListView*) $tmp728), $tmp729, $tmp730, $tmp732);
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
org$frostlang$frostc$Compiler$Settings* $tmp733 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local24) = $tmp725;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
// unreffing REF($1121:org.frostlang.frostc.Compiler.Settings)
// line 323
frost$threads$MessageQueue* $tmp734 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp734);
*(&local25) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
frost$threads$MessageQueue* $tmp735 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local25) = $tmp734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($1142:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 324
org$frostlang$frostc$Compiler* $tmp736 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp737 = *(&local25);
org$frostlang$frostc$CodeGenerator* $tmp738 = *(&local22);
org$frostlang$frostc$Compiler$Settings* $tmp739 = *(&local24);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp736, $tmp737, $tmp738, $tmp739);
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
org$frostlang$frostc$Compiler* $tmp740 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
*(&local26) = $tmp736;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// unreffing REF($1156:org.frostlang.frostc.Compiler)
// line 325
frost$collections$Array* $tmp741 = *(&local1);
ITable* $tmp742 = ((frost$collections$Iterable*) $tmp741)->$class->itable;
while ($tmp742->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp742 = $tmp742->next;
}
$fn744 $tmp743 = $tmp742->methods[0];
frost$collections$Iterator* $tmp745 = $tmp743(((frost$collections$Iterable*) $tmp741));
goto block127;
block127:;
ITable* $tmp746 = $tmp745->$class->itable;
while ($tmp746->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[0];
frost$core$Bit $tmp749 = $tmp747($tmp745);
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block129; else goto block128;
block128:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp751 = $tmp745->$class->itable;
while ($tmp751->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp751 = $tmp751->next;
}
$fn753 $tmp752 = $tmp751->methods[1];
frost$core$Object* $tmp754 = $tmp752($tmp745);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp754)));
frost$io$File* $tmp755 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local27) = ((frost$io$File*) $tmp754);
// line 326
org$frostlang$frostc$Compiler* $tmp756 = *(&local26);
frost$io$File* $tmp757 = *(&local27);
frost$collections$ListView* $tmp758 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp756, $tmp757);
ITable* $tmp759 = ((frost$collections$Iterable*) $tmp758)->$class->itable;
while ($tmp759->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp759 = $tmp759->next;
}
$fn761 $tmp760 = $tmp759->methods[0];
frost$collections$Iterator* $tmp762 = $tmp760(((frost$collections$Iterable*) $tmp758));
goto block130;
block130:;
ITable* $tmp763 = $tmp762->$class->itable;
while ($tmp763->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp763 = $tmp763->next;
}
$fn765 $tmp764 = $tmp763->methods[0];
frost$core$Bit $tmp766 = $tmp764($tmp762);
bool $tmp767 = $tmp766.value;
if ($tmp767) goto block132; else goto block131;
block131:;
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp768 = $tmp762->$class->itable;
while ($tmp768->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp768 = $tmp768->next;
}
$fn770 $tmp769 = $tmp768->methods[1];
frost$core$Object* $tmp771 = $tmp769($tmp762);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp771)));
org$frostlang$frostc$ClassDecl* $tmp772 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) $tmp771);
// line 327
org$frostlang$frostc$Compiler* $tmp773 = *(&local26);
org$frostlang$frostc$ClassDecl* $tmp774 = *(&local28);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp773, $tmp774);
frost$core$Frost$unref$frost$core$Object$Q($tmp771);
// unreffing REF($1213:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp775 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing cl
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block130;
block132:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
// unreffing REF($1202:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing REF($1198:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp754);
// unreffing REF($1187:frost.collections.Iterator.T)
frost$io$File* $tmp776 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// unreffing s
*(&local27) = ((frost$io$File*) NULL);
goto block127;
block129:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing REF($1176:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 330
frost$collections$Array* $tmp777 = *(&local1);
ITable* $tmp778 = ((frost$collections$Iterable*) $tmp777)->$class->itable;
while ($tmp778->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp778 = $tmp778->next;
}
$fn780 $tmp779 = $tmp778->methods[0];
frost$collections$Iterator* $tmp781 = $tmp779(((frost$collections$Iterable*) $tmp777));
goto block133;
block133:;
ITable* $tmp782 = $tmp781->$class->itable;
while ($tmp782->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[0];
frost$core$Bit $tmp785 = $tmp783($tmp781);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block135; else goto block134;
block134:;
*(&local29) = ((frost$io$File*) NULL);
ITable* $tmp787 = $tmp781->$class->itable;
while ($tmp787->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp787 = $tmp787->next;
}
$fn789 $tmp788 = $tmp787->methods[1];
frost$core$Object* $tmp790 = $tmp788($tmp781);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp790)));
frost$io$File* $tmp791 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local29) = ((frost$io$File*) $tmp790);
// line 331
org$frostlang$frostc$Compiler* $tmp792 = *(&local26);
frost$io$File* $tmp793 = *(&local29);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp792, $tmp793);
frost$core$Frost$unref$frost$core$Object$Q($tmp790);
// unreffing REF($1268:frost.collections.Iterator.T)
frost$io$File* $tmp794 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
// unreffing s
*(&local29) = ((frost$io$File*) NULL);
goto block133;
block135:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// unreffing REF($1257:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 333
org$frostlang$frostc$Compiler* $tmp795 = *(&local26);
org$frostlang$frostc$Compiler$finish($tmp795);
// line 334
frost$threads$MessageQueue* $tmp796 = *(&local25);
frost$core$Int64 $tmp797 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp796);
*(&local21) = $tmp797;
// line 335
frost$core$Int64 $tmp798 = (frost$core$Int64) {0};
frost$core$Int64 $tmp799 = *(&local21);
frost$core$Bit $tmp800 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp801 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp798, $tmp799, $tmp800);
frost$core$Int64 $tmp802 = $tmp801.min;
*(&local30) = $tmp802;
frost$core$Int64 $tmp803 = $tmp801.max;
frost$core$Bit $tmp804 = $tmp801.inclusive;
bool $tmp805 = $tmp804.value;
frost$core$Int64 $tmp806 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp807 = frost$core$Int64$convert$R$frost$core$UInt64($tmp806);
if ($tmp805) goto block139; else goto block140;
block139:;
int64_t $tmp808 = $tmp802.value;
int64_t $tmp809 = $tmp803.value;
bool $tmp810 = $tmp808 <= $tmp809;
frost$core$Bit $tmp811 = (frost$core$Bit) {$tmp810};
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block136; else goto block137;
block140:;
int64_t $tmp813 = $tmp802.value;
int64_t $tmp814 = $tmp803.value;
bool $tmp815 = $tmp813 < $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block136; else goto block137;
block136:;
// line 336
frost$threads$MessageQueue* $tmp818 = *(&local25);
frost$core$Immutable* $tmp819 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp818);
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp819)));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp820 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp819);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing REF($1328:frost.threads.MessageQueue.T)
// line 338
org$frostlang$frostc$Compiler$ErrorMsg* $tmp821 = *(&local31);
frost$io$File** $tmp822 = &$tmp821->file;
frost$io$File* $tmp823 = *$tmp822;
frost$core$String* $tmp824 = frost$io$File$get_name$R$frost$core$String($tmp823);
frost$core$String* $tmp825 = frost$core$String$get_asString$R$frost$core$String($tmp824);
frost$core$String* $tmp826 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp825, &$s827);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp828 = *(&local31);
org$frostlang$frostc$Position* $tmp829 = &$tmp828->position;
org$frostlang$frostc$Position $tmp830 = *$tmp829;
org$frostlang$frostc$Position$wrapper* $tmp831;
$tmp831 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp831->value = $tmp830;
frost$core$String* $tmp832 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp826, ((frost$core$Object*) $tmp831));
frost$core$String* $tmp833 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp832, &$s834);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp835 = *(&local31);
frost$core$String** $tmp836 = &$tmp835->message;
frost$core$String* $tmp837 = *$tmp836;
frost$core$String* $tmp838 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp833, $tmp837);
frost$core$String* $tmp839 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp838, &$s840);
frost$io$Console$printLine$frost$core$String($tmp839);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($1357:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
// unreffing REF($1356:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing REF($1352:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp832));
// unreffing REF($1351:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($1350:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
// unreffing REF($1346:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
// unreffing REF($1345:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($1344:frost.core.String)
org$frostlang$frostc$Compiler$ErrorMsg* $tmp841 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing error
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
goto block138;
block138:;
frost$core$Int64 $tmp842 = *(&local30);
int64_t $tmp843 = $tmp803.value;
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843 - $tmp844;
frost$core$Int64 $tmp846 = (frost$core$Int64) {$tmp845};
frost$core$UInt64 $tmp847 = frost$core$Int64$convert$R$frost$core$UInt64($tmp846);
if ($tmp805) goto block142; else goto block143;
block142:;
uint64_t $tmp848 = $tmp847.value;
uint64_t $tmp849 = $tmp807.value;
bool $tmp850 = $tmp848 >= $tmp849;
frost$core$Bit $tmp851 = (frost$core$Bit) {$tmp850};
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block141; else goto block137;
block143:;
uint64_t $tmp853 = $tmp847.value;
uint64_t $tmp854 = $tmp807.value;
bool $tmp855 = $tmp853 > $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block141; else goto block137;
block141:;
int64_t $tmp858 = $tmp842.value;
int64_t $tmp859 = $tmp806.value;
int64_t $tmp860 = $tmp858 + $tmp859;
frost$core$Int64 $tmp861 = (frost$core$Int64) {$tmp860};
*(&local30) = $tmp861;
goto block136;
block137:;
org$frostlang$frostc$Compiler* $tmp862 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing compiler
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp863 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing errorQueue
*(&local25) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp864 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp864));
// unreffing settings
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp865 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp865));
// unreffing cg
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 341
frost$core$Int64 $tmp866 = *(&local21);
frost$core$Int64 $tmp867 = (frost$core$Int64) {0};
frost$core$Bit $tmp868 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp866, $tmp867);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block144; else goto block146;
block144:;
// line 342
org$frostlang$frostc$Main$Format$nullable $tmp870 = *(&local6);
frost$core$Bit $tmp871 = frost$core$Bit$init$builtin_bit($tmp870.nonnull);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block147; else goto block148;
block148:;
frost$core$Int64 $tmp873 = (frost$core$Int64) {342};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s874, $tmp873, &$s875);
abort(); // unreachable
block147:;
frost$core$Int64 $tmp876 = ((org$frostlang$frostc$Main$Format) $tmp870.value).$rawValue;
frost$core$Int64 $tmp877 = (frost$core$Int64) {1};
frost$core$Bit $tmp878 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp876, $tmp877);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block150; else goto block151;
block150:;
// line 344
frost$io$File* $tmp880 = *(&local3);
frost$core$Bit $tmp881 = frost$core$Bit$init$builtin_bit($tmp880 != NULL);
bool $tmp882 = $tmp881.value;
if ($tmp882) goto block152; else goto block153;
block153:;
frost$core$Int64 $tmp883 = (frost$core$Int64) {344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s884, $tmp883, &$s885);
abort(); // unreachable
block152:;
frost$io$File* $tmp886 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp880, &$s887);
frost$io$File* $tmp888 = *(&local3);
frost$core$Bit $tmp889 = frost$core$Bit$init$builtin_bit($tmp888 != NULL);
bool $tmp890 = $tmp889.value;
if ($tmp890) goto block154; else goto block155;
block155:;
frost$core$Int64 $tmp891 = (frost$core$Int64) {344};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s892, $tmp891, &$s893);
abort(); // unreachable
block154:;
frost$core$Bit $tmp894 = *(&local8);
frost$io$File* $tmp895 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp886, $tmp888, $tmp894);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp895));
// unreffing REF($1476:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp886));
// unreffing REF($1465:frost.io.File)
goto block149;
block151:;
frost$core$Int64 $tmp896 = (frost$core$Int64) {2};
frost$core$Bit $tmp897 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp876, $tmp896);
bool $tmp898 = $tmp897.value;
if ($tmp898) goto block156; else goto block149;
block156:;
// line 347
frost$io$File* $tmp899 = *(&local3);
frost$core$Bit $tmp900 = frost$core$Bit$init$builtin_bit($tmp899 != NULL);
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block157; else goto block158;
block158:;
frost$core$Int64 $tmp902 = (frost$core$Int64) {347};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s903, $tmp902, &$s904);
abort(); // unreachable
block157:;
frost$io$File* $tmp905 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp899, &$s906);
frost$io$File* $tmp907 = *(&local3);
frost$core$Bit $tmp908 = frost$core$Bit$init$builtin_bit($tmp907 != NULL);
bool $tmp909 = $tmp908.value;
if ($tmp909) goto block159; else goto block160;
block160:;
frost$core$Int64 $tmp910 = (frost$core$Int64) {347};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s911, $tmp910, &$s912);
abort(); // unreachable
block159:;
frost$core$Bit $tmp913 = *(&local8);
frost$io$File* $tmp914 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp905, $tmp907, $tmp913);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp914));
// unreffing REF($1509:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($1498:frost.io.File)
goto block149;
block149:;
goto block145;
block146:;
// line 1
// line 352
frost$core$Int64 $tmp915 = *(&local21);
frost$core$Int64 $tmp916 = (frost$core$Int64) {1};
frost$core$Bit $tmp917 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp915, $tmp916);
bool $tmp918 = $tmp917.value;
if ($tmp918) goto block161; else goto block163;
block161:;
// line 354
frost$io$Console$printLine$frost$core$String(&$s919);
goto block162;
block163:;
// line 1
// line 358
frost$core$Int64 $tmp920 = *(&local21);
frost$core$String* $tmp921 = frost$core$Int64$get_asString$R$frost$core$String($tmp920);
frost$core$String* $tmp922 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp921, &$s923);
frost$io$Console$printLine$frost$core$String($tmp922);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp922));
// unreffing REF($1532:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp921));
// unreffing REF($1531:frost.core.String)
goto block162;
block162:;
// line 360
frost$core$Int64 $tmp924 = (frost$core$Int64) {1};
frost$core$System$exit$frost$core$Int64($tmp924);
goto block145;
block145:;
frost$io$File* $tmp925 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$core$String* $tmp926 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp927 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp928 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp929 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp930 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 366
frost$core$Bit $tmp931 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s932);
return $tmp931;

}
void frostMain(frost$collections$ListView* param0) {

// line 371
org$frostlang$frostc$Main* $tmp933 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp933);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp933, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp933));
// unreffing REF($1:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp934 = &param0->clang;
frost$io$File* $tmp935 = *$tmp934;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp935));
frost$io$File** $tmp936 = &param0->frostHome;
frost$io$File* $tmp937 = *$tmp936;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
return;

}

