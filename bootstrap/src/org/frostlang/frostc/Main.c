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
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/io/Console.h"
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

typedef frost$core$String* (*$fn45)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn48)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn60)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn63)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn109)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn113)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn118)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn185)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn188)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn200)(frost$io$InputStream*);
typedef frost$core$Error* (*$fn203)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn227)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn231)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn234)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn238)(frost$io$OutputStream*);
typedef frost$core$Error* (*$fn241)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn245)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn266)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn272)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Int64 (*$fn295)(frost$io$InputStream*, frost$io$OutputStream*);
typedef frost$core$Error* (*$fn311)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn318)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn339)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn367)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn377)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn405)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn418)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn424)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn466)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn477)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn485)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$Error* (*$fn506)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn521)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn528)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn543)(frost$collections$CollectionView*);
typedef frost$core$Error* (*$fn581)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn605)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Error* (*$fn610)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Error* (*$fn616)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn633)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn658)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef frost$core$Error* (*$fn671)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn759)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn763)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn768)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn776)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn780)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn785)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn795)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn799)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn804)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s69 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s70 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s133 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s152 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s159 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s181 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s209 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s210 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s236 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s243 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s277 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s280 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s348 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s373 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s411 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s430 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s435 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s445 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s455 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s462 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
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
static frost$core$String $s583 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s596 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s625 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s639 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s649 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s650 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s673 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s680 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s697 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s700 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s722 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s733 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s734 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s739 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s842 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s849 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s889 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s899 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s900 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s902 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s907 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s908 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s918 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s919 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s921 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s926 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s927 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s934 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s938 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s948 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
frost$io$File** $tmp30 = &param0->clang;
frost$io$File* $tmp31 = *$tmp30;
frost$collections$Array* $tmp32 = *(&local0);
frost$core$System$Process* $tmp33 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q($tmp31, ((frost$collections$ListView*) $tmp32));
*(&local1) = ((frost$core$System$Process*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$System$Process* $tmp34 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local1) = $tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($64:frost.core.System.Process?)
// line 72
frost$io$OutputStream* $tmp35 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp36 = *(&local1);
frost$core$Bit $tmp37 = frost$core$Bit$init$builtin_bit($tmp36 != NULL);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp39 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s40, $tmp39, &$s41);
abort(); // unreachable
block3:;
frost$io$InputStream** $tmp42 = &$tmp36->output;
frost$io$InputStream* $tmp43 = *$tmp42;
$fn45 $tmp44 = ($fn45) $tmp43->$class->vtable[14];
frost$core$String* $tmp46 = $tmp44($tmp43);
$fn48 $tmp47 = ($fn48) $tmp35->$class->vtable[17];
frost$core$Error* $tmp49 = $tmp47($tmp35, $tmp46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($91:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($89:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($76:frost.io.OutputStream)
// line 73
frost$io$OutputStream* $tmp50 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp51 = *(&local1);
frost$core$Bit $tmp52 = frost$core$Bit$init$builtin_bit($tmp51 != NULL);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block5:;
frost$io$InputStream** $tmp57 = &$tmp51->error;
frost$io$InputStream* $tmp58 = *$tmp57;
$fn60 $tmp59 = ($fn60) $tmp58->$class->vtable[14];
frost$core$String* $tmp61 = $tmp59($tmp58);
$fn63 $tmp62 = ($fn63) $tmp50->$class->vtable[17];
frost$core$Error* $tmp64 = $tmp62($tmp50, $tmp61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($117:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($115:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($102:frost.io.OutputStream)
// line 74
frost$core$System$Process* $tmp65 = *(&local1);
frost$core$Bit $tmp66 = frost$core$Bit$init$builtin_bit($tmp65 != NULL);
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp68 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s69, $tmp68, &$s70);
abort(); // unreachable
block7:;
frost$core$Int64 $tmp71;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp71, $tmp65);
*(&local2) = $tmp71;
// line 75
frost$core$Bit $tmp72 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block9; else goto block10;
block9:;
// line 76
frost$core$Error* $tmp74 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($144:frost.core.Error?)
goto block10;
block10:;
// line 78
frost$core$Int64 $tmp75 = *(&local2);
frost$core$Int64 $tmp76 = (frost$core$Int64) {0};
int64_t $tmp77 = $tmp75.value;
int64_t $tmp78 = $tmp76.value;
bool $tmp79 = $tmp77 != $tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block11; else goto block12;
block11:;
// line 79
frost$core$UInt8 $tmp82 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp82);
goto block12;
block12:;
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp83 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing p
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
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
// line 85
frost$collections$Array* $tmp85 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp85);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$Array* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 86
frost$collections$Array* $tmp87 = *(&local0);
frost$core$String** $tmp88 = &param1->path;
frost$core$String* $tmp89 = *$tmp88;
frost$collections$Array$add$frost$collections$Array$T($tmp87, ((frost$core$Object*) $tmp89));
// line 87
frost$collections$Array* $tmp90 = *(&local0);
frost$core$String* $tmp91 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s93, $tmp91);
frost$core$String* $tmp94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp92, &$s95);
frost$collections$Array$add$frost$collections$Array$T($tmp90, ((frost$core$Object*) $tmp94));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing REF($24:frost.core.String)
// line 88
frost$collections$Array* $tmp96 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp96, ((frost$core$Object*) &$s97));
// line 89
frost$collections$Array* $tmp98 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp98, ((frost$core$Object*) &$s99));
// line 90
frost$collections$Array* $tmp100 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp100, ((frost$core$Object*) &$s101));
// line 91
frost$core$String* $tmp102 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp103 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp102, &$s104);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$collections$Array* $tmp105 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local1) = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($55:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
// unreffing REF($54:frost.core.String)
// line 92
frost$collections$Array* $tmp106 = *(&local1);
ITable* $tmp107 = ((frost$collections$Iterable*) $tmp106)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$collections$Iterator* $tmp110 = $tmp108(((frost$collections$Iterable*) $tmp106));
goto block1;
block1:;
ITable* $tmp111 = $tmp110->$class->itable;
while ($tmp111->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp111 = $tmp111->next;
}
$fn113 $tmp112 = $tmp111->methods[0];
frost$core$Bit $tmp114 = $tmp112($tmp110);
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp116 = $tmp110->$class->itable;
while ($tmp116->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp116 = $tmp116->next;
}
$fn118 $tmp117 = $tmp116->methods[1];
frost$core$Object* $tmp119 = $tmp117($tmp110);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp119)));
frost$core$String* $tmp120 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local2) = ((frost$core$String*) $tmp119);
// line 93
frost$io$File* $tmp121 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp122 = *(&local2);
frost$io$File$init$frost$core$String($tmp121, $tmp122);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
frost$io$File* $tmp123 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local3) = $tmp121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing REF($94:frost.io.File)
// line 94
frost$collections$Array* $tmp124 = *(&local0);
frost$io$File* $tmp125 = *(&local3);
frost$io$File* $tmp126 = frost$io$File$get_parent$R$frost$io$File$Q($tmp125);
frost$core$Bit $tmp127 = frost$core$Bit$init$builtin_bit($tmp126 != NULL);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp129 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s130, $tmp129, &$s131);
abort(); // unreachable
block4:;
frost$core$String* $tmp132 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s133, ((frost$core$Object*) $tmp126));
frost$collections$Array$add$frost$collections$Array$T($tmp124, ((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// unreffing REF($111:frost.io.File?)
// line 95
frost$io$File* $tmp134 = *(&local3);
frost$core$String* $tmp135 = frost$io$File$get_simpleName$R$frost$core$String($tmp134);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
frost$core$String* $tmp136 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local4) = $tmp135;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp135));
// unreffing REF($132:frost.core.String)
// line 96
frost$core$String* $tmp137 = *(&local4);
frost$core$Bit $tmp138 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp137, &$s139);
bool $tmp140 = $tmp138.value;
if ($tmp140) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp141 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s142, $tmp141);
abort(); // unreachable
block6:;
// line 97
frost$core$String* $tmp143 = *(&local4);
frost$core$Int64 $tmp144 = (frost$core$Int64) {3};
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp146 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp144, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp145);
frost$core$String* $tmp147 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp143, $tmp146);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$String* $tmp148 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local4) = $tmp147;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
// unreffing REF($157:frost.core.String)
// line 98
frost$collections$Array* $tmp149 = *(&local0);
frost$core$String* $tmp150 = *(&local4);
frost$core$String* $tmp151 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s152, $tmp150);
frost$collections$Array$add$frost$collections$Array$T($tmp149, ((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($171:frost.core.String)
frost$core$String* $tmp153 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing simpleName
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp154 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
// unreffing libFile
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp119);
// unreffing REF($85:frost.collections.Iterator.T)
frost$core$String* $tmp155 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
// unreffing lib
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($74:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 100
frost$collections$Array* $tmp156 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp156, ((frost$core$Object*) &$s157));
// line 101
frost$collections$Array* $tmp158 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp158, ((frost$core$Object*) &$s159));
// line 102
frost$core$Bit* $tmp160 = &param0->debug;
frost$core$Bit $tmp161 = *$tmp160;
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block8; else goto block9;
block8:;
// line 103
frost$collections$Array* $tmp163 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp163, ((frost$core$Object*) &$s164));
goto block9;
block9:;
// line 105
frost$collections$Array* $tmp165 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp165, ((frost$core$Object*) &$s166));
// line 106
frost$collections$Array* $tmp167 = *(&local0);
frost$core$String** $tmp168 = &param2->path;
frost$core$String* $tmp169 = *$tmp168;
frost$collections$Array$add$frost$collections$Array$T($tmp167, ((frost$core$Object*) $tmp169));
// line 107
frost$io$File** $tmp170 = &param0->clang;
frost$io$File* $tmp171 = *$tmp170;
frost$collections$Array* $tmp172 = *(&local0);
frost$core$System$Process* $tmp173 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q($tmp171, ((frost$collections$ListView*) $tmp172));
*(&local5) = ((frost$core$System$Process*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
frost$core$System$Process* $tmp174 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local5) = $tmp173;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($237:frost.core.System.Process?)
// line 108
frost$io$OutputStream* $tmp175 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp176 = *(&local5);
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit($tmp176 != NULL);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {108};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s180, $tmp179, &$s181);
abort(); // unreachable
block10:;
frost$io$InputStream** $tmp182 = &$tmp176->output;
frost$io$InputStream* $tmp183 = *$tmp182;
$fn185 $tmp184 = ($fn185) $tmp183->$class->vtable[14];
frost$core$String* $tmp186 = $tmp184($tmp183);
$fn188 $tmp187 = ($fn188) $tmp175->$class->vtable[17];
frost$core$Error* $tmp189 = $tmp187($tmp175, $tmp186);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
// unreffing REF($264:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing REF($262:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($249:frost.io.OutputStream)
// line 109
frost$io$OutputStream* $tmp190 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp191 = *(&local5);
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191 != NULL);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp194 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s195, $tmp194, &$s196);
abort(); // unreachable
block12:;
frost$io$InputStream** $tmp197 = &$tmp191->error;
frost$io$InputStream* $tmp198 = *$tmp197;
$fn200 $tmp199 = ($fn200) $tmp198->$class->vtable[14];
frost$core$String* $tmp201 = $tmp199($tmp198);
$fn203 $tmp202 = ($fn203) $tmp190->$class->vtable[17];
frost$core$Error* $tmp204 = $tmp202($tmp190, $tmp201);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
// unreffing REF($290:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($288:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
// unreffing REF($275:frost.io.OutputStream)
// line 110
frost$core$System$Process* $tmp205 = *(&local5);
frost$core$Bit $tmp206 = frost$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp208 = (frost$core$Int64) {110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block14:;
frost$core$Int64 $tmp211;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp211, $tmp205);
*(&local6) = $tmp211;
// line 111
frost$core$Bit $tmp212 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block16; else goto block17;
block16:;
// line 112
frost$core$Error* $tmp214 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp214));
// unreffing REF($317:frost.core.Error?)
goto block17;
block17:;
// line 114
frost$core$Int64 $tmp215 = *(&local6);
frost$core$Int64 $tmp216 = (frost$core$Int64) {0};
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 != $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block18; else goto block19;
block18:;
// line 115
frost$core$UInt8 $tmp222 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp222);
goto block19;
block19:;
// line 117
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

