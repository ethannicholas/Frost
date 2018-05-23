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
typedef panda$core$String* (*$fn112)(panda$io$InputStream*);
typedef void (*$fn114)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn142)(panda$io$InputStream*);
typedef void (*$fn144)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn148)(panda$io$InputStream*);
typedef void (*$fn150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn160)(panda$io$OutputStream*);
typedef void (*$fn162)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn163)(panda$io$OutputStream*);
typedef void (*$fn165)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn167)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn195)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn204)(org$pandalanguage$pandac$Main$Arguments*);
typedef void (*$fn214)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn221)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn234)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn245)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn256)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn275)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn280)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn303)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn312)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn322)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn330)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn407)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn458)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn465)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn476)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn488)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn495)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn506)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn521)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn528)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn539)(panda$collections$Iterator*);

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
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20\x70\x61\x6e\x64\x61\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 33, -6559674094402608523, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e\x70\x61\x6e\x64\x61\x27\x2e", 38, 893305705248289499, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x6c\x6c\x76\x6d\x5f\x64\x69\x72", 10, -5843666376324264096, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x74\x68\x65\x20\x4c\x4c\x56\x4d\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 28, -1635669018571610865, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x74\x72\x69\x70\x6c\x65", 8, 15702175691418347, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x4c\x56\x4d\x20\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6c\x65", 18, -7134459153622240993, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x70\x61\x75\x73\x65", 6, 1546230582488, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x72\x65\x73\x73\x20\x65\x6e\x74\x65\x72\x20\x74\x6f\x20\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2e\x2e\x2e", 26, -6692426184993127966, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x27", 23, -8362580201345122776, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6f\x70\x74", 7, 212357566734200, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x69\x6e\x2f\x6c\x6c\x63", 7, 212357566703176, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x67\x63\x63", 12, -6558246839139055402, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20", 64, 3394507457011302119, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6c\x65", 4, 210233217, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };

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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args91));
    args91 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p99));
    p99 = NULL;
    switch ($tmp90) {
        case 0: goto $l119;
    }
    $l121:;
}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(org$pandalanguage$pandac$Main* self, panda$io$File* p_assembly, panda$io$File* p_dest) {
    panda$collections$Array* args125 = NULL;
    panda$collections$Array* $tmp126;
    panda$collections$Array* $tmp127;
    panda$core$System$Process* p135 = NULL;
    panda$core$System$Process* $tmp136;
    panda$core$System$Process* $tmp137;
    panda$io$OutputStream* $tmp139;
    panda$core$String* $tmp141;
    panda$io$OutputStream* $tmp145;
    panda$core$String* $tmp147;
    panda$core$Int64 $tmp151;
    panda$io$File* $returnValue153;
    panda$io$File* $tmp154;
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
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s132));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s133));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) &$s134));
        panda$collections$Array$add$panda$collections$Array$T(args125, ((panda$core$Object*) p_dest->path));
        panda$core$System$Process* $tmp138 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q(self->gcc, ((panda$collections$ListView*) args125));
        $tmp137 = $tmp138;
        $tmp136 = $tmp137;
        p135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
        panda$io$OutputStream* $tmp140 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp139 = $tmp140;
        panda$core$String* $tmp143 = (($fn142) p135->output->$class->vtable[6])(p135->output);
        $tmp141 = $tmp143;
        (($fn144) $tmp139->$class->vtable[16])($tmp139, $tmp141);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$io$OutputStream* $tmp146 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp145 = $tmp146;
        panda$core$String* $tmp149 = (($fn148) p135->error->$class->vtable[6])(p135->error);
        $tmp147 = $tmp149;
        (($fn150) $tmp145->$class->vtable[16])($tmp145, $tmp147);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
        panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp151, p135);
        panda$core$Bit $tmp152 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp151, ((panda$core$Int64) { 0 }));
        if ($tmp152.value) {
        {
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        $tmp154 = p_dest;
        $returnValue153 = $tmp154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
        $tmp124 = 0;
        goto $l122;
        $l155:;
        return $returnValue153;
    }
    $l122:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args125));
    args125 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) p135));
    p135 = NULL;
    switch ($tmp124) {
        case 0: goto $l155;
    }
    $l157:;
}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* self, panda$io$OutputStream* p_out) {
    (($fn159) p_out->$class->vtable[19])(p_out, &$s158);
    (($fn160) p_out->$class->vtable[17])(p_out);
    (($fn162) p_out->$class->vtable[19])(p_out, &$s161);
    (($fn163) p_out->$class->vtable[17])(p_out);
    (($fn165) p_out->$class->vtable[19])(p_out, &$s164);
    (($fn167) p_out->$class->vtable[19])(p_out, &$s166);
}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* self, panda$collections$ListView* p_rawArgs) {
    org$pandalanguage$pandac$Main$Arguments* args171 = NULL;
    org$pandalanguage$pandac$Main$Arguments* $tmp172;
    org$pandalanguage$pandac$Main$Arguments* $tmp173;
    panda$collections$Array* sources175 = NULL;
    panda$collections$Array* $tmp176;
    panda$collections$Array* $tmp177;
    panda$collections$Array* imports179 = NULL;
    panda$collections$Array* $tmp180;
    panda$collections$Array* $tmp181;
    panda$io$File* outFile183 = NULL;
    panda$io$File* $tmp184;
    panda$core$Int64 optimizationLevel185;
    panda$core$Int64 safetyLevel186;
    panda$core$Int64$nullable format187;
    panda$io$OutputStream* err188 = NULL;
    panda$io$OutputStream* $tmp189;
    panda$io$OutputStream* $tmp190;
    panda$core$String* a201 = NULL;
    panda$core$String* $tmp202;
    panda$core$String* $tmp203;
    panda$core$String* $match$152_13209 = NULL;
    panda$core$String* $tmp210;
    panda$io$File* $tmp215;
    panda$io$File* $tmp216;
    panda$io$File* $tmp217;
    panda$core$String* $tmp219;
    panda$io$File* $tmp223;
    panda$core$String* level230 = NULL;
    panda$core$String* $tmp231;
    panda$core$String* $tmp232;
    panda$io$OutputStream* $tmp242;
    panda$core$String* level252 = NULL;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    panda$io$OutputStream* $tmp264;
    panda$core$String* f276 = NULL;
    panda$core$String* $tmp277;
    panda$core$String* $tmp278;
    panda$core$String* $match$180_21285 = NULL;
    panda$core$String* $tmp286;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$io$File* $tmp308;
    panda$core$String* $tmp310;
    panda$io$File* $tmp316;
    panda$io$File* $tmp317;
    panda$io$File* $tmp318;
    panda$core$String* $tmp320;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp335;
    panda$io$File* $tmp339;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$io$File* $tmp350;
    panda$io$File* $tmp351;
    panda$io$File* $tmp352;
    panda$io$File* $tmp355;
    panda$io$File* $tmp356;
    panda$io$File* $tmp357;
    panda$io$File* $tmp360;
    panda$io$File* $tmp361;
    panda$io$File* $tmp362;
    panda$core$String* extension374 = NULL;
    panda$core$Int64$nullable $match$223_21375;
    panda$core$String* $tmp377;
    panda$core$String* $tmp378;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    panda$core$String* $tmp385;
    panda$core$String* $tmp386;
    panda$core$String* $tmp389;
    panda$core$String* $tmp390;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$io$File* $tmp396;
    panda$io$File* $tmp397;
    panda$io$File* $tmp398;
    panda$core$Object* $tmp399;
    panda$core$String* $tmp403;
    panda$core$Int64 errorCount408;
    org$pandalanguage$pandac$CodeGenerator* cg412 = NULL;
    panda$core$Int64$nullable $match$242_17413;
    org$pandalanguage$pandac$CodeGenerator* $tmp423;
    org$pandalanguage$pandac$CodeGenerator* $tmp424;
    org$pandalanguage$pandac$LLVMCodeGenerator* $tmp425;
    panda$io$OutputStream* $tmp427;
    panda$io$File* $tmp428;
    org$pandalanguage$pandac$CodeGenerator* $tmp433;
    org$pandalanguage$pandac$CodeGenerator* $tmp434;
    org$pandalanguage$pandac$HCodeGenerator* $tmp435;
    org$pandalanguage$pandac$CodeGenerator* $tmp438;
    org$pandalanguage$pandac$CodeGenerator* $tmp439;
    org$pandalanguage$pandac$CCodeGenerator* $tmp440;
    org$pandalanguage$pandac$Compiler$Settings* settings442 = NULL;
    org$pandalanguage$pandac$Compiler$Settings* $tmp443;
    org$pandalanguage$pandac$Compiler$Settings* $tmp444;
    org$pandalanguage$pandac$Compiler* compiler446 = NULL;
    org$pandalanguage$pandac$Compiler* $tmp447;
    org$pandalanguage$pandac$Compiler* $tmp448;
    panda$collections$Iterator* Iter$254$13453 = NULL;
    panda$collections$Iterator* $tmp454;
    panda$collections$Iterator* $tmp455;
    panda$io$File* s471 = NULL;
    panda$io$File* $tmp472;
    panda$core$Object* $tmp473;
    panda$collections$Iterator* Iter$255$17481 = NULL;
    panda$collections$Iterator* $tmp482;
    panda$collections$Iterator* $tmp483;
    panda$collections$ListView* $tmp484;
    org$pandalanguage$pandac$ClassDecl* cl501 = NULL;
    org$pandalanguage$pandac$ClassDecl* $tmp502;
    panda$core$Object* $tmp503;
    panda$collections$Iterator* Iter$260$17516 = NULL;
    panda$collections$Iterator* $tmp517;
    panda$collections$Iterator* $tmp518;
    panda$io$File* s534 = NULL;
    panda$io$File* $tmp535;
    panda$core$Object* $tmp536;
    panda$core$Int64$nullable $match$269_17545;
    panda$io$File* optimized550 = NULL;
    panda$io$File* $tmp551;
    panda$io$File* $tmp552;
    panda$io$File* $tmp553;
    panda$io$File* assembly557 = NULL;
    panda$io$File* $tmp558;
    panda$io$File* $tmp559;
    panda$io$File* $tmp561;
    panda$io$File* optimized568 = NULL;
    panda$io$File* $tmp569;
    panda$io$File* $tmp570;
    panda$io$File* $tmp571;
    panda$io$File* assembly575 = NULL;
    panda$io$File* $tmp576;
    panda$io$File* $tmp577;
    panda$io$File* $tmp579;
    panda$core$String* $tmp584;
    panda$core$String* $tmp585;
    int $tmp170;
    {
        org$pandalanguage$pandac$Main$Arguments* $tmp174 = (org$pandalanguage$pandac$Main$Arguments*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
        org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp174, p_rawArgs);
        $tmp173 = $tmp174;
        $tmp172 = $tmp173;
        args171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$collections$Array* $tmp178 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp178);
        $tmp177 = $tmp178;
        $tmp176 = $tmp177;
        sources175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        panda$collections$Array* $tmp182 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        panda$collections$Array$init($tmp182);
        $tmp181 = $tmp182;
        $tmp180 = $tmp181;
        imports179 = $tmp180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
        panda$collections$Array$add$panda$collections$Array$T(imports179, ((panda$core$Object*) self->pandaHome));
        $tmp184 = NULL;
        outFile183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        optimizationLevel185 = ((panda$core$Int64) { 3 });
        safetyLevel186 = ((panda$core$Int64) { 3 });
        format187 = ((panda$core$Int64$nullable) { .nonnull = false });
        panda$io$OutputStream* $tmp191 = panda$io$Console$errorStream$R$panda$io$OutputStream();
        $tmp190 = $tmp191;
        $tmp189 = $tmp190;
        err188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        $l192:;
        panda$core$Bit $tmp196 = (($fn195) args171->$class->vtable[2])(args171);
        panda$core$Bit $tmp197 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp196);
        bool $tmp194 = $tmp197.value;
        if (!$tmp194) goto $l193;
        {
            int $tmp200;
            {
                panda$core$String* $tmp205 = (($fn204) args171->$class->vtable[3])(args171);
                $tmp203 = $tmp205;
                $tmp202 = $tmp203;
                a201 = $tmp202;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
                int $tmp208;
                {
                    $tmp210 = a201;
                    $match$152_13209 = $tmp210;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
                    panda$core$Bit $tmp212 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s211);
                    if ($tmp212.value) {
                    {
                        if (((panda$core$Bit) { outFile183 != NULL }).value) {
                        {
                            (($fn214) err188->$class->vtable[19])(err188, &$s213);
                            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                        }
                        }
                        {
                            $tmp215 = outFile183;
                            panda$io$File* $tmp218 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp222 = (($fn221) args171->$class->vtable[4])(args171, &$s220);
                            $tmp219 = $tmp222;
                            panda$io$File$init$panda$core$String($tmp218, $tmp219);
                            $tmp217 = $tmp218;
                            $tmp216 = $tmp217;
                            outFile183 = $tmp216;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp217));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp219));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp215));
                        }
                        panda$io$File* $tmp224 = panda$io$File$parent$R$panda$io$File$Q(outFile183);
                        $tmp223 = $tmp224;
                        panda$io$File$createDirectories($tmp223);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                    }
                    }
                    else {
                    panda$core$Bit $tmp226 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s225);
                    if ($tmp226.value) {
                    {
                        int $tmp229;
                        {
                            panda$core$String* $tmp235 = (($fn234) args171->$class->vtable[4])(args171, &$s233);
                            $tmp232 = $tmp235;
                            $tmp231 = $tmp232;
                            level230 = $tmp231;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
                            panda$core$Int64$nullable $tmp236 = panda$core$String$convert$R$panda$core$Int64$Q(level230);
                            optimizationLevel185 = ((panda$core$Int64) $tmp236.value);
                            panda$core$Bit $tmp238 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(optimizationLevel185, ((panda$core$Int64) { 3 }));
                            bool $tmp237 = $tmp238.value;
                            if ($tmp237) goto $l239;
                            panda$core$Bit $tmp240 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(optimizationLevel185, ((panda$core$Int64) { 0 }));
                            $tmp237 = $tmp240.value;
                            $l239:;
                            panda$core$Bit $tmp241 = { $tmp237 };
                            if ($tmp241.value) {
                            {
                                panda$io$OutputStream* $tmp243 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp242 = $tmp243;
                                (($fn245) $tmp242->$class->vtable[19])($tmp242, &$s244);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp229 = -1;
                        goto $l227;
                        $l227:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level230));
                        level230 = NULL;
                        switch ($tmp229) {
                            case -1: goto $l246;
                        }
                        $l246:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp248 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s247);
                    if ($tmp248.value) {
                    {
                        int $tmp251;
                        {
                            panda$core$String* $tmp257 = (($fn256) args171->$class->vtable[4])(args171, &$s255);
                            $tmp254 = $tmp257;
                            $tmp253 = $tmp254;
                            level252 = $tmp253;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
                            panda$core$Int64$nullable $tmp258 = panda$core$String$convert$R$panda$core$Int64$Q(level252);
                            safetyLevel186 = ((panda$core$Int64) $tmp258.value);
                            panda$core$Bit $tmp260 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(safetyLevel186, ((panda$core$Int64) { 3 }));
                            bool $tmp259 = $tmp260.value;
                            if ($tmp259) goto $l261;
                            panda$core$Bit $tmp262 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(safetyLevel186, ((panda$core$Int64) { 0 }));
                            $tmp259 = $tmp262.value;
                            $l261:;
                            panda$core$Bit $tmp263 = { $tmp259 };
                            if ($tmp263.value) {
                            {
                                panda$io$OutputStream* $tmp265 = panda$io$Console$errorStream$R$panda$io$OutputStream();
                                $tmp264 = $tmp265;
                                (($fn267) $tmp264->$class->vtable[19])($tmp264, &$s266);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                        }
                        $tmp251 = -1;
                        goto $l249;
                        $l249:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) level252));
                        level252 = NULL;
                        switch ($tmp251) {
                            case -1: goto $l268;
                        }
                        $l268:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp270 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s269);
                    if ($tmp270.value) {
                    {
                        int $tmp273;
                        {
                            if (((panda$core$Bit) { format187.nonnull }).value) {
                            {
                                (($fn275) err188->$class->vtable[19])(err188, &$s274);
                                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                            }
                            }
                            panda$core$String* $tmp281 = (($fn280) args171->$class->vtable[4])(args171, &$s279);
                            $tmp278 = $tmp281;
                            $tmp277 = $tmp278;
                            f276 = $tmp277;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                            int $tmp284;
                            {
                                $tmp286 = f276;
                                $match$180_21285 = $tmp286;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp286));
                                panda$core$Bit $tmp288 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s287);
                                if ($tmp288.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp290 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s289);
                                if ($tmp290.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 919 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp292 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s291);
                                if ($tmp292.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 917 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp294 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s293);
                                if ($tmp294.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 920 }), true });
                                }
                                }
                                else {
                                panda$core$Bit $tmp296 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$180_21285, &$s295);
                                if ($tmp296.value) {
                                {
                                    format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 921 }), true });
                                }
                                }
                                else {
                                {
                                    panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s299, f276);
                                    $tmp298 = $tmp300;
                                    panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s301);
                                    $tmp297 = $tmp302;
                                    (($fn303) err188->$class->vtable[19])(err188, $tmp297);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
                                    panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
                                }
                                }
                                }
                                }
                                }
                                }
                            }
                            $tmp284 = -1;
                            goto $l282;
                            $l282:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
                            switch ($tmp284) {
                                case -1: goto $l304;
                            }
                            $l304:;
                        }
                        $tmp273 = -1;
                        goto $l271;
                        $l271:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) f276));
                        f276 = NULL;
                        switch ($tmp273) {
                            case -1: goto $l305;
                        }
                        $l305:;
                    }
                    }
                    else {
                    panda$core$Bit $tmp307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s306);
                    if ($tmp307.value) {
                    {
                        panda$io$File* $tmp309 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                        panda$core$String* $tmp313 = (($fn312) args171->$class->vtable[4])(args171, &$s311);
                        $tmp310 = $tmp313;
                        panda$io$File$init$panda$core$String($tmp309, $tmp310);
                        $tmp308 = $tmp309;
                        panda$collections$Array$add$panda$collections$Array$T(imports179, ((panda$core$Object*) $tmp308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
                    }
                    }
                    else {
                    panda$core$Bit $tmp315 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s314);
                    if ($tmp315.value) {
                    {
                        {
                            $tmp316 = self->llvmDir;
                            panda$io$File* $tmp319 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$core$String* $tmp323 = (($fn322) args171->$class->vtable[4])(args171, &$s321);
                            $tmp320 = $tmp323;
                            panda$io$File$init$panda$core$String($tmp319, $tmp320);
                            $tmp318 = $tmp319;
                            $tmp317 = $tmp318;
                            self->llvmDir = $tmp317;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp316));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s324);
                    if ($tmp325.value) {
                    {
                        {
                            $tmp326 = self->triple;
                            panda$core$String* $tmp331 = (($fn330) args171->$class->vtable[4])(args171, &$s329);
                            $tmp328 = $tmp331;
                            $tmp327 = $tmp328;
                            self->triple = $tmp327;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp326));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp333 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$152_13209, &$s332);
                    if ($tmp333.value) {
                    {
                        panda$io$Console$printLine$panda$core$String(&$s334);
                        panda$core$String* $tmp336 = panda$io$Console$readLine$R$panda$core$String$Q();
                        $tmp335 = $tmp336;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
                    }
                    }
                    else {
                    {
                        panda$core$Bit $tmp338 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(a201, &$s337);
                        if ($tmp338.value) {
                        {
                            panda$io$File* $tmp340 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
                            panda$io$File$init$panda$core$String($tmp340, a201);
                            $tmp339 = $tmp340;
                            panda$collections$Array$add$panda$collections$Array$T(sources175, ((panda$core$Object*) $tmp339));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
                        }
                        }
                        else {
                        {
                            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s343, a201);
                            $tmp342 = $tmp344;
                            panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s345);
                            $tmp341 = $tmp346;
                            (($fn347) err188->$class->vtable[19])(err188, $tmp341);
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
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
                $tmp208 = -1;
                goto $l206;
                $l206:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
                switch ($tmp208) {
                    case -1: goto $l348;
                }
                $l348:;
            }
            $tmp200 = -1;
            goto $l198;
            $l198:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a201));
            a201 = NULL;
            switch ($tmp200) {
                case -1: goto $l349;
            }
            $l349:;
        }
        goto $l192;
        $l193:;
        {
            $tmp350 = self->opt;
            panda$io$File* $tmp354 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s353);
            $tmp352 = $tmp354;
            $tmp351 = $tmp352;
            self->opt = $tmp351;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
        }
        {
            $tmp355 = self->llc;
            panda$io$File* $tmp359 = panda$io$File$resolve$panda$core$String$R$panda$io$File(self->llvmDir, &$s358);
            $tmp357 = $tmp359;
            $tmp356 = $tmp357;
            self->llc = $tmp356;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
        }
        {
            $tmp360 = self->gcc;
            panda$io$File* $tmp363 = (panda$io$File*) pandaObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
            panda$io$File$init$panda$core$String($tmp363, &$s364);
            $tmp362 = $tmp363;
            $tmp361 = $tmp362;
            self->gcc = $tmp361;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
        }
        panda$core$Int64 $tmp365 = panda$collections$Array$get_count$R$panda$core$Int64(sources175);
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp365, ((panda$core$Int64) { 0 }));
        if ($tmp366.value) {
        {
            (($fn368) err188->$class->vtable[19])(err188, &$s367);
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
        if (((panda$core$Bit) { !format187.nonnull }).value) {
        {
            format187 = ((panda$core$Int64$nullable) { ((panda$core$Int64) { 918 }), true });
        }
        }
        if (((panda$core$Bit) { outFile183 == NULL }).value) {
        {
            panda$core$Int64 $tmp369 = panda$collections$Array$get_count$R$panda$core$Int64(sources175);
            panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp369, ((panda$core$Int64) { 1 }));
            if ($tmp370.value) {
            {
                int $tmp373;
                {
                    memset(&extension374, 0, sizeof(extension374));
                    {
                        $match$223_21375 = format187;
                        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 918 }));
                        if ($tmp376.value) {
                        {
                            {
                                $tmp377 = extension374;
                                $tmp378 = &$s379;
                                extension374 = $tmp378;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 919 }));
                        if ($tmp380.value) {
                        {
                            {
                                $tmp381 = extension374;
                                $tmp382 = &$s383;
                                extension374 = $tmp382;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 920 }));
                        if ($tmp384.value) {
                        {
                            {
                                $tmp385 = extension374;
                                $tmp386 = &$s387;
                                extension374 = $tmp386;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 921 }));
                        if ($tmp388.value) {
                        {
                            {
                                $tmp389 = extension374;
                                $tmp390 = &$s391;
                                extension374 = $tmp390;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp390));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
                            }
                        }
                        }
                        else {
                        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$223_21375.value), ((panda$core$Int64) { 917 }));
                        if ($tmp392.value) {
                        {
                            {
                                $tmp393 = extension374;
                                $tmp394 = &$s395;
                                extension374 = $tmp394;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp393));
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
                        $tmp396 = outFile183;
                        panda$core$Object* $tmp400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(sources175, ((panda$core$Int64) { 0 }));
                        $tmp399 = $tmp400;
                        panda$io$File* $tmp401 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp399), extension374);
                        $tmp398 = $tmp401;
                        $tmp397 = $tmp398;
                        outFile183 = $tmp397;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp398));
                        panda$core$Panda$unref$panda$core$Object($tmp399);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp396));
                    }
                }
                $tmp373 = -1;
                goto $l371;
                $l371:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) extension374));
                switch ($tmp373) {
                    case -1: goto $l402;
                }
                $l402:;
            }
            }
            else {
            {
                panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s404, &$s405);
                $tmp403 = $tmp406;
                (($fn407) err188->$class->vtable[19])(err188, $tmp403);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
            }
            }
        }
        }
        memset(&errorCount408, 0, sizeof(errorCount408));
        {
            int $tmp411;
            {
                memset(&cg412, 0, sizeof(cg412));
                {
                    $match$242_17413 = format187;
                    panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 917 }));
                    bool $tmp415 = $tmp416.value;
                    if ($tmp415) goto $l417;
                    panda$core$Bit $tmp418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 918 }));
                    $tmp415 = $tmp418.value;
                    $l417:;
                    panda$core$Bit $tmp419 = { $tmp415 };
                    bool $tmp414 = $tmp419.value;
                    if ($tmp414) goto $l420;
                    panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 919 }));
                    $tmp414 = $tmp421.value;
                    $l420:;
                    panda$core$Bit $tmp422 = { $tmp414 };
                    if ($tmp422.value) {
                    {
                        {
                            $tmp423 = cg412;
                            org$pandalanguage$pandac$LLVMCodeGenerator* $tmp426 = (org$pandalanguage$pandac$LLVMCodeGenerator*) pandaObjectAlloc(224, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
                            panda$io$File* $tmp430 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile183, &$s429);
                            $tmp428 = $tmp430;
                            panda$io$OutputStream* $tmp431 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp428);
                            $tmp427 = $tmp431;
                            org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp426, self->triple, $tmp427);
                            $tmp425 = $tmp426;
                            $tmp424 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp425);
                            cg412 = $tmp424;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 920 }));
                    if ($tmp432.value) {
                    {
                        {
                            $tmp433 = cg412;
                            org$pandalanguage$pandac$HCodeGenerator* $tmp436 = (org$pandalanguage$pandac$HCodeGenerator*) pandaObjectAlloc(129, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
                            org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp436, outFile183);
                            $tmp435 = $tmp436;
                            $tmp434 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp435);
                            cg412 = $tmp434;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$242_17413.value), ((panda$core$Int64) { 921 }));
                    if ($tmp437.value) {
                    {
                        {
                            $tmp438 = cg412;
                            org$pandalanguage$pandac$CCodeGenerator* $tmp441 = (org$pandalanguage$pandac$CCodeGenerator*) pandaObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
                            org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp441, outFile183);
                            $tmp440 = $tmp441;
                            $tmp439 = ((org$pandalanguage$pandac$CodeGenerator*) $tmp440);
                            cg412 = $tmp439;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
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
                org$pandalanguage$pandac$Compiler$Settings* $tmp445 = (org$pandalanguage$pandac$Compiler$Settings*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
                org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64($tmp445, self->pandaHome, ((panda$collections$ListView*) imports179), optimizationLevel185, safetyLevel186);
                $tmp444 = $tmp445;
                $tmp443 = $tmp444;
                settings442 = $tmp443;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                org$pandalanguage$pandac$Compiler* $tmp449 = (org$pandalanguage$pandac$Compiler*) pandaObjectAlloc(184, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
                org$pandalanguage$pandac$Compiler$init$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp449, cg412, settings442);
                $tmp448 = $tmp449;
                $tmp447 = $tmp448;
                compiler446 = $tmp447;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp447));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
                {
                    int $tmp452;
                    {
                        ITable* $tmp456 = ((panda$collections$Iterable*) sources175)->$class->itable;
                        while ($tmp456->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp456 = $tmp456->next;
                        }
                        $fn458 $tmp457 = $tmp456->methods[0];
                        panda$collections$Iterator* $tmp459 = $tmp457(((panda$collections$Iterable*) sources175));
                        $tmp455 = $tmp459;
                        $tmp454 = $tmp455;
                        Iter$254$13453 = $tmp454;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp454));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                        $l460:;
                        ITable* $tmp463 = Iter$254$13453->$class->itable;
                        while ($tmp463->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp463 = $tmp463->next;
                        }
                        $fn465 $tmp464 = $tmp463->methods[0];
                        panda$core$Bit $tmp466 = $tmp464(Iter$254$13453);
                        panda$core$Bit $tmp467 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp466);
                        bool $tmp462 = $tmp467.value;
                        if (!$tmp462) goto $l461;
                        {
                            int $tmp470;
                            {
                                ITable* $tmp474 = Iter$254$13453->$class->itable;
                                while ($tmp474->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp474 = $tmp474->next;
                                }
                                $fn476 $tmp475 = $tmp474->methods[1];
                                panda$core$Object* $tmp477 = $tmp475(Iter$254$13453);
                                $tmp473 = $tmp477;
                                $tmp472 = ((panda$io$File*) $tmp473);
                                s471 = $tmp472;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
                                panda$core$Panda$unref$panda$core$Object($tmp473);
                                {
                                    int $tmp480;
                                    {
                                        panda$collections$ListView* $tmp485 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT(compiler446, s471);
                                        $tmp484 = $tmp485;
                                        ITable* $tmp486 = ((panda$collections$Iterable*) $tmp484)->$class->itable;
                                        while ($tmp486->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                            $tmp486 = $tmp486->next;
                                        }
                                        $fn488 $tmp487 = $tmp486->methods[0];
                                        panda$collections$Iterator* $tmp489 = $tmp487(((panda$collections$Iterable*) $tmp484));
                                        $tmp483 = $tmp489;
                                        $tmp482 = $tmp483;
                                        Iter$255$17481 = $tmp482;
                                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
                                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
                                        $l490:;
                                        ITable* $tmp493 = Iter$255$17481->$class->itable;
                                        while ($tmp493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                            $tmp493 = $tmp493->next;
                                        }
                                        $fn495 $tmp494 = $tmp493->methods[0];
                                        panda$core$Bit $tmp496 = $tmp494(Iter$255$17481);
                                        panda$core$Bit $tmp497 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp496);
                                        bool $tmp492 = $tmp497.value;
                                        if (!$tmp492) goto $l491;
                                        {
                                            int $tmp500;
                                            {
                                                ITable* $tmp504 = Iter$255$17481->$class->itable;
                                                while ($tmp504->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                                    $tmp504 = $tmp504->next;
                                                }
                                                $fn506 $tmp505 = $tmp504->methods[1];
                                                panda$core$Object* $tmp507 = $tmp505(Iter$255$17481);
                                                $tmp503 = $tmp507;
                                                $tmp502 = ((org$pandalanguage$pandac$ClassDecl*) $tmp503);
                                                cl501 = $tmp502;
                                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp502));
                                                panda$core$Panda$unref$panda$core$Object($tmp503);
                                                org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl(compiler446, cl501);
                                            }
                                            $tmp500 = -1;
                                            goto $l498;
                                            $l498:;
                                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cl501));
                                            cl501 = NULL;
                                            switch ($tmp500) {
                                                case -1: goto $l508;
                                            }
                                            $l508:;
                                        }
                                        goto $l490;
                                        $l491:;
                                    }
                                    $tmp480 = -1;
                                    goto $l478;
                                    $l478:;
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$17481));
                                    Iter$255$17481 = NULL;
                                    switch ($tmp480) {
                                        case -1: goto $l509;
                                    }
                                    $l509:;
                                }
                            }
                            $tmp470 = -1;
                            goto $l468;
                            $l468:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s471));
                            s471 = NULL;
                            switch ($tmp470) {
                                case -1: goto $l510;
                            }
                            $l510:;
                        }
                        goto $l460;
                        $l461:;
                    }
                    $tmp452 = -1;
                    goto $l450;
                    $l450:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$254$13453));
                    Iter$254$13453 = NULL;
                    switch ($tmp452) {
                        case -1: goto $l511;
                    }
                    $l511:;
                }
                panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(compiler446->errorCount, ((panda$core$Int64) { 0 }));
                if ($tmp512.value) {
                {
                    {
                        int $tmp515;
                        {
                            ITable* $tmp519 = ((panda$collections$Iterable*) sources175)->$class->itable;
                            while ($tmp519->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp519 = $tmp519->next;
                            }
                            $fn521 $tmp520 = $tmp519->methods[0];
                            panda$collections$Iterator* $tmp522 = $tmp520(((panda$collections$Iterable*) sources175));
                            $tmp518 = $tmp522;
                            $tmp517 = $tmp518;
                            Iter$260$17516 = $tmp517;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
                            $l523:;
                            ITable* $tmp526 = Iter$260$17516->$class->itable;
                            while ($tmp526->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp526 = $tmp526->next;
                            }
                            $fn528 $tmp527 = $tmp526->methods[0];
                            panda$core$Bit $tmp529 = $tmp527(Iter$260$17516);
                            panda$core$Bit $tmp530 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp529);
                            bool $tmp525 = $tmp530.value;
                            if (!$tmp525) goto $l524;
                            {
                                int $tmp533;
                                {
                                    ITable* $tmp537 = Iter$260$17516->$class->itable;
                                    while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp537 = $tmp537->next;
                                    }
                                    $fn539 $tmp538 = $tmp537->methods[1];
                                    panda$core$Object* $tmp540 = $tmp538(Iter$260$17516);
                                    $tmp536 = $tmp540;
                                    $tmp535 = ((panda$io$File*) $tmp536);
                                    s534 = $tmp535;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp535));
                                    panda$core$Panda$unref$panda$core$Object($tmp536);
                                    org$pandalanguage$pandac$Compiler$compile$panda$io$File(compiler446, s534);
                                }
                                $tmp533 = -1;
                                goto $l531;
                                $l531:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s534));
                                s534 = NULL;
                                switch ($tmp533) {
                                    case -1: goto $l541;
                                }
                                $l541:;
                            }
                            goto $l523;
                            $l524:;
                        }
                        $tmp515 = -1;
                        goto $l513;
                        $l513:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$260$17516));
                        Iter$260$17516 = NULL;
                        switch ($tmp515) {
                            case -1: goto $l542;
                        }
                        $l542:;
                    }
                    org$pandalanguage$pandac$Compiler$finish(compiler446);
                }
                }
                errorCount408 = compiler446->errorCount;
            }
            $tmp411 = -1;
            goto $l409;
            $l409:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) cg412));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) settings442));
            settings442 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) compiler446));
            compiler446 = NULL;
            switch ($tmp411) {
                case -1: goto $l543;
            }
            $l543:;
        }
        panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount408, ((panda$core$Int64) { 0 }));
        if ($tmp544.value) {
        {
            {
                $match$269_17545 = format187;
                panda$core$Bit $tmp546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$269_17545.value), ((panda$core$Int64) { 918 }));
                if ($tmp546.value) {
                {
                    int $tmp549;
                    {
                        panda$io$File* $tmp555 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile183, &$s554);
                        $tmp553 = $tmp555;
                        panda$io$File* $tmp556 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp553, optimizationLevel185);
                        $tmp552 = $tmp556;
                        $tmp551 = $tmp552;
                        optimized550 = $tmp551;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                        panda$io$File* $tmp560 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized550);
                        $tmp559 = $tmp560;
                        $tmp558 = $tmp559;
                        assembly557 = $tmp558;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp558));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                        panda$io$File* $tmp562 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$R$panda$io$File(self, assembly557, outFile183);
                        $tmp561 = $tmp562;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
                    }
                    $tmp549 = -1;
                    goto $l547;
                    $l547:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized550));
                    optimized550 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly557));
                    assembly557 = NULL;
                    switch ($tmp549) {
                        case -1: goto $l563;
                    }
                    $l563:;
                }
                }
                else {
                panda$core$Bit $tmp564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64) $match$269_17545.value), ((panda$core$Int64) { 919 }));
                if ($tmp564.value) {
                {
                    int $tmp567;
                    {
                        panda$io$File* $tmp573 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(outFile183, &$s572);
                        $tmp571 = $tmp573;
                        panda$io$File* $tmp574 = org$pandalanguage$pandac$Main$optimize$panda$io$File$panda$core$Int64$R$panda$io$File(self, $tmp571, optimizationLevel185);
                        $tmp570 = $tmp574;
                        $tmp569 = $tmp570;
                        optimized568 = $tmp569;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp569));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp570));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
                        panda$io$File* $tmp578 = org$pandalanguage$pandac$Main$toAssembly$panda$io$File$R$panda$io$File(self, optimized568);
                        $tmp577 = $tmp578;
                        $tmp576 = $tmp577;
                        assembly575 = $tmp576;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
                        panda$io$File* $tmp580 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$R$panda$io$File(self, assembly575, outFile183);
                        $tmp579 = $tmp580;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                    }
                    $tmp567 = -1;
                    goto $l565;
                    $l565:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) optimized568));
                    optimized568 = NULL;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) assembly575));
                    assembly575 = NULL;
                    switch ($tmp567) {
                        case -1: goto $l581;
                    }
                    $l581:;
                }
                }
                }
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(errorCount408, ((panda$core$Int64) { 1 }));
            if ($tmp582.value) {
            {
                panda$io$Console$printLine$panda$core$String(&$s583);
            }
            }
            else {
            {
                panda$core$String* $tmp586 = panda$core$Int64$convert$R$panda$core$String(errorCount408);
                $tmp585 = $tmp586;
                panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s587);
                $tmp584 = $tmp588;
                panda$io$Console$printLine$panda$core$String($tmp584);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
            }
            }
            panda$core$System$exit$panda$core$Int64(((panda$core$Int64) { 1 }));
        }
        }
    }
    $tmp170 = -1;
    goto $l168;
    $l168:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) args171));
    args171 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) sources175));
    sources175 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) imports179));
    imports179 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) outFile183));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) err188));
    err188 = NULL;
    switch ($tmp170) {
        case -1: goto $l589;
    }
    $l589:;
}
void pandaMain(panda$collections$ListView* p_args) {
    org$pandalanguage$pandac$Main* $tmp590;
    org$pandalanguage$pandac$Main* $tmp591 = (org$pandalanguage$pandac$Main*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
    org$pandalanguage$pandac$Main$init($tmp591);
    $tmp590 = $tmp591;
    org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp590, p_args);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* self) {
    int $tmp594;
    {
    }
    $tmp594 = -1;
    goto $l592;
    $l592:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp594) {
        case -1: goto $l595;
    }
    $l595:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llvmDir));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->triple));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->opt));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->llc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->gcc));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->pandaHome));
}

