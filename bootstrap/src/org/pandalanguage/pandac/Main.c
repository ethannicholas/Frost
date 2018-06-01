#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/io/File.h"
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
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
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
#include "panda/collections/CollectionView.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn48)(panda$io$InputStream*);
typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn78)(panda$io$InputStream*);
typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn106)(panda$io$InputStream*);
typedef void (*$fn108)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn112)(panda$io$InputStream*);
typedef void (*$fn114)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn146)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn153)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn164)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn204)(panda$io$InputStream*);
typedef void (*$fn206)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn210)(panda$io$InputStream*);
typedef void (*$fn212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn221)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn222)(panda$io$OutputStream*);
typedef void (*$fn224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn225)(panda$io$OutputStream*);
typedef void (*$fn227)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn229)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn257)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn266)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn276)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn283)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn296)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn307)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn318)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn337)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn342)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn365)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn374)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn384)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn392)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn430)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn469)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn527)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn534)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn545)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn557)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn564)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn575)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn589)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn596)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn607)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn713)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn720)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$ListView* (*$fn747)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$Q$GT);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x65\x78\x65\x63\x2f\x6c\x6c\x76\x6d\x2d\x35\x2e\x30", 27, -855196788127931458, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x78\x38\x36\x5f\x36\x34\x2d\x61\x70\x70\x6c\x65\x2d\x64\x61\x72\x77\x69\x6e\x31\x37\x2e\x33\x2e\x30", 25, 2390944900235185536, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2f\x73\x72\x63", 6, 1549821160968, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f\x70\x74", 4, 152597986, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x69\x6e\x74", 5, 15305173385, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x73", 2, 14962, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x72\x65\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x6f\x64\x65\x6c\x3d\x70\x69\x63", 21, 7895568360759315925, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x75\x63\x2e\x61\x3b\x2f\x6f\x70\x74\x2f\x6c\x6f\x63\x61\x6c\x2f\x6c\x69\x62\x2f\x6c\x69\x62\x69\x63\x75\x69\x31\x38\x6e\x2e\x64\x79\x6c\x69\x62", 57, -9070932862195135721, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s194 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s195 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x70\x61\x6e\x64\x61", 10, -7176460584895440524, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x65\x70\x65\x61\x74", 8, 15702153325530932, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* self) {
    panda$io$File* $tmp2;
    panda$io$File* $tmp3;
    panda$core$String* $tmp6;
    panda$io$File* $tmp8;
    panda$io$File* $tmp9;
    panda$io$File* $tmp10;
    self->llvmDir = NULL;
    self->triple = NULL;
    self->opt = NULL;
    self->llc = NULL;
    self->gcc = NULL;
    self->pandaHome = NULL;
    panda$io$File* $tmp4 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
    panda$io$File$init$panda$core$String($tmp4, &$s5);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->llvmDir = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    $tmp6 = &$s7;
    self->triple = $tmp6;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
    {
        $tmp8 = self->pandaHome;
        panda$io$File* $tmp11 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
        panda$io$File$init$panda$core$String($tmp11, &$s12);
        $tmp10 = $tmp11;
        $tmp9 = $tmp10;
        self->pandaHome = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
}
panda$io$File* org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm, panda$core$Int64 p_level) {
    panda$io$File* $returnValue17;
    panda$io$File* $tmp18;
    panda$io$File* dest21 = NULL;
    panda$io$File* $tmp22;
    panda$io$File* $tmp23;
    panda$collections$Array* args26 = NULL;
    panda$collections$Array* $tmp27;
    panda$collections$Array* $tmp28;
    panda$core$String* $tmp31;
    panda$core$String* $tmp32;
    panda$core$Object* $tmp34;
    panda$core$System$Process* p41 = NULL;
    panda$core$System$Process* $tmp42;
    panda$core$System$Process* $tmp43;
    panda$io$OutputStream* $tmp45;
    panda$core$String* $tmp47;
    panda$core$Int64 $tmp51;
    panda$io$File* $tmp53;
    int $tmp15;
    {
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_level, ((panda$core$Int64) { 0 }));
        if ($tmp16.value) {
        {
            $tmp18 = p_llvm;
            $returnValue17 = $tmp18;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp18));
            $tmp15 = 0;
            goto $l13;
            $l19:;
            return $returnValue17;
        }
        }
        panda$io$File* $tmp25 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s24);
        $tmp23 = $tmp25;
        $tmp22 = $tmp23;
        dest21 = $tmp22;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp22));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
        panda$collections$Array* $tmp29 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp29);
        $tmp28 = $tmp29;
        $tmp27 = $tmp28;
        args26 = $tmp27;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp28));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s30));
        panda$core$Int64$wrapper* $tmp35;
        $tmp35 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
        $tmp35->value = p_level;
        $tmp34 = ((panda$core$Object*) $tmp35);
        panda$core$String* $tmp36 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s33, $tmp34);
        $tmp32 = $tmp36;
        panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, &$s37);
        $tmp31 = $tmp38;
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object($tmp34);
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s39));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) &$s40));
        panda$collections$Array$add$panda$collections$Array$T(args26, ((panda$core$Object*) dest21->path));
        panda$core$System$Process* $tmp44 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->opt, ((panda$collections$ListView*) args26));
        $tmp43 = $tmp44;
        $tmp42 = $tmp43;
        p41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$io$OutputStream* $tmp46 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp45 = $tmp46;
        panda$core$String* $tmp49 = (($fn48) p41->error->$class->vtable[6])(p41->error);
        $tmp47 = $tmp49;
        (($fn50) $tmp45->$class->vtable[16])($tmp45, $tmp47);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp51, p41);
        panda$core$Bit $tmp52 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp51, ((panda$core$Int64) { 0 }));
        if ($tmp52.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp53 = dest21;
        $returnValue17 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        $tmp15 = 1;
        goto $l13;
        $l54:;
        return $returnValue17;
    }
    $l13:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p41));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args26));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest21));
    dest21 = NULL;
    args26 = NULL;
    p41 = NULL;
    switch ($tmp15) {
        case 1: goto $l54;
        case 0: goto $l19;
    }
    $l56:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_llvm) {
    panda$io$File* dest60 = NULL;
    panda$io$File* $tmp61;
    panda$io$File* $tmp62;
    panda$collections$Array* args65 = NULL;
    panda$collections$Array* $tmp66;
    panda$collections$Array* $tmp67;
    panda$core$System$Process* p71 = NULL;
    panda$core$System$Process* $tmp72;
    panda$core$System$Process* $tmp73;
    panda$io$OutputStream* $tmp75;
    panda$core$String* $tmp77;
    panda$core$Int64 $tmp81;
    panda$io$File* $returnValue83;
    panda$io$File* $tmp84;
    int $tmp59;
    {
        panda$io$File* $tmp64 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(p_llvm, &$s63);
        $tmp62 = $tmp64;
        $tmp61 = $tmp62;
        dest60 = $tmp61;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$collections$Array* $tmp68 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp68);
        $tmp67 = $tmp68;
        $tmp66 = $tmp67;
        args65 = $tmp66;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) p_llvm->path));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) &$s69));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) &$s70));
        panda$collections$Array$add$panda$collections$Array$T(args65, ((panda$core$Object*) dest60->path));
        panda$core$System$Process* $tmp74 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->llc, ((panda$collections$ListView*) args65));
        $tmp73 = $tmp74;
        $tmp72 = $tmp73;
        p71 = $tmp72;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
        panda$io$OutputStream* $tmp76 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp75 = $tmp76;
        panda$core$String* $tmp79 = (($fn78) p71->error->$class->vtable[6])(p71->error);
        $tmp77 = $tmp79;
        (($fn80) $tmp75->$class->vtable[16])($tmp75, $tmp77);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp81, p71);
        panda$core$Bit $tmp82 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp81, ((panda$core$Int64) { 0 }));
        if ($tmp82.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp84 = dest60;
        $returnValue83 = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        $tmp59 = 0;
        goto $l57;
        $l85:;
        return $returnValue83;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest60));
    dest60 = NULL;
    args65 = NULL;
    p71 = NULL;
    switch ($tmp59) {
        case 0: goto $l85;
    }
    $l87:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args91 = NULL;
    panda$collections$Array* $tmp92;
    panda$collections$Array* $tmp93;
    panda$core$System$Process* p99 = NULL;
    panda$core$System$Process* $tmp100;
    panda$core$System$Process* $tmp101;
    panda$io$OutputStream* $tmp103;
    panda$core$String* $tmp105;
    panda$io$OutputStream* $tmp109;
    panda$core$String* $tmp111;
    panda$core$Int64 $tmp115;
    panda$io$File* $returnValue117;
    panda$io$File* $tmp118;
    int $tmp90;
    {
        panda$collections$Array* $tmp94 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp94);
        $tmp93 = $tmp94;
        $tmp92 = $tmp93;
        args91 = $tmp92;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s95));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s96));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s97));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) &$s98));
        panda$collections$Array$add$panda$collections$Array$T(args91, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp102 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args91));
        $tmp101 = $tmp102;
        $tmp100 = $tmp101;
        p99 = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
        panda$io$OutputStream* $tmp104 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp103 = $tmp104;
        panda$core$String* $tmp107 = (($fn106) p99->output->$class->vtable[6])(p99->output);
        $tmp105 = $tmp107;
        (($fn108) $tmp103->$class->vtable[16])($tmp103, $tmp105);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$io$OutputStream* $tmp110 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp109 = $tmp110;
        panda$core$String* $tmp113 = (($fn112) p99->error->$class->vtable[6])(p99->error);
        $tmp111 = $tmp113;
        (($fn114) $tmp109->$class->vtable[16])($tmp109, $tmp111);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp115, p99);
        panda$core$Bit $tmp116 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp115, ((panda$core$Int64) { 0 }));
        if ($tmp116.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp118 = p_dest;
        $returnValue117 = $tmp118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
        $tmp90 = 0;
        goto $l88;
        $l119:;
        return $returnValue117;
    }
    $l88:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p99));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args91));
    args91 = NULL;
    p99 = NULL;
    switch ($tmp90) {
        case 0: goto $l119;
    }
    $l121:;
    abort();
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args125 = NULL;
    panda$collections$Array* $tmp126;
    panda$collections$Array* $tmp127;
    panda$collections$Array* icuLibs132 = NULL;
    panda$collections$Array* $tmp133;
    panda$collections$Array* $tmp134;
    panda$collections$Iterator* Iter$119$9141 = NULL;
    panda$collections$Iterator* $tmp142;
    panda$collections$Iterator* $tmp143;
    panda$core$String* lib159 = NULL;
    panda$core$String* $tmp160;
    panda$core$Object* $tmp161;
    panda$io$File* libFile166 = NULL;
    panda$io$File* $tmp167;
    panda$io$File* $tmp168;
    panda$core$String* $tmp170;
    panda$io$File* $tmp172;
    panda$core$String* simpleName175 = NULL;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$String* $tmp184;
    panda$core$String* $tmp185;
    panda$core$String* $tmp186;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp187;
    panda$core$String* $tmp189;
    panda$core$System$Process* p197 = NULL;
    panda$core$System$Process* $tmp198;
    panda$core$System$Process* $tmp199;
    panda$io$OutputStream* $tmp201;
    panda$core$String* $tmp203;
    panda$io$OutputStream* $tmp207;
    panda$core$String* $tmp209;
    panda$core$Int64 $tmp213;
    panda$io$File* $returnValue215;
    panda$io$File* $tmp216;
    int $tmp124;
    {
        panda$collections$Array* $tmp128 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp128);
        $tmp127 = $tmp128;
        $tmp126 = $tmp127;
        args125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s129));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s130));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s131));
        panda$collections$Array* $tmp137 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(&$s135, &$s136);
        $tmp134 = $tmp137;
        $tmp133 = $tmp134;
        icuLibs132 = $tmp133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
        {
            int $tmp140;
            {
                ITable* $tmp144 = ((panda$collections$Iterable*) icuLibs132)->$class->itable;
                while ($tmp144->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp144 = $tmp144->next;
                }
                $fn146 $tmp145 = $tmp144->methods[0];
                panda$collections$Iterator* $tmp147 = $tmp145(((panda$collections$Iterable*) icuLibs132));
                $tmp143 = $tmp147;
                $tmp142 = $tmp143;
                Iter$119$9141 = $tmp142;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp143));
                $l148:;
                ITable* $tmp151 = Iter$119$9141->$class->itable;
                while ($tmp151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp151 = $tmp151->next;
                }
                $fn153 $tmp152 = $tmp151->methods[0];
                panda$core$Bit $tmp154 = $tmp152(Iter$119$9141);
                panda$core$Bit $tmp155 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp154);
                bool $tmp150 = $tmp155.value;
                if (!$tmp150) goto $l149;
                {
                    int $tmp158;
                    {
                        ITable* $tmp162 = Iter$119$9141->$class->itable;
                        while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp162 = $tmp162->next;
                        }
                        $fn164 $tmp163 = $tmp162->methods[1];
                        panda$core$Object* $tmp165 = $tmp163(Iter$119$9141);
                        $tmp161 = $tmp165;
                        $tmp160 = ((panda$core$String*) $tmp161);
                        lib159 = $tmp160;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
                        panda$core$Panda$unref$panda$core$Object($tmp161);
                        panda$io$File* $tmp169 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$io$File$init$panda$core$String($tmp169, lib159);
                        $tmp168 = $tmp169;
                        $tmp167 = $tmp168;
                        libFile166 = $tmp167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
                        panda$io$File* $tmp173 = panda$io$File$parent$R$panda$io$File$Q(libFile166);
                        $tmp172 = $tmp173;
                        panda$core$String* $tmp174 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s171, ((panda$core$Object*) $tmp172));
                        $tmp170 = $tmp174;
                        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) $tmp170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
                        panda$core$String* $tmp178 = panda$io$File$simpleName$R$panda$core$String(libFile166);
                        $tmp177 = $tmp178;
                        $tmp176 = $tmp177;
                        simpleName175 = $tmp176;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Bit $tmp180 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(simpleName175, &$s179);
                        if ($tmp180.value) goto $l181; else goto $l182;
                        $l182:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s183, (panda$core$Int64) { 123 });
                        abort();
                        $l181:;
                        {
                            $tmp184 = simpleName175;
                            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp187, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 3 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
                            panda$core$String* $tmp188 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(simpleName175, $tmp187);
                            $tmp186 = $tmp188;
                            $tmp185 = $tmp186;
                            simpleName175 = $tmp185;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
                        }
                        panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s190, simpleName175);
                        $tmp189 = $tmp191;
                        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) $tmp189));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
                    }
                    $tmp158 = -1;
                    goto $l156;
                    $l156:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) simpleName175));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) libFile166));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) lib159));
                    lib159 = NULL;
                    libFile166 = NULL;
                    simpleName175 = NULL;
                    switch ($tmp158) {
                        case -1: goto $l192;
                    }
                    $l192:;
                }
                goto $l148;
                $l149:;
            }
            $tmp140 = -1;
            goto $l138;
            $l138:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$119$9141));
            Iter$119$9141 = NULL;
            switch ($tmp140) {
                case -1: goto $l193;
            }
            $l193:;
        }
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s194));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s195));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s196));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp200 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args125));
        $tmp199 = $tmp200;
        $tmp198 = $tmp199;
        p197 = $tmp198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
        panda$io$OutputStream* $tmp202 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp201 = $tmp202;
        panda$core$String* $tmp205 = (($fn204) p197->output->$class->vtable[6])(p197->output);
        $tmp203 = $tmp205;
        (($fn206) $tmp201->$class->vtable[16])($tmp201, $tmp203);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
        panda$io$OutputStream* $tmp208 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp207 = $tmp208;
        panda$core$String* $tmp211 = (($fn210) p197->error->$class->vtable[6])(p197->error);
        $tmp209 = $tmp211;
        (($fn212) $tmp207->$class->vtable[16])($tmp207, $tmp209);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp213, p197);
        panda$core$Bit $tmp214 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp213, ((panda$core$Int64) { 0 }));
        if ($tmp214.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp216 = p_dest;
        $returnValue215 = $tmp216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
        $tmp124 = 0;
        goto $l122;
        $l217:;
        return $returnValue215;
    }
    $l122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p197));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) icuLibs132));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args125));
    args125 = NULL;
    icuLibs132 = NULL;
    p197 = NULL;
    switch ($tmp124) {
        case 0: goto $l217;
    }
    $l219:;
    abort();
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn221) p_out->$class->vtable[19])(p_out, &$s220);
    (($fn222) p_out->$class->vtable[17])(p_out);
    (($fn224) p_out->$class->vtable[19])(p_out, &$s223);
    (($fn225) p_out->$class->vtable[17])(p_out);
    (($fn227) p_out->$class->vtable[19])(p_out, &$s226);
    (($fn229) p_out->$class->vtable[19])(p_out, &$s228);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args233 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp234;
    org$pandalanguage$pandac$Main$Arguments* $tmp235;
    panda$collections$Array* sources237 = NULL;
    panda$collections$Array* $tmp238;
    panda$collections$Array* $tmp239;
    panda$collections$Array* imports241 = NULL;
    panda$collections$Array* $tmp242;
    panda$collections$Array* $tmp243;
    panda$io$File* outFile245 = NULL;
    panda$io$File* $tmp246;
    panda$core$Int64 optimizationLevel247;
    panda$core$Int64 safetyLevel248;
    panda$core$Int64$nullable format249;
    panda$io$OutputStream* err250 = NULL;
    panda$io$OutputStream* $tmp251;
    panda$io$OutputStream* $tmp252;
    panda$core$String* a263 = NULL;
    panda$core$String* $tmp264;
    panda$core$String* $tmp265;
    panda$core$String* $match$161_13271 = NULL;
    panda$core$String* $tmp272;
    panda$io$File* $tmp277;
    panda$io$File* $tmp278;
    panda$io$File* $tmp279;
    panda$core$String* $tmp281;
    panda$io$File* $tmp285;
    panda$core$String* level292 = NULL;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    panda$io$OutputStream* $tmp304;
    panda$core$String* level314 = NULL;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$io$OutputStream* $tmp326;
    panda$core$String* f338 = NULL;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$String* $match$189_21347 = NULL;
    panda$core$String* $tmp348;
    panda$core$String* $tmp359;
    panda$core$String* $tmp360;
    panda$io$File* $tmp370;
    panda$core$String* $tmp372;
    panda$io$File* $tmp378;
    panda$io$File* $tmp379;
    panda$io$File* $tmp380;
    panda$core$String* $tmp382;
    panda$core$String* $tmp388;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$String* $tmp397;
    panda$io$File* $tmp401;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    panda$io$File* $tmp412;
    panda$io$File* $tmp413;
    panda$io$File* $tmp414;
    panda$io$File* $tmp417;
    panda$io$File* $tmp418;
    panda$io$File* $tmp419;
    panda$io$File* $tmp422;
    panda$io$File* $tmp423;
    panda$io$File* $tmp424;
    panda$core$String* extension436 = NULL;
    panda$core$Int64$nullable $match$232_21437;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$core$String* $tmp447;
    panda$core$String* $tmp448;
    panda$core$String* $tmp451;
    panda$core$String* $tmp452;
    panda$core$String* $tmp455;
    panda$core$String* $tmp456;
    panda$io$File* $tmp461;
    panda$io$File* $tmp462;
    panda$io$File* $tmp463;
    panda$core$Object* $tmp464;
    panda$core$Int64 errorCount470;
    org$pandalanguage$pandac$CodeGenerator* cg474 = NULL;
    panda$core$Int64$nullable $match$251_17475;
    org$pandalanguage$pandac$CodeGenerator* $tmp485;
    org$pandalanguage$pandac$CodeGenerator* $tmp486;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp487;
    panda$io$OutputStream* $tmp489;
    panda$io$File* $tmp490;
    org$pandalanguage$pandac$CodeGenerator* $tmp495;
    org$pandalanguage$pandac$CodeGenerator* $tmp496;
    org$pandalanguage$pandac$HCodeGenerator* $tmp497;
    org$pandalanguage$pandac$CodeGenerator* $tmp500;
    org$pandalanguage$pandac$CodeGenerator* $tmp501;
    org$pandalanguage$pandac$CCodeGenerator* $tmp502;
    org$pandalanguage$pandac$Compiler$Settings* settings507 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp508;
    org$pandalanguage$pandac$Compiler$Settings* $tmp509;
    panda$threads$MessageQueue* errorQueue511 = NULL;
    panda$threads$MessageQueue* $tmp512;
    panda$threads$MessageQueue* $tmp513;
    org$pandalanguage$pandac$Compiler* compiler515 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp516;
    org$pandalanguage$pandac$Compiler* $tmp517;
    panda$collections$Iterator* Iter$264$13522 = NULL;
    panda$collections$Iterator* $tmp523;
    panda$collections$Iterator* $tmp524;
    panda$io$File* s540 = NULL;
    panda$io$File* $tmp541;
    panda$core$Object* $tmp542;
    panda$collections$Iterator* Iter$265$17550 = NULL;
    panda$collections$Iterator* $tmp551;
    panda$collections$Iterator* $tmp552;
    panda$collections$ListView* $tmp553;
    org$pandalanguage$pandac$ClassDecl* cl570 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp571;
    panda$core$Object* $tmp572;
    panda$collections$Iterator* Iter$269$13584 = NULL;
    panda$collections$Iterator* $tmp585;
    panda$collections$Iterator* $tmp586;
    panda$io$File* s602 = NULL;
    panda$io$File* $tmp603;
    panda$core$Object* $tmp604;
    panda$core$Range$LTpanda$core$Int64$GT $tmp612;
    org$pandalanguage$pandac$Compiler$Error* error629 = NULL;
    org$pandalanguage$pandac$Compiler$Error* $tmp630;
    panda$core$Immutable* $tmp631;
    panda$core$String* $tmp633;
    panda$core$String* $tmp634;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    panda$core$String* $tmp639;
    panda$core$Object* $tmp644;
    panda$core$Int64$nullable $match$281_17661;
    panda$io$File* optimized666 = NULL;
    panda$io$File* $tmp667;
    panda$io$File* $tmp668;
    panda$io$File* $tmp669;
    panda$io$File* assembly673 = NULL;
    panda$io$File* $tmp674;
    panda$io$File* $tmp675;
    panda$io$File* $tmp677;
    panda$io$File* optimized684 = NULL;
    panda$io$File* $tmp685;
    panda$io$File* $tmp686;
    panda$io$File* $tmp687;
    panda$io$File* assembly691 = NULL;
    panda$io$File* $tmp692;
    panda$io$File* $tmp693;
    panda$io$File* $tmp695;
    panda$core$String* $tmp700;
    panda$core$String* $tmp701;
    int $tmp232;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp236 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp236, p_rawArgs);
        $tmp235 = $tmp236;
        $tmp234 = $tmp235;
        args233 = $tmp234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
        panda$collections$Array* $tmp240 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp240);
        $tmp239 = $tmp240;
        $tmp238 = $tmp239;
        sources237 = $tmp238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
        panda$collections$Array* $tmp244 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp244);
        $tmp243 = $tmp244;
        $tmp242 = $tmp243;
        imports241 = $tmp242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
        panda$collections$Array$add$panda$collections$Array$T(imports241, ((panda$core$Object*) self->pandaHome));
        $tmp246 = NULL;
        outFile245 = $tmp246;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
        optimizationLevel247 = ((panda$core$Int64) { 3 });
        safetyLevel248 = ((panda$core$Int64) { 3 });
        format249 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp253 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp252 = $tmp253;
        $tmp251 = $tmp252;
        err250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
        $l254:;
        panda$core$Bit $tmp258 = (($fn257) args233->$class->vtable[2])(args233);
        panda$core$Bit $tmp259 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp258);
        bool $tmp256 = $tmp259.value;
        if (!$tmp256) goto $l255;
        {
            int $tmp262;
            {
                panda$core$String* $tmp267 = (($fn266) args233->$class->vtable[3])(args233);
                $tmp265 = $tmp267;
                $tmp264 = $tmp265;
                a263 = $tmp264;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
                int $tmp270;
                {
                    $tmp272 = a263;
                    $match$161_13271 = $tmp272;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                    panda$core$Bit $tmp274 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s273);
                    if ($tmp274.value) {
                    {
                        if (((panda$core$Bit) { outFile245 != NULL }).value) {
                        {
                            (($fn276) err250->$class->vtable[19])(err250, &$s275);
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                        }
                        }
                        {
                            $tmp277 = outFile245;
                            panda$io$File* $tmp280 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp284 = (($fn283) args233->$class->vtable[4])(args233, &$s282);
                            $tmp281 = $tmp284;
                            panda$io$File$init$panda$core$String($tmp280, $tmp281);
                            $tmp279 = $tmp280;
                            $tmp278 = $tmp279;
                            outFile245 = $tmp278;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
                        }
                        panda$io$File* $tmp286 = panda$io$File$parent$R$panda$io$File$Q(outFile245);
                        $tmp285 = $tmp286;
                        panda$io$File$createDirectories($tmp285);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
                    }
                    }
                    else {
                    panda$core$Bit $tmp288 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s287);
                    if ($tmp288.value) {
                    {
                        int $tmp291;
                        {
                            panda$core$String* $tmp297 = (($fn296) args233->$class->vtable[4])(args233, &$s295);
                            $tmp294 = $tmp297;
                            $tmp293 = $tmp294;
                            level292 = $tmp293;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                            panda$core$Int64$nullable $tmp298 = panda$core$String$convert$R$panda$core$Int64$Q(level292);
                            optimizationLevel247 = ((panda$core$Int64) $tmp298.value);
                            panda$core$Bit $tmp300 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel247, ((panda$core$Int64) { 3 }));
                            bool $tmp299 = $tmp300.value;
                            if ($tmp299) goto $l301;
                            panda$core$Bit $tmp302 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel247, ((panda$core$Int64) { 0 }));
                            $tmp299 = $tmp302.value;
                            $l301:;
                            panda$core$Bit $tmp303 = { $tmp299 };
                            if ($tmp303.value) {
                            {
                                panda$io$OutputStream* $tmp305 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp304 = $tmp305;
                                (($fn307) $tmp304->$class->vtable[19])($tmp304, &$s306);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp291 = -1;
                        goto $l289;
                        $l289:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level292));
                        level292 = NULL;
                        switch ($tmp291) {
                            case -1: goto $l308;
                        }
                        $l308:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp310 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s309);
                    if ($tmp310.value) {
                    {
                        int $tmp313;
                        {
                            panda$core$String* $tmp319 = (($fn318) args233->$class->vtable[4])(args233, &$s317);
                            $tmp316 = $tmp319;
                            $tmp315 = $tmp316;
                            level314 = $tmp315;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                            panda$core$Int64$nullable $tmp320 = panda$core$String$convert$R$panda$core$Int64$Q(level314);
                            safetyLevel248 = ((panda$core$Int64) $tmp320.value);
                            panda$core$Bit $tmp322 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel248, ((panda$core$Int64) { 3 }));
                            bool $tmp321 = $tmp322.value;
                            if ($tmp321) goto $l323;
                            panda$core$Bit $tmp324 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel248, ((panda$core$Int64) { 0 }));
                            $tmp321 = $tmp324.value;
                            $l323:;
                            panda$core$Bit $tmp325 = { $tmp321 };
                            if ($tmp325.value) {
                            {
                                panda$io$OutputStream* $tmp327 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp326 = $tmp327;
                                (($fn329) $tmp326->$class->vtable[19])($tmp326, &$s328);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp313 = -1;
                        goto $l311;
                        $l311:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level314));
                        level314 = NULL;
                        switch ($tmp313) {
                            case -1: goto $l330;
                        }
                        $l330:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp332 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s331);
                    if ($tmp332.value) {
                    {
                        int $tmp335;
                        {
                            if (((panda$core$Bit) { format249.nonnull }).value) {
                            {
                                (($fn337) err250->$class->vtable[19])(err250, &$s336);
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                            panda$core$String* $tmp343 = (($fn342) args233->$class->vtable[4])(args233, &$s341);
                            $tmp340 = $tmp343;
                            $tmp339 = $tmp340;
                            f338 = $tmp339;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                            int $tmp346;
                            {
                                $tmp348 = f338;
                                $match$189_21347 = $tmp348;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
                                panda$core$Bit $tmp350 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21347, &$s349);
                                if ($tmp350.value) {
                                {
                                    format249 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp352 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21347, &$s351);
                                if ($tmp352.value) {
                                {
                                    format249 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp354 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21347, &$s353);
                                if ($tmp354.value) {
                                {
                                    format249 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp356 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21347, &$s355);
                                if ($tmp356.value) {
                                {
                                    format249 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$189_21347, &$s357);
                                if ($tmp358.value) {
                                {
                                    format249 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s361, f338);
                                    $tmp360 = $tmp362;
                                    panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp360, &$s363);
                                    $tmp359 = $tmp364;
                                    (($fn365) err250->$class->vtable[19])(err250, $tmp359);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
                                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp346 = -1;
                            goto $l344;
                            $l344:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
                            switch ($tmp346) {
                                case -1: goto $l366;
                            }
                            $l366:;
                        }
                        $tmp335 = -1;
                        goto $l333;
                        $l333:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f338));
                        f338 = NULL;
                        switch ($tmp335) {
                            case -1: goto $l367;
                        }
                        $l367:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp369 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s368);
                    if ($tmp369.value) {
                    {
                        panda$io$File* $tmp371 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp375 = (($fn374) args233->$class->vtable[4])(args233, &$s373);
                        $tmp372 = $tmp375;
                        panda$io$File$init$panda$core$String($tmp371, $tmp372);
                        $tmp370 = $tmp371;
                        panda$collections$Array$add$panda$collections$Array$T(imports241, ((panda$core$Object*) $tmp370));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp372));
                    }
                    }
                    else {
                    panda$core$Bit $tmp377 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s376);
                    if ($tmp377.value) {
                    {
                        {
                            $tmp378 = self->llvmDir;
                            panda$io$File* $tmp381 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp385 = (($fn384) args233->$class->vtable[4])(args233, &$s383);
                            $tmp382 = $tmp385;
                            panda$io$File$init$panda$core$String($tmp381, $tmp382);
                            $tmp380 = $tmp381;
                            $tmp379 = $tmp380;
                            self->llvmDir = $tmp379;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp379));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp380));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp378));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp387 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s386);
                    if ($tmp387.value) {
                    {
                        {
                            $tmp388 = self->triple;
                            panda$core$String* $tmp393 = (($fn392) args233->$class->vtable[4])(args233, &$s391);
                            $tmp390 = $tmp393;
                            $tmp389 = $tmp390;
                            self->triple = $tmp389;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp395 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$161_13271, &$s394);
                    if ($tmp395.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s396);
                        panda$core$String* $tmp398 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp397 = $tmp398;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp397));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp400 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a263, &$s399);
                        if ($tmp400.value) {
                        {
                            panda$io$File* $tmp402 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp402, a263);
                            $tmp401 = $tmp402;
                            panda$collections$Array$add$panda$collections$Array$T(sources237, ((panda$core$Object*) $tmp401));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s405, a263);
                            $tmp404 = $tmp406;
                            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s407);
                            $tmp403 = $tmp408;
                            (($fn409) err250->$class->vtable[19])(err250, $tmp403);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
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
                }
                $tmp270 = -1;
                goto $l268;
                $l268:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
                switch ($tmp270) {
                    case -1: goto $l410;
                }
                $l410:;
            }
            $tmp262 = -1;
            goto $l260;
            $l260:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a263));
            a263 = NULL;
            switch ($tmp262) {
                case -1: goto $l411;
            }
            $l411:;
        }
        goto $l254;
        $l255:;
        {
            $tmp412 = self->opt;
            panda$io$File* $tmp416 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s415);
            $tmp414 = $tmp416;
            $tmp413 = $tmp414;
            self->opt = $tmp413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
        }
        {
            $tmp417 = self->llc;
            panda$io$File* $tmp421 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s420);
            $tmp419 = $tmp421;
            $tmp418 = $tmp419;
            self->llc = $tmp418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
        }
        {
            $tmp422 = self->gcc;
            panda$io$File* $tmp425 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp425, &$s426);
            $tmp424 = $tmp425;
            $tmp423 = $tmp424;
            self->gcc = $tmp423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        }
        panda$core$Int64 $tmp427 = panda$collections$Array$get_count$R$panda$core$Int64(sources237);
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp427, ((panda$core$Int64) { 0 }));
        if ($tmp428.value) {
        {
            (($fn430) err250->$class->vtable[19])(err250, &$s429);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        if (((panda$core$Bit) { !format249.nonnull }).value) {
        {
            format249 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
        }
        }
        if (((panda$core$Bit) { outFile245 == NULL }).value) {
        {
            panda$core$Int64 $tmp431 = panda$collections$Array$get_count$R$panda$core$Int64(sources237);
            panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp431, ((panda$core$Int64) { 1 }));
            if ($tmp432.value) {
            {
                int $tmp435;
                {
                    memset(&extension436, 0, sizeof(extension436));
                    {
                        $match$232_21437 = format249;
                        panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21437.value), ((panda$core$Int64) { 918 }));
                        if ($tmp438.value) {
                        {
                            {
                                $tmp439 = extension436;
                                $tmp440 = &$s441;
                                extension436 = $tmp440;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21437.value), ((panda$core$Int64) { 919 }));
                        if ($tmp442.value) {
                        {
                            {
                                $tmp443 = extension436;
                                $tmp444 = &$s445;
                                extension436 = $tmp444;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21437.value), ((panda$core$Int64) { 920 }));
                        if ($tmp446.value) {
                        {
                            {
                                $tmp447 = extension436;
                                $tmp448 = &$s449;
                                extension436 = $tmp448;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21437.value), ((panda$core$Int64) { 921 }));
                        if ($tmp450.value) {
                        {
                            {
                                $tmp451 = extension436;
                                $tmp452 = &$s453;
                                extension436 = $tmp452;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp452));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$232_21437.value), ((panda$core$Int64) { 917 }));
                        if ($tmp454.value) {
                        {
                            {
                                $tmp455 = extension436;
                                $tmp456 = &$s457;
                                extension436 = $tmp456;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp456));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                            }
                        }
                        }
                        else {
                        {
                            if (((panda$core$Bit) { false }).value) goto $l458; else goto $l459;
                            $l459:;
                            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s460, (panda$core$Int64) { 237 });
                            abort();
                            $l458:;
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp461 = outFile245;
                        panda$core$Object* $tmp465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources237, ((panda$core$Int64) { 0 }));
                        $tmp464 = $tmp465;
                        panda$io$File* $tmp466 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp464), extension436);
                        $tmp463 = $tmp466;
                        $tmp462 = $tmp463;
                        outFile245 = $tmp462;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp463));
                        panda$core$Panda$unref$panda$core$Object($tmp464);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
                    }
                }
                $tmp435 = -1;
                goto $l433;
                $l433:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension436));
                switch ($tmp435) {
                    case -1: goto $l467;
                }
                $l467:;
            }
            }
            else {
            {
                (($fn469) err250->$class->vtable[19])(err250, &$s468);
                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
            }
            }
        }
        }
        memset(&errorCount470, 0, sizeof(errorCount470));
        {
            int $tmp473;
            {
                memset(&cg474, 0, sizeof(cg474));
                {
                    $match$251_17475 = format249;
                    panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17475.value), ((panda$core$Int64) { 917 }));
                    bool $tmp477 = $tmp478.value;
                    if ($tmp477) goto $l479;
                    panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17475.value), ((panda$core$Int64) { 918 }));
                    $tmp477 = $tmp480.value;
                    $l479:;
                    panda$core$Bit $tmp481 = { $tmp477 };
                    bool $tmp476 = $tmp481.value;
                    if ($tmp476) goto $l482;
                    panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17475.value), ((panda$core$Int64) { 919 }));
                    $tmp476 = $tmp483.value;
                    $l482:;
                    panda$core$Bit $tmp484 = { $tmp476 };
                    if ($tmp484.value) {
                    {
                        {
                            $tmp485 = cg474;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp488 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(216, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp492 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile245, &$s491);
                            $tmp490 = $tmp492;
                            panda$io$OutputStream* $tmp493 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp490);
                            $tmp489 = $tmp493;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp488, self->triple, $tmp489);
                            $tmp487 = $tmp488;
                            $tmp486 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp487);
                            cg474 = $tmp486;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17475.value), ((panda$core$Int64) { 920 }));
                    if ($tmp494.value) {
                    {
                        {
                            $tmp495 = cg474;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp498 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp498, outFile245);
                            $tmp497 = $tmp498;
                            $tmp496 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp497);
                            cg474 = $tmp496;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$251_17475.value), ((panda$core$Int64) { 921 }));
                    if ($tmp499.value) {
                    {
                        {
                            $tmp500 = cg474;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp503 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp503, outFile245);
                            $tmp502 = $tmp503;
                            $tmp501 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp502);
                            cg474 = $tmp501;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
                        }
                    }
                    }
                    else {
                    {
                        if (((panda$core$Bit) { false }).value) goto $l504; else goto $l505;
                        $l505:;
                        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s506, (panda$core$Int64) { 259 });
                        abort();
                        $l504:;
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp510 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp510, self->pandaHome, ((panda$collections$ListView*) imports241), optimizationLevel247, safetyLevel248);
                $tmp509 = $tmp510;
                $tmp508 = $tmp509;
                settings507 = $tmp508;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp508));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
                panda$threads$MessageQueue* $tmp514 = (panda$threads$MessageQueue*) pandaObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
                panda$threads$MessageQueue$init($tmp514);
                $tmp513 = $tmp514;
                $tmp512 = $tmp513;
                errorQueue511 = $tmp512;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp512));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
                org$pandalanguage$pandac$Compiler* $tmp518 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(193, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp518, errorQueue511, cg474, settings507);
                $tmp517 = $tmp518;
                $tmp516 = $tmp517;
                compiler515 = $tmp516;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp517));
                {
                    int $tmp521;
                    {
                        ITable* $tmp525 = ((panda$collections$Iterable*) sources237)->$class->itable;
                        while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp525 = $tmp525->next;
                        }
                        $fn527 $tmp526 = $tmp525->methods[0];
                        panda$collections$Iterator* $tmp528 = $tmp526(((panda$collections$Iterable*) sources237));
                        $tmp524 = $tmp528;
                        $tmp523 = $tmp524;
                        Iter$264$13522 = $tmp523;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp524));
                        $l529:;
                        ITable* $tmp532 = Iter$264$13522->$class->itable;
                        while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp532 = $tmp532->next;
                        }
                        $fn534 $tmp533 = $tmp532->methods[0];
                        panda$core$Bit $tmp535 = $tmp533(Iter$264$13522);
                        panda$core$Bit $tmp536 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp535);
                        bool $tmp531 = $tmp536.value;
                        if (!$tmp531) goto $l530;
                        {
                            int $tmp539;
                            {
                                ITable* $tmp543 = Iter$264$13522->$class->itable;
                                while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp543 = $tmp543->next;
                                }
                                $fn545 $tmp544 = $tmp543->methods[1];
                                panda$core$Object* $tmp546 = $tmp544(Iter$264$13522);
                                $tmp542 = $tmp546;
                                $tmp541 = ((panda$io$File*) $tmp542);
                                s540 = $tmp541;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                                panda$core$Panda$unref$panda$core$Object($tmp542);
                                {
                                    int $tmp549;
                                    {
                                        panda$collections$ListView* $tmp554 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler515, s540);
                                        $tmp553 = $tmp554;
                                        ITable* $tmp555 = ((panda$collections$Iterable*) $tmp553)->$class->itable;
                                        while ($tmp555->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp555 = $tmp555->next;
                                        }
                                        $fn557 $tmp556 = $tmp555->methods[0];
                                        panda$collections$Iterator* $tmp558 = $tmp556(((panda$collections$Iterable*) $tmp553));
                                        $tmp552 = $tmp558;
                                        $tmp551 = $tmp552;
                                        Iter$265$17550 = $tmp551;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                                        $l559:;
                                        ITable* $tmp562 = Iter$265$17550->$class->itable;
                                        while ($tmp562->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp562 = $tmp562->next;
                                        }
                                        $fn564 $tmp563 = $tmp562->methods[0];
                                        panda$core$Bit $tmp565 = $tmp563(Iter$265$17550);
                                        panda$core$Bit $tmp566 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp565);
                                        bool $tmp561 = $tmp566.value;
                                        if (!$tmp561) goto $l560;
                                        {
                                            int $tmp569;
                                            {
                                                ITable* $tmp573 = Iter$265$17550->$class->itable;
                                                while ($tmp573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp573 = $tmp573->next;
                                                }
                                                $fn575 $tmp574 = $tmp573->methods[1];
                                                panda$core$Object* $tmp576 = $tmp574(Iter$265$17550);
                                                $tmp572 = $tmp576;
                                                $tmp571 = ((org$pandalanguage$pandac$ClassDecl*) $tmp572);
                                                cl570 = $tmp571;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp571));
                                                panda$core$Panda$unref$panda$core$Object($tmp572);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler515, cl570);
                                            }
                                            $tmp569 = -1;
                                            goto $l567;
                                            $l567:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl570));
                                            cl570 = NULL;
                                            switch ($tmp569) {
                                                case -1: goto $l577;
                                            }
                                            $l577:;
                                        }
                                        goto $l559;
                                        $l560:;
                                    }
                                    $tmp549 = -1;
                                    goto $l547;
                                    $l547:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$265$17550));
                                    Iter$265$17550 = NULL;
                                    switch ($tmp549) {
                                        case -1: goto $l578;
                                    }
                                    $l578:;
                                }
                            }
                            $tmp539 = -1;
                            goto $l537;
                            $l537:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s540));
                            s540 = NULL;
                            switch ($tmp539) {
                                case -1: goto $l579;
                            }
                            $l579:;
                        }
                        goto $l529;
                        $l530:;
                    }
                    $tmp521 = -1;
                    goto $l519;
                    $l519:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$13522));
                    Iter$264$13522 = NULL;
                    switch ($tmp521) {
                        case -1: goto $l580;
                    }
                    $l580:;
                }
                {
                    int $tmp583;
                    {
                        ITable* $tmp587 = ((panda$collections$Iterable*) sources237)->$class->itable;
                        while ($tmp587->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp587 = $tmp587->next;
                        }
                        $fn589 $tmp588 = $tmp587->methods[0];
                        panda$collections$Iterator* $tmp590 = $tmp588(((panda$collections$Iterable*) sources237));
                        $tmp586 = $tmp590;
                        $tmp585 = $tmp586;
                        Iter$269$13584 = $tmp585;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp585));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                        $l591:;
                        ITable* $tmp594 = Iter$269$13584->$class->itable;
                        while ($tmp594->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp594 = $tmp594->next;
                        }
                        $fn596 $tmp595 = $tmp594->methods[0];
                        panda$core$Bit $tmp597 = $tmp595(Iter$269$13584);
                        panda$core$Bit $tmp598 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp597);
                        bool $tmp593 = $tmp598.value;
                        if (!$tmp593) goto $l592;
                        {
                            int $tmp601;
                            {
                                ITable* $tmp605 = Iter$269$13584->$class->itable;
                                while ($tmp605->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp605 = $tmp605->next;
                                }
                                $fn607 $tmp606 = $tmp605->methods[1];
                                panda$core$Object* $tmp608 = $tmp606(Iter$269$13584);
                                $tmp604 = $tmp608;
                                $tmp603 = ((panda$io$File*) $tmp604);
                                s602 = $tmp603;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp603));
                                panda$core$Panda$unref$panda$core$Object($tmp604);
                                org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler515, s602);
                            }
                            $tmp601 = -1;
                            goto $l599;
                            $l599:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s602));
                            s602 = NULL;
                            switch ($tmp601) {
                                case -1: goto $l609;
                            }
                            $l609:;
                        }
                        goto $l591;
                        $l592:;
                    }
                    $tmp583 = -1;
                    goto $l581;
                    $l581:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$269$13584));
                    Iter$269$13584 = NULL;
                    switch ($tmp583) {
                        case -1: goto $l610;
                    }
                    $l610:;
                }
                org$pandalanguage$pandac$Compiler$finish(compiler515);
                panda$core$Int64 $tmp611 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(errorQueue511);
                errorCount470 = $tmp611;
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp612, ((panda$core$Int64) { 0 }), errorCount470, ((panda$core$Bit) { false }));
                int64_t $tmp614 = $tmp612.min.value;
                panda$core$Int64 i613 = { $tmp614 };
                int64_t $tmp616 = $tmp612.max.value;
                bool $tmp617 = $tmp612.inclusive.value;
                if ($tmp617) goto $l624; else goto $l625;
                $l624:;
                if ($tmp614 <= $tmp616) goto $l618; else goto $l620;
                $l625:;
                if ($tmp614 < $tmp616) goto $l618; else goto $l620;
                $l618:;
                {
                    int $tmp628;
                    {
                        panda$core$Immutable* $tmp632 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(errorQueue511);
                        $tmp631 = $tmp632;
                        $tmp630 = ((org$pandalanguage$pandac$Compiler$Error*) $tmp631);
                        error629 = $tmp630;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp630));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
                        panda$core$String* $tmp640 = panda$io$File$name$R$panda$core$String(error629->file);
                        $tmp639 = $tmp640;
                        panda$core$String* $tmp641 = panda$core$String$convert$R$panda$core$String($tmp639);
                        $tmp638 = $tmp641;
                        panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, &$s642);
                        $tmp637 = $tmp643;
                        org$pandalanguage$pandac$Position$wrapper* $tmp645;
                        $tmp645 = (org$pandalanguage$pandac$Position$wrapper*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
                        $tmp645->value = error629->position;
                        $tmp644 = ((panda$core$Object*) $tmp645);
                        panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp637, $tmp644);
                        $tmp636 = $tmp646;
                        panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s647);
                        $tmp635 = $tmp648;
                        panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp635, error629->message);
                        $tmp634 = $tmp649;
                        panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, &$s650);
                        $tmp633 = $tmp651;
                        panda$io$Console$printLine$panda$core$String($tmp633);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp634));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp635));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                        panda$core$Panda$unref$panda$core$Object($tmp644);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                    }
                    $tmp628 = -1;
                    goto $l626;
                    $l626:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) error629));
                    error629 = NULL;
                    switch ($tmp628) {
                        case -1: goto $l652;
                    }
                    $l652:;
                }
                $l621:;
                int64_t $tmp654 = $tmp616 - i613.value;
                if ($tmp617) goto $l655; else goto $l656;
                $l655:;
                if ((uint64_t) $tmp654 >= 1) goto $l653; else goto $l620;
                $l656:;
                if ((uint64_t) $tmp654 > 1) goto $l653; else goto $l620;
                $l653:;
                i613.value += 1;
                goto $l618;
                $l620:;
            }
            $tmp473 = -1;
            goto $l471;
            $l471:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler515));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) errorQueue511));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg474));
            settings507 = NULL;
            errorQueue511 = NULL;
            compiler515 = NULL;
            switch ($tmp473) {
                case -1: goto $l659;
            }
            $l659:;
        }
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount470, ((panda$core$Int64) { 0 }));
        if ($tmp660.value) {
        {
            {
                $match$281_17661 = format249;
                panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$281_17661.value), ((panda$core$Int64) { 918 }));
                if ($tmp662.value) {
                {
                    int $tmp665;
                    {
                        panda$io$File* $tmp671 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile245, &$s670);
                        $tmp669 = $tmp671;
                        panda$io$File* $tmp672 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp669, optimizationLevel247);
                        $tmp668 = $tmp672;
                        $tmp667 = $tmp668;
                        optimized666 = $tmp667;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
                        panda$io$File* $tmp676 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized666);
                        $tmp675 = $tmp676;
                        $tmp674 = $tmp675;
                        assembly673 = $tmp674;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp674));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
                        panda$io$File* $tmp678 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly673, outFile245);
                        $tmp677 = $tmp678;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                    }
                    $tmp665 = -1;
                    goto $l663;
                    $l663:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly673));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized666));
                    optimized666 = NULL;
                    assembly673 = NULL;
                    switch ($tmp665) {
                        case -1: goto $l679;
                    }
                    $l679:;
                }
                }
                else {
                panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$281_17661.value), ((panda$core$Int64) { 919 }));
                if ($tmp680.value) {
                {
                    int $tmp683;
                    {
                        panda$io$File* $tmp689 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile245, &$s688);
                        $tmp687 = $tmp689;
                        panda$io$File* $tmp690 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp687, optimizationLevel247);
                        $tmp686 = $tmp690;
                        $tmp685 = $tmp686;
                        optimized684 = $tmp685;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
                        panda$io$File* $tmp694 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized684);
                        $tmp693 = $tmp694;
                        $tmp692 = $tmp693;
                        assembly691 = $tmp692;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp692));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                        panda$io$File* $tmp696 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly691, outFile245);
                        $tmp695 = $tmp696;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
                    }
                    $tmp683 = -1;
                    goto $l681;
                    $l681:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly691));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized684));
                    optimized684 = NULL;
                    assembly691 = NULL;
                    switch ($tmp683) {
                        case -1: goto $l697;
                    }
                    $l697:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount470, ((panda$core$Int64) { 1 }));
            if ($tmp698.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s699);
            }
            }
            else {
            {
                panda$core$String* $tmp702 = panda$core$Int64$convert$R$panda$core$String(errorCount470);
                $tmp701 = $tmp702;
                panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, &$s703);
                $tmp700 = $tmp704;
                panda$io$Console$printLine$panda$core$String($tmp700);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
            }
            }
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    $tmp232 = -1;
    goto $l230;
    $l230:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err250));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile245));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports241));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources237));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args233));
    args233 = NULL;
    sources237 = NULL;
    imports241 = NULL;
    err250 = NULL;
    switch ($tmp232) {
        case -1: goto $l705;
    }
    $l705:;
}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* p_s) {
    panda$core$Bit $returnValue706;
    panda$core$Bit $tmp708 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(p_s, &$s707);
    $returnValue706 = $tmp708;
    return $returnValue706;
}
void pandaMain(panda$collections$ListView* p_args) {
    panda$core$Object* $tmp717;
    panda$core$Range$LTpanda$core$Int64$GT $tmp725;
    panda$core$Object* $tmp739;
    org$pandalanguage$pandac$Main* $tmp741;
    panda$collections$ListView* $tmp743;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp744;
    org$pandalanguage$pandac$Main* $tmp755;
    ITable* $tmp711 = ((panda$collections$CollectionView*) p_args)->$class->itable;
    while ($tmp711->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp711 = $tmp711->next;
    }
    $fn713 $tmp712 = $tmp711->methods[0];
    panda$core$Int64 $tmp714 = $tmp712(((panda$collections$CollectionView*) p_args));
    panda$core$Bit $tmp715 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp714, ((panda$core$Int64) { 1 }));
    bool $tmp710 = $tmp715.value;
    if (!$tmp710) goto $l716;
    ITable* $tmp718 = p_args->$class->itable;
    while ($tmp718->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp718 = $tmp718->next;
    }
    $fn720 $tmp719 = $tmp718->methods[0];
    panda$core$Object* $tmp721 = $tmp719(p_args, ((panda$core$Int64) { 1 }));
    $tmp717 = $tmp721;
    panda$core$Bit $tmp723 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((panda$core$String*) $tmp717), &$s722);
    $tmp710 = $tmp723.value;
    panda$core$Panda$unref$panda$core$Object($tmp717);
    $l716:;
    panda$core$Bit $tmp724 = { $tmp710 };
    if ($tmp724.value) {
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp725, ((panda$core$Int64) { 0 }), ((panda$core$Int64) { 1000 }), ((panda$core$Bit) { false }));
        int64_t $tmp727 = $tmp725.min.value;
        panda$core$Int64 i726 = { $tmp727 };
        int64_t $tmp729 = $tmp725.max.value;
        bool $tmp730 = $tmp725.inclusive.value;
        if ($tmp730) goto $l737; else goto $l738;
        $l737:;
        if ($tmp727 <= $tmp729) goto $l731; else goto $l733;
        $l738:;
        if ($tmp727 < $tmp729) goto $l731; else goto $l733;
        $l731:;
        {
            panda$core$Int64$wrapper* $tmp740;
            $tmp740 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp740->value = i726;
            $tmp739 = ((panda$core$Object*) $tmp740);
            panda$io$Console$printLine$panda$core$Object($tmp739);
            panda$core$Panda$unref$panda$core$Object($tmp739);
            org$pandalanguage$pandac$Main* $tmp742 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
            org$pandalanguage$pandac$Main$init($tmp742);
            $tmp741 = $tmp742;
            panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp744, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
            ITable* $tmp745 = p_args->$class->itable;
            while ($tmp745->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp745 = $tmp745->next;
            }
            $fn747 $tmp746 = $tmp745->methods[2];
            panda$collections$ListView* $tmp748 = $tmp746(p_args, $tmp744);
            $tmp743 = $tmp748;
            org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp741, $tmp743);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp741));
        }
        $l734:;
        int64_t $tmp750 = $tmp729 - i726.value;
        if ($tmp730) goto $l751; else goto $l752;
        $l751:;
        if ((uint64_t) $tmp750 >= 1) goto $l749; else goto $l733;
        $l752:;
        if ((uint64_t) $tmp750 > 1) goto $l749; else goto $l733;
        $l749:;
        i726.value += 1;
        goto $l731;
        $l733:;
    }
    }
    org$pandalanguage$pandac$Main* $tmp756 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp756);
    $tmp755 = $tmp756;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp755, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp755));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp759;
    {
    }
    $tmp759 = -1;
    goto $l757;
    $l757:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp759) {
        case -1: goto $l760;
    }
    $l760:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

