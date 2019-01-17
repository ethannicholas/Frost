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
#include "org/frostlang/frostc/Compiler/Error.h"
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
typedef void (*$fn48)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn59)(frost$io$InputStream*);
typedef void (*$fn62)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn107)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn111)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn116)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn183)(frost$io$InputStream*);
typedef void (*$fn186)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn197)(frost$io$InputStream*);
typedef void (*$fn200)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn223)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn226)(frost$io$OutputStream*);
typedef void (*$fn228)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn231)(frost$io$OutputStream*);
typedef void (*$fn233)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn236)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn256)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn262)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Int64 (*$fn276)(frost$io$InputStream*, frost$io$OutputStream*);
typedef void (*$fn289)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn295)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn316)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn344)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn353)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn381)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn393)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn398)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn440)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn450)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn458)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn479)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn493)(frost$collections$CollectionView*);
typedef void (*$fn500)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn514)(frost$collections$CollectionView*);
typedef void (*$fn552)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn575)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn580)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn585)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn601)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn626)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef void (*$fn639)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn715)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn719)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn724)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn732)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn736)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn741)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn751)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn755)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn760)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s68 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s91 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s128 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s150 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s157 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s164 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s178 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s179 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s193 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s205 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s206 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73", 89, 4893768726917301493, NULL };
static frost$core$String $s224 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s229 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s234 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s237 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s270 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s282 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s290 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s309 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s310 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s326 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s382 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s394 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s404 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s414 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s419 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s424 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s438 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s452 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s464 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s501 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s524 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s531 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s541 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s547 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s549 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s553 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s566 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s567 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s581 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s586 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e", 125, -2732336411638242658, NULL };
static frost$core$String $s607 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s618 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s624 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -103656499491929097, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s646 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s647 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s667 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s678 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s679 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s689 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s690 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s695 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s798 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s805 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s845 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s846 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 103, 8893765444946102765, NULL };
static frost$core$String $s855 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s856 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s858 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s863 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s874 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s875 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s877 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s882 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s883 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x46\x69\x6c\x65", 65, 4091840456190870439, NULL };
static frost$core$String $s890 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s894 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s904 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
$tmp47($tmp35, $tmp46);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($89:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($76:frost.io.OutputStream)
// line 73
frost$io$OutputStream* $tmp49 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp50 = *(&local1);
frost$core$Bit $tmp51 = frost$core$Bit$init$builtin_bit($tmp50 != NULL);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {73};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block5:;
frost$io$InputStream** $tmp56 = &$tmp50->error;
frost$io$InputStream* $tmp57 = *$tmp56;
$fn59 $tmp58 = ($fn59) $tmp57->$class->vtable[14];
frost$core$String* $tmp60 = $tmp58($tmp57);
$fn62 $tmp61 = ($fn62) $tmp49->$class->vtable[17];
$tmp61($tmp49, $tmp60);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($112:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing REF($99:frost.io.OutputStream)
// line 74
frost$core$System$Process* $tmp63 = *(&local1);
frost$core$Bit $tmp64 = frost$core$Bit$init$builtin_bit($tmp63 != NULL);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp66 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s67, $tmp66, &$s68);
abort(); // unreachable
block7:;
frost$core$Int64 $tmp69;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp69, $tmp63);
*(&local2) = $tmp69;
// line 75
frost$core$Bit $tmp70 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block9; else goto block10;
block9:;
// line 76
frost$core$Error* $tmp72 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing REF($138:frost.core.Error?)
goto block10;
block10:;
// line 78
frost$core$Int64 $tmp73 = *(&local2);
frost$core$Int64 $tmp74 = (frost$core$Int64) {0};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 != $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block11; else goto block12;
block11:;
// line 79
frost$core$UInt8 $tmp80 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp80);
goto block12;
block12:;
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp81 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing p
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
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
frost$collections$Array* $tmp83 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp83);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$collections$Array* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 86
frost$collections$Array* $tmp85 = *(&local0);
frost$core$String** $tmp86 = &param1->path;
frost$core$String* $tmp87 = *$tmp86;
frost$collections$Array$add$frost$collections$Array$T($tmp85, ((frost$core$Object*) $tmp87));
// line 87
frost$collections$Array* $tmp88 = *(&local0);
frost$core$String* $tmp89 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp90 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s91, $tmp89);
frost$core$String* $tmp92 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp90, &$s93);
frost$collections$Array$add$frost$collections$Array$T($tmp88, ((frost$core$Object*) $tmp92));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing REF($24:frost.core.String)
// line 88
frost$collections$Array* $tmp94 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp94, ((frost$core$Object*) &$s95));
// line 89
frost$collections$Array* $tmp96 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp96, ((frost$core$Object*) &$s97));
// line 90
frost$collections$Array* $tmp98 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp98, ((frost$core$Object*) &$s99));
// line 91
frost$core$String* $tmp100 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp101 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp100, &$s102);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
frost$collections$Array* $tmp103 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local1) = $tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// unreffing REF($55:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($54:frost.core.String)
// line 92
frost$collections$Array* $tmp104 = *(&local1);
ITable* $tmp105 = ((frost$collections$Iterable*) $tmp104)->$class->itable;
while ($tmp105->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp105 = $tmp105->next;
}
$fn107 $tmp106 = $tmp105->methods[0];
frost$collections$Iterator* $tmp108 = $tmp106(((frost$collections$Iterable*) $tmp104));
goto block1;
block1:;
ITable* $tmp109 = $tmp108->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Bit $tmp112 = $tmp110($tmp108);
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp114 = $tmp108->$class->itable;
while ($tmp114->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[1];
frost$core$Object* $tmp117 = $tmp115($tmp108);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp117)));
frost$core$String* $tmp118 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local2) = ((frost$core$String*) $tmp117);
// line 93
frost$io$File* $tmp119 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp120 = *(&local2);
frost$io$File$init$frost$core$String($tmp119, $tmp120);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
frost$io$File* $tmp121 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local3) = $tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// unreffing REF($94:frost.io.File)
// line 94
frost$collections$Array* $tmp122 = *(&local0);
frost$io$File* $tmp123 = *(&local3);
frost$io$File* $tmp124 = frost$io$File$get_parent$R$frost$io$File$Q($tmp123);
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124 != NULL);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp127 = (frost$core$Int64) {94};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s128, $tmp127, &$s129);
abort(); // unreachable
block4:;
frost$core$String* $tmp130 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s131, ((frost$core$Object*) $tmp124));
frost$collections$Array$add$frost$collections$Array$T($tmp122, ((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing REF($121:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($111:frost.io.File?)
// line 95
frost$io$File* $tmp132 = *(&local3);
frost$core$String* $tmp133 = frost$io$File$get_simpleName$R$frost$core$String($tmp132);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$String* $tmp134 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local4) = $tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing REF($132:frost.core.String)
// line 96
frost$core$String* $tmp135 = *(&local4);
frost$core$Bit $tmp136 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp135, &$s137);
bool $tmp138 = $tmp136.value;
if ($tmp138) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp139 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s140, $tmp139);
abort(); // unreachable
block6:;
// line 97
frost$core$String* $tmp141 = *(&local4);
frost$core$Int64 $tmp142 = (frost$core$Int64) {3};
frost$core$Bit $tmp143 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp144 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp142, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp143);
frost$core$String* $tmp145 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp141, $tmp144);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$core$String* $tmp146 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local4) = $tmp145;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// unreffing REF($157:frost.core.String)
// line 98
frost$collections$Array* $tmp147 = *(&local0);
frost$core$String* $tmp148 = *(&local4);
frost$core$String* $tmp149 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s150, $tmp148);
frost$collections$Array$add$frost$collections$Array$T($tmp147, ((frost$core$Object*) $tmp149));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
// unreffing REF($171:frost.core.String)
frost$core$String* $tmp151 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing simpleName
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp152 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing libFile
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
// unreffing REF($85:frost.collections.Iterator.T)
frost$core$String* $tmp153 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing lib
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($74:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 100
frost$collections$Array* $tmp154 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp154, ((frost$core$Object*) &$s155));
// line 101
frost$collections$Array* $tmp156 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp156, ((frost$core$Object*) &$s157));
// line 102
frost$core$Bit* $tmp158 = &param0->debug;
frost$core$Bit $tmp159 = *$tmp158;
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block8; else goto block9;
block8:;
// line 103
frost$collections$Array* $tmp161 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp161, ((frost$core$Object*) &$s162));
goto block9;
block9:;
// line 105
frost$collections$Array* $tmp163 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp163, ((frost$core$Object*) &$s164));
// line 106
frost$collections$Array* $tmp165 = *(&local0);
frost$core$String** $tmp166 = &param2->path;
frost$core$String* $tmp167 = *$tmp166;
frost$collections$Array$add$frost$collections$Array$T($tmp165, ((frost$core$Object*) $tmp167));
// line 107
frost$io$File** $tmp168 = &param0->clang;
frost$io$File* $tmp169 = *$tmp168;
frost$collections$Array* $tmp170 = *(&local0);
frost$core$System$Process* $tmp171 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q($tmp169, ((frost$collections$ListView*) $tmp170));
*(&local5) = ((frost$core$System$Process*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
frost$core$System$Process* $tmp172 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
*(&local5) = $tmp171;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// unreffing REF($237:frost.core.System.Process?)
// line 108
frost$io$OutputStream* $tmp173 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp174 = *(&local5);
frost$core$Bit $tmp175 = frost$core$Bit$init$builtin_bit($tmp174 != NULL);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp177 = (frost$core$Int64) {108};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s178, $tmp177, &$s179);
abort(); // unreachable
block10:;
frost$io$InputStream** $tmp180 = &$tmp174->output;
frost$io$InputStream* $tmp181 = *$tmp180;
$fn183 $tmp182 = ($fn183) $tmp181->$class->vtable[14];
frost$core$String* $tmp184 = $tmp182($tmp181);
$fn186 $tmp185 = ($fn186) $tmp173->$class->vtable[17];
$tmp185($tmp173, $tmp184);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing REF($262:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
// unreffing REF($249:frost.io.OutputStream)
// line 109
frost$io$OutputStream* $tmp187 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp188 = *(&local5);
frost$core$Bit $tmp189 = frost$core$Bit$init$builtin_bit($tmp188 != NULL);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block12; else goto block13;
block13:;
frost$core$Int64 $tmp191 = (frost$core$Int64) {109};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s192, $tmp191, &$s193);
abort(); // unreachable
block12:;
frost$io$InputStream** $tmp194 = &$tmp188->error;
frost$io$InputStream* $tmp195 = *$tmp194;
$fn197 $tmp196 = ($fn197) $tmp195->$class->vtable[14];
frost$core$String* $tmp198 = $tmp196($tmp195);
$fn200 $tmp199 = ($fn200) $tmp187->$class->vtable[17];
$tmp199($tmp187, $tmp198);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// unreffing REF($285:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
// unreffing REF($272:frost.io.OutputStream)
// line 110
frost$core$System$Process* $tmp201 = *(&local5);
frost$core$Bit $tmp202 = frost$core$Bit$init$builtin_bit($tmp201 != NULL);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block14; else goto block15;
block15:;
frost$core$Int64 $tmp204 = (frost$core$Int64) {110};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s205, $tmp204, &$s206);
abort(); // unreachable
block14:;
frost$core$Int64 $tmp207;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp207, $tmp201);
*(&local6) = $tmp207;
// line 111
frost$core$Bit $tmp208 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp209 = $tmp208.value;
if ($tmp209) goto block16; else goto block17;
block16:;
// line 112
frost$core$Error* $tmp210 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
// unreffing REF($311:frost.core.Error?)
goto block17;
block17:;
// line 114
frost$core$Int64 $tmp211 = *(&local6);
frost$core$Int64 $tmp212 = (frost$core$Int64) {0};
int64_t $tmp213 = $tmp211.value;
int64_t $tmp214 = $tmp212.value;
bool $tmp215 = $tmp213 != $tmp214;
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block18; else goto block19;
block18:;
// line 115
frost$core$UInt8 $tmp218 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp218);
goto block19;
block19:;
// line 117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp219 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
// unreffing p
*(&local5) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp220 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp220));
// unreffing icuLibs
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp221 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

