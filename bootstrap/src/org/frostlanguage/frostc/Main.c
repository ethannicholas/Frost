#include "org/frostlanguage/frostc/Main.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/io/File.h"
#include "org/frostlanguage/frostc/Config.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/core/System/Process.h"
#include "frost/core/Int64.h"
#include "frost/collections/ListView.h"
#include "frost/core/System.h"
#include "frost/io/Console.h"
#include "frost/io/OutputStream.h"
#include "frost/io/InputStream.h"
#include "frost/core/UInt8.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "org/frostlanguage/frostc/Main/Arguments.h"
#include "org/frostlanguage/frostc/Main/Format.h"
#include "org/frostlanguage/frostc/CodeGenerator.h"
#include "org/frostlanguage/frostc/Compiler/Settings.h"
#include "frost/threads/MessageQueue.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/ClassDecl.h"
#include "org/frostlanguage/frostc/Compiler/Error.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Equatable.h"
#include "org/frostlanguage/frostc/HTMLProcessor.h"
#include "org/frostlanguage/frostc/LLVMCodeGenerator.h"
#include "org/frostlanguage/frostc/HCodeGenerator.h"
#include "org/frostlanguage/frostc/CCodeGenerator.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Immutable.h"
#include "org/frostlanguage/frostc/Position.h"


static frost$core$String $s1;
org$frostlanguage$frostc$Main$class_type org$frostlanguage$frostc$Main$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$Main$cleanup, org$frostlanguage$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlanguage$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File, org$frostlanguage$frostc$Main$printUsage$frost$io$OutputStream, org$frostlanguage$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT} };

typedef frost$core$String* (*$fn40)(frost$io$InputStream*);
typedef void (*$fn43)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn49)(frost$io$InputStream*);
typedef void (*$fn52)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn91)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn95)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn100)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn157)(frost$io$InputStream*);
typedef void (*$fn160)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn166)(frost$io$InputStream*);
typedef void (*$fn169)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn186)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn189)(frost$io$OutputStream*);
typedef void (*$fn191)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn194)(frost$io$OutputStream*);
typedef void (*$fn196)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn199)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn219)(org$frostlanguage$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn225)(org$frostlanguage$frostc$Main$Arguments*);
typedef frost$core$Int64 (*$fn239)(frost$io$InputStream*, frost$io$OutputStream*);
typedef void (*$fn252)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn258)(org$frostlanguage$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn269)(org$frostlanguage$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn292)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn301)(org$frostlanguage$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn324)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn336)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn341)(org$frostlanguage$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn383)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn393)(org$frostlanguage$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn401)(org$frostlanguage$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn422)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn436)(frost$collections$CollectionView*);
typedef void (*$fn443)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn457)(frost$collections$CollectionView*);
typedef void (*$fn490)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn508)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn513)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn518)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn529)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn544)(org$frostlanguage$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef void (*$fn557)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn613)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn617)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn622)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn630)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn634)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn639)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn649)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn653)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn658)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 29, 223357083732476491, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s81 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s83 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s116 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s119 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s129 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s134 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s141 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s230 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s233 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s245 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s253 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s260 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s265 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s271 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s293 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s343 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s347 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s352 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s362 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s372 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s395 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s403 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s407 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s418 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s429 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s444 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s467 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s491 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s519 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s575 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s696 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s703 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s746 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s755 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s763 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s767 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

