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
typedef panda$collections$Iterator* (*$fn88)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn92)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn97)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn154)(panda$io$InputStream*);
typedef void (*$fn157)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn163)(panda$io$InputStream*);
typedef void (*$fn166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn180)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn183)(panda$io$OutputStream*);
typedef void (*$fn185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn188)(panda$io$OutputStream*);
typedef void (*$fn190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn193)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn213)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn219)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn236)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn249)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn255)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn266)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn289)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn298)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn321)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn333)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn338)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn380)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn390)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn398)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn416)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn430)(panda$collections$CollectionView*);
typedef void (*$fn437)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn451)(panda$collections$CollectionView*);
typedef void (*$fn484)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn502)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn507)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn512)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn523)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn538)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn551)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn607)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn611)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn616)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn624)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn628)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn633)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn643)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn652)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn775)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn780)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s72 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s191 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6d\x65\x6d", 5, 15240304310, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6d\x65\x6d", 5, 15240304310, NULL };

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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// line 70
panda$io$OutputStream* $tmp35 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp36 = *(&local1);
panda$io$InputStream** $tmp37 = &$tmp36->output;
panda$io$InputStream* $tmp38 = *$tmp37;
$fn40 $tmp39 = ($fn40) $tmp38->$class->vtable[14];
panda$core$String* $tmp41 = $tmp39($tmp38);
$fn43 $tmp42 = ($fn43) $tmp35->$class->vtable[17];
$tmp42($tmp35, $tmp41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
// line 71
panda$io$OutputStream* $tmp44 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp45 = *(&local1);
panda$io$InputStream** $tmp46 = &$tmp45->error;
panda$io$InputStream* $tmp47 = *$tmp46;
$fn49 $tmp48 = ($fn49) $tmp47->$class->vtable[14];
panda$core$String* $tmp50 = $tmp48($tmp47);
$fn52 $tmp51 = ($fn52) $tmp44->$class->vtable[17];
$tmp51($tmp44, $tmp50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
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
panda$core$Bit $tmp59 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp57, $tmp58);
bool $tmp60 = $tmp59.value;
if ($tmp60) goto block5; else goto block6;
block5:;
// line 77
panda$core$UInt8 $tmp61 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp61);
goto block6;
block6:;
// line 79
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp62 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing p
*(&local1) = ((panda$core$System$Process*) NULL);
panda$collections$Array* $tmp63 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
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
panda$collections$Array* $tmp64 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp64);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
*(&local0) = $tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
// line 84
panda$collections$Array* $tmp66 = *(&local0);
panda$core$String** $tmp67 = &param1->path;
panda$core$String* $tmp68 = *$tmp67;
panda$collections$Array$add$panda$collections$Array$T($tmp66, ((panda$core$Object*) $tmp68));
// line 85
panda$collections$Array* $tmp69 = *(&local0);
panda$core$String* $tmp70 = org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String();
panda$core$String* $tmp71 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s72, $tmp70);
panda$core$String* $tmp73 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp71, &$s74);
panda$collections$Array$add$panda$collections$Array$T($tmp69, ((panda$core$Object*) $tmp73));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
// line 86
panda$collections$Array* $tmp75 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp75, ((panda$core$Object*) &$s76));
// line 87
panda$collections$Array* $tmp77 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp77, ((panda$core$Object*) &$s78));
// line 88
panda$collections$Array* $tmp79 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp79, ((panda$core$Object*) &$s80));
// line 89
panda$core$String* $tmp81 = org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
panda$collections$Array* $tmp82 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp81, &$s83);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp84 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
*(&local1) = $tmp82;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// line 90
panda$collections$Array* $tmp85 = *(&local1);
ITable* $tmp86 = ((panda$collections$Iterable*) $tmp85)->$class->itable;
while ($tmp86->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
panda$collections$Iterator* $tmp89 = $tmp87(((panda$collections$Iterable*) $tmp85));
goto block1;
block1:;
ITable* $tmp90 = $tmp89->$class->itable;
while ($tmp90->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
panda$core$Bit $tmp93 = $tmp91($tmp89);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block3; else goto block2;
block2:;
*(&local2) = ((panda$core$String*) NULL);
ITable* $tmp95 = $tmp89->$class->itable;
while ($tmp95->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[1];
panda$core$Object* $tmp98 = $tmp96($tmp89);
panda$core$String* $tmp99 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp99));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp98)));
*(&local2) = ((panda$core$String*) $tmp98);
// line 91
panda$io$File* $tmp100 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp101 = *(&local2);
panda$io$File$init$panda$core$String($tmp100, $tmp101);
*(&local3) = ((panda$io$File*) NULL);
panda$io$File* $tmp102 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp102));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
*(&local3) = $tmp100;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp100));
// line 92
panda$collections$Array* $tmp103 = *(&local0);
panda$io$File* $tmp104 = *(&local3);
panda$io$File* $tmp105 = panda$io$File$parent$R$panda$io$File$Q($tmp104);
panda$core$String* $tmp106 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s107, ((panda$core$Object*) $tmp105));
panda$collections$Array$add$panda$collections$Array$T($tmp103, ((panda$core$Object*) $tmp106));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
// line 93
panda$io$File* $tmp108 = *(&local3);
panda$core$String* $tmp109 = panda$io$File$simpleName$R$panda$core$String($tmp108);
*(&local4) = ((panda$core$String*) NULL);
panda$core$String* $tmp110 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
*(&local4) = $tmp109;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
// line 94
panda$core$String* $tmp111 = *(&local4);
panda$core$Bit $tmp112 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp111, &$s113);
bool $tmp114 = $tmp112.value;
if ($tmp114) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp115 = (panda$core$Int64) {94};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s116, $tmp115);
abort(); // unreachable
block4:;
// line 95
panda$core$String* $tmp117 = *(&local4);
panda$core$Int64 $tmp118 = (panda$core$Int64) {3};
panda$core$Bit $tmp119 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp120 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp118, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp119);
panda$core$String* $tmp121 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp117, $tmp120);
panda$core$String* $tmp122 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
*(&local4) = $tmp121;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
// line 96
panda$collections$Array* $tmp123 = *(&local0);
panda$core$String* $tmp124 = *(&local4);
panda$core$String* $tmp125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s126, $tmp124);
panda$collections$Array$add$panda$collections$Array$T($tmp123, ((panda$core$Object*) $tmp125));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$core$Panda$unref$panda$core$Object$Q($tmp98);
panda$core$String* $tmp127 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing simpleName
*(&local4) = ((panda$core$String*) NULL);
panda$io$File* $tmp128 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing libFile
*(&local3) = ((panda$io$File*) NULL);
panda$core$String* $tmp129 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
// unreffing lib
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// line 98
panda$collections$Array* $tmp130 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp130, ((panda$core$Object*) &$s131));
// line 99
panda$collections$Array* $tmp132 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp132, ((panda$core$Object*) &$s133));
// line 100
panda$core$Bit* $tmp134 = &param0->debug;
panda$core$Bit $tmp135 = *$tmp134;
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block6; else goto block7;
block6:;
// line 101
panda$collections$Array* $tmp137 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp137, ((panda$core$Object*) &$s138));
goto block7;
block7:;
// line 103
panda$collections$Array* $tmp139 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp139, ((panda$core$Object*) &$s140));
// line 104
panda$collections$Array* $tmp141 = *(&local0);
panda$core$String** $tmp142 = &param2->path;
panda$core$String* $tmp143 = *$tmp142;
panda$collections$Array$add$panda$collections$Array$T($tmp141, ((panda$core$Object*) $tmp143));
// line 105
panda$io$File** $tmp144 = &param0->clang;
panda$io$File* $tmp145 = *$tmp144;
panda$collections$Array* $tmp146 = *(&local0);
panda$core$System$Process* $tmp147 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q($tmp145, ((panda$collections$ListView*) $tmp146));
*(&local5) = ((panda$core$System$Process*) NULL);
panda$core$System$Process* $tmp148 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp148));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
*(&local5) = $tmp147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// line 106
panda$io$OutputStream* $tmp149 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp150 = *(&local5);
panda$io$InputStream** $tmp151 = &$tmp150->output;
panda$io$InputStream* $tmp152 = *$tmp151;
$fn154 $tmp153 = ($fn154) $tmp152->$class->vtable[14];
panda$core$String* $tmp155 = $tmp153($tmp152);
$fn157 $tmp156 = ($fn157) $tmp149->$class->vtable[17];
$tmp156($tmp149, $tmp155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// line 107
panda$io$OutputStream* $tmp158 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp159 = *(&local5);
panda$io$InputStream** $tmp160 = &$tmp159->error;
panda$io$InputStream* $tmp161 = *$tmp160;
$fn163 $tmp162 = ($fn163) $tmp161->$class->vtable[14];
panda$core$String* $tmp164 = $tmp162($tmp161);
$fn166 $tmp165 = ($fn166) $tmp158->$class->vtable[17];
$tmp165($tmp158, $tmp164);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp164));
// line 108
panda$core$System$Process* $tmp167 = *(&local5);
panda$core$Int64 $tmp168;
panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp168, $tmp167);
*(&local6) = $tmp168;
// line 109
panda$core$Bit $tmp169 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block8; else goto block9;
block8:;
// line 110
panda$io$File$delete(param1);
goto block9;
block9:;
// line 112
panda$core$Int64 $tmp171 = *(&local6);
panda$core$Int64 $tmp172 = (panda$core$Int64) {0};
panda$core$Bit $tmp173 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp171, $tmp172);
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block10; else goto block11;
block10:;
// line 113
panda$core$UInt8 $tmp175 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp175);
goto block11;
block11:;
// line 115
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp176 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
// unreffing p
*(&local5) = ((panda$core$System$Process*) NULL);
panda$collections$Array* $tmp177 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing icuLibs
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp178 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
return param2;

}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* param0, panda$io$OutputStream* param1) {

// line 119
$fn180 $tmp179 = ($fn180) param1->$class->vtable[19];
$tmp179(param1, &$s181);
// line 120
$fn183 $tmp182 = ($fn183) param1->$class->vtable[21];
$tmp182(param1);
// line 121
$fn185 $tmp184 = ($fn185) param1->$class->vtable[19];
$tmp184(param1, &$s186);
// line 122
$fn188 $tmp187 = ($fn188) param1->$class->vtable[21];
$tmp187(param1);
// line 123
$fn190 $tmp189 = ($fn190) param1->$class->vtable[19];
$tmp189(param1, &$s191);
// line 124
$fn193 $tmp192 = ($fn193) param1->$class->vtable[19];
$tmp192(param1, &$s194);
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
org$pandalanguage$pandac$Main$Arguments* $tmp195 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp195, param1);
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp196 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
*(&local0) = $tmp195;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp195));
// line 129
panda$collections$Array* $tmp197 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp197);
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp198 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp198));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
*(&local1) = $tmp197;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// line 130
panda$collections$Array* $tmp199 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp199);
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp200 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
*(&local2) = $tmp199;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
// line 131
panda$collections$Array* $tmp201 = *(&local2);
panda$io$File** $tmp202 = &param0->pandaHome;
panda$io$File* $tmp203 = *$tmp202;
panda$collections$Array$add$panda$collections$Array$T($tmp201, ((panda$core$Object*) $tmp203));
// line 132
*(&local3) = ((panda$io$File*) NULL);
panda$io$File* $tmp204 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp204));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
*(&local3) = ((panda$io$File*) NULL);
// line 133
panda$core$Int64 $tmp205 = (panda$core$Int64) {3};
*(&local4) = $tmp205;
// line 134
panda$core$Int64 $tmp206 = (panda$core$Int64) {3};
*(&local5) = $tmp206;
// line 135
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { .nonnull = false });
// line 136
*(&local7) = ((panda$core$String*) NULL);
panda$core$String* $tmp207 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp207));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
*(&local7) = ((panda$core$String*) NULL);
// line 137
panda$core$Bit $tmp208 = panda$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp208;
// line 138
panda$io$OutputStream* $tmp209 = panda$io$Console$errorStream$R$panda$io$OutputStream();
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$io$OutputStream* $tmp210 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp210));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
*(&local9) = $tmp209;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp209));
// line 139
goto block1;
block1:;
org$pandalanguage$pandac$Main$Arguments* $tmp211 = *(&local0);
$fn213 $tmp212 = ($fn213) $tmp211->$class->vtable[2];
panda$core$Bit $tmp214 = $tmp212($tmp211);
panda$core$Bit $tmp215 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp214);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block2; else goto block3;
block2:;
// line 140
org$pandalanguage$pandac$Main$Arguments* $tmp217 = *(&local0);
$fn219 $tmp218 = ($fn219) $tmp217->$class->vtable[3];
panda$core$String* $tmp220 = $tmp218($tmp217);
*(&local10) = ((panda$core$String*) NULL);
panda$core$String* $tmp221 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
*(&local10) = $tmp220;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// line 141
panda$core$String* $tmp222 = *(&local10);
panda$core$Bit $tmp223 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s224);
bool $tmp225 = $tmp223.value;
if ($tmp225) goto block5; else goto block6;
block5:;
goto block4;
block6:;
panda$core$Bit $tmp226 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s227);
bool $tmp228 = $tmp226.value;
if ($tmp228) goto block7; else goto block8;
block7:;
// line 145
panda$io$File* $tmp229 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp229, &$s230);
*(&local11) = ((panda$io$File*) NULL);
panda$io$File* $tmp231 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
*(&local11) = $tmp229;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// line 146
panda$io$InputStream* $tmp232 = panda$io$Console$inputStream$R$panda$io$InputStream();
panda$io$File* $tmp233 = *(&local11);
panda$io$OutputStream* $tmp234 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp233);
$fn236 $tmp235 = ($fn236) $tmp232->$class->vtable[16];
panda$core$Int64 $tmp237 = $tmp235($tmp232, $tmp234);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
// line 147
panda$collections$Array* $tmp238 = *(&local1);
panda$io$File* $tmp239 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp238, ((panda$core$Object*) $tmp239));
panda$io$File* $tmp240 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
// unreffing path
*(&local11) = ((panda$io$File*) NULL);
goto block4;
block8:;
panda$core$Bit $tmp241 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s242);
bool $tmp243 = $tmp241.value;
if ($tmp243) goto block9; else goto block10;
block9:;
// line 149
panda$io$File* $tmp244 = *(&local3);
panda$core$Bit $tmp245 = panda$core$Bit$init$builtin_bit($tmp244 != NULL);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block11; else goto block12;
block11:;
// line 150
panda$io$OutputStream* $tmp247 = *(&local9);
$fn249 $tmp248 = ($fn249) $tmp247->$class->vtable[19];
$tmp248($tmp247, &$s250);
// line 151
panda$core$UInt8 $tmp251 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp251);
goto block12;
block12:;
// line 153
panda$io$File* $tmp252 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp253 = *(&local0);
$fn255 $tmp254 = ($fn255) $tmp253->$class->vtable[4];
panda$core$String* $tmp256 = $tmp254($tmp253, &$s257);
panda$io$File$init$panda$core$String($tmp252, $tmp256);
panda$io$File* $tmp258 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
*(&local3) = $tmp252;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
// line 154
panda$io$File* $tmp259 = *(&local3);
panda$io$File* $tmp260 = panda$io$File$parent$R$panda$io$File$Q($tmp259);
panda$io$File$createDirectories($tmp260);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp260));
goto block4;
block10:;
panda$core$Bit $tmp261 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s262);
bool $tmp263 = $tmp261.value;
if ($tmp263) goto block13; else goto block14;
block13:;
// line 156
org$pandalanguage$pandac$Main$Arguments* $tmp264 = *(&local0);
$fn266 $tmp265 = ($fn266) $tmp264->$class->vtable[4];
panda$core$String* $tmp267 = $tmp265($tmp264, &$s268);
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp269 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
*(&local12) = $tmp267;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// line 157
panda$core$String* $tmp270 = *(&local12);
panda$core$Int64$nullable $tmp271 = panda$core$String$convert$R$panda$core$Int64$Q($tmp270);
*(&local4) = ((panda$core$Int64) $tmp271.value);
// line 158
panda$core$Int64 $tmp272 = *(&local4);
panda$core$Int64 $tmp273 = (panda$core$Int64) {3};
int64_t $tmp274 = $tmp272.value;
int64_t $tmp275 = $tmp273.value;
bool $tmp276 = $tmp274 > $tmp275;
panda$core$Bit $tmp277 = (panda$core$Bit) {$tmp276};
bool $tmp278 = $tmp277.value;
if ($tmp278) goto block15; else goto block16;
block15:;
*(&local13) = $tmp277;
goto block17;
block16:;
panda$core$Int64 $tmp279 = *(&local4);
panda$core$Int64 $tmp280 = (panda$core$Int64) {0};
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280.value;
bool $tmp283 = $tmp281 < $tmp282;
panda$core$Bit $tmp284 = (panda$core$Bit) {$tmp283};
*(&local13) = $tmp284;
goto block17;
block17:;
panda$core$Bit $tmp285 = *(&local13);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block18; else goto block19;
block18:;
// line 159
panda$io$OutputStream* $tmp287 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn289 $tmp288 = ($fn289) $tmp287->$class->vtable[19];
$tmp288($tmp287, &$s290);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// line 160
panda$core$UInt8 $tmp291 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp291);
goto block19;
block19:;
panda$core$String* $tmp292 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
// unreffing level
*(&local12) = ((panda$core$String*) NULL);
goto block4;
block14:;
panda$core$Bit $tmp293 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s294);
bool $tmp295 = $tmp293.value;
if ($tmp295) goto block20; else goto block21;
block20:;
// line 163
org$pandalanguage$pandac$Main$Arguments* $tmp296 = *(&local0);
$fn298 $tmp297 = ($fn298) $tmp296->$class->vtable[4];
panda$core$String* $tmp299 = $tmp297($tmp296, &$s300);
*(&local14) = ((panda$core$String*) NULL);
panda$core$String* $tmp301 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
*(&local14) = $tmp299;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// line 164
panda$core$String* $tmp302 = *(&local14);
panda$core$Int64$nullable $tmp303 = panda$core$String$convert$R$panda$core$Int64$Q($tmp302);
*(&local5) = ((panda$core$Int64) $tmp303.value);
// line 165
panda$core$Int64 $tmp304 = *(&local5);
panda$core$Int64 $tmp305 = (panda$core$Int64) {3};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 > $tmp307;
panda$core$Bit $tmp309 = (panda$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block22; else goto block23;
block22:;
*(&local15) = $tmp309;
goto block24;
block23:;
panda$core$Int64 $tmp311 = *(&local5);
panda$core$Int64 $tmp312 = (panda$core$Int64) {0};
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 < $tmp314;
panda$core$Bit $tmp316 = (panda$core$Bit) {$tmp315};
*(&local15) = $tmp316;
goto block24;
block24:;
panda$core$Bit $tmp317 = *(&local15);
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block25; else goto block26;
block25:;
// line 166
panda$io$OutputStream* $tmp319 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn321 $tmp320 = ($fn321) $tmp319->$class->vtable[19];
$tmp320($tmp319, &$s322);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// line 167
panda$core$UInt8 $tmp323 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp323);
goto block26;
block26:;
panda$core$String* $tmp324 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing level
*(&local14) = ((panda$core$String*) NULL);
goto block4;
block21:;
panda$core$Bit $tmp325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s326);
bool $tmp327 = $tmp325.value;
if ($tmp327) goto block27; else goto block28;
block27:;
// line 170
org$pandalanguage$pandac$Main$Format$nullable $tmp328 = *(&local6);
panda$core$Bit $tmp329 = panda$core$Bit$init$builtin_bit($tmp328.nonnull);
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block29; else goto block30;
block29:;
// line 171
panda$io$OutputStream* $tmp331 = *(&local9);
$fn333 $tmp332 = ($fn333) $tmp331->$class->vtable[19];
$tmp332($tmp331, &$s334);
// line 172
panda$core$UInt8 $tmp335 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp335);
goto block30;
block30:;
// line 174
org$pandalanguage$pandac$Main$Arguments* $tmp336 = *(&local0);
$fn338 $tmp337 = ($fn338) $tmp336->$class->vtable[4];
panda$core$String* $tmp339 = $tmp337($tmp336, &$s340);
*(&local16) = ((panda$core$String*) NULL);
panda$core$String* $tmp341 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
*(&local16) = $tmp339;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// line 175
panda$core$String* $tmp342 = *(&local16);
panda$core$Bit $tmp343 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp342, &$s344);
bool $tmp345 = $tmp343.value;
if ($tmp345) goto block32; else goto block33;
block32:;
// line 176
panda$core$Int64 $tmp346 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp347 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp346);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp347, true });
goto block31;
block33:;
panda$core$Bit $tmp348 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp342, &$s349);
bool $tmp350 = $tmp348.value;
if ($tmp350) goto block34; else goto block35;
block34:;
// line 177
panda$core$Int64 $tmp351 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Main$Format $tmp352 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp351);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp352, true });
goto block31;
block35:;
panda$core$Bit $tmp353 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp342, &$s354);
bool $tmp355 = $tmp353.value;
if ($tmp355) goto block36; else goto block37;
block36:;
// line 178
panda$core$Int64 $tmp356 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Main$Format $tmp357 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp356);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp357, true });
goto block31;
block37:;
panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp342, &$s359);
bool $tmp360 = $tmp358.value;
if ($tmp360) goto block38; else goto block39;
block38:;
// line 179
panda$core$Int64 $tmp361 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Main$Format $tmp362 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp361);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp362, true });
goto block31;
block39:;
panda$core$Bit $tmp363 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp342, &$s364);
bool $tmp365 = $tmp363.value;
if ($tmp365) goto block40; else goto block41;
block40:;
// line 180
panda$core$Int64 $tmp366 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Main$Format $tmp367 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp366);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp367, true });
goto block31;
block41:;
panda$core$Bit $tmp368 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp342, &$s369);
bool $tmp370 = $tmp368.value;
if ($tmp370) goto block42; else goto block43;
block42:;
// line 181
panda$core$Int64 $tmp371 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp372 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp371);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp372, true });
goto block31;
block43:;
// line 183
panda$io$OutputStream* $tmp373 = *(&local9);
panda$core$String* $tmp374 = *(&local16);
panda$core$String* $tmp375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s376, $tmp374);
panda$core$String* $tmp377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp375, &$s378);
$fn380 $tmp379 = ($fn380) $tmp373->$class->vtable[19];
$tmp379($tmp373, $tmp377);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// line 184
panda$core$UInt8 $tmp381 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp381);
goto block31;
block31:;
panda$core$String* $tmp382 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp382));
// unreffing f
*(&local16) = ((panda$core$String*) NULL);
goto block4;
block28:;
panda$core$Bit $tmp383 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s384);
bool $tmp385 = $tmp383.value;
if ($tmp385) goto block44; else goto block45;
block44:;
// line 187
panda$collections$Array* $tmp386 = *(&local2);
panda$io$File* $tmp387 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp388 = *(&local0);
$fn390 $tmp389 = ($fn390) $tmp388->$class->vtable[4];
panda$core$String* $tmp391 = $tmp389($tmp388, &$s392);
panda$io$File$init$panda$core$String($tmp387, $tmp391);
panda$collections$Array$add$panda$collections$Array$T($tmp386, ((panda$core$Object*) $tmp387));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp387));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
goto block4;
block45:;
panda$core$Bit $tmp393 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp222, &$s394);
bool $tmp395 = $tmp393.value;
if ($tmp395) goto block46; else goto block47;
block46:;
// line 189
org$pandalanguage$pandac$Main$Arguments* $tmp396 = *(&local0);
$fn398 $tmp397 = ($fn398) $tmp396->$class->vtable[4];
panda$core$String* $tmp399 = $tmp397($tmp396, &$s400);
panda$core$String* $tmp401 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
*(&local7) = $tmp399;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
goto block4;
block47:;
// line 191
panda$core$String* $tmp402 = *(&local10);
panda$core$Bit $tmp403 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp402, &$s404);
bool $tmp405 = $tmp403.value;
if ($tmp405) goto block48; else goto block50;
block48:;
// line 192
panda$collections$Array* $tmp406 = *(&local1);
panda$io$File* $tmp407 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp408 = *(&local10);
panda$io$File$init$panda$core$String($tmp407, $tmp408);
panda$collections$Array$add$panda$collections$Array$T($tmp406, ((panda$core$Object*) $tmp407));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
goto block49;
block50:;
// line 1
// line 195
panda$io$OutputStream* $tmp409 = *(&local9);
panda$core$String* $tmp410 = *(&local10);
panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s412, $tmp410);
panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s414);
$fn416 $tmp415 = ($fn416) $tmp409->$class->vtable[19];
$tmp415($tmp409, $tmp413);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// line 196
panda$core$UInt8 $tmp417 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp417);
goto block49;
block49:;
goto block4;
block4:;
panda$core$String* $tmp418 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
// unreffing a
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block3:;
// line 200
panda$io$File* $tmp419 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp420 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp419, $tmp420);
*(&local17) = ((panda$io$File*) NULL);
panda$io$File* $tmp421 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
*(&local17) = $tmp419;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp419));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp420));
// line 201
panda$io$File* $tmp422 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp422, &$s423);
panda$io$File** $tmp424 = &param0->clang;
panda$io$File* $tmp425 = *$tmp424;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
panda$io$File** $tmp426 = &param0->clang;
*$tmp426 = $tmp422;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp422));
// line 202
panda$collections$Array* $tmp427 = *(&local1);
ITable* $tmp428 = ((panda$collections$CollectionView*) $tmp427)->$class->itable;
while ($tmp428->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp428 = $tmp428->next;
}
$fn430 $tmp429 = $tmp428->methods[0];
panda$core$Int64 $tmp431 = $tmp429(((panda$collections$CollectionView*) $tmp427));
panda$core$Int64 $tmp432 = (panda$core$Int64) {0};
panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp431, $tmp432);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block51; else goto block52;
block51:;
// line 203
panda$io$OutputStream* $tmp435 = *(&local9);
$fn437 $tmp436 = ($fn437) $tmp435->$class->vtable[19];
$tmp436($tmp435, &$s438);
// line 204
panda$core$UInt8 $tmp439 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp439);
goto block52;
block52:;
// line 206
org$pandalanguage$pandac$Main$Format$nullable $tmp440 = *(&local6);
panda$core$Bit $tmp441 = panda$core$Bit$init$builtin_bit(!$tmp440.nonnull);
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block53; else goto block54;
block53:;
// line 207
panda$core$Int64 $tmp443 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp444 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp443);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp444, true });
goto block54;
block54:;
// line 209
panda$io$File* $tmp445 = *(&local3);
panda$core$Bit $tmp446 = panda$core$Bit$init$builtin_bit($tmp445 == NULL);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block55; else goto block56;
block55:;
// line 210
panda$collections$Array* $tmp448 = *(&local1);
ITable* $tmp449 = ((panda$collections$CollectionView*) $tmp448)->$class->itable;
while ($tmp449->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp449 = $tmp449->next;
}
$fn451 $tmp450 = $tmp449->methods[0];
panda$core$Int64 $tmp452 = $tmp450(((panda$collections$CollectionView*) $tmp448));
panda$core$Int64 $tmp453 = (panda$core$Int64) {1};
panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp452, $tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block57; else goto block59;
block57:;
// line 211
*(&local18) = ((panda$core$String*) NULL);
// line 212
org$pandalanguage$pandac$Main$Format$nullable $tmp456 = *(&local6);
panda$core$Int64 $tmp457 = ((org$pandalanguage$pandac$Main$Format) $tmp456.value).$rawValue;
panda$core$Int64 $tmp458 = (panda$core$Int64) {1};
panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp457, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block61; else goto block62;
block61:;
// line 213
panda$core$String* $tmp461 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s462));
*(&local18) = &$s463;
goto block60;
block62:;
panda$core$Int64 $tmp464 = (panda$core$Int64) {2};
panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp457, $tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block63; else goto block64;
block63:;
// line 214
panda$core$String* $tmp467 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s468));
*(&local18) = &$s469;
goto block60;
block64:;
panda$core$Int64 $tmp470 = (panda$core$Int64) {0};
panda$core$Bit $tmp471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp457, $tmp470);
bool $tmp472 = $tmp471.value;
if ($tmp472) goto block65; else goto block66;
block65:;
// line 215
panda$core$String* $tmp473 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s474));
*(&local18) = &$s475;
goto block60;
block66:;
panda$core$Int64 $tmp476 = (panda$core$Int64) {5};
panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp457, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block67; else goto block68;
block67:;
// line 216
panda$core$String* $tmp479 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s480));
*(&local18) = &$s481;
goto block60;
block68:;
// line 218
panda$io$OutputStream* $tmp482 = *(&local9);
$fn484 $tmp483 = ($fn484) $tmp482->$class->vtable[19];
$tmp483($tmp482, &$s485);
// line 219
panda$core$UInt8 $tmp486 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp486);
goto block60;
block60:;
// line 221
panda$collections$Array* $tmp487 = *(&local1);
panda$core$Int64 $tmp488 = (panda$core$Int64) {0};
panda$core$Object* $tmp489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp487, $tmp488);
panda$core$String* $tmp490 = *(&local18);
panda$io$File* $tmp491 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp489), $tmp490);
panda$io$File* $tmp492 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
*(&local3) = $tmp491;
panda$core$Panda$unref$panda$core$Object$Q($tmp489);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
panda$core$String* $tmp493 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
// unreffing extension
*(&local18) = ((panda$core$String*) NULL);
goto block58;
block59:;
// line 223
org$pandalanguage$pandac$Main$Format$nullable $tmp494 = *(&local6);
panda$core$Equatable* $tmp495;
if ($tmp494.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp496;
    $tmp496 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp496->value = ((org$pandalanguage$pandac$Main$Format) $tmp494.value);
    $tmp495 = ((panda$core$Equatable*) $tmp496);
}
else {
    $tmp495 = NULL;
}
panda$core$Int64 $tmp497 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp498 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp497);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp499;
$tmp499 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp499->value = $tmp498;
ITable* $tmp500 = $tmp495->$class->itable;
while ($tmp500->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp500 = $tmp500->next;
}
$fn502 $tmp501 = $tmp500->methods[0];
panda$core$Bit $tmp503 = $tmp501($tmp495, ((panda$core$Equatable*) $tmp499));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp499)));
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block69; else goto block71;
block69:;
// line 224
panda$io$OutputStream* $tmp505 = *(&local9);
$fn507 $tmp506 = ($fn507) $tmp505->$class->vtable[19];
$tmp506($tmp505, &$s508);
// line 225
panda$core$UInt8 $tmp509 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp509);
goto block70;
block71:;
// line 1
// line 228
panda$io$OutputStream* $tmp510 = *(&local9);
$fn512 $tmp511 = ($fn512) $tmp510->$class->vtable[19];
$tmp511($tmp510, &$s513);
// line 230
panda$core$UInt8 $tmp514 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp514);
goto block70;
block70:;
goto block58;
block58:;
goto block56;
block56:;
// line 233
org$pandalanguage$pandac$Main$Format$nullable $tmp515 = *(&local6);
panda$core$Equatable* $tmp516;
if ($tmp515.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp517;
    $tmp517 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp517->value = ((org$pandalanguage$pandac$Main$Format) $tmp515.value);
    $tmp516 = ((panda$core$Equatable*) $tmp517);
}
else {
    $tmp516 = NULL;
}
panda$core$Int64 $tmp518 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp519 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp518);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp520;
$tmp520 = (org$pandalanguage$pandac$Main$Format$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp520->value = $tmp519;
ITable* $tmp521 = $tmp516->$class->itable;
while ($tmp521->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp521 = $tmp521->next;
}
$fn523 $tmp522 = $tmp521->methods[0];
panda$core$Bit $tmp524 = $tmp522($tmp516, ((panda$core$Equatable*) $tmp520));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp520)));
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block72; else goto block73;
block72:;
// line 234
panda$core$String* $tmp526 = *(&local7);
panda$core$Bit $tmp527 = panda$core$Bit$init$builtin_bit($tmp526 == NULL);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block74; else goto block75;
block74:;
// line 235
panda$core$String* $tmp530 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s529));
*(&local7) = &$s529;
goto block75;
block75:;
// line 237
org$pandalanguage$pandac$HTMLProcessor* $tmp531 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
org$pandalanguage$pandac$HTMLProcessor$init($tmp531);
panda$collections$Array* $tmp532 = *(&local1);
panda$core$Int64 $tmp533 = (panda$core$Int64) {0};
panda$core$Object* $tmp534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp532, $tmp533);
panda$io$File* $tmp535 = *(&local3);
panda$core$String* $tmp536 = *(&local7);
$fn538 $tmp537 = ($fn538) $tmp531->$class->vtable[3];
$tmp537($tmp531, ((panda$io$File*) $tmp534), $tmp535, $tmp536);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$core$Panda$unref$panda$core$Object$Q($tmp534);
// line 238
panda$io$File* $tmp539 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing llvmDir
*(&local17) = ((panda$io$File*) NULL);
panda$io$OutputStream* $tmp540 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$String* $tmp541 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp542 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp543 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp544 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp545 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
return;
block73:;
// line 240
panda$core$String* $tmp546 = *(&local7);
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit($tmp546 != NULL);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block76; else goto block77;
block76:;
// line 241
panda$io$OutputStream* $tmp549 = *(&local9);
$fn551 $tmp550 = ($fn551) $tmp549->$class->vtable[19];
$tmp550($tmp549, &$s552);
// line 242
panda$core$UInt8 $tmp553 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp553);
goto block77;
block77:;
// line 244
// line 1
// line 246
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 247
org$pandalanguage$pandac$Main$Format$nullable $tmp554 = *(&local6);
panda$core$Int64 $tmp555 = ((org$pandalanguage$pandac$Main$Format) $tmp554.value).$rawValue;
panda$core$Int64 $tmp556 = (panda$core$Int64) {0};
panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp555, $tmp556);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block79; else goto block80;
block80:;
panda$core$Int64 $tmp559 = (panda$core$Int64) {1};
panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp555, $tmp559);
bool $tmp561 = $tmp560.value;
if ($tmp561) goto block79; else goto block81;
block81:;
panda$core$Int64 $tmp562 = (panda$core$Int64) {2};
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp555, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block79; else goto block82;
block79:;
// line 249
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp565 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$core$String* $tmp566 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
panda$io$File* $tmp567 = *(&local3);
panda$io$File* $tmp568 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp567, &$s569);
panda$io$OutputStream* $tmp570 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp568);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp565, $tmp566, $tmp570);
org$pandalanguage$pandac$CodeGenerator* $tmp571 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp571));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp565)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp565);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp570));
goto block78;
block82:;
panda$core$Int64 $tmp572 = (panda$core$Int64) {3};
panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp555, $tmp572);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block83; else goto block84;
block83:;
// line 252
org$pandalanguage$pandac$HCodeGenerator* $tmp575 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
panda$io$File* $tmp576 = *(&local3);
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp575, $tmp576);
org$pandalanguage$pandac$CodeGenerator* $tmp577 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp575)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp575);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
goto block78;
block84:;
panda$core$Int64 $tmp578 = (panda$core$Int64) {4};
panda$core$Bit $tmp579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp555, $tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block85; else goto block86;
block85:;
// line 254
org$pandalanguage$pandac$CCodeGenerator* $tmp581 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
panda$io$File* $tmp582 = *(&local3);
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp581, $tmp582);
org$pandalanguage$pandac$CodeGenerator* $tmp583 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp581)));
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp581);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
goto block78;
block86:;
// line 256
panda$core$Bit $tmp584 = panda$core$Bit$init$builtin_bit(false);
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block87; else goto block88;
block88:;
panda$core$Int64 $tmp586 = (panda$core$Int64) {256};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s587, $tmp586);
abort(); // unreachable
block87:;
goto block78;
block78:;
// line 258
org$pandalanguage$pandac$Compiler$Settings* $tmp588 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(49, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
panda$io$File** $tmp589 = &param0->pandaHome;
panda$io$File* $tmp590 = *$tmp589;
panda$collections$Array* $tmp591 = *(&local2);
panda$core$Int64 $tmp592 = *(&local4);
panda$core$Int64 $tmp593 = *(&local5);
panda$core$Bit* $tmp594 = &param0->debug;
panda$core$Bit $tmp595 = *$tmp594;
org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp588, $tmp590, ((panda$collections$ListView*) $tmp591), $tmp592, $tmp593, $tmp595);
*(&local21) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
org$pandalanguage$pandac$Compiler$Settings* $tmp596 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
*(&local21) = $tmp588;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
// line 260
panda$threads$MessageQueue* $tmp597 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp597);
*(&local22) = ((panda$threads$MessageQueue*) NULL);
panda$threads$MessageQueue* $tmp598 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
*(&local22) = $tmp597;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
// line 261
org$pandalanguage$pandac$Compiler* $tmp599 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
panda$threads$MessageQueue* $tmp600 = *(&local22);
org$pandalanguage$pandac$CodeGenerator* $tmp601 = *(&local20);
org$pandalanguage$pandac$Compiler$Settings* $tmp602 = *(&local21);
org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp599, $tmp600, $tmp601, $tmp602);
*(&local23) = ((org$pandalanguage$pandac$Compiler*) NULL);
org$pandalanguage$pandac$Compiler* $tmp603 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
*(&local23) = $tmp599;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// line 262
panda$collections$Array* $tmp604 = *(&local1);
ITable* $tmp605 = ((panda$collections$Iterable*) $tmp604)->$class->itable;
while ($tmp605->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp605 = $tmp605->next;
}
$fn607 $tmp606 = $tmp605->methods[0];
panda$collections$Iterator* $tmp608 = $tmp606(((panda$collections$Iterable*) $tmp604));
goto block89;
block89:;
ITable* $tmp609 = $tmp608->$class->itable;
while ($tmp609->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp609 = $tmp609->next;
}
$fn611 $tmp610 = $tmp609->methods[0];
panda$core$Bit $tmp612 = $tmp610($tmp608);
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block91; else goto block90;
block90:;
*(&local24) = ((panda$io$File*) NULL);
ITable* $tmp614 = $tmp608->$class->itable;
while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp614 = $tmp614->next;
}
$fn616 $tmp615 = $tmp614->methods[1];
panda$core$Object* $tmp617 = $tmp615($tmp608);
panda$io$File* $tmp618 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp617)));
*(&local24) = ((panda$io$File*) $tmp617);
// line 263
org$pandalanguage$pandac$Compiler* $tmp619 = *(&local23);
panda$io$File* $tmp620 = *(&local24);
panda$collections$ListView* $tmp621 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT($tmp619, $tmp620);
ITable* $tmp622 = ((panda$collections$Iterable*) $tmp621)->$class->itable;
while ($tmp622->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp622 = $tmp622->next;
}
$fn624 $tmp623 = $tmp622->methods[0];
panda$collections$Iterator* $tmp625 = $tmp623(((panda$collections$Iterable*) $tmp621));
goto block92;
block92:;
ITable* $tmp626 = $tmp625->$class->itable;
while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp626 = $tmp626->next;
}
$fn628 $tmp627 = $tmp626->methods[0];
panda$core$Bit $tmp629 = $tmp627($tmp625);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block94; else goto block93;
block93:;
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp631 = $tmp625->$class->itable;
while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp631 = $tmp631->next;
}
$fn633 $tmp632 = $tmp631->methods[1];
panda$core$Object* $tmp634 = $tmp632($tmp625);
org$pandalanguage$pandac$ClassDecl* $tmp635 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp634)));
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) $tmp634);
// line 264
org$pandalanguage$pandac$Compiler* $tmp636 = *(&local23);
org$pandalanguage$pandac$ClassDecl* $tmp637 = *(&local25);
org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl($tmp636, $tmp637);
panda$core$Panda$unref$panda$core$Object$Q($tmp634);
org$pandalanguage$pandac$ClassDecl* $tmp638 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
// unreffing cl
*(&local25) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block92;
block94:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
panda$core$Panda$unref$panda$core$Object$Q($tmp617);
panda$io$File* $tmp639 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
// unreffing s
*(&local24) = ((panda$io$File*) NULL);
goto block89;
block91:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp608));
// line 267
panda$collections$Array* $tmp640 = *(&local1);
ITable* $tmp641 = ((panda$collections$Iterable*) $tmp640)->$class->itable;
while ($tmp641->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp641 = $tmp641->next;
}
$fn643 $tmp642 = $tmp641->methods[0];
panda$collections$Iterator* $tmp644 = $tmp642(((panda$collections$Iterable*) $tmp640));
goto block95;
block95:;
ITable* $tmp645 = $tmp644->$class->itable;
while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
panda$core$Bit $tmp648 = $tmp646($tmp644);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block97; else goto block96;
block96:;
*(&local26) = ((panda$io$File*) NULL);
ITable* $tmp650 = $tmp644->$class->itable;
while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp650 = $tmp650->next;
}
$fn652 $tmp651 = $tmp650->methods[1];
panda$core$Object* $tmp653 = $tmp651($tmp644);
panda$io$File* $tmp654 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp653)));
*(&local26) = ((panda$io$File*) $tmp653);
// line 268
org$pandalanguage$pandac$Compiler* $tmp655 = *(&local23);
panda$io$File* $tmp656 = *(&local26);
org$pandalanguage$pandac$Compiler$compile$panda$io$File($tmp655, $tmp656);
panda$core$Panda$unref$panda$core$Object$Q($tmp653);
panda$io$File* $tmp657 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing s
*(&local26) = ((panda$io$File*) NULL);
goto block95;
block97:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
// line 270
org$pandalanguage$pandac$Compiler* $tmp658 = *(&local23);
org$pandalanguage$pandac$Compiler$finish($tmp658);
// line 271
panda$threads$MessageQueue* $tmp659 = *(&local22);
panda$core$Int64 $tmp660 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp659);
*(&local19) = $tmp660;
// line 272
panda$core$Int64 $tmp661 = (panda$core$Int64) {0};
panda$core$Int64 $tmp662 = *(&local19);
panda$core$Bit $tmp663 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp664 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp661, $tmp662, $tmp663);
panda$core$Int64 $tmp665 = $tmp664.min;
*(&local27) = $tmp665;
panda$core$Int64 $tmp666 = $tmp664.max;
panda$core$Bit $tmp667 = $tmp664.inclusive;
bool $tmp668 = $tmp667.value;
panda$core$Int64 $tmp669 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp670 = panda$core$Int64$convert$R$panda$core$UInt64($tmp669);
if ($tmp668) goto block101; else goto block102;
block101:;
int64_t $tmp671 = $tmp665.value;
int64_t $tmp672 = $tmp666.value;
bool $tmp673 = $tmp671 <= $tmp672;
panda$core$Bit $tmp674 = (panda$core$Bit) {$tmp673};
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block98; else goto block99;
block102:;
int64_t $tmp676 = $tmp665.value;
int64_t $tmp677 = $tmp666.value;
bool $tmp678 = $tmp676 < $tmp677;
panda$core$Bit $tmp679 = (panda$core$Bit) {$tmp678};
bool $tmp680 = $tmp679.value;
if ($tmp680) goto block98; else goto block99;
block98:;
// line 273
panda$threads$MessageQueue* $tmp681 = *(&local22);
panda$core$Immutable* $tmp682 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp681);
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
org$pandalanguage$pandac$Compiler$Error* $tmp683 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp682)));
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) $tmp682);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
// line 274
org$pandalanguage$pandac$Compiler$Error* $tmp684 = *(&local28);
panda$io$File** $tmp685 = &$tmp684->file;
panda$io$File* $tmp686 = *$tmp685;
panda$core$String* $tmp687 = panda$io$File$name$R$panda$core$String($tmp686);
panda$core$String* $tmp688 = panda$core$String$convert$R$panda$core$String($tmp687);
panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp688, &$s690);
org$pandalanguage$pandac$Compiler$Error* $tmp691 = *(&local28);
org$pandalanguage$pandac$Position* $tmp692 = &$tmp691->position;
org$pandalanguage$pandac$Position $tmp693 = *$tmp692;
org$pandalanguage$pandac$Position$wrapper* $tmp694;
$tmp694 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp694->value = $tmp693;
panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp689, ((panda$core$Object*) $tmp694));
panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp695, &$s697);
org$pandalanguage$pandac$Compiler$Error* $tmp698 = *(&local28);
panda$core$String** $tmp699 = &$tmp698->message;
panda$core$String* $tmp700 = *$tmp699;
panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, $tmp700);
panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s703);
panda$io$Console$printLine$panda$core$String($tmp702);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp687));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp688));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp689));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp702));
org$pandalanguage$pandac$Compiler$Error* $tmp704 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing error
*(&local28) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
goto block100;
block100:;
panda$core$Int64 $tmp705 = *(&local27);
int64_t $tmp706 = $tmp666.value;
int64_t $tmp707 = $tmp705.value;
int64_t $tmp708 = $tmp706 - $tmp707;
panda$core$Int64 $tmp709 = (panda$core$Int64) {$tmp708};
panda$core$UInt64 $tmp710 = panda$core$Int64$convert$R$panda$core$UInt64($tmp709);
if ($tmp668) goto block104; else goto block105;
block104:;
uint64_t $tmp711 = $tmp710.value;
uint64_t $tmp712 = $tmp670.value;
bool $tmp713 = $tmp711 >= $tmp712;
panda$core$Bit $tmp714 = (panda$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block103; else goto block99;
block105:;
uint64_t $tmp716 = $tmp710.value;
uint64_t $tmp717 = $tmp670.value;
bool $tmp718 = $tmp716 > $tmp717;
panda$core$Bit $tmp719 = (panda$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block103; else goto block99;
block103:;
int64_t $tmp721 = $tmp705.value;
int64_t $tmp722 = $tmp669.value;
int64_t $tmp723 = $tmp721 + $tmp722;
panda$core$Int64 $tmp724 = (panda$core$Int64) {$tmp723};
*(&local27) = $tmp724;
goto block98;
block99:;
org$pandalanguage$pandac$Compiler* $tmp725 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing compiler
*(&local23) = ((org$pandalanguage$pandac$Compiler*) NULL);
panda$threads$MessageQueue* $tmp726 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
// unreffing errorQueue
*(&local22) = ((panda$threads$MessageQueue*) NULL);
org$pandalanguage$pandac$Compiler$Settings* $tmp727 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// unreffing settings
*(&local21) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
org$pandalanguage$pandac$CodeGenerator* $tmp728 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing cg
*(&local20) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 277
panda$core$Int64 $tmp729 = *(&local19);
panda$core$Int64 $tmp730 = (panda$core$Int64) {0};
panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp729, $tmp730);
bool $tmp732 = $tmp731.value;
if ($tmp732) goto block106; else goto block108;
block106:;
// line 278
org$pandalanguage$pandac$Main$Format$nullable $tmp733 = *(&local6);
panda$core$Int64 $tmp734 = ((org$pandalanguage$pandac$Main$Format) $tmp733.value).$rawValue;
panda$core$Int64 $tmp735 = (panda$core$Int64) {1};
panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp735);
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block110; else goto block111;
block110:;
// line 280
panda$io$File* $tmp738 = *(&local3);
panda$io$File* $tmp739 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp738, &$s740);
panda$io$File* $tmp741 = *(&local3);
panda$core$Bit $tmp742 = *(&local8);
panda$io$File* $tmp743 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp739, $tmp741, $tmp742);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp743));
goto block109;
block111:;
panda$core$Int64 $tmp744 = (panda$core$Int64) {2};
panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp734, $tmp744);
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block112; else goto block109;
block112:;
// line 282
panda$io$File* $tmp747 = *(&local3);
panda$io$File* $tmp748 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp747, &$s749);
panda$io$File* $tmp750 = *(&local3);
panda$core$Bit $tmp751 = *(&local8);
panda$io$File* $tmp752 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp748, $tmp750, $tmp751);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
goto block109;
block109:;
goto block107;
block108:;
// line 1
// line 286
panda$core$Int64 $tmp753 = *(&local19);
panda$core$Int64 $tmp754 = (panda$core$Int64) {1};
panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp753, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block113; else goto block115;
block113:;
// line 287
panda$io$Console$printLine$panda$core$String(&$s757);
goto block114;
block115:;
// line 1
// line 290
panda$core$Int64 $tmp758 = *(&local19);
panda$core$String* $tmp759 = panda$core$Int64$convert$R$panda$core$String($tmp758);
panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, &$s761);
panda$io$Console$printLine$panda$core$String($tmp760);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp759));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
goto block114;
block114:;
// line 292
panda$core$UInt8 $tmp762 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp762);
goto block107;
block107:;
panda$io$File* $tmp763 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
// unreffing llvmDir
*(&local17) = ((panda$io$File*) NULL);
panda$io$OutputStream* $tmp764 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$String* $tmp765 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp766 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp767 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp768 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp769 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* param0) {

// line 298
panda$core$Bit $tmp770 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param0, &$s771);
return $tmp770;

}
void pandaMain(panda$collections$ListView* param0) {

// line 303
panda$core$Int64 $tmp772 = (panda$core$Int64) {1};
ITable* $tmp773 = param0->$class->itable;
while ($tmp773->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp773 = $tmp773->next;
}
$fn775 $tmp774 = $tmp773->methods[0];
panda$core$Object* $tmp776 = $tmp774(param0, $tmp772);
ITable* $tmp778 = ((panda$core$Equatable*) ((panda$core$String*) $tmp776))->$class->itable;
while ($tmp778->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp778 = $tmp778->next;
}
$fn780 $tmp779 = $tmp778->methods[1];
panda$core$Bit $tmp781 = $tmp779(((panda$core$Equatable*) ((panda$core$String*) $tmp776)), ((panda$core$Equatable*) &$s777));
panda$core$Panda$unref$panda$core$Object$Q($tmp776);
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block1; else goto block2;
block1:;
// line 304
panda$core$Panda$disableRefErrorReporting();
goto block2;
block2:;
// line 307
org$pandalanguage$pandac$Main* $tmp783 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(33, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
org$pandalanguage$pandac$Main$init($tmp783);
org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp783, param0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
return;

}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* param0) {

panda$io$File** $tmp784 = &param0->clang;
panda$io$File* $tmp785 = *$tmp784;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp785));
panda$io$File** $tmp786 = &param0->pandaHome;
panda$io$File* $tmp787 = *$tmp786;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
return;

}

