#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Config.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "panda/core/System/Process.h"
#include "panda/core/System.h"
#include "panda/collections/ListView.h"
#include "panda/io/OutputStream.h"
#include "panda/io/Console.h"
#include "panda/io/InputStream.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "org/pandalanguage/pandac/Main/Format.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/HTMLProcessor.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/core/Immutable.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn44)(panda$io$InputStream*);
typedef void (*$fn46)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn82)(panda$io$InputStream*);
typedef void (*$fn84)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn118)(panda$io$InputStream*);
typedef void (*$fn120)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn124)(panda$io$InputStream*);
typedef void (*$fn126)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn182)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn193)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn235)(panda$io$InputStream*);
typedef void (*$fn237)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn241)(panda$io$InputStream*);
typedef void (*$fn243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn261)(panda$io$OutputStream*);
typedef void (*$fn263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn264)(panda$io$OutputStream*);
typedef void (*$fn266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn268)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn302)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn311)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn332)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn337)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn345)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn358)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn371)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn383)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn405)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn411)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn448)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn458)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn466)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn478)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn505)(panda$collections$CollectionView*);
typedef void (*$fn510)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn516)(panda$collections$CollectionView*);
typedef void (*$fn546)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn565)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn586)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn589)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn656)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn663)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn674)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn686)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn704)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn718)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn736)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s60 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s73 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s74 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e\x70\x61\x6e\x64\x61", 15, -4231800707287400719, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    panda$io$File* $tmp2;
    panda$io$File* $tmp3;
    panda$io$File* $tmp4;
    panda$core$String* $tmp6;
    self->opt = NULL;
    self->llc = NULL;
    self->gcc = NULL;
    self->pandaHome = NULL;
    {
        $tmp2 = self->pandaHome;
        panda$io$File* $tmp5 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp7 = org$pandalanguage$pandac$Config$pandaSourceDir$R$panda$core$String();
        $tmp6 = $tmp7;
        panda$io$File$init$panda$core$String($tmp5, $tmp6);
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->pandaHome = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level, panda$core$Bit p_preserveTemporaries) {
    panda$core$Int64 $tmp11;
    panda$io$File* $returnValue13;
    panda$io$File* $tmp14;
    panda$io$File* dest17 = NULL;
    panda$io$File* $tmp18;
    panda$io$File* $tmp19;
    panda$collections$Array* args22 = NULL;
    panda$collections$Array* $tmp23;
    panda$collections$Array* $tmp24;
    panda$core$String* $tmp27;
    panda$core$String* $tmp28;
    panda$core$Object* $tmp30;
    panda$core$System$Process* p37 = NULL;
    panda$core$System$Process* $tmp38;
    panda$core$System$Process* $tmp39;
    panda$io$OutputStream* $tmp41;
    panda$core$String* $tmp43;
    panda$core$Int64 exitCode47;
    panda$core$Int64 $tmp48;
    panda$core$Int64 $tmp50;
    panda$core$UInt8 $tmp52;
    panda$io$File* $tmp53;
    int $tmp10;
    {
        panda$core$Int64$init$builtin_int64(&$tmp11, 0);
        panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, $tmp11);
        if ($tmp12.value) {
        {
            $tmp14 = p_llvm;
            $returnValue13 = $tmp14;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
            $tmp10 = 0;
            goto $l8;
            $l15:;
            return $returnValue13;
        }
        }
        panda$io$File* $tmp21 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s20);
        $tmp19 = $tmp21;
        $tmp18 = $tmp19;
        dest17 = $tmp18;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
        panda$collections$Array* $tmp25 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp25);
        $tmp24 = $tmp25;
        $tmp23 = $tmp24;
        args22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s26));
        panda$core$Int64$wrapper* $tmp31;
        $tmp31 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp31->value = p_level;
        $tmp30 = ((panda$core$Object*) $tmp31);
        panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s29, $tmp30);
        $tmp28 = $tmp32;
        panda$core$String* $tmp34 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp28, &$s33);
        $tmp27 = $tmp34;
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
        panda$core$Panda$unref$panda$core$Object$Q($tmp30);
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s35));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) &$s36));
        panda$collections$Array$add$panda$collections$Array$T(args22, ((panda$core$Object*) dest17->path));
        panda$core$System$Process* $tmp40 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args22));
        $tmp39 = $tmp40;
        $tmp38 = $tmp39;
        p37 = $tmp38;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
        panda$io$OutputStream* $tmp42 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp41 = $tmp42;
        panda$core$String* $tmp45 = (($fn44) p37->error->$class->vtable[14])(p37->error);
        $tmp43 = $tmp45;
        (($fn46) $tmp41->$class->vtable[17])($tmp41, $tmp43);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp48, p37);
        exitCode47 = $tmp48;
        panda$core$Bit $tmp49 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp49.value) {
        {
            panda$io$File$delete(p_llvm);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp50, 0);
        panda$core$Bit $tmp51 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode47, $tmp50);
        if ($tmp51.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp52, 1);
            panda$core$System$exit$panda$core$UInt8($tmp52);
        }
        }
        $tmp53 = dest17;
        $returnValue13 = $tmp53;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
        $tmp10 = 1;
        goto $l8;
        $l54:;
        return $returnValue13;
    }
    $l8:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p37));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) args22));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) dest17));
    dest17 = NULL;
    args22 = NULL;
    p37 = NULL;
    switch ($tmp10) {
        case 1: goto $l54;
        case 0: goto $l15;
    }
    $l56:;
    if (false) goto $l57; else goto $l58;
    $l58:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s59, (panda$core$Int64) { 59 }, &$s60);
    abort();
    $l57:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Bit p_preserveTemporaries) {
    panda$io$File* dest64 = NULL;
    panda$io$File* $tmp65;
    panda$io$File* $tmp66;
    panda$collections$Array* args69 = NULL;
    panda$collections$Array* $tmp70;
    panda$collections$Array* $tmp71;
    panda$core$System$Process* p75 = NULL;
    panda$core$System$Process* $tmp76;
    panda$core$System$Process* $tmp77;
    panda$io$OutputStream* $tmp79;
    panda$core$String* $tmp81;
    panda$core$Int64 exitCode85;
    panda$core$Int64 $tmp86;
    panda$core$Int64 $tmp88;
    panda$core$UInt8 $tmp90;
    panda$io$File* $returnValue91;
    panda$io$File* $tmp92;
    int $tmp63;
    {
        panda$io$File* $tmp68 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s67);
        $tmp66 = $tmp68;
        $tmp65 = $tmp66;
        dest64 = $tmp65;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
        panda$collections$Array* $tmp72 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp72);
        $tmp71 = $tmp72;
        $tmp70 = $tmp71;
        args69 = $tmp70;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp71));
        panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s73));
        panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) &$s74));
        panda$collections$Array$add$panda$collections$Array$T(args69, ((panda$core$Object*) dest64->path));
        panda$core$System$Process* $tmp78 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args69));
        $tmp77 = $tmp78;
        $tmp76 = $tmp77;
        p75 = $tmp76;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp76));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp77));
        panda$io$OutputStream* $tmp80 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp79 = $tmp80;
        panda$core$String* $tmp83 = (($fn82) p75->error->$class->vtable[14])(p75->error);
        $tmp81 = $tmp83;
        (($fn84) $tmp79->$class->vtable[17])($tmp79, $tmp81);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp86, p75);
        exitCode85 = $tmp86;
        panda$core$Bit $tmp87 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp87.value) {
        {
            panda$io$File$delete(p_llvm);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp88, 0);
        panda$core$Bit $tmp89 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode85, $tmp88);
        if ($tmp89.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp90, 1);
            panda$core$System$exit$panda$core$UInt8($tmp90);
        }
        }
        $tmp92 = dest64;
        $returnValue91 = $tmp92;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
        $tmp63 = 0;
        goto $l61;
        $l93:;
        return $returnValue91;
    }
    $l61:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p75));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) args69));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) dest64));
    dest64 = NULL;
    args69 = NULL;
    p75 = NULL;
    switch ($tmp63) {
        case 0: goto $l93;
    }
    $l95:;
    if (false) goto $l96; else goto $l97;
    $l97:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s98, (panda$core$Int64) { 83 }, &$s99);
    abort();
    $l96:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest, panda$core$Bit p_preserveTemporaries) {
    panda$collections$Array* args103 = NULL;
    panda$collections$Array* $tmp104;
    panda$collections$Array* $tmp105;
    panda$core$System$Process* p111 = NULL;
    panda$core$System$Process* $tmp112;
    panda$core$System$Process* $tmp113;
    panda$io$OutputStream* $tmp115;
    panda$core$String* $tmp117;
    panda$io$OutputStream* $tmp121;
    panda$core$String* $tmp123;
    panda$core$Int64 exitCode127;
    panda$core$Int64 $tmp128;
    panda$core$Int64 $tmp130;
    panda$core$UInt8 $tmp132;
    panda$io$File* $returnValue133;
    panda$io$File* $tmp134;
    int $tmp102;
    {
        panda$collections$Array* $tmp106 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp106);
        $tmp105 = $tmp106;
        $tmp104 = $tmp105;
        args103 = $tmp104;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
        panda$collections$Array$add$panda$collections$Array$T(args103, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args103, ((panda$core$Object*) &$s107));
        panda$collections$Array$add$panda$collections$Array$T(args103, ((panda$core$Object*) &$s108));
        panda$collections$Array$add$panda$collections$Array$T(args103, ((panda$core$Object*) &$s109));
        panda$collections$Array$add$panda$collections$Array$T(args103, ((panda$core$Object*) &$s110));
        panda$collections$Array$add$panda$collections$Array$T(args103, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp114 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args103));
        $tmp113 = $tmp114;
        $tmp112 = $tmp113;
        p111 = $tmp112;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp113));
        panda$io$OutputStream* $tmp116 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp115 = $tmp116;
        panda$core$String* $tmp119 = (($fn118) p111->output->$class->vtable[14])(p111->output);
        $tmp117 = $tmp119;
        (($fn120) $tmp115->$class->vtable[17])($tmp115, $tmp117);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp117));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp115));
        panda$io$OutputStream* $tmp122 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp121 = $tmp122;
        panda$core$String* $tmp125 = (($fn124) p111->error->$class->vtable[14])(p111->error);
        $tmp123 = $tmp125;
        (($fn126) $tmp121->$class->vtable[17])($tmp121, $tmp123);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp121));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp128, p111);
        exitCode127 = $tmp128;
        panda$core$Bit $tmp129 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp129.value) {
        {
            panda$io$File$delete(p_assembly);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp130, 0);
        panda$core$Bit $tmp131 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode127, $tmp130);
        if ($tmp131.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp132, 1);
            panda$core$System$exit$panda$core$UInt8($tmp132);
        }
        }
        $tmp134 = p_dest;
        $returnValue133 = $tmp134;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
        $tmp102 = 0;
        goto $l100;
        $l135:;
        return $returnValue133;
    }
    $l100:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p111));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) args103));
    args103 = NULL;
    p111 = NULL;
    switch ($tmp102) {
        case 0: goto $l135;
    }
    $l137:;
    if (false) goto $l138; else goto $l139;
    $l139:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s140, (panda$core$Int64) { 102 }, &$s141);
    abort();
    $l138:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest, panda$core$Bit p_preserveTemporaries) {
    panda$collections$Array* args145 = NULL;
    panda$collections$Array* $tmp146;
    panda$collections$Array* $tmp147;
    panda$core$String* $tmp149;
    panda$core$String* $tmp150;
    panda$core$String* $tmp152;
    panda$collections$Array* icuLibs160 = NULL;
    panda$collections$Array* $tmp161;
    panda$collections$Array* $tmp162;
    panda$core$String* $tmp163;
    panda$collections$Iterator* Iter$131$9170 = NULL;
    panda$collections$Iterator* $tmp171;
    panda$collections$Iterator* $tmp172;
    panda$core$String* lib188 = NULL;
    panda$core$String* $tmp189;
    panda$core$Object* $tmp190;
    panda$io$File* libFile195 = NULL;
    panda$io$File* $tmp196;
    panda$io$File* $tmp197;
    panda$core$String* $tmp199;
    panda$io$File* $tmp201;
    panda$core$String* simpleName204 = NULL;
    panda$core$String* $tmp205;
    panda$core$String* $tmp206;
    panda$core$String* $tmp213;
    panda$core$String* $tmp214;
    panda$core$String* $tmp215;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp216;
    panda$core$Int64 $tmp217;
    panda$core$Bit $tmp218;
    panda$core$String* $tmp220;
    panda$core$System$Process* p228 = NULL;
    panda$core$System$Process* $tmp229;
    panda$core$System$Process* $tmp230;
    panda$io$OutputStream* $tmp232;
    panda$core$String* $tmp234;
    panda$io$OutputStream* $tmp238;
    panda$core$String* $tmp240;
    panda$core$Int64 exitCode244;
    panda$core$Int64 $tmp245;
    panda$core$Int64 $tmp247;
    panda$core$UInt8 $tmp249;
    panda$io$File* $returnValue250;
    panda$io$File* $tmp251;
    int $tmp144;
    {
        panda$collections$Array* $tmp148 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp148);
        $tmp147 = $tmp148;
        $tmp146 = $tmp147;
        args145 = $tmp146;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) p_assembly->path));
        panda$core$String* $tmp153 = org$pandalanguage$pandac$Config$pandaLibDir$R$panda$core$String();
        $tmp152 = $tmp153;
        panda$core$String* $tmp154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s151, $tmp152);
        $tmp150 = $tmp154;
        panda$core$String* $tmp156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp150, &$s155);
        $tmp149 = $tmp156;
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) &$s157));
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) &$s158));
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) &$s159));
        panda$core$String* $tmp164 = org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
        $tmp163 = $tmp164;
        panda$collections$Array* $tmp166 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp163, &$s165);
        $tmp162 = $tmp166;
        $tmp161 = $tmp162;
        icuLibs160 = $tmp161;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp162));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp163));
        {
            int $tmp169;
            {
                ITable* $tmp173 = ((panda$collections$Iterable*) icuLibs160)->$class->itable;
                while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp173 = $tmp173->next;
                }
                $fn175 $tmp174 = $tmp173->methods[0];
                panda$collections$Iterator* $tmp176 = $tmp174(((panda$collections$Iterable*) icuLibs160));
                $tmp172 = $tmp176;
                $tmp171 = $tmp172;
                Iter$131$9170 = $tmp171;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp171));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp172));
                $l177:;
                ITable* $tmp180 = Iter$131$9170->$class->itable;
                while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp180 = $tmp180->next;
                }
                $fn182 $tmp181 = $tmp180->methods[0];
                panda$core$Bit $tmp183 = $tmp181(Iter$131$9170);
                panda$core$Bit $tmp184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp183);
                bool $tmp179 = $tmp184.value;
                if (!$tmp179) goto $l178;
                {
                    int $tmp187;
                    {
                        ITable* $tmp191 = Iter$131$9170->$class->itable;
                        while ($tmp191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp191 = $tmp191->next;
                        }
                        $fn193 $tmp192 = $tmp191->methods[1];
                        panda$core$Object* $tmp194 = $tmp192(Iter$131$9170);
                        $tmp190 = $tmp194;
                        $tmp189 = ((panda$core$String*) $tmp190);
                        lib188 = $tmp189;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp190);
                        panda$io$File* $tmp198 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$io$File$init$panda$core$String($tmp198, lib188);
                        $tmp197 = $tmp198;
                        $tmp196 = $tmp197;
                        libFile195 = $tmp196;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
                        panda$io$File* $tmp202 = panda$io$File$parent$R$panda$io$File$Q(libFile195);
                        $tmp201 = $tmp202;
                        panda$core$String* $tmp203 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s200, ((panda$core$Object*) $tmp201));
                        $tmp199 = $tmp203;
                        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) $tmp199));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp201));
                        panda$core$String* $tmp207 = panda$io$File$simpleName$R$panda$core$String(libFile195);
                        $tmp206 = $tmp207;
                        $tmp205 = $tmp206;
                        simpleName204 = $tmp205;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp206));
                        panda$core$Bit $tmp209 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(simpleName204, &$s208);
                        if ($tmp209.value) goto $l210; else goto $l211;
                        $l211:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s212, (panda$core$Int64) { 135 });
                        abort();
                        $l210:;
                        {
                            $tmp213 = simpleName204;
                            panda$core$Int64$init$builtin_int64(&$tmp217, 3);
                            panda$core$Bit$init$builtin_bit(&$tmp218, false);
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp216, ((panda$core$Int64$nullable) { $tmp217, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp218);
                            panda$core$String* $tmp219 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(simpleName204, $tmp216);
                            $tmp215 = $tmp219;
                            $tmp214 = $tmp215;
                            simpleName204 = $tmp214;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp215));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
                        }
                        panda$core$String* $tmp222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s221, simpleName204);
                        $tmp220 = $tmp222;
                        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) $tmp220));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
                    }
                    $tmp187 = -1;
                    goto $l185;
                    $l185:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) simpleName204));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) libFile195));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) lib188));
                    lib188 = NULL;
                    libFile195 = NULL;
                    simpleName204 = NULL;
                    switch ($tmp187) {
                        case -1: goto $l223;
                    }
                    $l223:;
                }
                goto $l177;
                $l178:;
            }
            $tmp169 = -1;
            goto $l167;
            $l167:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$131$9170));
            Iter$131$9170 = NULL;
            switch ($tmp169) {
                case -1: goto $l224;
            }
            $l224:;
        }
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) &$s225));
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) &$s226));
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) &$s227));
        panda$collections$Array$add$panda$collections$Array$T(args145, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp231 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args145));
        $tmp230 = $tmp231;
        $tmp229 = $tmp230;
        p228 = $tmp229;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
        panda$io$OutputStream* $tmp233 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp232 = $tmp233;
        panda$core$String* $tmp236 = (($fn235) p228->output->$class->vtable[14])(p228->output);
        $tmp234 = $tmp236;
        (($fn237) $tmp232->$class->vtable[17])($tmp232, $tmp234);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
        panda$io$OutputStream* $tmp239 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp238 = $tmp239;
        panda$core$String* $tmp242 = (($fn241) p228->error->$class->vtable[14])(p228->error);
        $tmp240 = $tmp242;
        (($fn243) $tmp238->$class->vtable[17])($tmp238, $tmp240);
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp245, p228);
        exitCode244 = $tmp245;
        panda$core$Bit $tmp246 = panda$core$Bit$$NOT$R$panda$core$Bit(p_preserveTemporaries);
        if ($tmp246.value) {
        {
            panda$io$File$delete(p_assembly);
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp247, 0);
        panda$core$Bit $tmp248 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(exitCode244, $tmp247);
        if ($tmp248.value) {
        {
            panda$core$UInt8$init$builtin_uint8(&$tmp249, 1);
            panda$core$System$exit$panda$core$UInt8($tmp249);
        }
        }
        $tmp251 = p_dest;
        $returnValue250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp251));
        $tmp144 = 0;
        goto $l142;
        $l252:;
        return $returnValue250;
    }
    $l142:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) p228));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) icuLibs160));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) args145));
    args145 = NULL;
    icuLibs160 = NULL;
    p228 = NULL;
    switch ($tmp144) {
        case 0: goto $l252;
    }
    $l254:;
    if (false) goto $l255; else goto $l256;
    $l256:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s257, (panda$core$Int64) { 123 }, &$s258);
    abort();
    $l255:;
    abort();
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn260) p_out->$class->vtable[19])(p_out, &$s259);
    (($fn261) p_out->$class->vtable[21])(p_out);
    (($fn263) p_out->$class->vtable[19])(p_out, &$s262);
    (($fn264) p_out->$class->vtable[21])(p_out);
    (($fn266) p_out->$class->vtable[19])(p_out, &$s265);
    (($fn268) p_out->$class->vtable[19])(p_out, &$s267);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args272 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp273;
    org$pandalanguage$pandac$Main$Arguments* $tmp274;
    panda$collections$Array* sources276 = NULL;
    panda$collections$Array* $tmp277;
    panda$collections$Array* $tmp278;
    panda$collections$Array* imports280 = NULL;
    panda$collections$Array* $tmp281;
    panda$collections$Array* $tmp282;
    panda$io$File* outFile284 = NULL;
    panda$io$File* $tmp285;
    panda$core$Int64 optimizationLevel286;
    panda$core$Int64 $tmp287;
    panda$core$Int64 safetyLevel288;
    panda$core$Int64 $tmp289;
    org$pandalanguage$pandac$Main$Format$nullable format290;
    panda$core$String* root291 = NULL;
    panda$core$String* $tmp292;
    panda$core$Bit preserveTemporaries293;
    panda$core$Bit $tmp294;
    panda$io$OutputStream* err295 = NULL;
    panda$io$OutputStream* $tmp296;
    panda$io$OutputStream* $tmp297;
    panda$core$String* a308 = NULL;
    panda$core$String* $tmp309;
    panda$core$String* $tmp310;
    panda$core$String* $match$179_13316 = NULL;
    panda$core$String* $tmp317;
    panda$io$File* path323 = NULL;
    panda$io$File* $tmp324;
    panda$io$File* $tmp325;
    panda$io$InputStream* $tmp328;
    panda$io$OutputStream* $tmp330;
    panda$core$UInt8 $tmp338;
    panda$io$File* $tmp339;
    panda$io$File* $tmp340;
    panda$io$File* $tmp341;
    panda$core$String* $tmp343;
    panda$io$File* $tmp347;
    panda$core$String* level354 = NULL;
    panda$core$String* $tmp355;
    panda$core$String* $tmp356;
    panda$core$Int64 $tmp362;
    panda$core$Int64 $tmp365;
    panda$io$OutputStream* $tmp368;
    panda$core$UInt8 $tmp372;
    panda$core$String* level379 = NULL;
    panda$core$String* $tmp380;
    panda$core$String* $tmp381;
    panda$core$Int64 $tmp387;
    panda$core$Int64 $tmp390;
    panda$io$OutputStream* $tmp393;
    panda$core$UInt8 $tmp397;
    panda$core$UInt8 $tmp406;
    panda$core$String* f407 = NULL;
    panda$core$String* $tmp408;
    panda$core$String* $tmp409;
    panda$core$String* $match$211_21416 = NULL;
    panda$core$String* $tmp417;
    org$pandalanguage$pandac$Main$Format $tmp420;
    panda$core$Int64 $tmp421;
    org$pandalanguage$pandac$Main$Format $tmp424;
    panda$core$Int64 $tmp425;
    org$pandalanguage$pandac$Main$Format $tmp428;
    panda$core$Int64 $tmp429;
    org$pandalanguage$pandac$Main$Format $tmp432;
    panda$core$Int64 $tmp433;
    org$pandalanguage$pandac$Main$Format $tmp436;
    panda$core$Int64 $tmp437;
    org$pandalanguage$pandac$Main$Format $tmp440;
    panda$core$Int64 $tmp441;
    panda$core$String* $tmp442;
    panda$core$String* $tmp443;
    panda$core$UInt8 $tmp449;
    panda$io$File* $tmp454;
    panda$core$String* $tmp456;
    panda$core$String* $tmp462;
    panda$core$String* $tmp463;
    panda$core$String* $tmp464;
    panda$io$File* $tmp470;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    panda$core$UInt8 $tmp479;
    panda$io$File* llvmDir482 = NULL;
    panda$io$File* $tmp483;
    panda$io$File* $tmp484;
    panda$core$String* $tmp486;
    panda$io$File* $tmp488;
    panda$io$File* $tmp489;
    panda$io$File* $tmp490;
    panda$io$File* $tmp493;
    panda$io$File* $tmp494;
    panda$io$File* $tmp495;
    panda$io$File* $tmp498;
    panda$io$File* $tmp499;
    panda$io$File* $tmp500;
    panda$core$Int64 $tmp507;
    panda$core$UInt8 $tmp511;
    org$pandalanguage$pandac$Main$Format $tmp512;
    panda$core$Int64 $tmp513;
    panda$core$Int64 $tmp518;
    panda$core$String* extension523 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$250_17524;
    panda$core$Int64 $tmp525;
    panda$core$String* $tmp527;
    panda$core$String* $tmp528;
    panda$core$Int64 $tmp530;
    panda$core$String* $tmp532;
    panda$core$String* $tmp533;
    panda$core$Int64 $tmp535;
    panda$core$String* $tmp537;
    panda$core$String* $tmp538;
    panda$core$Int64 $tmp540;
    panda$core$String* $tmp542;
    panda$core$String* $tmp543;
    panda$core$UInt8 $tmp547;
    panda$io$File* $tmp548;
    panda$io$File* $tmp549;
    panda$io$File* $tmp550;
    panda$core$Object* $tmp551;
    panda$core$Int64 $tmp552;
    org$pandalanguage$pandac$Main$Format$nullable $tmp556;
    panda$core$Int64 $tmp561;
    panda$core$Bit $tmp563;
    panda$core$UInt8 $tmp566;
    panda$core$UInt8 $tmp569;
    org$pandalanguage$pandac$Main$Format$nullable $tmp570;
    panda$core$Int64 $tmp575;
    panda$core$Bit $tmp577;
    panda$core$String* $tmp578;
    panda$core$String* $tmp579;
    org$pandalanguage$pandac$HTMLProcessor* $tmp581;
    panda$core$Object* $tmp583;
    panda$core$Int64 $tmp584;
    panda$core$UInt8 $tmp590;
    panda$core$Int64 errorCount591;
    org$pandalanguage$pandac$CodeGenerator* cg595 = NULL;
    org$pandalanguage$pandac$Main$Format$nullable $match$285_13596;
    panda$core$Int64 $tmp599;
    panda$core$Int64 $tmp602;
    panda$core$Int64 $tmp606;
    org$pandalanguage$pandac$CodeGenerator* $tmp609;
    org$pandalanguage$pandac$CodeGenerator* $tmp610;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp611;
    panda$core$String* $tmp613;
    panda$io$OutputStream* $tmp615;
    panda$io$File* $tmp616;
    panda$core$Int64 $tmp620;
    org$pandalanguage$pandac$CodeGenerator* $tmp622;
    org$pandalanguage$pandac$CodeGenerator* $tmp623;
    org$pandalanguage$pandac$HCodeGenerator* $tmp624;
    panda$core$Int64 $tmp626;
    org$pandalanguage$pandac$CodeGenerator* $tmp628;
    org$pandalanguage$pandac$CodeGenerator* $tmp629;
    org$pandalanguage$pandac$CCodeGenerator* $tmp630;
    panda$core$Bit $tmp632;
    org$pandalanguage$pandac$Compiler$Settings* settings636 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp637;
    org$pandalanguage$pandac$Compiler$Settings* $tmp638;
    panda$threads$MessageQueue* errorQueue640 = NULL;
    panda$threads$MessageQueue* $tmp641;
    panda$threads$MessageQueue* $tmp642;
    org$pandalanguage$pandac$Compiler* compiler644 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp645;
    org$pandalanguage$pandac$Compiler* $tmp646;
    panda$collections$Iterator* Iter$299$13651 = NULL;
    panda$collections$Iterator* $tmp652;
    panda$collections$Iterator* $tmp653;
    panda$io$File* s669 = NULL;
    panda$io$File* $tmp670;
    panda$core$Object* $tmp671;
    panda$collections$Iterator* Iter$300$17679 = NULL;
    panda$collections$Iterator* $tmp680;
    panda$collections$Iterator* $tmp681;
    panda$collections$ListView* $tmp682;
    org$pandalanguage$pandac$ClassDecl* cl699 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp700;
    panda$core$Object* $tmp701;
    panda$collections$Iterator* Iter$304$13713 = NULL;
    panda$collections$Iterator* $tmp714;
    panda$collections$Iterator* $tmp715;
    panda$io$File* s731 = NULL;
    panda$io$File* $tmp732;
    panda$core$Object* $tmp733;
    panda$core$Range$LTpanda$core$Int64$GT $tmp741;
    panda$core$Int64 $tmp742;
    panda$core$Bit $tmp743;
    org$pandalanguage$pandac$Compiler$Error* error760 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp761;
    panda$core$Immutable* $tmp762;
    panda$core$String* $tmp764;
    panda$core$String* $tmp765;
    panda$core$String* $tmp766;
    panda$core$String* $tmp767;
    panda$core$String* $tmp768;
    panda$core$String* $tmp769;
    panda$core$String* $tmp770;
    panda$core$Object* $tmp775;
    panda$core$Int64 $tmp791;
    org$pandalanguage$pandac$Main$Format$nullable $match$315_13793;
    panda$core$Int64 $tmp794;
    panda$io$File* optimized799 = NULL;
    panda$io$File* $tmp800;
    panda$io$File* $tmp801;
    panda$io$File* $tmp802;
    panda$io$File* assembly806 = NULL;
    panda$io$File* $tmp807;
    panda$io$File* $tmp808;
    panda$io$File* $tmp810;
    panda$core$Int64 $tmp813;
    panda$io$File* optimized818 = NULL;
    panda$io$File* $tmp819;
    panda$io$File* $tmp820;
    panda$io$File* $tmp821;
    panda$io$File* assembly825 = NULL;
    panda$io$File* $tmp826;
    panda$io$File* $tmp827;
    panda$io$File* $tmp829;
    panda$core$Int64 $tmp832;
    panda$core$String* $tmp835;
    panda$core$String* $tmp836;
    panda$core$UInt8 $tmp840;
    int $tmp271;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp275 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp275, p_rawArgs);
        $tmp274 = $tmp275;
        $tmp273 = $tmp274;
        args272 = $tmp273;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
        panda$collections$Array* $tmp279 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp279);
        $tmp278 = $tmp279;
        $tmp277 = $tmp278;
        sources276 = $tmp277;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
        panda$collections$Array* $tmp283 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp283);
        $tmp282 = $tmp283;
        $tmp281 = $tmp282;
        imports280 = $tmp281;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp281));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
        panda$collections$Array$add$panda$collections$Array$T(imports280, ((panda$core$Object*) self->pandaHome));
        $tmp285 = NULL;
        outFile284 = $tmp285;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
        panda$core$Int64$init$builtin_int64(&$tmp287, 3);
        optimizationLevel286 = $tmp287;
        panda$core$Int64$init$builtin_int64(&$tmp289, 3);
        safetyLevel288 = $tmp289;
        format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { .nonnull = false });
        $tmp292 = NULL;
        root291 = $tmp292;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
        panda$core$Bit$init$builtin_bit(&$tmp294, true);
        preserveTemporaries293 = $tmp294;
        panda$io$OutputStream* $tmp298 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp297 = $tmp298;
        $tmp296 = $tmp297;
        err295 = $tmp296;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp297));
        $l299:;
        panda$core$Bit $tmp303 = (($fn302) args272->$class->vtable[2])(args272);
        panda$core$Bit $tmp304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp303);
        bool $tmp301 = $tmp304.value;
        if (!$tmp301) goto $l300;
        {
            int $tmp307;
            {
                panda$core$String* $tmp312 = (($fn311) args272->$class->vtable[3])(args272);
                $tmp310 = $tmp312;
                $tmp309 = $tmp310;
                a308 = $tmp309;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp310));
                int $tmp315;
                {
                    $tmp317 = a308;
                    $match$179_13316 = $tmp317;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
                    panda$core$Bit $tmp319 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13316, &$s318);
                    if ($tmp319.value) {
                    {
                        int $tmp322;
                        {
                            panda$io$File* $tmp326 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp326, &$s327);
                            $tmp325 = $tmp326;
                            $tmp324 = $tmp325;
                            path323 = $tmp324;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
                            panda$io$InputStream* $tmp329 = panda$io$Console$inputStream$R$panda$io$InputStream();
                            $tmp328 = $tmp329;
                            panda$io$OutputStream* $tmp331 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path323);
                            $tmp330 = $tmp331;
                            (($fn332) $tmp328->$class->vtable[16])($tmp328, $tmp330);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
                            panda$collections$Array$add$panda$collections$Array$T(sources276, ((panda$core$Object*) path323));
                        }
                        $tmp322 = -1;
                        goto $l320;
                        $l320:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) path323));
                        path323 = NULL;
                        switch ($tmp322) {
                            case -1: goto $l333;
                        }
                        $l333:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp335 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13316, &$s334);
                    if ($tmp335.value) {
                    {
                        if (((panda$core$Bit) { outFile284 != NULL }).value) {
                        {
                            (($fn337) err295->$class->vtable[19])(err295, &$s336);
                            panda$core$UInt8$init$builtin_uint8(&$tmp338, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp338);
                        }
                        }
                        {
                            $tmp339 = outFile284;
                            panda$io$File* $tmp342 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp346 = (($fn345) args272->$class->vtable[4])(args272, &$s344);
                            $tmp343 = $tmp346;
                            panda$io$File$init$panda$core$String($tmp342, $tmp343);
                            $tmp341 = $tmp342;
                            $tmp340 = $tmp341;
                            outFile284 = $tmp340;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp340));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
                        }
                        panda$io$File* $tmp348 = panda$io$File$parent$R$panda$io$File$Q(outFile284);
                        $tmp347 = $tmp348;
                        panda$io$File$createDirectories($tmp347);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
                    }
                    }
                    else {
                    panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13316, &$s349);
                    if ($tmp350.value) {
                    {
                        int $tmp353;
                        {
                            panda$core$String* $tmp359 = (($fn358) args272->$class->vtable[4])(args272, &$s357);
                            $tmp356 = $tmp359;
                            $tmp355 = $tmp356;
                            level354 = $tmp355;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp355));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
                            panda$core$Int64$nullable $tmp360 = panda$core$String$convert$R$panda$core$Int64$Q(level354);
                            optimizationLevel286 = ((panda$core$Int64) $tmp360.value);
                            panda$core$Int64$init$builtin_int64(&$tmp362, 3);
                            panda$core$Bit $tmp363 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel286, $tmp362);
                            bool $tmp361 = $tmp363.value;
                            if ($tmp361) goto $l364;
                            panda$core$Int64$init$builtin_int64(&$tmp365, 0);
                            panda$core$Bit $tmp366 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel286, $tmp365);
                            $tmp361 = $tmp366.value;
                            $l364:;
                            panda$core$Bit $tmp367 = { $tmp361 };
                            if ($tmp367.value) {
                            {
                                panda$io$OutputStream* $tmp369 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp368 = $tmp369;
                                (($fn371) $tmp368->$class->vtable[19])($tmp368, &$s370);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
                                panda$core$UInt8$init$builtin_uint8(&$tmp372, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp372);
                            }
                            }
                        }
                        $tmp353 = -1;
                        goto $l351;
                        $l351:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) level354));
                        level354 = NULL;
                        switch ($tmp353) {
                            case -1: goto $l373;
                        }
                        $l373:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp375 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13316, &$s374);
                    if ($tmp375.value) {
                    {
                        int $tmp378;
                        {
                            panda$core$String* $tmp384 = (($fn383) args272->$class->vtable[4])(args272, &$s382);
                            $tmp381 = $tmp384;
                            $tmp380 = $tmp381;
                            level379 = $tmp380;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
                            panda$core$Int64$nullable $tmp385 = panda$core$String$convert$R$panda$core$Int64$Q(level379);
                            safetyLevel288 = ((panda$core$Int64) $tmp385.value);
                            panda$core$Int64$init$builtin_int64(&$tmp387, 3);
                            panda$core$Bit $tmp388 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel288, $tmp387);
                            bool $tmp386 = $tmp388.value;
                            if ($tmp386) goto $l389;
                            panda$core$Int64$init$builtin_int64(&$tmp390, 0);
                            panda$core$Bit $tmp391 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel288, $tmp390);
                            $tmp386 = $tmp391.value;
                            $l389:;
                            panda$core$Bit $tmp392 = { $tmp386 };
                            if ($tmp392.value) {
                            {
                                panda$io$OutputStream* $tmp394 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp393 = $tmp394;
                                (($fn396) $tmp393->$class->vtable[19])($tmp393, &$s395);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
                                panda$core$UInt8$init$builtin_uint8(&$tmp397, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp397);
                            }
                            }
                        }
                        $tmp378 = -1;
                        goto $l376;
                        $l376:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) level379));
                        level379 = NULL;
                        switch ($tmp378) {
                            case -1: goto $l398;
                        }
                        $l398:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp400 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13316, &$s399);
                    if ($tmp400.value) {
                    {
                        int $tmp403;
                        {
                            if (((panda$core$Bit) { format290.nonnull }).value) {
                            {
                                (($fn405) err295->$class->vtable[19])(err295, &$s404);
                                panda$core$UInt8$init$builtin_uint8(&$tmp406, 1);
                                panda$core$System$exit$panda$core$UInt8($tmp406);
                            }
                            }
                            panda$core$String* $tmp412 = (($fn411) args272->$class->vtable[4])(args272, &$s410);
                            $tmp409 = $tmp412;
                            $tmp408 = $tmp409;
                            f407 = $tmp408;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp409));
                            int $tmp415;
                            {
                                $tmp417 = f407;
                                $match$211_21416 = $tmp417;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
                                panda$core$Bit $tmp419 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21416, &$s418);
                                if ($tmp419.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp421, 1);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp420, $tmp421);
                                    format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp420, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp423 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21416, &$s422);
                                if ($tmp423.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp425, 2);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp424, $tmp425);
                                    format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp424, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp427 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21416, &$s426);
                                if ($tmp427.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp429, 0);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp428, $tmp429);
                                    format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp428, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp431 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21416, &$s430);
                                if ($tmp431.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp433, 3);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp432, $tmp433);
                                    format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp432, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp435 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21416, &$s434);
                                if ($tmp435.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp437, 4);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp436, $tmp437);
                                    format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp436, true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp439 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$211_21416, &$s438);
                                if ($tmp439.value) {
                                {
                                    panda$core$Int64$init$builtin_int64(&$tmp441, 5);
                                    org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp440, $tmp441);
                                    format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp440, true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s444, f407);
                                    $tmp443 = $tmp445;
                                    panda$core$String* $tmp447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s446);
                                    $tmp442 = $tmp447;
                                    (($fn448) err295->$class->vtable[19])(err295, $tmp442);
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
                                    panda$core$UInt8$init$builtin_uint8(&$tmp449, 1);
                                    panda$core$System$exit$panda$core$UInt8($tmp449);
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp415 = -1;
                            goto $l413;
                            $l413:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
                            switch ($tmp415) {
                                case -1: goto $l450;
                            }
                            $l450:;
                        }
                        $tmp403 = -1;
                        goto $l401;
                        $l401:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) f407));
                        f407 = NULL;
                        switch ($tmp403) {
                            case -1: goto $l451;
                        }
                        $l451:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp453 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13316, &$s452);
                    if ($tmp453.value) {
                    {
                        panda$io$File* $tmp455 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp459 = (($fn458) args272->$class->vtable[4])(args272, &$s457);
                        $tmp456 = $tmp459;
                        panda$io$File$init$panda$core$String($tmp455, $tmp456);
                        $tmp454 = $tmp455;
                        panda$collections$Array$add$panda$collections$Array$T(imports280, ((panda$core$Object*) $tmp454));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp454));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
                    }
                    }
                    else {
                    panda$core$Bit $tmp461 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$179_13316, &$s460);
                    if ($tmp461.value) {
                    {
                        {
                            $tmp462 = root291;
                            panda$core$String* $tmp467 = (($fn466) args272->$class->vtable[4])(args272, &$s465);
                            $tmp464 = $tmp467;
                            $tmp463 = $tmp464;
                            root291 = $tmp463;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp469 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a308, &$s468);
                        if ($tmp469.value) {
                        {
                            panda$io$File* $tmp471 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp471, a308);
                            $tmp470 = $tmp471;
                            panda$collections$Array$add$panda$collections$Array$T(sources276, ((panda$core$Object*) $tmp470));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp470));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s474, a308);
                            $tmp473 = $tmp475;
                            panda$core$String* $tmp477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp473, &$s476);
                            $tmp472 = $tmp477;
                            (($fn478) err295->$class->vtable[19])(err295, $tmp472);
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
                            panda$core$UInt8$init$builtin_uint8(&$tmp479, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp479);
                        }
                        }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                    }
                }
                $tmp315 = -1;
                goto $l313;
                $l313:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
                switch ($tmp315) {
                    case -1: goto $l480;
                }
                $l480:;
            }
            $tmp307 = -1;
            goto $l305;
            $l305:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a308));
            a308 = NULL;
            switch ($tmp307) {
                case -1: goto $l481;
            }
            $l481:;
        }
        goto $l299;
        $l300:;
        panda$io$File* $tmp485 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$core$String* $tmp487 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
        $tmp486 = $tmp487;
        panda$io$File$init$panda$core$String($tmp485, $tmp486);
        $tmp484 = $tmp485;
        $tmp483 = $tmp484;
        llvmDir482 = $tmp483;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
        {
            $tmp488 = self->opt;
            panda$io$File* $tmp492 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir482, &$s491);
            $tmp490 = $tmp492;
            $tmp489 = $tmp490;
            self->opt = $tmp489;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
        }
        {
            $tmp493 = self->llc;
            panda$io$File* $tmp497 = panda$io$File$resolve$panda$core$String$R$panda$io$File(llvmDir482, &$s496);
            $tmp495 = $tmp497;
            $tmp494 = $tmp495;
            self->llc = $tmp494;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
        }
        {
            $tmp498 = self->gcc;
            panda$io$File* $tmp501 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp501, &$s502);
            $tmp500 = $tmp501;
            $tmp499 = $tmp500;
            self->gcc = $tmp499;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
        }
        ITable* $tmp503 = ((panda$collections$CollectionView*) sources276)->$class->itable;
        while ($tmp503->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp503 = $tmp503->next;
        }
        $fn505 $tmp504 = $tmp503->methods[0];
        panda$core$Int64 $tmp506 = $tmp504(((panda$collections$CollectionView*) sources276));
        panda$core$Int64$init$builtin_int64(&$tmp507, 0);
        panda$core$Bit $tmp508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp506, $tmp507);
        if ($tmp508.value) {
        {
            (($fn510) err295->$class->vtable[19])(err295, &$s509);
            panda$core$UInt8$init$builtin_uint8(&$tmp511, 1);
            panda$core$System$exit$panda$core$UInt8($tmp511);
        }
        }
        if (((panda$core$Bit) { !format290.nonnull }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp513, 1);
            org$pandalanguage$pandac$Main$Format$init$panda$core$Int64(&$tmp512, $tmp513);
            format290 = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp512, true });
        }
        }
        if (((panda$core$Bit) { outFile284 == NULL }).value) {
        {
            ITable* $tmp514 = ((panda$collections$CollectionView*) sources276)->$class->itable;
            while ($tmp514->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp514 = $tmp514->next;
            }
            $fn516 $tmp515 = $tmp514->methods[0];
            panda$core$Int64 $tmp517 = $tmp515(((panda$collections$CollectionView*) sources276));
            panda$core$Int64$init$builtin_int64(&$tmp518, 1);
            panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp517, $tmp518);
            if ($tmp519.value) {
            {
                int $tmp522;
                {
                    memset(&extension523, 0, sizeof(extension523));
                    {
                        $match$250_17524 = format290;
                        panda$core$Int64$init$builtin_int64(&$tmp525, 1);
                        panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17524.value).$rawValue, $tmp525);
                        if ($tmp526.value) {
                        {
                            {
                                $tmp527 = extension523;
                                $tmp528 = &$s529;
                                extension523 = $tmp528;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp530, 2);
                        panda$core$Bit $tmp531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17524.value).$rawValue, $tmp530);
                        if ($tmp531.value) {
                        {
                            {
                                $tmp532 = extension523;
                                $tmp533 = &$s534;
                                extension523 = $tmp533;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp532));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp535, 0);
                        panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17524.value).$rawValue, $tmp535);
                        if ($tmp536.value) {
                        {
                            {
                                $tmp537 = extension523;
                                $tmp538 = &$s539;
                                extension523 = $tmp538;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
                            }
                        }
                        }
                        else {
                        panda$core$Int64$init$builtin_int64(&$tmp540, 5);
                        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$250_17524.value).$rawValue, $tmp540);
                        if ($tmp541.value) {
                        {
                            {
                                $tmp542 = extension523;
                                $tmp543 = &$s544;
                                extension523 = $tmp543;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
                            }
                        }
                        }
                        else {
                        {
                            (($fn546) err295->$class->vtable[19])(err295, &$s545);
                            panda$core$UInt8$init$builtin_uint8(&$tmp547, 1);
                            panda$core$System$exit$panda$core$UInt8($tmp547);
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp548 = outFile284;
                        panda$core$Int64$init$builtin_int64(&$tmp552, 0);
                        panda$core$Object* $tmp553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources276, $tmp552);
                        $tmp551 = $tmp553;
                        panda$io$File* $tmp554 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp551), extension523);
                        $tmp550 = $tmp554;
                        $tmp549 = $tmp550;
                        outFile284 = $tmp549;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp551);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
                    }
                }
                $tmp522 = -1;
                goto $l520;
                $l520:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) extension523));
                switch ($tmp522) {
                    case -1: goto $l555;
                }
                $l555:;
            }
            }
            else {
            $tmp556 = format290;
            panda$core$Bit $tmp560;
            if (((panda$core$Bit) { $tmp556.nonnull }).value) goto $l557; else goto $l558;
            $l557:;
            panda$core$Int64$init$builtin_int64(&$tmp561, 5);
            panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp556.value).$rawValue, $tmp561);
            $tmp560 = $tmp562;
            goto $l559;
            $l558:;
            panda$core$Bit$init$builtin_bit(&$tmp563, false);
            $tmp560 = $tmp563;
            goto $l559;
            $l559:;
            if ($tmp560.value) {
            {
                (($fn565) err295->$class->vtable[19])(err295, &$s564);
                panda$core$UInt8$init$builtin_uint8(&$tmp566, 1);
                panda$core$System$exit$panda$core$UInt8($tmp566);
            }
            }
            else {
            {
                (($fn568) err295->$class->vtable[19])(err295, &$s567);
                panda$core$UInt8$init$builtin_uint8(&$tmp569, 1);
                panda$core$System$exit$panda$core$UInt8($tmp569);
            }
            }
            }
        }
        }
        $tmp570 = format290;
        panda$core$Bit $tmp574;
        if (((panda$core$Bit) { $tmp570.nonnull }).value) goto $l571; else goto $l572;
        $l571:;
        panda$core$Int64$init$builtin_int64(&$tmp575, 5);
        panda$core$Bit $tmp576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $tmp570.value).$rawValue, $tmp575);
        $tmp574 = $tmp576;
        goto $l573;
        $l572:;
        panda$core$Bit$init$builtin_bit(&$tmp577, false);
        $tmp574 = $tmp577;
        goto $l573;
        $l573:;
        if ($tmp574.value) {
        {
            if (((panda$core$Bit) { root291 == NULL }).value) {
            {
                {
                    $tmp578 = root291;
                    $tmp579 = &$s580;
                    root291 = $tmp579;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
                }
            }
            }
            org$pandalanguage$pandac$HTMLProcessor* $tmp582 = (org$pandalanguage$pandac$HTMLProcessor*) pandaObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
            org$pandalanguage$pandac$HTMLProcessor$init($tmp582);
            $tmp581 = $tmp582;
            panda$core$Int64$init$builtin_int64(&$tmp584, 0);
            panda$core$Object* $tmp585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources276, $tmp584);
            $tmp583 = $tmp585;
            (($fn586) $tmp581->$class->vtable[3])($tmp581, ((panda$io$File*) $tmp583), outFile284, root291);
            panda$core$Panda$unref$panda$core$Object$Q($tmp583);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
            $tmp271 = 0;
            goto $l269;
            $l587:;
            return;
        }
        }
        if (((panda$core$Bit) { root291 != NULL }).value) {
        {
            (($fn589) err295->$class->vtable[19])(err295, &$s588);
            panda$core$UInt8$init$builtin_uint8(&$tmp590, 1);
            panda$core$System$exit$panda$core$UInt8($tmp590);
        }
        }
        memset(&errorCount591, 0, sizeof(errorCount591));
        {
            int $tmp594;
            {
                memset(&cg595, 0, sizeof(cg595));
                {
                    $match$285_13596 = format290;
                    panda$core$Int64$init$builtin_int64(&$tmp599, 0);
                    panda$core$Bit $tmp600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13596.value).$rawValue, $tmp599);
                    bool $tmp598 = $tmp600.value;
                    if ($tmp598) goto $l601;
                    panda$core$Int64$init$builtin_int64(&$tmp602, 1);
                    panda$core$Bit $tmp603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13596.value).$rawValue, $tmp602);
                    $tmp598 = $tmp603.value;
                    $l601:;
                    panda$core$Bit $tmp604 = { $tmp598 };
                    bool $tmp597 = $tmp604.value;
                    if ($tmp597) goto $l605;
                    panda$core$Int64$init$builtin_int64(&$tmp606, 2);
                    panda$core$Bit $tmp607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13596.value).$rawValue, $tmp606);
                    $tmp597 = $tmp607.value;
                    $l605:;
                    panda$core$Bit $tmp608 = { $tmp597 };
                    if ($tmp608.value) {
                    {
                        {
                            $tmp609 = cg595;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp612 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(208, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$core$String* $tmp614 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
                            $tmp613 = $tmp614;
                            panda$io$File* $tmp618 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile284, &$s617);
                            $tmp616 = $tmp618;
                            panda$io$OutputStream* $tmp619 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp616);
                            $tmp615 = $tmp619;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp612, $tmp613, $tmp615);
                            $tmp611 = $tmp612;
                            $tmp610 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp611);
                            cg595 = $tmp610;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp620, 3);
                    panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13596.value).$rawValue, $tmp620);
                    if ($tmp621.value) {
                    {
                        {
                            $tmp622 = cg595;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp625 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp625, outFile284);
                            $tmp624 = $tmp625;
                            $tmp623 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp624);
                            cg595 = $tmp623;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp623));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp626, 4);
                    panda$core$Bit $tmp627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$285_13596.value).$rawValue, $tmp626);
                    if ($tmp627.value) {
                    {
                        {
                            $tmp628 = cg595;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp631 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(248, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp631, outFile284);
                            $tmp630 = $tmp631;
                            $tmp629 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp630);
                            cg595 = $tmp629;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
                        }
                    }
                    }
                    else {
                    {
                        panda$core$Bit$init$builtin_bit(&$tmp632, false);
                        if ($tmp632.value) goto $l633; else goto $l634;
                        $l634:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s635, (panda$core$Int64) { 294 });
                        abort();
                        $l633:;
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp639 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp639, self->pandaHome, ((panda$collections$ListView*) imports280), optimizationLevel286, safetyLevel288);
                $tmp638 = $tmp639;
                $tmp637 = $tmp638;
                settings636 = $tmp637;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
                panda$threads$MessageQueue* $tmp643 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp643);
                $tmp642 = $tmp643;
                $tmp641 = $tmp642;
                errorQueue640 = $tmp641;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp641));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp642));
                org$pandalanguage$pandac$Compiler* $tmp647 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp647, errorQueue640, cg595, settings636);
                $tmp646 = $tmp647;
                $tmp645 = $tmp646;
                compiler644 = $tmp645;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
                {
                    int $tmp650;
                    {
                        ITable* $tmp654 = ((panda$collections$Iterable*) sources276)->$class->itable;
                        while ($tmp654->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp654 = $tmp654->next;
                        }
                        $fn656 $tmp655 = $tmp654->methods[0];
                        panda$collections$Iterator* $tmp657 = $tmp655(((panda$collections$Iterable*) sources276));
                        $tmp653 = $tmp657;
                        $tmp652 = $tmp653;
                        Iter$299$13651 = $tmp652;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
                        $l658:;
                        ITable* $tmp661 = Iter$299$13651->$class->itable;
                        while ($tmp661->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp661 = $tmp661->next;
                        }
                        $fn663 $tmp662 = $tmp661->methods[0];
                        panda$core$Bit $tmp664 = $tmp662(Iter$299$13651);
                        panda$core$Bit $tmp665 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp664);
                        bool $tmp660 = $tmp665.value;
                        if (!$tmp660) goto $l659;
                        {
                            int $tmp668;
                            {
                                ITable* $tmp672 = Iter$299$13651->$class->itable;
                                while ($tmp672->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp672 = $tmp672->next;
                                }
                                $fn674 $tmp673 = $tmp672->methods[1];
                                panda$core$Object* $tmp675 = $tmp673(Iter$299$13651);
                                $tmp671 = $tmp675;
                                $tmp670 = ((panda$io$File*) $tmp671);
                                s669 = $tmp670;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp670));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp671);
                                {
                                    int $tmp678;
                                    {
                                        panda$collections$ListView* $tmp683 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler644, s669);
                                        $tmp682 = $tmp683;
                                        ITable* $tmp684 = ((panda$collections$Iterable*) $tmp682)->$class->itable;
                                        while ($tmp684->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp684 = $tmp684->next;
                                        }
                                        $fn686 $tmp685 = $tmp684->methods[0];
                                        panda$collections$Iterator* $tmp687 = $tmp685(((panda$collections$Iterable*) $tmp682));
                                        $tmp681 = $tmp687;
                                        $tmp680 = $tmp681;
                                        Iter$300$17679 = $tmp680;
                                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp681));
                                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
                                        $l688:;
                                        ITable* $tmp691 = Iter$300$17679->$class->itable;
                                        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp691 = $tmp691->next;
                                        }
                                        $fn693 $tmp692 = $tmp691->methods[0];
                                        panda$core$Bit $tmp694 = $tmp692(Iter$300$17679);
                                        panda$core$Bit $tmp695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp694);
                                        bool $tmp690 = $tmp695.value;
                                        if (!$tmp690) goto $l689;
                                        {
                                            int $tmp698;
                                            {
                                                ITable* $tmp702 = Iter$300$17679->$class->itable;
                                                while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp702 = $tmp702->next;
                                                }
                                                $fn704 $tmp703 = $tmp702->methods[1];
                                                panda$core$Object* $tmp705 = $tmp703(Iter$300$17679);
                                                $tmp701 = $tmp705;
                                                $tmp700 = ((org$pandalanguage$pandac$ClassDecl*) $tmp701);
                                                cl699 = $tmp700;
                                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
                                                panda$core$Panda$unref$panda$core$Object$Q($tmp701);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler644, cl699);
                                            }
                                            $tmp698 = -1;
                                            goto $l696;
                                            $l696:;
                                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cl699));
                                            cl699 = NULL;
                                            switch ($tmp698) {
                                                case -1: goto $l706;
                                            }
                                            $l706:;
                                        }
                                        goto $l688;
                                        $l689:;
                                    }
                                    $tmp678 = -1;
                                    goto $l676;
                                    $l676:;
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$300$17679));
                                    Iter$300$17679 = NULL;
                                    switch ($tmp678) {
                                        case -1: goto $l707;
                                    }
                                    $l707:;
                                }
                            }
                            $tmp668 = -1;
                            goto $l666;
                            $l666:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s669));
                            s669 = NULL;
                            switch ($tmp668) {
                                case -1: goto $l708;
                            }
                            $l708:;
                        }
                        goto $l658;
                        $l659:;
                    }
                    $tmp650 = -1;
                    goto $l648;
                    $l648:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$299$13651));
                    Iter$299$13651 = NULL;
                    switch ($tmp650) {
                        case -1: goto $l709;
                    }
                    $l709:;
                }
                {
                    int $tmp712;
                    {
                        ITable* $tmp716 = ((panda$collections$Iterable*) sources276)->$class->itable;
                        while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp716 = $tmp716->next;
                        }
                        $fn718 $tmp717 = $tmp716->methods[0];
                        panda$collections$Iterator* $tmp719 = $tmp717(((panda$collections$Iterable*) sources276));
                        $tmp715 = $tmp719;
                        $tmp714 = $tmp715;
                        Iter$304$13713 = $tmp714;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
                        $l720:;
                        ITable* $tmp723 = Iter$304$13713->$class->itable;
                        while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp723 = $tmp723->next;
                        }
                        $fn725 $tmp724 = $tmp723->methods[0];
                        panda$core$Bit $tmp726 = $tmp724(Iter$304$13713);
                        panda$core$Bit $tmp727 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp726);
                        bool $tmp722 = $tmp727.value;
                        if (!$tmp722) goto $l721;
                        {
                            int $tmp730;
                            {
                                ITable* $tmp734 = Iter$304$13713->$class->itable;
                                while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp734 = $tmp734->next;
                                }
                                $fn736 $tmp735 = $tmp734->methods[1];
                                panda$core$Object* $tmp737 = $tmp735(Iter$304$13713);
                                $tmp733 = $tmp737;
                                $tmp732 = ((panda$io$File*) $tmp733);
                                s731 = $tmp732;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp732));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp733);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler644, s731);
                            }
                            $tmp730 = -1;
                            goto $l728;
                            $l728:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s731));
                            s731 = NULL;
                            switch ($tmp730) {
                                case -1: goto $l738;
                            }
                            $l738:;
                        }
                        goto $l720;
                        $l721:;
                    }
                    $tmp712 = -1;
                    goto $l710;
                    $l710:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$304$13713));
                    Iter$304$13713 = NULL;
                    switch ($tmp712) {
                        case -1: goto $l739;
                    }
                    $l739:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler644);
                panda$core$Int64 $tmp740 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue640);
                errorCount591 = $tmp740;
                panda$core$Int64$init$builtin_int64(&$tmp742, 0);
                panda$core$Bit$init$builtin_bit(&$tmp743, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp741, $tmp742, errorCount591, $tmp743);
                int64_t $tmp745 = $tmp741.min.value;
                panda$core$Int64 i744 = { $tmp745 };
                int64_t $tmp747 = $tmp741.max.value;
                bool $tmp748 = $tmp741.inclusive.value;
                if ($tmp748) goto $l755; else goto $l756;
                $l755:;
                if ($tmp745 <= $tmp747) goto $l749; else goto $l751;
                $l756:;
                if ($tmp745 < $tmp747) goto $l749; else goto $l751;
                $l749:;
                {
                    int $tmp759;
                    {
                        panda$core$Immutable* $tmp763 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue640);
                        $tmp762 = $tmp763;
                        $tmp761 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp762);
                        error760 = $tmp761;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
                        panda$core$String* $tmp771 = panda$io$File$name$R$panda$core$String(error760->file);
                        $tmp770 = $tmp771;
                        panda$core$String* $tmp772 = panda$core$String$convert$R$panda$core$String($tmp770);
                        $tmp769 = $tmp772;
                        panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s773);
                        $tmp768 = $tmp774;
                        org$pandalanguage$pandac$Position$wrapper* $tmp776;
                        $tmp776 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp776->value = error760->position;
                        $tmp775 = ((panda$core$Object*) $tmp776);
                        panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp768, $tmp775);
                        $tmp767 = $tmp777;
                        panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, &$s778);
                        $tmp766 = $tmp779;
                        panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, error760->message);
                        $tmp765 = $tmp780;
                        panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s781);
                        $tmp764 = $tmp782;
                        panda$io$Console$printLine$panda$core$String($tmp764);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
                        panda$core$Panda$unref$panda$core$Object$Q($tmp775);
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
                    }
                    $tmp759 = -1;
                    goto $l757;
                    $l757:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) error760));
                    error760 = NULL;
                    switch ($tmp759) {
                        case -1: goto $l783;
                    }
                    $l783:;
                }
                $l752:;
                int64_t $tmp785 = $tmp747 - i744.value;
                if ($tmp748) goto $l786; else goto $l787;
                $l786:;
                if ((uint64_t) $tmp785 >= 1) goto $l784; else goto $l751;
                $l787:;
                if ((uint64_t) $tmp785 > 1) goto $l784; else goto $l751;
                $l784:;
                i744.value += 1;
                goto $l749;
                $l751:;
            }
            $tmp594 = -1;
            goto $l592;
            $l592:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) compiler644));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) errorQueue640));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) settings636));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) cg595));
            settings636 = NULL;
            errorQueue640 = NULL;
            compiler644 = NULL;
            switch ($tmp594) {
                case -1: goto $l790;
            }
            $l790:;
        }
        panda$core$Int64$init$builtin_int64(&$tmp791, 0);
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount591, $tmp791);
        if ($tmp792.value) {
        {
            {
                $match$315_13793 = format290;
                panda$core$Int64$init$builtin_int64(&$tmp794, 1);
                panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$315_13793.value).$rawValue, $tmp794);
                if ($tmp795.value) {
                {
                    int $tmp798;
                    {
                        panda$io$File* $tmp804 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile284, &$s803);
                        $tmp802 = $tmp804;
                        panda$io$File* $tmp805 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File(self, $tmp802, optimizationLevel286, preserveTemporaries293);
                        $tmp801 = $tmp805;
                        $tmp800 = $tmp801;
                        optimized799 = $tmp800;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp801));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
                        panda$io$File* $tmp809 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File(self, optimized799, preserveTemporaries293);
                        $tmp808 = $tmp809;
                        $tmp807 = $tmp808;
                        assembly806 = $tmp807;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp807));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
                        panda$io$File* $tmp811 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(self, assembly806, outFile284, preserveTemporaries293);
                        $tmp810 = $tmp811;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
                    }
                    $tmp798 = -1;
                    goto $l796;
                    $l796:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) assembly806));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) optimized799));
                    optimized799 = NULL;
                    assembly806 = NULL;
                    switch ($tmp798) {
                        case -1: goto $l812;
                    }
                    $l812:;
                }
                }
                else {
                panda$core$Int64$init$builtin_int64(&$tmp813, 2);
                panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$Main$Format) $match$315_13793.value).$rawValue, $tmp813);
                if ($tmp814.value) {
                {
                    int $tmp817;
                    {
                        panda$io$File* $tmp823 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile284, &$s822);
                        $tmp821 = $tmp823;
                        panda$io$File* $tmp824 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$panda$core$Bit$R$panda$io$File(self, $tmp821, optimizationLevel286, preserveTemporaries293);
                        $tmp820 = $tmp824;
                        $tmp819 = $tmp820;
                        optimized818 = $tmp819;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
                        panda$io$File* $tmp828 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$panda$core$Bit$R$panda$io$File(self, optimized818, preserveTemporaries293);
                        $tmp827 = $tmp828;
                        $tmp826 = $tmp827;
                        assembly825 = $tmp826;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
                        panda$io$File* $tmp830 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(self, assembly825, outFile284, preserveTemporaries293);
                        $tmp829 = $tmp830;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
                    }
                    $tmp817 = -1;
                    goto $l815;
                    $l815:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) assembly825));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) optimized818));
                    optimized818 = NULL;
                    assembly825 = NULL;
                    switch ($tmp817) {
                        case -1: goto $l831;
                    }
                    $l831:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp832, 1);
            panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount591, $tmp832);
            if ($tmp833.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s834);
            }
            }
            else {
            {
                panda$core$String* $tmp837 = panda$core$Int64$convert$R$panda$core$String(errorCount591);
                $tmp836 = $tmp837;
                panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp836, &$s838);
                $tmp835 = $tmp839;
                panda$io$Console$printLine$panda$core$String($tmp835);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
            }
            }
            panda$core$UInt8$init$builtin_uint8(&$tmp840, 1);
            panda$core$System$exit$panda$core$UInt8($tmp840);
        }
        }
    }
    $tmp271 = -1;
    goto $l269;
    $l269:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) llvmDir482));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) err295));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) root291));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) outFile284));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) imports280));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) sources276));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) args272));
    args272 = NULL;
    sources276 = NULL;
    imports280 = NULL;
    err295 = NULL;
    llvmDir482 = NULL;
    switch ($tmp271) {
        case -1: goto $l841;
        case 0: goto $l587;
    }
    $l841:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue842;
    panda$core$Bit $tmp844 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s843);
    $returnValue842 = $tmp844;
    return $returnValue842;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp846;
    org$pandalanguage$pandac$Main* $tmp847 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp847);
    $tmp846 = $tmp847;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp846, p_args);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp850;
    {
    }
    $tmp850 = -1;
    goto $l848;
    $l848:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp850) {
        case -1: goto $l851;
    }
    $l851:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->pandaHome));
}

