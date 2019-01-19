#include "org/frostlang/frostc/Main.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/io/File.h"
#include "org/frostlang/frostc/Config.h"
#include "frost/core/Frost.h"
#include "frost/core/Error.h"
#include "frost/collections/Array.h"
#include "frost/core/System/Process.h"
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/core/Maybe.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/core/UInt8.h"
#include "frost/io/InputStream.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
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
org$frostlang$frostc$Main$class_type org$frostlang$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$Main$cleanup, org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlang$frostc$Main$printUsage$frost$io$OutputStream, org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$Error* (*$fn46)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn58)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn61)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn70)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn73)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn85)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn137)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn141)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn146)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn214)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$String* (*$fn227)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn230)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn240)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn243)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn256)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$core$Error* (*$fn287)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn291)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn294)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn298)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn301)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn305)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn331)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn337)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Maybe* (*$fn360)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$Error* (*$fn385)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn394)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn415)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn443)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn455)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn483)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn498)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn506)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn548)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn561)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn569)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn590)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn607)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn614)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn631)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn669)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn695)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn700)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn708)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn727)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn752)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$core$Error* (*$fn765)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn810)(frost$io$OutputStream*, frost$core$Object*);
typedef frost$collections$Iterator* (*$fn861)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn865)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn870)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn878)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn882)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn887)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn897)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn901)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn906)(frost$collections$Iterator*);
typedef frost$core$Error* (*$fn960)(frost$io$OutputStream*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x74\x6f\x4f\x62\x6a\x65\x63\x74\x28\x6c\x6c\x76\x6d\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x64\x65\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x72\x65\x73\x65\x72\x76\x65\x54\x65\x6d\x70\x6f\x72\x61\x72\x69\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 156, 6743918761980461386, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s123 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s127 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s158 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s185 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s279 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s284 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s285 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x74\x6f\x45\x78\x65\x63\x75\x74\x61\x62\x6c\x65\x28\x6c\x6c\x76\x6d\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x64\x65\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x2c\x20\x70\x72\x65\x73\x65\x72\x76\x65\x54\x65\x6d\x70\x6f\x72\x61\x72\x69\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 160, -826802085706455751, NULL };
static frost$core$String $s289 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s307 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s396 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s408 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s417 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s465 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s500 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s512 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s522 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s527 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s532 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s555 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s571 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s588 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s600 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s616 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s648 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s652 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s654 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s658 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s660 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s671 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s686 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s687 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s702 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s710 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s718 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s719 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s743 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s744 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s749 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s750 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s775 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s776 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s793 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s794 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s796 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s824 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s835 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s836 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s841 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s945 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s952 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s958 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s997 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s998 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s1007 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s1008 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s1010 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s1015 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s1016 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s1026 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s1027 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s1029 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s1034 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s1035 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s1042 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s1044 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s1049 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s1061 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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

