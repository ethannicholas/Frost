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

typedef frost$core$String* (*$fn40)(frost$io$InputStream*);
typedef void (*$fn43)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn49)(frost$io$InputStream*);
typedef void (*$fn52)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn92)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn96)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn101)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn158)(frost$io$InputStream*);
typedef void (*$fn161)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn167)(frost$io$InputStream*);
typedef void (*$fn170)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn188)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn191)(frost$io$OutputStream*);
typedef void (*$fn193)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn196)(frost$io$OutputStream*);
typedef void (*$fn198)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn201)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn221)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn227)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Int64 (*$fn241)(frost$io$InputStream*, frost$io$OutputStream*);
typedef void (*$fn254)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn260)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn271)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn294)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn303)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn326)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn338)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn343)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn385)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$String* (*$fn395)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef frost$core$String* (*$fn403)(org$frostlang$frostc$Main$Arguments*, frost$core$String*);
typedef void (*$fn424)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn438)(frost$collections$CollectionView*);
typedef void (*$fn445)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Int64 (*$fn459)(frost$collections$CollectionView*);
typedef void (*$fn492)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn510)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn515)(frost$io$OutputStream*, frost$core$String*);
typedef void (*$fn520)(frost$io$OutputStream*, frost$core$String*);
typedef frost$core$Bit (*$fn531)(frost$core$Equatable*, frost$core$Equatable*);
typedef void (*$fn546)(org$frostlang$frostc$HTMLProcessor*, frost$io$File*, frost$io$File*, frost$core$String*);
typedef void (*$fn559)(frost$io$OutputStream*, frost$core$String*);
typedef frost$collections$Iterator* (*$fn615)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn619)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn624)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn632)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn636)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn641)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn651)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn655)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn660)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e", 25, -2845835638820544359, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s80 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x66\x72\x6f\x73\x74", 7, 156127765601112, NULL };
static frost$core$String $s82 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static frost$core$String $s84 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3b", 1, 160, NULL };
static frost$core$String $s111 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s130 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static frost$core$String $s135 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static frost$core$String $s137 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static frost$core$String $s142 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static frost$core$String $s144 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s189 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x66\x72\x6f\x73\x74\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -2999112433744991273, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x66\x72\x6f\x73\x74\x27\x2e", 38, 893295268838200741, NULL };
static frost$core$String $s199 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static frost$core$String $s202 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static frost$core$String $s232 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static frost$core$String $s235 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x66\x72\x6f\x73\x74", 15, -4231800708310477877, NULL };
static frost$core$String $s247 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static frost$core$String $s255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static frost$core$String $s262 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static frost$core$String $s267 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static frost$core$String $s273 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static frost$core$String $s299 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static frost$core$String $s305 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static frost$core$String $s327 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static frost$core$String $s345 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f", 1, 212, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68", 1, 205, NULL };
static frost$core$String $s369 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63", 1, 200, NULL };
static frost$core$String $s374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static frost$core$String $s383 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static frost$core$String $s397 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static frost$core$String $s405 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static frost$core$String $s409 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x66\x72\x6f\x73\x74", 6, 1555717532905, NULL };
static frost$core$String $s420 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static frost$core$String $s422 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x27", 1, 140, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static frost$core$String $s446 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s471 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s487 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static frost$core$String $s493 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static frost$core$String $s521 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e", 1, 147, NULL };
static frost$core$String $s560 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static frost$core$String $s698 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a", 1, 159, NULL };
static frost$core$String $s705 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static frost$core$String $s711 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s748 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s757 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static frost$core$String $s765 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static frost$core$String $s769 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static frost$core$String $s779 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

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
frost$core$Error* $tmp57 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
// unreffing REF($117:frost.core.Error?)
goto block4;
block4:;
// line 78
frost$core$Int64 $tmp58 = *(&local2);
frost$core$Int64 $tmp59 = (frost$core$Int64) {0};
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59.value;
bool $tmp62 = $tmp60 != $tmp61;
frost$core$Bit $tmp63 = (frost$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block5; else goto block6;
block5:;
// line 79
frost$core$UInt8 $tmp65 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp65);
goto block6;
block6:;
// line 81
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp66 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// unreffing p
*(&local1) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp67 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp67));
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
frost$collections$Array* $tmp68 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp68);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
frost$collections$Array* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local0) = $tmp68;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
// unreffing REF($1:frost.collections.Array<frost.core.String>)
// line 86
frost$collections$Array* $tmp70 = *(&local0);
frost$core$String** $tmp71 = &param1->path;
frost$core$String* $tmp72 = *$tmp71;
frost$collections$Array$add$frost$collections$Array$T($tmp70, ((frost$core$Object*) $tmp72));
// line 87
frost$collections$Array* $tmp73 = *(&local0);
frost$core$String* $tmp74 = org$frostlang$frostc$Config$frostLibDir$R$frost$core$String();
frost$core$String* $tmp75 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s76, $tmp74);
frost$core$String* $tmp77 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp75, &$s78);
frost$collections$Array$add$frost$collections$Array$T($tmp73, ((frost$core$Object*) $tmp77));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
// unreffing REF($25:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($24:frost.core.String)
// line 88
frost$collections$Array* $tmp79 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp79, ((frost$core$Object*) &$s80));
// line 89
frost$collections$Array* $tmp81 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp81, ((frost$core$Object*) &$s82));
// line 90
frost$collections$Array* $tmp83 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp83, ((frost$core$Object*) &$s84));
// line 91
frost$core$String* $tmp85 = org$frostlang$frostc$Config$icuLibraries$R$frost$core$String();
frost$collections$Array* $tmp86 = frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT($tmp85, &$s87);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$collections$Array* $tmp88 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
*(&local1) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($55:frost.collections.Array<frost.core.String>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing REF($54:frost.core.String)
// line 92
frost$collections$Array* $tmp89 = *(&local1);
ITable* $tmp90 = ((frost$collections$Iterable*) $tmp89)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$collections$Iterator* $tmp93 = $tmp91(((frost$collections$Iterable*) $tmp89));
goto block1;
block1:;
ITable* $tmp94 = $tmp93->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$core$Bit $tmp97 = $tmp95($tmp93);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$String*) NULL);
ITable* $tmp99 = $tmp93->$class->itable;
while ($tmp99->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp99 = $tmp99->next;
}
$fn101 $tmp100 = $tmp99->methods[1];
frost$core$Object* $tmp102 = $tmp100($tmp93);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) $tmp102)));
frost$core$String* $tmp103 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
*(&local2) = ((frost$core$String*) $tmp102);
// line 93
frost$io$File* $tmp104 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp105 = *(&local2);
frost$io$File$init$frost$core$String($tmp104, $tmp105);
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
frost$io$File* $tmp106 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local3) = $tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
// unreffing REF($94:frost.io.File)
// line 94
frost$collections$Array* $tmp107 = *(&local0);
frost$io$File* $tmp108 = *(&local3);
frost$io$File* $tmp109 = frost$io$File$get_parent$R$frost$io$File$Q($tmp108);
frost$core$String* $tmp110 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s111, ((frost$core$Object*) $tmp109));
frost$collections$Array$add$frost$collections$Array$T($tmp107, ((frost$core$Object*) $tmp110));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($114:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing REF($111:frost.io.File?)
// line 95
frost$io$File* $tmp112 = *(&local3);
frost$core$String* $tmp113 = frost$io$File$get_simpleName$R$frost$core$String($tmp112);
*(&local4) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$String* $tmp114 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
*(&local4) = $tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
// unreffing REF($125:frost.core.String)
// line 96
frost$core$String* $tmp115 = *(&local4);
frost$core$Bit $tmp116 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit($tmp115, &$s117);
bool $tmp118 = $tmp116.value;
if ($tmp118) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {96};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s120, $tmp119);
abort(); // unreachable
block4:;
// line 97
frost$core$String* $tmp121 = *(&local4);
frost$core$Int64 $tmp122 = (frost$core$Int64) {3};
frost$core$Bit $tmp123 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp124 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp122, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp123);
frost$core$String* $tmp125 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String($tmp121, $tmp124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$core$String* $tmp126 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local4) = $tmp125;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
// unreffing REF($150:frost.core.String)
// line 98
frost$collections$Array* $tmp127 = *(&local0);
frost$core$String* $tmp128 = *(&local4);
frost$core$String* $tmp129 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s130, $tmp128);
frost$collections$Array$add$frost$collections$Array$T($tmp127, ((frost$core$Object*) $tmp129));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
// unreffing REF($164:frost.core.String)
frost$core$String* $tmp131 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
// unreffing simpleName
*(&local4) = ((frost$core$String*) NULL);
frost$io$File* $tmp132 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing libFile
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
// unreffing REF($85:frost.collections.Iterator.T)
frost$core$String* $tmp133 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
// unreffing lib
*(&local2) = ((frost$core$String*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
// unreffing REF($74:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 100
frost$collections$Array* $tmp134 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp134, ((frost$core$Object*) &$s135));
// line 101
frost$collections$Array* $tmp136 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp136, ((frost$core$Object*) &$s137));
// line 102
frost$core$Bit* $tmp138 = &param0->debug;
frost$core$Bit $tmp139 = *$tmp138;
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block6; else goto block7;
block6:;
// line 103
frost$collections$Array* $tmp141 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp141, ((frost$core$Object*) &$s142));
goto block7;
block7:;
// line 105
frost$collections$Array* $tmp143 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T($tmp143, ((frost$core$Object*) &$s144));
// line 106
frost$collections$Array* $tmp145 = *(&local0);
frost$core$String** $tmp146 = &param2->path;
frost$core$String* $tmp147 = *$tmp146;
frost$collections$Array$add$frost$collections$Array$T($tmp145, ((frost$core$Object*) $tmp147));
// line 107
frost$io$File** $tmp148 = &param0->clang;
frost$io$File* $tmp149 = *$tmp148;
frost$collections$Array* $tmp150 = *(&local0);
frost$core$System$Process* $tmp151 = frost$core$System$exec$frost$io$File$frost$collections$ListView$LTfrost$core$String$GT$R$frost$core$System$Process$Q($tmp149, ((frost$collections$ListView*) $tmp150));
*(&local5) = ((frost$core$System$Process*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$System$Process* $tmp152 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
*(&local5) = $tmp151;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
// unreffing REF($230:frost.core.System.Process?)
// line 108
frost$io$OutputStream* $tmp153 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp154 = *(&local5);
frost$io$InputStream** $tmp155 = &$tmp154->output;
frost$io$InputStream* $tmp156 = *$tmp155;
$fn158 $tmp157 = ($fn158) $tmp156->$class->vtable[14];
frost$core$String* $tmp159 = $tmp157($tmp156);
$fn161 $tmp160 = ($fn161) $tmp153->$class->vtable[17];
$tmp160($tmp153, $tmp159);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
// unreffing REF($248:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
// unreffing REF($242:frost.io.OutputStream)
// line 109
frost$io$OutputStream* $tmp162 = frost$io$Console$errorStream$R$frost$io$OutputStream();
frost$core$System$Process* $tmp163 = *(&local5);
frost$io$InputStream** $tmp164 = &$tmp163->error;
frost$io$InputStream* $tmp165 = *$tmp164;
$fn167 $tmp166 = ($fn167) $tmp165->$class->vtable[14];
frost$core$String* $tmp168 = $tmp166($tmp165);
$fn170 $tmp169 = ($fn170) $tmp162->$class->vtable[17];
$tmp169($tmp162, $tmp168);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
// unreffing REF($264:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
// unreffing REF($258:frost.io.OutputStream)
// line 110
frost$core$System$Process* $tmp171 = *(&local5);
frost$core$Int64 $tmp172;
frost$core$System$Process$waitFor$R$frost$core$Int64(&$tmp172, $tmp171);
*(&local6) = $tmp172;
// line 111
frost$core$Bit $tmp173 = frost$core$Bit$$NOT$R$frost$core$Bit(param3);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block8; else goto block9;
block8:;
// line 112
frost$core$Error* $tmp175 = frost$io$File$delete$R$frost$core$Error$Q(param1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// unreffing REF($283:frost.core.Error?)
goto block9;
block9:;
// line 114
frost$core$Int64 $tmp176 = *(&local6);
frost$core$Int64 $tmp177 = (frost$core$Int64) {0};
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177.value;
bool $tmp180 = $tmp178 != $tmp179;
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block10; else goto block11;
block10:;
// line 115
frost$core$UInt8 $tmp183 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp183);
goto block11;
block11:;
// line 117
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$System$Process* $tmp184 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
// unreffing p
*(&local5) = ((frost$core$System$Process*) NULL);
frost$collections$Array* $tmp185 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp185));
// unreffing icuLibs
*(&local1) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp186 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp186));
// unreffing args
*(&local0) = ((frost$collections$Array*) NULL);
return param2;

}
void org$frostlang$frostc$Main$printUsage$frost$io$OutputStream(org$frostlang$frostc$Main* param0, frost$io$OutputStream* param1) {

// line 121
$fn188 $tmp187 = ($fn188) param1->$class->vtable[19];
$tmp187(param1, &$s189);
// line 122
$fn191 $tmp190 = ($fn191) param1->$class->vtable[21];
$tmp190(param1);
// line 123
$fn193 $tmp192 = ($fn193) param1->$class->vtable[19];
$tmp192(param1, &$s194);
// line 124
$fn196 $tmp195 = ($fn196) param1->$class->vtable[21];
$tmp195(param1);
// line 125
$fn198 $tmp197 = ($fn198) param1->$class->vtable[19];
$tmp197(param1, &$s199);
// line 126
$fn201 $tmp200 = ($fn201) param1->$class->vtable[19];
$tmp200(param1, &$s202);
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
org$frostlang$frostc$Main$Arguments* $tmp203 = (org$frostlang$frostc$Main$Arguments*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Main$Arguments$class);
org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT($tmp203, param1);
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
org$frostlang$frostc$Main$Arguments* $tmp204 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp204));
*(&local0) = $tmp203;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp203));
// unreffing REF($1:org.frostlang.frostc.Main.Arguments)
// line 131
frost$collections$Array* $tmp205 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp205);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
frost$collections$Array* $tmp206 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp206));
*(&local1) = $tmp205;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp205));
// unreffing REF($14:frost.collections.Array<frost.io.File>)
// line 132
frost$collections$Array* $tmp207 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp207);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
frost$collections$Array* $tmp208 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local2) = $tmp207;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp207));
// unreffing REF($28:frost.collections.Array<frost.io.File>)
// line 133
frost$collections$Array* $tmp209 = *(&local2);
frost$io$File** $tmp210 = &param0->frostHome;
frost$io$File* $tmp211 = *$tmp210;
frost$collections$Array$add$frost$collections$Array$T($tmp209, ((frost$core$Object*) $tmp211));
// line 134
*(&local3) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) NULL)));
frost$io$File* $tmp212 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local3) = ((frost$io$File*) NULL);
// line 135
frost$core$Int64 $tmp213 = (frost$core$Int64) {3};
*(&local4) = $tmp213;
// line 136
frost$core$Int64 $tmp214 = (frost$core$Int64) {3};
*(&local5) = $tmp214;
// line 137
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { .nonnull = false });
// line 138
*(&local7) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String* $tmp215 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp215));
*(&local7) = ((frost$core$String*) NULL);
// line 139
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp216;
// line 140
frost$io$OutputStream* $tmp217 = frost$io$Console$errorStream$R$frost$io$OutputStream();
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
frost$io$OutputStream* $tmp218 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp218));
*(&local9) = $tmp217;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp217));
// unreffing REF($76:frost.io.OutputStream)
// line 141
goto block1;
block1:;
org$frostlang$frostc$Main$Arguments* $tmp219 = *(&local0);
$fn221 $tmp220 = ($fn221) $tmp219->$class->vtable[2];
frost$core$Bit $tmp222 = $tmp220($tmp219);
frost$core$Bit $tmp223 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block2; else goto block3;
block2:;
// line 142
org$frostlang$frostc$Main$Arguments* $tmp225 = *(&local0);
$fn227 $tmp226 = ($fn227) $tmp225->$class->vtable[3];
frost$core$String* $tmp228 = $tmp226($tmp225);
*(&local10) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$String* $tmp229 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local10) = $tmp228;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
// unreffing REF($98:frost.core.String)
// line 143
frost$core$String* $tmp230 = *(&local10);
frost$core$Bit $tmp231 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp230, &$s232);
bool $tmp233 = $tmp231.value;
if ($tmp233) goto block5; else goto block6;
block5:;
// line 145
frost$io$File* $tmp234 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp234, &$s235);
*(&local11) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
frost$io$File* $tmp236 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp236));
*(&local11) = $tmp234;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp234));
// unreffing REF($115:frost.io.File)
// line 146
frost$io$InputStream* $tmp237 = frost$io$Console$inputStream$R$frost$io$InputStream();
frost$io$File* $tmp238 = *(&local11);
frost$io$OutputStream* $tmp239 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp238);
$fn241 $tmp240 = ($fn241) $tmp237->$class->vtable[17];
frost$core$Int64 $tmp242 = $tmp240($tmp237, $tmp239);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp239));
// unreffing REF($130:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp237));
// unreffing REF($128:frost.io.InputStream)
// line 147
frost$collections$Array* $tmp243 = *(&local1);
frost$io$File* $tmp244 = *(&local11);
frost$collections$Array$add$frost$collections$Array$T($tmp243, ((frost$core$Object*) $tmp244));
frost$io$File* $tmp245 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
// unreffing path
*(&local11) = ((frost$io$File*) NULL);
goto block4;
block6:;
frost$core$Bit $tmp246 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp230, &$s247);
bool $tmp248 = $tmp246.value;
if ($tmp248) goto block7; else goto block8;
block7:;
// line 150
frost$io$File* $tmp249 = *(&local3);
frost$core$Bit $tmp250 = frost$core$Bit$init$builtin_bit($tmp249 != NULL);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block9; else goto block10;
block9:;
// line 151
frost$io$OutputStream* $tmp252 = *(&local9);
$fn254 $tmp253 = ($fn254) $tmp252->$class->vtable[19];
$tmp253($tmp252, &$s255);
// line 152
frost$core$UInt8 $tmp256 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp256);
goto block10;
block10:;
// line 154
frost$io$File* $tmp257 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp258 = *(&local0);
$fn260 $tmp259 = ($fn260) $tmp258->$class->vtable[4];
frost$core$String* $tmp261 = $tmp259($tmp258, &$s262);
frost$io$File$init$frost$core$String($tmp257, $tmp261);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
frost$io$File* $tmp263 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp263));
*(&local3) = $tmp257;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp261));
// unreffing REF($172:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
// unreffing REF($169:frost.io.File)
// line 155
frost$io$File* $tmp264 = *(&local3);
frost$io$File* $tmp265 = frost$io$File$get_parent$R$frost$io$File$Q($tmp264);
frost$io$File$createDirectories($tmp265);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp265));
// unreffing REF($190:frost.io.File?)
goto block4;
block8:;
frost$core$Bit $tmp266 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp230, &$s267);
bool $tmp268 = $tmp266.value;
if ($tmp268) goto block11; else goto block12;
block11:;
// line 158
org$frostlang$frostc$Main$Arguments* $tmp269 = *(&local0);
$fn271 $tmp270 = ($fn271) $tmp269->$class->vtable[4];
frost$core$String* $tmp272 = $tmp270($tmp269, &$s273);
*(&local12) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
frost$core$String* $tmp274 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp274));
*(&local12) = $tmp272;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp272));
// unreffing REF($203:frost.core.String)
// line 159
frost$core$String* $tmp275 = *(&local12);
frost$core$Int64$nullable $tmp276 = frost$core$String$convert$R$frost$core$Int64$Q($tmp275);
*(&local4) = ((frost$core$Int64) $tmp276.value);
// line 160
frost$core$Int64 $tmp277 = *(&local4);
frost$core$Int64 $tmp278 = (frost$core$Int64) {3};
int64_t $tmp279 = $tmp277.value;
int64_t $tmp280 = $tmp278.value;
bool $tmp281 = $tmp279 > $tmp280;
frost$core$Bit $tmp282 = (frost$core$Bit) {$tmp281};
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block15; else goto block16;
block15:;
*(&local13) = $tmp282;
goto block17;
block16:;
frost$core$Int64 $tmp284 = *(&local4);
frost$core$Int64 $tmp285 = (frost$core$Int64) {0};
int64_t $tmp286 = $tmp284.value;
int64_t $tmp287 = $tmp285.value;
bool $tmp288 = $tmp286 < $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
*(&local13) = $tmp289;
goto block17;
block17:;
frost$core$Bit $tmp290 = *(&local13);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block13; else goto block14;
block13:;
// line 161
frost$io$OutputStream* $tmp292 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn294 $tmp293 = ($fn294) $tmp292->$class->vtable[19];
$tmp293($tmp292, &$s295);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp292));
// unreffing REF($242:frost.io.OutputStream)
// line 162
frost$core$UInt8 $tmp296 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp296);
goto block14;
block14:;
frost$core$String* $tmp297 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
// unreffing level
*(&local12) = ((frost$core$String*) NULL);
goto block4;
block12:;
frost$core$Bit $tmp298 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp230, &$s299);
bool $tmp300 = $tmp298.value;
if ($tmp300) goto block18; else goto block19;
block18:;
// line 166
org$frostlang$frostc$Main$Arguments* $tmp301 = *(&local0);
$fn303 $tmp302 = ($fn303) $tmp301->$class->vtable[4];
frost$core$String* $tmp304 = $tmp302($tmp301, &$s305);
*(&local14) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
frost$core$String* $tmp306 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp306));
*(&local14) = $tmp304;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp304));
// unreffing REF($264:frost.core.String)
// line 167
frost$core$String* $tmp307 = *(&local14);
frost$core$Int64$nullable $tmp308 = frost$core$String$convert$R$frost$core$Int64$Q($tmp307);
*(&local5) = ((frost$core$Int64) $tmp308.value);
// line 168
frost$core$Int64 $tmp309 = *(&local5);
frost$core$Int64 $tmp310 = (frost$core$Int64) {3};
int64_t $tmp311 = $tmp309.value;
int64_t $tmp312 = $tmp310.value;
bool $tmp313 = $tmp311 > $tmp312;
frost$core$Bit $tmp314 = (frost$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block22; else goto block23;
block22:;
*(&local15) = $tmp314;
goto block24;
block23:;
frost$core$Int64 $tmp316 = *(&local5);
frost$core$Int64 $tmp317 = (frost$core$Int64) {0};
int64_t $tmp318 = $tmp316.value;
int64_t $tmp319 = $tmp317.value;
bool $tmp320 = $tmp318 < $tmp319;
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
*(&local15) = $tmp321;
goto block24;
block24:;
frost$core$Bit $tmp322 = *(&local15);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block20; else goto block21;
block20:;
// line 169
frost$io$OutputStream* $tmp324 = frost$io$Console$errorStream$R$frost$io$OutputStream();
$fn326 $tmp325 = ($fn326) $tmp324->$class->vtable[19];
$tmp325($tmp324, &$s327);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp324));
// unreffing REF($303:frost.io.OutputStream)
// line 170
frost$core$UInt8 $tmp328 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp328);
goto block21;
block21:;
frost$core$String* $tmp329 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp329));
// unreffing level
*(&local14) = ((frost$core$String*) NULL);
goto block4;
block19:;
frost$core$Bit $tmp330 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp230, &$s331);
bool $tmp332 = $tmp330.value;
if ($tmp332) goto block25; else goto block26;
block25:;
// line 174
org$frostlang$frostc$Main$Format$nullable $tmp333 = *(&local6);
frost$core$Bit $tmp334 = frost$core$Bit$init$builtin_bit($tmp333.nonnull);
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block27; else goto block28;
block27:;
// line 175
frost$io$OutputStream* $tmp336 = *(&local9);
$fn338 $tmp337 = ($fn338) $tmp336->$class->vtable[19];
$tmp337($tmp336, &$s339);
// line 176
frost$core$UInt8 $tmp340 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp340);
goto block28;
block28:;
// line 178
org$frostlang$frostc$Main$Arguments* $tmp341 = *(&local0);
$fn343 $tmp342 = ($fn343) $tmp341->$class->vtable[4];
frost$core$String* $tmp344 = $tmp342($tmp341, &$s345);
*(&local16) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
frost$core$String* $tmp346 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp346));
*(&local16) = $tmp344;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp344));
// unreffing REF($339:frost.core.String)
// line 179
frost$core$String* $tmp347 = *(&local16);
frost$core$Bit $tmp348 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp347, &$s349);
bool $tmp350 = $tmp348.value;
if ($tmp350) goto block30; else goto block31;
block30:;
// line 180
frost$core$Int64 $tmp351 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp352 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp351);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp352, true });
goto block29;
block31:;
frost$core$Bit $tmp353 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp347, &$s354);
bool $tmp355 = $tmp353.value;
if ($tmp355) goto block32; else goto block33;
block32:;
// line 181
frost$core$Int64 $tmp356 = (frost$core$Int64) {2};
org$frostlang$frostc$Main$Format $tmp357 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp356);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp357, true });
goto block29;
block33:;
frost$core$Bit $tmp358 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp347, &$s359);
bool $tmp360 = $tmp358.value;
if ($tmp360) goto block34; else goto block35;
block34:;
// line 182
frost$core$Int64 $tmp361 = (frost$core$Int64) {0};
org$frostlang$frostc$Main$Format $tmp362 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp361);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp362, true });
goto block29;
block35:;
frost$core$Bit $tmp363 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp347, &$s364);
bool $tmp365 = $tmp363.value;
if ($tmp365) goto block36; else goto block37;
block36:;
// line 183
frost$core$Int64 $tmp366 = (frost$core$Int64) {3};
org$frostlang$frostc$Main$Format $tmp367 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp366);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp367, true });
goto block29;
block37:;
frost$core$Bit $tmp368 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp347, &$s369);
bool $tmp370 = $tmp368.value;
if ($tmp370) goto block38; else goto block39;
block38:;
// line 184
frost$core$Int64 $tmp371 = (frost$core$Int64) {4};
org$frostlang$frostc$Main$Format $tmp372 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp371);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp372, true });
goto block29;
block39:;
frost$core$Bit $tmp373 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp347, &$s374);
bool $tmp375 = $tmp373.value;
if ($tmp375) goto block40; else goto block41;
block40:;
// line 185
frost$core$Int64 $tmp376 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp377 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp376);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp377, true });
goto block29;
block41:;
// line 187
frost$io$OutputStream* $tmp378 = *(&local9);
frost$core$String* $tmp379 = *(&local16);
frost$core$String* $tmp380 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s381, $tmp379);
frost$core$String* $tmp382 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp380, &$s383);
$fn385 $tmp384 = ($fn385) $tmp378->$class->vtable[19];
$tmp384($tmp378, $tmp382);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp382));
// unreffing REF($410:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp380));
// unreffing REF($409:frost.core.String)
// line 188
frost$core$UInt8 $tmp386 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp386);
goto block29;
block29:;
frost$core$String* $tmp387 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
// unreffing f
*(&local16) = ((frost$core$String*) NULL);
goto block4;
block26:;
frost$core$Bit $tmp388 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp230, &$s389);
bool $tmp390 = $tmp388.value;
if ($tmp390) goto block42; else goto block43;
block42:;
// line 193
frost$collections$Array* $tmp391 = *(&local2);
frost$io$File* $tmp392 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
org$frostlang$frostc$Main$Arguments* $tmp393 = *(&local0);
$fn395 $tmp394 = ($fn395) $tmp393->$class->vtable[4];
frost$core$String* $tmp396 = $tmp394($tmp393, &$s397);
frost$io$File$init$frost$core$String($tmp392, $tmp396);
frost$collections$Array$add$frost$collections$Array$T($tmp391, ((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp396));
// unreffing REF($438:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
// unreffing REF($435:frost.io.File)
goto block4;
block43:;
frost$core$Bit $tmp398 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit($tmp230, &$s399);
bool $tmp400 = $tmp398.value;
if ($tmp400) goto block44; else goto block45;
block44:;
// line 196
org$frostlang$frostc$Main$Arguments* $tmp401 = *(&local0);
$fn403 $tmp402 = ($fn403) $tmp401->$class->vtable[4];
frost$core$String* $tmp404 = $tmp402($tmp401, &$s405);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
frost$core$String* $tmp406 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp406));
*(&local7) = $tmp404;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp404));
// unreffing REF($455:frost.core.String)
goto block4;
block45:;
// line 199
frost$core$String* $tmp407 = *(&local10);
frost$core$Bit $tmp408 = frost$core$String$endsWith$frost$core$String$R$frost$core$Bit($tmp407, &$s409);
bool $tmp410 = $tmp408.value;
if ($tmp410) goto block46; else goto block48;
block46:;
// line 200
frost$io$File* $tmp411 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp412 = *(&local10);
frost$io$File$init$frost$core$String($tmp411, $tmp412);
*(&local17) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
frost$io$File* $tmp413 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp413));
*(&local17) = $tmp411;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
// unreffing REF($473:frost.io.File)
// line 202
frost$collections$Array* $tmp414 = *(&local1);
frost$io$File* $tmp415 = *(&local17);
frost$collections$Array$add$frost$collections$Array$T($tmp414, ((frost$core$Object*) $tmp415));
frost$io$File* $tmp416 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp416));
// unreffing f
*(&local17) = ((frost$io$File*) NULL);
goto block47;
block48:;
// line 1
// line 206
frost$io$OutputStream* $tmp417 = *(&local9);
frost$core$String* $tmp418 = *(&local10);
frost$core$String* $tmp419 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s420, $tmp418);
frost$core$String* $tmp421 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp419, &$s422);
$fn424 $tmp423 = ($fn424) $tmp417->$class->vtable[19];
$tmp423($tmp417, $tmp421);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp421));
// unreffing REF($503:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp419));
// unreffing REF($502:frost.core.String)
// line 207
frost$core$UInt8 $tmp425 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp425);
goto block47;
block47:;
goto block4;
block4:;
frost$core$String* $tmp426 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp426));
// unreffing a
*(&local10) = ((frost$core$String*) NULL);
goto block1;
block3:;
// line 212
frost$io$File* $tmp427 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$core$String* $tmp428 = org$frostlang$frostc$Config$llvmDir$R$frost$core$String();
frost$io$File$init$frost$core$String($tmp427, $tmp428);
*(&local18) = ((frost$io$File*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
frost$io$File* $tmp429 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
*(&local18) = $tmp427;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp428));
// unreffing REF($525:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp427));
// unreffing REF($524:frost.io.File)
// line 213
frost$io$File* $tmp430 = (frost$io$File*) frostObjectAlloc(24, (frost$core$Class*) &frost$io$File$class);
frost$io$File$init$frost$core$String($tmp430, &$s431);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$io$File** $tmp432 = &param0->clang;
frost$io$File* $tmp433 = *$tmp432;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp433));
frost$io$File** $tmp434 = &param0->clang;
*$tmp434 = $tmp430;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
// unreffing REF($541:frost.io.File)
// line 214
frost$collections$Array* $tmp435 = *(&local1);
ITable* $tmp436 = ((frost$collections$CollectionView*) $tmp435)->$class->itable;
while ($tmp436->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp436 = $tmp436->next;
}
$fn438 $tmp437 = $tmp436->methods[0];
frost$core$Int64 $tmp439 = $tmp437(((frost$collections$CollectionView*) $tmp435));
frost$core$Int64 $tmp440 = (frost$core$Int64) {0};
frost$core$Bit $tmp441 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp439, $tmp440);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block49; else goto block50;
block49:;
// line 215
frost$io$OutputStream* $tmp443 = *(&local9);
$fn445 $tmp444 = ($fn445) $tmp443->$class->vtable[19];
$tmp444($tmp443, &$s446);
// line 216
frost$core$UInt8 $tmp447 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp447);
goto block50;
block50:;
// line 218
org$frostlang$frostc$Main$Format$nullable $tmp448 = *(&local6);
frost$core$Bit $tmp449 = frost$core$Bit$init$builtin_bit(!$tmp448.nonnull);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block51; else goto block52;
block51:;
// line 219
frost$core$Int64 $tmp451 = (frost$core$Int64) {1};
org$frostlang$frostc$Main$Format $tmp452 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp451);
*(&local6) = ((org$frostlang$frostc$Main$Format$nullable) { $tmp452, true });
goto block52;
block52:;
// line 221
frost$io$File* $tmp453 = *(&local3);
frost$core$Bit $tmp454 = frost$core$Bit$init$builtin_bit($tmp453 == NULL);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block53; else goto block54;
block53:;
// line 222
frost$collections$Array* $tmp456 = *(&local1);
ITable* $tmp457 = ((frost$collections$CollectionView*) $tmp456)->$class->itable;
while ($tmp457->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[0];
frost$core$Int64 $tmp460 = $tmp458(((frost$collections$CollectionView*) $tmp456));
frost$core$Int64 $tmp461 = (frost$core$Int64) {1};
frost$core$Bit $tmp462 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp460, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block55; else goto block57;
block55:;
// line 223
*(&local19) = ((frost$core$String*) NULL);
// line 224
org$frostlang$frostc$Main$Format$nullable $tmp464 = *(&local6);
frost$core$Int64 $tmp465 = ((org$frostlang$frostc$Main$Format) $tmp464.value).$rawValue;
frost$core$Int64 $tmp466 = (frost$core$Int64) {1};
frost$core$Bit $tmp467 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp465, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block59; else goto block60;
block59:;
// line 225
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s469));
frost$core$String* $tmp470 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp470));
*(&local19) = &$s471;
goto block58;
block60:;
frost$core$Int64 $tmp472 = (frost$core$Int64) {2};
frost$core$Bit $tmp473 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp465, $tmp472);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block61; else goto block62;
block61:;
// line 226
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s475));
frost$core$String* $tmp476 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp476));
*(&local19) = &$s477;
goto block58;
block62:;
frost$core$Int64 $tmp478 = (frost$core$Int64) {0};
frost$core$Bit $tmp479 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp465, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block63; else goto block64;
block63:;
// line 227
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s481));
frost$core$String* $tmp482 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
*(&local19) = &$s483;
goto block58;
block64:;
frost$core$Int64 $tmp484 = (frost$core$Int64) {5};
frost$core$Bit $tmp485 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp465, $tmp484);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block65; else goto block66;
block65:;
// line 228
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s487));
frost$core$String* $tmp488 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local19) = &$s489;
goto block58;
block66:;
// line 230
frost$io$OutputStream* $tmp490 = *(&local9);
$fn492 $tmp491 = ($fn492) $tmp490->$class->vtable[19];
$tmp491($tmp490, &$s493);
// line 231
frost$core$UInt8 $tmp494 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp494);
goto block58;
block58:;
// line 234
frost$collections$Array* $tmp495 = *(&local1);
frost$core$Int64 $tmp496 = (frost$core$Int64) {0};
frost$core$Object* $tmp497 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp495, $tmp496);
frost$core$String* $tmp498 = *(&local19);
frost$io$File* $tmp499 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File(((frost$io$File*) $tmp497), $tmp498);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
frost$io$File* $tmp500 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
*(&local3) = $tmp499;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp499));
// unreffing REF($667:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q($tmp497);
// unreffing REF($664:frost.collections.Array.T)
frost$core$String* $tmp501 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// unreffing extension
*(&local19) = ((frost$core$String*) NULL);
goto block56;
block57:;
// line 236
org$frostlang$frostc$Main$Format$nullable $tmp502 = *(&local6);
frost$core$Equatable* $tmp503;
if ($tmp502.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp504;
    $tmp504 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp504->value = ((org$frostlang$frostc$Main$Format) $tmp502.value);
    $tmp503 = ((frost$core$Equatable*) $tmp504);
}
else {
    $tmp503 = NULL;
}
frost$core$Int64 $tmp505 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp506 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp505);
org$frostlang$frostc$Main$Format$wrapper* $tmp507;
$tmp507 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp507->value = $tmp506;
ITable* $tmp508 = $tmp503->$class->itable;
while ($tmp508->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp508 = $tmp508->next;
}
$fn510 $tmp509 = $tmp508->methods[0];
frost$core$Bit $tmp511 = $tmp509($tmp503, ((frost$core$Equatable*) $tmp507));
bool $tmp512 = $tmp511.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp507)));
// unreffing REF($693:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
// unreffing REF($689:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp512) goto block67; else goto block69;
block67:;
// line 237
frost$io$OutputStream* $tmp513 = *(&local9);
$fn515 $tmp514 = ($fn515) $tmp513->$class->vtable[19];
$tmp514($tmp513, &$s516);
// line 238
frost$core$UInt8 $tmp517 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp517);
goto block68;
block69:;
// line 1
// line 241
frost$io$OutputStream* $tmp518 = *(&local9);
$fn520 $tmp519 = ($fn520) $tmp518->$class->vtable[19];
$tmp519($tmp518, &$s521);
// line 243
frost$core$UInt8 $tmp522 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp522);
goto block68;
block68:;
goto block56;
block56:;
goto block54;
block54:;
// line 246
org$frostlang$frostc$Main$Format$nullable $tmp523 = *(&local6);
frost$core$Equatable* $tmp524;
if ($tmp523.nonnull) {
    org$frostlang$frostc$Main$Format$wrapper* $tmp525;
    $tmp525 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
    $tmp525->value = ((org$frostlang$frostc$Main$Format) $tmp523.value);
    $tmp524 = ((frost$core$Equatable*) $tmp525);
}
else {
    $tmp524 = NULL;
}
frost$core$Int64 $tmp526 = (frost$core$Int64) {5};
org$frostlang$frostc$Main$Format $tmp527 = org$frostlang$frostc$Main$Format$init$frost$core$Int64($tmp526);
org$frostlang$frostc$Main$Format$wrapper* $tmp528;
$tmp528 = (org$frostlang$frostc$Main$Format$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Main$Format$wrapperclass);
$tmp528->value = $tmp527;
ITable* $tmp529 = $tmp524->$class->itable;
while ($tmp529->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp529 = $tmp529->next;
}
$fn531 $tmp530 = $tmp529->methods[0];
frost$core$Bit $tmp532 = $tmp530($tmp524, ((frost$core$Equatable*) $tmp528));
bool $tmp533 = $tmp532.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp528)));
// unreffing REF($729:frost.core.Equatable.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
// unreffing REF($725:frost.core.Equatable<org.frostlang.frostc.Main.Format>)
if ($tmp533) goto block70; else goto block71;
block70:;
// line 247
frost$core$String* $tmp534 = *(&local7);
frost$core$Bit $tmp535 = frost$core$Bit$init$builtin_bit($tmp534 == NULL);
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block72; else goto block73;
block72:;
// line 248
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s537));
frost$core$String* $tmp538 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp538));
*(&local7) = &$s537;
goto block73;
block73:;
// line 250
org$frostlang$frostc$HTMLProcessor* $tmp539 = (org$frostlang$frostc$HTMLProcessor*) frostObjectAlloc(12, (frost$core$Class*) &org$frostlang$frostc$HTMLProcessor$class);
org$frostlang$frostc$HTMLProcessor$init($tmp539);
frost$collections$Array* $tmp540 = *(&local1);
frost$core$Int64 $tmp541 = (frost$core$Int64) {0};
frost$core$Object* $tmp542 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T($tmp540, $tmp541);
frost$io$File* $tmp543 = *(&local3);
frost$core$String* $tmp544 = *(&local7);
$fn546 $tmp545 = ($fn546) $tmp539->$class->vtable[3];
$tmp545($tmp539, ((frost$io$File*) $tmp542), $tmp543, $tmp544);
frost$core$Frost$unref$frost$core$Object$Q($tmp542);
// unreffing REF($761:frost.collections.Array.T)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
// unreffing REF($756:org.frostlang.frostc.HTMLProcessor)
// line 251
frost$io$File* $tmp547 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
// unreffing llvmDir
*(&local18) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp548 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp548));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp549 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp550 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp551 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp552 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp552));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp553 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp553));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;
block71:;
// line 253
frost$core$String* $tmp554 = *(&local7);
frost$core$Bit $tmp555 = frost$core$Bit$init$builtin_bit($tmp554 != NULL);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block74; else goto block75;
block74:;
// line 254
frost$io$OutputStream* $tmp557 = *(&local9);
$fn559 $tmp558 = ($fn559) $tmp557->$class->vtable[19];
$tmp558($tmp557, &$s560);
// line 255
frost$core$UInt8 $tmp561 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp561);
goto block75;
block75:;
// line 257
// line 1
// line 259
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 260
org$frostlang$frostc$Main$Format$nullable $tmp562 = *(&local6);
frost$core$Int64 $tmp563 = ((org$frostlang$frostc$Main$Format) $tmp562.value).$rawValue;
frost$core$Int64 $tmp564 = (frost$core$Int64) {0};
frost$core$Bit $tmp565 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp563, $tmp564);
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block77; else goto block78;
block78:;
frost$core$Int64 $tmp567 = (frost$core$Int64) {1};
frost$core$Bit $tmp568 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp563, $tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block77; else goto block79;
block79:;
frost$core$Int64 $tmp570 = (frost$core$Int64) {2};
frost$core$Bit $tmp571 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp563, $tmp570);
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block77; else goto block80;
block77:;
// line 262
org$frostlang$frostc$LLVMCodeGenerator* $tmp573 = (org$frostlang$frostc$LLVMCodeGenerator*) frostObjectAlloc(240, (frost$core$Class*) &org$frostlang$frostc$LLVMCodeGenerator$class);
frost$core$String* $tmp574 = org$frostlang$frostc$Config$llvmTriple$R$frost$core$String();
frost$io$File* $tmp575 = *(&local3);
frost$io$File* $tmp576 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File($tmp575, &$s577);
frost$io$OutputStream* $tmp578 = frost$io$File$openOutputStream$R$frost$io$OutputStream($tmp576);
org$frostlang$frostc$LLVMCodeGenerator$init$frost$core$String$frost$io$OutputStream($tmp573, $tmp574, $tmp578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp573)));
org$frostlang$frostc$CodeGenerator* $tmp579 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp573);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
// unreffing REF($852:frost.io.OutputStream)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
// unreffing REF($851:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
// unreffing REF($848:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp573));
// unreffing REF($847:org.frostlang.frostc.LLVMCodeGenerator)
goto block76;
block80:;
frost$core$Int64 $tmp580 = (frost$core$Int64) {3};
frost$core$Bit $tmp581 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp563, $tmp580);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block81; else goto block82;
block81:;
// line 266
org$frostlang$frostc$HCodeGenerator* $tmp583 = (org$frostlang$frostc$HCodeGenerator*) frostObjectAlloc(152, (frost$core$Class*) &org$frostlang$frostc$HCodeGenerator$class);
frost$io$File* $tmp584 = *(&local3);
org$frostlang$frostc$HCodeGenerator$init$frost$io$File($tmp583, $tmp584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp583)));
org$frostlang$frostc$CodeGenerator* $tmp585 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp583);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp583));
// unreffing REF($879:org.frostlang.frostc.HCodeGenerator)
goto block76;
block82:;
frost$core$Int64 $tmp586 = (frost$core$Int64) {4};
frost$core$Bit $tmp587 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp563, $tmp586);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block83; else goto block84;
block83:;
// line 269
org$frostlang$frostc$CCodeGenerator* $tmp589 = (org$frostlang$frostc$CCodeGenerator*) frostObjectAlloc(264, (frost$core$Class*) &org$frostlang$frostc$CCodeGenerator$class);
frost$io$File* $tmp590 = *(&local3);
org$frostlang$frostc$CCodeGenerator$init$frost$io$File($tmp589, $tmp590);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$CodeGenerator*) $tmp589)));
org$frostlang$frostc$CodeGenerator* $tmp591 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp591));
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) $tmp589);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
// unreffing REF($899:org.frostlang.frostc.CCodeGenerator)
goto block76;
block84:;
// line 272
frost$core$Bit $tmp592 = frost$core$Bit$init$builtin_bit(false);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block85; else goto block86;
block86:;
frost$core$Int64 $tmp594 = (frost$core$Int64) {272};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s595, $tmp594);
abort(); // unreachable
block85:;
goto block76;
block76:;
// line 275
org$frostlang$frostc$Compiler$Settings* $tmp596 = (org$frostlang$frostc$Compiler$Settings*) frostObjectAlloc(49, (frost$core$Class*) &org$frostlang$frostc$Compiler$Settings$class);
frost$io$File** $tmp597 = &param0->frostHome;
frost$io$File* $tmp598 = *$tmp597;
frost$collections$Array* $tmp599 = *(&local2);
frost$core$Int64 $tmp600 = *(&local4);
frost$core$Int64 $tmp601 = *(&local5);
frost$core$Bit* $tmp602 = &param0->debug;
frost$core$Bit $tmp603 = *$tmp602;
org$frostlang$frostc$Compiler$Settings$init$frost$io$File$frost$collections$ListView$LTfrost$io$File$GT$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp596, $tmp598, ((frost$collections$ListView*) $tmp599), $tmp600, $tmp601, $tmp603);
*(&local22) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
org$frostlang$frostc$Compiler$Settings* $tmp604 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
*(&local22) = $tmp596;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
// unreffing REF($923:org.frostlang.frostc.Compiler.Settings)
// line 277
frost$threads$MessageQueue* $tmp605 = (frost$threads$MessageQueue*) frostObjectAlloc(56, (frost$core$Class*) &frost$threads$MessageQueue$class);
frost$threads$MessageQueue$init($tmp605);
*(&local23) = ((frost$threads$MessageQueue*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
frost$threads$MessageQueue* $tmp606 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
*(&local23) = $tmp605;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp605));
// unreffing REF($944:frost.threads.MessageQueue<org.frostlang.frostc.Compiler.Error>)
// line 278
org$frostlang$frostc$Compiler* $tmp607 = (org$frostlang$frostc$Compiler*) frostObjectAlloc(256, (frost$core$Class*) &org$frostlang$frostc$Compiler$class);
frost$threads$MessageQueue* $tmp608 = *(&local23);
org$frostlang$frostc$CodeGenerator* $tmp609 = *(&local21);
org$frostlang$frostc$Compiler$Settings* $tmp610 = *(&local22);
org$frostlang$frostc$Compiler$init$frost$threads$MessageQueue$LTorg$frostlang$frostc$Compiler$Error$GT$org$frostlang$frostc$CodeGenerator$org$frostlang$frostc$Compiler$Settings($tmp607, $tmp608, $tmp609, $tmp610);
*(&local24) = ((org$frostlang$frostc$Compiler*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
org$frostlang$frostc$Compiler* $tmp611 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp611));
*(&local24) = $tmp607;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
// unreffing REF($958:org.frostlang.frostc.Compiler)
// line 279
frost$collections$Array* $tmp612 = *(&local1);
ITable* $tmp613 = ((frost$collections$Iterable*) $tmp612)->$class->itable;
while ($tmp613->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp613 = $tmp613->next;
}
$fn615 $tmp614 = $tmp613->methods[0];
frost$collections$Iterator* $tmp616 = $tmp614(((frost$collections$Iterable*) $tmp612));
goto block87;
block87:;
ITable* $tmp617 = $tmp616->$class->itable;
while ($tmp617->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp617 = $tmp617->next;
}
$fn619 $tmp618 = $tmp617->methods[0];
frost$core$Bit $tmp620 = $tmp618($tmp616);
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block89; else goto block88;
block88:;
*(&local25) = ((frost$io$File*) NULL);
ITable* $tmp622 = $tmp616->$class->itable;
while ($tmp622->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp622 = $tmp622->next;
}
$fn624 $tmp623 = $tmp622->methods[1];
frost$core$Object* $tmp625 = $tmp623($tmp616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp625)));
frost$io$File* $tmp626 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp626));
*(&local25) = ((frost$io$File*) $tmp625);
// line 280
org$frostlang$frostc$Compiler* $tmp627 = *(&local24);
frost$io$File* $tmp628 = *(&local25);
frost$collections$ListView* $tmp629 = org$frostlang$frostc$Compiler$scan$frost$io$File$R$frost$collections$ListView$LTorg$frostlang$frostc$ClassDecl$GT($tmp627, $tmp628);
ITable* $tmp630 = ((frost$collections$Iterable*) $tmp629)->$class->itable;
while ($tmp630->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp630 = $tmp630->next;
}
$fn632 $tmp631 = $tmp630->methods[0];
frost$collections$Iterator* $tmp633 = $tmp631(((frost$collections$Iterable*) $tmp629));
goto block90;
block90:;
ITable* $tmp634 = $tmp633->$class->itable;
while ($tmp634->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp634 = $tmp634->next;
}
$fn636 $tmp635 = $tmp634->methods[0];
frost$core$Bit $tmp637 = $tmp635($tmp633);
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block92; else goto block91;
block91:;
*(&local26) = ((org$frostlang$frostc$ClassDecl*) NULL);
ITable* $tmp639 = $tmp633->$class->itable;
while ($tmp639->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp639 = $tmp639->next;
}
$fn641 $tmp640 = $tmp639->methods[1];
frost$core$Object* $tmp642 = $tmp640($tmp633);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ClassDecl*) $tmp642)));
org$frostlang$frostc$ClassDecl* $tmp643 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp643));
*(&local26) = ((org$frostlang$frostc$ClassDecl*) $tmp642);
// line 281
org$frostlang$frostc$Compiler* $tmp644 = *(&local24);
org$frostlang$frostc$ClassDecl* $tmp645 = *(&local26);
org$frostlang$frostc$Compiler$markNonExternal$org$frostlang$frostc$ClassDecl($tmp644, $tmp645);
frost$core$Frost$unref$frost$core$Object$Q($tmp642);
// unreffing REF($1015:frost.collections.Iterator.T)
org$frostlang$frostc$ClassDecl* $tmp646 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
// unreffing cl
*(&local26) = ((org$frostlang$frostc$ClassDecl*) NULL);
goto block90;
block92:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
// unreffing REF($1004:frost.collections.Iterator<frost.collections.Iterable.T>)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp629));
// unreffing REF($1000:frost.collections.ListView<org.frostlang.frostc.ClassDecl>)
frost$core$Frost$unref$frost$core$Object$Q($tmp625);
// unreffing REF($989:frost.collections.Iterator.T)
frost$io$File* $tmp647 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
// unreffing s
*(&local25) = ((frost$io$File*) NULL);
goto block87;
block89:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
// unreffing REF($978:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 284
frost$collections$Array* $tmp648 = *(&local1);
ITable* $tmp649 = ((frost$collections$Iterable*) $tmp648)->$class->itable;
while ($tmp649->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp649 = $tmp649->next;
}
$fn651 $tmp650 = $tmp649->methods[0];
frost$collections$Iterator* $tmp652 = $tmp650(((frost$collections$Iterable*) $tmp648));
goto block93;
block93:;
ITable* $tmp653 = $tmp652->$class->itable;
while ($tmp653->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp653 = $tmp653->next;
}
$fn655 $tmp654 = $tmp653->methods[0];
frost$core$Bit $tmp656 = $tmp654($tmp652);
bool $tmp657 = $tmp656.value;
if ($tmp657) goto block95; else goto block94;
block94:;
*(&local27) = ((frost$io$File*) NULL);
ITable* $tmp658 = $tmp652->$class->itable;
while ($tmp658->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp658 = $tmp658->next;
}
$fn660 $tmp659 = $tmp658->methods[1];
frost$core$Object* $tmp661 = $tmp659($tmp652);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$io$File*) $tmp661)));
frost$io$File* $tmp662 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp662));
*(&local27) = ((frost$io$File*) $tmp661);
// line 285
org$frostlang$frostc$Compiler* $tmp663 = *(&local24);
frost$io$File* $tmp664 = *(&local27);
org$frostlang$frostc$Compiler$compile$frost$io$File($tmp663, $tmp664);
frost$core$Frost$unref$frost$core$Object$Q($tmp661);
// unreffing REF($1070:frost.collections.Iterator.T)
frost$io$File* $tmp665 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp665));
// unreffing s
*(&local27) = ((frost$io$File*) NULL);
goto block93;
block95:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp652));
// unreffing REF($1059:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 287
org$frostlang$frostc$Compiler* $tmp666 = *(&local24);
org$frostlang$frostc$Compiler$finish($tmp666);
// line 288
frost$threads$MessageQueue* $tmp667 = *(&local23);
frost$core$Int64 $tmp668 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64($tmp667);
*(&local20) = $tmp668;
// line 289
frost$core$Int64 $tmp669 = (frost$core$Int64) {0};
frost$core$Int64 $tmp670 = *(&local20);
frost$core$Bit $tmp671 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp672 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp669, $tmp670, $tmp671);
frost$core$Int64 $tmp673 = $tmp672.min;
*(&local28) = $tmp673;
frost$core$Int64 $tmp674 = $tmp672.max;
frost$core$Bit $tmp675 = $tmp672.inclusive;
bool $tmp676 = $tmp675.value;
frost$core$Int64 $tmp677 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp678 = frost$core$Int64$convert$R$frost$core$UInt64($tmp677);
if ($tmp676) goto block99; else goto block100;
block99:;
int64_t $tmp679 = $tmp673.value;
int64_t $tmp680 = $tmp674.value;
bool $tmp681 = $tmp679 <= $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block96; else goto block97;
block100:;
int64_t $tmp684 = $tmp673.value;
int64_t $tmp685 = $tmp674.value;
bool $tmp686 = $tmp684 < $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block96; else goto block97;
block96:;
// line 290
frost$threads$MessageQueue* $tmp689 = *(&local23);
frost$core$Immutable* $tmp690 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T($tmp689);
*(&local29) = ((org$frostlang$frostc$Compiler$Error*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$Compiler$Error*) $tmp690)));
org$frostlang$frostc$Compiler$Error* $tmp691 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp691));
*(&local29) = ((org$frostlang$frostc$Compiler$Error*) $tmp690);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp690));
// unreffing REF($1130:frost.threads.MessageQueue.T)
// line 291
org$frostlang$frostc$Compiler$Error* $tmp692 = *(&local29);
frost$io$File** $tmp693 = &$tmp692->file;
frost$io$File* $tmp694 = *$tmp693;
frost$core$String* $tmp695 = frost$io$File$get_name$R$frost$core$String($tmp694);
frost$core$String* $tmp696 = frost$core$String$convert$R$frost$core$String($tmp695);
frost$core$String* $tmp697 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp696, &$s698);
org$frostlang$frostc$Compiler$Error* $tmp699 = *(&local29);
org$frostlang$frostc$Position* $tmp700 = &$tmp699->position;
org$frostlang$frostc$Position $tmp701 = *$tmp700;
org$frostlang$frostc$Position$wrapper* $tmp702;
$tmp702 = (org$frostlang$frostc$Position$wrapper*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Position$wrapperclass);
$tmp702->value = $tmp701;
frost$core$String* $tmp703 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp697, ((frost$core$Object*) $tmp702));
frost$core$String* $tmp704 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp703, &$s705);
org$frostlang$frostc$Compiler$Error* $tmp706 = *(&local29);
frost$core$String** $tmp707 = &$tmp706->message;
frost$core$String* $tmp708 = *$tmp707;
frost$core$String* $tmp709 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp704, $tmp708);
frost$core$String* $tmp710 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp709, &$s711);
frost$io$Console$printLine$frost$core$String($tmp710);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
// unreffing REF($1159:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp709));
// unreffing REF($1158:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp704));
// unreffing REF($1154:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp703));
// unreffing REF($1153:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp702));
// unreffing REF($1152:frost.core.Object)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp697));
// unreffing REF($1148:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp696));
// unreffing REF($1147:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp695));
// unreffing REF($1146:frost.core.String)
org$frostlang$frostc$Compiler$Error* $tmp712 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
// unreffing error
*(&local29) = ((org$frostlang$frostc$Compiler$Error*) NULL);
goto block98;
block98:;
frost$core$Int64 $tmp713 = *(&local28);
int64_t $tmp714 = $tmp674.value;
int64_t $tmp715 = $tmp713.value;
int64_t $tmp716 = $tmp714 - $tmp715;
frost$core$Int64 $tmp717 = (frost$core$Int64) {$tmp716};
frost$core$UInt64 $tmp718 = frost$core$Int64$convert$R$frost$core$UInt64($tmp717);
if ($tmp676) goto block102; else goto block103;
block102:;
uint64_t $tmp719 = $tmp718.value;
uint64_t $tmp720 = $tmp678.value;
bool $tmp721 = $tmp719 >= $tmp720;
frost$core$Bit $tmp722 = (frost$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block101; else goto block97;
block103:;
uint64_t $tmp724 = $tmp718.value;
uint64_t $tmp725 = $tmp678.value;
bool $tmp726 = $tmp724 > $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block101; else goto block97;
block101:;
int64_t $tmp729 = $tmp713.value;
int64_t $tmp730 = $tmp677.value;
int64_t $tmp731 = $tmp729 + $tmp730;
frost$core$Int64 $tmp732 = (frost$core$Int64) {$tmp731};
*(&local28) = $tmp732;
goto block96;
block97:;
org$frostlang$frostc$Compiler* $tmp733 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
// unreffing compiler
*(&local24) = ((org$frostlang$frostc$Compiler*) NULL);
frost$threads$MessageQueue* $tmp734 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp734));
// unreffing errorQueue
*(&local23) = ((frost$threads$MessageQueue*) NULL);
org$frostlang$frostc$Compiler$Settings* $tmp735 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
// unreffing settings
*(&local22) = ((org$frostlang$frostc$Compiler$Settings*) NULL);
org$frostlang$frostc$CodeGenerator* $tmp736 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
// unreffing cg
*(&local21) = ((org$frostlang$frostc$CodeGenerator*) NULL);
// line 294
frost$core$Int64 $tmp737 = *(&local20);
frost$core$Int64 $tmp738 = (frost$core$Int64) {0};
frost$core$Bit $tmp739 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp737, $tmp738);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block104; else goto block106;
block104:;
// line 295
org$frostlang$frostc$Main$Format$nullable $tmp741 = *(&local6);
frost$core$Int64 $tmp742 = ((org$frostlang$frostc$Main$Format) $tmp741.value).$rawValue;
frost$core$Int64 $tmp743 = (frost$core$Int64) {1};
frost$core$Bit $tmp744 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp743);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block108; else goto block109;
block108:;
// line 297
frost$io$File* $tmp746 = *(&local3);
frost$io$File* $tmp747 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File($tmp746, &$s748);
frost$io$File* $tmp749 = *(&local3);
frost$core$Bit $tmp750 = *(&local8);
frost$io$File* $tmp751 = org$frostlang$frostc$Main$toExecutable$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp747, $tmp749, $tmp750);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
// unreffing REF($1257:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
// unreffing REF($1253:frost.io.File)
goto block107;
block109:;
frost$core$Int64 $tmp752 = (frost$core$Int64) {2};
frost$core$Bit $tmp753 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp742, $tmp752);
bool $tmp754 = $tmp753.value;
if ($tmp754) goto block110; else goto block107;
block110:;
// line 300
frost$io$File* $tmp755 = *(&local3);
frost$io$File* $tmp756 = frost$io$File$changeExtension$frost$core$String$R$frost$io$File($tmp755, &$s757);
frost$io$File* $tmp758 = *(&local3);
frost$core$Bit $tmp759 = *(&local8);
frost$io$File* $tmp760 = org$frostlang$frostc$Main$toObject$frost$io$File$frost$io$File$frost$core$Bit$R$frost$io$File(param0, $tmp756, $tmp758, $tmp759);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// unreffing REF($1276:frost.io.File)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp756));
// unreffing REF($1272:frost.io.File)
goto block107;
block107:;
goto block105;
block106:;
// line 1
// line 305
frost$core$Int64 $tmp761 = *(&local20);
frost$core$Int64 $tmp762 = (frost$core$Int64) {1};
frost$core$Bit $tmp763 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp761, $tmp762);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block111; else goto block113;
block111:;
// line 306
frost$io$Console$printLine$frost$core$String(&$s765);
goto block112;
block113:;
// line 1
// line 309
frost$core$Int64 $tmp766 = *(&local20);
frost$core$String* $tmp767 = frost$core$Int64$convert$R$frost$core$String($tmp766);
frost$core$String* $tmp768 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp767, &$s769);
frost$io$Console$printLine$frost$core$String($tmp768);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp768));
// unreffing REF($1299:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp767));
// unreffing REF($1298:frost.core.String)
goto block112;
block112:;
// line 311
frost$core$UInt8 $tmp770 = (frost$core$UInt8) {1};
frost$core$System$exit$frost$core$UInt8($tmp770);
goto block105;
block105:;
frost$io$File* $tmp771 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp771));
// unreffing llvmDir
*(&local18) = ((frost$io$File*) NULL);
frost$io$OutputStream* $tmp772 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
// unreffing err
*(&local9) = ((frost$io$OutputStream*) NULL);
frost$core$String* $tmp773 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
// unreffing root
*(&local7) = ((frost$core$String*) NULL);
frost$io$File* $tmp774 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp774));
// unreffing outFile
*(&local3) = ((frost$io$File*) NULL);
frost$collections$Array* $tmp775 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
// unreffing imports
*(&local2) = ((frost$collections$Array*) NULL);
frost$collections$Array* $tmp776 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
// unreffing sources
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Main$Arguments* $tmp777 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp777));
// unreffing args
*(&local0) = ((org$frostlang$frostc$Main$Arguments*) NULL);
return;

}
frost$core$Bit org$frostlang$frostc$Main$containsError$frost$core$String$R$frost$core$Bit(frost$core$String* param0) {

// line 317
frost$core$Bit $tmp778 = frost$core$String$contains$frost$core$String$R$frost$core$Bit(param0, &$s779);
return $tmp778;

}
void frostMain(frost$collections$ListView* param0) {

// line 322
org$frostlang$frostc$Main* $tmp780 = (org$frostlang$frostc$Main*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Main$class);
org$frostlang$frostc$Main$init($tmp780);
org$frostlang$frostc$Main$run$frost$collections$ListView$LTfrost$core$String$GT($tmp780, param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// unreffing REF($1:org.frostlang.frostc.Main)
return;

}
void org$frostlang$frostc$Main$cleanup(org$frostlang$frostc$Main* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$io$File** $tmp781 = &param0->clang;
frost$io$File* $tmp782 = *$tmp781;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
frost$io$File** $tmp783 = &param0->frostHome;
frost$io$File* $tmp784 = *$tmp783;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
return;

}

