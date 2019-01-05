#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Config.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/System/Process.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/System.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "org/pandalanguage/pandac/Main/Format.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/HTMLProcessor.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/Position.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn40)(panda$io$InputStream*);
typedef void (*$fn43)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn49)(panda$io$InputStream*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn91)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn95)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn100)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn157)(panda$io$InputStream*);
typedef void (*$fn160)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn166)(panda$io$InputStream*);
typedef void (*$fn169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn189)(panda$io$OutputStream*);
typedef void (*$fn191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn194)(panda$io$OutputStream*);
typedef void (*$fn196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn199)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn219)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn225)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn239)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn252)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn258)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn269)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn292)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn336)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn341)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn383)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn393)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn401)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn419)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn433)(panda$collections$CollectionView*);
typedef void (*$fn440)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn454)(panda$collections$CollectionView*);
typedef void (*$fn487)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn505)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn515)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn526)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn541)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn554)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn610)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn619)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn631)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn636)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn646)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn650)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn655)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* param0) {

// line 21
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 24
panda$io$File* $tmp4 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp5 = org$pandalanguage$pandac$Config$pandaSourceDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp4, $tmp5);
panda$io$File** $tmp6 = &param0->pandaHome;
panda$io$File* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$io$File** $tmp8 = &param0->pandaHome;
*$tmp8 = $tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($5:panda.io.File)
return;

}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* param0, panda$io$File* param1, panda$io$File* param2, panda$core$Bit param3) {

panda$collections$Array* local0 = NULL;
panda$core$System$Process* local1 = NULL;
panda$core$Int64 local2;
// line 59
panda$collections$Array* $tmp9 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp9);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
*(&local0) = $tmp9;
// line 60
panda$collections$Array* $tmp11 = *(&local0);
panda$core$String** $tmp12 = &param1->path;
panda$core$String* $tmp13 = *$tmp12;
panda$collections$Array$add$panda$collections$Array$T($tmp11, ((panda$core$Object*) $tmp13));
// line 61
panda$collections$Array* $tmp14 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp14, ((panda$core$Object*) &$s15));
// line 62
panda$collections$Array* $tmp16 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp16, ((panda$core$Object*) &$s17));
// line 63
panda$collections$Array* $tmp18 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp18, ((panda$core$Object*) &$s19));
// line 64
panda$core$Bit* $tmp20 = &param0->debug;
panda$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 65
panda$collections$Array* $tmp23 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp23, ((panda$core$Object*) &$s24));
goto block2;
block2:;
// line 67
panda$collections$Array* $tmp25 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp25, ((panda$core$Object*) &$s26));
// line 68
panda$collections$Array* $tmp27 = *(&local0);
panda$core$String** $tmp28 = &param2->path;
panda$core$String* $tmp29 = *$tmp28;
panda$collections$Array$add$panda$collections$Array$T($tmp27, ((panda$core$Object*) $tmp29));
// line 69
panda$io$File** $tmp30 = &param0->clang;
panda$io$File* $tmp31 = *$tmp30;
panda$collections$Array* $tmp32 = *(&local0);
panda$core$System$Process* $tmp33 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q($tmp31, ((panda$collections$ListView*) $tmp32));
*(&local1) = ((panda$core$System$Process*) NULL);
panda$core$System$Process* $tmp34 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
*(&local1) = $tmp33;
// line 70
panda$io$OutputStream* $tmp35 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp36 = *(&local1);
panda$io$InputStream** $tmp37 = &$tmp36->output;
panda$io$InputStream* $tmp38 = *$tmp37;
$fn40 $tmp39 = ($fn40) $tmp38->$class->vtable[14];
panda$core$String* $tmp41 = $tmp39($tmp38);
$fn43 $tmp42 = ($fn43) $tmp35->$class->vtable[17];
$tmp42($tmp35, $tmp41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// unreffing REF($76:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($70:panda.io.OutputStream)
// line 71
panda$io$OutputStream* $tmp44 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp45 = *(&local1);
panda$io$InputStream** $tmp46 = &$tmp45->error;
panda$io$InputStream* $tmp47 = *$tmp46;
$fn49 $tmp48 = ($fn49) $tmp47->$class->vtable[14];
panda$core$String* $tmp50 = $tmp48($tmp47);
$fn52 $tmp51 = ($fn52) $tmp44->$class->vtable[17];
$tmp51($tmp44, $tmp50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($86:panda.io.OutputStream)
// line 72
panda$core$System$Process* $tmp53 = *(&local1);
panda$core$Int64 $tmp54;
panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp54, $tmp53);
*(&local2) = $tmp54;
// line 73
panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block3; else goto block4;
block3:;
// line 74
panda$io$File$delete(param1);
goto block4;
block4:;
// line 76
panda$core$Int64 $tmp57 = *(&local2);
panda$core$Int64 $tmp58 = (panda$core$Int64) {0};
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58.value;
bool $tmp61 = $tmp59 != $tmp60;
panda$core$Bit $tmp62 = (panda$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block5; else goto block6;
block5:;
// line 77
panda$core$UInt8 $tmp64 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp64);
goto block6;
block6:;
// line 79
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp65 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing p
*(&local1) = ((panda$core$System$Process*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($61:panda.core.System.Process?)
panda$collections$Array* $tmp66 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
return param2;

}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* param0, panda$io$File* param1, panda$io$File* param2, panda$core$Bit param3) {

panda$collections$Array* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$String* local2 = NULL;
panda$io$File* local3 = NULL;
panda$core$String* local4 = NULL;
panda$core$System$Process* local5 = NULL;
panda$core$Int64 local6;
// line 83
panda$collections$Array* $tmp67 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp67);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp68 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
*(&local0) = $tmp67;
// line 84
panda$collections$Array* $tmp69 = *(&local0);
panda$core$String** $tmp70 = &param1->path;
panda$core$String* $tmp71 = *$tmp70;
panda$collections$Array$add$panda$collections$Array$T($tmp69, ((panda$core$Object*) $tmp71));
// line 85
panda$collections$Array* $tmp72 = *(&local0);
panda$core$String* $tmp73 = org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String();
panda$core$String* $tmp74 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s75, $tmp73);
panda$core$String* $tmp76 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp74, &$s77);
panda$collections$Array$add$panda$collections$Array$T($tmp72, ((panda$core$Object*) $tmp76));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
// unreffing REF($23:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
// unreffing REF($22:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// unreffing REF($21:panda.core.String)
// line 86
panda$collections$Array* $tmp78 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp78, ((panda$core$Object*) &$s79));
// line 87
panda$collections$Array* $tmp80 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp80, ((panda$core$Object*) &$s81));
// line 88
panda$collections$Array* $tmp82 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp82, ((panda$core$Object*) &$s83));
// line 89
panda$core$String* $tmp84 = org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
panda$collections$Array* $tmp85 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp84, &$s86);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp87 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
*(&local1) = $tmp85;
// line 90
panda$collections$Array* $tmp88 = *(&local1);
ITable* $tmp89 = ((panda$collections$Iterable*) $tmp88)->$class->itable;
while ($tmp89->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
panda$collections$Iterator* $tmp92 = $tmp90(((panda$collections$Iterable*) $tmp88));
goto block1;
block1:;
ITable* $tmp93 = $tmp92->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
panda$core$Bit $tmp96 = $tmp94($tmp92);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block3; else goto block2;
block2:;
*(&local2) = ((panda$core$String*) NULL);
ITable* $tmp98 = $tmp92->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
panda$core$Object* $tmp101 = $tmp99($tmp92);
panda$core$String* $tmp102 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp101)));
*(&local2) = ((panda$core$String*) $tmp101);
// line 91
panda$io$File* $tmp103 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp104 = *(&local2);
panda$io$File$init$panda$core$String($tmp103, $tmp104);
*(&local3) = ((panda$io$File*) NULL);
panda$io$File* $tmp105 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
*(&local3) = $tmp103;
// line 92
panda$collections$Array* $tmp106 = *(&local0);
panda$io$File* $tmp107 = *(&local3);
panda$io$File* $tmp108 = panda$io$File$parent$R$panda$io$File$Q($tmp107);
panda$core$String* $tmp109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s110, ((panda$core$Object*) $tmp108));
panda$collections$Array$add$panda$collections$Array$T($tmp106, ((panda$core$Object*) $tmp109));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// unreffing REF($101:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing REF($99:panda.io.File?)
// line 93
panda$io$File* $tmp111 = *(&local3);
panda$core$String* $tmp112 = panda$io$File$simpleName$R$panda$core$String($tmp111);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp113 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
*(&local4) = $tmp112;
// line 94
panda$core$String* $tmp114 = *(&local4);
panda$core$Bit $tmp115 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp114, &$s116);
bool $tmp117 = $tmp115.value;
if ($tmp117) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp118 = (panda$core$Int64) {94};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s119, $tmp118);
abort(); // unreachable
block4:;
// line 95
panda$core$String* $tmp120 = *(&local4);
panda$core$Int64 $tmp121 = (panda$core$Int64) {3};
panda$core$Bit $tmp122 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp123 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp121, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp122);
panda$core$String* $tmp124 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp120, $tmp123);
panda$core$String* $tmp125 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
*(&local4) = $tmp124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing REF($134:panda.core.String)
// line 96
panda$collections$Array* $tmp126 = *(&local0);
panda$core$String* $tmp127 = *(&local4);
panda$core$String* $tmp128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s129, $tmp127);
panda$collections$Array$add$panda$collections$Array$T($tmp126, ((panda$core$Object*) $tmp128));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($148:panda.core.String)
panda$core$String* $tmp130 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing simpleName
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($112:panda.core.String)
panda$io$File* $tmp131 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing libFile
*(&local3) = ((panda$io$File*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp103));
// unreffing REF($85:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q($tmp101);
// unreffing REF($76:panda.collections.Iterator.T)
panda$core$String* $tmp132 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing lib
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing REF($65:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 98
panda$collections$Array* $tmp133 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp133, ((panda$core$Object*) &$s134));
// line 99
panda$collections$Array* $tmp135 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp135, ((panda$core$Object*) &$s136));
// line 100
panda$core$Bit* $tmp137 = &param0->debug;
panda$core$Bit $tmp138 = *$tmp137;
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block6; else goto block7;
block6:;
// line 101
panda$collections$Array* $tmp140 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp140, ((panda$core$Object*) &$s141));
goto block7;
block7:;
// line 103
panda$collections$Array* $tmp142 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp142, ((panda$core$Object*) &$s143));
// line 104
panda$collections$Array* $tmp144 = *(&local0);
panda$core$String** $tmp145 = &param2->path;
panda$core$String* $tmp146 = *$tmp145;
panda$collections$Array$add$panda$collections$Array$T($tmp144, ((panda$core$Object*) $tmp146));
// line 105
panda$io$File** $tmp147 = &param0->clang;
panda$io$File* $tmp148 = *$tmp147;
panda$collections$Array* $tmp149 = *(&local0);
panda$core$System$Process* $tmp150 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q($tmp148, ((panda$collections$ListView*) $tmp149));
*(&local5) = ((panda$core$System$Process*) NULL);
panda$core$System$Process* $tmp151 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
*(&local5) = $tmp150;
// line 106
panda$io$OutputStream* $tmp152 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp153 = *(&local5);
panda$io$InputStream** $tmp154 = &$tmp153->output;
panda$io$InputStream* $tmp155 = *$tmp154;
$fn157 $tmp156 = ($fn157) $tmp155->$class->vtable[14];
panda$core$String* $tmp158 = $tmp156($tmp155);
$fn160 $tmp159 = ($fn160) $tmp152->$class->vtable[17];
$tmp159($tmp152, $tmp158);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
// unreffing REF($235:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($229:panda.io.OutputStream)
// line 107
panda$io$OutputStream* $tmp161 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp162 = *(&local5);
panda$io$InputStream** $tmp163 = &$tmp162->error;
panda$io$InputStream* $tmp164 = *$tmp163;
$fn166 $tmp165 = ($fn166) $tmp164->$class->vtable[14];
panda$core$String* $tmp167 = $tmp165($tmp164);
$fn169 $tmp168 = ($fn169) $tmp161->$class->vtable[17];
$tmp168($tmp161, $tmp167);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp167));
// unreffing REF($251:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// unreffing REF($245:panda.io.OutputStream)
// line 108
panda$core$System$Process* $tmp170 = *(&local5);
panda$core$Int64 $tmp171;
panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp171, $tmp170);
*(&local6) = $tmp171;
// line 109
panda$core$Bit $tmp172 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block8; else goto block9;
block8:;
// line 110
panda$io$File$delete(param1);
goto block9;
block9:;
// line 112
panda$core$Int64 $tmp174 = *(&local6);
panda$core$Int64 $tmp175 = (panda$core$Int64) {0};
int64_t $tmp176 = $tmp174.value;
int64_t $tmp177 = $tmp175.value;
bool $tmp178 = $tmp176 != $tmp177;
panda$core$Bit $tmp179 = (panda$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block10; else goto block11;
block10:;
// line 113
panda$core$UInt8 $tmp181 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp181);
goto block11;
block11:;
// line 115
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp182 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
// unreffing p
*(&local5) = ((panda$core$System$Process*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
// unreffing REF($220:panda.core.System.Process?)
panda$collections$Array* $tmp183 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp183));
// unreffing icuLibs
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
// unreffing REF($52:panda.collections.Array<panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
// unreffing REF($51:panda.core.String)
panda$collections$Array* $tmp184 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
return param2;

}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* param0, panda$io$OutputStream* param1) {

// line 119
$fn186 $tmp185 = ($fn186) param1->$class->vtable[19];
$tmp185(param1, &$s187);
// line 120
$fn189 $tmp188 = ($fn189) param1->$class->vtable[21];
$tmp188(param1);
// line 121
$fn191 $tmp190 = ($fn191) param1->$class->vtable[19];
$tmp190(param1, &$s192);
// line 122
$fn194 $tmp193 = ($fn194) param1->$class->vtable[21];
$tmp193(param1);
// line 123
$fn196 $tmp195 = ($fn196) param1->$class->vtable[19];
$tmp195(param1, &$s197);
// line 124
$fn199 $tmp198 = ($fn199) param1->$class->vtable[19];
$tmp198(param1, &$s200);
return;

}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* param0, panda$collections$ListView* param1) {

org$pandalanguage$pandac$Main$Arguments* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$io$File* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
org$pandalanguage$pandac$Main$Format$nullable local6;
panda$core$String* local7 = NULL;
panda$core$Bit local8;
panda$io$OutputStream* local9 = NULL;
panda$core$String* local10 = NULL;
panda$io$File* local11 = NULL;
panda$core$String* local12 = NULL;
panda$core$Bit local13;
panda$core$String* local14 = NULL;
panda$core$Bit local15;
panda$core$String* local16 = NULL;
panda$io$File* local17 = NULL;
panda$core$String* local18 = NULL;
panda$core$Int64 local19;
org$pandalanguage$pandac$CodeGenerator* local20 = NULL;
org$pandalanguage$pandac$Compiler$Settings* local21 = NULL;
panda$threads$MessageQueue* local22 = NULL;
org$pandalanguage$pandac$Compiler* local23 = NULL;
panda$io$File* local24 = NULL;
org$pandalanguage$pandac$ClassDecl* local25 = NULL;
panda$io$File* local26 = NULL;
panda$core$Int64 local27;
org$pandalanguage$pandac$Compiler$Error* local28 = NULL;
// line 128
org$pandalanguage$pandac$Main$Arguments* $tmp201 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp201, param1);
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp202 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
*(&local0) = $tmp201;
// line 129
panda$collections$Array* $tmp203 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp203);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp204 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
*(&local1) = $tmp203;
// line 130
panda$collections$Array* $tmp205 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp205);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp206 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
*(&local2) = $tmp205;
// line 131
panda$collections$Array* $tmp207 = *(&local2);
panda$io$File** $tmp208 = &param0->pandaHome;
panda$io$File* $tmp209 = *$tmp208;
panda$collections$Array$add$panda$collections$Array$T($tmp207, ((panda$core$Object*) $tmp209));
// line 132
*(&local3) = ((panda$io$File*) NULL);
panda$io$File* $tmp210 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
*(&local3) = ((panda$io$File*) NULL);
// line 133
panda$core$Int64 $tmp211 = (panda$core$Int64) {3};
*(&local4) = $tmp211;
// line 134
panda$core$Int64 $tmp212 = (panda$core$Int64) {3};
*(&local5) = $tmp212;
// line 135
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { .nonnull = false });
// line 136
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp213 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local7) = ((panda$core$String*) NULL);
// line 137
panda$core$Bit $tmp214 = panda$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp214;
// line 138
panda$io$OutputStream* $tmp215 = panda$io$Console$errorStream$R$panda$io$OutputStream();
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$io$OutputStream* $tmp216 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
*(&local9) = $tmp215;
// line 139
goto block1;
block1:;
org$pandalanguage$pandac$Main$Arguments* $tmp217 = *(&local0);
$fn219 $tmp218 = ($fn219) $tmp217->$class->vtable[2];
panda$core$Bit $tmp220 = $tmp218($tmp217);
panda$core$Bit $tmp221 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block2; else goto block3;
block2:;
// line 140
org$pandalanguage$pandac$Main$Arguments* $tmp223 = *(&local0);
$fn225 $tmp224 = ($fn225) $tmp223->$class->vtable[3];
panda$core$String* $tmp226 = $tmp224($tmp223);
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp227 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp227));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
*(&local10) = $tmp226;
// line 141
panda$core$String* $tmp228 = *(&local10);
panda$core$Bit $tmp229 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s230);
bool $tmp231 = $tmp229.value;
if ($tmp231) goto block5; else goto block6;
block5:;
// line 143
panda$io$File* $tmp232 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp232, &$s233);
*(&local11) = ((panda$io$File*) NULL);
panda$io$File* $tmp234 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
*(&local11) = $tmp232;
// line 144
panda$io$InputStream* $tmp235 = panda$io$Console$inputStream$R$panda$io$InputStream();
panda$io$File* $tmp236 = *(&local11);
panda$io$OutputStream* $tmp237 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp236);
$fn239 $tmp238 = ($fn239) $tmp235->$class->vtable[16];
panda$core$Int64 $tmp240 = $tmp238($tmp235, $tmp237);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($112:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($110:panda.io.InputStream)
// line 145
panda$collections$Array* $tmp241 = *(&local1);
panda$io$File* $tmp242 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp241, ((panda$core$Object*) $tmp242));
panda$io$File* $tmp243 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing path
*(&local11) = ((panda$io$File*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($100:panda.io.File)
goto block4;
block6:;
panda$core$Bit $tmp244 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s245);
bool $tmp246 = $tmp244.value;
if ($tmp246) goto block7; else goto block8;
block7:;
// line 148
panda$io$File* $tmp247 = *(&local3);
panda$core$Bit $tmp248 = panda$core$Bit$init$builtin_bit($tmp247 != NULL);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block9; else goto block10;
block9:;
// line 149
panda$io$OutputStream* $tmp250 = *(&local9);
$fn252 $tmp251 = ($fn252) $tmp250->$class->vtable[19];
$tmp251($tmp250, &$s253);
// line 150
panda$core$UInt8 $tmp254 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp254);
goto block10;
block10:;
// line 152
panda$io$File* $tmp255 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp256 = *(&local0);
$fn258 $tmp257 = ($fn258) $tmp256->$class->vtable[4];
panda$core$String* $tmp259 = $tmp257($tmp256, &$s260);
panda$io$File$init$panda$core$String($tmp255, $tmp259);
panda$io$File* $tmp261 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
*(&local3) = $tmp255;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp259));
// unreffing REF($157:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($154:panda.io.File)
// line 153
panda$io$File* $tmp262 = *(&local3);
panda$io$File* $tmp263 = panda$io$File$parent$R$panda$io$File$Q($tmp262);
panda$io$File$createDirectories($tmp263);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing REF($175:panda.io.File?)
goto block4;
block8:;
panda$core$Bit $tmp264 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s265);
bool $tmp266 = $tmp264.value;
if ($tmp266) goto block11; else goto block12;
block11:;
// line 156
org$pandalanguage$pandac$Main$Arguments* $tmp267 = *(&local0);
$fn269 $tmp268 = ($fn269) $tmp267->$class->vtable[4];
panda$core$String* $tmp270 = $tmp268($tmp267, &$s271);
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp272 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp272));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
*(&local12) = $tmp270;
// line 157
panda$core$String* $tmp273 = *(&local12);
panda$core$Int64$nullable $tmp274 = panda$core$String$convert$R$panda$core$Int64$Q($tmp273);
*(&local4) = ((panda$core$Int64) $tmp274.value);
// line 158
panda$core$Int64 $tmp275 = *(&local4);
panda$core$Int64 $tmp276 = (panda$core$Int64) {3};
int64_t $tmp277 = $tmp275.value;
int64_t $tmp278 = $tmp276.value;
bool $tmp279 = $tmp277 > $tmp278;
panda$core$Bit $tmp280 = (panda$core$Bit) {$tmp279};
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block15; else goto block16;
block15:;
*(&local13) = $tmp280;
goto block17;
block16:;
panda$core$Int64 $tmp282 = *(&local4);
panda$core$Int64 $tmp283 = (panda$core$Int64) {0};
int64_t $tmp284 = $tmp282.value;
int64_t $tmp285 = $tmp283.value;
bool $tmp286 = $tmp284 < $tmp285;
panda$core$Bit $tmp287 = (panda$core$Bit) {$tmp286};
*(&local13) = $tmp287;
goto block17;
block17:;
panda$core$Bit $tmp288 = *(&local13);
bool $tmp289 = $tmp288.value;
if ($tmp289) goto block13; else goto block14;
block13:;
// line 159
panda$io$OutputStream* $tmp290 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn292 $tmp291 = ($fn292) $tmp290->$class->vtable[19];
$tmp291($tmp290, &$s293);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp290));
// unreffing REF($224:panda.io.OutputStream)
// line 160
panda$core$UInt8 $tmp294 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp294);
goto block14;
block14:;
panda$core$String* $tmp295 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing level
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing REF($188:panda.core.String)
goto block4;
block12:;
panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s297);
bool $tmp298 = $tmp296.value;
if ($tmp298) goto block18; else goto block19;
block18:;
// line 164
org$pandalanguage$pandac$Main$Arguments* $tmp299 = *(&local0);
$fn301 $tmp300 = ($fn301) $tmp299->$class->vtable[4];
panda$core$String* $tmp302 = $tmp300($tmp299, &$s303);
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp304 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
*(&local14) = $tmp302;
// line 165
panda$core$String* $tmp305 = *(&local14);
panda$core$Int64$nullable $tmp306 = panda$core$String$convert$R$panda$core$Int64$Q($tmp305);
*(&local5) = ((panda$core$Int64) $tmp306.value);
// line 166
panda$core$Int64 $tmp307 = *(&local5);
panda$core$Int64 $tmp308 = (panda$core$Int64) {3};
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308.value;
bool $tmp311 = $tmp309 > $tmp310;
panda$core$Bit $tmp312 = (panda$core$Bit) {$tmp311};
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block22; else goto block23;
block22:;
*(&local15) = $tmp312;
goto block24;
block23:;
panda$core$Int64 $tmp314 = *(&local5);
panda$core$Int64 $tmp315 = (panda$core$Int64) {0};
int64_t $tmp316 = $tmp314.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 < $tmp317;
panda$core$Bit $tmp319 = (panda$core$Bit) {$tmp318};
*(&local15) = $tmp319;
goto block24;
block24:;
panda$core$Bit $tmp320 = *(&local15);
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block20; else goto block21;
block20:;
// line 167
panda$io$OutputStream* $tmp322 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn324 $tmp323 = ($fn324) $tmp322->$class->vtable[19];
$tmp323($tmp322, &$s325);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($285:panda.io.OutputStream)
// line 168
panda$core$UInt8 $tmp326 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp326);
goto block21;
block21:;
panda$core$String* $tmp327 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing level
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing REF($249:panda.core.String)
goto block4;
block19:;
panda$core$Bit $tmp328 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s329);
bool $tmp330 = $tmp328.value;
if ($tmp330) goto block25; else goto block26;
block25:;
// line 172
org$pandalanguage$pandac$Main$Format$nullable $tmp331 = *(&local6);
panda$core$Bit $tmp332 = panda$core$Bit$init$builtin_bit($tmp331.nonnull);
bool $tmp333 = $tmp332.value;
if ($tmp333) goto block27; else goto block28;
block27:;
// line 173
panda$io$OutputStream* $tmp334 = *(&local9);
$fn336 $tmp335 = ($fn336) $tmp334->$class->vtable[19];
$tmp335($tmp334, &$s337);
// line 174
panda$core$UInt8 $tmp338 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp338);
goto block28;
block28:;
// line 176
org$pandalanguage$pandac$Main$Arguments* $tmp339 = *(&local0);
$fn341 $tmp340 = ($fn341) $tmp339->$class->vtable[4];
panda$core$String* $tmp342 = $tmp340($tmp339, &$s343);
*(&local16) = ((panda$core$String*) NULL);
panda$core$String* $tmp344 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp344));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
*(&local16) = $tmp342;
// line 177
panda$core$String* $tmp345 = *(&local16);
panda$core$Bit $tmp346 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s347);
bool $tmp348 = $tmp346.value;
if ($tmp348) goto block30; else goto block31;
block30:;
// line 178
panda$core$Int64 $tmp349 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp350 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp349);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp350, true });
goto block29;
block31:;
panda$core$Bit $tmp351 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s352);
bool $tmp353 = $tmp351.value;
if ($tmp353) goto block32; else goto block33;
block32:;
// line 179
panda$core$Int64 $tmp354 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Main$Format $tmp355 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp354);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp355, true });
goto block29;
block33:;
panda$core$Bit $tmp356 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s357);
bool $tmp358 = $tmp356.value;
if ($tmp358) goto block34; else goto block35;
block34:;
// line 180
panda$core$Int64 $tmp359 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Main$Format $tmp360 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp359);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp360, true });
goto block29;
block35:;
panda$core$Bit $tmp361 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s362);
bool $tmp363 = $tmp361.value;
if ($tmp363) goto block36; else goto block37;
block36:;
// line 181
panda$core$Int64 $tmp364 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Main$Format $tmp365 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp364);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp365, true });
goto block29;
block37:;
panda$core$Bit $tmp366 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s367);
bool $tmp368 = $tmp366.value;
if ($tmp368) goto block38; else goto block39;
block38:;
// line 182
panda$core$Int64 $tmp369 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Main$Format $tmp370 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp369);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp370, true });
goto block29;
block39:;
panda$core$Bit $tmp371 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp345, &$s372);
bool $tmp373 = $tmp371.value;
if ($tmp373) goto block40; else goto block41;
block40:;
// line 183
panda$core$Int64 $tmp374 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp375 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp374);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp375, true });
goto block29;
block41:;
// line 185
panda$io$OutputStream* $tmp376 = *(&local9);
panda$core$String* $tmp377 = *(&local16);
panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s379, $tmp377);
panda$core$String* $tmp380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp378, &$s381);
$fn383 $tmp382 = ($fn383) $tmp376->$class->vtable[19];
$tmp382($tmp376, $tmp380);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing REF($392:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
// unreffing REF($391:panda.core.String)
// line 186
panda$core$UInt8 $tmp384 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp384);
goto block29;
block29:;
panda$core$String* $tmp385 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
// unreffing f
*(&local16) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp342));
// unreffing REF($324:panda.core.String)
goto block4;
block26:;
panda$core$Bit $tmp386 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s387);
bool $tmp388 = $tmp386.value;
if ($tmp388) goto block42; else goto block43;
block42:;
// line 191
panda$collections$Array* $tmp389 = *(&local2);
panda$io$File* $tmp390 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp391 = *(&local0);
$fn393 $tmp392 = ($fn393) $tmp391->$class->vtable[4];
panda$core$String* $tmp394 = $tmp392($tmp391, &$s395);
panda$io$File$init$panda$core$String($tmp390, $tmp394);
panda$collections$Array$add$panda$collections$Array$T($tmp389, ((panda$core$Object*) $tmp390));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing REF($423:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
// unreffing REF($420:panda.io.File)
goto block4;
block43:;
panda$core$Bit $tmp396 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp228, &$s397);
bool $tmp398 = $tmp396.value;
if ($tmp398) goto block44; else goto block45;
block44:;
// line 194
org$pandalanguage$pandac$Main$Arguments* $tmp399 = *(&local0);
$fn401 $tmp400 = ($fn401) $tmp399->$class->vtable[4];
panda$core$String* $tmp402 = $tmp400($tmp399, &$s403);
panda$core$String* $tmp404 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
*(&local7) = $tmp402;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
// unreffing REF($440:panda.core.String)
goto block4;
block45:;
// line 197
panda$core$String* $tmp405 = *(&local10);
panda$core$Bit $tmp406 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp405, &$s407);
bool $tmp408 = $tmp406.value;
if ($tmp408) goto block46; else goto block48;
block46:;
// line 198
panda$collections$Array* $tmp409 = *(&local1);
panda$io$File* $tmp410 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp411 = *(&local10);
panda$io$File$init$panda$core$String($tmp410, $tmp411);
panda$collections$Array$add$panda$collections$Array$T($tmp409, ((panda$core$Object*) $tmp410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing REF($460:panda.io.File)
goto block47;
block48:;
// line 1
// line 201
panda$io$OutputStream* $tmp412 = *(&local9);
panda$core$String* $tmp413 = *(&local10);
panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, $tmp413);
panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, &$s417);
$fn419 $tmp418 = ($fn419) $tmp412->$class->vtable[19];
$tmp418($tmp412, $tmp416);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
// unreffing REF($474:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing REF($473:panda.core.String)
// line 202
panda$core$UInt8 $tmp420 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp420);
goto block47;
block47:;
goto block4;
block4:;
panda$core$String* $tmp421 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// unreffing a
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($86:panda.core.String)
goto block1;
block3:;
// line 207
panda$io$File* $tmp422 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp423 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp422, $tmp423);
*(&local17) = ((panda$io$File*) NULL);
panda$io$File* $tmp424 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
*(&local17) = $tmp422;
// line 208
panda$io$File* $tmp425 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp425, &$s426);
panda$io$File** $tmp427 = &param0->clang;
panda$io$File* $tmp428 = *$tmp427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$io$File** $tmp429 = &param0->clang;
*$tmp429 = $tmp425;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
// unreffing REF($509:panda.io.File)
// line 209
panda$collections$Array* $tmp430 = *(&local1);
ITable* $tmp431 = ((panda$collections$CollectionView*) $tmp430)->$class->itable;
while ($tmp431->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp431 = $tmp431->next;
}
$fn433 $tmp432 = $tmp431->methods[0];
panda$core$Int64 $tmp434 = $tmp432(((panda$collections$CollectionView*) $tmp430));
panda$core$Int64 $tmp435 = (panda$core$Int64) {0};
panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp434, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block49; else goto block50;
block49:;
// line 210
panda$io$OutputStream* $tmp438 = *(&local9);
$fn440 $tmp439 = ($fn440) $tmp438->$class->vtable[19];
$tmp439($tmp438, &$s441);
// line 211
panda$core$UInt8 $tmp442 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp442);
goto block50;
block50:;
// line 213
org$pandalanguage$pandac$Main$Format$nullable $tmp443 = *(&local6);
panda$core$Bit $tmp444 = panda$core$Bit$init$builtin_bit(!$tmp443.nonnull);
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block51; else goto block52;
block51:;
// line 214
panda$core$Int64 $tmp446 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp447 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp446);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp447, true });
goto block52;
block52:;
// line 216
panda$io$File* $tmp448 = *(&local3);
panda$core$Bit $tmp449 = panda$core$Bit$init$builtin_bit($tmp448 == NULL);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block53; else goto block54;
block53:;
// line 217
panda$collections$Array* $tmp451 = *(&local1);
ITable* $tmp452 = ((panda$collections$CollectionView*) $tmp451)->$class->itable;
while ($tmp452->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
panda$core$Int64 $tmp455 = $tmp453(((panda$collections$CollectionView*) $tmp451));
panda$core$Int64 $tmp456 = (panda$core$Int64) {1};
panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp455, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block55; else goto block57;
block55:;
// line 218
*(&local18) = ((panda$core$String*) NULL);
// line 219
org$pandalanguage$pandac$Main$Format$nullable $tmp459 = *(&local6);
panda$core$Int64 $tmp460 = ((org$pandalanguage$pandac$Main$Format) $tmp459.value).$rawValue;
panda$core$Int64 $tmp461 = (panda$core$Int64) {1};
panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp460, $tmp461);
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block59; else goto block60;
block59:;
// line 220
panda$core$String* $tmp464 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s465));
*(&local18) = &$s466;
goto block58;
block60:;
panda$core$Int64 $tmp467 = (panda$core$Int64) {2};
panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp460, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block61; else goto block62;
block61:;
// line 221
panda$core$String* $tmp470 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s471));
*(&local18) = &$s472;
goto block58;
block62:;
panda$core$Int64 $tmp473 = (panda$core$Int64) {0};
panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp460, $tmp473);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block63; else goto block64;
block63:;
// line 222
panda$core$String* $tmp476 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s477));
*(&local18) = &$s478;
goto block58;
block64:;
panda$core$Int64 $tmp479 = (panda$core$Int64) {5};
panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp460, $tmp479);
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block65; else goto block66;
block65:;
// line 223
panda$core$String* $tmp482 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s483));
*(&local18) = &$s484;
goto block58;
block66:;
// line 225
panda$io$OutputStream* $tmp485 = *(&local9);
$fn487 $tmp486 = ($fn487) $tmp485->$class->vtable[19];
$tmp486($tmp485, &$s488);
// line 226
panda$core$UInt8 $tmp489 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp489);
goto block58;
block58:;
// line 229
panda$collections$Array* $tmp490 = *(&local1);
panda$core$Int64 $tmp491 = (panda$core$Int64) {0};
panda$core$Object* $tmp492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp490, $tmp491);
panda$core$String* $tmp493 = *(&local18);
panda$io$File* $tmp494 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp492), $tmp493);
panda$io$File* $tmp495 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
*(&local3) = $tmp494;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
// unreffing REF($635:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q($tmp492);
// unreffing REF($632:panda.collections.Array.T)
panda$core$String* $tmp496 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing extension
*(&local18) = ((panda$core$String*) NULL);
goto block56;
block57:;
// line 231
org$pandalanguage$pandac$Main$Format$nullable $tmp497 = *(&local6);
panda$core$Equatable* $tmp498;
if ($tmp497.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp499;
    $tmp499 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp499->value = ((org$pandalanguage$pandac$Main$Format) $tmp497.value);
    $tmp498 = ((panda$core$Equatable*) $tmp499);
}
else {
    $tmp498 = NULL;
}
panda$core$Int64 $tmp500 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp501 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp500);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp502;
$tmp502 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp502->value = $tmp501;
ITable* $tmp503 = $tmp498->$class->itable;
while ($tmp503->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp503 = $tmp503->next;
}
$fn505 $tmp504 = $tmp503->methods[0];
panda$core$Bit $tmp506 = $tmp504($tmp498, ((panda$core$Equatable*) $tmp502));
bool $tmp507 = $tmp506.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp502)));
// unreffing REF($661:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing REF($657:panda.core.Equatable<org.pandalanguage.pandac.Main.Format>)
if ($tmp507) goto block67; else goto block69;
block67:;
// line 232
panda$io$OutputStream* $tmp508 = *(&local9);
$fn510 $tmp509 = ($fn510) $tmp508->$class->vtable[19];
$tmp509($tmp508, &$s511);
// line 233
panda$core$UInt8 $tmp512 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp512);
goto block68;
block69:;
// line 1
// line 236
panda$io$OutputStream* $tmp513 = *(&local9);
$fn515 $tmp514 = ($fn515) $tmp513->$class->vtable[19];
$tmp514($tmp513, &$s516);
// line 238
panda$core$UInt8 $tmp517 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp517);
goto block68;
block68:;
goto block56;
block56:;
goto block54;
block54:;
// line 241
org$pandalanguage$pandac$Main$Format$nullable $tmp518 = *(&local6);
panda$core$Equatable* $tmp519;
if ($tmp518.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp520;
    $tmp520 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp520->value = ((org$pandalanguage$pandac$Main$Format) $tmp518.value);
    $tmp519 = ((panda$core$Equatable*) $tmp520);
}
else {
    $tmp519 = NULL;
}
panda$core$Int64 $tmp521 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp522 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp521);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp523;
$tmp523 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp523->value = $tmp522;
ITable* $tmp524 = $tmp519->$class->itable;
while ($tmp524->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp524 = $tmp524->next;
}
$fn526 $tmp525 = $tmp524->methods[0];
panda$core$Bit $tmp527 = $tmp525($tmp519, ((panda$core$Equatable*) $tmp523));
bool $tmp528 = $tmp527.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp523)));
// unreffing REF($697:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
// unreffing REF($693:panda.core.Equatable<org.pandalanguage.pandac.Main.Format>)
if ($tmp528) goto block70; else goto block71;
block70:;
// line 242
panda$core$String* $tmp529 = *(&local7);
panda$core$Bit $tmp530 = panda$core$Bit$init$builtin_bit($tmp529 == NULL);
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block72; else goto block73;
block72:;
// line 243
panda$core$String* $tmp533 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s532));
*(&local7) = &$s532;
goto block73;
block73:;
// line 245
org$pandalanguage$pandac$HTMLProcessor* $tmp534 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
org$pandalanguage$pandac$HTMLProcessor$init($tmp534);
panda$collections$Array* $tmp535 = *(&local1);
panda$core$Int64 $tmp536 = (panda$core$Int64) {0};
panda$core$Object* $tmp537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp535, $tmp536);
panda$io$File* $tmp538 = *(&local3);
panda$core$String* $tmp539 = *(&local7);
$fn541 $tmp540 = ($fn541) $tmp534->$class->vtable[3];
$tmp540($tmp534, ((panda$io$File*) $tmp537), $tmp538, $tmp539);
panda$core$Panda$unref$panda$core$Object$Q($tmp537);
// unreffing REF($729:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing REF($724:org.pandalanguage.pandac.HTMLProcessor)
// line 246
panda$io$File* $tmp542 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing llvmDir
*(&local17) = ((panda$io$File*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing REF($499:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// unreffing REF($498:panda.io.File)
panda$io$OutputStream* $tmp543 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($67:panda.io.OutputStream)
panda$core$String* $tmp544 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp545 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp546 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($22:panda.collections.Array<panda.io.File>)
panda$collections$Array* $tmp547 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($11:panda.collections.Array<panda.io.File>)
org$pandalanguage$pandac$Main$Arguments* $tmp548 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($1:org.pandalanguage.pandac.Main.Arguments)
return;
block71:;
// line 248
panda$core$String* $tmp549 = *(&local7);
panda$core$Bit $tmp550 = panda$core$Bit$init$builtin_bit($tmp549 != NULL);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block74; else goto block75;
block74:;
// line 249
panda$io$OutputStream* $tmp552 = *(&local9);
$fn554 $tmp553 = ($fn554) $tmp552->$class->vtable[19];
$tmp553($tmp552, &$s555);
// line 250
panda$core$UInt8 $tmp556 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp556);
goto block75;
block75:;
// line 252
// line 1
// line 254
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 255
org$pandalanguage$pandac$Main$Format$nullable $tmp557 = *(&local6);
panda$core$Int64 $tmp558 = ((org$pandalanguage$pandac$Main$Format) $tmp557.value).$rawValue;
panda$core$Int64 $tmp559 = (panda$core$Int64) {0};
panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp558, $tmp559);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block77; else goto block78;
block78:;
panda$core$Int64 $tmp562 = (panda$core$Int64) {1};
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp558, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block77; else goto block79;
block79:;
panda$core$Int64 $tmp565 = (panda$core$Int64) {2};
panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp558, $tmp565);
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block77; else goto block80;
block77:;
// line 257
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp568 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$core$String* $tmp569 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
panda$io$File* $tmp570 = *(&local3);
panda$io$File* $tmp571 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp570, &$s572);
panda$io$OutputStream* $tmp573 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp571);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp568, $tmp569, $tmp573);
org$pandalanguage$pandac$CodeGenerator* $tmp574 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp568)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp568);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp573));
// unreffing REF($838:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
// unreffing REF($837:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
// unreffing REF($834:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing REF($833:org.pandalanguage.pandac.LLVMCodeGenerator)
goto block76;
block80:;
panda$core$Int64 $tmp575 = (panda$core$Int64) {3};
panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp558, $tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block81; else goto block82;
block81:;
// line 261
org$pandalanguage$pandac$HCodeGenerator* $tmp578 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
panda$io$File* $tmp579 = *(&local3);
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp578, $tmp579);
org$pandalanguage$pandac$CodeGenerator* $tmp580 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp578)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp578);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing REF($865:org.pandalanguage.pandac.HCodeGenerator)
goto block76;
block82:;
panda$core$Int64 $tmp581 = (panda$core$Int64) {4};
panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp558, $tmp581);
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block83; else goto block84;
block83:;
// line 264
org$pandalanguage$pandac$CCodeGenerator* $tmp584 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
panda$io$File* $tmp585 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp584, $tmp585);
org$pandalanguage$pandac$CodeGenerator* $tmp586 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp584)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp584);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing REF($885:org.pandalanguage.pandac.CCodeGenerator)
goto block76;
block84:;
// line 267
panda$core$Bit $tmp587 = panda$core$Bit$init$builtin_bit(false);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block85; else goto block86;
block86:;
panda$core$Int64 $tmp589 = (panda$core$Int64) {267};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s590, $tmp589);
abort(); // unreachable
block85:;
goto block76;
block76:;
// line 270
org$pandalanguage$pandac$Compiler$Settings* $tmp591 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(49, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
panda$io$File** $tmp592 = &param0->pandaHome;
panda$io$File* $tmp593 = *$tmp592;
panda$collections$Array* $tmp594 = *(&local2);
panda$core$Int64 $tmp595 = *(&local4);
panda$core$Int64 $tmp596 = *(&local5);
panda$core$Bit* $tmp597 = &param0->debug;
panda$core$Bit $tmp598 = *$tmp597;
org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp591, $tmp593, ((panda$collections$ListView*) $tmp594), $tmp595, $tmp596, $tmp598);
*(&local21) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
org$pandalanguage$pandac$Compiler$Settings* $tmp599 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
*(&local21) = $tmp591;
// line 272
panda$threads$MessageQueue* $tmp600 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp600);
*(&local22) = ((panda$threads$MessageQueue*) NULL);
panda$threads$MessageQueue* $tmp601 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
*(&local22) = $tmp600;
// line 273
org$pandalanguage$pandac$Compiler* $tmp602 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
panda$threads$MessageQueue* $tmp603 = *(&local22);
org$pandalanguage$pandac$CodeGenerator* $tmp604 = *(&local20);
org$pandalanguage$pandac$Compiler$Settings* $tmp605 = *(&local21);
org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp602, $tmp603, $tmp604, $tmp605);
*(&local23) = ((org$pandalanguage$pandac$Compiler*) NULL);
org$pandalanguage$pandac$Compiler* $tmp606 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
*(&local23) = $tmp602;
// line 274
panda$collections$Array* $tmp607 = *(&local1);
ITable* $tmp608 = ((panda$collections$Iterable*) $tmp607)->$class->itable;
while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp608 = $tmp608->next;
}
$fn610 $tmp609 = $tmp608->methods[0];
panda$collections$Iterator* $tmp611 = $tmp609(((panda$collections$Iterable*) $tmp607));
goto block87;
block87:;
ITable* $tmp612 = $tmp611->$class->itable;
while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp612 = $tmp612->next;
}
$fn614 $tmp613 = $tmp612->methods[0];
panda$core$Bit $tmp615 = $tmp613($tmp611);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block89; else goto block88;
block88:;
*(&local24) = ((panda$io$File*) NULL);
ITable* $tmp617 = $tmp611->$class->itable;
while ($tmp617->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp617 = $tmp617->next;
}
$fn619 $tmp618 = $tmp617->methods[1];
panda$core$Object* $tmp620 = $tmp618($tmp611);
panda$io$File* $tmp621 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp620)));
*(&local24) = ((panda$io$File*) $tmp620);
// line 275
org$pandalanguage$pandac$Compiler* $tmp622 = *(&local23);
panda$io$File* $tmp623 = *(&local24);
panda$collections$ListView* $tmp624 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT($tmp622, $tmp623);
ITable* $tmp625 = ((panda$collections$Iterable*) $tmp624)->$class->itable;
while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp625 = $tmp625->next;
}
$fn627 $tmp626 = $tmp625->methods[0];
panda$collections$Iterator* $tmp628 = $tmp626(((panda$collections$Iterable*) $tmp624));
goto block90;
block90:;
ITable* $tmp629 = $tmp628->$class->itable;
while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp629 = $tmp629->next;
}
$fn631 $tmp630 = $tmp629->methods[0];
panda$core$Bit $tmp632 = $tmp630($tmp628);
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block92; else goto block91;
block91:;
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp634 = $tmp628->$class->itable;
while ($tmp634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp634 = $tmp634->next;
}
$fn636 $tmp635 = $tmp634->methods[1];
panda$core$Object* $tmp637 = $tmp635($tmp628);
org$pandalanguage$pandac$ClassDecl* $tmp638 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp637)));
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) $tmp637);
// line 276
org$pandalanguage$pandac$Compiler* $tmp639 = *(&local23);
org$pandalanguage$pandac$ClassDecl* $tmp640 = *(&local25);
org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl($tmp639, $tmp640);
panda$core$Panda$unref$panda$core$Object$Q($tmp637);
// unreffing REF($992:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp641 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
// unreffing cl
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block90;
block92:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// unreffing REF($981:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing REF($977:panda.collections.ListView<org.pandalanguage.pandac.ClassDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp620);
// unreffing REF($966:panda.collections.Iterator.T)
panda$io$File* $tmp642 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
// unreffing s
*(&local24) = ((panda$io$File*) NULL);
goto block87;
block89:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing REF($955:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 279
panda$collections$Array* $tmp643 = *(&local1);
ITable* $tmp644 = ((panda$collections$Iterable*) $tmp643)->$class->itable;
while ($tmp644->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp644 = $tmp644->next;
}
$fn646 $tmp645 = $tmp644->methods[0];
panda$collections$Iterator* $tmp647 = $tmp645(((panda$collections$Iterable*) $tmp643));
goto block93;
block93:;
ITable* $tmp648 = $tmp647->$class->itable;
while ($tmp648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp648 = $tmp648->next;
}
$fn650 $tmp649 = $tmp648->methods[0];
panda$core$Bit $tmp651 = $tmp649($tmp647);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block95; else goto block94;
block94:;
*(&local26) = ((panda$io$File*) NULL);
ITable* $tmp653 = $tmp647->$class->itable;
while ($tmp653->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp653 = $tmp653->next;
}
$fn655 $tmp654 = $tmp653->methods[1];
panda$core$Object* $tmp656 = $tmp654($tmp647);
panda$io$File* $tmp657 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp656)));
*(&local26) = ((panda$io$File*) $tmp656);
// line 280
org$pandalanguage$pandac$Compiler* $tmp658 = *(&local23);
panda$io$File* $tmp659 = *(&local26);
org$pandalanguage$pandac$Compiler$compile$panda$io$File($tmp658, $tmp659);
panda$core$Panda$unref$panda$core$Object$Q($tmp656);
// unreffing REF($1047:panda.collections.Iterator.T)
panda$io$File* $tmp660 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing s
*(&local26) = ((panda$io$File*) NULL);
goto block93;
block95:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
// unreffing REF($1036:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 282
org$pandalanguage$pandac$Compiler* $tmp661 = *(&local23);
org$pandalanguage$pandac$Compiler$finish($tmp661);
// line 283
panda$threads$MessageQueue* $tmp662 = *(&local22);
panda$core$Int64 $tmp663 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp662);
*(&local19) = $tmp663;
// line 284
panda$core$Int64 $tmp664 = (panda$core$Int64) {0};
panda$core$Int64 $tmp665 = *(&local19);
panda$core$Bit $tmp666 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp667 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp664, $tmp665, $tmp666);
panda$core$Int64 $tmp668 = $tmp667.min;
*(&local27) = $tmp668;
panda$core$Int64 $tmp669 = $tmp667.max;
panda$core$Bit $tmp670 = $tmp667.inclusive;
bool $tmp671 = $tmp670.value;
panda$core$Int64 $tmp672 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp673 = panda$core$Int64$convert$R$panda$core$UInt64($tmp672);
if ($tmp671) goto block99; else goto block100;
block99:;
int64_t $tmp674 = $tmp668.value;
int64_t $tmp675 = $tmp669.value;
bool $tmp676 = $tmp674 <= $tmp675;
panda$core$Bit $tmp677 = (panda$core$Bit) {$tmp676};
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block96; else goto block97;
block100:;
int64_t $tmp679 = $tmp668.value;
int64_t $tmp680 = $tmp669.value;
bool $tmp681 = $tmp679 < $tmp680;
panda$core$Bit $tmp682 = (panda$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block96; else goto block97;
block96:;
// line 285
panda$threads$MessageQueue* $tmp684 = *(&local22);
panda$core$Immutable* $tmp685 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp684);
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
org$pandalanguage$pandac$Compiler$Error* $tmp686 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp685)));
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) $tmp685);
// line 286
org$pandalanguage$pandac$Compiler$Error* $tmp687 = *(&local28);
panda$io$File** $tmp688 = &$tmp687->file;
panda$io$File* $tmp689 = *$tmp688;
panda$core$String* $tmp690 = panda$io$File$name$R$panda$core$String($tmp689);
panda$core$String* $tmp691 = panda$core$String$convert$R$panda$core$String($tmp690);
panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp691, &$s693);
org$pandalanguage$pandac$Compiler$Error* $tmp694 = *(&local28);
org$pandalanguage$pandac$Position* $tmp695 = &$tmp694->position;
org$pandalanguage$pandac$Position $tmp696 = *$tmp695;
org$pandalanguage$pandac$Position$wrapper* $tmp697;
$tmp697 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp697->value = $tmp696;
panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp692, ((panda$core$Object*) $tmp697));
panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, &$s700);
org$pandalanguage$pandac$Compiler$Error* $tmp701 = *(&local28);
panda$core$String** $tmp702 = &$tmp701->message;
panda$core$String* $tmp703 = *$tmp702;
panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp699, $tmp703);
panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp704, &$s706);
panda$io$Console$printLine$panda$core$String($tmp705);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
// unreffing REF($1133:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing REF($1132:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// unreffing REF($1128:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing REF($1127:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
// unreffing REF($1126:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
// unreffing REF($1122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
// unreffing REF($1121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing REF($1120:panda.core.String)
org$pandalanguage$pandac$Compiler$Error* $tmp707 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing error
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
// unreffing REF($1107:panda.threads.MessageQueue.T)
goto block98;
block98:;
panda$core$Int64 $tmp708 = *(&local27);
int64_t $tmp709 = $tmp669.value;
int64_t $tmp710 = $tmp708.value;
int64_t $tmp711 = $tmp709 - $tmp710;
panda$core$Int64 $tmp712 = (panda$core$Int64) {$tmp711};
panda$core$UInt64 $tmp713 = panda$core$Int64$convert$R$panda$core$UInt64($tmp712);
if ($tmp671) goto block102; else goto block103;
block102:;
uint64_t $tmp714 = $tmp713.value;
uint64_t $tmp715 = $tmp673.value;
bool $tmp716 = $tmp714 >= $tmp715;
panda$core$Bit $tmp717 = (panda$core$Bit) {$tmp716};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block101; else goto block97;
block103:;
uint64_t $tmp719 = $tmp713.value;
uint64_t $tmp720 = $tmp673.value;
bool $tmp721 = $tmp719 > $tmp720;
panda$core$Bit $tmp722 = (panda$core$Bit) {$tmp721};
bool $tmp723 = $tmp722.value;
if ($tmp723) goto block101; else goto block97;
block101:;
int64_t $tmp724 = $tmp708.value;
int64_t $tmp725 = $tmp672.value;
int64_t $tmp726 = $tmp724 + $tmp725;
panda$core$Int64 $tmp727 = (panda$core$Int64) {$tmp726};
*(&local27) = $tmp727;
goto block96;
block97:;
org$pandalanguage$pandac$Compiler* $tmp728 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing compiler
*(&local23) = ((org$pandalanguage$pandac$Compiler*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing REF($938:org.pandalanguage.pandac.Compiler)
panda$threads$MessageQueue* $tmp729 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp729));
// unreffing errorQueue
*(&local22) = ((panda$threads$MessageQueue*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
// unreffing REF($927:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
org$pandalanguage$pandac$Compiler$Settings* $tmp730 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
// unreffing settings
*(&local21) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
// unreffing REF($909:org.pandalanguage.pandac.Compiler.Settings)
org$pandalanguage$pandac$CodeGenerator* $tmp731 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing cg
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 289
panda$core$Int64 $tmp732 = *(&local19);
panda$core$Int64 $tmp733 = (panda$core$Int64) {0};
panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp732, $tmp733);
bool $tmp735 = $tmp734.value;
if ($tmp735) goto block104; else goto block106;
block104:;
// line 290
org$pandalanguage$pandac$Main$Format$nullable $tmp736 = *(&local6);
panda$core$Int64 $tmp737 = ((org$pandalanguage$pandac$Main$Format) $tmp736.value).$rawValue;
panda$core$Int64 $tmp738 = (panda$core$Int64) {1};
panda$core$Bit $tmp739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp738);
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block108; else goto block109;
block108:;
// line 292
panda$io$File* $tmp741 = *(&local3);
panda$io$File* $tmp742 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp741, &$s743);
panda$io$File* $tmp744 = *(&local3);
panda$core$Bit $tmp745 = *(&local8);
panda$io$File* $tmp746 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp742, $tmp744, $tmp745);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
// unreffing REF($1243:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing REF($1239:panda.io.File)
goto block107;
block109:;
panda$core$Int64 $tmp747 = (panda$core$Int64) {2};
panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp737, $tmp747);
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block110; else goto block107;
block110:;
// line 295
panda$io$File* $tmp750 = *(&local3);
panda$io$File* $tmp751 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp750, &$s752);
panda$io$File* $tmp753 = *(&local3);
panda$core$Bit $tmp754 = *(&local8);
panda$io$File* $tmp755 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp751, $tmp753, $tmp754);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
// unreffing REF($1262:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
// unreffing REF($1258:panda.io.File)
goto block107;
block107:;
goto block105;
block106:;
// line 1
// line 300
panda$core$Int64 $tmp756 = *(&local19);
panda$core$Int64 $tmp757 = (panda$core$Int64) {1};
panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp756, $tmp757);
bool $tmp759 = $tmp758.value;
if ($tmp759) goto block111; else goto block113;
block111:;
// line 301
panda$io$Console$printLine$panda$core$String(&$s760);
goto block112;
block113:;
// line 1
// line 304
panda$core$Int64 $tmp761 = *(&local19);
panda$core$String* $tmp762 = panda$core$Int64$convert$R$panda$core$String($tmp761);
panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, &$s764);
panda$io$Console$printLine$panda$core$String($tmp763);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
// unreffing REF($1285:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
// unreffing REF($1284:panda.core.String)
goto block112;
block112:;
// line 306
panda$core$UInt8 $tmp765 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp765);
goto block105;
block105:;
panda$io$File* $tmp766 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing llvmDir
*(&local17) = ((panda$io$File*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
// unreffing REF($499:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// unreffing REF($498:panda.io.File)
panda$io$OutputStream* $tmp767 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
// unreffing REF($67:panda.io.OutputStream)
panda$core$String* $tmp768 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp769 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp770 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
// unreffing REF($22:panda.collections.Array<panda.io.File>)
panda$collections$Array* $tmp771 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp203));
// unreffing REF($11:panda.collections.Array<panda.io.File>)
org$pandalanguage$pandac$Main$Arguments* $tmp772 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
// unreffing REF($1:org.pandalanguage.pandac.Main.Arguments)
return;

}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* param0) {

// line 312
panda$core$Bit $tmp773 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param0, &$s774);
return $tmp773;

}
void pandaMain(panda$collections$ListView* param0) {

// line 317
panda$core$Panda$disableRefErrorReporting();
// line 318
org$pandalanguage$pandac$Main* $tmp775 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(33, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
org$pandalanguage$pandac$Main$init($tmp775);
org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp775, param0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
// unreffing REF($3:org.pandalanguage.pandac.Main)
return;

}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp776 = &param0->clang;
panda$io$File* $tmp777 = *$tmp776;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp777));
panda$io$File** $tmp778 = &param0->pandaHome;
panda$io$File* $tmp779 = *$tmp778;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
return;

}