// line 121
$fn227 $tmp226 = ($fn227) param1->$class->vtable[19];
frost$core$Error* $tmp228 = $tmp226(param1, &$s229);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($2:frost.core.Error?)
// line 122
$fn231 $tmp230 = ($fn231) param1->$class->vtable[21];
frost$core$Error* $tmp232 = $tmp230(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($8:frost.core.Error?)
// line 123
$fn234 $tmp233 = ($fn234) param1->$class->vtable[19];
frost$core$Error* $tmp235 = $tmp233(param1, &$s236);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($14:frost.core.Error?)
// line 124
$fn238 $tmp237 = ($fn238) param1->$class->vtable[21];
frost$core$Error* $tmp239 = $tmp237(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($20:frost.core.Error?)
// line 125
$fn241 $tmp240 = ($fn241) param1->$class->vtable[19];
frost$core$Error* $tmp242 = $tmp240(param1, &$s243);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($26:frost.core.Error?)
// line 126
$fn245 $tmp244 = ($fn245) param1->$class->vtable[19];
frost$core$Error* $tmp246 = $tmp244(param1, &$s247);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
// unreffing REF($32:frost.core.Error?)
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
// line 130
org$frostlang$frostc$Main$Arguments* $tmp248 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp248, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
org$frostlang$frostc$Main$Arguments* $tmp249 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
*(&local0) = $tmp248;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp248));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 131
frost$collections$Array* $tmp250 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp250);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
frost$collections$Array* $tmp251 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp251));
*(&local1) = $tmp250;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 132
frost$collections$Array* $tmp252 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp252);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$collections$Array* $tmp253 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local2) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 133
frost$collections$Array* $tmp254 = *(&local2);
frost$io$File** $tmp255 = &param0->frostHome;
frost$io$File* $tmp256 = *$tmp255;
frost$collections$Array$add$frost$collections$Array$T($tmp254, ((frost$core$Object*) $tmp256));
// line 134
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp257 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
*(&local3) = ((frost$io$File*) NULL);
// line 135
frost$core$Int64 $tmp258 = (frost$core$Int64) {3};
*(&local4) = $tmp258;
// line 136
frost$core$Int64 $tmp259 = (frost$core$Int64) {3};
*(&local5) = $tmp259;
// line 137
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 138
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp260 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
*(&local7) = ((frost$core$String*) NULL);
// line 139
frost$core$Bit $tmp261 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp261;
// line 140
frost$io$OutputStream* $tmp262 = frost$io$Console$errorStream$R$frost$io$OutputStream();
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
frost$io$OutputStream* $tmp263 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local9) = $tmp262;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp262));
// unreffing REF($76:frost.io.OutputStream)
// line 141
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp264 = *(&local0);
$fn266 $tmp265 = ($fn266) $tmp264->$class->vtable[2];
frost$core$Bit $tmp267 = $tmp265($tmp264);
frost$core$Bit $tmp268 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp267);
bool $tmp269 = $tmp268.value;
if ($tmp269) goto block2; else goto block3;
block2:;
// line 142
org$frostlang$frostc$Main$Arguments* $tmp270 = *(&local0);
$fn272 $tmp271 = ($fn272) $tmp270->$class->vtable[3];
frost$core$String* $tmp273 = $tmp271($tmp270);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
frost$core$String* $tmp274 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local10) = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp273));
// unreffing REF($98:frost.core.String)
// line 143
frost$core$String* $tmp275 = *(&local10);
frost$core$Bit $tmp276 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp275, &$s277);
bool $tmp278 = $tmp276.value;
if ($tmp278) goto block5; else goto block6;
block5:;
// line 145
*(&local11) = ((frost$core$Error*) NULL);
// line 146
frost$io$File* $tmp279 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp279, &$s280);
*(&local12) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
frost$io$File* $tmp281 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp281));
*(&local12) = $tmp279;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp279));
// unreffing REF($117:frost.io.File)
// line 147
frost$io$InputStream* $tmp282 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp283 = *(&local12);
frost$core$Maybe* $tmp284 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp283);
// try maybe check
frost$core$Int64* $tmp285 = &$tmp284->$rawValue;
frost$core$Int64 $tmp286 = *$tmp285;
int64_t $tmp287 = $tmp286.value;
bool $tmp288 = $tmp287 == 0;
if ($tmp288) goto block9; else goto block10;
block10:;
frost$core$Error** $tmp289 = (frost$core$Error**) ($tmp284->$data + 0);
frost$core$Error* $tmp290 = *$tmp289;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
*(&local11) = $tmp290;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing REF($132:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing REF($130:frost.io.InputStream)
frost$io$File* $tmp291 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp291));
// unreffing path
*(&local12) = ((frost$io$File*) NULL);
goto block7;
block9:;
frost$core$Object** $tmp292 = (frost$core$Object**) ($tmp284->$data + 0);
frost$core$Object* $tmp293 = *$tmp292;
$fn295 $tmp294 = ($fn295) $tmp282->$class->vtable[17];
frost$core$Int64 $tmp296 = $tmp294($tmp282, ((frost$io$OutputStream*) $tmp293));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp284));
// unreffing REF($132:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp282));
// unreffing REF($130:frost.io.InputStream)
// line 148
frost$collections$Array* $tmp297 = *(&local1);
frost$io$File* $tmp298 = *(&local12);
frost$collections$Array$add$frost$collections$Array$T($tmp297, ((frost$core$Object*) $tmp298));
frost$io$File* $tmp299 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp299));
// unreffing path
*(&local12) = ((frost$io$File*) NULL);
goto block8;
block7:;
// line 151
frost$core$Error* $tmp300 = *(&local11);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp300));
// line 152
frost$core$UInt8 $tmp301 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp301);
goto block8;
block8:;
frost$core$Error* $tmp302 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing error
*(&local11) = ((frost$core$Error*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp303 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp275, &$s304);
bool $tmp305 = $tmp303.value;
if ($tmp305) goto block11; else goto block12;
block11:;
// line 156
frost$io$File* $tmp306 = *(&local3);
frost$core$Bit $tmp307 = frost$core$Bit$init$builtin_bit($tmp306 != NULL);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block13; else goto block14;
block13:;
// line 157
frost$io$OutputStream* $tmp309 = *(&local9);
$fn311 $tmp310 = ($fn311) $tmp309->$class->vtable[19];
frost$core$Error* $tmp312 = $tmp310($tmp309, &$s313);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp312));
// unreffing REF($206:frost.core.Error?)
// line 158
frost$core$UInt8 $tmp314 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp314);
goto block14;
block14:;
// line 160
frost$io$File* $tmp315 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp316 = *(&local0);
$fn318 $tmp317 = ($fn318) $tmp316->$class->vtable[4];
frost$core$String* $tmp319 = $tmp317($tmp316, &$s320);
frost$io$File$init$frost$core$String($tmp315, $tmp319);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
frost$io$File* $tmp321 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
*(&local3) = $tmp315;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
// unreffing REF($218:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
// unreffing REF($215:frost.io.File)
// line 161
frost$io$File* $tmp322 = *(&local3);
frost$core$Bit $tmp323 = frost$core$Bit$init$builtin_bit($tmp322 != NULL);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp325 = (frost$core$Int64) {161};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s326, $tmp325, &$s327);
abort(); // unreachable
block15:;
frost$io$File* $tmp328 = frost$io$File$get_parent$R$frost$io$File$Q($tmp322);
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit($tmp328 != NULL);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {161};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s332, $tmp331, &$s333);
abort(); // unreachable
block17:;
frost$io$File$createDirectories($tmp328);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp328));
// unreffing REF($243:frost.io.File?)
goto block4;
block12:;
frost$core$Bit $tmp334 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp275, &$s335);
bool $tmp336 = $tmp334.value;
if ($tmp336) goto block19; else goto block20;
block19:;
// line 164
org$frostlang$frostc$Main$Arguments* $tmp337 = *(&local0);
$fn339 $tmp338 = ($fn339) $tmp337->$class->vtable[4];
frost$core$String* $tmp340 = $tmp338($tmp337, &$s341);
*(&local13) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
frost$core$String* $tmp342 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
*(&local13) = $tmp340;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp340));
// unreffing REF($263:frost.core.String)
// line 165
frost$core$String* $tmp343 = *(&local13);
frost$core$Int64$nullable $tmp344 = frost$core$String$convert$R$frost$core$Int64$Q($tmp343);
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit($tmp344.nonnull);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block21; else goto block22;
block22:;
frost$core$Int64 $tmp347 = (frost$core$Int64) {165};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s348, $tmp347, &$s349);
abort(); // unreachable
block21:;
*(&local4) = ((frost$core$Int64) $tmp344.value);
// line 166
frost$core$Int64 $tmp350 = *(&local4);
frost$core$Int64 $tmp351 = (frost$core$Int64) {3};
int64_t $tmp352 = $tmp350.value;
int64_t $tmp353 = $tmp351.value;
bool $tmp354 = $tmp352 > $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block25; else goto block26;
block25:;
*(&local14) = $tmp355;
goto block27;
block26:;
frost$core$Int64 $tmp357 = *(&local4);
frost$core$Int64 $tmp358 = (frost$core$Int64) {0};
int64_t $tmp359 = $tmp357.value;
int64_t $tmp360 = $tmp358.value;
bool $tmp361 = $tmp359 < $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
*(&local14) = $tmp362;
goto block27;
block27:;
frost$core$Bit $tmp363 = *(&local14);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block23; else goto block24;
block23:;
// line 167
frost$io$OutputStream* $tmp365 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn367 $tmp366 = ($fn367) $tmp365->$class->vtable[19];
frost$core$Error* $tmp368 = $tmp366($tmp365, &$s369);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
// unreffing REF($311:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
// unreffing REF($309:frost.io.OutputStream)
// line 168
frost$core$UInt8 $tmp370 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp370);
goto block24;
block24:;
frost$core$String* $tmp371 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
// unreffing level
*(&local13) = ((frost$core$String*) NULL);
goto block4;
block20:;
frost$core$Bit $tmp372 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp275, &$s373);
bool $tmp374 = $tmp372.value;
if ($tmp374) goto block28; else goto block29;
block28:;
// line 172
org$frostlang$frostc$Main$Arguments* $tmp375 = *(&local0);
$fn377 $tmp376 = ($fn377) $tmp375->$class->vtable[4];
frost$core$String* $tmp378 = $tmp376($tmp375, &$s379);
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
frost$core$String* $tmp380 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
*(&local15) = $tmp378;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($334:frost.core.String)
// line 173
frost$core$String* $tmp381 = *(&local15);
frost$core$Int64$nullable $tmp382 = frost$core$String$convert$R$frost$core$Int64$Q($tmp381);
frost$core$Bit $tmp383 = frost$core$Bit$init$builtin_bit($tmp382.nonnull);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp385 = (frost$core$Int64) {173};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s386, $tmp385, &$s387);
abort(); // unreachable
block30:;
*(&local5) = ((frost$core$Int64) $tmp382.value);
// line 174
frost$core$Int64 $tmp388 = *(&local5);
frost$core$Int64 $tmp389 = (frost$core$Int64) {3};
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389.value;
bool $tmp392 = $tmp390 > $tmp391;
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block34; else goto block35;
block34:;
*(&local16) = $tmp393;
goto block36;
block35:;
frost$core$Int64 $tmp395 = *(&local5);
frost$core$Int64 $tmp396 = (frost$core$Int64) {0};
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396.value;
bool $tmp399 = $tmp397 < $tmp398;
frost$core$Bit $tmp400 = (frost$core$Bit) {$tmp399};
*(&local16) = $tmp400;
goto block36;
block36:;
frost$core$Bit $tmp401 = *(&local16);
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block32; else goto block33;
block32:;
// line 175
frost$io$OutputStream* $tmp403 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn405 $tmp404 = ($fn405) $tmp403->$class->vtable[19];
frost$core$Error* $tmp406 = $tmp404($tmp403, &$s407);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
// unreffing REF($382:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
// unreffing REF($380:frost.io.OutputStream)
// line 176
frost$core$UInt8 $tmp408 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp408);
goto block33;
block33:;
frost$core$String* $tmp409 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing level
*(&local15) = ((frost$core$String*) NULL);
goto block4;
block29:;
frost$core$Bit $tmp410 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp275, &$s411);
bool $tmp412 = $tmp410.value;
if ($tmp412) goto block37; else goto block38;
block37:;
// line 180
org$frostlang$frostc$Main$Format$nullable $tmp413 = *(&local6);
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413.nonnull);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block39; else goto block40;
block39:;
// line 181
frost$io$OutputStream* $tmp416 = *(&local9);
$fn418 $tmp417 = ($fn418) $tmp416->$class->vtable[19];
frost$core$Error* $tmp419 = $tmp417($tmp416, &$s420);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($411:frost.core.Error?)
// line 182
frost$core$UInt8 $tmp421 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp421);
goto block40;
block40:;
// line 184
org$frostlang$frostc$Main$Arguments* $tmp422 = *(&local0);
$fn424 $tmp423 = ($fn424) $tmp422->$class->vtable[4];
frost$core$String* $tmp425 = $tmp423($tmp422, &$s426);
*(&local17) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$core$String* $tmp427 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local17) = $tmp425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// unreffing REF($422:frost.core.String)
// line 185
frost$core$String* $tmp428 = *(&local17);
frost$core$Bit $tmp429 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp428, &$s430);
bool $tmp431 = $tmp429.value;
if ($tmp431) goto block42; else goto block43;
block42:;
// line 186
frost$core$Int64 $tmp432 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp433 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp432);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp433, true });
goto block41;
block43:;
frost$core$Bit $tmp434 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp428, &$s435);
bool $tmp436 = $tmp434.value;
if ($tmp436) goto block44; else goto block45;
block44:;
// line 187
frost$core$Int64 $tmp437 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp438 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp437);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp438, true });
goto block41;
block45:;
frost$core$Bit $tmp439 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp428, &$s440);
bool $tmp441 = $tmp439.value;
if ($tmp441) goto block46; else goto block47;
block46:;
// line 188
frost$core$Int64 $tmp442 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp443 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp442);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp443, true });
goto block41;
block47:;
frost$core$Bit $tmp444 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp428, &$s445);
bool $tmp446 = $tmp444.value;
if ($tmp446) goto block48; else goto block49;
block48:;
// line 189
frost$core$Int64 $tmp447 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp448 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp447);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp448, true });
goto block41;
block49:;
frost$core$Bit $tmp449 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp428, &$s450);
bool $tmp451 = $tmp449.value;
if ($tmp451) goto block50; else goto block51;
block50:;
// line 190
frost$core$Int64 $tmp452 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp453 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp452);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp453, true });
goto block41;
block51:;
frost$core$Bit $tmp454 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp428, &$s455);
bool $tmp456 = $tmp454.value;
if ($tmp456) goto block52; else goto block53;
block52:;
// line 191
frost$core$Int64 $tmp457 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp458 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp457);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp458, true });
goto block41;
block53:;
// line 193
frost$io$OutputStream* $tmp459 = *(&local9);
frost$core$String* $tmp460 = *(&local17);
frost$core$String* $tmp461 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s462, $tmp460);
frost$core$String* $tmp463 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp461, &$s464);
$fn466 $tmp465 = ($fn466) $tmp459->$class->vtable[19];
frost$core$Error* $tmp467 = $tmp465($tmp459, $tmp463);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
// unreffing REF($495:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
// unreffing REF($493:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
// unreffing REF($492:frost.core.String)
// line 194
frost$core$UInt8 $tmp468 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp468);
goto block41;
block41:;
frost$core$String* $tmp469 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
// unreffing f
*(&local17) = ((frost$core$String*) NULL);
goto block4;
block38:;
frost$core$Bit $tmp470 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp275, &$s471);
bool $tmp472 = $tmp470.value;
if ($tmp472) goto block54; else goto block55;
block54:;
// line 199
frost$collections$Array* $tmp473 = *(&local2);
frost$io$File* $tmp474 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp475 = *(&local0);
$fn477 $tmp476 = ($fn477) $tmp475->$class->vtable[4];
frost$core$String* $tmp478 = $tmp476($tmp475, &$s479);
frost$io$File$init$frost$core$String($tmp474, $tmp478);
frost$collections$Array$add$frost$collections$Array$T($tmp473, ((frost$core$Object*) $tmp474));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
// unreffing REF($524:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($521:frost.io.File)
goto block4;
block55:;
frost$core$Bit $tmp480 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp275, &$s481);
bool $tmp482 = $tmp480.value;
if ($tmp482) goto block56; else goto block57;
block56:;
// line 202
org$frostlang$frostc$Main$Arguments* $tmp483 = *(&local0);
$fn485 $tmp484 = ($fn485) $tmp483->$class->vtable[4];
frost$core$String* $tmp486 = $tmp484($tmp483, &$s487);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$String* $tmp488 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local7) = $tmp486;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
// unreffing REF($541:frost.core.String)
goto block4;
block57:;
// line 205
frost$core$String* $tmp489 = *(&local10);
frost$core$Bit $tmp490 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp489, &$s491);
bool $tmp492 = $tmp490.value;
if ($tmp492) goto block58; else goto block60;
block58:;
// line 206
frost$io$File* $tmp493 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp494 = *(&local10);
frost$io$File$init$frost$core$String($tmp493, $tmp494);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$io$File* $tmp495 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp495));
*(&local18) = $tmp493;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
// unreffing REF($559:frost.io.File)
// line 208
frost$collections$Array* $tmp496 = *(&local1);
frost$io$File* $tmp497 = *(&local18);
frost$collections$Array$add$frost$collections$Array$T($tmp496, ((frost$core$Object*) $tmp497));
frost$io$File* $tmp498 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
// unreffing f
*(&local18) = ((frost$io$File*) NULL);
goto block59;
block60:;
// line 1
// line 212
frost$io$OutputStream* $tmp499 = *(&local9);
frost$core$String* $tmp500 = *(&local10);
frost$core$String* $tmp501 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s502, $tmp500);
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp501, &$s504);
$fn506 $tmp505 = ($fn506) $tmp499->$class->vtable[19];
frost$core$Error* $tmp507 = $tmp505($tmp499, $tmp503);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp507));
// unreffing REF($591:frost.core.Error?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing REF($589:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($588:frost.core.String)
// line 213
frost$core$UInt8 $tmp508 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp508);
goto block59;
block59:;
goto block4;
block4:;
frost$core$String* $tmp509 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
// unreffing a
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 218
frost$io$File* $tmp510 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp511 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp510, $tmp511);
*(&local19) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$io$File* $tmp512 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local19) = $tmp510;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
// unreffing REF($614:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
// unreffing REF($613:frost.io.File)
// line 219
frost$io$File* $tmp513 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp513, &$s514);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
frost$io$File** $tmp515 = &param0->clang;
frost$io$File* $tmp516 = *$tmp515;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
frost$io$File** $tmp517 = &param0->clang;
*$tmp517 = $tmp513;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
// unreffing REF($630:frost.io.File)
// line 220
frost$collections$Array* $tmp518 = *(&local1);
ITable* $tmp519 = ((frost$collections$CollectionView*) $tmp518)->$class->itable;
while ($tmp519->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
frost$core$Int64 $tmp522 = $tmp520(((frost$collections$CollectionView*) $tmp518));
frost$core$Int64 $tmp523 = (frost$core$Int64) {0};
frost$core$Bit $tmp524 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp522, $tmp523);
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block61; else goto block62;
block61:;
// line 221
frost$io$OutputStream* $tmp526 = *(&local9);
$fn528 $tmp527 = ($fn528) $tmp526->$class->vtable[19];
frost$core$Error* $tmp529 = $tmp527($tmp526, &$s530);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
// unreffing REF($655:frost.core.Error?)
// line 222
frost$core$UInt8 $tmp531 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp531);
goto block62;
block62:;
// line 224
org$frostlang$frostc$Main$Format$nullable $tmp532 = *(&local6);
frost$core$Bit $tmp533 = frost$core$Bit$init$builtin_bit(!$tmp532.nonnull);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block63; else goto block64;
block63:;
// line 225
frost$core$Int64 $tmp535 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp536 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp535);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp536, true });
goto block64;
block64:;
// line 227
frost$io$File* $tmp537 = *(&local3);
frost$core$Bit $tmp538 = frost$core$Bit$init$builtin_bit($tmp537 == NULL);
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block65; else goto block66;
block65:;
// line 228
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
if ($tmp547) goto block67; else goto block69;
block67:;
// line 229
*(&local20) = ((frost$core$String*) NULL);
// line 230
org$frostlang$frostc$Main$Format$nullable $tmp548 = *(&local6);
frost$core$Bit $tmp549 = frost$core$Bit$init$builtin_bit($tmp548.nonnull);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block70; else goto block71;
block71:;
frost$core$Int64 $tmp551 = (frost$core$Int64) {230};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s552, $tmp551, &$s553);
abort(); // unreachable
block70:;
frost$core$Int64 $tmp554 = ((org$frostlang$frostc$Main$Format) $tmp548.value).$rawValue;
frost$core$Int64 $tmp555 = (frost$core$Int64) {1};
frost$core$Bit $tmp556 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp555);
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block73; else goto block74;
block73:;
// line 231
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s558));
frost$core$String* $tmp559 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
*(&local20) = &$s560;
goto block72;
block74:;
frost$core$Int64 $tmp561 = (frost$core$Int64) {2};
frost$core$Bit $tmp562 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp561);
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block75; else goto block76;
block75:;
// line 232
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s564));
frost$core$String* $tmp565 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp565));
*(&local20) = &$s566;
goto block72;
block76:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {0};
frost$core$Bit $tmp568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block77; else goto block78;
block77:;
// line 233
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s570));
frost$core$String* $tmp571 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
*(&local20) = &$s572;
goto block72;
block78:;
frost$core$Int64 $tmp573 = (frost$core$Int64) {5};
frost$core$Bit $tmp574 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp554, $tmp573);
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block79; else goto block80;
block79:;
// line 234
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s576));
frost$core$String* $tmp577 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local20) = &$s578;
goto block72;
block80:;
// line 236
frost$io$OutputStream* $tmp579 = *(&local9);
$fn581 $tmp580 = ($fn581) $tmp579->$class->vtable[19];
frost$core$Error* $tmp582 = $tmp580($tmp579, &$s583);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp582));
// unreffing REF($754:frost.core.Error?)
// line 237
frost$core$UInt8 $tmp584 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp584);
goto block72;
block72:;
// line 240
frost$collections$Array* $tmp585 = *(&local1);
frost$core$Int64 $tmp586 = (frost$core$Int64) {0};
frost$core$Object* $tmp587 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp585, $tmp586);
frost$core$String* $tmp588 = *(&local20);
frost$io$File* $tmp589 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp587), $tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
frost$io$File* $tmp590 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
*(&local3) = $tmp589;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing REF($769:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp587);
// unreffing REF($766:frost.collections.Array.T)
frost$core$String* $tmp591 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
// unreffing extension
*(&local20) = ((frost$core$String*) NULL);
goto block68;
block69:;
// line 242
org$frostlang$frostc$Main$Format$nullable $tmp592 = *(&local6);
frost$core$Bit $tmp593 = frost$core$Bit$init$builtin_bit($tmp592.nonnull);
bool $tmp594 = $tmp593.value;
if ($tmp594) goto block83; else goto block84;
block84:;
frost$core$Int64 $tmp595 = (frost$core$Int64) {242};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s596, $tmp595, &$s597);
abort(); // unreachable
block83:;
frost$core$Equatable* $tmp598;
if ($tmp592.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp599;
    $tmp599 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp599->value = ((org$frostlang$frostc$Main$Format) $tmp592.value);
    $tmp598 = ((frost$core$Equatable*) $tmp599);
}
else {
    $tmp598 = NULL;
}
frost$core$Int64 $tmp600 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp601 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp600);
org$frostlang$frostc$Main$Format$wrapper* $tmp602;
$tmp602 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp602->value = $tmp601;
ITable* $tmp603 = $tmp598->$class->itable;
while ($tmp603->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp603 = $tmp603->next;
}
$fn605 $tmp604 = $tmp603->methods[0];
frost$core$Bit $tmp606 = $tmp604($tmp598, ((frost$core$Equatable*) $tmp602));
bool $tmp607 = $tmp606.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp602)));
// unreffing REF($802:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
// unreffing REF($798:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp607) goto block81; else goto block85;
block81:;
// line 243
frost$io$OutputStream* $tmp608 = *(&local9);
$fn610 $tmp609 = ($fn610) $tmp608->$class->vtable[19];
frost$core$Error* $tmp611 = $tmp609($tmp608, &$s612);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
// unreffing REF($816:frost.core.Error?)
// line 244
frost$core$UInt8 $tmp613 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp613);
goto block82;
block85:;
// line 1
// line 247
frost$io$OutputStream* $tmp614 = *(&local9);
$fn616 $tmp615 = ($fn616) $tmp614->$class->vtable[19];
frost$core$Error* $tmp617 = $tmp615($tmp614, &$s618);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp617));
// unreffing REF($828:frost.core.Error?)
// line 249
frost$core$UInt8 $tmp619 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp619);
goto block82;
block82:;
goto block68;
block68:;
goto block66;
block66:;
// line 252
org$frostlang$frostc$Main$Format$nullable $tmp620 = *(&local6);
frost$core$Bit $tmp621 = frost$core$Bit$init$builtin_bit($tmp620.nonnull);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp623 = (frost$core$Int64) {252};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s624, $tmp623, &$s625);
abort(); // unreachable
block88:;
frost$core$Equatable* $tmp626;
if ($tmp620.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp627;
    $tmp627 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp627->value = ((org$frostlang$frostc$Main$Format) $tmp620.value);
    $tmp626 = ((frost$core$Equatable*) $tmp627);
}
else {
    $tmp626 = NULL;
}
frost$core$Int64 $tmp628 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp629 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp628);
org$frostlang$frostc$Main$Format$wrapper* $tmp630;
$tmp630 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp630->value = $tmp629;
ITable* $tmp631 = $tmp626->$class->itable;
while ($tmp631->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp631 = $tmp631->next;
}
$fn633 $tmp632 = $tmp631->methods[0];
frost$core$Bit $tmp634 = $tmp632($tmp626, ((frost$core$Equatable*) $tmp630));
bool $tmp635 = $tmp634.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp630)));
// unreffing REF($851:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
// unreffing REF($847:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp635) goto block86; else goto block87;
block86:;
// line 253
frost$core$String* $tmp636 = *(&local7);
frost$core$Bit $tmp637 = frost$core$Bit$init$builtin_bit($tmp636 == NULL);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block90; else goto block91;
block90:;
// line 254
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s639));
frost$core$String* $tmp640 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
*(&local7) = &$s639;
goto block91;
block91:;
// line 256
org$frostlang$frostc$HTMLProcessor* $tmp641 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp641);
frost$collections$Array* $tmp642 = *(&local1);
frost$core$Int64 $tmp643 = (frost$core$Int64) {0};
frost$core$Object* $tmp644 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp642, $tmp643);
frost$io$File* $tmp645 = *(&local3);
frost$core$Bit $tmp646 = frost$core$Bit$init$builtin_bit($tmp645 != NULL);
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block92; else goto block93;
block93:;
frost$core$Int64 $tmp648 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s649, $tmp648, &$s650);
abort(); // unreachable
block92:;
frost$core$String* $tmp651 = *(&local7);
frost$core$Bit $tmp652 = frost$core$Bit$init$builtin_bit($tmp651 != NULL);
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp654 = (frost$core$Int64) {256};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s655, $tmp654, &$s656);
abort(); // unreachable
block94:;
$fn658 $tmp657 = ($fn658) $tmp641->$class->vtable[3];
$tmp657($tmp641, ((frost$io$File*) $tmp644), $tmp645, $tmp651);
frost$core$Frost$unref$frost$core$Object$Q($tmp644);
// unreffing REF($883:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
// unreffing REF($878:org.frostlang.frostc.HTMLProcessor)
// line 257
frost$io$File* $tmp659 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp660 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp661 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp662 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp663 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp664 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp664));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp665 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block87:;
// line 259
frost$core$String* $tmp666 = *(&local7);
frost$core$Bit $tmp667 = frost$core$Bit$init$builtin_bit($tmp666 != NULL);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block96; else goto block97;
block96:;
// line 260
frost$io$OutputStream* $tmp669 = *(&local9);
$fn671 $tmp670 = ($fn671) $tmp669->$class->vtable[19];
frost$core$Error* $tmp672 = $tmp670($tmp669, &$s673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
// unreffing REF($957:frost.core.Error?)
// line 261
frost$core$UInt8 $tmp674 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp674);
goto block97;
block97:;
// line 263
// line 1
// line 265
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 266
org$frostlang$frostc$Main$Format$nullable $tmp675 = *(&local6);
frost$core$Bit $tmp676 = frost$core$Bit$init$builtin_bit($tmp675.nonnull);
bool $tmp677 = $tmp676.value;
if ($tmp677) goto block98; else goto block99;
block99:;
frost$core$Int64 $tmp678 = (frost$core$Int64) {266};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s679, $tmp678, &$s680);
abort(); // unreachable
block98:;
frost$core$Int64 $tmp681 = ((org$frostlang$frostc$Main$Format) $tmp675.value).$rawValue;
frost$core$Int64 $tmp682 = (frost$core$Int64) {0};
frost$core$Bit $tmp683 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp681, $tmp682);
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block101; else goto block102;
block102:;
frost$core$Int64 $tmp685 = (frost$core$Int64) {1};
frost$core$Bit $tmp686 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp681, $tmp685);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block101; else goto block103;
block103:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {2};
frost$core$Bit $tmp689 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp681, $tmp688);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block101; else goto block104;
block101:;
// line 268
*(&local23) = ((frost$core$Error*) NULL);
// line 269
org$frostlang$frostc$LLVMCodeGenerator* $tmp691 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp692 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp693 = *(&local3);
frost$core$Bit $tmp694 = frost$core$Bit$init$builtin_bit($tmp693 != NULL);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block107; else goto block108;
block108:;
frost$core$Int64 $tmp696 = (frost$core$Int64) {270};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s697, $tmp696, &$s698);
abort(); // unreachable
block107:;
frost$io$File* $tmp699 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp693, &$s700);
frost$core$Maybe* $tmp701 = frost$io$File$openOutputStream$R$frost$core$Maybe$LTfrost$io$OutputStream$GT($tmp699);
// try maybe check
frost$core$Int64* $tmp702 = &$tmp701->$rawValue;
frost$core$Int64 $tmp703 = *$tmp702;
int64_t $tmp704 = $tmp703.value;
bool $tmp705 = $tmp704 == 0;
if ($tmp705) goto block109; else goto block110;
block110:;
frost$core$Error** $tmp706 = (frost$core$Error**) ($tmp701->$data + 0);
frost$core$Error* $tmp707 = *$tmp706;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
*(&local23) = $tmp707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($1007:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing REF($1006:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// unreffing REF($996:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing REF($995:org.frostlang.frostc.LLVMCodeGenerator)
goto block105;
block109:;
frost$core$Object** $tmp708 = (frost$core$Object**) ($tmp701->$data + 0);
frost$core$Object* $tmp709 = *$tmp708;
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp691, $tmp692, ((frost$io$OutputStream*) $tmp709));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp691)));
org$frostlang$frostc$CodeGenerator* $tmp710 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp691);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($1007:frost.core.Maybe<frost.io.OutputStream>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// unreffing REF($1006:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp692));
// unreffing REF($996:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
// unreffing REF($995:org.frostlang.frostc.LLVMCodeGenerator)
goto block106;
block105:;
// line 273
frost$core$Error* $tmp711 = *(&local23);
frost$io$Console$printLine$frost$core$Object(((frost$core$Object*) $tmp711));
// line 274
frost$core$UInt8 $tmp712 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp712);
goto block106;
block106:;
frost$core$Error* $tmp713 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
// unreffing error
*(&local23) = ((frost$core$Error*) NULL);
goto block100;
block104:;
frost$core$Int64 $tmp714 = (frost$core$Int64) {3};
frost$core$Bit $tmp715 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp681, $tmp714);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block111; else goto block112;
block111:;
// line 278
org$frostlang$frostc$HCodeGenerator* $tmp717 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp718 = *(&local3);
frost$core$Bit $tmp719 = frost$core$Bit$init$builtin_bit($tmp718 != NULL);
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block113; else goto block114;
block114:;
frost$core$Int64 $tmp721 = (frost$core$Int64) {278};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s722, $tmp721, &$s723);
abort(); // unreachable
block113:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp717, $tmp718);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp717)));
org$frostlang$frostc$CodeGenerator* $tmp724 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp717);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
// unreffing REF($1076:org.frostlang.frostc.HCodeGenerator)
goto block100;
block112:;
frost$core$Int64 $tmp725 = (frost$core$Int64) {4};
frost$core$Bit $tmp726 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp681, $tmp725);
bool $tmp727 = $tmp726.value;
if ($tmp727) goto block115; else goto block116;
block115:;
// line 281
org$frostlang$frostc$CCodeGenerator* $tmp728 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp729 = *(&local3);
frost$core$Bit $tmp730 = frost$core$Bit$init$builtin_bit($tmp729 != NULL);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block117; else goto block118;
block118:;
frost$core$Int64 $tmp732 = (frost$core$Int64) {281};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s733, $tmp732, &$s734);
abort(); // unreachable
block117:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp728, $tmp729);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp728)));
org$frostlang$frostc$CodeGenerator* $tmp735 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) $tmp728);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp728));
// unreffing REF($1103:org.frostlang.frostc.CCodeGenerator)
goto block100;
block116:;
// line 284
frost$core$Bit $tmp736 = frost$core$Bit$init$builtin_bit(false);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block119; else goto block120;
block120:;
frost$core$Int64 $tmp738 = (frost$core$Int64) {284};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s739, $tmp738);
abort(); // unreachable
block119:;
goto block100;
block100:;
// line 287
org$frostlang$frostc$Compiler$Settings* $tmp740 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp741 = &param0->frostHome;
frost$io$File* $tmp742 = *$tmp741;
frost$collections$Array* $tmp743 = *(&local2);
frost$core$Int64 $tmp744 = *(&local4);
frost$core$Int64 $tmp745 = *(&local5);
frost$core$Bit* $tmp746 = &param0->debug;
frost$core$Bit $tmp747 = *$tmp746;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp740, $tmp742, ((frost$collections$ListView*) $tmp743), $tmp744, $tmp745, $tmp747);
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
org$frostlang$frostc$Compiler$Settings* $tmp748 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
*(&local24) = $tmp740;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// unreffing REF($1134:org.frostlang.frostc.Compiler.Settings)
// line 289
frost$threads$MessageQueue* $tmp749 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp749);
*(&local25) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
frost$threads$MessageQueue* $tmp750 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp750));
*(&local25) = $tmp749;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing REF($1155:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.ErrorMsg>)
// line 290
org$frostlang$frostc$Compiler* $tmp751 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp752 = *(&local25);
org$frostlang$frostc$CodeGenerator* $tmp753 = *(&local22);
org$frostlang$frostc$Compiler$Settings* $tmp754 = *(&local24);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$ErrorMsg$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp751, $tmp752, $tmp753, $tmp754);
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
org$frostlang$frostc$Compiler* $tmp755 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local26) = $tmp751;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
// unreffing REF($1169:org.frostlang.frostc.Compiler)
// line 291
frost$collections$Array* $tmp756 = *(&local1);
ITable* $tmp757 = ((frost$collections$Iterable*) $tmp756)->$class->itable;
while ($tmp757->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp757 = $tmp757->next;
}
$fn759 $tmp758 = $tmp757->methods[0];
frost$collections$Iterator* $tmp760 = $tmp758(((frost$collections$Iterable*) $tmp756));
goto block121;
block121:;
ITable* $tmp761 = $tmp760->$class->itable;
while ($tmp761->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[0];
frost$core$Bit $tmp764 = $tmp762($tmp760);
bool $tmp765 = $tmp764.value;
if ($tmp765) goto block123; else goto block122;
block122:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp766 = $tmp760->$class->itable;
while ($tmp766->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp766 = $tmp766->next;
}
$fn768 $tmp767 = $tmp766->methods[1];
frost$core$Object* $tmp769 = $tmp767($tmp760);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp769)));
frost$io$File* $tmp770 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
*(&local27) = ((frost$io$File*) $tmp769);
// line 292
org$frostlang$frostc$Compiler* $tmp771 = *(&local26);
frost$io$File* $tmp772 = *(&local27);
frost$collections$ListView* $tmp773 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp771, $tmp772);
ITable* $tmp774 = ((frost$collections$Iterable*) $tmp773)->$class->itable;
while ($tmp774->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp774 = $tmp774->next;
}
$fn776 $tmp775 = $tmp774->methods[0];
frost$collections$Iterator* $tmp777 = $tmp775(((frost$collections$Iterable*) $tmp773));
goto block124;
block124:;
ITable* $tmp778 = $tmp777->$class->itable;
while ($tmp778->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp778 = $tmp778->next;
}
$fn780 $tmp779 = $tmp778->methods[0];
frost$core$Bit $tmp781 = $tmp779($tmp777);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block126; else goto block125;
block125:;
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp783 = $tmp777->$class->itable;
while ($tmp783->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp783 = $tmp783->next;
}
$fn785 $tmp784 = $tmp783->methods[1];
frost$core$Object* $tmp786 = $tmp784($tmp777);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp786)));
org$frostlang$frostc$ClassDecl* $tmp787 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
*(&local28) = ((org$frostlang$frostc$ClassDecl*) $tmp786);
// line 293
org$frostlang$frostc$Compiler* $tmp788 = *(&local26);
org$frostlang$frostc$ClassDecl* $tmp789 = *(&local28);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp788, $tmp789);
frost$core$Frost$unref$frost$core$Object$Q($tmp786);
// unreffing REF($1226:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp790 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// unreffing cl
*(&local28) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block124;
block126:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// unreffing REF($1215:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing REF($1211:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp769);
// unreffing REF($1200:frost.collections.Iterator.T)
frost$io$File* $tmp791 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
// unreffing s
*(&local27) = ((frost$io$File*) NULL);
goto block121;
block123:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// unreffing REF($1189:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 296
frost$collections$Array* $tmp792 = *(&local1);
ITable* $tmp793 = ((frost$collections$Iterable*) $tmp792)->$class->itable;
while ($tmp793->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp793 = $tmp793->next;
}
$fn795 $tmp794 = $tmp793->methods[0];
frost$collections$Iterator* $tmp796 = $tmp794(((frost$collections$Iterable*) $tmp792));
goto block127;
block127:;
ITable* $tmp797 = $tmp796->$class->itable;
while ($tmp797->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp797 = $tmp797->next;
}
$fn799 $tmp798 = $tmp797->methods[0];
frost$core$Bit $tmp800 = $tmp798($tmp796);
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block129; else goto block128;
block128:;
*(&local29) = ((frost$io$File*) NULL);
ITable* $tmp802 = $tmp796->$class->itable;
while ($tmp802->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp802 = $tmp802->next;
}
$fn804 $tmp803 = $tmp802->methods[1];
frost$core$Object* $tmp805 = $tmp803($tmp796);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp805)));
frost$io$File* $tmp806 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local29) = ((frost$io$File*) $tmp805);
// line 297
org$frostlang$frostc$Compiler* $tmp807 = *(&local26);
frost$io$File* $tmp808 = *(&local29);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp807, $tmp808);
frost$core$Frost$unref$frost$core$Object$Q($tmp805);
// unreffing REF($1281:frost.collections.Iterator.T)
frost$io$File* $tmp809 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing s
*(&local29) = ((frost$io$File*) NULL);
goto block127;
block129:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($1270:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 299
org$frostlang$frostc$Compiler* $tmp810 = *(&local26);
org$frostlang$frostc$Compiler$finish($tmp810);
// line 300
frost$threads$MessageQueue* $tmp811 = *(&local25);
frost$core$Int64 $tmp812 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp811);
*(&local21) = $tmp812;
// line 301
frost$core$Int64 $tmp813 = (frost$core$Int64) {0};
frost$core$Int64 $tmp814 = *(&local21);
frost$core$Bit $tmp815 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp816 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp813, $tmp814, $tmp815);
frost$core$Int64 $tmp817 = $tmp816.min;
*(&local30) = $tmp817;
frost$core$Int64 $tmp818 = $tmp816.max;
frost$core$Bit $tmp819 = $tmp816.inclusive;
bool $tmp820 = $tmp819.value;
frost$core$Int64 $tmp821 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp822 = frost$core$Int64$convert$R$frost$core$UInt64($tmp821);
if ($tmp820) goto block133; else goto block134;
block133:;
int64_t $tmp823 = $tmp817.value;
int64_t $tmp824 = $tmp818.value;
bool $tmp825 = $tmp823 <= $tmp824;
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825};
bool $tmp827 = $tmp826.value;
if ($tmp827) goto block130; else goto block131;
block134:;
int64_t $tmp828 = $tmp817.value;
int64_t $tmp829 = $tmp818.value;
bool $tmp830 = $tmp828 < $tmp829;
frost$core$Bit $tmp831 = (frost$core$Bit) {$tmp830};
bool $tmp832 = $tmp831.value;
if ($tmp832) goto block130; else goto block131;
block130:;
// line 302
frost$threads$MessageQueue* $tmp833 = *(&local25);
frost$core$Immutable* $tmp834 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp833);
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp834)));
org$frostlang$frostc$Compiler$ErrorMsg* $tmp835 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) $tmp834);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing REF($1341:frost.threads.MessageQueue.T)
// line 303
org$frostlang$frostc$Compiler$ErrorMsg* $tmp836 = *(&local31);
frost$io$File** $tmp837 = &$tmp836->file;
frost$io$File* $tmp838 = *$tmp837;
frost$core$String* $tmp839 = frost$io$File$get_name$R$frost$core$String($tmp838);
frost$core$String* $tmp840 = frost$core$String$convert$R$frost$core$String($tmp839);
frost$core$String* $tmp841 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp840, &$s842);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp843 = *(&local31);
org$frostlang$frostc$Position* $tmp844 = &$tmp843->position;
org$frostlang$frostc$Position $tmp845 = *$tmp844;
org$frostlang$frostc$Position$wrapper* $tmp846;
$tmp846 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp846->value = $tmp845;
frost$core$String* $tmp847 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp841, ((frost$core$Object*) $tmp846));
frost$core$String* $tmp848 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp847, &$s849);
org$frostlang$frostc$Compiler$ErrorMsg* $tmp850 = *(&local31);
frost$core$String** $tmp851 = &$tmp850->message;
frost$core$String* $tmp852 = *$tmp851;
frost$core$String* $tmp853 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp848, $tmp852);
frost$core$String* $tmp854 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp853, &$s855);
frost$io$Console$printLine$frost$core$String($tmp854);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
// unreffing REF($1370:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
// unreffing REF($1369:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp848));
// unreffing REF($1365:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
// unreffing REF($1364:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
// unreffing REF($1363:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp841));
// unreffing REF($1359:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp840));
// unreffing REF($1358:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp839));
// unreffing REF($1357:frost.core.String)
org$frostlang$frostc$Compiler$ErrorMsg* $tmp856 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp856));
// unreffing error
*(&local31) = ((org$frostlang$frostc$Compiler$ErrorMsg*) NULL);
goto block132;
block132:;
frost$core$Int64 $tmp857 = *(&local30);
int64_t $tmp858 = $tmp818.value;
int64_t $tmp859 = $tmp857.value;
int64_t $tmp860 = $tmp858 - $tmp859;
frost$core$Int64 $tmp861 = (frost$core$Int64) {$tmp860};
frost$core$UInt64 $tmp862 = frost$core$Int64$convert$R$frost$core$UInt64($tmp861);
if ($tmp820) goto block136; else goto block137;
block136:;
uint64_t $tmp863 = $tmp862.value;
uint64_t $tmp864 = $tmp822.value;
bool $tmp865 = $tmp863 >= $tmp864;
frost$core$Bit $tmp866 = (frost$core$Bit) {$tmp865};
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block135; else goto block131;
block137:;
uint64_t $tmp868 = $tmp862.value;
uint64_t $tmp869 = $tmp822.value;
bool $tmp870 = $tmp868 > $tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block135; else goto block131;
block135:;
int64_t $tmp873 = $tmp857.value;
int64_t $tmp874 = $tmp821.value;
int64_t $tmp875 = $tmp873 + $tmp874;
frost$core$Int64 $tmp876 = (frost$core$Int64) {$tmp875};
*(&local30) = $tmp876;
goto block130;
block131:;
org$frostlang$frostc$Compiler* $tmp877 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp877));
// unreffing compiler
*(&local26) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp878 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp878));
// unreffing errorQueue
*(&local25) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp879 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp879));
// unreffing settings
*(&local24) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp880 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp880));
// unreffing cg
*(&local22) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 306
frost$core$Int64 $tmp881 = *(&local21);
frost$core$Int64 $tmp882 = (frost$core$Int64) {0};
frost$core$Bit $tmp883 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp881, $tmp882);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block138; else goto block140;
block138:;
// line 307
org$frostlang$frostc$Main$Format$nullable $tmp885 = *(&local6);
frost$core$Bit $tmp886 = frost$core$Bit$init$builtin_bit($tmp885.nonnull);
bool $tmp887 = $tmp886.value;
if ($tmp887) goto block141; else goto block142;
block142:;
frost$core$Int64 $tmp888 = (frost$core$Int64) {307};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s889, $tmp888, &$s890);
abort(); // unreachable
block141:;
frost$core$Int64 $tmp891 = ((org$frostlang$frostc$Main$Format) $tmp885.value).$rawValue;
frost$core$Int64 $tmp892 = (frost$core$Int64) {1};
frost$core$Bit $tmp893 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp891, $tmp892);
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block144; else goto block145;
block144:;
// line 309
frost$io$File* $tmp895 = *(&local3);
frost$core$Bit $tmp896 = frost$core$Bit$init$builtin_bit($tmp895 != NULL);
bool $tmp897 = $tmp896.value;
if ($tmp897) goto block146; else goto block147;
block147:;
frost$core$Int64 $tmp898 = (frost$core$Int64) {309};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s899, $tmp898, &$s900);
abort(); // unreachable
block146:;
frost$io$File* $tmp901 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp895, &$s902);
frost$io$File* $tmp903 = *(&local3);
frost$core$Bit $tmp904 = frost$core$Bit$init$builtin_bit($tmp903 != NULL);
bool $tmp905 = $tmp904.value;
if ($tmp905) goto block148; else goto block149;
block149:;
frost$core$Int64 $tmp906 = (frost$core$Int64) {309};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s907, $tmp906, &$s908);
abort(); // unreachable
block148:;
frost$core$Bit $tmp909 = *(&local8);
frost$io$File* $tmp910 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp901, $tmp903, $tmp909);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp910));
// unreffing REF($1489:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing REF($1478:frost.io.File)
goto block143;
block145:;
frost$core$Int64 $tmp911 = (frost$core$Int64) {2};
frost$core$Bit $tmp912 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp891, $tmp911);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block150; else goto block143;
block150:;
// line 312
frost$io$File* $tmp914 = *(&local3);
frost$core$Bit $tmp915 = frost$core$Bit$init$builtin_bit($tmp914 != NULL);
bool $tmp916 = $tmp915.value;
if ($tmp916) goto block151; else goto block152;
block152:;
frost$core$Int64 $tmp917 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s918, $tmp917, &$s919);
abort(); // unreachable
block151:;
frost$io$File* $tmp920 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp914, &$s921);
frost$io$File* $tmp922 = *(&local3);
frost$core$Bit $tmp923 = frost$core$Bit$init$builtin_bit($tmp922 != NULL);
bool $tmp924 = $tmp923.value;
if ($tmp924) goto block153; else goto block154;
block154:;
frost$core$Int64 $tmp925 = (frost$core$Int64) {312};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s926, $tmp925, &$s927);
abort(); // unreachable
block153:;
frost$core$Bit $tmp928 = *(&local8);
frost$io$File* $tmp929 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp920, $tmp922, $tmp928);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp929));
// unreffing REF($1522:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp920));
// unreffing REF($1511:frost.io.File)
goto block143;
block143:;
goto block139;
block140:;
// line 1
// line 317
frost$core$Int64 $tmp930 = *(&local21);
frost$core$Int64 $tmp931 = (frost$core$Int64) {1};
frost$core$Bit $tmp932 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp930, $tmp931);
bool $tmp933 = $tmp932.value;
if ($tmp933) goto block155; else goto block157;
block155:;
// line 318
frost$io$Console$printLine$frost$core$String(&$s934);
goto block156;
block157:;
// line 1
// line 321
frost$core$Int64 $tmp935 = *(&local21);
frost$core$String* $tmp936 = frost$core$Int64$convert$R$frost$core$String($tmp935);
frost$core$String* $tmp937 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp936, &$s938);
frost$io$Console$printLine$frost$core$String($tmp937);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp937));
// unreffing REF($1545:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp936));
// unreffing REF($1544:frost.core.String)
goto block156;
block156:;
// line 323
frost$core$UInt8 $tmp939 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp939);
goto block139;
block139:;
frost$io$File* $tmp940 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp940));
// unreffing llvmDir
*(&local19) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp941 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp941));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp942 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp942));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp943 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp943));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp944 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp944));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp945 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp945));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp946 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp946));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 329
frost$core$Bit $tmp947 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s948);
return $tmp947;

}
void frostMain(frost$collections$ListView* param0) {

// line 334
org$frostlang$frostc$Main* $tmp949 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp949);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp949, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp949));
// unreffing REF($1:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp950 = &param0->clang;
frost$io$File* $tmp951 = *$tmp950;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp951));
frost$io$File** $tmp952 = &param0->frostHome;
frost$io$File* $tmp953 = *$tmp952;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp953));
return;

}

