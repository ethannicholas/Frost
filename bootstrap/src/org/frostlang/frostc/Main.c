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
#include "frost/core/Int64.h"
#include "frost/io/Console.h"
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/io/OutputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/Error.h"
#include "frost/core/UInt8.h"
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
#include "frost/core/Maybe.h"
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

typedef frost$core$String* (*$fn49)(frost$io$InputStream*);
typedef void (*$fn52)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn63)(frost$io$InputStream*);
typedef void (*$fn66)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn111)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn115)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn120)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn187)(frost$io$InputStream*);
typedef void (*$fn190)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn201)(frost$io$InputStream*);
typedef void (*$fn204)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn227)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn230)(frost$io$OutputStream*);
typedef void (*$fn232)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn235)(frost$io$OutputStream*);
typedef void (*$fn237)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn240)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn260)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn266)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Int64 (*$fn289)(frost$io$InputStream*, frost$io$OutputStream*);
typedef void (*$fn305)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn311)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn332)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn360)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn369)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn397)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn409)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn414)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn456)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn466)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn474)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn495)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn509)(frost$collections$CollectionView*);
typedef void (*$fn516)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn530)(frost$collections$CollectionView*);
typedef void (*$fn568)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn591)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn596)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn601)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn617)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn642)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef void (*$fn655)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn742)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn746)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn751)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn759)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn763)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn768)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn778)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn782)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn787)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x74\x6f\x4f\x62\x6a\x65\x63\x74\x3a\x20", 10, -1267422819530339691, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s58 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s59 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s71 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s103 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s132 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s182 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s183 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s228 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s238 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s241 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s274 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s298 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s306 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s328 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s361 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s365 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s398 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s402 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s410 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s416 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s517 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s539 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s540 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s551 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s557 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s563 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s565 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s569 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s582 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s602 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s608 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s609 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s662 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s663 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s681 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s683 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s706 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s716 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s717 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s825 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s832 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s872 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s873 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s885 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s891 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s901 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s909 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s910 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s917 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s931 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
frost$core$Int64 local2;
// line 61
frost$core$String* $tmp9 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s10, ((frost$core$Object*) param1));
frost$core$String* $tmp11 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp9, &$s12);
frost$io$Console$printLine$frost$core$String($tmp11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($3:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($2:frost.core.String)
// line 62
frost$collections$Array* $tmp13 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp13);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$collections$Array* $tmp14 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
*(&local0) = $tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($12:frost.collections.Array<frost.core.String>)
// line 63
frost$collections$Array* $tmp15 = *(&local0);
frost$core$String** $tmp16 = &param1->path;
frost$core$String* $tmp17 = *$tmp16;
frost$collections$Array$add$frost$collections$Array$T($tmp15, ((frost$core$Object*) $tmp17));
// line 64
frost$collections$Array* $tmp18 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) &$s19));
// line 65
frost$collections$Array* $tmp20 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp20, ((frost$core$Object*) &$s21));
// line 66
frost$collections$Array* $tmp22 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp22, ((frost$core$Object*) &$s23));
// line 67
frost$core$Bit* $tmp24 = &param0->debug;
frost$core$Bit $tmp25 = *$tmp24;
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block1:;
// line 68
frost$collections$Array* $tmp27 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp27, ((frost$core$Object*) &$s28));
goto block2;
block2:;
// line 70
frost$collections$Array* $tmp29 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp29, ((frost$core$Object*) &$s30));
// line 71
frost$collections$Array* $tmp31 = *(&local0);
frost$core$String** $tmp32 = &param2->path;
frost$core$String* $tmp33 = *$tmp32;
frost$collections$Array$add$frost$collections$Array$T($tmp31, ((frost$core$Object*) $tmp33));
// line 72
frost$io$File** $tmp34 = &param0->clang;
frost$io$File* $tmp35 = *$tmp34;
frost$collections$Array* $tmp36 = *(&local0);
frost$core$System$Process* $tmp37 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q($tmp35, ((frost$collections$ListView*) $tmp36));
*(&local1) = ((frost$core$System$Process*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$core$System$Process* $tmp38 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
*(&local1) = $tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// unreffing REF($75:frost.core.System.Process?)
// line 73
frost$io$OutputStream* $tmp39 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp40 = *(&local1);
frost$core$Bit $tmp41 = frost$core$Bit$init$builtin_bit($tmp40 != NULL);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s44, $tmp43, &$s45);
abort(); // unreachable
block3:;
frost$io$InputStream** $tmp46 = &$tmp40->output;
frost$io$InputStream* $tmp47 = *$tmp46;
$fn49 $tmp48 = ($fn49) $tmp47->$class->vtable[14];
frost$core$String* $tmp50 = $tmp48($tmp47);
$fn52 $tmp51 = ($fn52) $tmp39->$class->vtable[17];
$tmp51($tmp39, $tmp50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($100:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($87:frost.io.OutputStream)
// line 74
frost$io$OutputStream* $tmp53 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp54 = *(&local1);
frost$core$Bit $tmp55 = frost$core$Bit$init$builtin_bit($tmp54 != NULL);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp57 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s58, $tmp57, &$s59);
abort(); // unreachable
block5:;
frost$io$InputStream** $tmp60 = &$tmp54->error;
frost$io$InputStream* $tmp61 = *$tmp60;
$fn63 $tmp62 = ($fn63) $tmp61->$class->vtable[14];
frost$core$String* $tmp64 = $tmp62($tmp61);
$fn66 $tmp65 = ($fn66) $tmp53->$class->vtable[17];
$tmp65($tmp53, $tmp64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($123:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing REF($110:frost.io.OutputStream)
// line 75
frost$core$System$Process* $tmp67 = *(&local1);
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67 != NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp70 = (frost$core$Int64) {75};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s71, $tmp70, &$s72);
abort(); // unreachable
block7:;
frost$core$Int64 $tmp73;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp73, $tmp67);
*(&local2) = $tmp73;
// line 76
frost$core$Bit $tmp74 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block9; else goto block10;
block9:;
// line 77
frost$core$Error* $tmp76 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($149:frost.core.Error?)
goto block10;
block10:;
// line 79
frost$core$Int64 $tmp77 = *(&local2);
frost$core$Int64 $tmp78 = (frost$core$Int64) {0};
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78.value;
bool $tmp81 = $tmp79 != $tmp80;
frost$core$Bit $tmp82 = (frost$core$Bit) {$tmp81};
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block11; else goto block12;
block11:;
// line 80
frost$core$UInt8 $tmp84 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp84);
goto block12;
block12:;
// line 82
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp85 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing p
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
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
frost$core$Int64 local6;
// line 86
frost$collections$Array* $tmp87 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp87);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$collections$Array* $tmp88 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local0) = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 87
frost$collections$Array* $tmp89 = *(&local0);
frost$core$String** $tmp90 = &param1->path;
frost$core$String* $tmp91 = *$tmp90;
frost$collections$Array$add$frost$collections$Array$T($tmp89, ((frost$core$Object*) $tmp91));
// line 88
frost$collections$Array* $tmp92 = *(&local0);
frost$core$String* $tmp93 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s95, $tmp93);
frost$core$String* $tmp96 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp94, &$s97);
frost$collections$Array$add$frost$collections$Array$T($tmp92, ((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($24:frost.core.String)
// line 89
frost$collections$Array* $tmp98 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp98, ((frost$core$Object*) &$s99));
// line 90
frost$collections$Array* $tmp100 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp100, ((frost$core$Object*) &$s101));
// line 91
frost$collections$Array* $tmp102 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp102, ((frost$core$Object*) &$s103));
// line 92
frost$core$String* $tmp104 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp105 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp104, &$s106);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$collections$Array* $tmp107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local1) = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// unreffing REF($55:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($54:frost.core.String)
// line 93
frost$collections$Array* $tmp108 = *(&local1);
ITable* $tmp109 = ((frost$collections$Iterable*) $tmp108)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$collections$Iterator* $tmp112 = $tmp110(((frost$collections$Iterable*) $tmp108));
goto block1;
block1:;
ITable* $tmp113 = $tmp112->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114($tmp112);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block3; else goto block2;
block2:;
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
// line 94
frost$io$File* $tmp123 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp124 = *(&local2);
frost$io$File$init$frost$core$String($tmp123, $tmp124);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$io$File* $tmp125 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local3) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
// unreffing REF($94:frost.io.File)
// line 95
frost$collections$Array* $tmp126 = *(&local0);
frost$io$File* $tmp127 = *(&local3);
frost$io$File* $tmp128 = frost$io$File$get_parent$R$frost$io$File$Q($tmp127);
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit($tmp128 != NULL);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp131 = (frost$core$Int64) {95};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s132, $tmp131, &$s133);
abort(); // unreachable
block4:;
frost$core$String* $tmp134 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s135, ((frost$core$Object*) $tmp128));
frost$collections$Array$add$frost$collections$Array$T($tmp126, ((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($111:frost.io.File?)
// line 96
frost$io$File* $tmp136 = *(&local3);
frost$core$String* $tmp137 = frost$io$File$get_simpleName$R$frost$core$String($tmp136);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
frost$core$String* $tmp138 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
*(&local4) = $tmp137;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// unreffing REF($132:frost.core.String)
// line 97
frost$core$String* $tmp139 = *(&local4);
frost$core$Bit $tmp140 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp139, &$s141);
bool $tmp142 = $tmp140.value;
if ($tmp142) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp143 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s144, $tmp143);
abort(); // unreachable
block6:;
// line 98
frost$core$String* $tmp145 = *(&local4);
frost$core$Int64 $tmp146 = (frost$core$Int64) {3};
frost$core$Bit $tmp147 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp148 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp146, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp147);
frost$core$String* $tmp149 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp145, $tmp148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$core$String* $tmp150 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local4) = $tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($157:frost.core.String)
// line 99
frost$collections$Array* $tmp151 = *(&local0);
frost$core$String* $tmp152 = *(&local4);
frost$core$String* $tmp153 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s154, $tmp152);
frost$collections$Array$add$frost$collections$Array$T($tmp151, ((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($171:frost.core.String)
frost$core$String* $tmp155 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing simpleName
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp156 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
// unreffing libFile
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp121);
// unreffing REF($85:frost.collections.Iterator.T)
frost$core$String* $tmp157 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
// unreffing lib
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($74:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 101
frost$collections$Array* $tmp158 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp158, ((frost$core$Object*) &$s159));
// line 102
frost$collections$Array* $tmp160 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp160, ((frost$core$Object*) &$s161));
// line 103
frost$core$Bit* $tmp162 = &param0->debug;
frost$core$Bit $tmp163 = *$tmp162;
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block8; else goto block9;
block8:;
// line 104
frost$collections$Array* $tmp165 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp165, ((frost$core$Object*) &$s166));
goto block9;
block9:;
// line 106
frost$collections$Array* $tmp167 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp167, ((frost$core$Object*) &$s168));
// line 107
frost$collections$Array* $tmp169 = *(&local0);
frost$core$String** $tmp170 = &param2->path;
frost$core$String* $tmp171 = *$tmp170;
frost$collections$Array$add$frost$collections$Array$T($tmp169, ((frost$core$Object*) $tmp171));
// line 108
frost$io$File** $tmp172 = &param0->clang;
frost$io$File* $tmp173 = *$tmp172;
frost$collections$Array* $tmp174 = *(&local0);
frost$core$System$Process* $tmp175 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q($tmp173, ((frost$collections$ListView*) $tmp174));
*(&local5) = ((frost$core$System$Process*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
frost$core$System$Process* $tmp176 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
*(&local5) = $tmp175;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($237:frost.core.System.Process?)
// line 109
frost$io$OutputStream* $tmp177 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp178 = *(&local5);
frost$core$Bit $tmp179 = frost$core$Bit$init$builtin_bit($tmp178 != NULL);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp181 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s182, $tmp181, &$s183);
abort(); // unreachable
block10:;
frost$io$InputStream** $tmp184 = &$tmp178->output;
frost$io$InputStream* $tmp185 = *$tmp184;
$fn187 $tmp186 = ($fn187) $tmp185->$class->vtable[14];
frost$core$String* $tmp188 = $tmp186($tmp185);
$fn190 $tmp189 = ($fn190) $tmp177->$class->vtable[17];
$tmp189($tmp177, $tmp188);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// unreffing REF($262:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// unreffing REF($249:frost.io.OutputStream)
// line 110
frost$io$OutputStream* $tmp191 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp192 = *(&local5);
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit($tmp192 != NULL);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp195 = (frost$core$Int64) {110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s196, $tmp195, &$s197);
abort(); // unreachable
block12:;
frost$io$InputStream** $tmp198 = &$tmp192->error;
frost$io$InputStream* $tmp199 = *$tmp198;
$fn201 $tmp200 = ($fn201) $tmp199->$class->vtable[14];
frost$core$String* $tmp202 = $tmp200($tmp199);
$fn204 $tmp203 = ($fn204) $tmp191->$class->vtable[17];
$tmp203($tmp191, $tmp202);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
// unreffing REF($285:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
// unreffing REF($272:frost.io.OutputStream)
// line 111
frost$core$System$Process* $tmp205 = *(&local5);
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {111};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block14:;
frost$core$Int64 $tmp211;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp211, $tmp205);
*(&local6) = $tmp211;
// line 112
frost$core$Bit $tmp212 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block16; else goto block17;
block16:;
// line 113
frost$core$Error* $tmp214 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($311:frost.core.Error?)
goto block17;
block17:;
// line 115
frost$core$Int64 $tmp215 = *(&local6);
frost$core$Int64 $tmp216 = (frost$core$Int64) {0};
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 != $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block18; else goto block19;
block18:;
// line 116
frost$core$UInt8 $tmp222 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp222);
goto block19;
block19:;
// line 118
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp223 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp223));
// unreffing p
*(&local5) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp224 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
// unreffing icuLibs
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp225 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

