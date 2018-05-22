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
#include "panda/core/Method.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "org/pandalanguage/pandac/ClassDecl.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File, org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn48)(panda$io$InputStream*);
typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn78)(panda$io$InputStream*);
typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn106)(panda$io$InputStream*);
typedef void (*$fn108)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn136)(panda$io$InputStream*);
typedef void (*$fn138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn148)(panda$io$OutputStream*);
typedef void (*$fn150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn151)(panda$io$OutputStream*);
typedef void (*$fn153)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn155)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn183)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn192)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn202)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn209)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn222)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn233)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn244)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn263)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn268)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn291)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn300)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn310)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn318)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn356)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn395)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn446)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn453)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn464)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn476)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn483)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn494)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn516)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn527)(panda$collections$Iterator*);

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
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c\x2e", 3, 1497068, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x61\x6e\x64\x61", 7, 156128788678270, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s232 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest21));
    dest21 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args26));
    args26 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p41));
    p41 = NULL;
    switch ($tmp15) {
        case 1: goto $l54;
        case 0: goto $l19;
    }
    $l56:;
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) dest60));
    dest60 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args65));
    args65 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p71));
    p71 = NULL;
    switch ($tmp59) {
        case 0: goto $l85;
    }
    $l87:;
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
    panda$core$Int64 $tmp109;
    panda$io$File* $returnValue111;
    panda$io$File* $tmp112;
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
        panda$core$String* $tmp107 = (($fn106) p99->error->$class->vtable[6])(p99->error);
        $tmp105 = $tmp107;
        (($fn108) $tmp103->$class->vtable[16])($tmp103, $tmp105);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp109, p99);
        panda$core$Bit $tmp110 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp109, ((panda$core$Int64) { 0 }));
        if ($tmp110.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp112 = p_dest;
        $returnValue111 = $tmp112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp112));
        $tmp90 = 0;
        goto $l88;
        $l113:;
        return $returnValue111;
    }
    $l88:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args91));
    args91 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p99));
    p99 = NULL;
    switch ($tmp90) {
        case 0: goto $l113;
    }
    $l115:;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args119 = NULL;
    panda$collections$Array* $tmp120;
    panda$collections$Array* $tmp121;
    panda$core$System$Process* p129 = NULL;
    panda$core$System$Process* $tmp130;
    panda$core$System$Process* $tmp131;
    panda$io$OutputStream* $tmp133;
    panda$core$String* $tmp135;
    panda$core$Int64 $tmp139;
    panda$io$File* $returnValue141;
    panda$io$File* $tmp142;
    int $tmp118;
    {
        panda$collections$Array* $tmp122 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp122);
        $tmp121 = $tmp122;
        $tmp120 = $tmp121;
        args119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) p_assembly->path));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) &$s123));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) &$s124));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) &$s125));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) &$s126));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) &$s127));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) &$s128));
        panda$collections$Array$add$panda$collections$Array$T(args119, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp132 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args119));
        $tmp131 = $tmp132;
        $tmp130 = $tmp131;
        p129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
        panda$io$OutputStream* $tmp134 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp133 = $tmp134;
        panda$core$String* $tmp137 = (($fn136) p129->error->$class->vtable[6])(p129->error);
        $tmp135 = $tmp137;
        (($fn138) $tmp133->$class->vtable[16])($tmp133, $tmp135);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp139, p129);
        panda$core$Bit $tmp140 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp139, ((panda$core$Int64) { 0 }));
        if ($tmp140.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp142 = p_dest;
        $returnValue141 = $tmp142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
        $tmp118 = 0;
        goto $l116;
        $l143:;
        return $returnValue141;
    }
    $l116:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args119));
    args119 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p129));
    p129 = NULL;
    switch ($tmp118) {
        case 0: goto $l143;
    }
    $l145:;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn147) p_out->$class->vtable[19])(p_out, &$s146);
    (($fn148) p_out->$class->vtable[17])(p_out);
    (($fn150) p_out->$class->vtable[19])(p_out, &$s149);
    (($fn151) p_out->$class->vtable[17])(p_out);
    (($fn153) p_out->$class->vtable[19])(p_out, &$s152);
    (($fn155) p_out->$class->vtable[19])(p_out, &$s154);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args159 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp160;
    org$pandalanguage$pandac$Main$Arguments* $tmp161;
    panda$collections$Array* sources163 = NULL;
    panda$collections$Array* $tmp164;
    panda$collections$Array* $tmp165;
    panda$collections$Array* imports167 = NULL;
    panda$collections$Array* $tmp168;
    panda$collections$Array* $tmp169;
    panda$io$File* outFile171 = NULL;
    panda$io$File* $tmp172;
    panda$core$Int64 optimizationLevel173;
    panda$core$Int64 safetyLevel174;
    panda$core$Int64$nullable format175;
    panda$io$OutputStream* err176 = NULL;
    panda$io$OutputStream* $tmp177;
    panda$io$OutputStream* $tmp178;
    panda$core$String* a189 = NULL;
    panda$core$String* $tmp190;
    panda$core$String* $tmp191;
    panda$core$String* $match$150_13197 = NULL;
    panda$core$String* $tmp198;
    panda$io$File* $tmp203;
    panda$io$File* $tmp204;
    panda$io$File* $tmp205;
    panda$core$String* $tmp207;
    panda$io$File* $tmp211;
    panda$core$String* level218 = NULL;
    panda$core$String* $tmp219;
    panda$core$String* $tmp220;
    panda$io$OutputStream* $tmp230;
    panda$core$String* level240 = NULL;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$io$OutputStream* $tmp252;
    panda$core$String* f264 = NULL;
    panda$core$String* $tmp265;
    panda$core$String* $tmp266;
    panda$core$String* $match$178_21273 = NULL;
    panda$core$String* $tmp274;
    panda$core$String* $tmp285;
    panda$core$String* $tmp286;
    panda$io$File* $tmp296;
    panda$core$String* $tmp298;
    panda$io$File* $tmp304;
    panda$io$File* $tmp305;
    panda$io$File* $tmp306;
    panda$core$String* $tmp308;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$String* $tmp316;
    panda$core$String* $tmp323;
    panda$io$File* $tmp327;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$io$File* $tmp338;
    panda$io$File* $tmp339;
    panda$io$File* $tmp340;
    panda$io$File* $tmp343;
    panda$io$File* $tmp344;
    panda$io$File* $tmp345;
    panda$io$File* $tmp348;
    panda$io$File* $tmp349;
    panda$io$File* $tmp350;
    panda$core$String* extension362 = NULL;
    panda$core$Int64$nullable $match$221_21363;
    panda$core$String* $tmp365;
    panda$core$String* $tmp366;
    panda$core$String* $tmp369;
    panda$core$String* $tmp370;
    panda$core$String* $tmp373;
    panda$core$String* $tmp374;
    panda$core$String* $tmp377;
    panda$core$String* $tmp378;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    panda$io$File* $tmp384;
    panda$io$File* $tmp385;
    panda$io$File* $tmp386;
    panda$core$Object* $tmp387;
    panda$core$String* $tmp391;
    panda$core$Int64 errorCount396;
    org$pandalanguage$pandac$CodeGenerator* cg400 = NULL;
    panda$core$Int64$nullable $match$240_17401;
    org$pandalanguage$pandac$CodeGenerator* $tmp411;
    org$pandalanguage$pandac$CodeGenerator* $tmp412;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp413;
    panda$io$OutputStream* $tmp415;
    panda$io$File* $tmp416;
    org$pandalanguage$pandac$CodeGenerator* $tmp421;
    org$pandalanguage$pandac$CodeGenerator* $tmp422;
    org$pandalanguage$pandac$HCodeGenerator* $tmp423;
    org$pandalanguage$pandac$CodeGenerator* $tmp426;
    org$pandalanguage$pandac$CodeGenerator* $tmp427;
    org$pandalanguage$pandac$CCodeGenerator* $tmp428;
    org$pandalanguage$pandac$Compiler$Settings* settings430 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp431;
    org$pandalanguage$pandac$Compiler$Settings* $tmp432;
    org$pandalanguage$pandac$Compiler* compiler434 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp435;
    org$pandalanguage$pandac$Compiler* $tmp436;
    panda$collections$Iterator* Iter$252$13441 = NULL;
    panda$collections$Iterator* $tmp442;
    panda$collections$Iterator* $tmp443;
    panda$io$File* s459 = NULL;
    panda$io$File* $tmp460;
    panda$core$Object* $tmp461;
    panda$collections$Iterator* Iter$253$17469 = NULL;
    panda$collections$Iterator* $tmp470;
    panda$collections$Iterator* $tmp471;
    panda$collections$ListView* $tmp472;
    org$pandalanguage$pandac$ClassDecl* cl489 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp490;
    panda$core$Object* $tmp491;
    panda$collections$Iterator* Iter$258$17504 = NULL;
    panda$collections$Iterator* $tmp505;
    panda$collections$Iterator* $tmp506;
    panda$io$File* s522 = NULL;
    panda$io$File* $tmp523;
    panda$core$Object* $tmp524;
    panda$core$Int64$nullable $match$267_17533;
    panda$io$File* optimized538 = NULL;
    panda$io$File* $tmp539;
    panda$io$File* $tmp540;
    panda$io$File* $tmp541;
    panda$io$File* assembly545 = NULL;
    panda$io$File* $tmp546;
    panda$io$File* $tmp547;
    panda$io$File* $tmp549;
    panda$io$File* optimized556 = NULL;
    panda$io$File* $tmp557;
    panda$io$File* $tmp558;
    panda$io$File* $tmp559;
    panda$io$File* assembly563 = NULL;
    panda$io$File* $tmp564;
    panda$io$File* $tmp565;
    panda$io$File* $tmp567;
    panda$core$String* $tmp572;
    panda$core$String* $tmp573;
    int $tmp158;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp162 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp162, p_rawArgs);
        $tmp161 = $tmp162;
        $tmp160 = $tmp161;
        args159 = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
        panda$collections$Array* $tmp166 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp166);
        $tmp165 = $tmp166;
        $tmp164 = $tmp165;
        sources163 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$collections$Array* $tmp170 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp170);
        $tmp169 = $tmp170;
        $tmp168 = $tmp169;
        imports167 = $tmp168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$collections$Array$add$panda$collections$Array$T(imports167, ((panda$core$Object*) self->pandaHome));
        $tmp172 = NULL;
        outFile171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        optimizationLevel173 = ((panda$core$Int64) { 3 });
        safetyLevel174 = ((panda$core$Int64) { 3 });
        format175 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp179 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp178 = $tmp179;
        $tmp177 = $tmp178;
        err176 = $tmp177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
        $l180:;
        panda$core$Bit $tmp184 = (($fn183) args159->$class->vtable[2])(args159);
        panda$core$Bit $tmp185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp184);
        bool $tmp182 = $tmp185.value;
        if (!$tmp182) goto $l181;
        {
            int $tmp188;
            {
                panda$core$String* $tmp193 = (($fn192) args159->$class->vtable[3])(args159);
                $tmp191 = $tmp193;
                $tmp190 = $tmp191;
                a189 = $tmp190;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
                int $tmp196;
                {
                    $tmp198 = a189;
                    $match$150_13197 = $tmp198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                    panda$core$Bit $tmp200 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s199);
                    if ($tmp200.value) {
                    {
                        if (((panda$core$Bit) { outFile171 != NULL }).value) {
                        {
                            (($fn202) err176->$class->vtable[19])(err176, &$s201);
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                        }
                        }
                        {
                            $tmp203 = outFile171;
                            panda$io$File* $tmp206 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp210 = (($fn209) args159->$class->vtable[4])(args159, &$s208);
                            $tmp207 = $tmp210;
                            panda$io$File$init$panda$core$String($tmp206, $tmp207);
                            $tmp205 = $tmp206;
                            $tmp204 = $tmp205;
                            outFile171 = $tmp204;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                        }
                        panda$io$File* $tmp212 = panda$io$File$parent$R$panda$io$File$Q(outFile171);
                        $tmp211 = $tmp212;
                        panda$io$File$createDirectories($tmp211);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp211));
                    }
                    }
                    else {
                    panda$core$Bit $tmp214 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s213);
                    if ($tmp214.value) {
                    {
                        int $tmp217;
                        {
                            panda$core$String* $tmp223 = (($fn222) args159->$class->vtable[4])(args159, &$s221);
                            $tmp220 = $tmp223;
                            $tmp219 = $tmp220;
                            level218 = $tmp219;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
                            panda$core$Int64$nullable $tmp224 = panda$core$String$convert$R$panda$core$Int64$Q(level218);
                            optimizationLevel173 = ((panda$core$Int64) $tmp224.value);
                            panda$core$Bit $tmp226 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel173, ((panda$core$Int64) { 3 }));
                            bool $tmp225 = $tmp226.value;
                            if ($tmp225) goto $l227;
                            panda$core$Bit $tmp228 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel173, ((panda$core$Int64) { 0 }));
                            $tmp225 = $tmp228.value;
                            $l227:;
                            panda$core$Bit $tmp229 = { $tmp225 };
                            if ($tmp229.value) {
                            {
                                panda$io$OutputStream* $tmp231 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp230 = $tmp231;
                                (($fn233) $tmp230->$class->vtable[19])($tmp230, &$s232);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp217 = -1;
                        goto $l215;
                        $l215:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level218));
                        level218 = NULL;
                        switch ($tmp217) {
                            case -1: goto $l234;
                        }
                        $l234:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp236 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s235);
                    if ($tmp236.value) {
                    {
                        int $tmp239;
                        {
                            panda$core$String* $tmp245 = (($fn244) args159->$class->vtable[4])(args159, &$s243);
                            $tmp242 = $tmp245;
                            $tmp241 = $tmp242;
                            level240 = $tmp241;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                            panda$core$Int64$nullable $tmp246 = panda$core$String$convert$R$panda$core$Int64$Q(level240);
                            safetyLevel174 = ((panda$core$Int64) $tmp246.value);
                            panda$core$Bit $tmp248 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel174, ((panda$core$Int64) { 3 }));
                            bool $tmp247 = $tmp248.value;
                            if ($tmp247) goto $l249;
                            panda$core$Bit $tmp250 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel174, ((panda$core$Int64) { 0 }));
                            $tmp247 = $tmp250.value;
                            $l249:;
                            panda$core$Bit $tmp251 = { $tmp247 };
                            if ($tmp251.value) {
                            {
                                panda$io$OutputStream* $tmp253 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp252 = $tmp253;
                                (($fn255) $tmp252->$class->vtable[19])($tmp252, &$s254);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp239 = -1;
                        goto $l237;
                        $l237:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level240));
                        level240 = NULL;
                        switch ($tmp239) {
                            case -1: goto $l256;
                        }
                        $l256:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp258 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s257);
                    if ($tmp258.value) {
                    {
                        int $tmp261;
                        {
                            if (((panda$core$Bit) { format175.nonnull }).value) {
                            {
                                (($fn263) err176->$class->vtable[19])(err176, &$s262);
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                            panda$core$String* $tmp269 = (($fn268) args159->$class->vtable[4])(args159, &$s267);
                            $tmp266 = $tmp269;
                            $tmp265 = $tmp266;
                            f264 = $tmp265;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
                            int $tmp272;
                            {
                                $tmp274 = f264;
                                $match$178_21273 = $tmp274;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
                                panda$core$Bit $tmp276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21273, &$s275);
                                if ($tmp276.value) {
                                {
                                    format175 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp278 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21273, &$s277);
                                if ($tmp278.value) {
                                {
                                    format175 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp280 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21273, &$s279);
                                if ($tmp280.value) {
                                {
                                    format175 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp282 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21273, &$s281);
                                if ($tmp282.value) {
                                {
                                    format175 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$178_21273, &$s283);
                                if ($tmp284.value) {
                                {
                                    format175 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s287, f264);
                                    $tmp286 = $tmp288;
                                    panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s289);
                                    $tmp285 = $tmp290;
                                    (($fn291) err176->$class->vtable[19])(err176, $tmp285);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp272 = -1;
                            goto $l270;
                            $l270:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                            switch ($tmp272) {
                                case -1: goto $l292;
                            }
                            $l292:;
                        }
                        $tmp261 = -1;
                        goto $l259;
                        $l259:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f264));
                        f264 = NULL;
                        switch ($tmp261) {
                            case -1: goto $l293;
                        }
                        $l293:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp295 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s294);
                    if ($tmp295.value) {
                    {
                        panda$io$File* $tmp297 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp301 = (($fn300) args159->$class->vtable[4])(args159, &$s299);
                        $tmp298 = $tmp301;
                        panda$io$File$init$panda$core$String($tmp297, $tmp298);
                        $tmp296 = $tmp297;
                        panda$collections$Array$add$panda$collections$Array$T(imports167, ((panda$core$Object*) $tmp296));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                    }
                    }
                    else {
                    panda$core$Bit $tmp303 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s302);
                    if ($tmp303.value) {
                    {
                        {
                            $tmp304 = self->llvmDir;
                            panda$io$File* $tmp307 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp311 = (($fn310) args159->$class->vtable[4])(args159, &$s309);
                            $tmp308 = $tmp311;
                            panda$io$File$init$panda$core$String($tmp307, $tmp308);
                            $tmp306 = $tmp307;
                            $tmp305 = $tmp306;
                            self->llvmDir = $tmp305;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp313 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s312);
                    if ($tmp313.value) {
                    {
                        {
                            $tmp314 = self->triple;
                            panda$core$String* $tmp319 = (($fn318) args159->$class->vtable[4])(args159, &$s317);
                            $tmp316 = $tmp319;
                            $tmp315 = $tmp316;
                            self->triple = $tmp315;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp315));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp321 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$150_13197, &$s320);
                    if ($tmp321.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s322);
                        panda$core$String* $tmp324 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp323 = $tmp324;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp326 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a189, &$s325);
                        if ($tmp326.value) {
                        {
                            panda$io$File* $tmp328 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp328, a189);
                            $tmp327 = $tmp328;
                            panda$collections$Array$add$panda$collections$Array$T(sources163, ((panda$core$Object*) $tmp327));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s331, a189);
                            $tmp330 = $tmp332;
                            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s333);
                            $tmp329 = $tmp334;
                            (($fn335) err176->$class->vtable[19])(err176, $tmp329);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
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
                $tmp196 = -1;
                goto $l194;
                $l194:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                switch ($tmp196) {
                    case -1: goto $l336;
                }
                $l336:;
            }
            $tmp188 = -1;
            goto $l186;
            $l186:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a189));
            a189 = NULL;
            switch ($tmp188) {
                case -1: goto $l337;
            }
            $l337:;
        }
        goto $l180;
        $l181:;
        {
            $tmp338 = self->opt;
            panda$io$File* $tmp342 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s341);
            $tmp340 = $tmp342;
            $tmp339 = $tmp340;
            self->opt = $tmp339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp338));
        }
        {
            $tmp343 = self->llc;
            panda$io$File* $tmp347 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s346);
            $tmp345 = $tmp347;
            $tmp344 = $tmp345;
            self->llc = $tmp344;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
        }
        {
            $tmp348 = self->gcc;
            panda$io$File* $tmp351 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp351, &$s352);
            $tmp350 = $tmp351;
            $tmp349 = $tmp350;
            self->gcc = $tmp349;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
        }
        panda$core$Int64 $tmp353 = panda$collections$Array$get_count$R$panda$core$Int64(sources163);
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp353, ((panda$core$Int64) { 0 }));
        if ($tmp354.value) {
        {
            (($fn356) err176->$class->vtable[19])(err176, &$s355);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        if (((panda$core$Bit) { !format175.nonnull }).value) {
        {
            format175 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
        }
        }
        if (((panda$core$Bit) { outFile171 == NULL }).value) {
        {
            panda$core$Int64 $tmp357 = panda$collections$Array$get_count$R$panda$core$Int64(sources163);
            panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp357, ((panda$core$Int64) { 1 }));
            if ($tmp358.value) {
            {
                int $tmp361;
                {
                    memset(&extension362, 0, sizeof(extension362));
                    {
                        $match$221_21363 = format175;
                        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21363.value), ((panda$core$Int64) { 918 }));
                        if ($tmp364.value) {
                        {
                            {
                                $tmp365 = extension362;
                                $tmp366 = &$s367;
                                extension362 = $tmp366;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp365));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21363.value), ((panda$core$Int64) { 919 }));
                        if ($tmp368.value) {
                        {
                            {
                                $tmp369 = extension362;
                                $tmp370 = &$s371;
                                extension362 = $tmp370;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21363.value), ((panda$core$Int64) { 920 }));
                        if ($tmp372.value) {
                        {
                            {
                                $tmp373 = extension362;
                                $tmp374 = &$s375;
                                extension362 = $tmp374;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp373));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21363.value), ((panda$core$Int64) { 921 }));
                        if ($tmp376.value) {
                        {
                            {
                                $tmp377 = extension362;
                                $tmp378 = &$s379;
                                extension362 = $tmp378;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$221_21363.value), ((panda$core$Int64) { 917 }));
                        if ($tmp380.value) {
                        {
                            {
                                $tmp381 = extension362;
                                $tmp382 = &$s383;
                                extension362 = $tmp382;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                            }
                        }
                        }
                        else {
                        {
                            PANDA_ASSERT(((panda$core$Bit) { false }).value);
                        }
                        }
                        }
                        }
                        }
                        }
                    }
                    {
                        $tmp384 = outFile171;
                        panda$core$Object* $tmp388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources163, ((panda$core$Int64) { 0 }));
                        $tmp387 = $tmp388;
                        panda$io$File* $tmp389 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp387), extension362);
                        $tmp386 = $tmp389;
                        $tmp385 = $tmp386;
                        outFile171 = $tmp385;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp385));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp386));
                        panda$core$Panda$unref$panda$core$Object($tmp387);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                    }
                }
                $tmp361 = -1;
                goto $l359;
                $l359:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension362));
                switch ($tmp361) {
                    case -1: goto $l390;
                }
                $l390:;
            }
            }
            else {
            {
                panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s392, &$s393);
                $tmp391 = $tmp394;
                (($fn395) err176->$class->vtable[19])(err176, $tmp391);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp391));
                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
            }
            }
        }
        }
        memset(&errorCount396, 0, sizeof(errorCount396));
        {
            int $tmp399;
            {
                memset(&cg400, 0, sizeof(cg400));
                {
                    $match$240_17401 = format175;
                    panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17401.value), ((panda$core$Int64) { 917 }));
                    bool $tmp403 = $tmp404.value;
                    if ($tmp403) goto $l405;
                    panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17401.value), ((panda$core$Int64) { 918 }));
                    $tmp403 = $tmp406.value;
                    $l405:;
                    panda$core$Bit $tmp407 = { $tmp403 };
                    bool $tmp402 = $tmp407.value;
                    if ($tmp402) goto $l408;
                    panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17401.value), ((panda$core$Int64) { 919 }));
                    $tmp402 = $tmp409.value;
                    $l408:;
                    panda$core$Bit $tmp410 = { $tmp402 };
                    if ($tmp410.value) {
                    {
                        {
                            $tmp411 = cg400;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp414 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp418 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile171, &$s417);
                            $tmp416 = $tmp418;
                            panda$io$OutputStream* $tmp419 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp416);
                            $tmp415 = $tmp419;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp414, self->triple, $tmp415);
                            $tmp413 = $tmp414;
                            $tmp412 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp413);
                            cg400 = $tmp412;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17401.value), ((panda$core$Int64) { 920 }));
                    if ($tmp420.value) {
                    {
                        {
                            $tmp421 = cg400;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp424 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp424, outFile171);
                            $tmp423 = $tmp424;
                            $tmp422 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp423);
                            cg400 = $tmp422;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp421));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$240_17401.value), ((panda$core$Int64) { 921 }));
                    if ($tmp425.value) {
                    {
                        {
                            $tmp426 = cg400;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp429 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp429, outFile171);
                            $tmp428 = $tmp429;
                            $tmp427 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp428);
                            cg400 = $tmp427;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp426));
                        }
                    }
                    }
                    else {
                    {
                        PANDA_ASSERT(((panda$core$Bit) { false }).value);
                    }
                    }
                    }
                    }
                }
                org$pandalanguage$pandac$Compiler$Settings* $tmp433 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp433, self->pandaHome, ((panda$collections$ListView*) imports167), optimizationLevel173, safetyLevel174);
                $tmp432 = $tmp433;
                $tmp431 = $tmp432;
                settings430 = $tmp431;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
                org$pandalanguage$pandac$Compiler* $tmp437 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(184, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp437, cg400, settings430);
                $tmp436 = $tmp437;
                $tmp435 = $tmp436;
                compiler434 = $tmp435;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp435));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp436));
                {
                    int $tmp440;
                    {
                        ITable* $tmp444 = ((panda$collections$Iterable*) sources163)->$class->itable;
                        while ($tmp444->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp444 = $tmp444->next;
                        }
                        $fn446 $tmp445 = $tmp444->methods[0];
                        panda$collections$Iterator* $tmp447 = $tmp445(((panda$collections$Iterable*) sources163));
                        $tmp443 = $tmp447;
                        $tmp442 = $tmp443;
                        Iter$252$13441 = $tmp442;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp442));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
                        $l448:;
                        ITable* $tmp451 = Iter$252$13441->$class->itable;
                        while ($tmp451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp451 = $tmp451->next;
                        }
                        $fn453 $tmp452 = $tmp451->methods[0];
                        panda$core$Bit $tmp454 = $tmp452(Iter$252$13441);
                        panda$core$Bit $tmp455 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp454);
                        bool $tmp450 = $tmp455.value;
                        if (!$tmp450) goto $l449;
                        {
                            int $tmp458;
                            {
                                ITable* $tmp462 = Iter$252$13441->$class->itable;
                                while ($tmp462->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp462 = $tmp462->next;
                                }
                                $fn464 $tmp463 = $tmp462->methods[1];
                                panda$core$Object* $tmp465 = $tmp463(Iter$252$13441);
                                $tmp461 = $tmp465;
                                $tmp460 = ((panda$io$File*) $tmp461);
                                s459 = $tmp460;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp460));
                                panda$core$Panda$unref$panda$core$Object($tmp461);
                                {
                                    int $tmp468;
                                    {
                                        panda$collections$ListView* $tmp473 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler434, s459);
                                        $tmp472 = $tmp473;
                                        ITable* $tmp474 = ((panda$collections$Iterable*) $tmp472)->$class->itable;
                                        while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp474 = $tmp474->next;
                                        }
                                        $fn476 $tmp475 = $tmp474->methods[0];
                                        panda$collections$Iterator* $tmp477 = $tmp475(((panda$collections$Iterable*) $tmp472));
                                        $tmp471 = $tmp477;
                                        $tmp470 = $tmp471;
                                        Iter$253$17469 = $tmp470;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                                        $l478:;
                                        ITable* $tmp481 = Iter$253$17469->$class->itable;
                                        while ($tmp481->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp481 = $tmp481->next;
                                        }
                                        $fn483 $tmp482 = $tmp481->methods[0];
                                        panda$core$Bit $tmp484 = $tmp482(Iter$253$17469);
                                        panda$core$Bit $tmp485 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp484);
                                        bool $tmp480 = $tmp485.value;
                                        if (!$tmp480) goto $l479;
                                        {
                                            int $tmp488;
                                            {
                                                ITable* $tmp492 = Iter$253$17469->$class->itable;
                                                while ($tmp492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp492 = $tmp492->next;
                                                }
                                                $fn494 $tmp493 = $tmp492->methods[1];
                                                panda$core$Object* $tmp495 = $tmp493(Iter$253$17469);
                                                $tmp491 = $tmp495;
                                                $tmp490 = ((org$pandalanguage$pandac$ClassDecl*) $tmp491);
                                                cl489 = $tmp490;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp490));
                                                panda$core$Panda$unref$panda$core$Object($tmp491);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler434, cl489);
                                            }
                                            $tmp488 = -1;
                                            goto $l486;
                                            $l486:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl489));
                                            cl489 = NULL;
                                            switch ($tmp488) {
                                                case -1: goto $l496;
                                            }
                                            $l496:;
                                        }
                                        goto $l478;
                                        $l479:;
                                    }
                                    $tmp468 = -1;
                                    goto $l466;
                                    $l466:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17469));
                                    Iter$253$17469 = NULL;
                                    switch ($tmp468) {
                                        case -1: goto $l497;
                                    }
                                    $l497:;
                                }
                            }
                            $tmp458 = -1;
                            goto $l456;
                            $l456:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s459));
                            s459 = NULL;
                            switch ($tmp458) {
                                case -1: goto $l498;
                            }
                            $l498:;
                        }
                        goto $l448;
                        $l449:;
                    }
                    $tmp440 = -1;
                    goto $l438;
                    $l438:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$252$13441));
                    Iter$252$13441 = NULL;
                    switch ($tmp440) {
                        case -1: goto $l499;
                    }
                    $l499:;
                }
                panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler434->errorCount, ((panda$core$Int64) { 0 }));
                if ($tmp500.value) {
                {
                    {
                        int $tmp503;
                        {
                            ITable* $tmp507 = ((panda$collections$Iterable*) sources163)->$class->itable;
                            while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp507 = $tmp507->next;
                            }
                            $fn509 $tmp508 = $tmp507->methods[0];
                            panda$collections$Iterator* $tmp510 = $tmp508(((panda$collections$Iterable*) sources163));
                            $tmp506 = $tmp510;
                            $tmp505 = $tmp506;
                            Iter$258$17504 = $tmp505;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
                            $l511:;
                            ITable* $tmp514 = Iter$258$17504->$class->itable;
                            while ($tmp514->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp514 = $tmp514->next;
                            }
                            $fn516 $tmp515 = $tmp514->methods[0];
                            panda$core$Bit $tmp517 = $tmp515(Iter$258$17504);
                            panda$core$Bit $tmp518 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp517);
                            bool $tmp513 = $tmp518.value;
                            if (!$tmp513) goto $l512;
                            {
                                int $tmp521;
                                {
                                    ITable* $tmp525 = Iter$258$17504->$class->itable;
                                    while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp525 = $tmp525->next;
                                    }
                                    $fn527 $tmp526 = $tmp525->methods[1];
                                    panda$core$Object* $tmp528 = $tmp526(Iter$258$17504);
                                    $tmp524 = $tmp528;
                                    $tmp523 = ((panda$io$File*) $tmp524);
                                    s522 = $tmp523;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
                                    panda$core$Panda$unref$panda$core$Object($tmp524);
                                    org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler434, s522);
                                }
                                $tmp521 = -1;
                                goto $l519;
                                $l519:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s522));
                                s522 = NULL;
                                switch ($tmp521) {
                                    case -1: goto $l529;
                                }
                                $l529:;
                            }
                            goto $l511;
                            $l512:;
                        }
                        $tmp503 = -1;
                        goto $l501;
                        $l501:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17504));
                        Iter$258$17504 = NULL;
                        switch ($tmp503) {
                            case -1: goto $l530;
                        }
                        $l530:;
                    }
                    org$pandalanguage$pandac$Compiler$finish(compiler434);
                }
                }
                errorCount396 = compiler434->errorCount;
            }
            $tmp399 = -1;
            goto $l397;
            $l397:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings430));
            settings430 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler434));
            compiler434 = NULL;
            switch ($tmp399) {
                case -1: goto $l531;
            }
            $l531:;
        }
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount396, ((panda$core$Int64) { 0 }));
        if ($tmp532.value) {
        {
            {
                $match$267_17533 = format175;
                panda$core$Bit $tmp534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$267_17533.value), ((panda$core$Int64) { 918 }));
                if ($tmp534.value) {
                {
                    int $tmp537;
                    {
                        panda$io$File* $tmp543 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile171, &$s542);
                        $tmp541 = $tmp543;
                        panda$io$File* $tmp544 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp541, optimizationLevel173);
                        $tmp540 = $tmp544;
                        $tmp539 = $tmp540;
                        optimized538 = $tmp539;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp539));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
                        panda$io$File* $tmp548 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized538);
                        $tmp547 = $tmp548;
                        $tmp546 = $tmp547;
                        assembly545 = $tmp546;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp546));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                        panda$io$File* $tmp550 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly545, outFile171);
                        $tmp549 = $tmp550;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                    }
                    $tmp537 = -1;
                    goto $l535;
                    $l535:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized538));
                    optimized538 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly545));
                    assembly545 = NULL;
                    switch ($tmp537) {
                        case -1: goto $l551;
                    }
                    $l551:;
                }
                }
                else {
                panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$267_17533.value), ((panda$core$Int64) { 919 }));
                if ($tmp552.value) {
                {
                    int $tmp555;
                    {
                        panda$io$File* $tmp561 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile171, &$s560);
                        $tmp559 = $tmp561;
                        panda$io$File* $tmp562 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp559, optimizationLevel173);
                        $tmp558 = $tmp562;
                        $tmp557 = $tmp558;
                        optimized556 = $tmp557;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                        panda$io$File* $tmp566 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized556);
                        $tmp565 = $tmp566;
                        $tmp564 = $tmp565;
                        assembly563 = $tmp564;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp564));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                        panda$io$File* $tmp568 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly563, outFile171);
                        $tmp567 = $tmp568;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                    }
                    $tmp555 = -1;
                    goto $l553;
                    $l553:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized556));
                    optimized556 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly563));
                    assembly563 = NULL;
                    switch ($tmp555) {
                        case -1: goto $l569;
                    }
                    $l569:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount396, ((panda$core$Int64) { 1 }));
            if ($tmp570.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s571);
            }
            }
            else {
            {
                panda$core$String* $tmp574 = panda$core$Int64$convert$R$panda$core$String(errorCount396);
                $tmp573 = $tmp574;
                panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s575);
                $tmp572 = $tmp576;
                panda$io$Console$printLine$panda$core$String($tmp572);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
            }
            }
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    $tmp158 = -1;
    goto $l156;
    $l156:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args159));
    args159 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources163));
    sources163 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports167));
    imports167 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile171));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err176));
    err176 = NULL;
    switch ($tmp158) {
        case -1: goto $l577;
    }
    $l577:;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp578;
    org$pandalanguage$pandac$Main* $tmp579 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp579);
    $tmp578 = $tmp579;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp578, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp582;
    {
    }
    $tmp582 = -1;
    goto $l580;
    $l580:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp582) {
        case -1: goto $l583;
    }
    $l583:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