frost$core$Error* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$System$Process* local2 = NULL;
frost$core$Error* local3 = NULL;
frost$core$Int64 local4;
frost$core$Error* local5 = NULL;
// line 61
*(&local0) = ((frost$core$Error*) NULL);
// line 62
frost$collections$Array* $tmp9 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp9);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$collections$Array* $tmp10 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local1) = $tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($3:frost.collections.Array<frost.core.String>)
// line 63
frost$collections$Array* $tmp11 = *(&local1);
frost$core$String** $tmp12 = &param1->path;
frost$core$String* $tmp13 = *$tmp12;
frost$collections$Array$add$frost$collections$Array$T($tmp11, ((frost$core$Object*) $tmp13));
// line 64
frost$collections$Array* $tmp14 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp14, ((frost$core$Object*) &$s15));
// line 65
frost$collections$Array* $tmp16 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp16, ((frost$core$Object*) &$s17));
// line 66
frost$collections$Array* $tmp18 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) &$s19));
// line 67
frost$core$Bit* $tmp20 = &param0->debug;
frost$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block3; else goto block4;
block3:;
// line 68
frost$collections$Array* $tmp23 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp23, ((frost$core$Object*) &$s24));
goto block4;
block4:;
// line 70
frost$collections$Array* $tmp25 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp25, ((frost$core$Object*) &$s26));
// line 71
frost$collections$Array* $tmp27 = *(&local1);
frost$core$String** $tmp28 = &param2->path;
frost$core$String* $tmp29 = *$tmp28;
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) $tmp29));
// line 72
*(&local2) = ((frost$core$System$Process*) NULL);
// line 73
*(&local3) = ((frost$core$Error*) NULL);
// line 74
frost$io$File** $tmp30 = &param0->clang;
frost$io$File* $tmp31 = *$tmp30;
frost$collections$Array* $tmp32 = *(&local1);
frost$core$Maybe* $tmp33 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp31, ((frost$collections$ListView*) $tmp32));
// try maybe check
frost$core$Int64* $tmp34 = &$tmp33->$rawValue;
frost$core$Int64 $tmp35 = *$tmp34;
int64_t $tmp36 = $tmp35.value;
bool $tmp37 = $tmp36 == 0;
if ($tmp37) goto block7; else goto block8;
block8:;
frost$core$Error** $tmp38 = (frost$core$Error**) ($tmp33->$data + 0);
frost$core$Error* $tmp39 = *$tmp38;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local3) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($70:frost.core.Maybe<frost.core.System.Process>)
goto block5;
block7:;
frost$core$Object** $tmp40 = (frost$core$Object**) ($tmp33->$data + 0);
frost$core$Object* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp41)));
frost$core$System$Process* $tmp42 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local2) = ((frost$core$System$Process*) $tmp41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($70:frost.core.Maybe<frost.core.System.Process>)
goto block6;
block5:;
// line 77
frost$io$OutputStream* $tmp43 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$Error* $tmp44 = *(&local3);
$fn46 $tmp45 = ($fn46) $tmp43->$class->vtable[20];
frost$core$Error* $tmp47 = $tmp45($tmp43, ((frost$core$Object*) $tmp44));
// try error check
if ($tmp47 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local0) = $tmp47;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($105:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($101:frost.io.OutputStream)
frost$core$Error* $tmp48 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing error
*(&local3) = ((frost$core$Error*) NULL);
frost$core$System$Process* $tmp49 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing p
*(&local2) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp50 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
// unreffing REF($105:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($101:frost.io.OutputStream)
// line 78
frost$core$UInt8 $tmp51 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp51);
goto block6;
block6:;
frost$core$Error* $tmp52 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing error
*(&local3) = ((frost$core$Error*) NULL);
// line 80
frost$io$OutputStream* $tmp53 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp54 = *(&local2);
frost$io$InputStream** $tmp55 = &$tmp54->output;
frost$io$InputStream* $tmp56 = *$tmp55;
$fn58 $tmp57 = ($fn58) $tmp56->$class->vtable[14];
frost$core$String* $tmp59 = $tmp57($tmp56);
$fn61 $tmp60 = ($fn61) $tmp53->$class->vtable[17];
frost$core$Error* $tmp62 = $tmp60($tmp53, $tmp59);
// try error check
if ($tmp62 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($157:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($150:frost.io.OutputStream)
frost$core$System$Process* $tmp63 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// unreffing p
*(&local2) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp64 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// unreffing REF($157:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing REF($155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($150:frost.io.OutputStream)
// line 81
frost$io$OutputStream* $tmp65 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp66 = *(&local2);
frost$io$InputStream** $tmp67 = &$tmp66->error;
frost$io$InputStream* $tmp68 = *$tmp67;
$fn70 $tmp69 = ($fn70) $tmp68->$class->vtable[14];
frost$core$String* $tmp71 = $tmp69($tmp68);
$fn73 $tmp72 = ($fn73) $tmp65->$class->vtable[17];
frost$core$Error* $tmp74 = $tmp72($tmp65, $tmp71);
// try error check
if ($tmp74 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local0) = $tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($201:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($199:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($194:frost.io.OutputStream)
frost$core$System$Process* $tmp75 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing p
*(&local2) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp76 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($201:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
// unreffing REF($199:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($194:frost.io.OutputStream)
// line 82
frost$core$System$Process* $tmp77 = *(&local2);
frost$core$Int64 $tmp78;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp78, $tmp77);
*(&local4) = $tmp78;
// line 83
frost$core$Bit $tmp79 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block15; else goto block16;
block15:;
// line 84
*(&local5) = ((frost$core$Error*) NULL);
// line 85
frost$core$Error* $tmp81 = frost$io$File$delete$R$frost$core$Error$Q(param1);
// try error check
if ($tmp81 == NULL) goto block19; else goto block20;
block20:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local5) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($248:frost.core.Error?)
goto block17;
block19:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($248:frost.core.Error?)
goto block18;
block17:;
// line 88
frost$io$OutputStream* $tmp82 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$Error* $tmp83 = *(&local5);
$fn85 $tmp84 = ($fn85) $tmp82->$class->vtable[20];
frost$core$Error* $tmp86 = $tmp84($tmp82, ((frost$core$Object*) $tmp83));
// try error check
if ($tmp86 == NULL) goto block21; else goto block22;
block22:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($268:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($264:frost.io.OutputStream)
frost$core$Error* $tmp87 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing error
*(&local5) = ((frost$core$Error*) NULL);
frost$core$System$Process* $tmp88 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing p
*(&local2) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp89 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block21:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($268:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// unreffing REF($264:frost.io.OutputStream)
// line 89
frost$core$UInt8 $tmp90 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp90);
goto block18;
block18:;
frost$core$Error* $tmp91 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing error
*(&local5) = ((frost$core$Error*) NULL);
goto block16;
block16:;
// line 92
frost$core$Int64 $tmp92 = *(&local4);
frost$core$Int64 $tmp93 = (frost$core$Int64) {0};
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 != $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block23; else goto block24;
block23:;
// line 93
frost$core$UInt8 $tmp99 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp99);
goto block24;
block24:;
// line 95
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp100 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing p
*(&local2) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp101 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Error* $tmp102 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return param2;
block1:;
// line 98
frost$core$Bit $tmp103 = frost$core$Bit$init$builtin_bit(false);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp105 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s106, $tmp105);
abort(); // unreachable
block25:;
goto block2;
block2:;
frost$core$Error* $tmp107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp108 = frost$core$Bit$init$builtin_bit(false);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block27; else goto block28;
block28:;
frost$core$Int64 $tmp110 = (frost$core$Int64) {60};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s111, $tmp110, &$s112);
abort(); // unreachable
block27:;
abort(); // unreachable

}
frost$io$File* org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlang$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$core$Error* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$String* local3 = NULL;
frost$io$File* local4 = NULL;
frost$core$String* local5 = NULL;
frost$core$System$Process* local6 = NULL;
frost$core$Error* local7 = NULL;
frost$core$Int64 local8;
frost$core$Error* local9 = NULL;
// line 103
*(&local0) = ((frost$core$Error*) NULL);
// line 104
frost$collections$Array* $tmp113 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp113);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$collections$Array* $tmp114 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local1) = $tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($3:frost.collections.Array<frost.core.String>)
// line 105
frost$collections$Array* $tmp115 = *(&local1);
frost$core$String** $tmp116 = &param1->path;
frost$core$String* $tmp117 = *$tmp116;
frost$collections$Array$add$frost$collections$Array$T($tmp115, ((frost$core$Object*) $tmp117));
// line 106
frost$collections$Array* $tmp118 = *(&local1);
frost$core$String* $tmp119 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp120 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s121, $tmp119);
frost$core$String* $tmp122 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp120, &$s123);
frost$collections$Array$add$frost$collections$Array$T($tmp118, ((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
// unreffing REF($28:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing REF($27:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($26:frost.core.String)
// line 107
frost$collections$Array* $tmp124 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp124, ((frost$core$Object*) &$s125));
// line 108
frost$collections$Array* $tmp126 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp126, ((frost$core$Object*) &$s127));
// line 109
frost$collections$Array* $tmp128 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp128, ((frost$core$Object*) &$s129));
// line 110
frost$core$String* $tmp130 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp131 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp130, &$s132);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$collections$Array* $tmp133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local2) = $tmp131;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing REF($57:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($56:frost.core.String)
// line 111
frost$collections$Array* $tmp134 = *(&local2);
ITable* $tmp135 = ((frost$collections$Iterable*) $tmp134)->$class->itable;
while ($tmp135->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp135 = $tmp135->next;
}
$fn137 $tmp136 = $tmp135->methods[0];
frost$collections$Iterator* $tmp138 = $tmp136(((frost$collections$Iterable*) $tmp134));
goto block3;
block3:;
ITable* $tmp139 = $tmp138->$class->itable;
while ($tmp139->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[0];
frost$core$Bit $tmp142 = $tmp140($tmp138);
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block5; else goto block4;
block4:;
*(&local3) = ((frost$core$String*) NULL);
ITable* $tmp144 = $tmp138->$class->itable;
while ($tmp144->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp144 = $tmp144->next;
}
$fn146 $tmp145 = $tmp144->methods[1];
frost$core$Object* $tmp147 = $tmp145($tmp138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp147)));
frost$core$String* $tmp148 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local3) = ((frost$core$String*) $tmp147);
// line 112
frost$io$File* $tmp149 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp150 = *(&local3);
frost$io$File$init$frost$core$String($tmp149, $tmp150);
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$io$File* $tmp151 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local4) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($96:frost.io.File)
// line 113
frost$collections$Array* $tmp152 = *(&local1);
frost$io$File* $tmp153 = *(&local4);
frost$io$File* $tmp154 = frost$io$File$get_parent$R$frost$io$File$Q($tmp153);
frost$core$Bit $tmp155 = frost$core$Bit$init$builtin_bit($tmp154 != NULL);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {113};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s158, $tmp157, &$s159);
abort(); // unreachable
block6:;
frost$core$String* $tmp160 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s161, ((frost$core$Object*) $tmp154));
frost$collections$Array$add$frost$collections$Array$T($tmp152, ((frost$core$Object*) $tmp160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing REF($113:frost.io.File?)
// line 114
frost$io$File* $tmp162 = *(&local4);
frost$core$String* $tmp163 = frost$io$File$get_simpleName$R$frost$core$String($tmp162);
*(&local5) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String* $tmp164 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local5) = $tmp163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
// unreffing REF($134:frost.core.String)
// line 115
frost$core$String* $tmp165 = *(&local5);
frost$core$Bit $tmp166 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp165, &$s167);
bool $tmp168 = $tmp166.value;
if ($tmp168) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp169 = (frost$core$Int64) {115};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s170, $tmp169);
abort(); // unreachable
block8:;
// line 116
frost$core$String* $tmp171 = *(&local5);
frost$core$Int64 $tmp172 = (frost$core$Int64) {3};
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp174 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp172, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp173);
frost$core$String* $tmp175 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp171, $tmp174);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$String* $tmp176 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local5) = $tmp175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($159:frost.core.String)
// line 117
frost$collections$Array* $tmp177 = *(&local1);
frost$core$String* $tmp178 = *(&local5);
frost$core$String* $tmp179 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s180, $tmp178);
frost$collections$Array$add$frost$collections$Array$T($tmp177, ((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
// unreffing REF($173:frost.core.String)
frost$core$String* $tmp181 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
// unreffing simpleName
*(&local5) = ((frost$core$String*) NULL);
frost$io$File* $tmp182 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing libFile
*(&local4) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp147);
// unreffing REF($87:frost.collections.Iterator.T)
frost$core$String* $tmp183 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing lib
*(&local3) = ((frost$core$String*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// unreffing REF($76:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 119
frost$collections$Array* $tmp184 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp184, ((frost$core$Object*) &$s185));
// line 120
frost$collections$Array* $tmp186 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp186, ((frost$core$Object*) &$s187));
// line 121
frost$core$Bit* $tmp188 = &param0->debug;
frost$core$Bit $tmp189 = *$tmp188;
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block10; else goto block11;
block10:;
// line 122
frost$collections$Array* $tmp191 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp191, ((frost$core$Object*) &$s192));
goto block11;
block11:;
// line 124
frost$collections$Array* $tmp193 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp193, ((frost$core$Object*) &$s194));
// line 125
frost$collections$Array* $tmp195 = *(&local1);
frost$core$String** $tmp196 = &param2->path;
frost$core$String* $tmp197 = *$tmp196;
frost$collections$Array$add$frost$collections$Array$T($tmp195, ((frost$core$Object*) $tmp197));
// line 126
*(&local6) = ((frost$core$System$Process*) NULL);
// line 127
*(&local7) = ((frost$core$Error*) NULL);
// line 128
frost$io$File** $tmp198 = &param0->clang;
frost$io$File* $tmp199 = *$tmp198;
frost$collections$Array* $tmp200 = *(&local1);
frost$core$Maybe* $tmp201 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$Maybe$LTfrost$core$System$Process$GT($tmp199, ((frost$collections$ListView*) $tmp200));
// try maybe check
frost$core$Int64* $tmp202 = &$tmp201->$rawValue;
frost$core$Int64 $tmp203 = *$tmp202;
int64_t $tmp204 = $tmp203.value;
bool $tmp205 = $tmp204 == 0;
if ($tmp205) goto block14; else goto block15;
block15:;
frost$core$Error** $tmp206 = (frost$core$Error**) ($tmp201->$data + 0);
frost$core$Error* $tmp207 = *$tmp206;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
*(&local7) = $tmp207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($243:frost.core.Maybe<frost.core.System.Process>)
goto block12;
block14:;
frost$core$Object** $tmp208 = (frost$core$Object**) ($tmp201->$data + 0);
frost$core$Object* $tmp209 = *$tmp208;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$System$Process*) $tmp209)));
frost$core$System$Process* $tmp210 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local6) = ((frost$core$System$Process*) $tmp209);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($243:frost.core.Maybe<frost.core.System.Process>)
goto block13;
block12:;
// line 131
frost$io$OutputStream* $tmp211 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$Error* $tmp212 = *(&local7);
$fn214 $tmp213 = ($fn214) $tmp211->$class->vtable[20];
frost$core$Error* $tmp215 = $tmp213($tmp211, ((frost$core$Object*) $tmp212));
// try error check
if ($tmp215 == NULL) goto block16; else goto block17;
block17:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local0) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($278:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($274:frost.io.OutputStream)
frost$core$Error* $tmp216 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
// unreffing error
*(&local7) = ((frost$core$Error*) NULL);
frost$core$System$Process* $tmp217 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing p
*(&local6) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp218 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
// unreffing icuLibs
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp219 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block16:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($278:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
// unreffing REF($274:frost.io.OutputStream)
// line 132
frost$core$UInt8 $tmp220 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp220);
goto block13;
block13:;
frost$core$Error* $tmp221 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing error
*(&local7) = ((frost$core$Error*) NULL);
// line 134
frost$io$OutputStream* $tmp222 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp223 = *(&local6);
frost$io$InputStream** $tmp224 = &$tmp223->output;
frost$io$InputStream* $tmp225 = *$tmp224;
$fn227 $tmp226 = ($fn227) $tmp225->$class->vtable[14];
frost$core$String* $tmp228 = $tmp226($tmp225);
$fn230 $tmp229 = ($fn230) $tmp222->$class->vtable[17];
frost$core$Error* $tmp231 = $tmp229($tmp222, $tmp228);
// try error check
if ($tmp231 == NULL) goto block18; else goto block19;
block19:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
*(&local0) = $tmp231;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($335:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($333:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($328:frost.io.OutputStream)
frost$core$System$Process* $tmp232 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing p
*(&local6) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp233 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp233));
// unreffing icuLibs
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp234 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block18:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp231));
// unreffing REF($335:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($333:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp222));
// unreffing REF($328:frost.io.OutputStream)
// line 135
frost$io$OutputStream* $tmp235 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp236 = *(&local6);
frost$io$InputStream** $tmp237 = &$tmp236->error;
frost$io$InputStream* $tmp238 = *$tmp237;
$fn240 $tmp239 = ($fn240) $tmp238->$class->vtable[14];
frost$core$String* $tmp241 = $tmp239($tmp238);
$fn243 $tmp242 = ($fn243) $tmp235->$class->vtable[17];
frost$core$Error* $tmp244 = $tmp242($tmp235, $tmp241);
// try error check
if ($tmp244 == NULL) goto block20; else goto block21;
block21:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
*(&local0) = $tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($384:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing REF($382:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($377:frost.io.OutputStream)
frost$core$System$Process* $tmp245 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing p
*(&local6) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp246 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing icuLibs
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp247 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block20:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($384:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
// unreffing REF($382:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($377:frost.io.OutputStream)
// line 136
frost$core$System$Process* $tmp248 = *(&local6);
frost$core$Int64 $tmp249;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp249, $tmp248);
*(&local8) = $tmp249;
// line 137
frost$core$Bit $tmp250 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block22; else goto block23;
block22:;
// line 138
*(&local9) = ((frost$core$Error*) NULL);
// line 139
frost$core$Error* $tmp252 = frost$io$File$delete$R$frost$core$Error$Q(param1);
// try error check
if ($tmp252 == NULL) goto block26; else goto block27;
block27:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
*(&local9) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($436:frost.core.Error?)
goto block24;
block26:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($436:frost.core.Error?)
goto block25;
block24:;
// line 142
frost$io$OutputStream* $tmp253 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$Error* $tmp254 = *(&local9);
$fn256 $tmp255 = ($fn256) $tmp253->$class->vtable[20];
frost$core$Error* $tmp257 = $tmp255($tmp253, ((frost$core$Object*) $tmp254));
// try error check
if ($tmp257 == NULL) goto block28; else goto block29;
block29:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local0) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($456:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($452:frost.io.OutputStream)
frost$core$Error* $tmp258 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
// unreffing error
*(&local9) = ((frost$core$Error*) NULL);
frost$core$System$Process* $tmp259 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing p
*(&local6) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp260 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
// unreffing icuLibs
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp261 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
goto block1;
block28:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($456:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
// unreffing REF($452:frost.io.OutputStream)
// line 143
frost$core$UInt8 $tmp262 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp262);
goto block25;
block25:;
frost$core$Error* $tmp263 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing error
*(&local9) = ((frost$core$Error*) NULL);
goto block23;
block23:;
// line 146
frost$core$Int64 $tmp264 = *(&local8);
frost$core$Int64 $tmp265 = (frost$core$Int64) {0};
int64_t $tmp266 = $tmp264.value;
int64_t $tmp267 = $tmp265.value;
bool $tmp268 = $tmp266 != $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block30; else goto block31;
block30:;
// line 147
frost$core$UInt8 $tmp271 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp271);
goto block31;
block31:;
// line 149
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp272 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing p
*(&local6) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp273 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing icuLibs
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp274 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing args
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Error* $tmp275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
return param2;
block1:;
// line 152
frost$core$Bit $tmp276 = frost$core$Bit$init$builtin_bit(false);
bool $tmp277 = $tmp276.value;
if ($tmp277) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp278 = (frost$core$Int64) {152};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s279, $tmp278);
abort(); // unreachable
block32:;
goto block2;
block2:;
frost$core$Error* $tmp280 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing error
*(&local0) = ((frost$core$Error*) NULL);
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit(false);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block34; else goto block35;
block35:;
frost$core$Int64 $tmp283 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s284, $tmp283, &$s285);
abort(); // unreachable
block34:;
abort(); // unreachable

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