// line 121
$fn223 $tmp222 = ($fn223) param1->$class->vtable[19];
$tmp222(param1, &$s224);
// line 122
$fn226 $tmp225 = ($fn226) param1->$class->vtable[21];
$tmp225(param1);
// line 123
$fn228 $tmp227 = ($fn228) param1->$class->vtable[19];
$tmp227(param1, &$s229);
// line 124
$fn231 $tmp230 = ($fn231) param1->$class->vtable[21];
$tmp230(param1);
// line 125
$fn233 $tmp232 = ($fn233) param1->$class->vtable[19];
$tmp232(param1, &$s234);
// line 126
$fn236 $tmp235 = ($fn236) param1->$class->vtable[19];
$tmp235(param1, &$s237);
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
frost$io$File* local11 = NULL;
frost$core$String* local12 = NULL;
frost$core$Bit local13;
frost$core$String* local14 = NULL;
frost$core$Bit local15;
frost$core$String* local16 = NULL;
frost$io$File* local17 = NULL;
frost$io$File* local18 = NULL;
frost$core$String* local19 = NULL;
frost$core$Int64 local20;
org$frostlang$frostc$CodeGenerator* local21 = NULL;
org$frostlang$frostc$Compiler$Settings* local22 = NULL;
frost$threads$MessageQueue* local23 = NULL;
org$frostlang$frostc$Compiler* local24 = NULL;
frost$io$File* local25 = NULL;
org$frostlang$frostc$ClassDecl* local26 = NULL;
frost$io$File* local27 = NULL;
frost$core$Int64 local28;
org$frostlang$frostc$Compiler$Error* local29 = NULL;
// line 130
org$frostlang$frostc$Main$Arguments* $tmp238 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp238, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
org$frostlang$frostc$Main$Arguments* $tmp239 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
*(&local0) = $tmp238;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp238));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 131
frost$collections$Array* $tmp240 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp240);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
frost$collections$Array* $tmp241 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp241));
*(&local1) = $tmp240;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp240));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 132
frost$collections$Array* $tmp242 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp242);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
frost$collections$Array* $tmp243 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
*(&local2) = $tmp242;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp242));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 133
frost$collections$Array* $tmp244 = *(&local2);
frost$io$File** $tmp245 = &param0->frostHome;
frost$io$File* $tmp246 = *$tmp245;
frost$collections$Array$add$frost$collections$Array$T($tmp244, ((frost$core$Object*) $tmp246));
// line 134
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp247 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp247));
*(&local3) = ((frost$io$File*) NULL);
// line 135
frost$core$Int64 $tmp248 = (frost$core$Int64) {3};
*(&local4) = $tmp248;
// line 136
frost$core$Int64 $tmp249 = (frost$core$Int64) {3};
*(&local5) = $tmp249;
// line 137
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 138
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp250 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp250));
*(&local7) = ((frost$core$String*) NULL);
// line 139
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp251;
// line 140
frost$io$OutputStream* $tmp252 = frost$io$Console$errorStream$R$frost$io$OutputStream();
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
frost$io$OutputStream* $tmp253 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp253));
*(&local9) = $tmp252;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp252));
// unreffing REF($76:frost.io.OutputStream)
// line 141
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp254 = *(&local0);
$fn256 $tmp255 = ($fn256) $tmp254->$class->vtable[2];
frost$core$Bit $tmp257 = $tmp255($tmp254);
frost$core$Bit $tmp258 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block2; else goto block3;
block2:;
// line 142
org$frostlang$frostc$Main$Arguments* $tmp260 = *(&local0);
$fn262 $tmp261 = ($fn262) $tmp260->$class->vtable[3];
frost$core$String* $tmp263 = $tmp261($tmp260);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
frost$core$String* $tmp264 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
*(&local10) = $tmp263;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($98:frost.core.String)
// line 143
frost$core$String* $tmp265 = *(&local10);
frost$core$Bit $tmp266 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s267);
bool $tmp268 = $tmp266.value;
if ($tmp268) goto block5; else goto block6;
block5:;
// line 145
frost$io$File* $tmp269 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp269, &$s270);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
frost$io$File* $tmp271 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp271));
*(&local11) = $tmp269;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp269));
// unreffing REF($115:frost.io.File)
// line 146
frost$io$InputStream* $tmp272 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp273 = *(&local11);
frost$io$OutputStream* $tmp274 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp273);
$fn276 $tmp275 = ($fn276) $tmp272->$class->vtable[17];
frost$core$Int64 $tmp277 = $tmp275($tmp272, $tmp274);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
// unreffing REF($130:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing REF($128:frost.io.InputStream)
// line 147
frost$collections$Array* $tmp278 = *(&local1);
frost$io$File* $tmp279 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp278, ((frost$core$Object*) $tmp279));
frost$io$File* $tmp280 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp280));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp281 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s282);
bool $tmp283 = $tmp281.value;
if ($tmp283) goto block7; else goto block8;
block7:;
// line 150
frost$io$File* $tmp284 = *(&local3);
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit($tmp284 != NULL);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block9; else goto block10;
block9:;
// line 151
frost$io$OutputStream* $tmp287 = *(&local9);
$fn289 $tmp288 = ($fn289) $tmp287->$class->vtable[19];
$tmp288($tmp287, &$s290);
// line 152
frost$core$UInt8 $tmp291 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp291);
goto block10;
block10:;
// line 154
frost$io$File* $tmp292 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp293 = *(&local0);
$fn295 $tmp294 = ($fn295) $tmp293->$class->vtable[4];
frost$core$String* $tmp296 = $tmp294($tmp293, &$s297);
frost$io$File$init$frost$core$String($tmp292, $tmp296);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
frost$io$File* $tmp298 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
*(&local3) = $tmp292;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp296));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing REF($169:frost.io.File)
// line 155
frost$io$File* $tmp299 = *(&local3);
frost$core$Bit $tmp300 = frost$core$Bit$init$builtin_bit($tmp299 != NULL);
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp302 = (frost$core$Int64) {155};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s303, $tmp302, &$s304);
abort(); // unreachable
block11:;
frost$io$File* $tmp305 = frost$io$File$get_parent$R$frost$io$File$Q($tmp299);
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit($tmp305 != NULL);
bool $tmp307 = $tmp306.value;
if ($tmp307) goto block13; else goto block14;
block14:;
frost$core$Int64 $tmp308 = (frost$core$Int64) {155};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s309, $tmp308, &$s310);
abort(); // unreachable
block13:;
frost$io$File$createDirectories($tmp305);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
// unreffing REF($197:frost.io.File?)
goto block4;
block8:;
frost$core$Bit $tmp311 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s312);
bool $tmp313 = $tmp311.value;
if ($tmp313) goto block15; else goto block16;
block15:;
// line 158
org$frostlang$frostc$Main$Arguments* $tmp314 = *(&local0);
$fn316 $tmp315 = ($fn316) $tmp314->$class->vtable[4];
frost$core$String* $tmp317 = $tmp315($tmp314, &$s318);
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
frost$core$String* $tmp319 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp319));
*(&local12) = $tmp317;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp317));
// unreffing REF($217:frost.core.String)
// line 159
frost$core$String* $tmp320 = *(&local12);
frost$core$Int64$nullable $tmp321 = frost$core$String$convert$R$frost$core$Int64$Q($tmp320);
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321.nonnull);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block17; else goto block18;
block18:;
frost$core$Int64 $tmp324 = (frost$core$Int64) {159};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block17:;
*(&local4) = ((frost$core$Int64) $tmp321.value);
// line 160
frost$core$Int64 $tmp327 = *(&local4);
frost$core$Int64 $tmp328 = (frost$core$Int64) {3};
int64_t $tmp329 = $tmp327.value;
int64_t $tmp330 = $tmp328.value;
bool $tmp331 = $tmp329 > $tmp330;
frost$core$Bit $tmp332 = (frost$core$Bit) {$tmp331};
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block21; else goto block22;
block21:;
*(&local13) = $tmp332;
goto block23;
block22:;
frost$core$Int64 $tmp334 = *(&local4);
frost$core$Int64 $tmp335 = (frost$core$Int64) {0};
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
bool $tmp338 = $tmp336 < $tmp337;
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
*(&local13) = $tmp339;
goto block23;
block23:;
frost$core$Bit $tmp340 = *(&local13);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block19; else goto block20;
block19:;
// line 161
frost$io$OutputStream* $tmp342 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn344 $tmp343 = ($fn344) $tmp342->$class->vtable[19];
$tmp343($tmp342, &$s345);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($263:frost.io.OutputStream)
// line 162
frost$core$UInt8 $tmp346 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp346);
goto block20;
block20:;
frost$core$String* $tmp347 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp347));
// unreffing level
*(&local12) = ((frost$core$String*) NULL);
goto block4;
block16:;
frost$core$Bit $tmp348 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s349);
bool $tmp350 = $tmp348.value;
if ($tmp350) goto block24; else goto block25;
block24:;
// line 166
org$frostlang$frostc$Main$Arguments* $tmp351 = *(&local0);
$fn353 $tmp352 = ($fn353) $tmp351->$class->vtable[4];
frost$core$String* $tmp354 = $tmp352($tmp351, &$s355);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
frost$core$String* $tmp356 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
*(&local14) = $tmp354;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp354));
// unreffing REF($285:frost.core.String)
// line 167
frost$core$String* $tmp357 = *(&local14);
frost$core$Int64$nullable $tmp358 = frost$core$String$convert$R$frost$core$Int64$Q($tmp357);
frost$core$Bit $tmp359 = frost$core$Bit$init$builtin_bit($tmp358.nonnull);
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp361 = (frost$core$Int64) {167};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s362, $tmp361, &$s363);
abort(); // unreachable
block26:;
*(&local5) = ((frost$core$Int64) $tmp358.value);
// line 168
frost$core$Int64 $tmp364 = *(&local5);
frost$core$Int64 $tmp365 = (frost$core$Int64) {3};
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 > $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block30; else goto block31;
block30:;
*(&local15) = $tmp369;
goto block32;
block31:;
frost$core$Int64 $tmp371 = *(&local5);
frost$core$Int64 $tmp372 = (frost$core$Int64) {0};
int64_t $tmp373 = $tmp371.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 < $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
*(&local15) = $tmp376;
goto block32;
block32:;
frost$core$Bit $tmp377 = *(&local15);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block28; else goto block29;
block28:;
// line 169
frost$io$OutputStream* $tmp379 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn381 $tmp380 = ($fn381) $tmp379->$class->vtable[19];
$tmp380($tmp379, &$s382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp379));
// unreffing REF($331:frost.io.OutputStream)
// line 170
frost$core$UInt8 $tmp383 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp383);
goto block29;
block29:;
frost$core$String* $tmp384 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
// unreffing level
*(&local14) = ((frost$core$String*) NULL);
goto block4;
block25:;
frost$core$Bit $tmp385 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s386);
bool $tmp387 = $tmp385.value;
if ($tmp387) goto block33; else goto block34;
block33:;
// line 174
org$frostlang$frostc$Main$Format$nullable $tmp388 = *(&local6);
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit($tmp388.nonnull);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block35; else goto block36;
block35:;
// line 175
frost$io$OutputStream* $tmp391 = *(&local9);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[19];
$tmp392($tmp391, &$s394);
// line 176
frost$core$UInt8 $tmp395 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp395);
goto block36;
block36:;
// line 178
org$frostlang$frostc$Main$Arguments* $tmp396 = *(&local0);
$fn398 $tmp397 = ($fn398) $tmp396->$class->vtable[4];
frost$core$String* $tmp399 = $tmp397($tmp396, &$s400);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
frost$core$String* $tmp401 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp401));
*(&local16) = $tmp399;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp399));
// unreffing REF($367:frost.core.String)
// line 179
frost$core$String* $tmp402 = *(&local16);
frost$core$Bit $tmp403 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp402, &$s404);
bool $tmp405 = $tmp403.value;
if ($tmp405) goto block38; else goto block39;
block38:;
// line 180
frost$core$Int64 $tmp406 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp407 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp406);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp407, true });
goto block37;
block39:;
frost$core$Bit $tmp408 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp402, &$s409);
bool $tmp410 = $tmp408.value;
if ($tmp410) goto block40; else goto block41;
block40:;
// line 181
frost$core$Int64 $tmp411 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp412 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp411);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp412, true });
goto block37;
block41:;
frost$core$Bit $tmp413 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp402, &$s414);
bool $tmp415 = $tmp413.value;
if ($tmp415) goto block42; else goto block43;
block42:;
// line 182
frost$core$Int64 $tmp416 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp417 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp416);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp417, true });
goto block37;
block43:;
frost$core$Bit $tmp418 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp402, &$s419);
bool $tmp420 = $tmp418.value;
if ($tmp420) goto block44; else goto block45;
block44:;
// line 183
frost$core$Int64 $tmp421 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp422 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp421);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp422, true });
goto block37;
block45:;
frost$core$Bit $tmp423 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp402, &$s424);
bool $tmp425 = $tmp423.value;
if ($tmp425) goto block46; else goto block47;
block46:;
// line 184
frost$core$Int64 $tmp426 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp427 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp426);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp427, true });
goto block37;
block47:;
frost$core$Bit $tmp428 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp402, &$s429);
bool $tmp430 = $tmp428.value;
if ($tmp430) goto block48; else goto block49;
block48:;
// line 185
frost$core$Int64 $tmp431 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp432 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp431);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp432, true });
goto block37;
block49:;
// line 187
frost$io$OutputStream* $tmp433 = *(&local9);
frost$core$String* $tmp434 = *(&local16);
frost$core$String* $tmp435 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s436, $tmp434);
frost$core$String* $tmp437 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp435, &$s438);
$fn440 $tmp439 = ($fn440) $tmp433->$class->vtable[19];
$tmp439($tmp433, $tmp437);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
// unreffing REF($438:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp435));
// unreffing REF($437:frost.core.String)
// line 188
frost$core$UInt8 $tmp441 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp441);
goto block37;
block37:;
frost$core$String* $tmp442 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
// unreffing f
*(&local16) = ((frost$core$String*) NULL);
goto block4;
block34:;
frost$core$Bit $tmp443 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s444);
bool $tmp445 = $tmp443.value;
if ($tmp445) goto block50; else goto block51;
block50:;
// line 193
frost$collections$Array* $tmp446 = *(&local2);
frost$io$File* $tmp447 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp448 = *(&local0);
$fn450 $tmp449 = ($fn450) $tmp448->$class->vtable[4];
frost$core$String* $tmp451 = $tmp449($tmp448, &$s452);
frost$io$File$init$frost$core$String($tmp447, $tmp451);
frost$collections$Array$add$frost$collections$Array$T($tmp446, ((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
// unreffing REF($466:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
// unreffing REF($463:frost.io.File)
goto block4;
block51:;
frost$core$Bit $tmp453 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp265, &$s454);
bool $tmp455 = $tmp453.value;
if ($tmp455) goto block52; else goto block53;
block52:;
// line 196
org$frostlang$frostc$Main$Arguments* $tmp456 = *(&local0);
$fn458 $tmp457 = ($fn458) $tmp456->$class->vtable[4];
frost$core$String* $tmp459 = $tmp457($tmp456, &$s460);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
frost$core$String* $tmp461 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local7) = $tmp459;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
// unreffing REF($483:frost.core.String)
goto block4;
block53:;
// line 199
frost$core$String* $tmp462 = *(&local10);
frost$core$Bit $tmp463 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp462, &$s464);
bool $tmp465 = $tmp463.value;
if ($tmp465) goto block54; else goto block56;
block54:;
// line 200
frost$io$File* $tmp466 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp467 = *(&local10);
frost$io$File$init$frost$core$String($tmp466, $tmp467);
*(&local17) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
frost$io$File* $tmp468 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local17) = $tmp466;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
// unreffing REF($501:frost.io.File)
// line 202
frost$collections$Array* $tmp469 = *(&local1);
frost$io$File* $tmp470 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp469, ((frost$core$Object*) $tmp470));
frost$io$File* $tmp471 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp471));
// unreffing f
*(&local17) = ((frost$io$File*) NULL);
goto block55;
block56:;
// line 1
// line 206
frost$io$OutputStream* $tmp472 = *(&local9);
frost$core$String* $tmp473 = *(&local10);
frost$core$String* $tmp474 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s475, $tmp473);
frost$core$String* $tmp476 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp474, &$s477);
$fn479 $tmp478 = ($fn479) $tmp472->$class->vtable[19];
$tmp478($tmp472, $tmp476);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
// unreffing REF($531:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
// unreffing REF($530:frost.core.String)
// line 207
frost$core$UInt8 $tmp480 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp480);
goto block55;
block55:;
goto block4;
block4:;
frost$core$String* $tmp481 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
// unreffing a
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 212
frost$io$File* $tmp482 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp483 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp482, $tmp483);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$io$File* $tmp484 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
*(&local18) = $tmp482;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// unreffing REF($553:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($552:frost.io.File)
// line 213
frost$io$File* $tmp485 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp485, &$s486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$io$File** $tmp487 = &param0->clang;
frost$io$File* $tmp488 = *$tmp487;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
frost$io$File** $tmp489 = &param0->clang;
*$tmp489 = $tmp485;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
// unreffing REF($569:frost.io.File)
// line 214
frost$collections$Array* $tmp490 = *(&local1);
ITable* $tmp491 = ((frost$collections$CollectionView*) $tmp490)->$class->itable;
while ($tmp491->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp491 = $tmp491->next;
}
$fn493 $tmp492 = $tmp491->methods[0];
frost$core$Int64 $tmp494 = $tmp492(((frost$collections$CollectionView*) $tmp490));
frost$core$Int64 $tmp495 = (frost$core$Int64) {0};
frost$core$Bit $tmp496 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp494, $tmp495);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block57; else goto block58;
block57:;
// line 215
frost$io$OutputStream* $tmp498 = *(&local9);
$fn500 $tmp499 = ($fn500) $tmp498->$class->vtable[19];
$tmp499($tmp498, &$s501);
// line 216
frost$core$UInt8 $tmp502 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp502);
goto block58;
block58:;
// line 218
org$frostlang$frostc$Main$Format$nullable $tmp503 = *(&local6);
frost$core$Bit $tmp504 = frost$core$Bit$init$builtin_bit(!$tmp503.nonnull);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block59; else goto block60;
block59:;
// line 219
frost$core$Int64 $tmp506 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp507 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp506);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp507, true });
goto block60;
block60:;
// line 221
frost$io$File* $tmp508 = *(&local3);
frost$core$Bit $tmp509 = frost$core$Bit$init$builtin_bit($tmp508 == NULL);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block61; else goto block62;
block61:;
// line 222
frost$collections$Array* $tmp511 = *(&local1);
ITable* $tmp512 = ((frost$collections$CollectionView*) $tmp511)->$class->itable;
while ($tmp512->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp512 = $tmp512->next;
}
$fn514 $tmp513 = $tmp512->methods[0];
frost$core$Int64 $tmp515 = $tmp513(((frost$collections$CollectionView*) $tmp511));
frost$core$Int64 $tmp516 = (frost$core$Int64) {1};
frost$core$Bit $tmp517 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp515, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block63; else goto block65;
block63:;
// line 223
*(&local19) = ((frost$core$String*) NULL);
// line 224
org$frostlang$frostc$Main$Format$nullable $tmp519 = *(&local6);
frost$core$Bit $tmp520 = frost$core$Bit$init$builtin_bit($tmp519.nonnull);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block66; else goto block67;
block67:;
frost$core$Int64 $tmp522 = (frost$core$Int64) {224};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s523, $tmp522, &$s524);
abort(); // unreachable
block66:;
frost$core$Int64 $tmp525 = ((org$frostlang$frostc$Main$Format) $tmp519.value).$rawValue;
frost$core$Int64 $tmp526 = (frost$core$Int64) {1};
frost$core$Bit $tmp527 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp525, $tmp526);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block69; else goto block70;
block69:;
// line 225
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s529));
frost$core$String* $tmp530 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local19) = &$s531;
goto block68;
block70:;
frost$core$Int64 $tmp532 = (frost$core$Int64) {2};
frost$core$Bit $tmp533 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp525, $tmp532);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block71; else goto block72;
block71:;
// line 226
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s535));
frost$core$String* $tmp536 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local19) = &$s537;
goto block68;
block72:;
frost$core$Int64 $tmp538 = (frost$core$Int64) {0};
frost$core$Bit $tmp539 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp525, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block73; else goto block74;
block73:;
// line 227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s541));
frost$core$String* $tmp542 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
*(&local19) = &$s543;
goto block68;
block74:;
frost$core$Int64 $tmp544 = (frost$core$Int64) {5};
frost$core$Bit $tmp545 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp525, $tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block75; else goto block76;
block75:;
// line 228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s547));
frost$core$String* $tmp548 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
*(&local19) = &$s549;
goto block68;
block76:;
// line 230
frost$io$OutputStream* $tmp550 = *(&local9);
$fn552 $tmp551 = ($fn552) $tmp550->$class->vtable[19];
$tmp551($tmp550, &$s553);
// line 231
frost$core$UInt8 $tmp554 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp554);
goto block68;
block68:;
// line 234
frost$collections$Array* $tmp555 = *(&local1);
frost$core$Int64 $tmp556 = (frost$core$Int64) {0};
frost$core$Object* $tmp557 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp555, $tmp556);
frost$core$String* $tmp558 = *(&local19);
frost$io$File* $tmp559 = frost$io$File$withExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp557), $tmp558);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
frost$io$File* $tmp560 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local3) = $tmp559;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp559));
// unreffing REF($702:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp557);
// unreffing REF($699:frost.collections.Array.T)
frost$core$String* $tmp561 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
// unreffing extension
*(&local19) = ((frost$core$String*) NULL);
goto block64;
block65:;
// line 236
org$frostlang$frostc$Main$Format$nullable $tmp562 = *(&local6);
frost$core$Bit $tmp563 = frost$core$Bit$init$builtin_bit($tmp562.nonnull);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block79; else goto block80;
block80:;
frost$core$Int64 $tmp565 = (frost$core$Int64) {236};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s566, $tmp565, &$s567);
abort(); // unreachable
block79:;
frost$core$Equatable* $tmp568;
if ($tmp562.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp569;
    $tmp569 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp569->value = ((org$frostlang$frostc$Main$Format) $tmp562.value);
    $tmp568 = ((frost$core$Equatable*) $tmp569);
}
else {
    $tmp568 = NULL;
}
frost$core$Int64 $tmp570 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp571 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp570);
org$frostlang$frostc$Main$Format$wrapper* $tmp572;
$tmp572 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp572->value = $tmp571;
ITable* $tmp573 = $tmp568->$class->itable;
while ($tmp573->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp573 = $tmp573->next;
}
$fn575 $tmp574 = $tmp573->methods[0];
frost$core$Bit $tmp576 = $tmp574($tmp568, ((frost$core$Equatable*) $tmp572));
bool $tmp577 = $tmp576.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp572)));
// unreffing REF($735:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
// unreffing REF($731:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp577) goto block77; else goto block81;
block77:;
// line 237
frost$io$OutputStream* $tmp578 = *(&local9);
$fn580 $tmp579 = ($fn580) $tmp578->$class->vtable[19];
$tmp579($tmp578, &$s581);
// line 238
frost$core$UInt8 $tmp582 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp582);
goto block78;
block81:;
// line 1
// line 241
frost$io$OutputStream* $tmp583 = *(&local9);
$fn585 $tmp584 = ($fn585) $tmp583->$class->vtable[19];
$tmp584($tmp583, &$s586);
// line 243
frost$core$UInt8 $tmp587 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp587);
goto block78;
block78:;
goto block64;
block64:;
goto block62;
block62:;
// line 246
org$frostlang$frostc$Main$Format$nullable $tmp588 = *(&local6);
frost$core$Bit $tmp589 = frost$core$Bit$init$builtin_bit($tmp588.nonnull);
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block84; else goto block85;
block85:;
frost$core$Int64 $tmp591 = (frost$core$Int64) {246};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s592, $tmp591, &$s593);
abort(); // unreachable
block84:;
frost$core$Equatable* $tmp594;
if ($tmp588.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp595;
    $tmp595 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp595->value = ((org$frostlang$frostc$Main$Format) $tmp588.value);
    $tmp594 = ((frost$core$Equatable*) $tmp595);
}
else {
    $tmp594 = NULL;
}
frost$core$Int64 $tmp596 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp597 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp596);
org$frostlang$frostc$Main$Format$wrapper* $tmp598;
$tmp598 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp598->value = $tmp597;
ITable* $tmp599 = $tmp594->$class->itable;
while ($tmp599->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp599 = $tmp599->next;
}
$fn601 $tmp600 = $tmp599->methods[0];
frost$core$Bit $tmp602 = $tmp600($tmp594, ((frost$core$Equatable*) $tmp598));
bool $tmp603 = $tmp602.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp598)));
// unreffing REF($778:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// unreffing REF($774:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp603) goto block82; else goto block83;
block82:;
// line 247
frost$core$String* $tmp604 = *(&local7);
frost$core$Bit $tmp605 = frost$core$Bit$init$builtin_bit($tmp604 == NULL);
bool $tmp606 = $tmp605.value;
if ($tmp606) goto block86; else goto block87;
block86:;
// line 248
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s607));
frost$core$String* $tmp608 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
*(&local7) = &$s607;
goto block87;
block87:;
// line 250
org$frostlang$frostc$HTMLProcessor* $tmp609 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp609);
frost$collections$Array* $tmp610 = *(&local1);
frost$core$Int64 $tmp611 = (frost$core$Int64) {0};
frost$core$Object* $tmp612 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp610, $tmp611);
frost$io$File* $tmp613 = *(&local3);
frost$core$Bit $tmp614 = frost$core$Bit$init$builtin_bit($tmp613 != NULL);
bool $tmp615 = $tmp614.value;
if ($tmp615) goto block88; else goto block89;
block89:;
frost$core$Int64 $tmp616 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s617, $tmp616, &$s618);
abort(); // unreachable
block88:;
frost$core$String* $tmp619 = *(&local7);
frost$core$Bit $tmp620 = frost$core$Bit$init$builtin_bit($tmp619 != NULL);
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block90; else goto block91;
block91:;
frost$core$Int64 $tmp622 = (frost$core$Int64) {250};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s623, $tmp622, &$s624);
abort(); // unreachable
block90:;
$fn626 $tmp625 = ($fn626) $tmp609->$class->vtable[3];
$tmp625($tmp609, ((frost$io$File*) $tmp612), $tmp613, $tmp619);
frost$core$Frost$unref$frost$core$Object$Q($tmp612);
// unreffing REF($810:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing REF($805:org.frostlang.frostc.HTMLProcessor)
// line 251
frost$io$File* $tmp627 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing llvmDir
*(&local18) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp628 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp628));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp629 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp630 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp630));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp631 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp632 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp633 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block83:;
// line 253
frost$core$String* $tmp634 = *(&local7);
frost$core$Bit $tmp635 = frost$core$Bit$init$builtin_bit($tmp634 != NULL);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block92; else goto block93;
block92:;
// line 254
frost$io$OutputStream* $tmp637 = *(&local9);
$fn639 $tmp638 = ($fn639) $tmp637->$class->vtable[19];
$tmp638($tmp637, &$s640);
// line 255
frost$core$UInt8 $tmp641 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp641);
goto block93;
block93:;
// line 257
// line 1
// line 259
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 260
org$frostlang$frostc$Main$Format$nullable $tmp642 = *(&local6);
frost$core$Bit $tmp643 = frost$core$Bit$init$builtin_bit($tmp642.nonnull);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block94; else goto block95;
block95:;
frost$core$Int64 $tmp645 = (frost$core$Int64) {260};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s646, $tmp645, &$s647);
abort(); // unreachable
block94:;
frost$core$Int64 $tmp648 = ((org$frostlang$frostc$Main$Format) $tmp642.value).$rawValue;
frost$core$Int64 $tmp649 = (frost$core$Int64) {0};
frost$core$Bit $tmp650 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp648, $tmp649);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block97; else goto block98;
block98:;
frost$core$Int64 $tmp652 = (frost$core$Int64) {1};
frost$core$Bit $tmp653 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp648, $tmp652);
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block97; else goto block99;
block99:;
frost$core$Int64 $tmp655 = (frost$core$Int64) {2};
frost$core$Bit $tmp656 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp648, $tmp655);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block97; else goto block100;
block97:;
// line 262
org$frostlang$frostc$LLVMCodeGenerator* $tmp658 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp659 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp660 = *(&local3);
frost$core$Bit $tmp661 = frost$core$Bit$init$builtin_bit($tmp660 != NULL);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block101; else goto block102;
block102:;
frost$core$Int64 $tmp663 = (frost$core$Int64) {263};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s664, $tmp663, &$s665);
abort(); // unreachable
block101:;
frost$io$File* $tmp666 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp660, &$s667);
frost$io$OutputStream* $tmp668 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp666);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp658, $tmp659, $tmp668);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp658)));
org$frostlang$frostc$CodeGenerator* $tmp669 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp658);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
// unreffing REF($929:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp666));
// unreffing REF($928:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
// unreffing REF($918:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
// unreffing REF($917:org.frostlang.frostc.LLVMCodeGenerator)
goto block96;
block100:;
frost$core$Int64 $tmp670 = (frost$core$Int64) {3};
frost$core$Bit $tmp671 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp648, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block103; else goto block104;
block103:;
// line 266
org$frostlang$frostc$HCodeGenerator* $tmp673 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp674 = *(&local3);
frost$core$Bit $tmp675 = frost$core$Bit$init$builtin_bit($tmp674 != NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block105; else goto block106;
block106:;
frost$core$Int64 $tmp677 = (frost$core$Int64) {266};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s678, $tmp677, &$s679);
abort(); // unreachable
block105:;
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp673, $tmp674);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp673)));
org$frostlang$frostc$CodeGenerator* $tmp680 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp680));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp673);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
// unreffing REF($956:org.frostlang.frostc.HCodeGenerator)
goto block96;
block104:;
frost$core$Int64 $tmp681 = (frost$core$Int64) {4};
frost$core$Bit $tmp682 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp648, $tmp681);
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block107; else goto block108;
block107:;
// line 269
org$frostlang$frostc$CCodeGenerator* $tmp684 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp685 = *(&local3);
frost$core$Bit $tmp686 = frost$core$Bit$init$builtin_bit($tmp685 != NULL);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block109; else goto block110;
block110:;
frost$core$Int64 $tmp688 = (frost$core$Int64) {269};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s689, $tmp688, &$s690);
abort(); // unreachable
block109:;
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp684, $tmp685);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp684)));
org$frostlang$frostc$CodeGenerator* $tmp691 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp684);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp684));
// unreffing REF($983:org.frostlang.frostc.CCodeGenerator)
goto block96;
block108:;
// line 272
frost$core$Bit $tmp692 = frost$core$Bit$init$builtin_bit(false);
bool $tmp693 = $tmp692.value;
if ($tmp693) goto block111; else goto block112;
block112:;
frost$core$Int64 $tmp694 = (frost$core$Int64) {272};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s695, $tmp694);
abort(); // unreachable
block111:;
goto block96;
block96:;
// line 275
org$frostlang$frostc$Compiler$Settings* $tmp696 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp697 = &param0->frostHome;
frost$io$File* $tmp698 = *$tmp697;
frost$collections$Array* $tmp699 = *(&local2);
frost$core$Int64 $tmp700 = *(&local4);
frost$core$Int64 $tmp701 = *(&local5);
frost$core$Bit* $tmp702 = &param0->debug;
frost$core$Bit $tmp703 = *$tmp702;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp696, $tmp698, ((frost$collections$ListView*) $tmp699), $tmp700, $tmp701, $tmp703);
*(&local22) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
org$frostlang$frostc$Compiler$Settings* $tmp704 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
*(&local22) = $tmp696;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($1014:org.frostlang.frostc.Compiler.Settings)
// line 277
frost$threads$MessageQueue* $tmp705 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp705);
*(&local23) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
frost$threads$MessageQueue* $tmp706 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp706));
*(&local23) = $tmp705;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp705));
// unreffing REF($1035:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.Error>)
// line 278
org$frostlang$frostc$Compiler* $tmp707 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp708 = *(&local23);
org$frostlang$frostc$CodeGenerator* $tmp709 = *(&local21);
org$frostlang$frostc$Compiler$Settings* $tmp710 = *(&local22);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Error$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp707, $tmp708, $tmp709, $tmp710);
*(&local24) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
org$frostlang$frostc$Compiler* $tmp711 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local24) = $tmp707;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing REF($1049:org.frostlang.frostc.Compiler)
// line 279
frost$collections$Array* $tmp712 = *(&local1);
ITable* $tmp713 = ((frost$collections$Iterable*) $tmp712)->$class->itable;
while ($tmp713->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp713 = $tmp713->next;
}
$fn715 $tmp714 = $tmp713->methods[0];
frost$collections$Iterator* $tmp716 = $tmp714(((frost$collections$Iterable*) $tmp712));
goto block113;
block113:;
ITable* $tmp717 = $tmp716->$class->itable;
while ($tmp717->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp717 = $tmp717->next;
}
$fn719 $tmp718 = $tmp717->methods[0];
frost$core$Bit $tmp720 = $tmp718($tmp716);
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block115; else goto block114;
block114:;
*(&local25) = ((frost$io$File*) NULL);
ITable* $tmp722 = $tmp716->$class->itable;
while ($tmp722->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp722 = $tmp722->next;
}
$fn724 $tmp723 = $tmp722->methods[1];
frost$core$Object* $tmp725 = $tmp723($tmp716);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp725)));
frost$io$File* $tmp726 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
*(&local25) = ((frost$io$File*) $tmp725);
// line 280
org$frostlang$frostc$Compiler* $tmp727 = *(&local24);
frost$io$File* $tmp728 = *(&local25);
frost$collections$ListView* $tmp729 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp727, $tmp728);
ITable* $tmp730 = ((frost$collections$Iterable*) $tmp729)->$class->itable;
while ($tmp730->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp730 = $tmp730->next;
}
$fn732 $tmp731 = $tmp730->methods[0];
frost$collections$Iterator* $tmp733 = $tmp731(((frost$collections$Iterable*) $tmp729));
goto block116;
block116:;
ITable* $tmp734 = $tmp733->$class->itable;
while ($tmp734->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp734 = $tmp734->next;
}
$fn736 $tmp735 = $tmp734->methods[0];
frost$core$Bit $tmp737 = $tmp735($tmp733);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block118; else goto block117;
block117:;
*(&local26) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp739 = $tmp733->$class->itable;
while ($tmp739->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp739 = $tmp739->next;
}
$fn741 $tmp740 = $tmp739->methods[1];
frost$core$Object* $tmp742 = $tmp740($tmp733);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp742)));
org$frostlang$frostc$ClassDecl* $tmp743 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local26) = ((org$frostlang$frostc$ClassDecl*) $tmp742);
// line 281
org$frostlang$frostc$Compiler* $tmp744 = *(&local24);
org$frostlang$frostc$ClassDecl* $tmp745 = *(&local26);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp744, $tmp745);
frost$core$Frost$unref$frost$core$Object$Q($tmp742);
// unreffing REF($1106:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp746 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp746));
// unreffing cl
*(&local26) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block116;
block118:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing REF($1095:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
// unreffing REF($1091:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp725);
// unreffing REF($1080:frost.collections.Iterator.T)
frost$io$File* $tmp747 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing s
*(&local25) = ((frost$io$File*) NULL);
goto block113;
block115:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp716));
// unreffing REF($1069:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 284
frost$collections$Array* $tmp748 = *(&local1);
ITable* $tmp749 = ((frost$collections$Iterable*) $tmp748)->$class->itable;
while ($tmp749->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp749 = $tmp749->next;
}
$fn751 $tmp750 = $tmp749->methods[0];
frost$collections$Iterator* $tmp752 = $tmp750(((frost$collections$Iterable*) $tmp748));
goto block119;
block119:;
ITable* $tmp753 = $tmp752->$class->itable;
while ($tmp753->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp753 = $tmp753->next;
}
$fn755 $tmp754 = $tmp753->methods[0];
frost$core$Bit $tmp756 = $tmp754($tmp752);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block121; else goto block120;
block120:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp758 = $tmp752->$class->itable;
while ($tmp758->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[1];
frost$core$Object* $tmp761 = $tmp759($tmp752);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp761)));
frost$io$File* $tmp762 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local27) = ((frost$io$File*) $tmp761);
// line 285
org$frostlang$frostc$Compiler* $tmp763 = *(&local24);
frost$io$File* $tmp764 = *(&local27);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp763, $tmp764);
frost$core$Frost$unref$frost$core$Object$Q($tmp761);
// unreffing REF($1161:frost.collections.Iterator.T)
frost$io$File* $tmp765 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// unreffing s
*(&local27) = ((frost$io$File*) NULL);
goto block119;
block121:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
// unreffing REF($1150:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 287
org$frostlang$frostc$Compiler* $tmp766 = *(&local24);
org$frostlang$frostc$Compiler$finish($tmp766);
// line 288
frost$threads$MessageQueue* $tmp767 = *(&local23);
frost$core$Int64 $tmp768 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp767);
*(&local20) = $tmp768;
// line 289
frost$core$Int64 $tmp769 = (frost$core$Int64) {0};
frost$core$Int64 $tmp770 = *(&local20);
frost$core$Bit $tmp771 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp772 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp769, $tmp770, $tmp771);
frost$core$Int64 $tmp773 = $tmp772.min;
*(&local28) = $tmp773;
frost$core$Int64 $tmp774 = $tmp772.max;
frost$core$Bit $tmp775 = $tmp772.inclusive;
bool $tmp776 = $tmp775.value;
frost$core$Int64 $tmp777 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp778 = frost$core$Int64$convert$R$frost$core$UInt64($tmp777);
if ($tmp776) goto block125; else goto block126;
block125:;
int64_t $tmp779 = $tmp773.value;
int64_t $tmp780 = $tmp774.value;
bool $tmp781 = $tmp779 <= $tmp780;
frost$core$Bit $tmp782 = (frost$core$Bit) {$tmp781};
bool $tmp783 = $tmp782.value;
if ($tmp783) goto block122; else goto block123;
block126:;
int64_t $tmp784 = $tmp773.value;
int64_t $tmp785 = $tmp774.value;
bool $tmp786 = $tmp784 < $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block122; else goto block123;
block122:;
// line 290
frost$threads$MessageQueue* $tmp789 = *(&local23);
frost$core$Immutable* $tmp790 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp789);
*(&local29) = ((org$frostlang$frostc$Compiler$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Error*) $tmp790)));
org$frostlang$frostc$Compiler$Error* $tmp791 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp791));
*(&local29) = ((org$frostlang$frostc$Compiler$Error*) $tmp790);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp790));
// unreffing REF($1221:frost.threads.MessageQueue.T)
// line 291
org$frostlang$frostc$Compiler$Error* $tmp792 = *(&local29);
frost$io$File** $tmp793 = &$tmp792->file;
frost$io$File* $tmp794 = *$tmp793;
frost$core$String* $tmp795 = frost$io$File$get_name$R$frost$core$String($tmp794);
frost$core$String* $tmp796 = frost$core$String$convert$R$frost$core$String($tmp795);
frost$core$String* $tmp797 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp796, &$s798);
org$frostlang$frostc$Compiler$Error* $tmp799 = *(&local29);
org$frostlang$frostc$Position* $tmp800 = &$tmp799->position;
org$frostlang$frostc$Position $tmp801 = *$tmp800;
org$frostlang$frostc$Position$wrapper* $tmp802;
$tmp802 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp802->value = $tmp801;
frost$core$String* $tmp803 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp797, ((frost$core$Object*) $tmp802));
frost$core$String* $tmp804 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp803, &$s805);
org$frostlang$frostc$Compiler$Error* $tmp806 = *(&local29);
frost$core$String** $tmp807 = &$tmp806->message;
frost$core$String* $tmp808 = *$tmp807;
frost$core$String* $tmp809 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp804, $tmp808);
frost$core$String* $tmp810 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp809, &$s811);
frost$io$Console$printLine$frost$core$String($tmp810);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp810));
// unreffing REF($1250:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp809));
// unreffing REF($1249:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
// unreffing REF($1245:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
// unreffing REF($1244:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// unreffing REF($1243:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// unreffing REF($1239:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
// unreffing REF($1238:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp795));
// unreffing REF($1237:frost.core.String)
org$frostlang$frostc$Compiler$Error* $tmp812 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp812));
// unreffing error
*(&local29) = ((org$frostlang$frostc$Compiler$Error*) NULL);
goto block124;
block124:;
frost$core$Int64 $tmp813 = *(&local28);
int64_t $tmp814 = $tmp774.value;
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814 - $tmp815;
frost$core$Int64 $tmp817 = (frost$core$Int64) {$tmp816};
frost$core$UInt64 $tmp818 = frost$core$Int64$convert$R$frost$core$UInt64($tmp817);
if ($tmp776) goto block128; else goto block129;
block128:;
uint64_t $tmp819 = $tmp818.value;
uint64_t $tmp820 = $tmp778.value;
bool $tmp821 = $tmp819 >= $tmp820;
frost$core$Bit $tmp822 = (frost$core$Bit) {$tmp821};
bool $tmp823 = $tmp822.value;
if ($tmp823) goto block127; else goto block123;
block129:;
uint64_t $tmp824 = $tmp818.value;
uint64_t $tmp825 = $tmp778.value;
bool $tmp826 = $tmp824 > $tmp825;
frost$core$Bit $tmp827 = (frost$core$Bit) {$tmp826};
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block127; else goto block123;
block127:;
int64_t $tmp829 = $tmp813.value;
int64_t $tmp830 = $tmp777.value;
int64_t $tmp831 = $tmp829 + $tmp830;
frost$core$Int64 $tmp832 = (frost$core$Int64) {$tmp831};
*(&local28) = $tmp832;
goto block122;
block123:;
org$frostlang$frostc$Compiler* $tmp833 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp833));
// unreffing compiler
*(&local24) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp834 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp834));
// unreffing errorQueue
*(&local23) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp835 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
// unreffing settings
*(&local22) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp836 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
// unreffing cg
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 294
frost$core$Int64 $tmp837 = *(&local20);
frost$core$Int64 $tmp838 = (frost$core$Int64) {0};
frost$core$Bit $tmp839 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp837, $tmp838);
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block130; else goto block132;
block130:;
// line 295
org$frostlang$frostc$Main$Format$nullable $tmp841 = *(&local6);
frost$core$Bit $tmp842 = frost$core$Bit$init$builtin_bit($tmp841.nonnull);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block133; else goto block134;
block134:;
frost$core$Int64 $tmp844 = (frost$core$Int64) {295};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s845, $tmp844, &$s846);
abort(); // unreachable
block133:;
frost$core$Int64 $tmp847 = ((org$frostlang$frostc$Main$Format) $tmp841.value).$rawValue;
frost$core$Int64 $tmp848 = (frost$core$Int64) {1};
frost$core$Bit $tmp849 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp847, $tmp848);
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block136; else goto block137;
block136:;
// line 297
frost$io$File* $tmp851 = *(&local3);
frost$core$Bit $tmp852 = frost$core$Bit$init$builtin_bit($tmp851 != NULL);
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block138; else goto block139;
block139:;
frost$core$Int64 $tmp854 = (frost$core$Int64) {297};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s855, $tmp854, &$s856);
abort(); // unreachable
block138:;
frost$io$File* $tmp857 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp851, &$s858);
frost$io$File* $tmp859 = *(&local3);
frost$core$Bit $tmp860 = frost$core$Bit$init$builtin_bit($tmp859 != NULL);
bool $tmp861 = $tmp860.value;
if ($tmp861) goto block140; else goto block141;
block141:;
frost$core$Int64 $tmp862 = (frost$core$Int64) {297};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s863, $tmp862, &$s864);
abort(); // unreachable
block140:;
frost$core$Bit $tmp865 = *(&local8);
frost$io$File* $tmp866 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp857, $tmp859, $tmp865);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp866));
// unreffing REF($1369:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp857));
// unreffing REF($1358:frost.io.File)
goto block135;
block137:;
frost$core$Int64 $tmp867 = (frost$core$Int64) {2};
frost$core$Bit $tmp868 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp847, $tmp867);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block142; else goto block135;
block142:;
// line 300
frost$io$File* $tmp870 = *(&local3);
frost$core$Bit $tmp871 = frost$core$Bit$init$builtin_bit($tmp870 != NULL);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block143; else goto block144;
block144:;
frost$core$Int64 $tmp873 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s874, $tmp873, &$s875);
abort(); // unreachable
block143:;
frost$io$File* $tmp876 = frost$io$File$withExtension$frost$core$String$R$frost$io$File($tmp870, &$s877);
frost$io$File* $tmp878 = *(&local3);
frost$core$Bit $tmp879 = frost$core$Bit$init$builtin_bit($tmp878 != NULL);
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block145; else goto block146;
block146:;
frost$core$Int64 $tmp881 = (frost$core$Int64) {300};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s882, $tmp881, &$s883);
abort(); // unreachable
block145:;
frost$core$Bit $tmp884 = *(&local8);
frost$io$File* $tmp885 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp876, $tmp878, $tmp884);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp885));
// unreffing REF($1402:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
// unreffing REF($1391:frost.io.File)
goto block135;
block135:;
goto block131;
block132:;
// line 1
// line 305
frost$core$Int64 $tmp886 = *(&local20);
frost$core$Int64 $tmp887 = (frost$core$Int64) {1};
frost$core$Bit $tmp888 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp886, $tmp887);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block147; else goto block149;
block147:;
// line 306
frost$io$Console$printLine$frost$core$String(&$s890);
goto block148;
block149:;
// line 1
// line 309
frost$core$Int64 $tmp891 = *(&local20);
frost$core$String* $tmp892 = frost$core$Int64$convert$R$frost$core$String($tmp891);
frost$core$String* $tmp893 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp892, &$s894);
frost$io$Console$printLine$frost$core$String($tmp893);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp893));
// unreffing REF($1425:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp892));
// unreffing REF($1424:frost.core.String)
goto block148;
block148:;
// line 311
frost$core$UInt8 $tmp895 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp895);
goto block131;
block131:;
frost$io$File* $tmp896 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp896));
// unreffing llvmDir
*(&local18) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp897 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp897));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp898 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp898));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp899 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp899));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp900 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp900));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp901 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp901));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp902 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp902));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 317
frost$core$Bit $tmp903 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s904);
return $tmp903;

}
void frostMain(frost$collections$ListView* param0) {

// line 322
org$frostlang$frostc$Main* $tmp905 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp905);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp905, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp905));
// unreffing REF($1:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp906 = &param0->clang;
frost$io$File* $tmp907 = *$tmp906;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp907));
frost$io$File** $tmp908 = &param0->frostHome;
frost$io$File* $tmp909 = *$tmp908;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp909));
return;

}