// line 122
$fn227 $tmp226 = ($fn227) param1->$class->vtable[19];
$tmp226(param1, &$s228);
// line 123
$fn230 $tmp229 = ($fn230) param1->$class->vtable[21];
$tmp229(param1);
// line 124
$fn232 $tmp231 = ($fn232) param1->$class->vtable[19];
$tmp231(param1, &$s233);
// line 125
$fn235 $tmp234 = ($fn235) param1->$class->vtable[21];
$tmp234(param1);
// line 126
$fn237 $tmp236 = ($fn237) param1->$class->vtable[19];
$tmp236(param1, &$s238);
// line 127
$fn240 $tmp239 = ($fn240) param1->$class->vtable[19];
$tmp239(param1, &$s241);
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
// line 131
org$frostlang$frostc$Main$Arguments* $tmp242 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp242, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
org$frostlang$frostc$Main$Arguments* $tmp243 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local0) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 132
frost$collections$Array* $tmp244 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp244);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$collections$Array* $tmp245 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local1) = $tmp244;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 133
frost$collections$Array* $tmp246 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp246);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
frost$collections$Array* $tmp247 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local2) = $tmp246;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 134
frost$collections$Array* $tmp248 = *(&local2);
frost$io$File** $tmp249 = &param0->frostHome;
frost$io$File* $tmp250 = *$tmp249;
frost$collections$Array$add$frost$collections$Array$T($tmp248, ((frost$core$Object*) $tmp250));
// line 135
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp251 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local3) = ((frost$io$File*) NULL);
// line 136
frost$core$Int64 $tmp252 = (frost$core$Int64) {3};
*(&local4) = $tmp252;
// line 137
frost$core$Int64 $tmp253 = (frost$core$Int64) {3};
*(&local5) = $tmp253;
// line 138
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 139
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp254 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp254));
*(&local7) = ((frost$core$String*) NULL);
// line 140
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp255;
// line 141
frost$io$OutputStream* $tmp256 = frost$io$Console$errorStream$R$frost$io$OutputStream();
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
frost$io$OutputStream* $tmp257 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local9) = $tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp256));
// unreffing REF($76:frost.io.OutputStream)
// line 142
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp258 = *(&local0);
$fn260 $tmp259 = ($fn260) $tmp258->$class->vtable[2];
frost$core$Bit $tmp261 = $tmp259($tmp258);
frost$core$Bit $tmp262 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp261);
bool $tmp263 = $tmp262.value;
if ($tmp263) goto block2; else goto block3;
block2:;
// line 143
org$frostlang$frostc$Main$Arguments* $tmp264 = *(&local0);
$fn266 $tmp265 = ($fn266) $tmp264->$class->vtable[3];
frost$core$String* $tmp267 = $tmp265($tmp264);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
frost$core$String* $tmp268 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp268));
*(&local10) = $tmp267;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp267));
// unreffing REF($98:frost.core.String)
// line 144
frost$core$String* $tmp269 = *(&local10);
frost$core$Bit $tmp270 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp269, &$s271);
bool $tmp272 = $tmp270.value;
if ($tmp272) goto block5; else goto block6;
block5:;
// line 146
*(&local11) = ((frost$core$Error*) NULL);
// line 147
frost$io$File* $tmp273 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp273, &$s274);
*(&local12) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$io$File* $tmp275 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp275));
*(&local12) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($117:frost.io.File)
// line 148
frost$io$InputStream* $tmp276 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp277 = *(&local12);
frost$core$Maybe* $tmp278 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp277);
// try maybe check
frost$core$Int64* $tmp279 = &$tmp278->$rawValue;
frost$core$Int64 $tmp280 = *$tmp279;
int64_t $tmp281 = $tmp280.value;
bool $tmp282 = $tmp281 == 0;
if ($tmp282) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp283 = (frost$core$Error**) ($tmp278->$data + 0);
frost$core$Error* $tmp284 = *$tmp283;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
*(&local11) = $tmp284;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing REF($132:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing REF($130:frost.io.InputStream)
frost$io$File* $tmp285 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp285));
// unreffing path
*(&local12) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp286 = (frost$core$Object**) ($tmp278->$data + 0);
frost$core$Object* $tmp287 = *$tmp286;
$fn289 $tmp288 = ($fn289) $tmp276->$class->vtable[17];
frost$core$Int64 $tmp290 = $tmp288($tmp276, ((frost$io$OutputStream*) $tmp287));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp278));
// unreffing REF($132:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp276));
// unreffing REF($130:frost.io.InputStream)
// line 149
frost$collections$Array* $tmp291 = *(&local1);
frost$io$File* $tmp292 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp291, ((frost$core$Object*) $tmp292));
frost$io$File* $tmp293 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp293));
// unreffing path
*(&local12) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 152
frost$core$Error* $tmp294 = *(&local11);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp294));
// line 153
frost$core$UInt8 $tmp295 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp295);
goto block8;
block8:;
frost$core$Error* $tmp296 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing error
*(&local11) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp297 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp269, &$s298);
bool $tmp299 = $tmp297.value;
if ($tmp299) goto block11; else goto block12;
block11:;
// line 157
frost$io$File* $tmp300 = *(&local3);
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300 != NULL);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block13; else goto block14;
block13:;
// line 158
frost$io$OutputStream* $tmp303 = *(&local9);
$fn305 $tmp304 = ($fn305) $tmp303->$class->vtable[19];
$tmp304($tmp303, &$s306);
// line 159
frost$core$UInt8 $tmp307 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp307);
goto block14;
block14:;
// line 161
frost$io$File* $tmp308 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp309 = *(&local0);
$fn311 $tmp310 = ($fn311) $tmp309->$class->vtable[4];
frost$core$String* $tmp312 = $tmp310($tmp309, &$s313);
frost$io$File$init$frost$core$String($tmp308, $tmp312);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
frost$io$File* $tmp314 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
*(&local3) = $tmp308;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($215:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp308));
// unreffing REF($212:frost.io.File)
// line 162
frost$io$File* $tmp315 = *(&local3);
frost$core$Bit $tmp316 = frost$core$Bit$init$builtin_bit($tmp315 != NULL);
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp318 = (frost$core$Int64) {162};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block15:;
frost$io$File* $tmp321 = frost$io$File$get_parent$R$frost$io$File$Q($tmp315);
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321 != NULL);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {162};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block17:;
frost$io$File$createDirectories($tmp321);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
// unreffing REF($240:frost.io.File?)
goto block4;
block12:;
frost$core$Bit $tmp327 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp269, &$s328);
bool $tmp329 = $tmp327.value;
if ($tmp329) goto block19; else goto block20;
block19:;
// line 165
org$frostlang$frostc$Main$Arguments* $tmp330 = *(&local0);
$fn332 $tmp331 = ($fn332) $tmp330->$class->vtable[4];
frost$core$String* $tmp333 = $tmp331($tmp330, &$s334);
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
frost$core$String* $tmp335 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp335));
*(&local13) = $tmp333;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp333));
// unreffing REF($260:frost.core.String)
// line 166
frost$core$String* $tmp336 = *(&local13);
frost$core$Int64$nullable $tmp337 = frost$core$String$convert$R$frost$core$Int64$Q($tmp336);
frost$core$Bit $tmp338 = frost$core$Bit$init$builtin_bit($tmp337.nonnull);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp340 = (frost$core$Int64) {166};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s341, $tmp340, &$s342);
abort(); // unreachable
block21:;
*(&local4) = ((frost$core$Int64) $tmp337.value);
// line 167
frost$core$Int64 $tmp343 = *(&local4);
frost$core$Int64 $tmp344 = (frost$core$Int64) {3};
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 > $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
bool $tmp349 = $tmp348.value;
if ($tmp349) goto block25; else goto block26;
block25:;
*(&local14) = $tmp348;
goto block27;
block26:;
frost$core$Int64 $tmp350 = *(&local4);
frost$core$Int64 $tmp351 = (frost$core$Int64) {0};
int64_t $tmp352 = $tmp350.value;
int64_t $tmp353 = $tmp351.value;
bool $tmp354 = $tmp352 < $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
*(&local14) = $tmp355;
goto block27;
block27:;
frost$core$Bit $tmp356 = *(&local14);
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block23; else goto block24;
block23:;
// line 168
frost$io$OutputStream* $tmp358 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn360 $tmp359 = ($fn360) $tmp358->$class->vtable[19];
$tmp359($tmp358, &$s361);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
// unreffing REF($306:frost.io.OutputStream)
// line 169
frost$core$UInt8 $tmp362 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp362);
goto block24;
block24:;
frost$core$String* $tmp363 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp363));
// unreffing level
*(&local13) = ((frost$core$String*) NULL);
goto block4;
block20:;
frost$core$Bit $tmp364 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp269, &$s365);
bool $tmp366 = $tmp364.value;
if ($tmp366) goto block28; else goto block29;
block28:;
// line 173
org$frostlang$frostc$Main$Arguments* $tmp367 = *(&local0);
$fn369 $tmp368 = ($fn369) $tmp367->$class->vtable[4];
frost$core$String* $tmp370 = $tmp368($tmp367, &$s371);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
frost$core$String* $tmp372 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp372));
*(&local15) = $tmp370;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp370));
// unreffing REF($328:frost.core.String)
// line 174
frost$core$String* $tmp373 = *(&local15);
frost$core$Int64$nullable $tmp374 = frost$core$String$convert$R$frost$core$Int64$Q($tmp373);
frost$core$Bit $tmp375 = frost$core$Bit$init$builtin_bit($tmp374.nonnull);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp377 = (frost$core$Int64) {174};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s378, $tmp377, &$s379);
abort(); // unreachable
block30:;
*(&local5) = ((frost$core$Int64) $tmp374.value);
// line 175
frost$core$Int64 $tmp380 = *(&local5);
frost$core$Int64 $tmp381 = (frost$core$Int64) {3};
int64_t $tmp382 = $tmp380.value;
int64_t $tmp383 = $tmp381.value;
bool $tmp384 = $tmp382 > $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block34; else goto block35;
block34:;
*(&local16) = $tmp385;
goto block36;
block35:;
frost$core$Int64 $tmp387 = *(&local5);
frost$core$Int64 $tmp388 = (frost$core$Int64) {0};
int64_t $tmp389 = $tmp387.value;
int64_t $tmp390 = $tmp388.value;
bool $tmp391 = $tmp389 < $tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
*(&local16) = $tmp392;
goto block36;
block36:;
frost$core$Bit $tmp393 = *(&local16);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block32; else goto block33;
block32:;
// line 176
frost$io$OutputStream* $tmp395 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn397 $tmp396 = ($fn397) $tmp395->$class->vtable[19];
$tmp396($tmp395, &$s398);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
// unreffing REF($374:frost.io.OutputStream)
// line 177
frost$core$UInt8 $tmp399 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp399);
goto block33;
block33:;
frost$core$String* $tmp400 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
// unreffing level
*(&local15) = ((frost$core$String*) NULL);
goto block4;
block29:;
frost$core$Bit $tmp401 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp269, &$s402);
bool $tmp403 = $tmp401.value;
if ($tmp403) goto block37; else goto block38;
block37:;
// line 181
org$frostlang$frostc$Main$Format$nullable $tmp404 = *(&local6);
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit($tmp404.nonnull);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block39; else goto block40;
block39:;
// line 182
frost$io$OutputStream* $tmp407 = *(&local9);
$fn409 $tmp408 = ($fn409) $tmp407->$class->vtable[19];
$tmp408($tmp407, &$s410);
// line 183
frost$core$UInt8 $tmp411 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp411);
goto block40;
block40:;
// line 185
org$frostlang$frostc$Main$Arguments* $tmp412 = *(&local0);
$fn414 $tmp413 = ($fn414) $tmp412->$class->vtable[4];
frost$core$String* $tmp415 = $tmp413($tmp412, &$s416);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
frost$core$String* $tmp417 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
*(&local17) = $tmp415;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
// unreffing REF($410:frost.core.String)
// line 186
frost$core$String* $tmp418 = *(&local17);
frost$core$Bit $tmp419 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp418, &$s420);
bool $tmp421 = $tmp419.value;
if ($tmp421) goto block42; else goto block43;
block42:;
// line 187
frost$core$Int64 $tmp422 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp423 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp422);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp423, true });
goto block41;
block43:;
frost$core$Bit $tmp424 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp418, &$s425);
bool $tmp426 = $tmp424.value;
if ($tmp426) goto block44; else goto block45;
block44:;
// line 188
frost$core$Int64 $tmp427 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp428 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp427);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp428, true });
goto block41;
block45:;
frost$core$Bit $tmp429 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp418, &$s430);
bool $tmp431 = $tmp429.value;
if ($tmp431) goto block46; else goto block47;
block46:;
// line 189
frost$core$Int64 $tmp432 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp433 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp432);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp433, true });
goto block41;
block47:;
frost$core$Bit $tmp434 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp418, &$s435);
bool $tmp436 = $tmp434.value;
if ($tmp436) goto block48; else goto block49;
block48:;
// line 190
frost$core$Int64 $tmp437 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp438 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp437);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp438, true });
goto block41;
block49:;
frost$core$Bit $tmp439 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp418, &$s440);
bool $tmp441 = $tmp439.value;
if ($tmp441) goto block50; else goto block51;
block50:;
// line 191
frost$core$Int64 $tmp442 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp443 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp442);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp443, true });
goto block41;
block51:;
frost$core$Bit $tmp444 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp418, &$s445);
bool $tmp446 = $tmp444.value;
if ($tmp446) goto block52; else goto block53;
block52:;
// line 192
frost$core$Int64 $tmp447 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp448 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp447);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp448, true });
goto block41;
block53:;
// line 194
frost$io$OutputStream* $tmp449 = *(&local9);
frost$core$String* $tmp450 = *(&local17);
frost$core$String* $tmp451 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s452, $tmp450);
frost$core$String* $tmp453 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp451, &$s454);
$fn456 $tmp455 = ($fn456) $tmp449->$class->vtable[19];
$tmp455($tmp449, $tmp453);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp453));
// unreffing REF($481:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing REF($480:frost.core.String)
// line 195
frost$core$UInt8 $tmp457 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp457);
goto block41;
block41:;
frost$core$String* $tmp458 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp458));
// unreffing f
*(&local17) = ((frost$core$String*) NULL);
goto block4;
block38:;
frost$core$Bit $tmp459 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp269, &$s460);
bool $tmp461 = $tmp459.value;
if ($tmp461) goto block54; else goto block55;
block54:;
// line 200
frost$collections$Array* $tmp462 = *(&local2);
frost$io$File* $tmp463 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp464 = *(&local0);
$fn466 $tmp465 = ($fn466) $tmp464->$class->vtable[4];
frost$core$String* $tmp467 = $tmp465($tmp464, &$s468);
frost$io$File$init$frost$core$String($tmp463, $tmp467);
frost$collections$Array$add$frost$collections$Array$T($tmp462, ((frost$core$Object*) $tmp463));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// unreffing REF($509:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing REF($506:frost.io.File)
goto block4;
block55:;
frost$core$Bit $tmp469 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp269, &$s470);
bool $tmp471 = $tmp469.value;
if ($tmp471) goto block56; else goto block57;
block56:;
// line 203
org$frostlang$frostc$Main$Arguments* $tmp472 = *(&local0);
$fn474 $tmp473 = ($fn474) $tmp472->$class->vtable[4];
frost$core$String* $tmp475 = $tmp473($tmp472, &$s476);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$String* $tmp477 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp477));
*(&local7) = $tmp475;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
// unreffing REF($526:frost.core.String)
goto block4;
block57:;
// line 206
frost$core$String* $tmp478 = *(&local10);
frost$core$Bit $tmp479 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp478, &$s480);
bool $tmp481 = $tmp479.value;
if ($tmp481) goto block58; else goto block60;
block58:;
// line 207
frost$io$File* $tmp482 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp483 = *(&local10);
frost$io$File$init$frost$core$String($tmp482, $tmp483);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$io$File* $tmp484 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local18) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($544:frost.io.File)
// line 209
frost$collections$Array* $tmp485 = *(&local1);
frost$io$File* $tmp486 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp485, ((frost$core$Object*) $tmp486));
frost$io$File* $tmp487 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
// unreffing f
*(&local18) = ((frost$io$File*) NULL);
goto block59;
block60:;
// line 1
// line 213
frost$io$OutputStream* $tmp488 = *(&local9);
frost$core$String* $tmp489 = *(&local10);
frost$core$String* $tmp490 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s491, $tmp489);
frost$core$String* $tmp492 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp490, &$s493);
$fn495 $tmp494 = ($fn495) $tmp488->$class->vtable[19];
$tmp494($tmp488, $tmp492);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
// unreffing REF($574:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp490));
// unreffing REF($573:frost.core.String)
// line 214
frost$core$UInt8 $tmp496 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp496);
goto block59;
block59:;
goto block4;
block4:;
frost$core$String* $tmp497 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing a
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 219
frost$io$File* $tmp498 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp499 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp498, $tmp499);
*(&local19) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
frost$io$File* $tmp500 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local19) = $tmp498;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($596:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing REF($595:frost.io.File)
// line 220
frost$io$File* $tmp501 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp501, &$s502);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$io$File** $tmp503 = &param0->clang;
frost$io$File* $tmp504 = *$tmp503;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp504));
frost$io$File** $tmp505 = &param0->clang;
*$tmp505 = $tmp501;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($612:frost.io.File)
// line 221
frost$collections$Array* $tmp506 = *(&local1);
ITable* $tmp507 = ((frost$collections$CollectionView*) $tmp506)->$class->itable;
while ($tmp507->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp507 = $tmp507->next;
}
$fn509 $tmp508 = $tmp507->methods[0];
frost$core$Int64 $tmp510 = $tmp508(((frost$collections$CollectionView*) $tmp506));
frost$core$Int64 $tmp511 = (frost$core$Int64) {0};
frost$core$Bit $tmp512 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp510, $tmp511);
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block61; else goto block62;
block61:;
// line 222
frost$io$OutputStream* $tmp514 = *(&local9);
$fn516 $tmp515 = ($fn516) $tmp514->$class->vtable[19];
$tmp515($tmp514, &$s517);
// line 223
frost$core$UInt8 $tmp518 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp518);
goto block62;
block62:;
// line 225
org$frostlang$frostc$Main$Format$nullable $tmp519 = *(&local6);
frost$core$Bit $tmp520 = frost$core$Bit$init$builtin_bit(!$tmp519.nonnull);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block63; else goto block64;
block63:;
// line 226
frost$core$Int64 $tmp522 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp523 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp522);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp523, true });
goto block64;
block64:;
// line 228
frost$io$File* $tmp524 = *(&local3);
frost$core$Bit $tmp525 = frost$core$Bit$init$builtin_bit($tmp524 == NULL);
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block65; else goto block66;
block65:;
// line 229
frost$collections$Array* $tmp527 = *(&local1);
ITable* $tmp528 = ((frost$collections$CollectionView*) $tmp527)->$class->itable;
while ($tmp528->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp528 = $tmp528->next;
}
$fn530 $tmp529 = $tmp528->methods[0];
frost$core$Int64 $tmp531 = $tmp529(((frost$collections$CollectionView*) $tmp527));
frost$core$Int64 $tmp532 = (frost$core$Int64) {1};
frost$core$Bit $tmp533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp531, $tmp532);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block67; else goto block69;
block67:;
// line 230
*(&local20) = ((frost$core$String*) NULL);
// line 231
org$frostlang$frostc$Main$Format$nullable $tmp535 = *(&local6);
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit($tmp535.nonnull);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {231};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s539, $tmp538, &$s540);
abort(); // unreachable
block70:;
frost$core$Int64 $tmp541 = ((org$frostlang$frostc$Main$Format) $tmp535.value).$rawValue;
frost$core$Int64 $tmp542 = (frost$core$Int64) {1};
frost$core$Bit $tmp543 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp542);
bool $tmp544 = $tmp543.value;
if ($tmp544) goto block73; else goto block74;
block73:;
// line 232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s545));
frost$core$String* $tmp546 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
*(&local20) = &$s547;
goto block72;
block74:;
frost$core$Int64 $tmp548 = (frost$core$Int64) {2};
frost$core$Bit $tmp549 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block75; else goto block76;
block75:;
// line 233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s551));
frost$core$String* $tmp552 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
*(&local20) = &$s553;
goto block72;
block76:;
frost$core$Int64 $tmp554 = (frost$core$Int64) {0};
frost$core$Bit $tmp555 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp554);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block77; else goto block78;
block77:;
// line 234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s557));
frost$core$String* $tmp558 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
*(&local20) = &$s559;
goto block72;
block78:;
frost$core$Int64 $tmp560 = (frost$core$Int64) {5};
frost$core$Bit $tmp561 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp541, $tmp560);
bool $tmp562 = $tmp561.value;
if ($tmp562) goto block79; else goto block80;
block79:;
// line 235
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s563));
frost$core$String* $tmp564 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp564));
*(&local20) = &$s565;
goto block72;
block80:;
// line 237
frost$io$OutputStream* $tmp566 = *(&local9);
$fn568 $tmp567 = ($fn568) $tmp566->$class->vtable[19];
$tmp567($tmp566, &$s569);
// line 238
frost$core$UInt8 $tmp570 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp570);
goto block72;
block72:;
// line 241
frost$collections$Array* $tmp571 = *(&local1);
frost$core$Int64 $tmp572 = (frost$core$Int64) {0};
frost$core$Object* $tmp573 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp571, $tmp572);
frost$core$String* $tmp574 = *(&local20);
frost$io$File* $tmp575 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp573), $tmp574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$io$File* $tmp576 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
*(&local3) = $tmp575;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
// unreffing REF($745:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp573);
// unreffing REF($742:frost.collections.Array.T)
frost$core$String* $tmp577 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
// unreffing extension
*(&local20) = ((frost$core$String*) NULL);
goto block68;
block69:;
// line 243
org$frostlang$frostc$Main$Format$nullable $tmp578 = *(&local6);
frost$core$Bit $tmp579 = frost$core$Bit$init$builtin_bit($tmp578.nonnull);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp581 = (frost$core$Int64) {243};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block83:;
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
// unreffing REF($778:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp584));
// unreffing REF($774:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp593) goto block81; else goto block85;
block81:;
// line 244
frost$io$OutputStream* $tmp594 = *(&local9);
$fn596 $tmp595 = ($fn596) $tmp594->$class->vtable[19];
$tmp595($tmp594, &$s597);
// line 245
frost$core$UInt8 $tmp598 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp598);
goto block82;
block85:;
// line 1
// line 248
frost$io$OutputStream* $tmp599 = *(&local9);
$fn601 $tmp600 = ($fn601) $tmp599->$class->vtable[19];
$tmp600($tmp599, &$s602);
// line 250
frost$core$UInt8 $tmp603 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp603);
goto block82;
block82:;
goto block68;
block68:;
goto block66;
block66:;
// line 253
org$frostlang$frostc$Main$Format$nullable $tmp604 = *(&local6);
frost$core$Bit $tmp605 = frost$core$Bit$init$builtin_bit($tmp604.nonnull);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp607 = (frost$core$Int64) {253};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s608, $tmp607, &$s609);
abort(); // unreachable
block88:;
frost$core$Equatable* $tmp610;
if ($tmp604.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp611;
    $tmp611 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp611->value = ((org$frostlang$frostc$Main$Format) $tmp604.value);
    $tmp610 = ((frost$core$Equatable*) $tmp611);
}
else {
    $tmp610 = NULL;
}
frost$core$Int64 $tmp612 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp613 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp612);
org$frostlang$frostc$Main$Format$wrapper* $tmp614;
$tmp614 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp614->value = $tmp613;
ITable* $tmp615 = $tmp610->$class->itable;
while ($tmp615->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
frost$core$Bit $tmp618 = $tmp616($tmp610, ((frost$core$Equatable*) $tmp614));
bool $tmp619 = $tmp618.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp614)));
// unreffing REF($821:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp610));
// unreffing REF($817:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp619) goto block86; else goto block87;
block86:;
// line 254
frost$core$String* $tmp620 = *(&local7);
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit($tmp620 == NULL);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block90; else goto block91;
block90:;
// line 255
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s623));
frost$core$String* $tmp624 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local7) = &$s623;
goto block91;
block91:;
// line 257
org$frostlang$frostc$HTMLProcessor* $tmp625 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp625);
frost$collections$Array* $tmp626 = *(&local1);
frost$core$Int64 $tmp627 = (frost$core$Int64) {0};
frost$core$Object* $tmp628 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp626, $tmp627);
frost$io$File* $tmp629 = *(&local3);
frost$core$Bit $tmp630 = frost$core$Bit$init$builtin_bit($tmp629 != NULL);
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp632 = (frost$core$Int64) {257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s633, $tmp632, &$s634);
abort(); // unreachable
block92:;
frost$core$String* $tmp635 = *(&local7);
frost$core$Bit $tmp636 = frost$core$Bit$init$builtin_bit($tmp635 != NULL);
bool $tmp637 = $tmp636.value;
if ($tmp637) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp638 = (frost$core$Int64) {257};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s639, $tmp638, &$s640);
abort(); // unreachable
block94:;
$fn642 $tmp641 = ($fn642) $tmp625->$class->vtable[3];
$tmp641($tmp625, ((frost$io$File*) $tmp628), $tmp629, $tmp635);
frost$core$Frost$unref$frost$core$Object$Q($tmp628);
// unreffing REF($853:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp625));
// unreffing REF($848:org.frostlang.frostc.HTMLProcessor)
// line 258
frost$io$File* $tmp643 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp644 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp645 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp646 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp647 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp648 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp649 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block87:;
// line 260
frost$core$String* $tmp650 = *(&local7);
frost$core$Bit $tmp651 = frost$core$Bit$init$builtin_bit($tmp650 != NULL);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block96; else goto block97;
block96:;
// line 261
frost$io$OutputStream* $tmp653 = *(&local9);
$fn655 $tmp654 = ($fn655) $tmp653->$class->vtable[19];
$tmp654($tmp653, &$s656);
// line 262
frost$core$UInt8 $tmp657 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp657);
goto block97;
block97:;
// line 264
// line 1
// line 266
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 267
org$frostlang$frostc$Main$Format$nullable $tmp658 = *(&local6);
frost$core$Bit $tmp659 = frost$core$Bit$init$builtin_bit($tmp658.nonnull);
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp661 = (frost$core$Int64) {267};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s662, $tmp661, &$s663);
abort(); // unreachable
block98:;
frost$core$Int64 $tmp664 = ((org$frostlang$frostc$Main$Format) $tmp658.value).$rawValue;
frost$core$Int64 $tmp665 = (frost$core$Int64) {0};
frost$core$Bit $tmp666 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp664, $tmp665);
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block101; else goto block102;
block102:;
frost$core$Int64 $tmp668 = (frost$core$Int64) {1};
frost$core$Bit $tmp669 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp664, $tmp668);
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block101; else goto block103;
block103:;
frost$core$Int64 $tmp671 = (frost$core$Int64) {2};
frost$core$Bit $tmp672 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp664, $tmp671);
bool $tmp673 = $tmp672.value;
if ($tmp673) goto block101; else goto block104;
block101:;
// line 269
*(&local23) = ((frost$core$Error*) NULL);
// line 270
org$frostlang$frostc$LLVMCodeGenerator* $tmp674 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp675 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp676 = *(&local3);
frost$core$Bit $tmp677 = frost$core$Bit$init$builtin_bit($tmp676 != NULL);
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp679 = (frost$core$Int64) {271};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s680, $tmp679, &$s681);
abort(); // unreachable
block107:;
frost$io$File* $tmp682 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp676, &$s683);
frost$core$Maybe* $tmp684 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp682);
// try maybe check
frost$core$Int64* $tmp685 = &$tmp684->$rawValue;
frost$core$Int64 $tmp686 = *$tmp685;
int64_t $tmp687 = $tmp686.value;
bool $tmp688 = $tmp687 == 0;
if ($tmp688) goto block109; else goto block110;
block110:;
frost$core$Error** $tmp689 = (frost$core$Error**) ($tmp684->$data + 0);
frost$core$Error* $tmp690 = *$tmp689;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
*(&local23) = $tmp690;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($974:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($973:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($963:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($962:org.frostlang.frostc.LLVMCodeGenerator)
goto block105;
block109:;
frost$core$Object** $tmp691 = (frost$core$Object**) ($tmp684->$data + 0);
frost$core$Object* $tmp692 = *$tmp691;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp674, $tmp675, ((frost$io$OutputStream*) $tmp692));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp674)));
org$frostlang$frostc$CodeGenerator* $tmp693 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp674);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($974:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp682));
// unreffing REF($973:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
// unreffing REF($963:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// unreffing REF($962:org.frostlang.frostc.LLVMCodeGenerator)
goto block106;
block105:;
// line 274
frost$core$Error* $tmp694 = *(&local23);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp694));
// line 275
frost$core$UInt8 $tmp695 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp695);
goto block106;
block106:;
frost$core$Error* $tmp696 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing error
*(&local23) = ((frost$core$Error*) NULL);
goto block100;
block104:;
frost$core$Int64 $tmp697 = (frost$core$Int64) {3};
frost$core$Bit $tmp698 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp664, $tmp697);
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block111; else goto block112;
block111:;
// line 279
org$frostlang$frostc$HCodeGenerator* $tmp700 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp701 = *(&local3);
frost$core$Bit $tmp702 = frost$core$Bit$init$builtin_bit($tmp701 != NULL);
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block113; else goto block114;
block114:;
frost$core$Int64 $tmp704 = (frost$core$Int64) {279};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s705, $tmp704, &$s706);
abort(); // unreachable
block113:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp700, $tmp701);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp700)));
org$frostlang$frostc$CodeGenerator* $tmp707 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp700);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing REF($1043:org.frostlang.frostc.HCodeGenerator)
goto block100;
block112:;
frost$core$Int64 $tmp708 = (frost$core$Int64) {4};
frost$core$Bit $tmp709 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp664, $tmp708);
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block115; else goto block116;
block115:;
// line 282
org$frostlang$frostc$CCodeGenerator* $tmp711 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp712 = *(&local3);
frost$core$Bit $tmp713 = frost$core$Bit$init$builtin_bit($tmp712 != NULL);
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block117; else goto block118;
block118:;
frost$core$Int64 $tmp715 = (frost$core$Int64) {282};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s716, $tmp715, &$s717);
abort(); // unreachable
block117:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp711, $tmp712);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp711)));
org$frostlang$frostc$CodeGenerator* $tmp718 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp718));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp711);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
// unreffing REF($1070:org.frostlang.frostc.CCodeGenerator)
goto block100;
block116:;
// line 285
frost$core$Bit $tmp719 = frost$core$Bit$init$builtin_bit(false);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block119; else goto block120;
block120:;
frost$core$Int64 $tmp721 = (frost$core$Int64) {285};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s722, $tmp721);
abort(); // unreachable
block119:;
goto block100;
block100:;
// line 288
org$frostlang$frostc$Compiler$Settings* $tmp723 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp724 = &param0->frostHome;
frost$io$File* $tmp725 = *$tmp724;
frost$collections$Array* $tmp726 = *(&local2);
frost$core$Int64 $tmp727 = *(&local4);
frost$core$Int64 $tmp728 = *(&local5);
frost$core$Bit* $tmp729 = &param0->debug;
frost$core$Bit $tmp730 = *$tmp729;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp723, $tmp725, ((frost$collections$ListView*) $tmp726), $tmp727, $tmp728, $tmp730);
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
org$frostlang$frostc$Compiler$Settings* $tmp731 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
*(&local24) = $tmp723;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
// unreffing REF($1101:org.frostlang.frostc.Compiler.Settings)
// line 290
frost$threads$MessageQueue* $tmp732 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp732);
*(&local25) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
frost$threads$MessageQueue* $tmp733 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
*(&local25) = $tmp732;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
// unreffing REF($1122:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 291
org$frostlang$frostc$Compiler* $tmp734 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp735 = *(&local25);
org$frostlang$frostc$CodeGenerator* $tmp736 = *(&local22);
org$frostlang$frostc$Compiler$Settings* $tmp737 = *(&local24);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp734, $tmp735, $tmp736, $tmp737);
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
org$frostlang$frostc$Compiler* $tmp738 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
*(&local26) = $tmp734;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing REF($1136:org.frostlang.frostc.Compiler)
// line 292
frost$collections$Array* $tmp739 = *(&local1);
ITable* $tmp740 = ((frost$collections$Iterable*) $tmp739)->$class->itable;
while ($tmp740->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp740 = $tmp740->next;
}
$fn742 $tmp741 = $tmp740->methods[0];
frost$collections$Iterator* $tmp743 = $tmp741(((frost$collections$Iterable*) $tmp739));
goto block121;
block121:;
ITable* $tmp744 = $tmp743->$class->itable;
while ($tmp744->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp744 = $tmp744->next;
}
$fn746 $tmp745 = $tmp744->methods[0];
frost$core$Bit $tmp747 = $tmp745($tmp743);
bool $tmp748 = $tmp747.value;
if ($tmp748) goto block123; else goto block122;
block122:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp749 = $tmp743->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[1];
frost$core$Object* $tmp752 = $tmp750($tmp743);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp752)));
frost$io$File* $tmp753 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp753));
*(&local27) = ((frost$io$File*) $tmp752);
// line 293
org$frostlang$frostc$Compiler* $tmp754 = *(&local26);
frost$io$File* $tmp755 = *(&local27);
frost$collections$ListView* $tmp756 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp754, $tmp755);
ITable* $tmp757 = ((frost$collections$Iterable*) $tmp756)->$class->itable;
while ($tmp757->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp757 = $tmp757->next;
}
$fn759 $tmp758 = $tmp757->methods[0];
frost$collections$Iterator* $tmp760 = $tmp758(((frost$collections$Iterable*) $tmp756));
goto block124;
block124:;
ITable* $tmp761 = $tmp760->$class->itable;
while ($tmp761->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[0];
frost$core$Bit $tmp764 = $tmp762($tmp760);
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block126; else goto block125;
block125:;
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp766 = $tmp760->$class->itable;
while ($tmp766->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp766 = $tmp766->next;
}
$fn768 $tmp767 = $tmp766->methods[1];
frost$core$Object* $tmp769 = $tmp767($tmp760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp769)));
org$frostlang$frostc$ClassDecl* $tmp770 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) $tmp769);
// line 294
org$frostlang$frostc$Compiler* $tmp771 = *(&local26);
org$frostlang$frostc$ClassDecl* $tmp772 = *(&local28);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp771, $tmp772);
frost$core$Frost$unref$frost$core$Object$Q($tmp769);
// unreffing REF($1193:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp773 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing cl
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block124;
block126:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// unreffing REF($1182:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($1178:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp752);
// unreffing REF($1167:frost.collections.Iterator.T)
frost$io$File* $tmp774 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing s
*(&local27) = ((frost$io$File*) NULL);
goto block121;
block123:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
// unreffing REF($1156:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 297
frost$collections$Array* $tmp775 = *(&local1);
ITable* $tmp776 = ((frost$collections$Iterable*) $tmp775)->$class->itable;
while ($tmp776->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp776 = $tmp776->next;
}
$fn778 $tmp777 = $tmp776->methods[0];
frost$collections$Iterator* $tmp779 = $tmp777(((frost$collections$Iterable*) $tmp775));
goto block127;
block127:;
ITable* $tmp780 = $tmp779->$class->itable;
while ($tmp780->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp780 = $tmp780->next;
}
$fn782 $tmp781 = $tmp780->methods[0];
frost$core$Bit $tmp783 = $tmp781($tmp779);
bool $tmp784 = $tmp783.value;
if ($tmp784) goto block129; else goto block128;
block128:;
*(&local29) = ((frost$io$File*) NULL);
ITable* $tmp785 = $tmp779->$class->itable;
while ($tmp785->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp785 = $tmp785->next;
}
$fn787 $tmp786 = $tmp785->methods[1];
frost$core$Object* $tmp788 = $tmp786($tmp779);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp788)));
frost$io$File* $tmp789 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp789));
*(&local29) = ((frost$io$File*) $tmp788);
// line 298
org$frostlang$frostc$Compiler* $tmp790 = *(&local26);
frost$io$File* $tmp791 = *(&local29);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp790, $tmp791);
frost$core$Frost$unref$frost$core$Object$Q($tmp788);
// unreffing REF($1248:frost.collections.Iterator.T)
frost$io$File* $tmp792 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp792));
// unreffing s
*(&local29) = ((frost$io$File*) NULL);
goto block127;
block129:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
// unreffing REF($1237:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 300
org$frostlang$frostc$Compiler* $tmp793 = *(&local26);
org$frostlang$frostc$Compiler$finish($tmp793);
// line 301
frost$threads$MessageQueue* $tmp794 = *(&local25);
frost$core$Int64 $tmp795 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp794);
*(&local21) = $tmp795;
// line 302
frost$core$Int64 $tmp796 = (frost$core$Int64) {0};
frost$core$Int64 $tmp797 = *(&local21);
frost$core$Bit $tmp798 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp799 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp796, $tmp797, $tmp798);
frost$core$Int64 $tmp800 = $tmp799.min;
*(&local30) = $tmp800;
frost$core$Int64 $tmp801 = $tmp799.max;
frost$core$Bit $tmp802 = $tmp799.inclusive;
bool $tmp803 = $tmp802.value;
frost$core$Int64 $tmp804 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp805 = frost$core$Int64$convert$R$frost$core$UInt64($tmp804);
if ($tmp803) goto block133; else goto block134;
block133:;
int64_t $tmp806 = $tmp800.value;
int64_t $tmp807 = $tmp801.value;
bool $tmp808 = $tmp806 <= $tmp807;
frost$core$Bit $tmp809 = (frost$core$Bit) {$tmp808};
bool $tmp810 = $tmp809.value;
if ($tmp810) goto block130; else goto block131;
block134:;
int64_t $tmp811 = $tmp800.value;
int64_t $tmp812 = $tmp801.value;
bool $tmp813 = $tmp811 < $tmp812;
frost$core$Bit $tmp814 = (frost$core$Bit) {$tmp813};
bool $tmp815 = $tmp814.value;
if ($tmp815) goto block130; else goto block131;
block130:;
// line 303
frost$threads$MessageQueue* $tmp816 = *(&local25);
frost$core$Immutable* $tmp817 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp816);
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp817)));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp818 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp817);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
// unreffing REF($1308:frost.threads.MessageQueue.T)
// line 304
org$frostlang$frostc$Compiler$ErrorMsg* $tmp819 = *(&local31);
frost$io$File** $tmp820 = &$tmp819->file;
frost$io$File* $tmp821 = *$tmp820;
frost$core$String* $tmp822 = frost$io$File$get_name$R$frost$core$String($tmp821);
frost$core$String* $tmp823 = frost$core$String$convert$R$frost$core$String($tmp822);
frost$core$String* $tmp824 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp823, &$s825);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp826 = *(&local31);
org$frostlang$frostc$Position* $tmp827 = &$tmp826->position;
org$frostlang$frostc$Position $tmp828 = *$tmp827;
org$frostlang$frostc$Position$wrapper* $tmp829;
$tmp829 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp829->value = $tmp828;
frost$core$String* $tmp830 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp824, ((frost$core$Object*) $tmp829));
frost$core$String* $tmp831 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp830, &$s832);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp833 = *(&local31);
frost$core$String** $tmp834 = &$tmp833->message;
frost$core$String* $tmp835 = *$tmp834;
frost$core$String* $tmp836 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp831, $tmp835);
frost$core$String* $tmp837 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp836, &$s838);
frost$io$Console$printLine$frost$core$String($tmp837);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
// unreffing REF($1337:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing REF($1336:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp831));
// unreffing REF($1332:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp830));
// unreffing REF($1331:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp829));
// unreffing REF($1330:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
// unreffing REF($1326:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// unreffing REF($1325:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// unreffing REF($1324:frost.core.String)
org$frostlang$frostc$Compiler$ErrorMsg* $tmp839 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing error
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
goto block132;
block132:;
frost$core$Int64 $tmp840 = *(&local30);
int64_t $tmp841 = $tmp801.value;
int64_t $tmp842 = $tmp840.value;
int64_t $tmp843 = $tmp841 - $tmp842;
frost$core$Int64 $tmp844 = (frost$core$Int64) {$tmp843};
frost$core$UInt64 $tmp845 = frost$core$Int64$convert$R$frost$core$UInt64($tmp844);
if ($tmp803) goto block136; else goto block137;
block136:;
uint64_t $tmp846 = $tmp845.value;
uint64_t $tmp847 = $tmp805.value;
bool $tmp848 = $tmp846 >= $tmp847;
frost$core$Bit $tmp849 = (frost$core$Bit) {$tmp848};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block135; else goto block131;
block137:;
uint64_t $tmp851 = $tmp845.value;
uint64_t $tmp852 = $tmp805.value;
bool $tmp853 = $tmp851 > $tmp852;
frost$core$Bit $tmp854 = (frost$core$Bit) {$tmp853};
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block135; else goto block131;
block135:;
int64_t $tmp856 = $tmp840.value;
int64_t $tmp857 = $tmp804.value;
int64_t $tmp858 = $tmp856 + $tmp857;
frost$core$Int64 $tmp859 = (frost$core$Int64) {$tmp858};
*(&local30) = $tmp859;
goto block130;
block131:;
org$frostlang$frostc$Compiler* $tmp860 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp860));
// unreffing compiler
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp861 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp861));
// unreffing errorQueue
*(&local25) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp862 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp862));
// unreffing settings
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp863 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp863));
// unreffing cg
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 307
frost$core$Int64 $tmp864 = *(&local21);
frost$core$Int64 $tmp865 = (frost$core$Int64) {0};
frost$core$Bit $tmp866 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp864, $tmp865);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block138; else goto block140;
block138:;
// line 308
org$frostlang$frostc$Main$Format$nullable $tmp868 = *(&local6);
frost$core$Bit $tmp869 = frost$core$Bit$init$builtin_bit($tmp868.nonnull);
bool $tmp870 = $tmp869.value;
if ($tmp870) goto block141; else goto block142;
block142:;
frost$core$Int64 $tmp871 = (frost$core$Int64) {308};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s872, $tmp871, &$s873);
abort(); // unreachable
block141:;
frost$core$Int64 $tmp874 = ((org$frostlang$frostc$Main$Format) $tmp868.value).$rawValue;
frost$core$Int64 $tmp875 = (frost$core$Int64) {1};
frost$core$Bit $tmp876 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp874, $tmp875);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block144; else goto block145;
block144:;
// line 310
frost$io$File* $tmp878 = *(&local3);
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit($tmp878 != NULL);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block146; else goto block147;
block147:;
frost$core$Int64 $tmp881 = (frost$core$Int64) {310};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s882, $tmp881, &$s883);
abort(); // unreachable
block146:;
frost$io$File* $tmp884 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp878, &$s885);
frost$io$File* $tmp886 = *(&local3);
frost$core$Bit $tmp887 = frost$core$Bit$init$builtin_bit($tmp886 != NULL);
bool $tmp888 = $tmp887.value;
if ($tmp888) goto block148; else goto block149;
block149:;
frost$core$Int64 $tmp889 = (frost$core$Int64) {310};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s890, $tmp889, &$s891);
abort(); // unreachable
block148:;
frost$core$Bit $tmp892 = *(&local8);
frost$io$File* $tmp893 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp884, $tmp886, $tmp892);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($1456:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp884));
// unreffing REF($1445:frost.io.File)
goto block143;
block145:;
frost$core$Int64 $tmp894 = (frost$core$Int64) {2};
frost$core$Bit $tmp895 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp874, $tmp894);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block150; else goto block143;
block150:;
// line 313
frost$io$File* $tmp897 = *(&local3);
frost$core$Bit $tmp898 = frost$core$Bit$init$builtin_bit($tmp897 != NULL);
bool $tmp899 = $tmp898.value;
if ($tmp899) goto block151; else goto block152;
block152:;
frost$core$Int64 $tmp900 = (frost$core$Int64) {313};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s901, $tmp900, &$s902);
abort(); // unreachable
block151:;
frost$io$File* $tmp903 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp897, &$s904);
frost$io$File* $tmp905 = *(&local3);
frost$core$Bit $tmp906 = frost$core$Bit$init$builtin_bit($tmp905 != NULL);
bool $tmp907 = $tmp906.value;
if ($tmp907) goto block153; else goto block154;
block154:;
frost$core$Int64 $tmp908 = (frost$core$Int64) {313};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s909, $tmp908, &$s910);
abort(); // unreachable
block153:;
frost$core$Bit $tmp911 = *(&local8);
frost$io$File* $tmp912 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp903, $tmp905, $tmp911);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp912));
// unreffing REF($1489:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp903));
// unreffing REF($1478:frost.io.File)
goto block143;
block143:;
goto block139;
block140:;
// line 1
// line 318
frost$core$Int64 $tmp913 = *(&local21);
frost$core$Int64 $tmp914 = (frost$core$Int64) {1};
frost$core$Bit $tmp915 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp913, $tmp914);
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block155; else goto block157;
block155:;
// line 319
frost$io$Console$printLine$frost$core$String(&$s917);
goto block156;
block157:;
// line 1
// line 322
frost$core$Int64 $tmp918 = *(&local21);
frost$core$String* $tmp919 = frost$core$Int64$convert$R$frost$core$String($tmp918);
frost$core$String* $tmp920 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp919, &$s921);
frost$io$Console$printLine$frost$core$String($tmp920);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($1512:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp919));
// unreffing REF($1511:frost.core.String)
goto block156;
block156:;
// line 324
frost$core$UInt8 $tmp922 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp922);
goto block139;
block139:;
frost$io$File* $tmp923 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp923));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp924 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp924));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp925 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp925));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp926 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp926));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp927 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp927));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp928 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp928));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp929 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 330
frost$core$Bit $tmp930 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s931);
return $tmp930;

}
void frostMain(frost$collections$ListView* param0) {

// line 335
org$frostlang$frostc$Main* $tmp932 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp932);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp932, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp932));
// unreffing REF($1:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp933 = &param0->clang;
frost$io$File* $tmp934 = *$tmp933;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp934));
frost$io$File** $tmp935 = &param0->frostHome;
frost$io$File* $tmp936 = *$tmp935;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
return;

}