frost$core$Error* local0 = NULL;
// line 157
*(&local0) = ((frost$core$Error*) NULL);
// line 158
$fn287 $tmp286 = ($fn287) param1->$class->vtable[19];
frost$core$Error* $tmp288 = $tmp286(param1, &$s289);
// try error check
if ($tmp288 == NULL) goto block3; else goto block4;
block4:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
*(&local0) = $tmp288;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($4:frost.core.Error?)
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
// unreffing REF($4:frost.core.Error?)
// line 159
$fn291 $tmp290 = ($fn291) param1->$class->vtable[21];
frost$core$Error* $tmp292 = $tmp290(param1);
// try error check
if ($tmp292 == NULL) goto block5; else goto block6;
block6:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
*(&local0) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing REF($20:frost.core.Error?)
goto block1;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing REF($20:frost.core.Error?)
// line 160
$fn294 $tmp293 = ($fn294) param1->$class->vtable[19];
frost$core$Error* $tmp295 = $tmp293(param1, &$s296);
// try error check
if ($tmp295 == NULL) goto block7; else goto block8;
block8:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
*(&local0) = $tmp295;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($36:frost.core.Error?)
goto block1;
block7:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing REF($36:frost.core.Error?)
// line 161
$fn298 $tmp297 = ($fn298) param1->$class->vtable[21];
frost$core$Error* $tmp299 = $tmp297(param1);
// try error check
if ($tmp299 == NULL) goto block9; else goto block10;
block10:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
*(&local0) = $tmp299;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($52:frost.core.Error?)
goto block1;
block9:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing REF($52:frost.core.Error?)
// line 162
$fn301 $tmp300 = ($fn301) param1->$class->vtable[19];
frost$core$Error* $tmp302 = $tmp300(param1, &$s303);
// try error check
if ($tmp302 == NULL) goto block11; else goto block12;
block12:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
*(&local0) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($68:frost.core.Error?)
goto block1;
block11:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($68:frost.core.Error?)
// line 163
$fn305 $tmp304 = ($fn305) param1->$class->vtable[19];
frost$core$Error* $tmp306 = $tmp304(param1, &$s307);
// try error check
if ($tmp306 == NULL) goto block13; else goto block14;
block14:;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local0) = $tmp306;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($84:frost.core.Error?)
goto block1;
block13:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
// unreffing REF($84:frost.core.Error?)
goto block2;
block1:;
// line 166
frost$core$Bit $tmp308 = frost$core$Bit$init$builtin_bit(false);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp310 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s311, $tmp310);
abort(); // unreachable
block15:;
goto block2;
block2:;
frost$core$Error* $tmp312 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
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
frost$io$OutputStream* local9 = NULL;
frost$core$String* local10 = NULL;
frost$core$Error* local11 = NULL;
frost$io$File* local12 = NULL;
frost$core$Error* local13 = NULL;
frost$core$String* local14 = NULL;
frost$core$Bit local15;
frost$core$Error* local16 = NULL;
frost$core$String* local17 = NULL;
frost$core$Bit local18;
frost$core$Error* local19 = NULL;
frost$core$Error* local20 = NULL;
frost$core$String* local21 = NULL;
frost$core$Error* local22 = NULL;
frost$io$File* local23 = NULL;
frost$core$Error* local24 = NULL;
frost$io$File* local25 = NULL;
frost$core$Error* local26 = NULL;
frost$core$String* local27 = NULL;
frost$core$Error* local28 = NULL;
frost$core$Error* local29 = NULL;
frost$core$Error* local30 = NULL;
frost$core$Error* local31 = NULL;
frost$core$Int64 local32;
org$frostlang$frostc$CodeGenerator* local33 = NULL;
frost$core$Error* local34 = NULL;
frost$core$Error* local35 = NULL;
org$frostlang$frostc$Compiler$Settings* local36 = NULL;
frost$threads$MessageQueue* local37 = NULL;
org$frostlang$frostc$Compiler* local38 = NULL;
frost$io$File* local39 = NULL;
org$frostlang$frostc$ClassDecl* local40 = NULL;
frost$io$File* local41 = NULL;
frost$core$Int64 local42;
org$frostlang$frostc$Compiler$ErrorMsg* local43 = NULL;
frost$core$Error* local44 = NULL;
frost$core$String* local45 = NULL;
frost$core$String* local46 = NULL;
// line 171
org$frostlang$frostc$Main$Arguments* $tmp313 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp313, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
org$frostlang$frostc$Main$Arguments* $tmp314 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local0) = $tmp313;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 172
frost$collections$Array* $tmp315 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp315);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$collections$Array* $tmp316 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp316));
*(&local1) = $tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 173
frost$collections$Array* $tmp317 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp317);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$collections$Array* $tmp318 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp318));
*(&local2) = $tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 174
frost$collections$Array* $tmp319 = *(&local2);
frost$io$File** $tmp320 = &param0->frostHome;
frost$io$File* $tmp321 = *$tmp320;
frost$collections$Array$add$frost$collections$Array$T($tmp319, ((frost$core$Object*) $tmp321));
// line 175
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp322 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
*(&local3) = ((frost$io$File*) NULL);
// line 176
frost$core$Int64 $tmp323 = (frost$core$Int64) {3};
*(&local4) = $tmp323;
// line 177
frost$core$Int64 $tmp324 = (frost$core$Int64) {3};
*(&local5) = $tmp324;
// line 178
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 179
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp325 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp325));
*(&local7) = ((frost$core$String*) NULL);
// line 180
frost$core$Bit $tmp326 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp326;
// line 181
frost$io$OutputStream* $tmp327 = frost$io$Console$errorStream$R$frost$io$OutputStream();
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
frost$io$OutputStream* $tmp328 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
*(&local9) = $tmp327;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing REF($76:frost.io.OutputStream)
// line 182
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp329 = *(&local0);
$fn331 $tmp330 = ($fn331) $tmp329->$class->vtable[2];
frost$core$Bit $tmp332 = $tmp330($tmp329);
frost$core$Bit $tmp333 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp332);
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block2; else goto block3;
block2:;
// line 183
org$frostlang$frostc$Main$Arguments* $tmp335 = *(&local0);
$fn337 $tmp336 = ($fn337) $tmp335->$class->vtable[3];
frost$core$String* $tmp338 = $tmp336($tmp335);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
frost$core$String* $tmp339 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
*(&local10) = $tmp338;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp338));
// unreffing REF($98:frost.core.String)
// line 184
frost$core$String* $tmp340 = *(&local10);
frost$core$Bit $tmp341 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp340, &$s342);
bool $tmp343 = $tmp341.value;
if ($tmp343) goto block5; else goto block6;
block5:;
// line 186
*(&local11) = ((frost$core$Error*) NULL);
// line 187
frost$io$File* $tmp344 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp344, &$s345);
*(&local12) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$io$File* $tmp346 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local12) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($117:frost.io.File)
// line 188
frost$io$InputStream* $tmp347 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp348 = *(&local12);
frost$core$Maybe* $tmp349 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp348);
// try maybe check
frost$core$Int64* $tmp350 = &$tmp349->$rawValue;
frost$core$Int64 $tmp351 = *$tmp350;
int64_t $tmp352 = $tmp351.value;
bool $tmp353 = $tmp352 == 0;
if ($tmp353) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp354 = (frost$core$Error**) ($tmp349->$data + 0);
frost$core$Error* $tmp355 = *$tmp354;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp355));
*(&local11) = $tmp355;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($132:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($130:frost.io.InputStream)
frost$io$File* $tmp356 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
// unreffing path
*(&local12) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp357 = (frost$core$Object**) ($tmp349->$data + 0);
frost$core$Object* $tmp358 = *$tmp357;
$fn360 $tmp359 = ($fn360) $tmp347->$class->vtable[17];
frost$core$Maybe* $tmp361 = $tmp359($tmp347, ((frost$io$OutputStream*) $tmp358));
// try maybe check
frost$core$Int64* $tmp362 = &$tmp361->$rawValue;
frost$core$Int64 $tmp363 = *$tmp362;
int64_t $tmp364 = $tmp363.value;
bool $tmp365 = $tmp364 == 0;
if ($tmp365) goto block11; else goto block12;
block12:;
frost$core$Error** $tmp366 = (frost$core$Error**) ($tmp361->$data + 0);
frost$core$Error* $tmp367 = *$tmp366;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp367));
*(&local11) = $tmp367;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing REF($161:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($132:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($130:frost.io.InputStream)
frost$io$File* $tmp368 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing path
*(&local12) = ((frost$io$File*) NULL);
goto block7;
block11:;
frost$core$Object** $tmp369 = (frost$core$Object**) ($tmp361->$data + 0);
frost$core$Object* $tmp370 = *$tmp369;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp361));
// unreffing REF($161:frost.core.Maybe<frost.core.Int64>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
// unreffing REF($132:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing REF($130:frost.io.InputStream)
// line 189
frost$collections$Array* $tmp371 = *(&local1);
frost$io$File* $tmp372 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp371, ((frost$core$Object*) $tmp372));
frost$io$File* $tmp373 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp373));
// unreffing path
*(&local12) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 192
frost$core$Error* $tmp374 = *(&local11);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp374));
// line 193
frost$core$UInt8 $tmp375 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp375);
goto block8;
block8:;
frost$core$Error* $tmp376 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp376));
// unreffing error
*(&local11) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp377 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp340, &$s378);
bool $tmp379 = $tmp377.value;
if ($tmp379) goto block13; else goto block14;
block13:;
// line 197
frost$io$File* $tmp380 = *(&local3);
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit($tmp380 != NULL);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block15; else goto block16;
block15:;
// line 198
frost$io$OutputStream* $tmp383 = *(&local9);
$fn385 $tmp384 = ($fn385) $tmp383->$class->vtable[19];
frost$core$Error* $tmp386 = $tmp384($tmp383, &$s387);
*(&local13) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
frost$core$Error* $tmp388 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp388));
*(&local13) = $tmp386;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// unreffing REF($239:frost.core.Error?)
// line 199
frost$core$UInt8 $tmp389 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp389);
frost$core$Error* $tmp390 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing ignored
*(&local13) = ((frost$core$Error*) NULL);
goto block16;
block16:;
// line 201
frost$io$File* $tmp391 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp392 = *(&local0);
$fn394 $tmp393 = ($fn394) $tmp392->$class->vtable[4];
frost$core$String* $tmp395 = $tmp393($tmp392, &$s396);
frost$io$File$init$frost$core$String($tmp391, $tmp395);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$io$File* $tmp397 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
*(&local3) = $tmp391;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing REF($263:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
// unreffing REF($260:frost.io.File)
// line 202
frost$io$File* $tmp398 = *(&local3);
frost$core$Bit $tmp399 = frost$core$Bit$init$builtin_bit($tmp398 != NULL);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp401 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s402, $tmp401, &$s403);
abort(); // unreachable
block17:;
frost$io$File* $tmp404 = frost$io$File$get_parent$R$frost$io$File$Q($tmp398);
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit($tmp404 != NULL);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block19; else goto block20;
block20:;
frost$core$Int64 $tmp407 = (frost$core$Int64) {202};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s408, $tmp407, &$s409);
abort(); // unreachable
block19:;
frost$io$File$createDirectories($tmp404);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing REF($288:frost.io.File?)
goto block4;
block14:;
frost$core$Bit $tmp410 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp340, &$s411);
bool $tmp412 = $tmp410.value;
if ($tmp412) goto block21; else goto block22;
block21:;
// line 205
org$frostlang$frostc$Main$Arguments* $tmp413 = *(&local0);
$fn415 $tmp414 = ($fn415) $tmp413->$class->vtable[4];
frost$core$String* $tmp416 = $tmp414($tmp413, &$s417);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
frost$core$String* $tmp418 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp418));
*(&local14) = $tmp416;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing REF($308:frost.core.String)
// line 206
frost$core$String* $tmp419 = *(&local14);
frost$core$Int64$nullable $tmp420 = frost$core$String$convert$R$frost$core$Int64$Q($tmp419);
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420.nonnull);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block23; else goto block24;
block24:;
frost$core$Int64 $tmp423 = (frost$core$Int64) {206};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s424, $tmp423, &$s425);
abort(); // unreachable
block23:;
*(&local4) = ((frost$core$Int64) $tmp420.value);
// line 207
frost$core$Int64 $tmp426 = *(&local4);
frost$core$Int64 $tmp427 = (frost$core$Int64) {3};
int64_t $tmp428 = $tmp426.value;
int64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 > $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block27; else goto block28;
block27:;
*(&local15) = $tmp431;
goto block29;
block28:;
frost$core$Int64 $tmp433 = *(&local4);
frost$core$Int64 $tmp434 = (frost$core$Int64) {0};
int64_t $tmp435 = $tmp433.value;
int64_t $tmp436 = $tmp434.value;
bool $tmp437 = $tmp435 < $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
*(&local15) = $tmp438;
goto block29;
block29:;
frost$core$Bit $tmp439 = *(&local15);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block25; else goto block26;
block25:;
// line 208
frost$io$OutputStream* $tmp441 = *(&local9);
$fn443 $tmp442 = ($fn443) $tmp441->$class->vtable[19];
frost$core$Error* $tmp444 = $tmp442($tmp441, &$s445);
*(&local16) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
frost$core$Error* $tmp446 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local16) = $tmp444;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// unreffing REF($356:frost.core.Error?)
// line 209
frost$core$UInt8 $tmp447 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp447);
frost$core$Error* $tmp448 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp448));
// unreffing ignored
*(&local16) = ((frost$core$Error*) NULL);
goto block26;
block26:;
frost$core$String* $tmp449 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
// unreffing level
*(&local14) = ((frost$core$String*) NULL);
goto block4;
block22:;
frost$core$Bit $tmp450 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp340, &$s451);
bool $tmp452 = $tmp450.value;
if ($tmp452) goto block30; else goto block31;
block30:;
// line 213
org$frostlang$frostc$Main$Arguments* $tmp453 = *(&local0);
$fn455 $tmp454 = ($fn455) $tmp453->$class->vtable[4];
frost$core$String* $tmp456 = $tmp454($tmp453, &$s457);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
frost$core$String* $tmp458 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
*(&local17) = $tmp456;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp456));
// unreffing REF($388:frost.core.String)
// line 214
frost$core$String* $tmp459 = *(&local17);
frost$core$Int64$nullable $tmp460 = frost$core$String$convert$R$frost$core$Int64$Q($tmp459);
frost$core$Bit $tmp461 = frost$core$Bit$init$builtin_bit($tmp460.nonnull);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block32; else goto block33;
block33:;
frost$core$Int64 $tmp463 = (frost$core$Int64) {214};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s464, $tmp463, &$s465);
abort(); // unreachable
block32:;
*(&local5) = ((frost$core$Int64) $tmp460.value);
// line 215
frost$core$Int64 $tmp466 = *(&local5);
frost$core$Int64 $tmp467 = (frost$core$Int64) {3};
int64_t $tmp468 = $tmp466.value;
int64_t $tmp469 = $tmp467.value;
bool $tmp470 = $tmp468 > $tmp469;
frost$core$Bit $tmp471 = (frost$core$Bit) {$tmp470};
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block36; else goto block37;
block36:;
*(&local18) = $tmp471;
goto block38;
block37:;
frost$core$Int64 $tmp473 = *(&local5);
frost$core$Int64 $tmp474 = (frost$core$Int64) {0};
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474.value;
bool $tmp477 = $tmp475 < $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
*(&local18) = $tmp478;
goto block38;
block38:;
frost$core$Bit $tmp479 = *(&local18);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block34; else goto block35;
block34:;
// line 216
frost$io$OutputStream* $tmp481 = *(&local9);
$fn483 $tmp482 = ($fn483) $tmp481->$class->vtable[19];
frost$core$Error* $tmp484 = $tmp482($tmp481, &$s485);
*(&local19) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
frost$core$Error* $tmp486 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local19) = $tmp484;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing REF($436:frost.core.Error?)
// line 217
frost$core$UInt8 $tmp487 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp487);
frost$core$Error* $tmp488 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
// unreffing ignored
*(&local19) = ((frost$core$Error*) NULL);
goto block35;
block35:;
frost$core$String* $tmp489 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
// unreffing level
*(&local17) = ((frost$core$String*) NULL);
goto block4;
block31:;
frost$core$Bit $tmp490 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp340, &$s491);
bool $tmp492 = $tmp490.value;
if ($tmp492) goto block39; else goto block40;
block39:;
// line 221
org$frostlang$frostc$Main$Format$nullable $tmp493 = *(&local6);
frost$core$Bit $tmp494 = frost$core$Bit$init$builtin_bit($tmp493.nonnull);
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block41; else goto block42;
block41:;
// line 222
frost$io$OutputStream* $tmp496 = *(&local9);
$fn498 $tmp497 = ($fn498) $tmp496->$class->vtable[19];
frost$core$Error* $tmp499 = $tmp497($tmp496, &$s500);
*(&local20) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$core$Error* $tmp501 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
*(&local20) = $tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($474:frost.core.Error?)
// line 223
frost$core$UInt8 $tmp502 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp502);
frost$core$Error* $tmp503 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing ignored
*(&local20) = ((frost$core$Error*) NULL);
goto block42;
block42:;
// line 225
org$frostlang$frostc$Main$Arguments* $tmp504 = *(&local0);
$fn506 $tmp505 = ($fn506) $tmp504->$class->vtable[4];
frost$core$String* $tmp507 = $tmp505($tmp504, &$s508);
*(&local21) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
frost$core$String* $tmp509 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
*(&local21) = $tmp507;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($497:frost.core.String)
// line 226
frost$core$String* $tmp510 = *(&local21);
frost$core$Bit $tmp511 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp510, &$s512);
bool $tmp513 = $tmp511.value;
if ($tmp513) goto block44; else goto block45;
block44:;
// line 227
frost$core$Int64 $tmp514 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp515 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp514);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp515, true });
goto block43;
block45:;
frost$core$Bit $tmp516 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp510, &$s517);
bool $tmp518 = $tmp516.value;
if ($tmp518) goto block46; else goto block47;
block46:;
// line 228
frost$core$Int64 $tmp519 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp520 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp519);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp520, true });
goto block43;
block47:;
frost$core$Bit $tmp521 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp510, &$s522);
bool $tmp523 = $tmp521.value;
if ($tmp523) goto block48; else goto block49;
block48:;
// line 229
frost$core$Int64 $tmp524 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp525 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp524);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp525, true });
goto block43;
block49:;
frost$core$Bit $tmp526 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp510, &$s527);
bool $tmp528 = $tmp526.value;
if ($tmp528) goto block50; else goto block51;
block50:;
// line 230
frost$core$Int64 $tmp529 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp530 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp529);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp530, true });
goto block43;
block51:;
frost$core$Bit $tmp531 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp510, &$s532);
bool $tmp533 = $tmp531.value;
if ($tmp533) goto block52; else goto block53;
block52:;
// line 231
frost$core$Int64 $tmp534 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp535 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp534);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp535, true });
goto block43;
block53:;
frost$core$Bit $tmp536 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp510, &$s537);
bool $tmp538 = $tmp536.value;
if ($tmp538) goto block54; else goto block55;
block54:;
// line 232
frost$core$Int64 $tmp539 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp540 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp539);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp540, true });
goto block43;
block55:;
// line 234
frost$io$OutputStream* $tmp541 = *(&local9);
frost$core$String* $tmp542 = *(&local21);
frost$core$String* $tmp543 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s544, $tmp542);
frost$core$String* $tmp545 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp543, &$s546);
$fn548 $tmp547 = ($fn548) $tmp541->$class->vtable[19];
frost$core$Error* $tmp549 = $tmp547($tmp541, $tmp545);
*(&local22) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$Error* $tmp550 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
*(&local22) = $tmp549;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing REF($570:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing REF($568:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp543));
// unreffing REF($567:frost.core.String)
// line 235
frost$core$UInt8 $tmp551 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp551);
frost$core$Error* $tmp552 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing ignored
*(&local22) = ((frost$core$Error*) NULL);
goto block43;
block43:;
frost$core$String* $tmp553 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing f
*(&local21) = ((frost$core$String*) NULL);
goto block4;
block40:;
frost$core$Bit $tmp554 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp340, &$s555);
bool $tmp556 = $tmp554.value;
if ($tmp556) goto block56; else goto block57;
block56:;
// line 240
frost$collections$Array* $tmp557 = *(&local2);
frost$io$File* $tmp558 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp559 = *(&local0);
$fn561 $tmp560 = ($fn561) $tmp559->$class->vtable[4];
frost$core$String* $tmp562 = $tmp560($tmp559, &$s563);
frost$io$File$init$frost$core$String($tmp558, $tmp562);
frost$collections$Array$add$frost$collections$Array$T($tmp557, ((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
// unreffing REF($611:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
// unreffing REF($608:frost.io.File)
goto block4;
block57:;
frost$core$Bit $tmp564 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp340, &$s565);
bool $tmp566 = $tmp564.value;
if ($tmp566) goto block58; else goto block59;
block58:;
// line 243
org$frostlang$frostc$Main$Arguments* $tmp567 = *(&local0);
$fn569 $tmp568 = ($fn569) $tmp567->$class->vtable[4];
frost$core$String* $tmp570 = $tmp568($tmp567, &$s571);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
frost$core$String* $tmp572 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
*(&local7) = $tmp570;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp570));
// unreffing REF($628:frost.core.String)
goto block4;
block59:;
// line 246
frost$core$String* $tmp573 = *(&local10);
frost$core$Bit $tmp574 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp573, &$s575);
bool $tmp576 = $tmp574.value;
if ($tmp576) goto block60; else goto block62;
block60:;
// line 247
frost$io$File* $tmp577 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp578 = *(&local10);
frost$io$File$init$frost$core$String($tmp577, $tmp578);
*(&local23) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$io$File* $tmp579 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local23) = $tmp577;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// unreffing REF($646:frost.io.File)
// line 248
frost$collections$Array* $tmp580 = *(&local1);
frost$io$File* $tmp581 = *(&local23);
frost$collections$Array$add$frost$collections$Array$T($tmp580, ((frost$core$Object*) $tmp581));
frost$io$File* $tmp582 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// unreffing f
*(&local23) = ((frost$io$File*) NULL);
goto block61;
block62:;
// line 1
// line 251
frost$io$OutputStream* $tmp583 = *(&local9);
frost$core$String* $tmp584 = *(&local10);
frost$core$String* $tmp585 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s586, $tmp584);
frost$core$String* $tmp587 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp585, &$s588);
$fn590 $tmp589 = ($fn590) $tmp583->$class->vtable[19];
frost$core$Error* $tmp591 = $tmp589($tmp583, $tmp587);
*(&local24) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
frost$core$Error* $tmp592 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp592));
*(&local24) = $tmp591;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// unreffing REF($678:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// unreffing REF($676:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
// unreffing REF($675:frost.core.String)
// line 252
frost$core$UInt8 $tmp593 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp593);
frost$core$Error* $tmp594 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// unreffing ignored
*(&local24) = ((frost$core$Error*) NULL);
goto block61;
block61:;
goto block4;
block4:;
frost$core$String* $tmp595 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp595));
// unreffing a
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 257
frost$io$File* $tmp596 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp597 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp596, $tmp597);
*(&local25) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$io$File* $tmp598 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local25) = $tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp597));
// unreffing REF($713:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing REF($712:frost.io.File)
// line 258
frost$io$File* $tmp599 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp599, &$s600);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
frost$io$File** $tmp601 = &param0->clang;
frost$io$File* $tmp602 = *$tmp601;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
frost$io$File** $tmp603 = &param0->clang;
*$tmp603 = $tmp599;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp599));
// unreffing REF($729:frost.io.File)
// line 259
frost$collections$Array* $tmp604 = *(&local1);
ITable* $tmp605 = ((frost$collections$CollectionView*) $tmp604)->$class->itable;
while ($tmp605->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp605 = $tmp605->next;
}
$fn607 $tmp606 = $tmp605->methods[0];
frost$core$Int64 $tmp608 = $tmp606(((frost$collections$CollectionView*) $tmp604));
frost$core$Int64 $tmp609 = (frost$core$Int64) {0};
frost$core$Bit $tmp610 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp608, $tmp609);
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block63; else goto block64;
block63:;
// line 260
frost$io$OutputStream* $tmp612 = *(&local9);
$fn614 $tmp613 = ($fn614) $tmp612->$class->vtable[19];
frost$core$Error* $tmp615 = $tmp613($tmp612, &$s616);
*(&local26) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
frost$core$Error* $tmp617 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
*(&local26) = $tmp615;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($754:frost.core.Error?)
// line 261
frost$core$UInt8 $tmp618 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp618);
frost$core$Error* $tmp619 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp619));
// unreffing ignored
*(&local26) = ((frost$core$Error*) NULL);
goto block64;
block64:;
// line 263
org$frostlang$frostc$Main$Format$nullable $tmp620 = *(&local6);
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit(!$tmp620.nonnull);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block65; else goto block66;
block65:;
// line 264
frost$core$Int64 $tmp623 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp624 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp623);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp624, true });
goto block66;
block66:;
// line 266
frost$io$File* $tmp625 = *(&local3);
frost$core$Bit $tmp626 = frost$core$Bit$init$builtin_bit($tmp625 == NULL);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block67; else goto block68;
block67:;
// line 267
frost$collections$Array* $tmp628 = *(&local1);
ITable* $tmp629 = ((frost$collections$CollectionView*) $tmp628)->$class->itable;
while ($tmp629->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
frost$core$Int64 $tmp632 = $tmp630(((frost$collections$CollectionView*) $tmp628));
frost$core$Int64 $tmp633 = (frost$core$Int64) {1};
frost$core$Bit $tmp634 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp632, $tmp633);
bool $tmp635 = $tmp634.value;
if ($tmp635) goto block69; else goto block71;
block69:;
// line 268
*(&local27) = ((frost$core$String*) NULL);
// line 269
org$frostlang$frostc$Main$Format$nullable $tmp636 = *(&local6);
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit($tmp636.nonnull);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block72; else goto block73;
block73:;
frost$core$Int64 $tmp639 = (frost$core$Int64) {269};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block72:;
frost$core$Int64 $tmp642 = ((org$frostlang$frostc$Main$Format) $tmp636.value).$rawValue;
frost$core$Int64 $tmp643 = (frost$core$Int64) {1};
frost$core$Bit $tmp644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp642, $tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block75; else goto block76;
block75:;
// line 270
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s646));
frost$core$String* $tmp647 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
*(&local27) = &$s648;
goto block74;
block76:;
frost$core$Int64 $tmp649 = (frost$core$Int64) {2};
frost$core$Bit $tmp650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp642, $tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block77; else goto block78;
block77:;
// line 271
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s652));
frost$core$String* $tmp653 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp653));
*(&local27) = &$s654;
goto block74;
block78:;
frost$core$Int64 $tmp655 = (frost$core$Int64) {0};
frost$core$Bit $tmp656 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp642, $tmp655);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block79; else goto block80;
block79:;
// line 272
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s658));
frost$core$String* $tmp659 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local27) = &$s660;
goto block74;
block80:;
frost$core$Int64 $tmp661 = (frost$core$Int64) {5};
frost$core$Bit $tmp662 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp642, $tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block81; else goto block82;
block81:;
// line 273
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s664));
frost$core$String* $tmp665 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
*(&local27) = &$s666;
goto block74;
block82:;
// line 275
frost$io$OutputStream* $tmp667 = *(&local9);
$fn669 $tmp668 = ($fn669) $tmp667->$class->vtable[19];
frost$core$Error* $tmp670 = $tmp668($tmp667, &$s671);
*(&local28) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
frost$core$Error* $tmp672 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
*(&local28) = $tmp670;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
// unreffing REF($865:frost.core.Error?)
// line 276
frost$core$UInt8 $tmp673 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp673);
frost$core$Error* $tmp674 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing ignored
*(&local28) = ((frost$core$Error*) NULL);
goto block74;
block74:;
// line 279
frost$collections$Array* $tmp675 = *(&local1);
frost$core$Int64 $tmp676 = (frost$core$Int64) {0};
frost$core$Object* $tmp677 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp675, $tmp676);
frost$core$String* $tmp678 = *(&local27);
frost$io$File* $tmp679 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp677), $tmp678);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
frost$io$File* $tmp680 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local3) = $tmp679;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp679));
// unreffing REF($892:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp677);
// unreffing REF($889:frost.collections.Array.T)
frost$core$String* $tmp681 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp681));
// unreffing extension
*(&local27) = ((frost$core$String*) NULL);
goto block70;
block71:;
// line 281
org$frostlang$frostc$Main$Format$nullable $tmp682 = *(&local6);
frost$core$Bit $tmp683 = frost$core$Bit$init$builtin_bit($tmp682.nonnull);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp685 = (frost$core$Int64) {281};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s686, $tmp685, &$s687);
abort(); // unreachable
block85:;
frost$core$Equatable* $tmp688;
if ($tmp682.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp689;
    $tmp689 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp689->value = ((org$frostlang$frostc$Main$Format) $tmp682.value);
    $tmp688 = ((frost$core$Equatable*) $tmp689);
}
else {
    $tmp688 = NULL;
}
frost$core$Int64 $tmp690 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp691 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp690);
org$frostlang$frostc$Main$Format$wrapper* $tmp692;
$tmp692 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp692->value = $tmp691;
ITable* $tmp693 = $tmp688->$class->itable;
while ($tmp693->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp693 = $tmp693->next;
}
$fn695 $tmp694 = $tmp693->methods[0];
frost$core$Bit $tmp696 = $tmp694($tmp688, ((frost$core$Equatable*) $tmp692));
bool $tmp697 = $tmp696.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp692)));
// unreffing REF($925:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($921:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp697) goto block83; else goto block87;
block83:;
// line 282
frost$io$OutputStream* $tmp698 = *(&local9);
$fn700 $tmp699 = ($fn700) $tmp698->$class->vtable[19];
frost$core$Error* $tmp701 = $tmp699($tmp698, &$s702);
*(&local29) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
frost$core$Error* $tmp703 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
*(&local29) = $tmp701;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($939:frost.core.Error?)
// line 283
frost$core$UInt8 $tmp704 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp704);
frost$core$Error* $tmp705 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing ignored
*(&local29) = ((frost$core$Error*) NULL);
goto block84;
block87:;
// line 1
// line 286
frost$io$OutputStream* $tmp706 = *(&local9);
$fn708 $tmp707 = ($fn708) $tmp706->$class->vtable[19];
frost$core$Error* $tmp709 = $tmp707($tmp706, &$s710);
*(&local30) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
frost$core$Error* $tmp711 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local30) = $tmp709;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing REF($963:frost.core.Error?)
// line 288
frost$core$UInt8 $tmp712 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp712);
frost$core$Error* $tmp713 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing ignored
*(&local30) = ((frost$core$Error*) NULL);
goto block84;
block84:;
goto block70;
block70:;
goto block68;
block68:;
// line 291
org$frostlang$frostc$Main$Format$nullable $tmp714 = *(&local6);
frost$core$Bit $tmp715 = frost$core$Bit$init$builtin_bit($tmp714.nonnull);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp717 = (frost$core$Int64) {291};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s718, $tmp717, &$s719);
abort(); // unreachable
block90:;
frost$core$Equatable* $tmp720;
if ($tmp714.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp721;
    $tmp721 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp721->value = ((org$frostlang$frostc$Main$Format) $tmp714.value);
    $tmp720 = ((frost$core$Equatable*) $tmp721);
}
else {
    $tmp720 = NULL;
}
frost$core$Int64 $tmp722 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp723 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp722);
org$frostlang$frostc$Main$Format$wrapper* $tmp724;
$tmp724 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp724->value = $tmp723;
ITable* $tmp725 = $tmp720->$class->itable;
while ($tmp725->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp725 = $tmp725->next;
}
$fn727 $tmp726 = $tmp725->methods[0];
frost$core$Bit $tmp728 = $tmp726($tmp720, ((frost$core$Equatable*) $tmp724));
bool $tmp729 = $tmp728.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp724)));
// unreffing REF($998:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp720));
// unreffing REF($994:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp729) goto block88; else goto block89;
block88:;
// line 292
frost$core$String* $tmp730 = *(&local7);
frost$core$Bit $tmp731 = frost$core$Bit$init$builtin_bit($tmp730 == NULL);
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block92; else goto block93;
block92:;
// line 293
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s733));
frost$core$String* $tmp734 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
*(&local7) = &$s733;
goto block93;
block93:;
// line 295
org$frostlang$frostc$HTMLProcessor* $tmp735 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp735);
frost$collections$Array* $tmp736 = *(&local1);
frost$core$Int64 $tmp737 = (frost$core$Int64) {0};
frost$core$Object* $tmp738 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp736, $tmp737);
frost$io$File* $tmp739 = *(&local3);
frost$core$Bit $tmp740 = frost$core$Bit$init$builtin_bit($tmp739 != NULL);
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp742 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s743, $tmp742, &$s744);
abort(); // unreachable
block94:;
frost$core$String* $tmp745 = *(&local7);
frost$core$Bit $tmp746 = frost$core$Bit$init$builtin_bit($tmp745 != NULL);
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block96; else goto block97;
block97:;
frost$core$Int64 $tmp748 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s749, $tmp748, &$s750);
abort(); // unreachable
block96:;
$fn752 $tmp751 = ($fn752) $tmp735->$class->vtable[3];
$tmp751($tmp735, ((frost$io$File*) $tmp738), $tmp739, $tmp745);
frost$core$Frost$unref$frost$core$Object$Q($tmp738);
// unreffing REF($1030:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing REF($1025:org.frostlang.frostc.HTMLProcessor)
// line 296
frost$io$File* $tmp753 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
// unreffing llvmDir
*(&local25) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp754 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp755 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp756 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp757 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp758 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp759 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block89:;
// line 298
frost$core$String* $tmp760 = *(&local7);
frost$core$Bit $tmp761 = frost$core$Bit$init$builtin_bit($tmp760 != NULL);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block98; else goto block99;
block98:;
// line 299
frost$io$OutputStream* $tmp763 = *(&local9);
$fn765 $tmp764 = ($fn765) $tmp763->$class->vtable[19];
frost$core$Error* $tmp766 = $tmp764($tmp763, &$s767);
*(&local31) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Error* $tmp768 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
*(&local31) = $tmp766;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// unreffing REF($1104:frost.core.Error?)
// line 300
frost$core$UInt8 $tmp769 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp769);
frost$core$Error* $tmp770 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing ignored
*(&local31) = ((frost$core$Error*) NULL);
goto block99;
block99:;
// line 302
// line 1
// line 304
*(&local33) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 305
org$frostlang$frostc$Main$Format$nullable $tmp771 = *(&local6);
frost$core$Bit $tmp772 = frost$core$Bit$init$builtin_bit($tmp771.nonnull);
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block100; else goto block101;
block101:;
frost$core$Int64 $tmp774 = (frost$core$Int64) {305};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s775, $tmp774, &$s776);
abort(); // unreachable
block100:;
frost$core$Int64 $tmp777 = ((org$frostlang$frostc$Main$Format) $tmp771.value).$rawValue;
frost$core$Int64 $tmp778 = (frost$core$Int64) {0};
frost$core$Bit $tmp779 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp777, $tmp778);
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block103; else goto block104;
block104:;
frost$core$Int64 $tmp781 = (frost$core$Int64) {1};
frost$core$Bit $tmp782 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp777, $tmp781);
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block103; else goto block105;
block105:;
frost$core$Int64 $tmp784 = (frost$core$Int64) {2};
frost$core$Bit $tmp785 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp777, $tmp784);
bool $tmp786 = $tmp785.value;
if ($tmp786) goto block103; else goto block106;
block103:;
// line 307
*(&local34) = ((frost$core$Error*) NULL);
// line 308
org$frostlang$frostc$LLVMCodeGenerator* $tmp787 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp788 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp789 = *(&local3);
frost$core$Bit $tmp790 = frost$core$Bit$init$builtin_bit($tmp789 != NULL);
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp792 = (frost$core$Int64) {309};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s793, $tmp792, &$s794);
abort(); // unreachable
block109:;
frost$io$File* $tmp795 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp789, &$s796);
frost$core$Maybe* $tmp797 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp795);
// try maybe check
frost$core$Int64* $tmp798 = &$tmp797->$rawValue;
frost$core$Int64 $tmp799 = *$tmp798;
int64_t $tmp800 = $tmp799.value;
bool $tmp801 = $tmp800 == 0;
if ($tmp801) goto block111; else goto block112;
block112:;
frost$core$Error** $tmp802 = (frost$core$Error**) ($tmp797->$data + 0);
frost$core$Error* $tmp803 = *$tmp802;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
*(&local34) = $tmp803;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($1166:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($1165:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($1155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// unreffing REF($1154:org.frostlang.frostc.LLVMCodeGenerator)
goto block107;
block111:;
frost$core$Object** $tmp804 = (frost$core$Object**) ($tmp797->$data + 0);
frost$core$Object* $tmp805 = *$tmp804;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp787, $tmp788, ((frost$io$OutputStream*) $tmp805));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp787)));
org$frostlang$frostc$CodeGenerator* $tmp806 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local33) = ((org$frostlang$frostc$CodeGenerator*) $tmp787);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($1166:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($1165:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp788));
// unreffing REF($1155:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
// unreffing REF($1154:org.frostlang.frostc.LLVMCodeGenerator)
goto block108;
block107:;
// line 312
frost$io$OutputStream* $tmp807 = *(&local9);
frost$core$Error* $tmp808 = *(&local34);
$fn810 $tmp809 = ($fn810) $tmp807->$class->vtable[20];
frost$core$Error* $tmp811 = $tmp809($tmp807, ((frost$core$Object*) $tmp808));
*(&local35) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
frost$core$Error* $tmp812 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
*(&local35) = $tmp811;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp811));
// unreffing REF($1221:frost.core.Error?)
// line 313
frost$core$UInt8 $tmp813 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp813);
frost$core$Error* $tmp814 = *(&local35);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
// unreffing ignored
*(&local35) = ((frost$core$Error*) NULL);
goto block108;
block108:;
frost$core$Error* $tmp815 = *(&local34);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
// unreffing error
*(&local34) = ((frost$core$Error*) NULL);
goto block102;
block106:;
frost$core$Int64 $tmp816 = (frost$core$Int64) {3};
frost$core$Bit $tmp817 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp777, $tmp816);
bool $tmp818 = $tmp817.value;
if ($tmp818) goto block113; else goto block114;
block113:;
// line 317
org$frostlang$frostc$HCodeGenerator* $tmp819 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp820 = *(&local3);
frost$core$Bit $tmp821 = frost$core$Bit$init$builtin_bit($tmp820 != NULL);
bool $tmp822 = $tmp821.value;
if ($tmp822) goto block115; else goto block116;
block116:;
frost$core$Int64 $tmp823 = (frost$core$Int64) {317};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s824, $tmp823, &$s825);
abort(); // unreachable
block115:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp819, $tmp820);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp819)));
org$frostlang$frostc$CodeGenerator* $tmp826 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local33) = ((org$frostlang$frostc$CodeGenerator*) $tmp819);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
// unreffing REF($1252:org.frostlang.frostc.HCodeGenerator)
goto block102;
block114:;
frost$core$Int64 $tmp827 = (frost$core$Int64) {4};
frost$core$Bit $tmp828 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp777, $tmp827);
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block117; else goto block118;
block117:;
// line 320
org$frostlang$frostc$CCodeGenerator* $tmp830 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp831 = *(&local3);
frost$core$Bit $tmp832 = frost$core$Bit$init$builtin_bit($tmp831 != NULL);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block119; else goto block120;
block120:;
frost$core$Int64 $tmp834 = (frost$core$Int64) {320};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s835, $tmp834, &$s836);
abort(); // unreachable
block119:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp830, $tmp831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp830)));
org$frostlang$frostc$CodeGenerator* $tmp837 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
*(&local33) = ((org$frostlang$frostc$CodeGenerator*) $tmp830);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing REF($1279:org.frostlang.frostc.CCodeGenerator)
goto block102;
block118:;
// line 323
frost$core$Bit $tmp838 = frost$core$Bit$init$builtin_bit(false);
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block121; else goto block122;
block122:;
frost$core$Int64 $tmp840 = (frost$core$Int64) {323};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s841, $tmp840);
abort(); // unreachable
block121:;
goto block102;
block102:;
// line 326
org$frostlang$frostc$Compiler$Settings* $tmp842 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp843 = &param0->frostHome;
frost$io$File* $tmp844 = *$tmp843;
frost$collections$Array* $tmp845 = *(&local2);
frost$core$Int64 $tmp846 = *(&local4);
frost$core$Int64 $tmp847 = *(&local5);
frost$core$Bit* $tmp848 = &param0->debug;
frost$core$Bit $tmp849 = *$tmp848;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp842, $tmp844, ((frost$collections$ListView*) $tmp845), $tmp846, $tmp847, $tmp849);
*(&local36) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
org$frostlang$frostc$Compiler$Settings* $tmp850 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local36) = $tmp842;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp842));
// unreffing REF($1310:org.frostlang.frostc.Compiler.Settings)
// line 328
frost$threads$MessageQueue* $tmp851 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp851);
*(&local37) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$threads$MessageQueue* $tmp852 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
*(&local37) = $tmp851;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// unreffing REF($1331:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 329
org$frostlang$frostc$Compiler* $tmp853 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp854 = *(&local37);
org$frostlang$frostc$CodeGenerator* $tmp855 = *(&local33);
org$frostlang$frostc$Compiler$Settings* $tmp856 = *(&local36);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp853, $tmp854, $tmp855, $tmp856);
*(&local38) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
org$frostlang$frostc$Compiler* $tmp857 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
*(&local38) = $tmp853;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($1345:org.frostlang.frostc.Compiler)
// line 330
frost$collections$Array* $tmp858 = *(&local1);
ITable* $tmp859 = ((frost$collections$Iterable*) $tmp858)->$class->itable;
while ($tmp859->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp859 = $tmp859->next;
}
$fn861 $tmp860 = $tmp859->methods[0];
frost$collections$Iterator* $tmp862 = $tmp860(((frost$collections$Iterable*) $tmp858));
goto block123;
block123:;
ITable* $tmp863 = $tmp862->$class->itable;
while ($tmp863->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp863 = $tmp863->next;
}
$fn865 $tmp864 = $tmp863->methods[0];
frost$core$Bit $tmp866 = $tmp864($tmp862);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block125; else goto block124;
block124:;
*(&local39) = ((frost$io$File*) NULL);
ITable* $tmp868 = $tmp862->$class->itable;
while ($tmp868->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp868 = $tmp868->next;
}
$fn870 $tmp869 = $tmp868->methods[1];
frost$core$Object* $tmp871 = $tmp869($tmp862);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp871)));
frost$io$File* $tmp872 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp872));
*(&local39) = ((frost$io$File*) $tmp871);
// line 331
org$frostlang$frostc$Compiler* $tmp873 = *(&local38);
frost$io$File* $tmp874 = *(&local39);
frost$collections$ListView* $tmp875 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp873, $tmp874);
ITable* $tmp876 = ((frost$collections$Iterable*) $tmp875)->$class->itable;
while ($tmp876->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp876 = $tmp876->next;
}
$fn878 $tmp877 = $tmp876->methods[0];
frost$collections$Iterator* $tmp879 = $tmp877(((frost$collections$Iterable*) $tmp875));
goto block126;
block126:;
ITable* $tmp880 = $tmp879->$class->itable;
while ($tmp880->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp880 = $tmp880->next;
}
$fn882 $tmp881 = $tmp880->methods[0];
frost$core$Bit $tmp883 = $tmp881($tmp879);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block128; else goto block127;
block127:;
*(&local40) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp885 = $tmp879->$class->itable;
while ($tmp885->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp885 = $tmp885->next;
}
$fn887 $tmp886 = $tmp885->methods[1];
frost$core$Object* $tmp888 = $tmp886($tmp879);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp888)));
org$frostlang$frostc$ClassDecl* $tmp889 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp889));
*(&local40) = ((org$frostlang$frostc$ClassDecl*) $tmp888);
// line 332
org$frostlang$frostc$Compiler* $tmp890 = *(&local38);
org$frostlang$frostc$ClassDecl* $tmp891 = *(&local40);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp890, $tmp891);
frost$core$Frost$unref$frost$core$Object$Q($tmp888);
// unreffing REF($1402:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp892 = *(&local40);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing cl
*(&local40) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block126;
block128:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing REF($1391:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp875));
// unreffing REF($1387:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp871);
// unreffing REF($1376:frost.collections.Iterator.T)
frost$io$File* $tmp893 = *(&local39);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing s
*(&local39) = ((frost$io$File*) NULL);
goto block123;
block125:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing REF($1365:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 335
frost$collections$Array* $tmp894 = *(&local1);
ITable* $tmp895 = ((frost$collections$Iterable*) $tmp894)->$class->itable;
while ($tmp895->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp895 = $tmp895->next;
}
$fn897 $tmp896 = $tmp895->methods[0];
frost$collections$Iterator* $tmp898 = $tmp896(((frost$collections$Iterable*) $tmp894));
goto block129;
block129:;
ITable* $tmp899 = $tmp898->$class->itable;
while ($tmp899->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp899 = $tmp899->next;
}
$fn901 $tmp900 = $tmp899->methods[0];
frost$core$Bit $tmp902 = $tmp900($tmp898);
bool $tmp903 = $tmp902.value;
if ($tmp903) goto block131; else goto block130;
block130:;
*(&local41) = ((frost$io$File*) NULL);
ITable* $tmp904 = $tmp898->$class->itable;
while ($tmp904->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[1];
frost$core$Object* $tmp907 = $tmp905($tmp898);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp907)));
frost$io$File* $tmp908 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp908));
*(&local41) = ((frost$io$File*) $tmp907);
// line 336
org$frostlang$frostc$Compiler* $tmp909 = *(&local38);
frost$io$File* $tmp910 = *(&local41);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp909, $tmp910);
frost$core$Frost$unref$frost$core$Object$Q($tmp907);
// unreffing REF($1457:frost.collections.Iterator.T)
frost$io$File* $tmp911 = *(&local41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
// unreffing s
*(&local41) = ((frost$io$File*) NULL);
goto block129;
block131:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing REF($1446:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 338
org$frostlang$frostc$Compiler* $tmp912 = *(&local38);
org$frostlang$frostc$Compiler$finish($tmp912);
// line 339
frost$threads$MessageQueue* $tmp913 = *(&local37);
frost$core$Int64 $tmp914 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp913);
*(&local32) = $tmp914;
// line 340
frost$core$Int64 $tmp915 = (frost$core$Int64) {0};
frost$core$Int64 $tmp916 = *(&local32);
frost$core$Bit $tmp917 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp918 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp915, $tmp916, $tmp917);
frost$core$Int64 $tmp919 = $tmp918.min;
*(&local42) = $tmp919;
frost$core$Int64 $tmp920 = $tmp918.max;
frost$core$Bit $tmp921 = $tmp918.inclusive;
bool $tmp922 = $tmp921.value;
frost$core$Int64 $tmp923 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp924 = frost$core$Int64$convert$R$frost$core$UInt64($tmp923);
if ($tmp922) goto block135; else goto block136;
block135:;
int64_t $tmp925 = $tmp919.value;
int64_t $tmp926 = $tmp920.value;
bool $tmp927 = $tmp925 <= $tmp926;
frost$core$Bit $tmp928 = (frost$core$Bit) {$tmp927};
bool $tmp929 = $tmp928.value;
if ($tmp929) goto block132; else goto block133;
block136:;
int64_t $tmp930 = $tmp919.value;
int64_t $tmp931 = $tmp920.value;
bool $tmp932 = $tmp930 < $tmp931;
frost$core$Bit $tmp933 = (frost$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block132; else goto block133;
block132:;
// line 341
frost$threads$MessageQueue* $tmp935 = *(&local37);
frost$core$Immutable* $tmp936 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp935);
*(&local43) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp936)));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp937 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
*(&local43) = ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp936);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing REF($1517:frost.threads.MessageQueue.T)
// line 342
frost$io$OutputStream* $tmp938 = *(&local9);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp939 = *(&local43);
frost$io$File** $tmp940 = &$tmp939->file;
frost$io$File* $tmp941 = *$tmp940;
frost$core$String* $tmp942 = frost$io$File$get_name$R$frost$core$String($tmp941);
frost$core$String* $tmp943 = frost$core$String$convert$R$frost$core$String($tmp942);
frost$core$String* $tmp944 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp943, &$s945);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp946 = *(&local43);
org$frostlang$frostc$Position* $tmp947 = &$tmp946->position;
org$frostlang$frostc$Position $tmp948 = *$tmp947;
org$frostlang$frostc$Position$wrapper* $tmp949;
$tmp949 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp949->value = $tmp948;
frost$core$String* $tmp950 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp944, ((frost$core$Object*) $tmp949));
frost$core$String* $tmp951 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp950, &$s952);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp953 = *(&local43);
frost$core$String** $tmp954 = &$tmp953->message;
frost$core$String* $tmp955 = *$tmp954;
frost$core$String* $tmp956 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp951, $tmp955);
frost$core$String* $tmp957 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp956, &$s958);
$fn960 $tmp959 = ($fn960) $tmp938->$class->vtable[19];
frost$core$Error* $tmp961 = $tmp959($tmp938, $tmp957);
*(&local44) = ((frost$core$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
frost$core$Error* $tmp962 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp962));
*(&local44) = $tmp961;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp961));
// unreffing REF($1549:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp957));
// unreffing REF($1547:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp956));
// unreffing REF($1546:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
// unreffing REF($1542:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp950));
// unreffing REF($1541:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing REF($1540:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing REF($1536:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing REF($1535:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing REF($1534:frost.core.String)
frost$core$Error* $tmp963 = *(&local44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp963));
// unreffing ignored
*(&local44) = ((frost$core$Error*) NULL);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp964 = *(&local43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp964));
// unreffing error
*(&local43) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
goto block134;
block134:;
frost$core$Int64 $tmp965 = *(&local42);
int64_t $tmp966 = $tmp920.value;
int64_t $tmp967 = $tmp965.value;
int64_t $tmp968 = $tmp966 - $tmp967;
frost$core$Int64 $tmp969 = (frost$core$Int64) {$tmp968};
frost$core$UInt64 $tmp970 = frost$core$Int64$convert$R$frost$core$UInt64($tmp969);
if ($tmp922) goto block138; else goto block139;
block138:;
uint64_t $tmp971 = $tmp970.value;
uint64_t $tmp972 = $tmp924.value;
bool $tmp973 = $tmp971 >= $tmp972;
frost$core$Bit $tmp974 = (frost$core$Bit) {$tmp973};
bool $tmp975 = $tmp974.value;
if ($tmp975) goto block137; else goto block133;
block139:;
uint64_t $tmp976 = $tmp970.value;
uint64_t $tmp977 = $tmp924.value;
bool $tmp978 = $tmp976 > $tmp977;
frost$core$Bit $tmp979 = (frost$core$Bit) {$tmp978};
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block137; else goto block133;
block137:;
int64_t $tmp981 = $tmp965.value;
int64_t $tmp982 = $tmp923.value;
int64_t $tmp983 = $tmp981 + $tmp982;
frost$core$Int64 $tmp984 = (frost$core$Int64) {$tmp983};
*(&local42) = $tmp984;
goto block132;
block133:;
org$frostlang$frostc$Compiler* $tmp985 = *(&local38);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp985));
// unreffing compiler
*(&local38) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp986 = *(&local37);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp986));
// unreffing errorQueue
*(&local37) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp987 = *(&local36);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp987));
// unreffing settings
*(&local36) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp988 = *(&local33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp988));
// unreffing cg
*(&local33) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 345
frost$core$Int64 $tmp989 = *(&local32);
frost$core$Int64 $tmp990 = (frost$core$Int64) {0};
frost$core$Bit $tmp991 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp989, $tmp990);
bool $tmp992 = $tmp991.value;
if ($tmp992) goto block140; else goto block142;
block140:;
// line 346
org$frostlang$frostc$Main$Format$nullable $tmp993 = *(&local6);
frost$core$Bit $tmp994 = frost$core$Bit$init$builtin_bit($tmp993.nonnull);
bool $tmp995 = $tmp994.value;
if ($tmp995) goto block143; else goto block144;
block144:;
frost$core$Int64 $tmp996 = (frost$core$Int64) {346};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s997, $tmp996, &$s998);
abort(); // unreachable
block143:;
frost$core$Int64 $tmp999 = ((org$frostlang$frostc$Main$Format) $tmp993.value).$rawValue;
frost$core$Int64 $tmp1000 = (frost$core$Int64) {1};
frost$core$Bit $tmp1001 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp999, $tmp1000);
bool $tmp1002 = $tmp1001.value;
if ($tmp1002) goto block146; else goto block147;
block146:;
// line 348
frost$io$File* $tmp1003 = *(&local3);
frost$core$Bit $tmp1004 = frost$core$Bit$init$builtin_bit($tmp1003 != NULL);
bool $tmp1005 = $tmp1004.value;
if ($tmp1005) goto block148; else goto block149;
block149:;
frost$core$Int64 $tmp1006 = (frost$core$Int64) {348};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1007, $tmp1006, &$s1008);
abort(); // unreachable
block148:;
frost$io$File* $tmp1009 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp1003, &$s1010);
frost$io$File* $tmp1011 = *(&local3);
frost$core$Bit $tmp1012 = frost$core$Bit$init$builtin_bit($tmp1011 != NULL);
bool $tmp1013 = $tmp1012.value;
if ($tmp1013) goto block150; else goto block151;
block151:;
frost$core$Int64 $tmp1014 = (frost$core$Int64) {348};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1015, $tmp1014, &$s1016);
abort(); // unreachable
block150:;
frost$core$Bit $tmp1017 = *(&local8);
frost$io$File* $tmp1018 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1009, $tmp1011, $tmp1017);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1018));
// unreffing REF($1682:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1009));
// unreffing REF($1671:frost.io.File)
goto block145;
block147:;
frost$core$Int64 $tmp1019 = (frost$core$Int64) {2};
frost$core$Bit $tmp1020 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp999, $tmp1019);
bool $tmp1021 = $tmp1020.value;
if ($tmp1021) goto block152; else goto block145;
block152:;
// line 351
frost$io$File* $tmp1022 = *(&local3);
frost$core$Bit $tmp1023 = frost$core$Bit$init$builtin_bit($tmp1022 != NULL);
bool $tmp1024 = $tmp1023.value;
if ($tmp1024) goto block153; else goto block154;
block154:;
frost$core$Int64 $tmp1025 = (frost$core$Int64) {351};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1026, $tmp1025, &$s1027);
abort(); // unreachable
block153:;
frost$io$File* $tmp1028 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp1022, &$s1029);
frost$io$File* $tmp1030 = *(&local3);
frost$core$Bit $tmp1031 = frost$core$Bit$init$builtin_bit($tmp1030 != NULL);
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block155; else goto block156;
block156:;
frost$core$Int64 $tmp1033 = (frost$core$Int64) {351};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s1034, $tmp1033, &$s1035);
abort(); // unreachable
block155:;
frost$core$Bit $tmp1036 = *(&local8);
frost$io$File* $tmp1037 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp1028, $tmp1030, $tmp1036);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
// unreffing REF($1715:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1028));
// unreffing REF($1704:frost.io.File)
goto block145;
block145:;
goto block141;
block142:;
// line 1
// line 356
frost$core$Int64 $tmp1038 = *(&local32);
frost$core$Int64 $tmp1039 = (frost$core$Int64) {1};
frost$core$Bit $tmp1040 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1038, $tmp1039);
bool $tmp1041 = $tmp1040.value;
if ($tmp1041) goto block157; else goto block159;
block157:;
// line 357
*(&local45) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1042));
frost$core$String* $tmp1043 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1043));
*(&local45) = &$s1044;
frost$core$String* $tmp1045 = *(&local45);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1045));
// unreffing ignored
*(&local45) = ((frost$core$String*) NULL);
goto block158;
block159:;
// line 1
// line 360
frost$core$Int64 $tmp1046 = *(&local32);
frost$core$String* $tmp1047 = frost$core$Int64$convert$R$frost$core$String($tmp1046);
frost$core$String* $tmp1048 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp1047, &$s1049);
*(&local46) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
frost$core$String* $tmp1050 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1050));
*(&local46) = $tmp1048;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1048));
// unreffing REF($1749:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1047));
// unreffing REF($1748:frost.core.String)
frost$core$String* $tmp1051 = *(&local46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1051));
// unreffing ignored
*(&local46) = ((frost$core$String*) NULL);
goto block158;
block158:;
// line 362
frost$core$UInt8 $tmp1052 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp1052);
goto block141;
block141:;
frost$io$File* $tmp1053 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1053));
// unreffing llvmDir
*(&local25) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp1054 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1054));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp1055 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1055));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp1056 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1056));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp1057 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1057));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp1058 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1058));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp1059 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1059));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 368
frost$core$Bit $tmp1060 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s1061);
return $tmp1060;

}
void frostMain(frost$collections$ListView* param0) {

// line 373
org$frostlang$frostc$Main* $tmp1062 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp1062);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp1062, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1062));
// unreffing REF($1:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp1063 = &param0->clang;
frost$io$File* $tmp1064 = *$tmp1063;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1064));
frost$io$File** $tmp1065 = &param0->frostHome;
frost$io$File* $tmp1066 = *$tmp1065;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1066));
return;

}