void org$frostlanguage$frostc$Main$init(org$frostlanguage$frostc$Main* param0) {

// line 21
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 24
frost$io$File* $tmp4 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp5 = org$frostlanguage$frostc$Config$frostSourceDir$R$frost$core$String();
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
frost$io$File* org$frostlanguage$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlanguage$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

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
frost$io$InputStream** $tmp37 = &$tmp36->output;
frost$io$InputStream* $tmp38 = *$tmp37;
$fn40 $tmp39 = ($fn40) $tmp38->$class->vtable[14];
frost$core$String* $tmp41 = $tmp39($tmp38);
$fn43 $tmp42 = ($fn43) $tmp35->$class->vtable[17];
$tmp42($tmp35, $tmp41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($82:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($76:frost.io.OutputStream)
// line 73
frost$io$OutputStream* $tmp44 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp45 = *(&local1);
frost$io$InputStream** $tmp46 = &$tmp45->error;
frost$io$InputStream* $tmp47 = *$tmp46;
$fn49 $tmp48 = ($fn49) $tmp47->$class->vtable[14];
frost$core$String* $tmp50 = $tmp48($tmp47);
$fn52 $tmp51 = ($fn52) $tmp44->$class->vtable[17];
$tmp51($tmp44, $tmp50);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing REF($98:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($92:frost.io.OutputStream)
// line 74
frost$core$System$Process* $tmp53 = *(&local1);
frost$core$Int64 $tmp54;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp54, $tmp53);
*(&local2) = $tmp54;
// line 75
frost$core$Bit $tmp55 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block3; else goto block4;
block3:;
// line 76
frost$io$File$delete(param1);
goto block4;
block4:;
// line 78
frost$core$Int64 $tmp57 = *(&local2);
frost$core$Int64 $tmp58 = (frost$core$Int64) {0};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 != $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block5; else goto block6;
block5:;
// line 79
frost$core$UInt8 $tmp64 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp64);
goto block6;
block6:;
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp65 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing p
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp66 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
frost$io$File* org$frostlanguage$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(org$frostlanguage$frostc$Main* param0, frost$io$File* param1, frost$io$File* param2, frost$core$Bit param3) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$String* local4 = NULL;
frost$core$System$Process* local5 = NULL;
frost$core$Int64 local6;
// line 85
frost$collections$Array* $tmp67 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp67);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
frost$collections$Array* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = $tmp67;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 86
frost$collections$Array* $tmp69 = *(&local0);
frost$core$String** $tmp70 = &param1->path;
frost$core$String* $tmp71 = *$tmp70;
frost$collections$Array$add$frost$collections$Array$T($tmp69, ((frost$core$Object*) $tmp71));
// line 87
frost$collections$Array* $tmp72 = *(&local0);
frost$core$String* $tmp73 = org$frostlanguage$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp74 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s75, $tmp73);
frost$core$String* $tmp76 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp74, &$s77);
frost$collections$Array$add$frost$collections$Array$T($tmp72, ((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing REF($24:frost.core.String)
// line 88
frost$collections$Array* $tmp78 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp78, ((frost$core$Object*) &$s79));
// line 89
frost$collections$Array* $tmp80 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp80, ((frost$core$Object*) &$s81));
// line 90
frost$collections$Array* $tmp82 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp82, ((frost$core$Object*) &$s83));
// line 91
frost$core$String* $tmp84 = org$frostlanguage$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp85 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp84, &$s86);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
frost$collections$Array* $tmp87 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local1) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($55:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing REF($54:frost.core.String)
// line 92
frost$collections$Array* $tmp88 = *(&local1);
ITable* $tmp89 = ((frost$collections$Iterable*) $tmp88)->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$collections$Iterator* $tmp92 = $tmp90(((frost$collections$Iterable*) $tmp88));
goto block1;
block1:;
ITable* $tmp93 = $tmp92->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Bit $tmp96 = $tmp94($tmp92);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp98 = $tmp92->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
frost$core$Object* $tmp101 = $tmp99($tmp92);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp101)));
frost$core$String* $tmp102 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local2) = ((frost$core$String*) $tmp101);
// line 93
frost$io$File* $tmp103 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp104 = *(&local2);
frost$io$File$init$frost$core$String($tmp103, $tmp104);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
frost$io$File* $tmp105 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local3) = $tmp103;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// unreffing REF($94:frost.io.File)
// line 94
frost$collections$Array* $tmp106 = *(&local0);
frost$io$File* $tmp107 = *(&local3);
frost$io$File* $tmp108 = frost$io$File$get_parent$R$frost$io$File$Q($tmp107);
frost$core$String* $tmp109 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s110, ((frost$core$Object*) $tmp108));
frost$collections$Array$add$frost$collections$Array$T($tmp106, ((frost$core$Object*) $tmp109));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
// unreffing REF($111:frost.io.File?)
// line 95
frost$io$File* $tmp111 = *(&local3);
frost$core$String* $tmp112 = frost$io$File$get_simpleName$R$frost$core$String($tmp111);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$core$String* $tmp113 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
*(&local4) = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// unreffing REF($125:frost.core.String)
// line 96
frost$core$String* $tmp114 = *(&local4);
frost$core$Bit $tmp115 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp114, &$s116);
bool $tmp117 = $tmp115.value;
if ($tmp117) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp118 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s119, $tmp118);
abort(); // unreachable
block4:;
// line 97
frost$core$String* $tmp120 = *(&local4);
frost$core$Int64 $tmp121 = (frost$core$Int64) {3};
frost$core$Bit $tmp122 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp123 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp121, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp122);
frost$core$String* $tmp124 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp120, $tmp123);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
frost$core$String* $tmp125 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
*(&local4) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
// unreffing REF($150:frost.core.String)
// line 98
frost$collections$Array* $tmp126 = *(&local0);
frost$core$String* $tmp127 = *(&local4);
frost$core$String* $tmp128 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s129, $tmp127);
frost$collections$Array$add$frost$collections$Array$T($tmp126, ((frost$core$Object*) $tmp128));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing REF($164:frost.core.String)
frost$core$String* $tmp130 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
// unreffing simpleName
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp131 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing libFile
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp101);
// unreffing REF($85:frost.collections.Iterator.T)
frost$core$String* $tmp132 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing lib
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
// unreffing REF($74:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 100
frost$collections$Array* $tmp133 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp133, ((frost$core$Object*) &$s134));
// line 101
frost$collections$Array* $tmp135 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp135, ((frost$core$Object*) &$s136));
// line 102
frost$core$Bit* $tmp137 = &param0->debug;
frost$core$Bit $tmp138 = *$tmp137;
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block6; else goto block7;
block6:;
// line 103
frost$collections$Array* $tmp140 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp140, ((frost$core$Object*) &$s141));
goto block7;
block7:;
// line 105
frost$collections$Array* $tmp142 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp142, ((frost$core$Object*) &$s143));
// line 106
frost$collections$Array* $tmp144 = *(&local0);
frost$core$String** $tmp145 = &param2->path;
frost$core$String* $tmp146 = *$tmp145;
frost$collections$Array$add$frost$collections$Array$T($tmp144, ((frost$core$Object*) $tmp146));
// line 107
frost$io$File** $tmp147 = &param0->clang;
frost$io$File* $tmp148 = *$tmp147;
frost$collections$Array* $tmp149 = *(&local0);
frost$core$System$Process* $tmp150 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q($tmp148, ((frost$collections$ListView*) $tmp149));
*(&local5) = ((frost$core$System$Process*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$core$System$Process* $tmp151 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
*(&local5) = $tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
// unreffing REF($230:frost.core.System.Process?)
// line 108
frost$io$OutputStream* $tmp152 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp153 = *(&local5);
frost$io$InputStream** $tmp154 = &$tmp153->output;
frost$io$InputStream* $tmp155 = *$tmp154;
$fn157 $tmp156 = ($fn157) $tmp155->$class->vtable[14];
frost$core$String* $tmp158 = $tmp156($tmp155);
$fn160 $tmp159 = ($fn160) $tmp152->$class->vtable[17];
$tmp159($tmp152, $tmp158);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
// unreffing REF($248:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
// unreffing REF($242:frost.io.OutputStream)
// line 109
frost$io$OutputStream* $tmp161 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp162 = *(&local5);
frost$io$InputStream** $tmp163 = &$tmp162->error;
frost$io$InputStream* $tmp164 = *$tmp163;
$fn166 $tmp165 = ($fn166) $tmp164->$class->vtable[14];
frost$core$String* $tmp167 = $tmp165($tmp164);
$fn169 $tmp168 = ($fn169) $tmp161->$class->vtable[17];
$tmp168($tmp161, $tmp167);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
// unreffing REF($264:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// unreffing REF($258:frost.io.OutputStream)
// line 110
frost$core$System$Process* $tmp170 = *(&local5);
frost$core$Int64 $tmp171;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp171, $tmp170);
*(&local6) = $tmp171;
// line 111
frost$core$Bit $tmp172 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block8; else goto block9;
block8:;
// line 112
frost$io$File$delete(param1);
goto block9;
block9:;
// line 114
frost$core$Int64 $tmp174 = *(&local6);
frost$core$Int64 $tmp175 = (frost$core$Int64) {0};
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 != $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block10; else goto block11;
block10:;
// line 115
frost$core$UInt8 $tmp181 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp181);
goto block11;
block11:;
// line 117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp182 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
// unreffing p
*(&local5) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp183 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
// unreffing icuLibs
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp184 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlanguage$frostc$Main$printUsage$frost$io$OutputStream(org$frostlanguage$frostc$Main* param0, frost$io$OutputStream* param1) {

// line 121
$fn186 $tmp185 = ($fn186) param1->$class->vtable[19];
$tmp185(param1, &$s187);
// line 122
$fn189 $tmp188 = ($fn189) param1->$class->vtable[21];
$tmp188(param1);
// line 123
$fn191 $tmp190 = ($fn191) param1->$class->vtable[19];
$tmp190(param1, &$s192);
// line 124
$fn194 $tmp193 = ($fn194) param1->$class->vtable[21];
$tmp193(param1);
// line 125
$fn196 $tmp195 = ($fn196) param1->$class->vtable[19];
$tmp195(param1, &$s197);
// line 126
$fn199 $tmp198 = ($fn199) param1->$class->vtable[19];
$tmp198(param1, &$s200);
return;

}
void org$frostlanguage$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT(org$frostlanguage$frostc$Main* param0, frost$collections$ListView* param1) {

org$frostlanguage$frostc$Main$Arguments* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$io$File* local3 = NULL;
frost$core$Int64 local4;
frost$core$Int64 local5;
org$frostlanguage$frostc$Main$Format$nullable local6;
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
org$frostlanguage$frostc$CodeGenerator* local21 = NULL;
org$frostlanguage$frostc$Compiler$Settings* local22 = NULL;
frost$threads$MessageQueue* local23 = NULL;
org$frostlanguage$frostc$Compiler* local24 = NULL;
frost$io$File* local25 = NULL;
org$frostlanguage$frostc$ClassDecl* local26 = NULL;
frost$io$File* local27 = NULL;
frost$core$Int64 local28;
org$frostlanguage$frostc$Compiler$Error* local29 = NULL;
// line 130
org$frostlanguage$frostc$Main$Arguments* $tmp201 = (org$frostlanguage$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Main$Arguments$class);
org$frostlanguage$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp201, param1);
*(&local0) = ((org$frostlanguage$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
org$frostlanguage$frostc$Main$Arguments* $tmp202 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp202));
*(&local0) = $tmp201;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
// unreffing REF($1:org.frostlanguage.frostc.Main.Arguments)
// line 131
frost$collections$Array* $tmp203 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp203);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
frost$collections$Array* $tmp204 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local1) = $tmp203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 132
frost$collections$Array* $tmp205 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp205);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$collections$Array* $tmp206 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local2) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 133
frost$collections$Array* $tmp207 = *(&local2);
frost$io$File** $tmp208 = &param0->frostHome;
frost$io$File* $tmp209 = *$tmp208;
frost$collections$Array$add$frost$collections$Array$T($tmp207, ((frost$core$Object*) $tmp209));
// line 134
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp210 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp210));
*(&local3) = ((frost$io$File*) NULL);
// line 135
frost$core$Int64 $tmp211 = (frost$core$Int64) {3};
*(&local4) = $tmp211;
// line 136
frost$core$Int64 $tmp212 = (frost$core$Int64) {3};
*(&local5) = $tmp212;
// line 137
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { .nonnull = false });
// line 138
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp213 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp213));
*(&local7) = ((frost$core$String*) NULL);
// line 139
frost$core$Bit $tmp214 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp214;
// line 140
frost$io$OutputStream* $tmp215 = frost$io$Console$errorStream$R$frost$io$OutputStream();
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
frost$io$OutputStream* $tmp216 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp216));
*(&local9) = $tmp215;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
// unreffing REF($76:frost.io.OutputStream)
// line 141
goto block1;
block1:;
org$frostlanguage$frostc$Main$Arguments* $tmp217 = *(&local0);
$fn219 $tmp218 = ($fn219) $tmp217->$class->vtable[2];
frost$core$Bit $tmp220 = $tmp218($tmp217);
frost$core$Bit $tmp221 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block2; else goto block3;
block2:;
// line 142
org$frostlanguage$frostc$Main$Arguments* $tmp223 = *(&local0);
$fn225 $tmp224 = ($fn225) $tmp223->$class->vtable[3];
frost$core$String* $tmp226 = $tmp224($tmp223);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
frost$core$String* $tmp227 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp227));
*(&local10) = $tmp226;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp226));
// unreffing REF($98:frost.core.String)
// line 143
frost$core$String* $tmp228 = *(&local10);
frost$core$Bit $tmp229 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp228, &$s230);
bool $tmp231 = $tmp229.value;
if ($tmp231) goto block5; else goto block6;
block5:;
// line 145
frost$io$File* $tmp232 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp232, &$s233);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
frost$io$File* $tmp234 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
*(&local11) = $tmp232;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp232));
// unreffing REF($115:frost.io.File)
// line 146
frost$io$InputStream* $tmp235 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp236 = *(&local11);
frost$io$OutputStream* $tmp237 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp236);
$fn239 $tmp238 = ($fn239) $tmp235->$class->vtable[17];
frost$core$Int64 $tmp240 = $tmp238($tmp235, $tmp237);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($130:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp235));
// unreffing REF($128:frost.io.InputStream)
// line 147
frost$collections$Array* $tmp241 = *(&local1);
frost$io$File* $tmp242 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp241, ((frost$core$Object*) $tmp242));
frost$io$File* $tmp243 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp243));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp244 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp228, &$s245);
bool $tmp246 = $tmp244.value;
if ($tmp246) goto block7; else goto block8;
block7:;
// line 150
frost$io$File* $tmp247 = *(&local3);
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block9; else goto block10;
block9:;
// line 151
frost$io$OutputStream* $tmp250 = *(&local9);
$fn252 $tmp251 = ($fn252) $tmp250->$class->vtable[19];
$tmp251($tmp250, &$s253);
// line 152
frost$core$UInt8 $tmp254 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp254);
goto block10;
block10:;
// line 154
frost$io$File* $tmp255 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlanguage$frostc$Main$Arguments* $tmp256 = *(&local0);
$fn258 $tmp257 = ($fn258) $tmp256->$class->vtable[4];
frost$core$String* $tmp259 = $tmp257($tmp256, &$s260);
frost$io$File$init$frost$core$String($tmp255, $tmp259);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
frost$io$File* $tmp261 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
*(&local3) = $tmp255;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp255));
// unreffing REF($169:frost.io.File)
// line 155
frost$io$File* $tmp262 = *(&local3);
frost$io$File* $tmp263 = frost$io$File$get_parent$R$frost$io$File$Q($tmp262);
frost$io$File$createDirectories($tmp263);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
// unreffing REF($190:frost.io.File?)
goto block4;
block8:;
frost$core$Bit $tmp264 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp228, &$s265);
bool $tmp266 = $tmp264.value;
if ($tmp266) goto block11; else goto block12;
block11:;
// line 158
org$frostlanguage$frostc$Main$Arguments* $tmp267 = *(&local0);
$fn269 $tmp268 = ($fn269) $tmp267->$class->vtable[4];
frost$core$String* $tmp270 = $tmp268($tmp267, &$s271);
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
frost$core$String* $tmp272 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
*(&local12) = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp270));
// unreffing REF($203:frost.core.String)
// line 159
frost$core$String* $tmp273 = *(&local12);
frost$core$Int64$nullable $tmp274 = frost$core$String$convert$R$frost$core$Int64$Q($tmp273);
*(&local4) = ((frost$core$Int64) $tmp274.value);
// line 160
frost$core$Int64 $tmp275 = *(&local4);
frost$core$Int64 $tmp276 = (frost$core$Int64) {3};
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 > $tmp278;
frost$core$Bit $tmp280 = (frost$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block15; else goto block16;
block15:;
*(&local13) = $tmp280;
goto block17;
block16:;
frost$core$Int64 $tmp282 = *(&local4);
frost$core$Int64 $tmp283 = (frost$core$Int64) {0};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 < $tmp285;
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
*(&local13) = $tmp287;
goto block17;
block17:;
frost$core$Bit $tmp288 = *(&local13);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block13; else goto block14;
block13:;
// line 161
frost$io$OutputStream* $tmp290 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn292 $tmp291 = ($fn292) $tmp290->$class->vtable[19];
$tmp291($tmp290, &$s293);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp290));
// unreffing REF($242:frost.io.OutputStream)
// line 162
frost$core$UInt8 $tmp294 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp294);
goto block14;
block14:;
frost$core$String* $tmp295 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp295));
// unreffing level
*(&local12) = ((frost$core$String*) NULL);
goto block4;
block12:;
frost$core$Bit $tmp296 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp228, &$s297);
bool $tmp298 = $tmp296.value;
if ($tmp298) goto block18; else goto block19;
block18:;
// line 166
org$frostlanguage$frostc$Main$Arguments* $tmp299 = *(&local0);
$fn301 $tmp300 = ($fn301) $tmp299->$class->vtable[4];
frost$core$String* $tmp302 = $tmp300($tmp299, &$s303);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
frost$core$String* $tmp304 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
*(&local14) = $tmp302;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp302));
// unreffing REF($264:frost.core.String)
// line 167
frost$core$String* $tmp305 = *(&local14);
frost$core$Int64$nullable $tmp306 = frost$core$String$convert$R$frost$core$Int64$Q($tmp305);
*(&local5) = ((frost$core$Int64) $tmp306.value);
// line 168
frost$core$Int64 $tmp307 = *(&local5);
frost$core$Int64 $tmp308 = (frost$core$Int64) {3};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 > $tmp310;
frost$core$Bit $tmp312 = (frost$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block22; else goto block23;
block22:;
*(&local15) = $tmp312;
goto block24;
block23:;
frost$core$Int64 $tmp314 = *(&local5);
frost$core$Int64 $tmp315 = (frost$core$Int64) {0};
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 < $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
*(&local15) = $tmp319;
goto block24;
block24:;
frost$core$Bit $tmp320 = *(&local15);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block20; else goto block21;
block20:;
// line 169
frost$io$OutputStream* $tmp322 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn324 $tmp323 = ($fn324) $tmp322->$class->vtable[19];
$tmp323($tmp322, &$s325);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp322));
// unreffing REF($303:frost.io.OutputStream)
// line 170
frost$core$UInt8 $tmp326 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp326);
goto block21;
block21:;
frost$core$String* $tmp327 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp327));
// unreffing level
*(&local14) = ((frost$core$String*) NULL);
goto block4;
block19:;
frost$core$Bit $tmp328 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp228, &$s329);
bool $tmp330 = $tmp328.value;
if ($tmp330) goto block25; else goto block26;
block25:;
// line 174
org$frostlanguage$frostc$Main$Format$nullable $tmp331 = *(&local6);
frost$core$Bit $tmp332 = frost$core$Bit$init$builtin_bit($tmp331.nonnull);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block27; else goto block28;
block27:;
// line 175
frost$io$OutputStream* $tmp334 = *(&local9);
$fn336 $tmp335 = ($fn336) $tmp334->$class->vtable[19];
$tmp335($tmp334, &$s337);
// line 176
frost$core$UInt8 $tmp338 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp338);
goto block28;
block28:;
// line 178
org$frostlanguage$frostc$Main$Arguments* $tmp339 = *(&local0);
$fn341 $tmp340 = ($fn341) $tmp339->$class->vtable[4];
frost$core$String* $tmp342 = $tmp340($tmp339, &$s343);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
frost$core$String* $tmp344 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
*(&local16) = $tmp342;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
// unreffing REF($339:frost.core.String)
// line 179
frost$core$String* $tmp345 = *(&local16);
frost$core$Bit $tmp346 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp345, &$s347);
bool $tmp348 = $tmp346.value;
if ($tmp348) goto block30; else goto block31;
block30:;
// line 180
frost$core$Int64 $tmp349 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Main$Format $tmp350 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp349);
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { $tmp350, true });
goto block29;
block31:;
frost$core$Bit $tmp351 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp345, &$s352);
bool $tmp353 = $tmp351.value;
if ($tmp353) goto block32; else goto block33;
block32:;
// line 181
frost$core$Int64 $tmp354 = (frost$core$Int64) {2};
org$frostlanguage$frostc$Main$Format $tmp355 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp354);
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { $tmp355, true });
goto block29;
block33:;
frost$core$Bit $tmp356 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp345, &$s357);
bool $tmp358 = $tmp356.value;
if ($tmp358) goto block34; else goto block35;
block34:;
// line 182
frost$core$Int64 $tmp359 = (frost$core$Int64) {0};
org$frostlanguage$frostc$Main$Format $tmp360 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp359);
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { $tmp360, true });
goto block29;
block35:;
frost$core$Bit $tmp361 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp345, &$s362);
bool $tmp363 = $tmp361.value;
if ($tmp363) goto block36; else goto block37;
block36:;
// line 183
frost$core$Int64 $tmp364 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Main$Format $tmp365 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp364);
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { $tmp365, true });
goto block29;
block37:;
frost$core$Bit $tmp366 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp345, &$s367);
bool $tmp368 = $tmp366.value;
if ($tmp368) goto block38; else goto block39;
block38:;
// line 184
frost$core$Int64 $tmp369 = (frost$core$Int64) {4};
org$frostlanguage$frostc$Main$Format $tmp370 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp369);
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { $tmp370, true });
goto block29;
block39:;
frost$core$Bit $tmp371 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp345, &$s372);
bool $tmp373 = $tmp371.value;
if ($tmp373) goto block40; else goto block41;
block40:;
// line 185
frost$core$Int64 $tmp374 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Main$Format $tmp375 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp374);
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { $tmp375, true });
goto block29;
block41:;
// line 187
frost$io$OutputStream* $tmp376 = *(&local9);
frost$core$String* $tmp377 = *(&local16);
frost$core$String* $tmp378 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s379, $tmp377);
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp378, &$s381);
$fn383 $tmp382 = ($fn383) $tmp376->$class->vtable[19];
$tmp382($tmp376, $tmp380);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing REF($410:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp378));
// unreffing REF($409:frost.core.String)
// line 188
frost$core$UInt8 $tmp384 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp384);
goto block29;
block29:;
frost$core$String* $tmp385 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
// unreffing f
*(&local16) = ((frost$core$String*) NULL);
goto block4;
block26:;
frost$core$Bit $tmp386 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp228, &$s387);
bool $tmp388 = $tmp386.value;
if ($tmp388) goto block42; else goto block43;
block42:;
// line 193
frost$collections$Array* $tmp389 = *(&local2);
frost$io$File* $tmp390 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlanguage$frostc$Main$Arguments* $tmp391 = *(&local0);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[4];
frost$core$String* $tmp394 = $tmp392($tmp391, &$s395);
frost$io$File$init$frost$core$String($tmp390, $tmp394);
frost$collections$Array$add$frost$collections$Array$T($tmp389, ((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// unreffing REF($438:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
// unreffing REF($435:frost.io.File)
goto block4;
block43:;
frost$core$Bit $tmp396 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp228, &$s397);
bool $tmp398 = $tmp396.value;
if ($tmp398) goto block44; else goto block45;
block44:;
// line 196
org$frostlanguage$frostc$Main$Arguments* $tmp399 = *(&local0);
$fn401 $tmp400 = ($fn401) $tmp399->$class->vtable[4];
frost$core$String* $tmp402 = $tmp400($tmp399, &$s403);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
frost$core$String* $tmp404 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
*(&local7) = $tmp402;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
// unreffing REF($455:frost.core.String)
goto block4;
block45:;
// line 199
frost$core$String* $tmp405 = *(&local10);
frost$core$Bit $tmp406 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp405, &$s407);
bool $tmp408 = $tmp406.value;
if ($tmp408) goto block46; else goto block48;
block46:;
// line 200
frost$io$File* $tmp409 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp410 = *(&local10);
frost$io$File$init$frost$core$String($tmp409, $tmp410);
*(&local17) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
frost$io$File* $tmp411 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
*(&local17) = $tmp409;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp409));
// unreffing REF($473:frost.io.File)
// line 202
frost$collections$Array* $tmp412 = *(&local1);
frost$io$File* $tmp413 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp412, ((frost$core$Object*) $tmp413));
frost$io$File* $tmp414 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
// unreffing f
*(&local17) = ((frost$io$File*) NULL);
goto block47;
block48:;
// line 1
// line 206
frost$io$OutputStream* $tmp415 = *(&local9);
frost$core$String* $tmp416 = *(&local10);
frost$core$String* $tmp417 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s418, $tmp416);
frost$core$String* $tmp419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp417, &$s420);
$fn422 $tmp421 = ($fn422) $tmp415->$class->vtable[19];
$tmp421($tmp415, $tmp419);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($503:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
// unreffing REF($502:frost.core.String)
// line 207
frost$core$UInt8 $tmp423 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp423);
goto block47;
block47:;
goto block4;
block4:;
frost$core$String* $tmp424 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp424));
// unreffing a
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 212
frost$io$File* $tmp425 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp426 = org$frostlanguage$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp425, $tmp426);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
frost$io$File* $tmp427 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
*(&local18) = $tmp425;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing REF($525:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp425));
// unreffing REF($524:frost.io.File)
// line 213
frost$io$File* $tmp428 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp428, &$s429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
frost$io$File** $tmp430 = &param0->clang;
frost$io$File* $tmp431 = *$tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp431));
frost$io$File** $tmp432 = &param0->clang;
*$tmp432 = $tmp428;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing REF($541:frost.io.File)
// line 214
frost$collections$Array* $tmp433 = *(&local1);
ITable* $tmp434 = ((frost$collections$CollectionView*) $tmp433)->$class->itable;
while ($tmp434->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp434 = $tmp434->next;
}
$fn436 $tmp435 = $tmp434->methods[0];
frost$core$Int64 $tmp437 = $tmp435(((frost$collections$CollectionView*) $tmp433));
frost$core$Int64 $tmp438 = (frost$core$Int64) {0};
frost$core$Bit $tmp439 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp437, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block49; else goto block50;
block49:;
// line 215
frost$io$OutputStream* $tmp441 = *(&local9);
$fn443 $tmp442 = ($fn443) $tmp441->$class->vtable[19];
$tmp442($tmp441, &$s444);
// line 216
frost$core$UInt8 $tmp445 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp445);
goto block50;
block50:;
// line 218
org$frostlanguage$frostc$Main$Format$nullable $tmp446 = *(&local6);
frost$core$Bit $tmp447 = frost$core$Bit$init$builtin_bit(!$tmp446.nonnull);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block51; else goto block52;
block51:;
// line 219
frost$core$Int64 $tmp449 = (frost$core$Int64) {1};
org$frostlanguage$frostc$Main$Format $tmp450 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp449);
*(&local6) = ((org$frostlanguage$frostc$Main$Format$nullable) { $tmp450, true });
goto block52;
block52:;
// line 221
frost$io$File* $tmp451 = *(&local3);
frost$core$Bit $tmp452 = frost$core$Bit$init$builtin_bit($tmp451 == NULL);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block53; else goto block54;
block53:;
// line 222
frost$collections$Array* $tmp454 = *(&local1);
ITable* $tmp455 = ((frost$collections$CollectionView*) $tmp454)->$class->itable;
while ($tmp455->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp455 = $tmp455->next;
}
$fn457 $tmp456 = $tmp455->methods[0];
frost$core$Int64 $tmp458 = $tmp456(((frost$collections$CollectionView*) $tmp454));
frost$core$Int64 $tmp459 = (frost$core$Int64) {1};
frost$core$Bit $tmp460 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp458, $tmp459);
bool $tmp461 = $tmp460.value;
if ($tmp461) goto block55; else goto block57;
block55:;
// line 223
*(&local19) = ((frost$core$String*) NULL);
// line 224
org$frostlanguage$frostc$Main$Format$nullable $tmp462 = *(&local6);
frost$core$Int64 $tmp463 = ((org$frostlanguage$frostc$Main$Format) $tmp462.value).$rawValue;
frost$core$Int64 $tmp464 = (frost$core$Int64) {1};
frost$core$Bit $tmp465 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp463, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block59; else goto block60;
block59:;
// line 225
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s467));
frost$core$String* $tmp468 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp468));
*(&local19) = &$s469;
goto block58;
block60:;
frost$core$Int64 $tmp470 = (frost$core$Int64) {2};
frost$core$Bit $tmp471 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp463, $tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block61; else goto block62;
block61:;
// line 226
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s473));
frost$core$String* $tmp474 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local19) = &$s475;
goto block58;
block62:;
frost$core$Int64 $tmp476 = (frost$core$Int64) {0};
frost$core$Bit $tmp477 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp463, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block63; else goto block64;
block63:;
// line 227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s479));
frost$core$String* $tmp480 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
*(&local19) = &$s481;
goto block58;
block64:;
frost$core$Int64 $tmp482 = (frost$core$Int64) {5};
frost$core$Bit $tmp483 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp463, $tmp482);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block65; else goto block66;
block65:;
// line 228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s485));
frost$core$String* $tmp486 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
*(&local19) = &$s487;
goto block58;
block66:;
// line 230
frost$io$OutputStream* $tmp488 = *(&local9);
$fn490 $tmp489 = ($fn490) $tmp488->$class->vtable[19];
$tmp489($tmp488, &$s491);
// line 231
frost$core$UInt8 $tmp492 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp492);
goto block58;
block58:;
// line 234
frost$collections$Array* $tmp493 = *(&local1);
frost$core$Int64 $tmp494 = (frost$core$Int64) {0};
frost$core$Object* $tmp495 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp493, $tmp494);
frost$core$String* $tmp496 = *(&local19);
frost$io$File* $tmp497 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp495), $tmp496);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
frost$io$File* $tmp498 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local3) = $tmp497;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
// unreffing REF($667:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp495);
// unreffing REF($664:frost.collections.Array.T)
frost$core$String* $tmp499 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing extension
*(&local19) = ((frost$core$String*) NULL);
goto block56;
block57:;
// line 236
org$frostlanguage$frostc$Main$Format$nullable $tmp500 = *(&local6);
frost$core$Equatable* $tmp501;
if ($tmp500.nonnull) {
    org$frostlanguage$frostc$Main$Format$wrapper* $tmp502;
    $tmp502 = (org$frostlanguage$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Main$Format$wrapperclass);
    $tmp502->value = ((org$frostlanguage$frostc$Main$Format) $tmp500.value);
    $tmp501 = ((frost$core$Equatable*) $tmp502);
}
else {
    $tmp501 = NULL;
}
frost$core$Int64 $tmp503 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Main$Format $tmp504 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp503);
org$frostlanguage$frostc$Main$Format$wrapper* $tmp505;
$tmp505 = (org$frostlanguage$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Main$Format$wrapperclass);
$tmp505->value = $tmp504;
ITable* $tmp506 = $tmp501->$class->itable;
while ($tmp506->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp506 = $tmp506->next;
}
$fn508 $tmp507 = $tmp506->methods[0];
frost$core$Bit $tmp509 = $tmp507($tmp501, ((frost$core$Equatable*) $tmp505));
bool $tmp510 = $tmp509.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp505)));
// unreffing REF($693:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing REF($689:frost.core.Equatable<org.frostlanguage.frostc.Main.Format>)
if ($tmp510) goto block67; else goto block69;
block67:;
// line 237
frost$io$OutputStream* $tmp511 = *(&local9);
$fn513 $tmp512 = ($fn513) $tmp511->$class->vtable[19];
$tmp512($tmp511, &$s514);
// line 238
frost$core$UInt8 $tmp515 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp515);
goto block68;
block69:;
// line 1
// line 241
frost$io$OutputStream* $tmp516 = *(&local9);
$fn518 $tmp517 = ($fn518) $tmp516->$class->vtable[19];
$tmp517($tmp516, &$s519);
// line 243
frost$core$UInt8 $tmp520 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp520);
goto block68;
block68:;
goto block56;
block56:;
goto block54;
block54:;
// line 246
org$frostlanguage$frostc$Main$Format$nullable $tmp521 = *(&local6);
frost$core$Equatable* $tmp522;
if ($tmp521.nonnull) {
    org$frostlanguage$frostc$Main$Format$wrapper* $tmp523;
    $tmp523 = (org$frostlanguage$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Main$Format$wrapperclass);
    $tmp523->value = ((org$frostlanguage$frostc$Main$Format) $tmp521.value);
    $tmp522 = ((frost$core$Equatable*) $tmp523);
}
else {
    $tmp522 = NULL;
}
frost$core$Int64 $tmp524 = (frost$core$Int64) {5};
org$frostlanguage$frostc$Main$Format $tmp525 = org$frostlanguage$frostc$Main$Format$init$frost$core$Int64($tmp524);
org$frostlanguage$frostc$Main$Format$wrapper* $tmp526;
$tmp526 = (org$frostlanguage$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlanguage$frostc$Main$Format$wrapperclass);
$tmp526->value = $tmp525;
ITable* $tmp527 = $tmp522->$class->itable;
while ($tmp527->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp527 = $tmp527->next;
}
$fn529 $tmp528 = $tmp527->methods[0];
frost$core$Bit $tmp530 = $tmp528($tmp522, ((frost$core$Equatable*) $tmp526));
bool $tmp531 = $tmp530.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp526)));
// unreffing REF($729:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
// unreffing REF($725:frost.core.Equatable<org.frostlanguage.frostc.Main.Format>)
if ($tmp531) goto block70; else goto block71;
block70:;
// line 247
frost$core$String* $tmp532 = *(&local7);
frost$core$Bit $tmp533 = frost$core$Bit$init$builtin_bit($tmp532 == NULL);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block72; else goto block73;
block72:;
// line 248
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s535));
frost$core$String* $tmp536 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp536));
*(&local7) = &$s535;
goto block73;
block73:;
// line 250
org$frostlanguage$frostc$HTMLProcessor* $tmp537 = (org$frostlanguage$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlanguage$frostc$HTMLProcessor$class);
org$frostlanguage$frostc$HTMLProcessor$init($tmp537);
frost$collections$Array* $tmp538 = *(&local1);
frost$core$Int64 $tmp539 = (frost$core$Int64) {0};
frost$core$Object* $tmp540 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp538, $tmp539);
frost$io$File* $tmp541 = *(&local3);
frost$core$String* $tmp542 = *(&local7);
$fn544 $tmp543 = ($fn544) $tmp537->$class->vtable[3];
$tmp543($tmp537, ((frost$io$File*) $tmp540), $tmp541, $tmp542);
frost$core$Frost$unref$frost$core$Object$Q($tmp540);
// unreffing REF($761:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp537));
// unreffing REF($756:org.frostlanguage.frostc.HTMLProcessor)
// line 251
frost$io$File* $tmp545 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp545));
// unreffing llvmDir
*(&local18) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp546 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp546));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp547 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp548 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp549 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp550 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Main$Arguments* $tmp551 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// unreffing args
*(&local0) = ((org$frostlanguage$frostc$Main$Arguments*) NULL);
return;
block71:;
// line 253
frost$core$String* $tmp552 = *(&local7);
frost$core$Bit $tmp553 = frost$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block74; else goto block75;
block74:;
// line 254
frost$io$OutputStream* $tmp555 = *(&local9);
$fn557 $tmp556 = ($fn557) $tmp555->$class->vtable[19];
$tmp556($tmp555, &$s558);
// line 255
frost$core$UInt8 $tmp559 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp559);
goto block75;
block75:;
// line 257
// line 1
// line 259
*(&local21) = ((org$frostlanguage$frostc$CodeGenerator*) NULL);
// line 260
org$frostlanguage$frostc$Main$Format$nullable $tmp560 = *(&local6);
frost$core$Int64 $tmp561 = ((org$frostlanguage$frostc$Main$Format) $tmp560.value).$rawValue;
frost$core$Int64 $tmp562 = (frost$core$Int64) {0};
frost$core$Bit $tmp563 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp561, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp565 = (frost$core$Int64) {1};
frost$core$Bit $tmp566 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp561, $tmp565);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block77; else goto block79;
block79:;
frost$core$Int64 $tmp568 = (frost$core$Int64) {2};
frost$core$Bit $tmp569 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp561, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block77; else goto block80;
block77:;
// line 262
org$frostlanguage$frostc$LLVMCodeGenerator* $tmp571 = (org$frostlanguage$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlanguage$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp572 = org$frostlanguage$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp573 = *(&local3);
frost$io$File* $tmp574 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File($tmp573, &$s575);
frost$io$OutputStream* $tmp576 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp574);
org$frostlanguage$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp571, $tmp572, $tmp576);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$CodeGenerator*) $tmp571)));
org$frostlanguage$frostc$CodeGenerator* $tmp577 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
*(&local21) = ((org$frostlanguage$frostc$CodeGenerator*) $tmp571);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// unreffing REF($852:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// unreffing REF($851:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp572));
// unreffing REF($848:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp571));
// unreffing REF($847:org.frostlanguage.frostc.LLVMCodeGenerator)
goto block76;
block80:;
frost$core$Int64 $tmp578 = (frost$core$Int64) {3};
frost$core$Bit $tmp579 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp561, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block81; else goto block82;
block81:;
// line 266
org$frostlanguage$frostc$HCodeGenerator* $tmp581 = (org$frostlanguage$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlanguage$frostc$HCodeGenerator$class);
frost$io$File* $tmp582 = *(&local3);
org$frostlanguage$frostc$HCodeGenerator$init$frost$io$File($tmp581, $tmp582);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$CodeGenerator*) $tmp581)));
org$frostlanguage$frostc$CodeGenerator* $tmp583 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
*(&local21) = ((org$frostlanguage$frostc$CodeGenerator*) $tmp581);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
// unreffing REF($879:org.frostlanguage.frostc.HCodeGenerator)
goto block76;
block82:;
frost$core$Int64 $tmp584 = (frost$core$Int64) {4};
frost$core$Bit $tmp585 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp561, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block83; else goto block84;
block83:;
// line 269
org$frostlanguage$frostc$CCodeGenerator* $tmp587 = (org$frostlanguage$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlanguage$frostc$CCodeGenerator$class);
frost$io$File* $tmp588 = *(&local3);
org$frostlanguage$frostc$CCodeGenerator$init$frost$io$File($tmp587, $tmp588);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$CodeGenerator*) $tmp587)));
org$frostlanguage$frostc$CodeGenerator* $tmp589 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local21) = ((org$frostlanguage$frostc$CodeGenerator*) $tmp587);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
// unreffing REF($899:org.frostlanguage.frostc.CCodeGenerator)
goto block76;
block84:;
// line 272
frost$core$Bit $tmp590 = frost$core$Bit$init$builtin_bit(false);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp592 = (frost$core$Int64) {272};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s593, $tmp592);
abort(); // unreachable
block85:;
goto block76;
block76:;
// line 275
org$frostlanguage$frostc$Compiler$Settings* $tmp594 = (org$frostlanguage$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$Settings$class);
frost$io$File** $tmp595 = &param0->frostHome;
frost$io$File* $tmp596 = *$tmp595;
frost$collections$Array* $tmp597 = *(&local2);
frost$core$Int64 $tmp598 = *(&local4);
frost$core$Int64 $tmp599 = *(&local5);
frost$core$Bit* $tmp600 = &param0->debug;
frost$core$Bit $tmp601 = *$tmp600;
org$frostlanguage$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp594, $tmp596, ((frost$collections$ListView*) $tmp597), $tmp598, $tmp599, $tmp601);
*(&local22) = ((org$frostlanguage$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlanguage$frostc$Compiler$Settings* $tmp602 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
*(&local22) = $tmp594;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
// unreffing REF($923:org.frostlanguage.frostc.Compiler.Settings)
// line 277
frost$threads$MessageQueue* $tmp603 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp603);
*(&local23) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$threads$MessageQueue* $tmp604 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local23) = $tmp603;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
// unreffing REF($944:frost.threads.MessageQueue<org.frostlanguage.frostc.Compiler.Error>)
// line 278
org$frostlanguage$frostc$Compiler* $tmp605 = (org$frostlanguage$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp606 = *(&local23);
org$frostlanguage$frostc$CodeGenerator* $tmp607 = *(&local21);
org$frostlanguage$frostc$Compiler$Settings* $tmp608 = *(&local22);
org$frostlanguage$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlanguage$frostc$Compiler$Error$GT$org$frostlanguage$frostc$CodeGenerator$org$frostlanguage$frostc$Compiler$Settings($tmp605, $tmp606, $tmp607, $tmp608);
*(&local24) = ((org$frostlanguage$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
org$frostlanguage$frostc$Compiler* $tmp609 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
*(&local24) = $tmp605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing REF($958:org.frostlanguage.frostc.Compiler)
// line 279
frost$collections$Array* $tmp610 = *(&local1);
ITable* $tmp611 = ((frost$collections$Iterable*) $tmp610)->$class->itable;
while ($tmp611->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp611 = $tmp611->next;
}
$fn613 $tmp612 = $tmp611->methods[0];
frost$collections$Iterator* $tmp614 = $tmp612(((frost$collections$Iterable*) $tmp610));
goto block87;
block87:;
ITable* $tmp615 = $tmp614->$class->itable;
while ($tmp615->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp615 = $tmp615->next;
}
$fn617 $tmp616 = $tmp615->methods[0];
frost$core$Bit $tmp618 = $tmp616($tmp614);
bool $tmp619 = $tmp618.value;
if ($tmp619) goto block89; else goto block88;
block88:;
*(&local25) = ((frost$io$File*) NULL);
ITable* $tmp620 = $tmp614->$class->itable;
while ($tmp620->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp620 = $tmp620->next;
}
$fn622 $tmp621 = $tmp620->methods[1];
frost$core$Object* $tmp623 = $tmp621($tmp614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp623)));
frost$io$File* $tmp624 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp624));
*(&local25) = ((frost$io$File*) $tmp623);
// line 280
org$frostlanguage$frostc$Compiler* $tmp625 = *(&local24);
frost$io$File* $tmp626 = *(&local25);
frost$collections$ListView* $tmp627 = org$frostlanguage$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlanguage$frostc$ClassDecl$GT($tmp625, $tmp626);
ITable* $tmp628 = ((frost$collections$Iterable*) $tmp627)->$class->itable;
while ($tmp628->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp628 = $tmp628->next;
}
$fn630 $tmp629 = $tmp628->methods[0];
frost$collections$Iterator* $tmp631 = $tmp629(((frost$collections$Iterable*) $tmp627));
goto block90;
block90:;
ITable* $tmp632 = $tmp631->$class->itable;
while ($tmp632->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp632 = $tmp632->next;
}
$fn634 $tmp633 = $tmp632->methods[0];
frost$core$Bit $tmp635 = $tmp633($tmp631);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block92; else goto block91;
block91:;
*(&local26) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
ITable* $tmp637 = $tmp631->$class->itable;
while ($tmp637->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp637 = $tmp637->next;
}
$fn639 $tmp638 = $tmp637->methods[1];
frost$core$Object* $tmp640 = $tmp638($tmp631);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ClassDecl*) $tmp640)));
org$frostlanguage$frostc$ClassDecl* $tmp641 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp641));
*(&local26) = ((org$frostlanguage$frostc$ClassDecl*) $tmp640);
// line 281
org$frostlanguage$frostc$Compiler* $tmp642 = *(&local24);
org$frostlanguage$frostc$ClassDecl* $tmp643 = *(&local26);
org$frostlanguage$frostc$Compiler$markNonExternal$org$frostlanguage$frostc$ClassDecl($tmp642, $tmp643);
frost$core$Frost$unref$frost$core$Object$Q($tmp640);
// unreffing REF($1015:frost.collections.Iterator.T)
org$frostlanguage$frostc$ClassDecl* $tmp644 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp644));
// unreffing cl
*(&local26) = ((org$frostlanguage$frostc$ClassDecl*) NULL);
goto block90;
block92:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
// unreffing REF($1004:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp627));
// unreffing REF($1000:frost.collections.ListView<org.frostlanguage.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp623);
// unreffing REF($989:frost.collections.Iterator.T)
frost$io$File* $tmp645 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing s
*(&local25) = ((frost$io$File*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
// unreffing REF($978:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 284
frost$collections$Array* $tmp646 = *(&local1);
ITable* $tmp647 = ((frost$collections$Iterable*) $tmp646)->$class->itable;
while ($tmp647->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp647 = $tmp647->next;
}
$fn649 $tmp648 = $tmp647->methods[0];
frost$collections$Iterator* $tmp650 = $tmp648(((frost$collections$Iterable*) $tmp646));
goto block93;
block93:;
ITable* $tmp651 = $tmp650->$class->itable;
while ($tmp651->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp651 = $tmp651->next;
}
$fn653 $tmp652 = $tmp651->methods[0];
frost$core$Bit $tmp654 = $tmp652($tmp650);
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block95; else goto block94;
block94:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp656 = $tmp650->$class->itable;
while ($tmp656->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp656 = $tmp656->next;
}
$fn658 $tmp657 = $tmp656->methods[1];
frost$core$Object* $tmp659 = $tmp657($tmp650);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp659)));
frost$io$File* $tmp660 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
*(&local27) = ((frost$io$File*) $tmp659);
// line 285
org$frostlanguage$frostc$Compiler* $tmp661 = *(&local24);
frost$io$File* $tmp662 = *(&local27);
org$frostlanguage$frostc$Compiler$compile$frost$io$File($tmp661, $tmp662);
frost$core$Frost$unref$frost$core$Object$Q($tmp659);
// unreffing REF($1070:frost.collections.Iterator.T)
frost$io$File* $tmp663 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp663));
// unreffing s
*(&local27) = ((frost$io$File*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp650));
// unreffing REF($1059:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 287
org$frostlanguage$frostc$Compiler* $tmp664 = *(&local24);
org$frostlanguage$frostc$Compiler$finish($tmp664);
// line 288
frost$threads$MessageQueue* $tmp665 = *(&local23);
frost$core$Int64 $tmp666 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp665);
*(&local20) = $tmp666;
// line 289
frost$core$Int64 $tmp667 = (frost$core$Int64) {0};
frost$core$Int64 $tmp668 = *(&local20);
frost$core$Bit $tmp669 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp670 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp667, $tmp668, $tmp669);
frost$core$Int64 $tmp671 = $tmp670.min;
*(&local28) = $tmp671;
frost$core$Int64 $tmp672 = $tmp670.max;
frost$core$Bit $tmp673 = $tmp670.inclusive;
bool $tmp674 = $tmp673.value;
frost$core$Int64 $tmp675 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp676 = frost$core$Int64$convert$R$frost$core$UInt64($tmp675);
if ($tmp674) goto block99; else goto block100;
block99:;
int64_t $tmp677 = $tmp671.value;
int64_t $tmp678 = $tmp672.value;
bool $tmp679 = $tmp677 <= $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block96; else goto block97;
block100:;
int64_t $tmp682 = $tmp671.value;
int64_t $tmp683 = $tmp672.value;
bool $tmp684 = $tmp682 < $tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block96; else goto block97;
block96:;
// line 290
frost$threads$MessageQueue* $tmp687 = *(&local23);
frost$core$Immutable* $tmp688 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp687);
*(&local29) = ((org$frostlanguage$frostc$Compiler$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$Compiler$Error*) $tmp688)));
org$frostlanguage$frostc$Compiler$Error* $tmp689 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp689));
*(&local29) = ((org$frostlanguage$frostc$Compiler$Error*) $tmp688);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
// unreffing REF($1130:frost.threads.MessageQueue.T)
// line 291
org$frostlanguage$frostc$Compiler$Error* $tmp690 = *(&local29);
frost$io$File** $tmp691 = &$tmp690->file;
frost$io$File* $tmp692 = *$tmp691;
frost$core$String* $tmp693 = frost$io$File$get_name$R$frost$core$String($tmp692);
frost$core$String* $tmp694 = frost$core$String$convert$R$frost$core$String($tmp693);
frost$core$String* $tmp695 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp694, &$s696);
org$frostlanguage$frostc$Compiler$Error* $tmp697 = *(&local29);
org$frostlanguage$frostc$Position* $tmp698 = &$tmp697->position;
org$frostlanguage$frostc$Position $tmp699 = *$tmp698;
org$frostlanguage$frostc$Position$wrapper* $tmp700;
$tmp700 = (org$frostlanguage$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Position$wrapperclass);
$tmp700->value = $tmp699;
frost$core$String* $tmp701 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp695, ((frost$core$Object*) $tmp700));
frost$core$String* $tmp702 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp701, &$s703);
org$frostlanguage$frostc$Compiler$Error* $tmp704 = *(&local29);
frost$core$String** $tmp705 = &$tmp704->message;
frost$core$String* $tmp706 = *$tmp705;
frost$core$String* $tmp707 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp702, $tmp706);
frost$core$String* $tmp708 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp707, &$s709);
frost$io$Console$printLine$frost$core$String($tmp708);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp708));
// unreffing REF($1159:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp707));
// unreffing REF($1158:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($1154:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
// unreffing REF($1153:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
// unreffing REF($1152:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing REF($1148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp694));
// unreffing REF($1147:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp693));
// unreffing REF($1146:frost.core.String)
org$frostlanguage$frostc$Compiler$Error* $tmp710 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing error
*(&local29) = ((org$frostlanguage$frostc$Compiler$Error*) NULL);
goto block98;
block98:;
frost$core$Int64 $tmp711 = *(&local28);
int64_t $tmp712 = $tmp672.value;
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712 - $tmp713;
frost$core$Int64 $tmp715 = (frost$core$Int64) {$tmp714};
frost$core$UInt64 $tmp716 = frost$core$Int64$convert$R$frost$core$UInt64($tmp715);
if ($tmp674) goto block102; else goto block103;
block102:;
uint64_t $tmp717 = $tmp716.value;
uint64_t $tmp718 = $tmp676.value;
bool $tmp719 = $tmp717 >= $tmp718;
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block101; else goto block97;
block103:;
uint64_t $tmp722 = $tmp716.value;
uint64_t $tmp723 = $tmp676.value;
bool $tmp724 = $tmp722 > $tmp723;
frost$core$Bit $tmp725 = (frost$core$Bit) {$tmp724};
bool $tmp726 = $tmp725.value;
if ($tmp726) goto block101; else goto block97;
block101:;
int64_t $tmp727 = $tmp711.value;
int64_t $tmp728 = $tmp675.value;
int64_t $tmp729 = $tmp727 + $tmp728;
frost$core$Int64 $tmp730 = (frost$core$Int64) {$tmp729};
*(&local28) = $tmp730;
goto block96;
block97:;
org$frostlanguage$frostc$Compiler* $tmp731 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp731));
// unreffing compiler
*(&local24) = ((org$frostlanguage$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp732 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp732));
// unreffing errorQueue
*(&local23) = ((frost$threads$MessageQueue*) NULL);
org$frostlanguage$frostc$Compiler$Settings* $tmp733 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing settings
*(&local22) = ((org$frostlanguage$frostc$Compiler$Settings*) NULL);
org$frostlanguage$frostc$CodeGenerator* $tmp734 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing cg
*(&local21) = ((org$frostlanguage$frostc$CodeGenerator*) NULL);
// line 294
frost$core$Int64 $tmp735 = *(&local20);
frost$core$Int64 $tmp736 = (frost$core$Int64) {0};
frost$core$Bit $tmp737 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp735, $tmp736);
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block104; else goto block106;
block104:;
// line 295
org$frostlanguage$frostc$Main$Format$nullable $tmp739 = *(&local6);
frost$core$Int64 $tmp740 = ((org$frostlanguage$frostc$Main$Format) $tmp739.value).$rawValue;
frost$core$Int64 $tmp741 = (frost$core$Int64) {1};
frost$core$Bit $tmp742 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp740, $tmp741);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block108; else goto block109;
block108:;
// line 297
frost$io$File* $tmp744 = *(&local3);
frost$io$File* $tmp745 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File($tmp744, &$s746);
frost$io$File* $tmp747 = *(&local3);
frost$core$Bit $tmp748 = *(&local8);
frost$io$File* $tmp749 = org$frostlanguage$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp745, $tmp747, $tmp748);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp749));
// unreffing REF($1257:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp745));
// unreffing REF($1253:frost.io.File)
goto block107;
block109:;
frost$core$Int64 $tmp750 = (frost$core$Int64) {2};
frost$core$Bit $tmp751 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp740, $tmp750);
bool $tmp752 = $tmp751.value;
if ($tmp752) goto block110; else goto block107;
block110:;
// line 300
frost$io$File* $tmp753 = *(&local3);
frost$io$File* $tmp754 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File($tmp753, &$s755);
frost$io$File* $tmp756 = *(&local3);
frost$core$Bit $tmp757 = *(&local8);
frost$io$File* $tmp758 = org$frostlanguage$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp754, $tmp756, $tmp757);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
// unreffing REF($1276:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
// unreffing REF($1272:frost.io.File)
goto block107;
block107:;
goto block105;
block106:;
// line 1
// line 305
frost$core$Int64 $tmp759 = *(&local20);
frost$core$Int64 $tmp760 = (frost$core$Int64) {1};
frost$core$Bit $tmp761 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp759, $tmp760);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block111; else goto block113;
block111:;
// line 306
frost$io$Console$printLine$frost$core$String(&$s763);
goto block112;
block113:;
// line 1
// line 309
frost$core$Int64 $tmp764 = *(&local20);
frost$core$String* $tmp765 = frost$core$Int64$convert$R$frost$core$String($tmp764);
frost$core$String* $tmp766 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp765, &$s767);
frost$io$Console$printLine$frost$core$String($tmp766);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
// unreffing REF($1299:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp765));
// unreffing REF($1298:frost.core.String)
goto block112;
block112:;
// line 311
frost$core$UInt8 $tmp768 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp768);
goto block105;
block105:;
frost$io$File* $tmp769 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp769));
// unreffing llvmDir
*(&local18) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp770 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp771 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp772 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp773 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp774 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlanguage$frostc$Main$Arguments* $tmp775 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing args
*(&local0) = ((org$frostlanguage$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlanguage$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 317
frost$core$Bit $tmp776 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s777);
return $tmp776;

}
void frostMain(frost$collections$ListView* param0) {

// line 322
org$frostlanguage$frostc$Main* $tmp778 = (org$frostlanguage$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlanguage$frostc$Main$class);
org$frostlanguage$frostc$Main$init($tmp778);
org$frostlanguage$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp778, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
// unreffing REF($1:org.frostlanguage.frostc.Main)
return;

}
void org$frostlanguage$frostc$Main$cleanup(org$frostlanguage$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp779 = &param0->clang;
frost$io$File* $tmp780 = *$tmp779;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
frost$io$File** $tmp781 = &param0->frostHome;
frost$io$File* $tmp782 = *$tmp781;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
return;

}

